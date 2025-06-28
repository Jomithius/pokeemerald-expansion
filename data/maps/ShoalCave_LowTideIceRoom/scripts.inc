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
	lock
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
	release
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
	msgbox ShoalCave_LowTideIceRoom_EventScript_Aria_Text_0, MSGBOX_AUTOCLOSE
# 46 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 47 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 48 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_EventScript_Aria_Text_1, MSGBOX_AUTOCLOSE
# 49 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 50 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_PIN
# 51 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 52 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 53 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 54 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 55 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 40
# 56 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_M_YAWN
# 57 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	call ShoalCave_LowTideIceRoom_EventScript_AriaPosition1
# 58 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 59 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_EventScript_Aria_Text_2, MSGBOX_AUTOCLOSE
# 60 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 61 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadedefaultbgm
# 62 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	call ShoalCave_LowTideIceRoom_EventScript_AriaPosition2
# 63 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 64 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_Text_Aria1, MSGBOX_AUTOCLOSE
# 65 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 66 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	call ShoalCave_LowTideIceRoom_EventScript_AriaLeave
# 67 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 3
# 68 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 69 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 4
# 70 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 5
# 71 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 6
# 72 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 73 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_ARIA_SHOAL_CAVE
# 74 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 1
# 75 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_MISA_LILYCOVE_DEPT_5F
# 76 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setvar VAR_MISA_STATE, 8
# 77 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_EMO_LILYCOVE
# 78 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_RATDUARDO_LILYCOVE
# 79 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	release
	end


ShoalCave_LowTideIceRoom_EventScript_AriaPosition1::
# 84 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_SOUTH
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_2
# 87 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_WEST
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_3
# 91 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_WalkBackRight
ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_1:
	return

ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_2:
# 85 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_WalkBackDown
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_1

ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_3:
# 88 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_WalkBackLeft
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_1


ShoalCave_LowTideIceRoom_EventScript_AriaPosition2::
# 97 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_SOUTH
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_2
# 102 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_WEST
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_3
# 108 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkLeft
# 109 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 110 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_1:
	return

ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_2:
# 98 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkUp
# 99 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 100 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_1

ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_3:
# 103 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkRight
# 104 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 105 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_1


ShoalCave_LowTideIceRoom_EventScript_AriaLeave::
# 116 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_SOUTH
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaLeave_2
# 122 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_WEST
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaLeave_3
# 129 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveRight
# 130 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 131 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 132 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
ShoalCave_LowTideIceRoom_EventScript_AriaLeave_1:
	return

ShoalCave_LowTideIceRoom_EventScript_AriaLeave_2:
# 117 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveUp
# 118 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 119 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 120 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
	goto ShoalCave_LowTideIceRoom_EventScript_AriaLeave_1

ShoalCave_LowTideIceRoom_EventScript_AriaLeave_3:
# 123 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveLeft
# 124 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 125 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 126 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
	goto ShoalCave_LowTideIceRoom_EventScript_AriaLeave_1


ShoalCave_LowTideIceRoom_EventScript_AriaNorth::
# 139 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock
# 140 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playbgm MUS_NONE, FALSE
# 141 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 20
# 142 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_PIN
# 143 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 144 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 145 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 10
# 146 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_M_YAWN
# 147 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_EventScript_Aria_Text_2, MSGBOX_AUTOCLOSE
# 148 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_WalkBackUp
# 149 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 150 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 151 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadedefaultbgm
# 152 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_Text_Aria1, MSGBOX_AUTOCLOSE
# 153 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 154 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 155 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 156 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveNorth
# 157 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 158 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 3
# 159 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 160 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 4
# 161 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 5
# 162 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 6
# 163 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 164 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_ARIA_SHOAL_CAVE
# 165 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_MISA_LILYCOVE_DEPT_5F
# 166 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setvar VAR_MISA_STATE, 8
# 167 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_EMO_LILYCOVE
# 168 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	release
	end


# 225 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackDown:
# 226 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 227 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_down
# 228 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 231 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackLeft:
# 232 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 233 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_left
# 234 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 237 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackRight:
# 238 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 239 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_right
# 240 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 243 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveUp:
# 244 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 245 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 245 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 245 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 245 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 246 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 246 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 247 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 247 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 247 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 247 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
	step_end

# 250 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveLeft:
# 251 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 251 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 251 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 251 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 252 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 252 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
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
	step_end

# 256 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveRight:
# 257 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 257 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 258 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 259 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 259 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
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
ShoalCave_LowTideIceRoom_Movement_WalkBackUp:
# 265 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 266 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_up
# 266 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_up
# 267 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 270 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveNorth:
# 271 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 272 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 272 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 272 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 273 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 273 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 274 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 274 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 274 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 274 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
	step_end

ShoalCave_LowTideIceRoom_Trigger_Aria_Text_0:
# 29 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "They're swinging a sword.\n It looks dangerous to approach them\l from the front.$"

ShoalCave_LowTideIceRoom_EventScript_Aria_Text_0:
# 45 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "ARGH!$"

ShoalCave_LowTideIceRoom_EventScript_Aria_Text_1:
# 48 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "AAAARGH!$"

ShoalCave_LowTideIceRoom_EventScript_Aria_Text_2:
# 59 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "AH!$"

ShoalCave_LowTideIceRoom_Text_Sylvia::
# 173 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "If you're gonna try to get the\n commander's attention, don't sneak\l up on them!\p They scare easily.$"

ShoalCave_LowTideIceRoom_Text_BlakeIntro::
# 180 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "For a knight, offense is the best\n defense!$"

ShoalCave_LowTideIceRoom_Text_BlakeDefeat::
# 185 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "H-How did you withstand my\n relentless offense…$"

ShoalCave_LowTideIceRoom_Text_BlakePostBattle::
# 190 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "People think our commander is larping,\n but the armor is real.$"

ShoalCave_LowTideIceRoom_Text_NateIntro::
# 195 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "The greatest'th offense'th be a great\n defense!\p Dost thoust agree'th?$"

ShoalCave_LowTideIceRoom_Text_NateDefeat::
# 201 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "Thoust'th broketh thru'th thine\p defenses'th'snt'nt..$"

ShoalCave_LowTideIceRoom_Text_NatePostBattle::
# 206 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "I surmise thoust seeketh to joineth\n the PROTECTORS? If'th so, thou must\l speaketh to thine commander.$"

ShoalCave_LowTideIceRoom_Text_Aria1::
# 212 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "You scared me!\n  Who are you?\p … … … …\n Oh. A challenger?\p I'm ARIA. LEADER of the MOSSDEEP\n POKéMON GYM and PROTECTOR of the\l SACRED BLADE.\p ARIA: I can stop my training here.\n Me and my knights shall await you\l at the GYM.$"
