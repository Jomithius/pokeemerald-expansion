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
	playmoncry SPECIES_ETERNATUS, CRY_MODE_ENCOUNTER
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
	applymovement 3, Common_Movement_FacePlayer
# 56 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 57 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 40
# 58 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_M_YAWN
# 59 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	call ShoalCave_LowTideIceRoom_EventScript_AriaPosition1
# 60 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 61 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_EventScript_Aria_Text_1, MSGBOX_AUTOCLOSE
# 62 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 63 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadedefaultbgm
# 64 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	call ShoalCave_LowTideIceRoom_EventScript_AriaPosition2
# 65 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 66 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_Text_Aria1, MSGBOX_AUTOCLOSE
# 67 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 68 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	call ShoalCave_LowTideIceRoom_EventScript_AriaLeave
# 69 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 3
# 70 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 71 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 4
# 72 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 5
# 73 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 6
# 74 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 75 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_ARIA_SHOAL_CAVE
# 76 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 1
# 77 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_MISA_LILYCOVE_DEPT_5F
# 78 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setvar VAR_MISA_STATE, 8
# 79 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_EMO_LILYCOVE
# 80 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_JOMITHIUS_UNAVAILABLE
# 81 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_RATDUARDO_LILYCOVE
# 82 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	release
	end


ShoalCave_LowTideIceRoom_EventScript_AriaPosition1::
# 87 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_SOUTH
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_2
# 90 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_WEST
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_3
# 94 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, ShoalCave_LowTideIceRoom_Movement_WalkBackRight
ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_1:
	return

ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_2:
# 88 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, ShoalCave_LowTideIceRoom_Movement_WalkBackDown
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_1

ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_3:
# 91 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, ShoalCave_LowTideIceRoom_Movement_WalkBackLeft
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_1


ShoalCave_LowTideIceRoom_EventScript_AriaPosition2::
# 100 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_SOUTH
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_2
# 105 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_WEST
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_3
# 111 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkLeft
# 112 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement VAR_LAST_TALKED
# 113 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceLeft
ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_1:
	return

ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_2:
# 101 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkUp
# 102 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement VAR_LAST_TALKED
# 103 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceUp
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_1

ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_3:
# 106 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkRight
# 107 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement VAR_LAST_TALKED
# 108 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceRight
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_1


ShoalCave_LowTideIceRoom_EventScript_AriaLeave::
# 119 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_SOUTH
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaLeave_2
# 125 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_WEST
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaLeave_3
# 132 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveRight
# 133 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 134 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 135 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
ShoalCave_LowTideIceRoom_EventScript_AriaLeave_1:
	return

ShoalCave_LowTideIceRoom_EventScript_AriaLeave_2:
# 120 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveUp
# 121 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 122 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 123 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
	goto ShoalCave_LowTideIceRoom_EventScript_AriaLeave_1

ShoalCave_LowTideIceRoom_EventScript_AriaLeave_3:
# 126 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveLeft
# 127 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 128 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 129 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
	goto ShoalCave_LowTideIceRoom_EventScript_AriaLeave_1


ShoalCave_LowTideIceRoom_EventScript_AriaNorth::
# 142 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock
# 143 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playbgm MUS_NONE, FALSE
# 144 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 20
# 145 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_PIN
# 146 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 147 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 148 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 10
# 149 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_M_YAWN
# 150 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_EventScript_Aria_Text_1, MSGBOX_AUTOCLOSE
# 151 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_WalkBackUp
# 152 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 153 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 154 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadedefaultbgm
# 155 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_Text_Aria1, MSGBOX_AUTOCLOSE
# 156 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 157 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 158 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 159 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveNorth
# 160 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 161 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 3
# 162 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 163 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 4
# 164 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 5
# 165 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 6
# 166 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 167 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_ARIA_SHOAL_CAVE
# 168 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_MISA_LILYCOVE_DEPT_5F
# 169 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setvar VAR_MISA_STATE, 8
# 170 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_EMO_LILYCOVE
# 171 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	release
	end


# 228 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackDown:
# 229 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 230 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_down
# 231 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 234 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackLeft:
# 235 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 236 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_left
# 237 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 240 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackRight:
# 241 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 242 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_right
# 243 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 246 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveUp:
# 247 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 248 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 248 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 248 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 248 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 249 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 249 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 250 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 250 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 250 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 250 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
	step_end

# 253 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveLeft:
# 254 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 254 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 254 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 254 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 255 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 255 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 255 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 256 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 256 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 256 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 256 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
	step_end

# 259 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveRight:
# 260 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 260 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 261 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 262 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 262 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 263 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 263 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 264 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 264 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 264 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 264 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
	step_end

# 267 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackUp:
# 268 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 269 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_up
# 269 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_up
# 270 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 273 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveNorth:
# 274 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 275 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 275 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 275 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 276 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 276 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 277 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 277 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 277 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 277 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
	step_end

ShoalCave_LowTideIceRoom_Trigger_Aria_Text_0:
# 29 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "They're swinging a sword.\n It looks dangerous to approach them\l from the front.$"

ShoalCave_LowTideIceRoom_EventScript_Aria_Text_0:
# 47 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "ARGH!\n AAAARGH!$"

ShoalCave_LowTideIceRoom_EventScript_Aria_Text_1:
# 61 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "AH!$"

ShoalCave_LowTideIceRoom_Text_Sylvia::
# 176 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "If you're gonna try to get the\n commander's attention, don't sneak\l up on them!\p They scare easily.$"

ShoalCave_LowTideIceRoom_Text_BlakeIntro::
# 183 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "For a knight, offense is the best\n defense!$"

ShoalCave_LowTideIceRoom_Text_BlakeDefeat::
# 188 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "H-How did you withstand my\n relentless offense…$"

ShoalCave_LowTideIceRoom_Text_BlakePostBattle::
# 193 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "People think our commander is larping,\n but the armor is real.$"

ShoalCave_LowTideIceRoom_Text_NateIntro::
# 198 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "The greatest'th offense'th be a great\n defense!\p Dost thoust agree'th?$"

ShoalCave_LowTideIceRoom_Text_NateDefeat::
# 204 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "Thoust'th broketh thru'th thine\p defenses'th'snt'nt..$"

ShoalCave_LowTideIceRoom_Text_NatePostBattle::
# 209 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "I surmise thoust seeketh to joineth\n the PROTECTORS? If'th so, thou must\l speaketh to thine commander.$"

ShoalCave_LowTideIceRoom_Text_Aria1::
# 215 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "You scared me!\n  Who are you?\p … … … …\n Oh. A challenger?\p I'm ARIA. LEADER of the MOSSDEEP\n POKéMON GYM and PROTECTOR of the\l SACRED BLADE.\p ARIA: I can stop my training here.\n Me and my knights shall await you\l at the GYM.$"
