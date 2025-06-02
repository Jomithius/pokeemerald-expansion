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

LilycoveCity_DepartmentStore_2F_EventScript_Mae::
# 80 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 81 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Mae1, MSGBOX_AUTOCLOSE
# 82 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 83 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_PIN
# 84 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 85 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 86 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 87 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 88 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Mae2, MSGBOX_AUTOCLOSE
# 89 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 90 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAE_2, LilycoveCity_DepartmentStore_2F_Text_MaeDefeat
# 91 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 92 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_PIN
# 93 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 1, LilycoveCity_DepartmentStore_2F_Movement_Cook1
# 94 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 1
# 95 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_EventScript_Mae_Text_0, MSGBOX_AUTOCLOSE
# 96 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 97 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 98 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 99 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 100 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 0
# 101 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Cook, MSGBOX_AUTOCLOSE
# 102 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 103 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_1
# 104 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	compare VAR_TEMP_1, DIR_SOUTH
	goto_if_eq LilycoveCity_DepartmentStore_2F_EventScript_Mae_2
# 132 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, LilycoveCity_DepartmentStore_2F_Movement_MaeLeave2
# 133 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 134 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 135 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 136 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 137 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_EXIT
# 138 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 139 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave3
# 140 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 141 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 142 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 0
# 143 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_ENCOUNTER
# 144 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 20
# 145 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveCity_DepartmentStore_2F_Movement_MaeLeave2
# 146 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 147 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_EXIT
# 148 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 149 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_BIKE_HOP
# 150 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveConfused
# 151 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 0
# 152 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 1, LilycoveCity_DepartmentStore_2F_Movement_Cook2
# 153 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 1
# 154 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Cook2 MSGBOX_AUTOCLOSE
# 155 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 156 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	removeobject 6
# 157 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	removeobject 7
# 158 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MAE
LilycoveCity_DepartmentStore_2F_EventScript_Mae_1:
# 160 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
	end

LilycoveCity_DepartmentStore_2F_EventScript_Mae_2:
# 105 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, LilycoveCity_DepartmentStore_2F_Movement_MaeLeave1
# 106 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 107 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 108 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 109 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 110 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_EXIT
# 111 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 112 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave1
# 113 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 114 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_ENCOUNTER
# 115 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 20
# 116 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave2
# 117 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 118 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_EXIT
# 119 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 120 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_BIKE_HOP
# 121 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveConfused
# 122 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 0
# 123 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 1, LilycoveCity_DepartmentStore_2F_Movement_Cook2
# 124 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 1
# 125 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Cook2 MSGBOX_AUTOCLOSE
# 126 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 127 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	removeobject 6
# 128 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	removeobject 7
# 129 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MAE
	goto LilycoveCity_DepartmentStore_2F_EventScript_Mae_1


LilycoveCity_DepartmentStore_2F_EventScript_Psyduck::
# 191 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 192 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, Common_Movement_FacePlayer
# 193 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 194 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 30
# 195 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_BIKE_HOP
# 196 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveConfused
# 197 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 198 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 199 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_ENCOUNTER
# 200 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_EventScript_Psyduck_Text_0
# 201 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 202 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
	end


# 206 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_Cook1:
# 207 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 207 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 207 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 207 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 208 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_down
	step_end

# 211 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_MaeLeave1:
# 212 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 213 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 214 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 214 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 214 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 214 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 214 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 214 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 214 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 215 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 216 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 216 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
	step_end

# 219 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave1:
# 220 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 221 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 221 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 222 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_player
	step_end

# 225 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave2:
# 226 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 226 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 226 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 226 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 226 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 226 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 226 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 227 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 228 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 228 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
	step_end

# 231 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_Cook2:
# 232 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 233 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 233 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 233 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 233 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 234 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_original_direction
	step_end

# 237 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_MaeLeave2:
# 238 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 239 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 239 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 239 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 239 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 239 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 239 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 239 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 239 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 240 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 241 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 241 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
	step_end

# 244 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave3:
# 245 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 246 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_player
	step_end

# 249 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveConfused:
# 250 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	emote_question_mark
	step_end

# 253 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_FaceLeft:
# 254 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_left
	step_end

# 257 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_FaceRight:
# 258 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_right
	step_end

LilycoveCity_DepartmentStore_2F_EventScript_Mae_Text_0:
# 95 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "COOK: EXCUSE ME!$"

LilycoveCity_DepartmentStore_2F_EventScript_Psyduck_Text_0:
# 200 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "PSYDUCK: Psy?$"

LilycoveCity_DepartmentStore_2F_Text_Mae1::
# 164 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "OOOH YES!! THIS SLAYYYYS!$"

LilycoveCity_DepartmentStore_2F_Text_Mae2::
# 168 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "You AGAIN? Why do you keep\n getting in the way of my shopping?\p I'm a diva and I deserve this!$"

LilycoveCity_DepartmentStore_2F_Text_MaeDefeat::
# 174 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "Slay...$"

LilycoveCity_DepartmentStore_2F_Text_Cook::
# 178 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "You can't battle in here!\n Please leave!\p MAE: Alright, whatever!\n I'll shop somewhere else!$"

LilycoveCity_DepartmentStore_2F_Text_Cook2::
# 185 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "COOK: Minimum wage to deal with\n customers like this. Really?$"
