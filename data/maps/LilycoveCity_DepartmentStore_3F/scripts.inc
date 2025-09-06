# 1 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_MapScripts::
# 2 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.byte 0
# 3 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 4 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft::
# 5 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 6 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 7 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message LilycoveCity_DepartmentStore_3F_GetYourMints
# 8 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 9 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_Mints
# 10 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 11 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 12 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 13 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 14 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.align 2
# 15 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_Mints:
# 16 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_LONELY_MINT 
# 17 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ADAMANT_MINT 
# 18 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT 
# 19 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_BRAVE_MINT 
# 20 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_BOLD_MINT 
# 21 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_IMPISH_MINT 
# 22 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_LAX_MINT 
# 23 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_RELAXED_MINT 
# 24 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MODEST_MINT 
# 25 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MILD_MINT 
# 26 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_RASH_MINT 
# 27 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_QUIET_MINT 
# 28 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CALM_MINT 
# 29 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GENTLE_MINT 
# 30 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CAREFUL_MINT 
# 31 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SASSY_MINT 
# 32 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_TIMID_MINT 
# 33 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_HASTY_MINT 
# 34 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_JOLLY_MINT 
# 35 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NAIVE_MINT 
# 36 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 37 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemartlistend
# 38 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 39 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight::
# 40 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 41 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 42 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message LilycoveCity_DepartmentStore_3F_StatBoosters
# 43 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 44 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters
# 45 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 46 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 47 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 48 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 49 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.align 2
# 50 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters:
# 51 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 52 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 53 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_SPEED
# 54 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 55 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_ATTACK
# 56 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 57 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 58 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 59 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 60 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemartlistend
# 61 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 62 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkMiddleRight::
# 63 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 64 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 65 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message LilycoveCity_DepartmentStore_3F_ItemsForSpecificPokemon
# 66 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 67 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_PokemonItems
# 68 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 69 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 70 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 71 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 72 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.align 2
# 73 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_PokemonItems:
# 74 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_LIGHT_BALL
# 75 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_LEEK 
# 76 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_THICK_CLUB 
# 77 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_LUCKY_PUNCH 
# 78 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE 
# 79 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH 
# 80 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemartlistend
# 81 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 82 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkFarLeft::
# 83 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 84 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 85 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message LilycoveCity_DepartmentStore_3F_GetYourTypeBoosting
# 86 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 87 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_TypeBoostingItems
# 88 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 89 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 90 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 91 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 92 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.align 2
# 93 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_TypeBoostingItems:
# 94 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 95 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CHARCOAL
# 96 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 97 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MAGNET
# 98 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 99 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 100 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 101 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_POISON_BARB
# 102 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 103 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 104 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 105 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 106 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_HARD_STONE
# 107 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 108 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 109 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 110 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_METAL_COAT
# 111 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemartlistend
# 112 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 113 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 114 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_TriathleteM::
# 115 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon, MSGBOX_NPC
# 116 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 117 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 118 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_PokefanM::
# 119 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance, MSGBOX_NPC
# 120 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 121 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 122 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_Woman::
# 123 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon, MSGBOX_NPC
# 124 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 125 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 126 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon:
# 127 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "For quickly toughening up POKéMON,\n"
# 128 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "items are the best.\p"
# 129 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "A POKéMON with a good item can\n"
# 130 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "make or break a battle.$"
# 131 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 132 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance:
# 133 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I want my POKéMON to have more\n"
# 134 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "endurance.\p"
# 135 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I'm trying to decide whether to raise\n"
# 136 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "DEFENSE or SP. DEF.$"
# 137 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 138 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon:
# 139 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I gave a CHOICE SCARF to my POKéMON,\n"
# 140 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "and its SPEED went up.$"

LilycoveCity_DepartmentStore_3F_GetYourTypeBoosting::
# 143 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "Welcome!\pGet your TYPE boosting items here!$"

LilycoveCity_DepartmentStore_3F_ItemsForSpecificPokemon::
# 147 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "Welcome!\pI got items for specific POKéMON!$"

LilycoveCity_DepartmentStore_3F_StatBoosters::
# 151 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "Welcome!\pGet your STAT BOOSTERS here!$"

LilycoveCity_DepartmentStore_3F_GetYourMints::
# 156 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "Welcome!\pGet your NATURE MINTS here!$"
