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
	pokemartlistend
# 54 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 55 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight::
# 56 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 57 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 58 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	message gText_HowMayIServeYou
# 59 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 60 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart2
# 61 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 62 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 63 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 64 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 65 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.align 2
# 66 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Pokemart2:
# 67 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POTION
# 68 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 69 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 70 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 71 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REVIVE
# 72 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_FULL_HEAL
# 73 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 74 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_MAX_LURE
# 75 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_FLUFFY_TAIL
# 76 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_WAVE_MAIL
# 77 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MECH_MAIL
# 78 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemartlistend
# 79 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 80 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.align 2
# 81 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_PokemartCook:
# 82 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_STRAWBERRY_SWEET
# 83 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_LOVE_SWEET
# 84 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_BERRY_SWEET
# 85 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_CLOVER_SWEET
# 86 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_FLOWER_SWEET
# 87 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_STAR_SWEET
# 88 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_RIBBON_SWEET
# 89 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_RED_NECTAR
# 90 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_YELLOW_NECTAR
# 91 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_PINK_NECTAR
# 92 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_PURPLE_NECTAR
# 93 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_SWEET_APPLE
# 94 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_TART_APPLE
# 95 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemartlistend
# 96 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 97 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_TextGetYourBalls:
# 98 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .string "BALLS! BALLS!\n" 
# 99 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .string "Come get your POKé BALLS here!$"
# 100 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 101 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly:
# 102 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "Learn to use items properly.\n"
# 103 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "That's basic, really.$"
# 104 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 105 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband:
# 106 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "My husband is waiting at home.\n"
# 107 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "What would make a good gift for him?$"
# 108 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 109 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems:
# 110 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "I'm leaving on a long journey soon.\n"
# 111 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "I need to stock up on items.$"

LilycoveCity_DepartmentStore_2F_VarTempTrigger::
# 116 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	setvar VAR_TEMP_1, 1
	end


LilycoveCity_DepartmentStore_2F_VarTempTrigger2::
# 121 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	setvar VAR_TEMP_1, 0
	end


LilycoveCity_DepartmentStore_2F_EventScript_Mae::
# 126 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 127 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Mae1, MSGBOX_AUTOCLOSE
# 128 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 129 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_PIN
# 130 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 131 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 132 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 133 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 134 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	goto_if_set FLAG_SLATEPORT_MAE_BATTLE, LilycoveCity_DepartmentStore_2F_EventScript_Mae_2
# 138 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Mae, MSGBOX_AUTOCLOSE
LilycoveCity_DepartmentStore_2F_EventScript_Mae_1:
# 140 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 141 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAE_2, LilycoveCity_DepartmentStore_2F_Text_MaeDefeat
# 142 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 143 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_PIN
# 144 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 145 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 1
# 146 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 147 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 1, LilycoveCity_DepartmentStore_2F_Movement_Cook1
# 148 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 1
# 149 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_EventScript_Mae_Text_0, MSGBOX_AUTOCLOSE
# 150 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 151 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 152 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 153 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 154 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 0
# 155 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Cook, MSGBOX_AUTOCLOSE
# 156 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 157 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	call LilycoveCity_DepartmentStore_2F_MaeMovementVar
# 158 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
	end

LilycoveCity_DepartmentStore_2F_EventScript_Mae_2:
# 135 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Mae2, MSGBOX_AUTOCLOSE
	goto LilycoveCity_DepartmentStore_2F_EventScript_Mae_1


LilycoveCity_DepartmentStore_2F_MaeMovementVar::
# 163 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq LilycoveCity_DepartmentStore_2F_MaeMovementVar_2
# 188 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, LilycoveCity_DepartmentStore_2F_Movement_MaeLeave1
# 189 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 190 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 191 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 192 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 193 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_EXIT
# 194 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 195 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave1
# 196 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 197 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_ENCOUNTER
# 198 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 20
# 199 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave2
# 200 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 201 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_EXIT
# 202 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 60
# 203 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_BIKE_HOP
# 204 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveConfused
# 205 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 0
# 206 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 1, LilycoveCity_DepartmentStore_2F_Movement_Cook2
# 207 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 1
# 208 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Cook2 MSGBOX_AUTOCLOSE
# 209 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
LilycoveCity_DepartmentStore_2F_MaeMovementVar_1:
# 211 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	removeobject 6
# 212 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	removeobject 7
# 213 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MAE
# 214 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	setflag FLAG_SLATEPORT_MAE_BATTLE
# 215 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	clearflag FLAG_HIDE_MAE_WACHUNPELON
	return

