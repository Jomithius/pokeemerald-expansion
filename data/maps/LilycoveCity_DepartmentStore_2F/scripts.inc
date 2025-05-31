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
# 131 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 3, LilycoveCity_DepartmentStore_2F_Movement_MaeLeave2
# 132 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 133 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 134 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 135 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_EXIT
# 136 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 137 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 4, LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave3
# 138 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 4
# 139 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 140 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 3
# 141 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_ENCOUNTER
# 142 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 20
# 143 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 4, LilycoveCity_DepartmentStore_2F_Movement_MaeLeave2
# 144 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 4
# 145 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_EXIT
# 146 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 147 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_BIKE_HOP
# 148 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveConfused
# 149 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 0
# 150 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 1, LilycoveCity_DepartmentStore_2F_Movement_Cook2
# 151 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 1
# 152 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Cook2 MSGBOX_AUTOCLOSE
# 153 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 154 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	removeobject 3
# 155 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	removeobject 4
# 156 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MAE
LilycoveCity_DepartmentStore_2F_EventScript_Mae_1:
# 158 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
	end

LilycoveCity_DepartmentStore_2F_EventScript_Mae_2:
# 105 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 3, LilycoveCity_DepartmentStore_2F_Movement_MaeLeave1
# 106 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 107 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 108 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 109 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_EXIT
# 110 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 111 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 4, LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave1
# 112 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 4
# 113 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_ENCOUNTER
# 114 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 20
# 115 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 4, LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave2
# 116 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 4
# 117 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_EXIT
# 118 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 119 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_BIKE_HOP
# 120 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveConfused
# 121 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 0
# 122 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 1, LilycoveCity_DepartmentStore_2F_Movement_Cook2
# 123 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 1
# 124 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Cook2 MSGBOX_AUTOCLOSE
# 125 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 126 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	removeobject 3
# 127 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	removeobject 4
# 128 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MAE
	goto LilycoveCity_DepartmentStore_2F_EventScript_Mae_1


LilycoveCity_DepartmentStore_2F_EventScript_Psyduck::
# 189 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 190 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, Common_Movement_FacePlayer
# 191 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 192 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 30
# 193 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_BIKE_HOP
# 194 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveConfused
# 195 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 196 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 197 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_ENCOUNTER
# 198 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_EventScript_Psyduck_Text_0
# 199 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 200 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
	end


# 204 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_Cook1:
# 205 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 205 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 205 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 205 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 206 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_down
	step_end

# 209 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_MaeLeave1:
# 210 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 211 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 212 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 212 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 212 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 212 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 212 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 212 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 212 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 213 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 214 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 214 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
	step_end

# 217 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave1:
# 218 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 219 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 219 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 220 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_player
	step_end

# 223 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave2:
# 224 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 224 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 224 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 224 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 224 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 224 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 224 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 225 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 226 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 226 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
	step_end

# 229 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_Cook2:
# 230 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 231 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 231 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 231 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 231 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 232 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_original_direction
	step_end

# 235 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_MaeLeave2:
# 236 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 237 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 237 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 237 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 237 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 237 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 237 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 237 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 237 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 238 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 239 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 239 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
	step_end

# 242 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave3:
# 243 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 244 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_player
	step_end

# 247 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveConfused:
# 248 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	emote_question_mark
	step_end

LilycoveCity_DepartmentStore_2F_EventScript_Mae_Text_0:
# 95 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "COOK: EXCUSE ME!$"

LilycoveCity_DepartmentStore_2F_EventScript_Psyduck_Text_0:
# 198 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "PSYDUCK: Psy?$"

LilycoveCity_DepartmentStore_2F_Text_Mae1::
# 162 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "MAE: OOOH YES!! THIS SLAYYYYS!$"

LilycoveCity_DepartmentStore_2F_Text_Mae2::
# 166 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "You AGAIN? Why do you keep\n getting in the way of my shopping?\p I'm a diva and I deserve this!$"

LilycoveCity_DepartmentStore_2F_Text_MaeDefeat::
# 172 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "Slay...$"

LilycoveCity_DepartmentStore_2F_Text_Cook::
# 176 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "You can't battle in here!\n Please leave!\p MAE: Alright, whatever!\n I'll shop somewhere else!$"

LilycoveCity_DepartmentStore_2F_Text_Cook2::
# 183 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "COOK: Minimum wage to deal with\n customers like this. Really?$"
