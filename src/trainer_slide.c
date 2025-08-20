#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "battle_message.h"
#include "battle_setup.h"
#include "battle_tower.h"
#include "battle_z_move.h"
#include "data.h"
#include "event_data.h"
#include "frontier_util.h"
#include "graphics.h"
#include "international_string_util.h"
#include "item.h"
#include "link.h"
#include "menu.h"
#include "palette.h"
#include "recorded_battle.h"
#include "string_util.h"
#include "strings.h"
#include "test_runner.h"
#include "text.h"
#include "trainer_hill.h"
#include "window.h"
#include "line_break.h"
#include "constants/abilities.h"
#include "constants/battle_dome.h"
#include "constants/battle_string_ids.h"
#include "constants/frontier_util.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/opponents.h"
#include "constants/species.h"
#include "constants/trainers.h"
#include "constants/trainer_hill.h"
#include "constants/weather.h"
#include "trainer_slide.h"
#include "battle_message.h"

static u32 BattlerHPPercentage(u32 battler, u32 operation, u32 threshold);
static u32 GetEnemyMonCount(u32 firstId, u32 lastId, bool32 onlyAlive);
static bool32 DoesTrainerHaveSlideMessage(enum DifficultyLevel difficulty, u32 trainerId, u32 slideId);
static bool32 ShouldRunTrainerSlidePlayerLandsFirstCriticalHit(enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlideEnemyLandsFirstCriticalHit(enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlidePlayerLandsFirstSuperEffectiveHit(u32 battler, enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlidePlayerLandsFirstSTABMove(u32 firstId, u32 lastId, enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlidePlayerLandsFirstDown(u32 firstId, u32 lastId);
static bool32 ShouldRunTrainerSlideEnemyMonUnaffected(u32 firstId, u32 lastId, enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlideLastSwitchIn(u32 battler);
static bool32 ShouldRunTrainerSlideLastHalfHP(u32 firstId, u32 lastId, u32 battler);
static bool32 ShouldRunTrainerSlideLastLowHp(u32 firstId, u32 lastId, u32 battler);
static void SetTrainerSlideParamters(u32 battler, u32* firstId, u32* lastId, u32* trainerId, u32* retValue);
static bool32 IsSlideInitalizedOrPlayed(enum TrainerSlideType slideId);

static const u8* const sTrainerSlides[DIFFICULTY_COUNT][TRAINERS_COUNT][TRAINER_SLIDE_COUNT] =
{
    [DIFFICULTY_NORMAL] =
    {
        [TRAINER_MAY_ROUTE_103_TORCHIC] = 
        {
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = COMPOUND_STRING("Wow!\nYou know type-effectiveness already?!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_BRENDAN_ROUTE_103_TREECKO] =
        {
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT] = COMPOUND_STRING("You learned type-effectiveness\nalready?{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_JOMITHIUS] =
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Impossible… Has my control over\nthe void weakened?{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_ROXANNE_1] = // Steven
        {
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_STAB_MOVE] = COMPOUND_STRING("Wow! You know what STAB is already?\nThat's sick!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Okay!\nThings are really heating up!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_MAY_RUSTBORO_TORCHIC] =
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Okay, {B_OPPONENT_MON1_NAME}!\n We haven't lost yet!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_BRENDAN_RUSTBORO_TREECKO] =
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("You're this strong already?{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_BRAWLY_1] = // Liam
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("I may be down, but not out!\nLet's do this, POOBLES!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_MAY_ROUTE_110_TORCHIC] =
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Eheheh…\nI might lose again!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_BRENDAN_ROUTE_110_TREECKO] =
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("I might lose again?{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_WATTSON_1] = // Daca
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Hahaha!\nNow it's really a party!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_JOMITHIUS_2] = // Jomithius Route 112
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("This is the moment where I reveal\nmy true power!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_FLANNERY_1] = // Kai
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Wow!\nI'm in HELL'S KITCHEN!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_NORMAN_1] = // Luna
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("I can't lose…\nLosing is cringe.{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_MAY_ROUTE_119_TORCHIC] =
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Wow {B_PLAYER_NAME}!\nYou're stronger than ever!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_BRENDAN_ROUTE_119_TREECKO] =
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("You're stronger than ever!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_WINONA_1] = // Mickey
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("I'm down to my last dog!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_JOMITHIUS_3] = // Jomithius Mt Pyre
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("I still haven't lost yet!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_MAY_LILYCOVE_TORCHIC] =
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Okay, {B_OPPONENT_MON1_NAME}!\nIt's up to you!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_BRENDAN_LILYCOVE_TREECKO] =
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Dang… Is this it?{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_TATE_AND_LIZA_1] = // Momo & Aria
        {
            [TRAINER_SLIDE_LAST_HALF_HP] = COMPOUND_STRING("ARIA: Ah! Impossible!\nMOMO: …{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_JUAN_1] = // Joey
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Yeheeaaaaaaaaaaaah!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_JOMITHIUS_4] = // James
        {
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = COMPOUND_STRING("{B_PLAYER_NAME}…\nI respect your strength.\pThat's why we're not going to hold\nanything back.{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("Okay, TYPHLOSION!\nShow {B_PLAYER_NAME} your new strength!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_ROXANNE_2] = // Steven
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("Haha!\nWe're getting fired up now!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_BRAWLY_2] = // Liam
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("All right, POOBS!\nTime to show your true power!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_WATTSON_2] = // Daca
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("Hahaha!\nIt's time to party!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_FLANNERY_2] = // Kai
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("Okay, LUME!\nLet's cook!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_NORMAN_2] = // Luna
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("Okay, LOPUNNY.\nJust uh, MEGA EVOLVE or something.{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_WINONA_2] = // Mickey
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("It's time to let the dogs out!\nAWOOOOOOOOOOOO!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_MOMO] = // Momo
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("Oho. I'm gettin' good vibrations from\nthis place.{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_SHADOW_CLONE_MOMO] = // Momo
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("………………\nMeow.{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_ARIA] = // Aria
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("Bear witness to the power of the\nSACRED BLADE!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_JUAN_2] = // Joey
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("Yeheheeeaaaaaaaaaaaaaaaah!\nYAH YEEEET!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_SIDNEY] = // Misa
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("Okay, AUDINO!\nIt's time to S-MOTHER!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_MISA_2] = // Misa
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("Okay, AUDINO!\nThis time we'll S-MOTHER them!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_PHOEBE] = // Lina
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("LUXIFER!\nTake care of this so I can go read!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_LINA] = // Lina
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("LUXIFER!\nGet this over with! Hmph!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_EUGENIA] = // Eugenia
        {
            [TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("Hmph!\nThat's karma, you little rat!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("SHENRON!\nMake them pay!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Hmph!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_GLACIA] = // Xion
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("MEGANIUM!\nMatch my freak!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_XION] = // Xion
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("MEGANIUM!\nMatch my freak!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_DRAKE] = // Dave
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("Please lose now, okay?{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_DAVE] = // Dave
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("BOBSON DUGNUTT, please make them lose.\nThank.{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_WALLACE] = // Jimmy
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("You've done well so far…\nBut are you ready for this?{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_JIMMY] = // Jimmy
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("TYPHLOSION!\nShow them the power of a CEO!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("This is it, {B_PLAYER_NAME}!\nI'll show you the power of the void!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_BRUNO] = // Bruno
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("Hm.\nI feel like I can go all out!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_RATDUARDO_FULLMOON_ISLAND] = // Ratduardo
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("Help… Please… Help me…{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_RATDUARDO_NEWMOON_ISLAND] = // Ratduardo
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("Help… Can't escape…{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_CHANNELER_NEWMOON_ISLAND] = // Nightmare
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("{B_PLAYER_NAME}!\nYOU WILL NEVER ESCAPE…{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_BENNIS_4] = // Bennis
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("Oho.\nThese are some nice vibrations.{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_RED] = // Red
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("…{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_CYNTHIA] = // Cynthia
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("My heart is still racing, even now…\nWhat are you?{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_STEVEN] = // Steven
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("All right!\nMy POKéMON are ROCK HARD!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_WALLY_VR_2] = // Wally
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("That's it, GARDEVOIR!\nGo!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_BRENDAN_AZURE_MOUNTAIN] = // Up5
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("Let's go, SCEPTILE!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_MAY_AZURE_MOUNTAIN] = // Up5
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("I bet this will surprise you, {B_PLAYER_NAME}!\nLet's go, BLAZIKEN!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_MAE_3] = // wachun
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("YASSSS, PIDGEOT! SLAAAYYYYY!\nPERIODDDT!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_SPEEDWAGON_3] = // wachun
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("You can't stop the\nMISSISSWUAGWA RIDERS!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_WHITNEY] = // Route135
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("Okay, MILTANK!\nShow 'em how it's done!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_JAMES_FINAL] = // James
        {
            [TRAINER_SLIDE_MEGA_EVOLUTION] = COMPOUND_STRING("Okay, TYPHLOSION!\nWe're going all out from the start!{PAUSE_UNTIL_PRESS}"),
        },
    },
};

static const u8* const sFrontierTrainerSlides[DIFFICULTY_COUNT][FRONTIER_TRAINERS_COUNT][TRAINER_SLIDE_COUNT] =
{
    [DIFFICULTY_NORMAL] =
    {
    },
};

static const u8* const sTestTrainerSlides[DIFFICULTY_COUNT][TRAINERS_COUNT][TRAINER_SLIDE_COUNT] =
{
#include "../test/battle/trainer_slides.h"
};

static u32 BattlerHPPercentage(u32 battler, u32 operation, u32 threshold)
{
    switch (operation)
    {
        case LESS_THAN:
            return gBattleMons[battler].hp < (gBattleMons[battler].maxHP / threshold);
        case EQUAL:
            return gBattleMons[battler].hp == (gBattleMons[battler].maxHP / threshold);
        case GREATER_THAN:
            return gBattleMons[battler].hp > (gBattleMons[battler].maxHP / threshold);
        case LESS_THAN_OR_EQUAL:
            return gBattleMons[battler].hp <= (gBattleMons[battler].maxHP / threshold);
        case GREATER_THAN_OR_EQUAL:
            return gBattleMons[battler].hp >= (gBattleMons[battler].maxHP / threshold);
        case NOT_EQUAL:
        default:
            return gBattleMons[battler].hp != (gBattleMons[battler].maxHP / threshold);
    }
}

static u32 GetEnemyMonCount(u32 firstId, u32 lastId, bool32 onlyAlive)
{
    u32 i, count = 0;

    for (i = firstId; i < lastId; i++)
    {
        u32 species = GetMonData(&gEnemyParty[i], MON_DATA_SPECIES_OR_EGG, NULL);
        if (species != SPECIES_NONE
                && species != SPECIES_EGG
                && (!onlyAlive || GetMonData(&gEnemyParty[i], MON_DATA_HP, NULL)))
            count++;
    }

    return count;
}

static const u8* const *GetTrainerSlideArray(enum DifficultyLevel difficulty, u32 trainerId, u32 slideId)
{
    if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
        return sFrontierTrainerSlides[difficulty][trainerId];
    else if (TESTING)
        return sTestTrainerSlides[difficulty][trainerId];
    else
        return sTrainerSlides[difficulty][trainerId];
}

static bool32 DoesTrainerHaveSlideMessage(enum DifficultyLevel difficulty, u32 trainerId, u32 slideId)
{
    const u8* const *trainerSlides = GetTrainerSlideArray(difficulty, trainerId, slideId);
    const u8* const *trainerSlidesNormal = GetTrainerSlideArray(DIFFICULTY_NORMAL, trainerId, slideId);

    if (trainerSlides[slideId] == NULL)
        return (trainerSlidesNormal[slideId] != NULL);
    else
        return TRUE;
}

void SetTrainerSlideMessage(enum DifficultyLevel difficulty, u32 trainerId, u32 slideId)
{
    const u8* const *trainerSlides = GetTrainerSlideArray(difficulty, trainerId, slideId);
    const u8* const *trainerSlidesNormal = GetTrainerSlideArray(DIFFICULTY_NORMAL, trainerId, slideId);

    if (trainerSlides[slideId] != NULL)
        gBattleStruct->trainerSlideMsg = trainerSlides[slideId];
    else
        gBattleStruct->trainerSlideMsg = trainerSlidesNormal[slideId];
}

static bool32 ShouldRunTrainerSlidePlayerLandsFirstCriticalHit(enum TrainerSlideType slideId)
{
    return IsTrainerSlideInitialized(slideId);
}

static bool32 ShouldRunTrainerSlideEnemyLandsFirstCriticalHit(enum TrainerSlideType slideId)
{
    return IsTrainerSlideInitialized(slideId);
}

static bool32 ShouldRunTrainerSlidePlayerLandsFirstSuperEffectiveHit(u32 battler, enum TrainerSlideType slideId)
{
    if (!IsTrainerSlideInitialized(slideId))
        return FALSE;

    if (!IsBattlerAlive(battler))
        return FALSE;

    return TRUE;
}

static bool32 ShouldRunTrainerSlidePlayerLandsFirstSTABMove(u32 firstId, u32 lastId, enum TrainerSlideType slideId)
{
    if (!IsTrainerSlideInitialized(slideId))
        return FALSE;

    if (GetEnemyMonCount(firstId, lastId, TRUE) != GetEnemyMonCount(firstId, lastId, FALSE))
        return FALSE;

    return TRUE;
}

static bool32 ShouldRunTrainerSlidePlayerLandsFirstDown(u32 firstId, u32 lastId)
{
    return ((GetEnemyMonCount(firstId, lastId, TRUE) == (GetEnemyMonCount(firstId, lastId, FALSE) - 1)));
}

static bool32 ShouldRunTrainerSlideEnemyMonUnaffected(u32 firstId, u32 lastId, enum TrainerSlideType slideId)
{
    if (!IsTrainerSlideInitialized(slideId))
        return FALSE;

    return (GetEnemyMonCount(firstId, lastId, TRUE) == GetEnemyMonCount(firstId, lastId, FALSE));
}

static bool32 ShouldRunTrainerSlideLastSwitchIn(u32 battler)
{
    return !CanBattlerSwitch(battler);
}

static bool32 ShouldRunTrainerSlideLastHalfHP(u32 firstId, u32 lastId, u32 battler)
{
    if (GetEnemyMonCount(firstId, lastId, TRUE) != 1)
        return FALSE;

    if (BattlerHPPercentage(battler, GREATER_THAN, 2))
        return FALSE;

    return (BattlerHPPercentage(battler, GREATER_THAN, 4));
}

static bool32 ShouldRunTrainerSlideLastLowHp(u32 firstId, u32 lastId, u32 battler)
{
    if (GetEnemyMonCount(firstId, lastId, TRUE) != 1)
        return FALSE;

    return (BattlerHPPercentage(battler, LESS_THAN_OR_EQUAL, 4));
}

static void SetTrainerSlideParamters(u32 battler, u32* firstId, u32* lastId, u32* trainerId, u32* retValue)
{
    if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
    {
        if (gBattlerPartyIndexes[battler] >= MULTI_PARTY_SIZE)
        {
            *firstId = MULTI_PARTY_SIZE;
            *lastId = PARTY_SIZE;
            *trainerId = SanitizeTrainerId(TRAINER_BATTLE_PARAM.opponentB);
            *retValue = TRAINER_SLIDE_TARGET_TRAINER_B;
        }
        else
        {
            *firstId = 0;
            *lastId = MULTI_PARTY_SIZE;
            *trainerId = SanitizeTrainerId(TRAINER_BATTLE_PARAM.opponentA);
        }
    }
    else
    {
        *firstId = 0;
        *lastId = PARTY_SIZE;
        *trainerId = SanitizeTrainerId(TRAINER_BATTLE_PARAM.opponentA);
    }
}

enum TrainerSlideTargets ShouldDoTrainerSlide(u32 battler, enum TrainerSlideType slideId)
{
    u32 firstId, lastId, trainerId;
    u32 retValue = TRAINER_SLIDE_TARGET_TRAINER_A;
    bool32 shouldRun = FALSE;

    if (!(gBattleTypeFlags & BATTLE_TYPE_TRAINER) || GetBattlerSide(battler) != B_SIDE_OPPONENT)
        return TRAINER_SLIDE_TARGET_NONE;

    SetTrainerSlideParamters(battler, &firstId, &lastId, &trainerId, &retValue);
    enum DifficultyLevel difficulty = GetCurrentDifficultyLevel();

    gBattleScripting.battler = battler;

    if (IsTrainerSlidePlayed(slideId))
        return TRAINER_SLIDE_TARGET_NONE;

    if (!DoesTrainerHaveSlideMessage(difficulty,trainerId,slideId))
        return TRAINER_SLIDE_TARGET_NONE;

    switch (slideId)
    {
        case TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT:
            shouldRun = ShouldRunTrainerSlidePlayerLandsFirstCriticalHit(slideId);
            break;
        case TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT:
            shouldRun = ShouldRunTrainerSlideEnemyLandsFirstCriticalHit(slideId);
            break;
        case TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT:
            shouldRun = ShouldRunTrainerSlidePlayerLandsFirstSuperEffectiveHit(battler, slideId);
            break;
        case TRAINER_SLIDE_PLAYER_LANDS_FIRST_STAB_MOVE:
            shouldRun = ShouldRunTrainerSlidePlayerLandsFirstSTABMove(firstId, lastId, slideId);
            break;
        case TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN:
            shouldRun = ShouldRunTrainerSlidePlayerLandsFirstDown(firstId, lastId);
            break;
        case TRAINER_SLIDE_ENEMY_MON_UNAFFECTED:
            shouldRun = ShouldRunTrainerSlideEnemyMonUnaffected(firstId, lastId, slideId);
            break;
        case TRAINER_SLIDE_LAST_SWITCHIN:
            shouldRun = ShouldRunTrainerSlideLastSwitchIn(battler);
            break;
        case TRAINER_SLIDE_LAST_HALF_HP:
            shouldRun = ShouldRunTrainerSlideLastHalfHP(firstId, lastId, battler);
            break;
        case TRAINER_SLIDE_LAST_LOW_HP:
            shouldRun = ShouldRunTrainerSlideLastLowHp(firstId, lastId, battler);
            break;
        case TRAINER_SLIDE_BEFORE_FIRST_TURN:
        case TRAINER_SLIDE_MEGA_EVOLUTION:
        case TRAINER_SLIDE_Z_MOVE:
        case TRAINER_SLIDE_DYNAMAX:
            shouldRun = TRUE;
            break;
        default:
            return TRAINER_SLIDE_TARGET_NONE;
    }

    if (shouldRun == FALSE)
        return TRAINER_SLIDE_TARGET_NONE;

    MarkTrainerSlideAsPlayed(slideId);
    SetTrainerSlideMessage(difficulty,trainerId,slideId);
    return retValue;
}

static bool32 IsSlideInitalizedOrPlayed(enum TrainerSlideType slideId)
{
    if (IsTrainerSlideInitialized(slideId))
        return TRUE;

    if (IsTrainerSlidePlayed(slideId))
        return TRUE;

    return FALSE;
}

void TryInitializeFirstSTABMoveTrainerSlide(u32 battlerDef, u32 battlerAtk, u32 moveType)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_PLAYER_LANDS_FIRST_STAB_MOVE;

    if (IsSlideInitalizedOrPlayed(slideId))
        return;

    if ((GetBattlerSide(battlerDef) == B_SIDE_PLAYER))
        return;

    if (IS_BATTLER_OF_TYPE(battlerAtk, moveType) == FALSE)
        return;

    InitalizeTrainerSlide(slideId);
}

void TryInitializeTrainerSlidePlayerLandsFirstCriticalHit(u32 target)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT;

    if (IsSlideInitalizedOrPlayed(slideId))
        return;

    if (GetBattlerSide(target) == B_SIDE_PLAYER)
        return;

    InitalizeTrainerSlide(slideId);
}

void TryInitializeTrainerSlideEnemyLandsFirstCriticalHit(u32 target)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT;

    if (IsSlideInitalizedOrPlayed(slideId))
        return;

    if (GetBattlerSide(target) == B_SIDE_OPPONENT)
        return;

    InitalizeTrainerSlide(slideId);
}

void TryInitializeTrainerSlidePlayerLandsFirstSuperEffectiveHit(u32 target)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT;

    if (IsSlideInitalizedOrPlayed(slideId))
        return;

    if (GetBattlerSide(target) == B_SIDE_PLAYER)
        return;

    InitalizeTrainerSlide(slideId);
}

void TryInitializeTrainerSlideEnemyMonUnaffected(u32 target)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_ENEMY_MON_UNAFFECTED;

    if (IsSlideInitalizedOrPlayed(slideId))
        return;

    if (GetBattlerSide(target) != B_SIDE_OPPONENT)
        return;

    InitalizeTrainerSlide(slideId);
}

bool32 IsTrainerSlideInitialized(enum TrainerSlideType slideId)
{
    u32 arrayIndex = slideId / TRAINER_SLIDES_PER_ARRAY;
    u32 bitPosition = slideId % TRAINER_SLIDES_PER_ARRAY;

    return (gBattleStruct->slideMessageStatus.messageInitalized[arrayIndex] & (1 << bitPosition)) != 0;
}

bool32 IsTrainerSlidePlayed(enum TrainerSlideType slideId)
{
    u32 arrayIndex = slideId / TRAINER_SLIDES_PER_ARRAY;
    u32 bitPosition = slideId % TRAINER_SLIDES_PER_ARRAY;

    return (gBattleStruct->slideMessageStatus.messagePlayed[arrayIndex] & (1 << bitPosition)) != 0;
}

void InitalizeTrainerSlide(enum TrainerSlideType slideId)
{
    u32 arrayIndex = slideId / TRAINER_SLIDES_PER_ARRAY;
    u32 bitPosition = slideId % TRAINER_SLIDES_PER_ARRAY;

    gBattleStruct->slideMessageStatus.messageInitalized[arrayIndex] |= (1 << bitPosition);
}

void MarkTrainerSlideAsPlayed(enum TrainerSlideType slideId)
{
    u32 arrayIndex = slideId / TRAINER_SLIDES_PER_ARRAY;
    u32 bitPosition = slideId % TRAINER_SLIDES_PER_ARRAY;

    gBattleStruct->slideMessageStatus.messagePlayed[arrayIndex] |= (1 << bitPosition);
}
