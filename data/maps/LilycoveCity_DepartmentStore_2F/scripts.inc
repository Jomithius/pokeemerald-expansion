# 1 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_MapScripts::
# 2 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.byte 0
# 3 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 4 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_Cook::
# 5 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly, MSGBOX_NPC
# 6 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 7 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 8 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_PokefanF::
# 9 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband, MSGBOX_NPC
# 10 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 11 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 12 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_Sailor::
# 13 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems, MSGBOX_NPC
# 14 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 15 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 16 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft::
# 17 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 18 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 19 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	message gText_HowMayIServeYou
# 20 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 21 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart1
# 22 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 23 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 24 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 25 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 26 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.align 2
# 27 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Pokemart1:
# 28 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 29 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 30 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 31 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 32 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 33 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 34 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 35 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 36 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 37 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_AWAKENING
# 38 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 39 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemartlistend
# 40 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 41 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight::
# 42 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 43 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 44 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	message gText_HowMayIServeYou
# 45 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 46 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart2
# 47 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 48 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 49 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 50 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 51 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.align 2
# 52 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Pokemart2:
# 53 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POTION
# 54 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 55 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 56 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 57 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REVIVE
# 58 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REPEL
# 59 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 60 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 61 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_WAVE_MAIL
# 62 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MECH_MAIL
# 63 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemartlistend
# 64 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 65 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly:
# 66 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "Learn to use items properly.\n"
# 67 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "That's basic, really.$"
# 68 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 69 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband:
# 70 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "My husband is waiting at home.\n"
# 71 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "What would make a good gift for him?$"
# 72 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 73 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems:
# 74 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "I'm leaving on a long journey soon.\n"
# 75 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "I need to stock up on items.$"

LilycoveCity_DepartmentStore_2F_VarTempTrigger::
# 80 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	setvar VAR_TEMP_1, 1
	end


LilycoveCity_DepartmentStore_2F_VarTempTrigger2::
# 85 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	setvar VAR_TEMP_1, 0
	end


LilycoveCity_DepartmentStore_2F_EventScript_Mae::
# 90 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 91 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Mae1, MSGBOX_AUTOCLOSE
# 92 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 93 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_PIN
# 94 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 95 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 96 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 97 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 98 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	goto_if_set FLAG_SLATEPORT_MAE_BATTLE, LilycoveCity_DepartmentStore_2F_EventScript_Mae_2
# 102 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Mae, MSGBOX_AUTOCLOSE
LilycoveCity_DepartmentStore_2F_EventScript_Mae_1:
# 104 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 105 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAE_2, LilycoveCity_DepartmentStore_2F_Text_MaeDefeat
# 106 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 107 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_PIN
# 108 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 109 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 1
# 110 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 111 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 1, LilycoveCity_DepartmentStore_2F_Movement_Cook1
# 112 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 1
# 113 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_EventScript_Mae_Text_0, MSGBOX_AUTOCLOSE
# 114 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 115 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 116 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 117 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 118 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 0
# 119 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Cook, MSGBOX_AUTOCLOSE
# 120 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 121 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	call LilycoveCity_DepartmentStore_2F_MaeMovementVar
# 122 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
	end

LilycoveCity_DepartmentStore_2F_EventScript_Mae_2:
# 99 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Mae2, MSGBOX_AUTOCLOSE
	goto LilycoveCity_DepartmentStore_2F_EventScript_Mae_1


LilycoveCity_DepartmentStore_2F_MaeMovementVar::
# 127 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq LilycoveCity_DepartmentStore_2F_MaeMovementVar_2
# 156 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, LilycoveCity_DepartmentStore_2F_Movement_MaeLeave1
# 157 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 158 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 159 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 160 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 161 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_EXIT
# 162 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 163 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave1
# 164 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 165 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_ENCOUNTER
# 166 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 20
# 167 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave2
# 168 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 169 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_EXIT
# 170 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 60
# 171 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_BIKE_HOP
# 172 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveConfused
# 173 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 0
# 174 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 1, LilycoveCity_DepartmentStore_2F_Movement_Cook2
# 175 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 1
# 176 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Cook2 MSGBOX_AUTOCLOSE
# 177 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 178 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	removeobject 6
# 179 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	removeobject 7
# 180 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MAE
# 181 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	setflag FLAG_SLATEPORT_MAE_BATTLE
LilycoveCity_DepartmentStore_2F_MaeMovementVar_1:
	return

