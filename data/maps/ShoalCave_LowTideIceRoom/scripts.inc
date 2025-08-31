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
	msgbox ShoalCave_LowTideIceRoom_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 14 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
	end


ShoalCave_LowTideIceRoom_EventScript_Blake::
# 19 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	trainerbattle_single TRAINER_BLAKE_SHOAL_CAVE, ShoalCave_LowTideIceRoom_Text_BlakeIntro, ShoalCave_LowTideIceRoom_Text_BlakeDefeat
# 20 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
# 21 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
	end


ShoalCave_LowTideIceRoom_Trigger_Aria::
# 26 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lockall
# 27 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 28 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 20
# 29 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_Trigger_Aria_Text_0, MSGBOX_AUTOCLOSE
# 32 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 33 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 34 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 0
# 35 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	releaseall
	end


ShoalCave_LowTideIceRoom_EventScript_Aria::
# 40 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock
# 41 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_1
# 42 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playbgm MUS_NONE, FALSE
# 43 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 20
# 44 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 45 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitse
# 46 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playmoncry SPECIES_ETERNATUS, CRY_MODE_NORMAL
# 47 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_EventScript_Aria_Text_0, MSGBOX_AUTOCLOSE
# 49 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 50 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmoncry
# 51 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_PIN
# 52 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 53 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 54 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitse
# 55 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setobjectnewmovementtype 3, MOVEMENT_TYPE_NONE
# 56 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 57 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 58 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 40
# 60 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playmoncry SPECIES_TERAPAGOS, CRY_MODE_NORMAL
# 61 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	call ShoalCave_LowTideIceRoom_EventScript_AriaPosition1
# 62 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 63 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_EventScript_Aria_Text_1, MSGBOX_AUTOCLOSE
# 64 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 65 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmoncry
# 66 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadedefaultbgm
# 67 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	call ShoalCave_LowTideIceRoom_EventScript_AriaPosition2
# 68 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 69 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_Text_Aria1, MSGBOX_AUTOCLOSE
# 70 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 71 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	call ShoalCave_LowTideIceRoom_EventScript_AriaLeave
# 72 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 3
# 73 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 74 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 4
# 75 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 5
# 76 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 6
# 77 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 78 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_ARIA_SHOAL_CAVE
# 79 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 1
# 80 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_MISA_LILYCOVE_DEPT_5F
# 81 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setvar VAR_MISA_STATE, 8
# 82 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_EMO_LILYCOVE
# 83 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_JOMITHIUS_UNAVAILABLE
# 84 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_RATDUARDO_LILYCOVE
# 85 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	release
	end


ShoalCave_LowTideIceRoom_EventScript_AriaPosition1::
# 90 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_SOUTH
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_2
# 93 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_WEST
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_3
# 97 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, ShoalCave_LowTideIceRoom_Movement_WalkBackRight
ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_1:
	return

ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_2:
# 91 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, ShoalCave_LowTideIceRoom_Movement_WalkBackDown
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_1

ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_3:
# 94 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, ShoalCave_LowTideIceRoom_Movement_WalkBackLeft
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_1


ShoalCave_LowTideIceRoom_EventScript_AriaPosition2::
# 103 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_SOUTH
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_2
# 108 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_WEST
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_3
# 114 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkLeft
# 115 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement VAR_LAST_TALKED
# 116 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceLeft
ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_1:
	return

ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_2:
# 104 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkUp
# 105 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement VAR_LAST_TALKED
# 106 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceUp
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_1

ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_3:
# 109 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkRight
# 110 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement VAR_LAST_TALKED
# 111 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceRight
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_1


ShoalCave_LowTideIceRoom_EventScript_AriaLeave::
# 122 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_SOUTH
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaLeave_2
# 128 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_WEST
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaLeave_3
# 135 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveRight
# 136 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 137 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 138 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
ShoalCave_LowTideIceRoom_EventScript_AriaLeave_1:
	return

ShoalCave_LowTideIceRoom_EventScript_AriaLeave_2:
# 123 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveUp
# 124 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 125 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 126 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
	goto ShoalCave_LowTideIceRoom_EventScript_AriaLeave_1

