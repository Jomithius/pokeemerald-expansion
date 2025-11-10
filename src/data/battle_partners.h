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
            .heldItem = ITEM_COLBUR_BERRY,
#line 19
            .ev = TRAINER_PARTY_EVS(252, 252, 6, 0, 0, 0),
#line 18
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 17
            .lvl = 55,
#line 16
            .nature = NATURE_ADAMANT,
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
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
#line 28
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 27
            .lvl = 55,
#line 26
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 30
                MOVE_ROOST,
                MOVE_BRAVE_BIRD,
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
            .lvl = 55,
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
            .species = SPECIES_PIKACHU,
#line 53
            .gender = TRAINER_MON_FEMALE,
#line 53
            .heldItem = ITEM_MIRROR_HERB,
#line 56
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
#line 58
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 54
            .ability = ABILITY_STATIC,
#line 55
            .lvl = 95,
#line 57
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 58
                MOVE_VOLT_TACKLE,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 61
            .species = SPECIES_SKELEDIRGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 61
            .heldItem = ITEM_ASSAULT_VEST,
#line 65
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 140, 116),
#line 67
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 62
            .ability = ABILITY_UNAWARE,
#line 63
            .lvl = 95,
#line 66
            .nature = NATURE_MODEST,
#line 64
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 68
                MOVE_TORCH_SONG,
                MOVE_ALLURING_VOICE,
                MOVE_HEAT_WAVE,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 73
            .species = SPECIES_DRAGONITE,
#line 73
            .gender = TRAINER_MON_MALE,
#line 73
            .heldItem = ITEM_DRAGONITEITE,
#line 77
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
#line 79
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 74
            .ability = ABILITY_MULTISCALE,
#line 75
            .lvl = 100,
#line 78
            .nature = NATURE_TIMID,
#line 76
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 79
                MOVE_DRACO_METEOR,
                MOVE_AIR_SLASH,
                MOVE_ICY_WIND,
                MOVE_HEAT_WAVE,
            },
            },
        },
    },
#line 84
#line 90
    [DIFFICULTY_EASY][PARTNER_MOMO] =
    {
#line 85
        .trainerName = _("MOMO"),
#line 86
        .trainerClass = TRAINER_CLASS_NINJA,
#line 87
        .trainerPic = TRAINER_BACK_PIC_MOMO,
        .encounterMusic_gender =
#line 88
F_TRAINER_FEMALE | 
#line 89
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 92
            .species = SPECIES_PIKACHU,
#line 92
            .gender = TRAINER_MON_FEMALE,
#line 92
            .heldItem = ITEM_MIRROR_HERB,
#line 95
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
#line 97
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 93
            .ability = ABILITY_STATIC,
#line 94
            .lvl = 100,
#line 96
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 97
                MOVE_VOLT_TACKLE,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 100
            .species = SPECIES_SKELEDIRGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 100
            .heldItem = ITEM_ASSAULT_VEST,
#line 104
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 140, 116),
#line 106
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 101
            .ability = ABILITY_UNAWARE,
#line 107
            .lvl = 100,
#line 105
            .nature = NATURE_MODEST,
#line 102
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 103
            .teraType = TYPE_FIRE,
            .moves = {
#line 107
                MOVE_TORCH_SONG,
                MOVE_ALLURING_VOICE,
                MOVE_HEAT_WAVE,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 112
            .species = SPECIES_DRAGONITE,
#line 112
            .gender = TRAINER_MON_MALE,
#line 112
            .heldItem = ITEM_DRAGONITEITE,
#line 116
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
#line 118
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 113
            .ability = ABILITY_MULTISCALE,
#line 114
            .lvl = 100,
#line 117
            .nature = NATURE_TIMID,
#line 115
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 118
                MOVE_DRACO_METEOR,
                MOVE_AIR_SLASH,
                MOVE_ICY_WIND,
                MOVE_HEAT_WAVE,
            },
            },
        },
    },