LilycoveCity_DepartmentStore_2F_MaeMovementVar_2:
# 128 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, LilycoveCity_DepartmentStore_2F_Movement_MaeLeave2
# 129 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 130 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 131 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_EXIT
# 132 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 133 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave3
# 134 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 135 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 136 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 0
# 137 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_ENCOUNTER
# 138 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 20
# 139 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveCity_DepartmentStore_2F_Movement_MaeLeave2
# 140 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 141 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_EXIT
# 142 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 60
# 143 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_BIKE_HOP
# 144 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveConfused
# 145 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 0
# 146 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 1, LilycoveCity_DepartmentStore_2F_Movement_Cook2
# 147 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 1
# 148 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Cook2 MSGBOX_AUTOCLOSE
# 149 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 150 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	removeobject 6
# 151 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	removeobject 7
# 152 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MAE
# 153 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	setflag FLAG_SLATEPORT_MAE_BATTLE
	goto LilycoveCity_DepartmentStore_2F_MaeMovementVar_1


LilycoveCity_DepartmentStore_2F_EventScript_Psyduck::
# 221 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 222 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, Common_Movement_FacePlayer
# 223 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 224 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 30
# 225 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_BIKE_HOP
# 226 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveConfused
# 227 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 228 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 229 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_ENCOUNTER
# 230 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_EventScript_Psyduck_Text_0
# 231 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 232 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
	end


# 236 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_Cook1:
# 237 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 237 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 237 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 237 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 238 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_down
	step_end

# 241 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_MaeLeave1:
# 242 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 243 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 244 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 244 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 244 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 244 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 244 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 244 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 244 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 245 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 246 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 246 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
	step_end

# 249 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave1:
# 250 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 251 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 251 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 252 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_player
	step_end

# 255 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave2:
# 256 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 256 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 256 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 256 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 256 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 256 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 256 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 257 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 258 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 258 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
	step_end

# 261 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_Cook2:
# 262 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 263 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 263 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 263 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 263 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 264 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_original_direction
	step_end

# 267 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_MaeLeave2:
# 268 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 269 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 269 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 269 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 269 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 269 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 269 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 269 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 269 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 270 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 271 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 271 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
	step_end

# 274 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave3:
# 275 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 276 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_player
	step_end

# 279 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveConfused:
# 280 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	emote_question_mark
	step_end

# 283 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_FaceLeft:
# 284 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_left
	step_end

# 287 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_FaceRight:
# 288 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_right
	step_end

LilycoveCity_DepartmentStore_2F_EventScript_Mae_Text_0:
# 113 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "EXCUSE ME!$"

LilycoveCity_DepartmentStore_2F_EventScript_Psyduck_Text_0:
# 230 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "PSYDUCK: Psy?$"

LilycoveCity_DepartmentStore_2F_Text_Mae1::
# 188 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "OOOH YES!! THIS SLAYYYYS!$"

LilycoveCity_DepartmentStore_2F_Text_Mae2::
# 192 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "You AGAIN? Why do you keep\n getting in the way of my shopping?\p I'm a diva and I deserve this!$"

LilycoveCity_DepartmentStore_2F_Text_Mae::
# 198 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "Huh? Why are you getting\n in the way of my shopping?\p I'm a diva and I deserve this!$"

LilycoveCity_DepartmentStore_2F_Text_MaeDefeat::
# 204 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "Slay...$"

LilycoveCity_DepartmentStore_2F_Text_Cook::
# 208 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "You can't battle in here!\n Please leave!\p MAE: Alright, whatever!\n I'll shop somewhere else!$"

LilycoveCity_DepartmentStore_2F_Text_Cook2::
# 215 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "WORKER: Minimum wage to deal\n with customers like this... Really?$"
