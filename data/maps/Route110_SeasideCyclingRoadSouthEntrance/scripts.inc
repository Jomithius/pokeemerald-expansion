# 1 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_MapScripts::
# 2 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.byte 0
# 3 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 4 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_EventScript_Clerk::
# 5 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	lock
# 6 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	faceplayer
# 7 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadSouthEntrance_Text_GoAllOutOnCyclingRoad, MSGBOX_DEFAULT
# 8 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	release
# 9 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	end
# 10 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 11 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_EventScript_BikeCheck::
# 12 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	lockall
# 13 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 14 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route110_SeasideCyclingRoadSouthEntrance_EventScript_NoBike
# 15 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	setflag FLAG_SYS_CYCLING_ROAD
# 16 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 17 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	releaseall
# 18 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	end
# 19 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 20 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_EventScript_NoBike::
# 21 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadSouthEntrance_Text_TooDangerousToWalk, MSGBOX_DEFAULT
# 22 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	closemessage
# 23 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route110_SeasideCyclingRoadSouthEntrance_Movement_PushPlayerBackFromCounter
# 24 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	waitmovement 0
# 25 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	releaseall
# 26 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	end
# 27 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 28 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_Movement_PushPlayerBackFromCounter:
# 29 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	walk_left
# 30 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	step_end
# 31 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 32 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_Text_GoAllOutOnCyclingRoad:
# 33 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "On CYCLING ROAD, you can go all out\n"
# 34 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "and cycle as fast as you'd like.\p"
# 35 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "It feels great to go that fast, but try\n"
# 36 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "not to crash into anyone!$"
# 37 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 38 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_Text_TooDangerousToWalk:
# 39 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "Sorry, you can't walk on CYCLING\n"
# 40 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "ROAD. It's too dangerous.\p"
# 41 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "Please come back with a BIKE.$"

Route110_SeasideCyclingRoadSouthEntrance_EventScript_ClearCyclingRoad::
# 45 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	lockall
# 46 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	compare VAR_SPEEDWAGON_STATE, 5
	goto_if_eq Route110_SeasideCyclingRoadSouthEntrance_EventScript_ClearCyclingRoad_2
# 56 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 0
# 57 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	clearflag FLAG_SYS_CYCLING_ROAD
# 58 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 0
Route110_SeasideCyclingRoadSouthEntrance_EventScript_ClearCyclingRoad_1:
# 60 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	releaseall
	end

Route110_SeasideCyclingRoadSouthEntrance_EventScript_ClearCyclingRoad_2:
# 47 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 48 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	waitmovement 1
# 49 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadSouthEntrance_EventScript_ClearCyclingRoad_Text_0, MSGBOX_AUTOCLOSE
# 50 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	waitmessage
# 51 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 52 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	waitmovement 1
# 53 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 6
	goto Route110_SeasideCyclingRoadSouthEntrance_EventScript_ClearCyclingRoad_1


Route110_SeasideCyclingRoadSouthEntrance_EventScript_ClearCyclingRoad_Text_0:
# 49 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "Thank you for getting rid of them!$"
