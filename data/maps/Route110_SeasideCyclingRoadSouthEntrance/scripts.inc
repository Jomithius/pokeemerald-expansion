# 1 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_MapScripts::
# 2 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_SeasideCyclingRoadSouthEntrance_OnTransition
# 3 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.byte 0
# 4 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 5 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_EventScript_Clerk::
# 6 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	lock
# 7 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	faceplayer
# 8 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadSouthEntrance_Text_GoAllOutOnCyclingRoad, MSGBOX_DEFAULT
# 9 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	release
# 10 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	end
# 11 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 12 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_EventScript_BikeCheck::
# 13 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	lockall
# 14 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 15 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route110_SeasideCyclingRoadSouthEntrance_EventScript_NoBike
# 16 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	setflag FLAG_SYS_CYCLING_ROAD
# 17 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 18 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	releaseall
# 19 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	end
# 20 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 21 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_EventScript_NoBike::
# 22 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadSouthEntrance_Text_TooDangerousToWalk, MSGBOX_DEFAULT
# 23 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	closemessage
# 24 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route110_SeasideCyclingRoadSouthEntrance_Movement_PushPlayerBackFromCounter
# 25 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	waitmovement 0
# 26 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	releaseall
# 27 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	end
# 28 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 29 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_Movement_PushPlayerBackFromCounter:
# 30 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	walk_left
# 31 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	step_end
# 32 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 33 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_EventScript_ClearCyclingRoad::
# 34 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	lockall
# 35 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 0
# 36 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	clearflag FLAG_SYS_CYCLING_ROAD
# 37 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 0
# 38 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	releaseall
# 39 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	end
# 40 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 41 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_Text_GoAllOutOnCyclingRoad:
# 42 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "On CYCLING ROAD, you can go all out\n"
# 43 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "and cycle as fast as you'd like.\p"
# 44 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "It feels great to go that fast, but try\n"
# 45 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "not to crash into anyone!$"
# 46 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 47 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_Text_TooDangerousToWalk:
# 48 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "Sorry, you can't walk on CYCLING\n"
# 49 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "ROAD. It's too dangerous.\p"
# 50 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "Please come back with a BIKE.$"

Route110_SeasisdeCyclingRoadSouthEntrance_EventScript_ThankYou::
# 55 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	lockall
# 56 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 57 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	waitmovement 1
# 58 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	msgbox Route110_SeasisdeCyclingRoadSouthEntrance_EventScript_ThankYou_Text_0, MSGBOX_AUTOCLOSE
# 59 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	waitmessage
# 60 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 61 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	waitmovement 1
# 62 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 7
# 63 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_CYCLIST
# 64 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	releaseall
	end


Route110_SeasideCyclingRoadSouthEntrance_OnTransition::
# 69 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	call_if_ge VAR_SPEEDWAGON_STATE, 8, Route110_SeasisdeCyclingRoadEntrance_ResetCyclingRoadFlags
	end


Route110_SeasisdeCyclingRoadEntrance_ResetCyclingRoadFlags::
# 74 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_CYCLIST
	return


Route110_SeasisdeCyclingRoadSouthEntrance_EventScript_ThankYou_Text_0:
# 58 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "Thank you for getting rid of them!$"
