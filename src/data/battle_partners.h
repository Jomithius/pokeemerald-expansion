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
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 19
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 18
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 17
            .lvl = 42,
#line 16
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 20
                MOVE_LIGHT_SCREEN,
                MOVE_ZEN_HEADBUTT,
                MOVE_REFLECT,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 25
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 29
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 28
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 27
            .lvl = 43,
#line 26
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 30
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 35
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 39
            .ev = TRAINER_PARTY_EVS(0, 252, 6, 0, 0, 252),
#line 38
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 37
            .lvl = 44,
#line 36
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 40
                MOVE_IRON_HEAD,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
                MOVE_BULLDOZE,
            },
            },
        },
    },
#line 45
    [DIFFICULTY_NORMAL][PARTNER_MOMO] =
    {
#line 46
        .trainerName = _("MOMO"),
#line 47
        .trainerClass = TRAINER_CLASS_NINJA,
#line 48
        .trainerPic = TRAINER_BACK_PIC_MOMO,
        .encounterMusic_gender =
#line 49
F_TRAINER_FEMALE | 
#line 50
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 52
            .species = SPECIES_GRENINJA_BOND,
#line 52
            .gender = TRAINER_MON_MALE,
#line 52
            .heldItem = ITEM_ASSAULT_VEST,
#line 54
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
#line 57
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 53
            .ability = ABILITY_BATTLE_BOND,
#line 56
            .lvl = 100,
#line 55
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 57
                MOVE_WATER_SHURIKEN,
                MOVE_ICY_WIND,
                MOVE_DARK_PULSE,
                MOVE_SLUDGE_WAVE,
            },
            },
            {
#line 62
            .species = SPECIES_SKELEDIRGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 62
            .heldItem = ITEM_THROAT_SPRAY,
#line 67
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 8, 252),
#line 69
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 63
            .ability = ABILITY_UNAWARE,
#line 65
            .lvl = 100,
#line 68
            .nature = NATURE_CALM,
#line 66
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 64
            .teraType = TYPE_FAIRY,
            .moves = {
#line 70
                MOVE_TORCH_SONG,
                MOVE_HEX,
                MOVE_OMINOUS_WIND,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 75
            .species = SPECIES_KROOKODILE,
#line 75
            .gender = TRAINER_MON_MALE,
#line 75
            .heldItem = ITEM_LEFTOVERS,
#line 80
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 76
            .ability = ABILITY_INTIMIDATE,
#line 78
            .lvl = 100,
            .nature = NATURE_HARDY,
#line 79
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 77
            .teraType = TYPE_GROUND,
            .moves = {
#line 80
                MOVE_BREAKING_SWIPE,
                MOVE_ROCK_SLIDE,
                MOVE_DARKEST_LARIAT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