LilycoveCity_DepartmentStore_2F_MaeMovementVar_2:
# 164 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, LilycoveCity_DepartmentStore_2F_Movement_MaeLeave2
# 165 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 166 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 167 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_EXIT
# 168 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 169 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave3
# 170 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 171 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 172 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 0
# 173 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_ENCOUNTER
# 174 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 20
# 175 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveCity_DepartmentStore_2F_Movement_MaeLeave2
# 176 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 177 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_EXIT
# 178 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 60
# 179 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_BIKE_HOP
# 180 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveConfused
# 181 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 0
# 182 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 1, LilycoveCity_DepartmentStore_2F_Movement_Cook2
# 183 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 1
# 184 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Cook2 MSGBOX_AUTOCLOSE
# 185 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
	goto LilycoveCity_DepartmentStore_2F_MaeMovementVar_1


LilycoveCity_DepartmentStore_2F_EventScript_Psyduck::
# 254 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 255 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, Common_Movement_FacePlayer
# 256 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 257 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 30
# 258 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_BIKE_HOP
# 259 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveConfused
# 260 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 261 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 262 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_ENCOUNTER
# 263 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_EventScript_Psyduck_Text_0
# 264 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 265 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
	end


# 269 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_Cook1:
# 270 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 270 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 270 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 270 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 271 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_down
	step_end

# 274 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_MaeLeave1:
# 275 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 276 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 277 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 277 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 277 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 277 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 277 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 277 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 277 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 278 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 279 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 279 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
	step_end

# 282 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave1:
# 283 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 284 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 284 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 285 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_player
	step_end

# 288 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave2:
# 289 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 289 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 289 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 289 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 289 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 289 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 289 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 290 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 291 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 291 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
	step_end

# 294 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_Cook2:
# 295 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 296 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 296 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 296 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 296 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 297 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_original_direction
	step_end

# 300 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_MaeLeave2:
# 301 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 302 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 302 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 302 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 302 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 302 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 302 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 302 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 302 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 303 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 304 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 304 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
	step_end

# 307 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave3:
# 308 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 309 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_player
	step_end

# 312 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveConfused:
# 313 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	emote_question_mark
	step_end

# 316 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_FaceLeft:
# 317 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_left
	step_end

# 320 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_FaceRight:
# 321 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_right
	step_end

LilycoveCity_DepartmentStore_2F_EventScript_Mae_Text_0:
# 149 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "EXCUSE ME!$"

LilycoveCity_DepartmentStore_2F_EventScript_Psyduck_Text_0:
# 263 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "PSYDUCK: Psy?$"

LilycoveCity_DepartmentStore_2F_Text_Mae1::
# 221 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "OOOH YES!! THIS SLAYYYYS!$"

LilycoveCity_DepartmentStore_2F_Text_Mae2::
# 225 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "You AGAIN? Why do you keep\n getting in the way of my shopping?\p I'm a diva and I deserve this!$"

LilycoveCity_DepartmentStore_2F_Text_Mae::
# 231 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "Huh? Why are you getting\n in the way of my shopping?\p I'm a diva and I deserve this!$"

LilycoveCity_DepartmentStore_2F_Text_MaeDefeat::
# 237 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "Slay…$"

LilycoveCity_DepartmentStore_2F_Text_Cook::
# 241 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "You can't battle in here!\n Please leave!\p MAE: Alright, whatever!\n I'll shop somewhere else!$"

LilycoveCity_DepartmentStore_2F_Text_Cook2::
# 248 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "WORKER: Minimum wage to deal\n with customers like this… Really?$"
