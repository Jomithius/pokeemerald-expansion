# 1 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
.set LOCALID_WOMAN, 7
# 2 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 3 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_MapScripts::
# 4 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LilycoveCity_DepartmentStore_5F_OnWarp
# 5 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.byte 0
# 6 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 7 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
@ During the abnormal weather from Kyogre/Groudon awakening the dept store rooftop is inaccessible
# 8 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
@ Likely done to avoid dealing with showing the weather. Technically the rooftop is indoors
# 9 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_OnWarp:
# 10 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 1, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
# 11 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 2, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
# 12 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 3, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
# 13 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte 0
# 14 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 15 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs::
# 16 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	setobjectxy LOCALID_WOMAN, 16, 2
# 17 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	turnobject LOCALID_WOMAN, DIR_NORTH
# 18 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 19 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 20 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_ClerkFarLeft::
# 21 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 22 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 23 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	message gText_HowMayIServeYou
# 24 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 25 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Dolls
# 26 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 27 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 28 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 29 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 30 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.align 2
# 31 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Pokemart_Dolls:
# 32 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_PICHU_DOLL
# 33 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_PIKACHU_DOLL
# 34 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 35 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_JIGGLYPUFF_DOLL
# 36 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_DUSKULL_DOLL
# 37 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_WYNAUT_DOLL
# 38 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_BALTOY_DOLL
# 39 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_KECLEON_DOLL
# 40 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 41 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 42 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SWABLU_DOLL
# 43 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_GULPIN_DOLL
# 44 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartlistend
# 45 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 46 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_ClerkMidLeft::
# 47 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 48 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 49 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	message gText_HowMayIServeYou
# 50 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 51 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Cushions
# 52 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 53 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 54 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 55 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 56 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.align 2
# 57 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Pokemart_Cushions:
# 58 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_PIKA_CUSHION
# 59 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_ROUND_CUSHION
# 60 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_ZIGZAG_CUSHION
# 61 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SPIN_CUSHION
# 62 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_DIAMOND_CUSHION
# 63 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_BALL_CUSHION
# 64 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_GRASS_CUSHION
# 65 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_FIRE_CUSHION
# 66 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_WATER_CUSHION
# 67 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartlistend
# 68 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 69 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_ClerkMidRight::
# 70 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 71 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 72 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	message gText_HowMayIServeYou
# 73 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 74 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Posters
# 75 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 76 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 77 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 78 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 79 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.align 2
# 80 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Pokemart_Posters:
# 81 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_BALL_POSTER
# 82 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_GREEN_POSTER
# 83 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_RED_POSTER
# 84 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_BLUE_POSTER
# 85 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_CUTE_POSTER
# 86 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_PIKA_POSTER
# 87 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_LONG_POSTER
# 88 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SEA_POSTER
# 89 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SKY_POSTER
# 90 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartlistend
# 91 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 92 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_ClerkFarRight::
# 93 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 94 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 95 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	message gText_HowMayIServeYou
# 96 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 97 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Mats
# 98 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 99 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 100 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 101 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 102 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.align 2
# 103 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Pokemart_Mats:
# 104 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SURF_MAT
# 105 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_THUNDER_MAT
# 106 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_FIRE_BLAST_MAT
# 107 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_POWDER_SNOW_MAT
# 108 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_ATTRACT_MAT
# 109 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_FISSURE_MAT
# 110 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SPIKES_MAT
# 111 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_GLITTER_MAT
# 112 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_JUMP_MAT
# 113 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SPIN_MAT
# 114 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartlistend
# 115 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 116 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_PokefanF::
# 117 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_PlaceFullOfCuteDolls, MSGBOX_NPC
# 118 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 119 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 120 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_Woman::
# 121 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lockall
# 122 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	applymovement LOCALID_WOMAN, Common_Movement_FacePlayer
# 123 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmovement 0
# 124 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, LilycoveCity_DepartmentStore_5F_EventScript_WomanNormal
# 125 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 4, LilycoveCity_DepartmentStore_5F_EventScript_WomanNormal
# 126 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto LilycoveCity_DepartmentStore_5F_EventScript_WomanLegendaryWeather
# 127 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 128 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 129 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_WomanNormal::
# 130 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_SellManyCuteMatsHere, MSGBOX_DEFAULT
# 131 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	closemessage
# 132 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	releaseall
# 133 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 134 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 135 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_WomanLegendaryWeather::
# 136 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_ClosedRooftopForWeather, MSGBOX_DEFAULT
# 137 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	closemessage
# 138 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	applymovement LOCALID_WOMAN, Common_Movement_WalkInPlaceFasterUp
# 139 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmovement 0
# 140 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	releaseall
# 141 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 142 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 143 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_LittleGirl::
# 144 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_GettingDollInsteadOfPokemon, MSGBOX_NPC
# 145 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 146 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 147 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Text_PlaceFullOfCuteDolls:
# 148 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "This place is full of cute DOLLS.\p"
# 149 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "I should buy some for me, instead of\n"
# 150 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "just for my children.$"
# 151 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 152 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Text_GettingDollInsteadOfPokemon:
# 153 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "I'm not big enough to raise POKéMON,\n"
# 154 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "so I'm getting a cute DOLL instead.$"
# 155 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 156 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Text_SellManyCuteMatsHere:
# 157 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "They sell many cute MATS here.\p"
# 158 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "I wonder which one I should get?\n"
# 159 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "Maybe I'll buy them all…$"
# 160 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 161 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Text_ClosedRooftopForWeather:
# 162 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "I think they closed the rooftop\n"
# 163 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "because the weather is wild today.$"