ShoalCave_LowTideIceRoom_EventScript_AriaLeave_3:
# 129 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveLeft
# 130 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 131 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 132 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
	goto ShoalCave_LowTideIceRoom_EventScript_AriaLeave_1


ShoalCave_LowTideIceRoom_EventScript_AriaNorth::
# 145 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock
# 146 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playbgm MUS_NONE, FALSE
# 147 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 20
# 148 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_PIN
# 149 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 150 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 151 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 10
# 152 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_M_YAWN
# 153 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_EventScript_Aria_Text_1, MSGBOX_AUTOCLOSE
# 154 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_WalkBackUp
# 155 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 156 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 157 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadedefaultbgm
# 158 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_Text_Aria1, MSGBOX_AUTOCLOSE
# 159 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 160 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 161 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 162 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveNorth
# 163 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 164 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 3
# 165 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 166 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 4
# 167 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 5
# 168 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 6
# 169 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 170 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_ARIA_SHOAL_CAVE
# 171 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_MISA_LILYCOVE_DEPT_5F
# 172 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setvar VAR_MISA_STATE, 8
# 173 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_EMO_LILYCOVE
# 174 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_JOMITHIUS_UNAVAILABLE
# 175 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	release
	end


# 233 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackDown:
# 234 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 235 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_down
# 236 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 239 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackLeft:
# 240 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 241 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_left
# 242 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 245 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackRight:
# 246 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 247 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_right
# 248 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 251 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveUp:
# 252 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 253 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 253 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 253 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 253 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 254 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
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
	step_end

# 258 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveLeft:
# 259 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 259 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 259 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 259 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 260 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 260 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 260 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 261 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 261 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 261 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 261 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
	step_end

# 264 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveRight:
# 265 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 265 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 266 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 267 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 267 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 268 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 268 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 269 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 269 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 269 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 269 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
	step_end

# 272 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackUp:
# 273 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 274 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_up
# 274 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_up
# 275 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 278 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveNorth:
# 279 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 280 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 280 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 280 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 281 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 281 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 282 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 282 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 282 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 282 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
	step_end

ShoalCave_LowTideIceRoom_Trigger_Aria_Text_0:
# 29 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "They're swinging a sword.\n It looks dangerous to approach them\l from the front.$"

ShoalCave_LowTideIceRoom_EventScript_Aria_Text_0:
# 47 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "ARGH!\n AAAARGH!$"

ShoalCave_LowTideIceRoom_EventScript_Aria_Text_1:
# 63 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "AH!$"

ShoalCave_LowTideIceRoom_Text_Sylvia::
# 180 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "If you're gonna try to get the\n commander's attention, don't sneak\l up on them!\p They scare easily.$"

ShoalCave_LowTideIceRoom_Text_BlakeIntro::
# 187 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "For a KNIGHT, offense is the best\n defense!$"

ShoalCave_LowTideIceRoom_Text_BlakeDefeat::
# 192 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "H-How did you withstand my\n relentless offense…$"

ShoalCave_LowTideIceRoom_Text_BlakePostBattle::
# 197 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "People think our commander is larping,\n but the armor is real.$"

ShoalCave_LowTideIceRoom_Text_NateIntro::
# 202 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "The greatest'th offense'th be a great\n defense!\p Dost thoust agree'th?$"

ShoalCave_LowTideIceRoom_Text_NateDefeat::
# 208 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "Thoust'th broketh thru'th thine\p defenses'th'snt'nt…$"

ShoalCave_LowTideIceRoom_Text_NatePostBattle::
# 213 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "I surmise thoust seeketh to joineth\n the PROTECTORS? If'th so, thou must\l speaketh to thine commander.$"

ShoalCave_LowTideIceRoom_Text_Aria1::
# 219 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "You scared me!\n  Who are you?\l … … … …\p Oh. A challenger?\n Nice to meet you, {PLAYER}.\p I'm ARIA. LEADER of the MOSSDEEP\n POKéMON GYM and PROTECTOR of the\l SACRED BLADE.\p I can stop my training here.\p Me and my KNIGHTS shall await you\n at the GYM.$"
