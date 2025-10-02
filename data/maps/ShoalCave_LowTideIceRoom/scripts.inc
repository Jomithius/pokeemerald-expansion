# 1 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_MapScripts::
# 2 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.byte 0

ShoalCave_LowTideIceRoom_EventScript_Sylvia::
# 7 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_Text_Sylvia, MSGBOX_NPC
	end


ShoalCave_LowTideIceRoom_EventScript_Nate::
# 12 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	trainerbattle_single TRAINER_NATE_SHOAL_CAVE, ShoalCave_LowTideIceRoom_Text_NateIntro, ShoalCave_LowTideIceRoom_Text_NateDefeat
# 13 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_Text_NatePostBattle, MSGBOX_NPC
	end


ShoalCave_LowTideIceRoom_EventScript_Blake::
# 18 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	trainerbattle_single TRAINER_BLAKE_SHOAL_CAVE, ShoalCave_LowTideIceRoom_Text_BlakeIntro, ShoalCave_LowTideIceRoom_Text_BlakeDefeat
# 19 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_Text_BlakePostBattle, MSGBOX_NPC
	end


ShoalCave_LowTideIceRoom_Trigger_Aria::
# 24 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lockall
# 25 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 26 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitse
# 27 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_Trigger_Aria_Text_0, MSGBOX_AUTOCLOSE
# 30 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 31 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 32 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 0
# 33 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	releaseall
	end


ShoalCave_LowTideIceRoom_EventScript_Aria::
# 38 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock
# 39 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 40 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 0
# 41 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	callnative RemoveFollowingPokemon
# 42 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_1
# 43 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playbgm MUS_NONE, FALSE
# 44 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 20
# 45 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 46 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitse
# 47 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playmoncry SPECIES_ETERNATUS, CRY_MODE_NORMAL
# 48 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_EventScript_Aria_Text_0, MSGBOX_DEFAULT
# 50 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmoncry
# 51 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	closemessage
# 52 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_PIN
# 53 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 54 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 55 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitse
# 56 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setobjectnewmovementtype 3, MOVEMENT_TYPE_NONE
# 57 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 58 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 59 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 40
# 61 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playmoncry SPECIES_TERAPAGOS, CRY_MODE_NORMAL
# 62 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	call ShoalCave_LowTideIceRoom_EventScript_AriaPosition1
# 63 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 64 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_EventScript_Aria_Text_1, MSGBOX_DEFAULT
# 65 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmoncry
# 66 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	closemessage
# 67 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadedefaultbgm
# 68 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	call ShoalCave_LowTideIceRoom_EventScript_AriaPosition2
# 69 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 70 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_Text_Aria1, MSGBOX_AUTOCLOSE
# 71 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 72 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	call ShoalCave_LowTideIceRoom_EventScript_AriaLeave
# 73 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 3
# 74 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 75 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 4
# 76 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 5
# 77 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 6
# 78 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 79 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	callnative UpdateFollowingPokemon
# 80 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_ARIA_SHOAL_CAVE
# 81 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 1
# 82 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_MISA_LILYCOVE_DEPT_5F
# 83 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setvar VAR_MISA_STATE, 8
# 84 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_EMO_LILYCOVE
# 85 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_JOMITHIUS_UNAVAILABLE
# 86 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_RATDUARDO_LILYCOVE
# 87 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	release
	end


ShoalCave_LowTideIceRoom_EventScript_AriaPosition1::
# 92 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_SOUTH
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_2
# 95 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_WEST
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_3
# 99 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, ShoalCave_LowTideIceRoom_Movement_WalkBackRight
ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_1:
	return

ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_2:
# 93 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, ShoalCave_LowTideIceRoom_Movement_WalkBackDown
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_1

ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_3:
# 96 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, ShoalCave_LowTideIceRoom_Movement_WalkBackLeft
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_1


ShoalCave_LowTideIceRoom_EventScript_AriaPosition2::
# 105 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_SOUTH
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_2
# 110 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_WEST
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_3
# 116 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkLeft
# 117 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement VAR_LAST_TALKED
# 118 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceLeft
ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_1:
	return

ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_2:
# 106 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkUp
# 107 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement VAR_LAST_TALKED
# 108 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceUp
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_1

ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_3:
# 111 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkRight
# 112 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement VAR_LAST_TALKED
# 113 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceRight
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_1


ShoalCave_LowTideIceRoom_EventScript_AriaLeave::
# 124 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_SOUTH
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaLeave_2
# 130 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_WEST
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaLeave_3
# 137 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveRight
# 138 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 139 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 140 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
ShoalCave_LowTideIceRoom_EventScript_AriaLeave_1:
	return