LilycoveCity_DepartmentStore_5F_EventScript_Misa::
# 167 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 168 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 169 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_RARE_CANDY_LILYCOVE_DEPT, LilycoveCity_DepartmentStore_5F_EventScript_Misa_2
# 185 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_Misa3, MSGBOX_AUTOCLOSE
# 186 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
LilycoveCity_DepartmentStore_5F_EventScript_Misa_1:
# 188 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	applymovement 8, Common_Movement_FaceOriginalDirection
# 189 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmovement 8
# 190 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
	end

LilycoveCity_DepartmentStore_5F_EventScript_Misa_2:
# 170 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	playse SE_PIN
# 171 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 172 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmovement 8
# 173 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitse
# 174 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	playbgm MUS_MISA_THEME, FALSE
# 175 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	delay 10
# 176 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_Misa1, MSGBOX_DEFAULT
# 177 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 178 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	giveitem ITEM_RARE_CANDY, 10
# 179 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_Misa2, MSGBOX_AUTOCLOSE
# 180 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 181 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	fadedefaultbgm
# 182 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	setflag FLAG_RECEIVED_RARE_CANDY_LILYCOVE_DEPT
	goto LilycoveCity_DepartmentStore_5F_EventScript_Misa_1


LilycoveCity_DepartmentStore_5F_EventScript_Lina::
# 229 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 230 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilcoveCity_DepartmentStore_5F_Text_Lina1, MSGBOX_AUTOCLOSE
# 231 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 232 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	playse SE_PIN
# 233 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 234 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmovement 9
# 235 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	delay 20
# 236 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	applymovement 9, Common_Movement_FacePlayer
# 237 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmovement 9
# 238 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	compare VAR_LINA_TALKED_TO, 1
	goto_if_eq LilycoveCity_DepartmentStore_5F_EventScript_Lina_9
LilycoveCity_DepartmentStore_5F_EventScript_Lina_7:
# 242 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	compare VAR_LINA_TALKED_TO, 1
	goto_if_eq LilycoveCity_DepartmentStore_5F_EventScript_Lina_3
# 245 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	compare VAR_LINA_TALKED_TO, 2
	goto_if_eq LilycoveCity_DepartmentStore_5F_EventScript_Lina_4
# 249 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilcoveCity_DepartmentStore_5F_Text_Lina3, MSGBOX_AUTOCLOSE
# 250 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	setvar VAR_LINA_TALKED_TO, 1
LilycoveCity_DepartmentStore_5F_EventScript_Lina_1:
# 252 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 253 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	applymovement 9, Common_Movement_FaceOriginalDirection
# 254 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmovement 9
# 255 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
	end

LilycoveCity_DepartmentStore_5F_EventScript_Lina_2:
# 239 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilcoveCity_DepartmentStore_5F_Text_Lina2, MSGBOX_AUTOCLOSE
# 240 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	setvar VAR_LINA_TALKED_TO, 2
	goto LilycoveCity_DepartmentStore_5F_EventScript_Lina_1

LilycoveCity_DepartmentStore_5F_EventScript_Lina_3:
# 243 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilcoveCity_DepartmentStore_5F_Text_Lina2, MSGBOX_AUTOCLOSE
	goto LilycoveCity_DepartmentStore_5F_EventScript_Lina_1

LilycoveCity_DepartmentStore_5F_EventScript_Lina_4:
# 246 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilcoveCity_DepartmentStore_5F_Text_Lina2, MSGBOX_AUTOCLOSE
	goto LilycoveCity_DepartmentStore_5F_EventScript_Lina_1

LilycoveCity_DepartmentStore_5F_EventScript_Lina_8:
# 238 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto_if_set FLAG_LINA_HOUSE_EEVEE, LilycoveCity_DepartmentStore_5F_EventScript_Lina_2
	goto LilycoveCity_DepartmentStore_5F_EventScript_Lina_7

LilycoveCity_DepartmentStore_5F_EventScript_Lina_9:
# 238 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto_if_set FLAG_TALKED_TO_LINA_LAVARIDGE, LilycoveCity_DepartmentStore_5F_EventScript_Lina_8
	goto LilycoveCity_DepartmentStore_5F_EventScript_Lina_7


LilycoveCity_DepartmentStore_5F_Text_Misa1::
# 194 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "Oh, {PLAYER}!\p It's nice to see you again!\n I had to stop by the DEPT. STORE\l before I went back to work.\l I just love the POKé DOLLS here!\p Have you eaten? I bought some\n candy earlier, but I got too much.\p Here.\n You can take the rest!$"

LilycoveCity_DepartmentStore_5F_Text_Misa2::
# 206 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "By the way, I ran into JAMES earlier.\n He seems really motivated since\l meeting you.\p I also his noticed his… behavior\n has changed a bit as well.\p Maybe he's growing from his experiences\n he's had on his journey.\p Well, I need to FLY back to EVER GRANDE\n CITY as soon as I finish shopping.\p Good luck on your last two badges!\n I'm sure we'll see each other again.$"

LilycoveCity_DepartmentStore_5F_Text_Misa3::
# 220 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "Well, I need to FLY back to EVER GRANDE\n CITY as soon as I finish shopping.\p Good luck on your last two badges!\n I'm sure we'll see each other again.$"

LilcoveCity_DepartmentStore_5F_Text_Lina1::
# 259 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "What?\n The next “Muscles & Monsters” still\l isn't in yet…$"

LilcoveCity_DepartmentStore_5F_Text_Lina2::
# 265 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "Wha-\n You again?!\p W-Why are you eavesdropping?!\n Shoo!$"

LilcoveCity_DepartmentStore_5F_Text_Lina3::
# 272 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "Wha-\n W-Why are you eavesdropping?!\p Shoo!$"
