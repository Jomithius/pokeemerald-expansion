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
    .2byte ITEM_CHERISH_BALL
# 54 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemartlistend
# 55 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 56 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight::
# 57 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 58 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 59 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	message gText_HowMayIServeYou
# 60 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 61 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart2
# 62 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 63 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 64 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 65 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 66 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.align 2
# 67 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Pokemart2:
# 68 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POTION
# 69 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 70 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 71 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 72 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REVIVE
# 73 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_FULL_HEAL
# 74 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 75 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_MAX_LURE
# 76 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_FLUFFY_TAIL
# 77 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_WAVE_MAIL
# 78 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MECH_MAIL
# 79 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemartlistend
# 80 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 81 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.align 2
# 82 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_PokemartCook:
# 83 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_STRAWBERRY_SWEET
# 84 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_LOVE_SWEET
# 85 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_BERRY_SWEET
# 86 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_CLOVER_SWEET
# 87 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_FLOWER_SWEET
# 88 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_STAR_SWEET
# 89 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_RIBBON_SWEET
# 90 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_RED_NECTAR
# 91 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_YELLOW_NECTAR
# 92 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_PINK_NECTAR
# 93 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_PURPLE_NECTAR
# 94 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_SWEET_APPLE
# 95 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_TART_APPLE
# 96 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemartlistend
# 97 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 98 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_TextGetYourBalls:
# 99 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .string "BALLS! BALLS!\n" 
# 100 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .string "Come get your POKé BALLS here!$"
# 101 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 102 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly:
# 103 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "Learn to use items properly.\n"
# 104 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "That's basic, really.$"
# 105 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 106 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband:
# 107 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "My husband is waiting at home.\n"
# 108 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "What would make a good gift for him?$"
# 109 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 110 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems:
# 111 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "I'm leaving on a long journey soon.\n"
# 112 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "I need to stock up on items.$"

LilycoveCity_DepartmentStore_2F_VarTempTrigger::
# 117 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	setvar VAR_TEMP_1, 1
	end


LilycoveCity_DepartmentStore_2F_VarTempTrigger2::
# 122 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	setvar VAR_TEMP_1, 0
	end


LilycoveCity_DepartmentStore_2F_EventScript_Mae::
# 127 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 128 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Mae1, MSGBOX_AUTOCLOSE
# 129 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 130 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_PIN
# 131 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 132 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 133 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 134 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 135 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	goto_if_set FLAG_SLATEPORT_MAE_BATTLE, LilycoveCity_DepartmentStore_2F_EventScript_Mae_2
# 139 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Mae, MSGBOX_AUTOCLOSE
LilycoveCity_DepartmentStore_2F_EventScript_Mae_1:
# 141 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 142 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAE_2, LilycoveCity_DepartmentStore_2F_Text_MaeDefeat
# 143 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 144 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_PIN
# 145 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 146 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 1
# 147 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 148 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 1, LilycoveCity_DepartmentStore_2F_Movement_Cook1
# 149 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 1
# 150 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_EventScript_Mae_Text_0, MSGBOX_AUTOCLOSE
# 151 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 152 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 153 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 154 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 155 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 0
# 156 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Cook, MSGBOX_AUTOCLOSE
# 157 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 158 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	call LilycoveCity_DepartmentStore_2F_MaeMovementVar
# 159 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
	end

LilycoveCity_DepartmentStore_2F_EventScript_Mae_2:
# 136 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Mae2, MSGBOX_AUTOCLOSE
	goto LilycoveCity_DepartmentStore_2F_EventScript_Mae_1


LilycoveCity_DepartmentStore_2F_MaeMovementVar::
# 164 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq LilycoveCity_DepartmentStore_2F_MaeMovementVar_2
# 189 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, LilycoveCity_DepartmentStore_2F_Movement_MaeLeave1
# 190 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 191 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 192 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 193 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 194 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_EXIT
# 195 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 196 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave1
# 197 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 198 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_ENCOUNTER
# 199 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 20
# 200 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave2
# 201 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 202 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_EXIT
# 203 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 60
# 204 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_BIKE_HOP
# 205 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveConfused
# 206 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 0
# 207 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 1, LilycoveCity_DepartmentStore_2F_Movement_Cook2
# 208 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 1
# 209 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Cook2 MSGBOX_AUTOCLOSE
# 210 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
LilycoveCity_DepartmentStore_2F_MaeMovementVar_1:
# 212 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	removeobject 6
# 213 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	removeobject 7
# 214 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MAE
# 215 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	setflag FLAG_SLATEPORT_MAE_BATTLE
# 216 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	clearflag FLAG_HIDE_MAE_WACHUNPELON
	return

