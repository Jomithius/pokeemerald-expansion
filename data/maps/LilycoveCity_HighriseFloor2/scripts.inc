LilycoveCity_HighriseFloor2_MapScripts::
# 2 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LilycoveCity_HighriseFloor2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LilycoveCity_HighriseFloor2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	map_script_2 VAR_CEO_STATE, 1, LilycoveCity_HighriseFloor2_EventScript_ToOffice
	.2byte 0


LilycoveCity_HighriseFloor2_EventScript_ToOffice::
# 8 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	lock
# 9 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	applymovement 1, LilycoveCity_HighriseFloor2_Movement_Attendant1
# 10 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	delay 16
# 11 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_HighriseFloor2_Movement_Player1
# 12 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	waitmovement 0
# 13 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 14 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	delay 10
# 15 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 16 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	waitmovement 2
# 17 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	delay 30
# 18 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 19 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	waitmovement 2
# 20 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	applymovement 1, LilycoveCity_HighriseFloor2_Movement_Attendant2
# 21 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	waitmovement 1
# 22 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	playse SE_EXIT
# 23 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	removeobject 1
# 24 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 25 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	waitmovement 0
# 26 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	warp MAP_LILYCOVE_CITY_HIGHRISE_CEO_OFFICE, 7, 13
# 27 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	waitstate
# 28 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	release
	end


# 32 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
LilycoveCity_HighriseFloor2_Movement_Attendant1:
# 33 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_right
# 33 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_right
# 33 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_right
# 34 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
# 34 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
# 34 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
# 34 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
# 34 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
# 34 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
# 34 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
# 34 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
# 34 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
# 34 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
# 34 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
# 34 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
# 34 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
# 34 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
	step_end

# 37 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
LilycoveCity_HighriseFloor2_Movement_Attendant2:
# 38 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_left
# 39 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
	step_end

# 42 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
LilycoveCity_HighriseFloor2_Movement_Player1:
# 43 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_right
# 43 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_right
# 43 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_right
# 43 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_right
# 43 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_right
# 44 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
# 44 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
# 44 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
# 44 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
# 44 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
# 44 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
# 44 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
# 44 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
# 44 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
# 44 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
# 44 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
# 44 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
# 44 "data/maps/LilycoveCity_HighriseFloor2/scripts.pory"
	walk_up
	step_end
