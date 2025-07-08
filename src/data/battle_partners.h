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
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
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
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 38
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 37
            .lvl = 44,
#line 36
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 40
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
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
        .trainerClass = TRAINER_CLASS_RIVAL,
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
            .species = SPECIES_POLIWRATH,
#line 52
            .gender = TRAINER_MON_MALE,
#line 52
            .heldItem = ITEM_BLUNDER_POLICY,
#line 55
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
#line 57
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 53
            .ability = ABILITY_SWIFT_SWIM,
#line 54
            .lvl = 100,
#line 56
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 57
                MOVE_SUBSTITUTE,
                MOVE_DYNAMIC_PUNCH,
                MOVE_BULK_UP,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 62
            .species = SPECIES_GRENINJA,
#line 62
            .gender = TRAINER_MON_MALE,
#line 62
            .heldItem = ITEM_LIFE_ORB,
#line 66
            .ev = TRAINER_PARTY_EVS(84, 0, 28, 140, 252, 4),
#line 68
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 63
            .ability = ABILITY_PROTEAN,
#line 64
            .lvl = 100,
#line 65
            .friendship = 0,
#line 67
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 69
                MOVE_WATER_SHURIKEN,
                MOVE_DARK_PULSE,
                MOVE_GRASS_KNOT,
                MOVE_BLIZZARD,
            },
            },
            {
#line 74
            .species = SPECIES_RAICHU,
#line 74
            .gender = TRAINER_MON_FEMALE,
#line 74
            .heldItem = ITEM_AIR_BALLOON,
#line 77
            .ev = TRAINER_PARTY_EVS(8, 0, 0, 244, 252, 0),
#line 79
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 75
            .ability = ABILITY_LIGHTNING_ROD,
#line 76
            .lvl = 100,
#line 78
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 79
                MOVE_NASTY_PLOT,
                MOVE_DISCHARGE,
                MOVE_FAKE_OUT,
                MOVE_SURF,
            },
            },
        },
    },
