LilycoveCity_HighriseElevator_MapScripts::
# 5 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LilycoveCity_HighriseElevator_OnWarp
# 2 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LilycoveCity_HighriseElevator_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LilycoveCity_HighriseElevator_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	map_script_2 VAR_CEO_STATE, 1, LilycoveCity_HighriseElevator_EventScript_ToFloor2
	.2byte 0


# 8 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"

# 9 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
LilycoveCity_HighriseElevator_OnWarp:
# 10 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, LilycoveCity_HighriseElevator_EventScript_TurnPlayerNorth
# 11 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"

# 12 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
LilycoveCity_HighriseElevator_EventScript_TurnPlayerNorth::
# 13 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 14 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	end

LilycoveCity_HighriseElevator_EventScript_ToFloor2::
# 19 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	lockall
# 20 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	applymovement 1, LilycoveCity_HighriseElevator_Movement_OperateElevator
# 21 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	delay 16
# 22 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_HighriseElevator_Movement_EnterElevator
# 23 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	waitmovement 0
# 24 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	msgbox LilycoveCity_HighriseElevator_EventScript_ToFloor2_Text_0, MSGBOX_AUTOCLOSE
# 25 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	waitmessage
# 26 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	call LilycoveCity_HighriseElevator_EventScript_MoveElevator
# 27 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	delay 25
# 28 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	applymovement 1, LilycoveCity_HighriseElevator_Movement_OperateElevator2
# 29 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	waitmovement 1
# 30 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	removeobject 1
# 31 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	playse SE_EXIT
# 32 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	waitse
# 33 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_HighriseElevator_Movement_ExitElevator
# 34 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	waitmovement 0
# 35 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	warp MAP_LILYCOVE_CITY_HIGHRISE_FLOOR2, 2, 16
# 36 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	waitstate
# 37 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	releaseall
	end


LilycoveCity_HighriseElevator_EventScript_MoveElevator::
# 42 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	setvar VAR_0x8005, 1
# 43 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	setvar VAR_0x8006, 10
# 44 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	waitse
# 45 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	special MoveElevator
# 46 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	waitstate
	return


# 50 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
LilycoveCity_HighriseElevator_Movement_OperateElevator:
# 51 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	walk_left
# 52 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	walk_in_place_down
	step_end

# 55 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
LilycoveCity_HighriseElevator_Movement_OperateElevator2:
# 56 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	walk_right
# 57 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	walk_in_place_down
	step_end

# 60 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
LilycoveCity_HighriseElevator_Movement_EnterElevator:
# 61 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	walk_up
# 61 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	walk_up
# 62 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	walk_in_place_down
	step_end

# 65 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
LilycoveCity_HighriseElevator_Movement_ExitElevator:
# 66 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	walk_down
# 66 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	walk_down
	step_end

LilycoveCity_HighriseElevator_EventScript_ToFloor2_Text_0:
# 24 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	.string "One moment…$"