ShoalCave_LowTideIceRoom_EventScript_AriaLeave_2:
# 125 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveUp
# 126 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 127 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 128 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
	goto ShoalCave_LowTideIceRoom_EventScript_AriaLeave_1

ShoalCave_LowTideIceRoom_EventScript_AriaLeave_3:
# 131 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveLeft
# 132 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 133 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 134 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
	goto ShoalCave_LowTideIceRoom_EventScript_AriaLeave_1


ShoalCave_LowTideIceRoom_EventScript_AriaNorth::
# 147 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock
# 148 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playbgm MUS_NONE, FALSE
# 149 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 20
# 150 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_PIN
# 151 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 152 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 153 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 10
# 154 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_M_YAWN
# 155 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_EventScript_Aria_Text_1, MSGBOX_AUTOCLOSE
# 156 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_WalkBackUp
# 157 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 158 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 159 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadedefaultbgm
# 160 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_Text_Aria1, MSGBOX_AUTOCLOSE
# 161 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 162 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 163 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 164 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveNorth
# 165 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 166 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 3
# 167 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 168 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 4
# 169 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 5
# 170 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 6
# 171 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 172 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_ARIA_SHOAL_CAVE
# 173 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_MISA_LILYCOVE_DEPT_5F
# 174 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setvar VAR_MISA_STATE, 8
# 175 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_EMO_LILYCOVE
# 176 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_JOMITHIUS_UNAVAILABLE
# 177 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	release
	end


# 235 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackDown:
# 236 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 237 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_down
# 238 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 241 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackLeft:
# 242 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 243 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_left
# 244 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 247 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackRight:
# 248 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 249 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_right
# 250 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 253 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveUp:
# 254 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 255 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 255 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 255 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 255 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 256 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 256 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 257 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 257 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 257 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 257 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
	step_end

# 260 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveLeft:
# 261 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 261 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 261 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 261 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 262 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 262 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 262 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 263 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 263 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 263 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 263 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
	step_end

# 266 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveRight:
# 267 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 267 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 268 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 269 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 269 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 270 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 270 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 271 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 271 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 271 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 271 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
	step_end

# 274 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackUp:
# 275 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 276 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_up
# 276 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_up
# 277 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 280 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveNorth:
# 281 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 282 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 282 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 282 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 283 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 283 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 284 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 284 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 284 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 284 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
	step_end

ShoalCave_LowTideIceRoom_Trigger_Aria_Text_0:
# 27 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "They're swinging a sword.\p It looks dangerous to approach them\n from the front.$"

ShoalCave_LowTideIceRoom_EventScript_Aria_Text_0:
# 48 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "ARGH!\n AAAARGH!$"

ShoalCave_LowTideIceRoom_EventScript_Aria_Text_1:
# 64 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "AH!$"

ShoalCave_LowTideIceRoom_Text_Sylvia::
# 182 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "If you're gonna try to get the\n commander's attention, don't sneak\l up on them!\p They scare easily.$"

ShoalCave_LowTideIceRoom_Text_BlakeIntro::
# 189 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "For a KNIGHT, offense is the best\n defense!$"

ShoalCave_LowTideIceRoom_Text_BlakeDefeat::
# 194 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "H-How did you withstand my\n relentless offense…$"

ShoalCave_LowTideIceRoom_Text_BlakePostBattle::
# 199 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "People think our commander is larping,\n but the armor is real.$"

ShoalCave_LowTideIceRoom_Text_NateIntro::
# 204 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "The greatest'th offense'th be a great\n defense!\p Doth thoust agree'th?$"

ShoalCave_LowTideIceRoom_Text_NateDefeat::
# 210 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "Thoust'th broketh thru'th thine\n defenses'th'snt'nt…$"

ShoalCave_LowTideIceRoom_Text_NatePostBattle::
# 215 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "I surmise thoust seeketh to joineth\n the PROTECTORS? If'th so, thou must\l speaketh to the KNIGHT commander.$"

ShoalCave_LowTideIceRoom_Text_Aria1::
# 221 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "You scared me!\n  Who are you?\l … … … …\p Oh. A challenger?\n Nice to meet you, {PLAYER}.\p I'm ARIA. LEADER of the MOSSDEEP\n POKéMON GYM and PROTECTOR of the\l SACRED BLADE.\p I can stop my training here.\p Me and my KNIGHTS shall await you\n at the GYM.$"
