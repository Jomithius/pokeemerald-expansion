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
	release
	end


ShoalCave_LowTideIceRoom_EventScript_AriaPosition1::
# 83 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_SOUTH
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_2
# 86 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_WEST
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_3
# 90 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_WalkBackRight
ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_1:
	return

ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_2:
# 84 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_WalkBackDown
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_1

ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_3:
# 87 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_WalkBackLeft
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_1


ShoalCave_LowTideIceRoom_EventScript_AriaPosition2::
# 96 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_SOUTH
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_2
# 101 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_WEST
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_3
# 107 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkLeft
# 108 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 109 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_1:
	return

ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_2:
# 97 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkUp
# 98 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 99 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_1

ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_3:
# 102 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkRight
# 103 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 104 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_1


ShoalCave_LowTideIceRoom_EventScript_AriaLeave::
# 115 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_SOUTH
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaLeave_2
# 121 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_WEST
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaLeave_3
# 128 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveRight
# 129 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 130 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 131 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
ShoalCave_LowTideIceRoom_EventScript_AriaLeave_1:
	return

ShoalCave_LowTideIceRoom_EventScript_AriaLeave_2:
# 116 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveUp
# 117 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 118 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 119 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
	goto ShoalCave_LowTideIceRoom_EventScript_AriaLeave_1

ShoalCave_LowTideIceRoom_EventScript_AriaLeave_3:
# 122 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveLeft
# 123 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 124 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 125 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
	goto ShoalCave_LowTideIceRoom_EventScript_AriaLeave_1


ShoalCave_LowTideIceRoom_EventScript_AriaNorth::
# 138 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock
# 139 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playbgm MUS_NONE, FALSE
# 140 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 20
# 141 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_PIN
# 142 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 143 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 144 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 10
# 145 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_M_YAWN
# 146 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_EventScript_Aria_Text_2, MSGBOX_AUTOCLOSE
# 147 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_WalkBackUp
# 148 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 149 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 150 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadedefaultbgm
# 151 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_Text_Aria1, MSGBOX_AUTOCLOSE
# 152 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 153 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 154 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 155 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveNorth
# 156 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 157 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 3
# 158 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 159 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 4
# 160 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 5
# 161 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 6
# 162 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 163 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_ARIA_SHOAL_CAVE
# 164 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_MISA_LILYCOVE_DEPT_5F
# 165 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setvar VAR_MISA_STATE, 8
# 166 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_EMO_LILYCOVE
# 167 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	release
	end


# 224 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackDown:
# 225 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 226 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_down
# 227 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 230 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackLeft:
# 231 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 232 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_left
# 233 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 236 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackRight:
# 237 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 238 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_right
# 239 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 242 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveUp:
# 243 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 244 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 244 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 244 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 244 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 245 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 245 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 246 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 246 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 246 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 246 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
	step_end

# 249 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveLeft:
# 250 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 250 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 250 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 250 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 251 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 251 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 251 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 252 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 252 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 252 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 252 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
	step_end

# 255 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveRight:
# 256 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 256 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 257 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 258 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 258 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 259 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 259 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 260 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 260 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 260 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 260 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
	step_end

# 263 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackUp:
# 264 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 265 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_up
# 265 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_up
# 266 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 269 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveNorth:
# 270 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 271 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 271 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 271 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 272 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 272 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 273 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 273 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 273 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 273 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
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
# 172 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "If you're gonna try to get the\n commander's attention, don't sneak\l up on them!\p They scare easily.$"

ShoalCave_LowTideIceRoom_Text_BlakeIntro::
# 179 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "For a knight, offense is the best\n defense!$"

ShoalCave_LowTideIceRoom_Text_BlakeDefeat::
# 184 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "H-How did you withstand my\n relentless offense…$"

ShoalCave_LowTideIceRoom_Text_BlakePostBattle::
# 189 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "People think our commander is larping,\n but the armor is real.$"

ShoalCave_LowTideIceRoom_Text_NateIntro::
# 194 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "The greatest'th offense'th be a great\n defense!\p Dost thoust agree'th?$"

ShoalCave_LowTideIceRoom_Text_NateDefeat::
# 200 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "Thoust'th broketh thru'th thine\p defenses'th'snt'nt..$"

ShoalCave_LowTideIceRoom_Text_NatePostBattle::
# 205 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "I surmise thoust seeketh to joineth\n the PROTECTORS? If'th so, thou must\l speaketh to thine commander.$"

ShoalCave_LowTideIceRoom_Text_Aria1::
# 211 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "You scared me!\n  Who are you?\p … … … …\n Oh. A challenger?\p I'm ARIA. LEADER of the MOSSDEEP\n POKéMON GYM and PROTECTOR of the\l SACRED BLADE.\p ARIA: I can stop my training here.\n Me and my knights shall await you\l at the GYM.$"
