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
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 42 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 0
# 43 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	callnative RemoveFollowingPokemon
# 44 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_1
# 45 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playbgm MUS_NONE, FALSE
# 46 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 20
# 47 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 48 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitse
# 49 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playmoncry SPECIES_ETERNATUS, CRY_MODE_NORMAL
# 50 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_EventScript_Aria_Text_0, MSGBOX_DEFAULT
# 52 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmoncry
# 53 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	closemessage
# 54 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_PIN
# 55 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 56 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 57 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitse
# 58 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setobjectnewmovementtype 3, MOVEMENT_TYPE_NONE
# 59 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 60 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 61 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 40
# 63 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playmoncry SPECIES_TERAPAGOS, CRY_MODE_NORMAL
# 64 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	call ShoalCave_LowTideIceRoom_EventScript_AriaPosition1
# 65 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 66 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_EventScript_Aria_Text_1, MSGBOX_DEFAULT
# 67 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmoncry
# 68 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	closemessage
# 69 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadedefaultbgm
# 70 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	call ShoalCave_LowTideIceRoom_EventScript_AriaPosition2
# 71 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 72 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_Text_Aria1, MSGBOX_AUTOCLOSE
# 73 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 74 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	call ShoalCave_LowTideIceRoom_EventScript_AriaLeave
# 75 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 3
# 76 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 77 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 4
# 78 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 5
# 79 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 6
# 80 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 81 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	callnative UpdateFollowingPokemon
# 82 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_ARIA_SHOAL_CAVE
# 83 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 1
# 84 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_MISA_LILYCOVE_DEPT_5F
# 85 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setvar VAR_MISA_STATE, 8
# 86 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_EMO_LILYCOVE
# 87 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_JOMITHIUS_UNAVAILABLE
# 88 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_RATDUARDO_LILYCOVE
# 89 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	release
	end


ShoalCave_LowTideIceRoom_EventScript_AriaPosition1::
# 94 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_SOUTH
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_2
# 97 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_WEST
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_3
# 101 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, ShoalCave_LowTideIceRoom_Movement_WalkBackRight
ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_1:
	return

ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_2:
# 95 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, ShoalCave_LowTideIceRoom_Movement_WalkBackDown
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_1

ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_3:
# 98 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, ShoalCave_LowTideIceRoom_Movement_WalkBackLeft
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition1_1


ShoalCave_LowTideIceRoom_EventScript_AriaPosition2::
# 107 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_SOUTH
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_2
# 112 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_WEST
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_3
# 118 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkLeft
# 119 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement VAR_LAST_TALKED
# 120 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceLeft
ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_1:
	return

ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_2:
# 108 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkUp
# 109 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement VAR_LAST_TALKED
# 110 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceUp
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_1

ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_3:
# 113 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkRight
# 114 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement VAR_LAST_TALKED
# 115 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceRight
	goto ShoalCave_LowTideIceRoom_EventScript_AriaPosition2_1


ShoalCave_LowTideIceRoom_EventScript_AriaLeave::
# 126 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_SOUTH
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaLeave_2
# 132 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, DIR_WEST
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_AriaLeave_3
# 139 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveRight
# 140 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 141 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 142 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
ShoalCave_LowTideIceRoom_EventScript_AriaLeave_1:
	return

ShoalCave_LowTideIceRoom_EventScript_AriaLeave_2:
# 127 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveUp
# 128 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 129 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 130 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
	goto ShoalCave_LowTideIceRoom_EventScript_AriaLeave_1

ShoalCave_LowTideIceRoom_EventScript_AriaLeave_3:
# 133 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveLeft
# 134 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 135 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 136 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
	goto ShoalCave_LowTideIceRoom_EventScript_AriaLeave_1


ShoalCave_LowTideIceRoom_EventScript_AriaNorth::
# 149 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock
# 150 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playbgm MUS_NONE, FALSE
# 151 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 20
# 152 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_PIN
# 153 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 154 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 155 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 10
# 156 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playse SE_M_YAWN
# 157 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_EventScript_Aria_Text_1, MSGBOX_AUTOCLOSE
# 158 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_WalkBackUp
# 159 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 160 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 161 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadedefaultbgm
# 162 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_Text_Aria1, MSGBOX_AUTOCLOSE
# 163 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 164 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 165 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 166 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, ShoalCave_LowTideIceRoom_Movement_AriaLeaveNorth
# 167 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 3
# 168 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 3
# 169 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 170 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 4
# 171 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 5
# 172 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject 6
# 173 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 174 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_ARIA_SHOAL_CAVE
# 175 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_MISA_LILYCOVE_DEPT_5F
# 176 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setvar VAR_MISA_STATE, 8
# 177 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HIDE_EMO_LILYCOVE
# 178 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_JOMITHIUS_UNAVAILABLE
# 179 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	release
	end


# 237 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackDown:
# 238 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 239 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_down
# 240 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 243 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackLeft:
# 244 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 245 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_left
# 246 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 249 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackRight:
# 250 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 251 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_right
# 252 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 255 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveUp:
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
# 258 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 258 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 259 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 259 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 259 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 259 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
	step_end

# 262 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveLeft:
# 263 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 263 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 263 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 263 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 264 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 264 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 264 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 265 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 265 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 265 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 265 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
	step_end

# 268 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveRight:
# 269 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 269 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 270 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
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

# 276 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_WalkBackUp:
# 277 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock_facing_direction
# 278 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_up
# 278 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_fast_up
# 279 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 282 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_Movement_AriaLeaveNorth:
# 283 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 284 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 284 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 284 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 285 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 285 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_left
# 286 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 286 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 286 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
# 286 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	walk_up
	step_end

ShoalCave_LowTideIceRoom_Trigger_Aria_Text_0:
# 29 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "They're swinging a sword.\n It looks dangerous to approach them\l from the front.$"

ShoalCave_LowTideIceRoom_EventScript_Aria_Text_0:
# 50 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "ARGH!\n AAAARGH!$"

ShoalCave_LowTideIceRoom_EventScript_Aria_Text_1:
# 66 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "AH!$"

ShoalCave_LowTideIceRoom_Text_Sylvia::
# 184 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "If you're gonna try to get the\n commander's attention, don't sneak\l up on them!\p They scare easily.$"

ShoalCave_LowTideIceRoom_Text_BlakeIntro::
# 191 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "For a KNIGHT, offense is the best\n defense!$"

ShoalCave_LowTideIceRoom_Text_BlakeDefeat::
# 196 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "H-How did you withstand my\n relentless offense…$"

ShoalCave_LowTideIceRoom_Text_BlakePostBattle::
# 201 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "People think our commander is larping,\n but the armor is real.$"

ShoalCave_LowTideIceRoom_Text_NateIntro::
# 206 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "The greatest'th offense'th be a great\n defense!\p Doth thoust agree'th?$"

ShoalCave_LowTideIceRoom_Text_NateDefeat::
# 212 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "Thoust'th broketh thru'th thine\n defenses'th'snt'nt…$"

ShoalCave_LowTideIceRoom_Text_NatePostBattle::
# 217 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "I surmise thoust seeketh to joineth\n the PROTECTORS? If'th so, thou must\l speaketh to the KNIGHT commander.$"

ShoalCave_LowTideIceRoom_Text_Aria1::
# 223 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "You scared me!\n  Who are you?\l … … … …\p Oh. A challenger?\n Nice to meet you, {PLAYER}.\p I'm ARIA. LEADER of the MOSSDEEP\n POKéMON GYM and PROTECTOR of the\l SACRED BLADE.\p I can stop my training here.\p Me and my KNIGHTS shall await you\n at the GYM.$"
