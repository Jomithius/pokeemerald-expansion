# 1 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_MapScripts::
# 2 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.byte 0
# 3 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 4 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_Cook::
# 5 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 6 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 7 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	message gText_HowMayIServeYou
# 8 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 9 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_2F_PokemartCook
# 10 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 11 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 12 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 13 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 14 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_PokefanF::
# 15 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband, MSGBOX_NPC
# 16 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 17 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 18 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_Sailor::
# 19 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems, MSGBOX_NPC
# 20 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 21 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 22 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft::
# 23 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 24 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 25 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	message LilycoveCity_DepartmentStore_2F_TextGetYourBalls
# 26 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 27 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart1
# 28 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 29 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 30 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 31 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 32 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.align 2
# 33 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Pokemart1:
# 34 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 35 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 36 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 37 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_HEAL_BALL 
# 38 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_NET_BALL
# 39 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_NEST_BALL
# 40 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_DIVE_BALL
# 41 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_DUSK_BALL
# 42 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_TIMER_BALL
# 43 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_QUICK_BALL
# 44 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_REPEAT_BALL
# 45 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_LUXURY_BALL
# 46 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_LEVEL_BALL
# 47 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_LURE_BALL
# 48 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_MOON_BALL
# 49 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_FRIEND_BALL
# 50 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_LOVE_BALL
# 51 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_FAST_BALL
# 52 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_HEAVY_BALL
# 53 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_DREAM_BALL
# 54 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_PARK_BALL
# 55 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemartlistend
# 56 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 57 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight::
# 58 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 59 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 60 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	message gText_HowMayIServeYou
# 61 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 62 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart2
# 63 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 64 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 65 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 66 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 67 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.align 2
# 68 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Pokemart2:
# 69 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POTION
# 70 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 71 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 72 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 73 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REVIVE
# 74 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_FULL_HEAL
# 75 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 76 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_MAX_LURE
# 77 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_FLUFFY_TAIL
# 78 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_WAVE_MAIL
# 79 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MECH_MAIL
# 80 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemartlistend
# 81 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 82 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.align 2
# 83 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_PokemartCook:
# 84 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_STRAWBERRY_SWEET
# 85 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_LOVE_SWEET
# 86 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_BERRY_SWEET
# 87 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_CLOVER_SWEET
# 88 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_FLOWER_SWEET
# 89 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_STAR_SWEET
# 90 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_RIBBON_SWEET
# 91 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_RED_NECTAR
# 92 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_YELLOW_NECTAR
# 93 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_PINK_NECTAR
# 94 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_PURPLE_NECTAR
# 95 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_SWEET_APPLE
# 96 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_TART_APPLE
# 97 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemartlistend
# 98 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 99 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_TextGetYourBalls:
# 100 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .string "BALLS! BALLS!\n" 
# 101 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .string "Come get your POKé BALLS here!$"
# 102 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 103 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly:
# 104 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "Learn to use items properly.\n"
# 105 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "That's basic, really.$"
# 106 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 107 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband:
# 108 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "My husband is waiting at home.\n"
# 109 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "What would make a good gift for him?$"
# 110 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 111 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems:
# 112 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "I'm leaving on a long journey soon.\n"
# 113 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "I need to stock up on items.$"

LilycoveCity_DepartmentStore_2F_EventScript_Mae::
# 118 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 119 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Mae1, MSGBOX_AUTOCLOSE
# 120 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 121 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_PIN
# 122 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 123 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 124 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 125 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 126 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Mae2, MSGBOX_AUTOCLOSE
# 127 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 128 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAE_2, LilycoveCity_DepartmentStore_2F_Text_MaeDefeat
# 129 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_PIN
# 130 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 131 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 1
# 132 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 133 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 1, LilycoveCity_DepartmentStore_2F_Movement_Cook1
# 134 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 1
# 135 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_EventScript_Mae_Text_0, MSGBOX_AUTOCLOSE
# 136 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 137 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 138 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 139 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 140 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 0
# 141 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Cook, MSGBOX_AUTOCLOSE
# 142 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 143 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	goto LilycoveCity_DepartmentStore_2F_MaeMovementVar
	end


