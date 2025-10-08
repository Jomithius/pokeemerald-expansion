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
            .lvl = 55,
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
            .lvl = 55,
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
            .heldItem = ITEM_LIGHT_BALL,
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
                MOVE_NUZZLE,
                MOVE_VOLT_TACKLE,
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 63
            .species = SPECIES_SKELEDIRGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 63
            .heldItem = ITEM_THROAT_SPRAY,
#line 67
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 8, 252),
#line 69
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 64
            .ability = ABILITY_UNAWARE,
#line 65
            .lvl = 95,
#line 68
            .nature = NATURE_CALM,
#line 66
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 70
                MOVE_TORCH_SONG,
                MOVE_HEX,
                MOVE_SLACK_OFF,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 75
            .species = SPECIES_DRAGONITE,
#line 75
            .gender = TRAINER_MON_MALE,
#line 75
            .heldItem = ITEM_DRAGONITEITE,
#line 79
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
#line 80
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 76
            .ability = ABILITY_MULTISCALE,
#line 77
            .lvl = 95,
            .nature = NATURE_HARDY,
#line 78
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 80
                MOVE_BREAKING_SWIPE,
                MOVE_ROCK_SLIDE,
                MOVE_EXTREME_SPEED,
                MOVE_DUAL_WINGBEAT,
            },
            },
        },
    },
#line 85
#line 91
    [DIFFICULTY_EASY][PARTNER_MOMO] =
    {
#line 86
        .trainerName = _("MOMO"),
#line 87
        .trainerClass = TRAINER_CLASS_NINJA,
#line 88
        .trainerPic = TRAINER_BACK_PIC_MOMO,
        .encounterMusic_gender =
#line 89
F_TRAINER_FEMALE | 
#line 90
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 93
            .species = SPECIES_PIKACHU,
#line 93
            .gender = TRAINER_MON_FEMALE,
#line 93
            .heldItem = ITEM_MIRROR_HERB,
#line 96
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
#line 98
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 94
            .ability = ABILITY_STATIC,
#line 95
            .lvl = 100,
#line 97
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 98
                MOVE_VOLT_TACKLE,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 101
            .species = SPECIES_SKELEDIRGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 101
            .heldItem = ITEM_THROAT_SPRAY,
#line 105
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 8, 252),
#line 107
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 102
            .ability = ABILITY_UNAWARE,
#line 103
            .lvl = 100,
#line 106
            .nature = NATURE_CALM,
#line 104
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 108
                MOVE_TORCH_SONG,
                MOVE_HEX,
                MOVE_SLACK_OFF,
                MOVE_YAWN,
            },
            },
            {
#line 113
            .species = SPECIES_DRAGONITE,
#line 113
            .gender = TRAINER_MON_MALE,
#line 113
            .heldItem = ITEM_DRAGONITEITE,
#line 117
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
#line 118
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 114
            .ability = ABILITY_MULTISCALE,
#line 115
            .lvl = 100,
            .nature = NATURE_HARDY,
#line 116
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 118
                MOVE_BREAKING_SWIPE,
                MOVE_ROCK_SLIDE,
                MOVE_EXTREME_SPEED,
                MOVE_DUAL_WINGBEAT,
            },
            },
        },
    },
