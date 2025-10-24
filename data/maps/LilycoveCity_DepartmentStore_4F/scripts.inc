# 1 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_MapScripts::
# 2 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.byte 0
# 3 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 4 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_Gentleman::
# 5 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM, MSGBOX_NPC
# 6 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 7 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 8 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_Woman::
# 9 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs, MSGBOX_NPC
# 10 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 11 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 12 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_Youngster::
# 13 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves, MSGBOX_NPC
# 14 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 15 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 16 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft::
# 17 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	lock
# 18 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	faceplayer
# 19 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	message LilycoveCity_DepartmentStore_4F_Text_EvoItems
# 20 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	waitmessage
# 21 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_EvoItems
# 22 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 23 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 24 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 25 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 26 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.align 2
# 27 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Pokemart_EvoItems:
# 28 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 29 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 30 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_WATER_STONE
# 31 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 32 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 33 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_ICE_STONE
# 34 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_SUN_STONE
# 35 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_MOON_STONE
# 36 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 37 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 38 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 39 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 40 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 41 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 42 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 43 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
    .2byte ITEM_RAZOR_FANG
# 44 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
    .2byte ITEM_RAZOR_CLAW
# 45 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 46 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_UPGRADE
# 47 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_PROTECTOR
# 48 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 49 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 50 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 51 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 52 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 53 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 54 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_SACHET
# 55 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 56 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemartlistend
# 57 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 58 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight::
# 59 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	lock
# 60 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	faceplayer
# 61 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	message LilycoveCity_DepartmentStore_4F_Text_TMs
# 62 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	waitmessage
# 63 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs
# 64 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 65 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 66 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 67 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 68 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.align 2
# 69 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs:
# 70 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 71 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 72 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_LIGHT_SCREEN
# 73 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_FIRE_BLAST
# 74 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 75 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_BLIZZARD
# 76 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_HYPER_BEAM
# 77 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_FOCUS_BLAST
# 78 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_SCALD
# 79 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_HIGH_HORSEPOWER
# 80 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_STORED_POWER
# 81 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_WEATHER_BALL
# 82 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_HURRICANE
# 83 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_FALSE_SWIPE
# 84 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_PARTING_SHOT
# 85 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_SEED_BOMB
# 86 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_ZEN_HEADBUTT
# 87 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_FLASH_CANNON
# 88 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_DARK_PULSE
# 89 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_TRICK_ROOM
# 90 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_ENCORE
# 91 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_RAPID_SPIN
# 92 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_SPIKES
# 93 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_TOXIC_SPIKES
# 94 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 95 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_BODY_PRESS
# 96 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 97 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemartlistend
# 98 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 99 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_ClerkMiddle::
# 100 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	lock
# 101 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	faceplayer
# 102 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	message LilycoveCity_DepartmentStore_4F_Text_HoldItems
# 103 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	waitmessage
# 104 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_HoldItems
# 105 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 106 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 107 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 108 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 109 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.align 2
# 110 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Pokemart_HoldItems:
# 111 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 112 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 113 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 114 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 115 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 116 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 117 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 118 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 119 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_BLUNDER_POLICY
# 120 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 121 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 122 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 123 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 124 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 125 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 126 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 127 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 128 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
    .2byte ITEM_FLAME_ORB
# 129 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 130 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 131 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 132 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 133 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 134 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 135 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_RED_CARD
# 136 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 137 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_EVIOLITE
# 138 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
    .2byte ITEM_WIDE_LENS
# 139 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
    .2byte ITEM_SCOPE_LENS
# 140 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
    .2byte ITEM_ZOOM_LENS
# 141 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 142 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 143 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_IRON_BALL
# 144 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 145 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_METRONOME
# 146 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemartlistend
# 147 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 148 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_MartEmployee::
# 149 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	lock
# 150 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	faceplayer
# 151 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	message LilycoveCity_DepartmentStore_4F_Text_WeatherItems
# 152 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	waitmessage
# 153 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_AbsorbItems
# 154 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 155 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 156 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 157 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 158 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.align 2
# 159 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Pokemart_AbsorbItems:
# 160 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 161 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 162 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 163 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 164 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 165 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 166 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
# 167 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 168 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 169 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 170 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 171 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 172 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_SNOWBALL
# 173 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemartlistend
# 174 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 175 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM:
# 176 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "Hmm…\p"
# 177 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "An attacking move…\n"
# 178 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "Or a defensive move…\p"
# 179 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "It's no easy matter to decide which TM\n"
# 180 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "moves should be taught to POKéMON…$"
# 181 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 182 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs:
# 183 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "There are so many different kinds of\n"
# 184 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "TM moves.\p"
# 185 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "A catalog I read said there are 100\n"
# 186 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "different kinds.$"
# 187 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 188 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves:
# 189 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "I'd like to get all the different TMs,\n"
# 190 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "but a POKéMON learns only four moves.$"

LilycoveCity_DepartmentStore_4F_Text_EvoItems::
# 194 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "Welcome!\p I sell a bunch of EVOLUTION items!$"

LilycoveCity_DepartmentStore_4F_Text_WeatherItems::
# 199 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "Welcome!\p Get your field setting items here!$"

LilycoveCity_DepartmentStore_4F_Text_HoldItems::
# 204 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "Welcome, welcome!\p I got MUST-HAVE hold items for sale!\n Guaranteed to upgrade your battling!$"

LilycoveCity_DepartmentStore_4F_Text_TMs::
# 210 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "TMs! Get your TMs here!\n We have tons of rare TMs!$"