LilycoveCity_DepartmentStore_2F_MaeMovementVar::
# 148 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	checkobjectat 5, 5
# 149 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_DepartmentStore_2F_MaeMovementVar_2
# 162 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, LilycoveCity_DepartmentStore_2F_Movement_MaeLeave1
# 163 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 40
# 164 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 165 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 40
# 166 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave1
# 167 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 168 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_ENCOUNTER
# 169 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 20
# 170 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave2
# 171 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
LilycoveCity_DepartmentStore_2F_MaeMovementVar_1:
# 173 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_EXIT
# 174 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 40
# 175 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_BIKE_HOP
# 176 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveConfused
# 177 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 0
# 178 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 1, LilycoveCity_DepartmentStore_2F_Movement_Cook2
# 179 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 1
# 180 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Cook2 MSGBOX_AUTOCLOSE
# 181 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 182 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	removeobject 6
# 183 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	removeobject 7
# 184 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MAE
# 185 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	clearflag FLAG_HIDE_MAE_WACHUNPELON
# 186 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
	end

LilycoveCity_DepartmentStore_2F_MaeMovementVar_2:
# 150 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, LilycoveCity_DepartmentStore_2F_Movement_MaeLeave2
# 151 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 40
# 152 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave3
# 153 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 154 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 155 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 0
# 156 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_ENCOUNTER
# 157 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 20
# 158 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveCity_DepartmentStore_2F_Movement_MaeLeave2
# 159 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
	goto LilycoveCity_DepartmentStore_2F_MaeMovementVar_1


LilycoveCity_DepartmentStore_2F_EventScript_Psyduck::
# 225 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 226 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, Common_Movement_FacePlayer
# 227 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 228 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 30
# 229 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_BIKE_HOP
# 230 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveConfused
# 231 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 232 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 233 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_ENCOUNTER
# 234 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_EventScript_Psyduck_Text_0
# 235 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmoncry
# 236 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
	end


# 240 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_Cook1:
# 241 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 241 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 241 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 241 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 242 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_down
	step_end

# 245 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_MaeLeave1:
# 246 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 247 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 248 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 248 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 248 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 248 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 248 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 248 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 248 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 249 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 250 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 250 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
	step_end

# 253 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave1:
# 254 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 255 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 255 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 256 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_player
	step_end

# 259 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave2:
# 260 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 260 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 260 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 260 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 260 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 260 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 260 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 261 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 262 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 262 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
	step_end

# 265 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_Cook2:
# 266 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 267 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 267 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 267 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 267 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 268 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_original_direction
	step_end

# 271 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_MaeLeave2:
# 272 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 273 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 273 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 273 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 273 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 273 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 273 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 273 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 273 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 274 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 275 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 275 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
	step_end

# 278 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave3:
# 279 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 280 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_player
	step_end

# 283 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveConfused:
# 284 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	emote_question_mark
	step_end

# 287 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_FaceLeft:
# 288 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_left
	step_end

# 291 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_FaceRight:
# 292 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_right
	step_end

LilycoveCity_DepartmentStore_2F_EventScript_Mae_Text_0:
# 135 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "MART EMPLOYEE: EXCUSE ME!$"

LilycoveCity_DepartmentStore_2F_EventScript_Psyduck_Text_0:
# 234 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "PSYDUCK: Psy?$"

LilycoveCity_DepartmentStore_2F_Text_Mae1::
# 192 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "MAE: OOOH YES!! THIS SLAYYYYS!$"

LilycoveCity_DepartmentStore_2F_Text_Mae2::
# 196 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "You AGAIN? Why do you keep\n getting in the way of my shopping?\p I'm a diva and I deserve this!$"

LilycoveCity_DepartmentStore_2F_Text_Mae::
# 202 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "Huh? Why are you getting\n in the way of my shopping?\p I'm a diva and I deserve this!$"

LilycoveCity_DepartmentStore_2F_Text_MaeDefeat::
# 208 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "Slay…$"

LilycoveCity_DepartmentStore_2F_Text_Cook::
# 212 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "You can't battle in here!\n Please leave!\p MAE: All right, whatever!\n I'll shop somewhere else!$"

LilycoveCity_DepartmentStore_2F_Text_Cook2::
# 219 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "MART EMPLOYEE: Minimum wage to deal\n with customers like this… Really?$"