LilycoveCity_DepartmentStore_2F_MaeMovementVar_2:
# 165 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, LilycoveCity_DepartmentStore_2F_Movement_MaeLeave2
# 166 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 167 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 168 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_EXIT
# 169 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 170 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave3
# 171 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 172 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 173 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 0
# 174 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_ENCOUNTER
# 175 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 20
# 176 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveCity_DepartmentStore_2F_Movement_MaeLeave2
# 177 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 178 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_EXIT
# 179 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 60
# 180 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_BIKE_HOP
# 181 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveConfused
# 182 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 0
# 183 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 1, LilycoveCity_DepartmentStore_2F_Movement_Cook2
# 184 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 1
# 185 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Cook2 MSGBOX_AUTOCLOSE
# 186 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
	goto LilycoveCity_DepartmentStore_2F_MaeMovementVar_1


LilycoveCity_DepartmentStore_2F_EventScript_Psyduck::
# 255 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 256 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, Common_Movement_FacePlayer
# 257 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 258 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 30
# 259 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_BIKE_HOP
# 260 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveConfused
# 261 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 262 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 263 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_ENCOUNTER
# 264 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_EventScript_Psyduck_Text_0
# 265 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 266 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
	end


# 270 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_Cook1:
# 271 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 271 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 271 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 271 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 272 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_down
	step_end

# 275 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_MaeLeave1:
# 276 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 277 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 278 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 278 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 278 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 278 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 278 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 278 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 278 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 279 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 280 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 280 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
	step_end

# 283 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave1:
# 284 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 285 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 285 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 286 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_player
	step_end

# 289 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave2:
# 290 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 290 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 290 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 290 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 290 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 290 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 290 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 291 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 292 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 292 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
	step_end

# 295 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_Cook2:
# 296 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 297 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 297 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 297 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 297 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 298 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_original_direction
	step_end

# 301 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_MaeLeave2:
# 302 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 303 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 303 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 303 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 303 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 303 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 303 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 303 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 303 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 304 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 305 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 305 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
	step_end

# 308 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave3:
# 309 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 310 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_player
	step_end

# 313 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveConfused:
# 314 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	emote_question_mark
	step_end

# 317 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_FaceLeft:
# 318 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_left
	step_end

# 321 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_FaceRight:
# 322 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_right
	step_end

LilycoveCity_DepartmentStore_2F_EventScript_Mae_Text_0:
# 150 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "EXCUSE ME!$"

LilycoveCity_DepartmentStore_2F_EventScript_Psyduck_Text_0:
# 264 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "PSYDUCK: Psy?$"

LilycoveCity_DepartmentStore_2F_Text_Mae1::
# 222 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "OOOH YES!! THIS SLAYYYYS!$"

LilycoveCity_DepartmentStore_2F_Text_Mae2::
# 226 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "You AGAIN? Why do you keep\n getting in the way of my shopping?\p I'm a diva and I deserve this!$"

LilycoveCity_DepartmentStore_2F_Text_Mae::
# 232 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "Huh? Why are you getting\n in the way of my shopping?\p I'm a diva and I deserve this!$"

LilycoveCity_DepartmentStore_2F_Text_MaeDefeat::
# 238 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "Slay…$"

LilycoveCity_DepartmentStore_2F_Text_Cook::
# 242 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "You can't battle in here!\n Please leave!\p MAE: Alright, whatever!\n I'll shop somewhere else!$"

LilycoveCity_DepartmentStore_2F_Text_Cook2::
# 249 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "WORKER: Minimum wage to deal\n with customers like this… Really?$"
