LilycoveCity_HighriseElevator_MapScripts::
# 2 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LilycoveCity_HighriseElevator_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LilycoveCity_HighriseElevator_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	map_script_2 VAR_CEO_STATE, 1, LilycoveCity_HighriseElevator_EventScript_ToFloor2
	.2byte 0


LilycoveCity_HighriseElevator_EventScript_ToFloor2::
# 8 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	lock
# 9 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	applymovement 1, LilycoveCity_HighriseElevator_Movement_OperateElevator
# 10 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	delay 16
# 11 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_HighriseElevator_Movement_EnterElevator
# 12 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	waitmovement 0
# 13 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	msgbox LilycoveCity_HighriseElevator_EventScript_ToFloor2_Text_0, MSGBOX_AUTOCLOSE
# 14 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	waitmessage
# 15 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	call LilycoveCity_HighriseElevator_EventScript_MoveElevator
# 16 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	delay 25
# 17 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	applymovement 1, LilycoveCity_HighriseElevator_Movement_OperateElevator2
# 18 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	waitmovement 1
# 19 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	removeobject 1
# 20 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	playse SE_EXIT
# 21 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	waitse
# 22 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_HighriseElevator_Movement_ExitElevator
# 23 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	waitmovement 0
# 24 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	warp MAP_LILYCOVE_CITY_HIGHRISE_FLOOR2, 2, 16
# 25 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	waitstate
# 26 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	release
	end


LilycoveCity_HighriseElevator_EventScript_MoveElevator::
# 31 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	setvar VAR_0x8005, 1
# 32 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	setvar VAR_0x8006, 10
# 33 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	waitse
# 34 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	special MoveElevator
# 35 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	waitstate
	return


# 39 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
LilycoveCity_HighriseElevator_Movement_OperateElevator:
# 40 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	walk_left
# 41 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	walk_in_place_down
	step_end

# 44 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
LilycoveCity_HighriseElevator_Movement_OperateElevator2:
# 45 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	walk_right
# 46 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	walk_in_place_down
	step_end

# 49 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
LilycoveCity_HighriseElevator_Movement_EnterElevator:
# 50 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	walk_up
# 50 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	walk_up
# 51 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	walk_in_place_down
	step_end

# 54 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
LilycoveCity_HighriseElevator_Movement_ExitElevator:
# 55 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	walk_down
# 55 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	walk_down
	step_end

LilycoveCity_HighriseElevator_EventScript_ToFloor2_Text_0:
# 13 "data/maps/LilycoveCity_HighriseElevator/scripts.pory"
	.string "One moment…$"
