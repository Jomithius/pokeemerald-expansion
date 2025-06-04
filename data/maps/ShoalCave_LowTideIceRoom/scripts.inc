# 1 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_MapScripts::
# 2 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.byte 0

ShoalCave_LowTideIceRoom_Trigger_Aria::
# 6 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock
# 7 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 8 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 20
# 9 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_Trigger_Aria_Text_0, MSGBOX_AUTOCLOSE
# 12 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 13 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 14 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 0
# 15 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	release
	end


ShoalCave_LowTideIceRoom_EventScript_Aria::
# 20 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock
# 21 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_1
# 22 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playbgm MUS_NONE, FALSE
# 23 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 20
# 24 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 25 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_EventScript_Aria_Text_0, MSGBOX_AUTOCLOSE
# 26 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 27 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 28 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_EventScript_Aria_Text_1, MSGBOX_AUTOCLOSE
# 29 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 30 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_PIN
# 31 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 32 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 33 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 34 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 35 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 40
# 36 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_M_YAWN
# 37 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	call ShoalCave_LowTideIceRoom_EventScript_AriaPosition1
# 38 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 39 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_EventScript_Aria_Text_2, MSGBOX_AUTOCLOSE
# 40 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 41 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadedefaultbgm
# 42 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	call ShoalCave_LowTideIceRoom_EventScript_AriaPosition2
# 43 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 44 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_Text_Aria1, MSGBOX_AUTOCLOSE
# 45 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 46 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	call ShoalCave_LowTideIceRoom_EventScript_AriaLeave
# 47 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 3
# 48 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 49 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 4
# 50 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 5
# 51 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 6
# 52 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 53 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_ARIA_SHOAL_CAVE
# 54 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 1
# 55 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_MISA_LILYCOVE_DEPT_5F
# 56 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setvar VAR_MISA_STATE, 8
# 57 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_EMO_LILYCOVE
# 58 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	release
	end


ShoalCave_LowTideIceRoom_EventScript_AriaPosition1::
# 63 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_SOUTH
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_2
# 66 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_WEST
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_3
# 70 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_WalkBackRight
ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_1:
	return

ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_2:
# 64 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_WalkBackDown
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_1

ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_3:
# 67 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_WalkBackLeft
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_1


ShoalCave_LowTideIceRoom_EventScript_AriaPosition2::
# 76 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_SOUTH
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_2
# 81 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_WEST
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_3
# 87 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkLeft
# 88 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 89 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_1:
	return

ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_2:
# 77 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkUp
# 78 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 79 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_1

ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_3:
# 82 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkRight
# 83 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 84 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_1


ShoalCave_LowTideIceRoom_EventScript_AriaLeave::
# 95 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_SOUTH
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaLeave_2
# 101 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_WEST
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaLeave_3
# 108 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveRight
# 109 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 110 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 111 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
ShoalCave_LowTideIceRoom_EventScript_AriaLeave_1:
	return

ShoalCave_LowTideIceRoom_EventScript_AriaLeave_2:
# 96 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveUp
# 97 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 98 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 99 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
	goto ShoalCave_LowTideIceRoom_EventScript_AriaLeave_1

ShoalCave_LowTideIceRoom_EventScript_AriaLeave_3:
# 102 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveLeft
# 103 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 104 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 105 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
	goto ShoalCave_LowTideIceRoom_EventScript_AriaLeave_1


ShoalCave_LowTideIceRoom_EventScript_AriaNorth::
# 118 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock
# 119 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playbgm MUS_NONE, FALSE
# 120 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 20
# 121 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_PIN
# 122 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 123 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 124 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 10
# 125 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_M_YAWN
# 126 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_EventScript_Aria_Text_2, MSGBOX_AUTOCLOSE
# 127 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_WalkBackUp
# 128 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 129 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 130 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadedefaultbgm
# 131 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_Text_Aria1, MSGBOX_AUTOCLOSE
# 132 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 133 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 134 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 135 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveNorth
# 136 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 137 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 3
# 138 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 139 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 4
# 140 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 5
# 141 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 6
# 142 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 143 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_ARIA_SHOAL_CAVE
# 144 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_MISA_LILYCOVE_DEPT_5F
# 145 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setvar VAR_MISA_STATE, 8
# 146 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_EMO_LILYCOVE
# 147 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	release
	end


# 165 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackDown:
# 166 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 167 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_down
# 168 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 171 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackLeft:
# 172 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 173 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_left
# 174 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 177 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackRight:
# 178 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 179 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_right
# 180 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 183 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveUp:
# 184 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 185 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 185 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 185 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 185 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 186 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 186 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 187 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 187 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 187 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 187 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
	step_end

# 190 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveLeft:
# 191 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 191 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 191 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 191 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 192 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 192 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 192 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 193 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 193 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 193 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 193 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
	step_end

# 196 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveRight:
# 197 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 197 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 198 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 199 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 199 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 200 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 200 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 201 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 201 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 201 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 201 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
	step_end

# 204 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackUp:
# 205 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 206 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_up
# 206 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_up
# 207 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 210 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveNorth:
# 211 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 212 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 212 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 212 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 213 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 213 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 214 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 214 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 214 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 214 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
	step_end

# 217 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_StopMovement:
# 218 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	disable_anim
	step_end

ShoalCave_LowTideIceRoom_Trigger_Aria_Text_0:
# 9 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "They're swinging a sword.\n It looks dangerous to approach them\l from the front.$"

ShoalCave_LowTideIceRoom_EventScript_Aria_Text_0:
# 25 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "ARGH!$"

ShoalCave_LowTideIceRoom_EventScript_Aria_Text_1:
# 28 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "AAAARGH!$"

ShoalCave_LowTideIceRoom_EventScript_Aria_Text_2:
# 39 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "AH!$"

ShoalCave_LowTideIceRoom_Text_Aria1::
# 152 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "You scared me!\n  Who are you?\p ...\n Oh. A challenger?\p I'm ARIA. LEADER of the MOSSDEEP\n POKéMON GYM and PROTECTOR of the\l SACRED BLADE.\p ARIA: I can stop my training here.\n Me and my knights shall await you\l at the GYM.$"
