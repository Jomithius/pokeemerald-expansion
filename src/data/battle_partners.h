//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/battle_partners.h' to remove #line markers.
//

#line 1 "src/data/battle_partners.party"

#line 1
    [DIFFICULTY_NORMAL][PARTNER_NONE] =
    {
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 8
    [DIFFICULTY_NORMAL][PARTNER_STEVEN] =
    {
#line 9
        .trainerName = _("STEVEN"),
#line 10
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .encounterMusic_gender =
#line 13
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 15
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 15
            .heldItem = ITEM_METAL_COAT,
#line 19
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 18
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 17
            .lvl = 51,
#line 16
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 20
                MOVE_LIGHT_SCREEN,
                MOVE_ZEN_HEADBUTT,
                MOVE_REFLECT,
                MOVE_METEOR_MASH,
            },
            },
            {
#line 25
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 25
            .heldItem = ITEM_ROCKY_HELMET,
#line 29
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 28
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 27
            .lvl = 51,
#line 26
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 30
                MOVE_TOXIC,
                MOVE_AIR_SLASH,
                MOVE_PROTECT,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 35
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 35
            .heldItem = ITEM_HARD_STONE,
#line 40
            .ev = TRAINER_PARTY_EVS(0, 252, 6, 0, 0, 252),
#line 39
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 36
            .ability = ABILITY_HEAVY_METAL,
#line 38
            .lvl = 51,
#line 37
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 41
                MOVE_HEAVY_SLAM,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
                MOVE_BODY_PRESS,
            },
            },
        },
    },
#line 46
    [DIFFICULTY_NORMAL][PARTNER_MOMO] =
    {
#line 47
        .trainerName = _("MOMO"),
#line 48
        .trainerClass = TRAINER_CLASS_NINJA,
#line 49
        .trainerPic = TRAINER_BACK_PIC_MOMO,
        .encounterMusic_gender =
#line 50
F_TRAINER_FEMALE | 
#line 51
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 53
            .species = SPECIES_GRENINJA_BOND,
#line 53
            .gender = TRAINER_MON_MALE,
#line 53
            .heldItem = ITEM_ASSAULT_VEST,
#line 55
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
#line 58
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 54
            .ability = ABILITY_BATTLE_BOND,
#line 57
            .lvl = 90,
#line 56
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 58
                MOVE_WATER_SHURIKEN,
                MOVE_ICY_WIND,
                MOVE_DARK_PULSE,
                MOVE_SLUDGE_WAVE,
            },
            },
            {
#line 63
            .species = SPECIES_SKELEDIRGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 63
            .heldItem = ITEM_THROAT_SPRAY,
#line 68
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 8, 252),
#line 70
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 64
            .ability = ABILITY_UNAWARE,
#line 66
            .lvl = 90,
#line 69
            .nature = NATURE_CALM,
#line 67
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 65
            .teraType = TYPE_FAIRY,
            .moves = {
#line 71
                MOVE_TORCH_SONG,
                MOVE_HEX,
                MOVE_OMINOUS_WIND,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 76
            .species = SPECIES_KROOKODILE,
#line 76
            .gender = TRAINER_MON_MALE,
#line 76
            .heldItem = ITEM_LEFTOVERS,
#line 81
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 77
            .ability = ABILITY_INTIMIDATE,
#line 79
            .lvl = 90,
            .nature = NATURE_HARDY,
#line 80
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 78
            .teraType = TYPE_GROUND,
            .moves = {
#line 81
                MOVE_BREAKING_SWIPE,
                MOVE_ROCK_SLIDE,
                MOVE_DARKEST_LARIAT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
