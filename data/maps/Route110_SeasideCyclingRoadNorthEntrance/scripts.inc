# 1 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_MapScripts::
# 2 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_SeasideCyclingRoadNorthEntrance_OnTransition
# 3 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.byte 0
# 4 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 5 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_OnTransition:
# 6 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 3, Route110_SeasideCyclingRoadNorthEntrance_EventScript_RestartChallenge
# 7 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 2, Route110_SeasideCyclingRoadNorthEntrance_EventScript_RestartChallenge
# 8 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	call_if_set FLAG_ROUTE110_HIDE_CYCLIST, Route110_SeasideCyclingRoadNorthEntrance_EventScript_SaveBikerMusic
# 9 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	end
# 10 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 11 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_RestartChallenge::
# 12 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 1
# 13 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	return
# 14 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 15 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_Clerk::
# 16 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lock
# 17 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	faceplayer
# 18 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_GoAllOutOnCyclingRoad, MSGBOX_DEFAULT
# 19 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	release
# 20 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	end
# 21 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 22 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck::
# 23 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lockall
# 24 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 25 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	call_if_eq VAR_RESULT, 2, Route110_SeasideCyclingRoadNorthEntrance_EventScript_OnMachBike
# 26 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route110_SeasideCyclingRoadNorthEntrance_EventScript_NoBike
# 27 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setflag FLAG_SYS_CYCLING_ROAD
# 28 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 29 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	releaseall
# 30 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	end
# 31 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 32 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_OnMachBike::
# 33 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 1
# 34 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	return
# 35 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 36 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_NoBike::
# 37 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_TooDangerousToWalk, MSGBOX_DEFAULT
# 38 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	closemessage
# 39 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route110_SeasideCyclingRoadNorthEntrance_Movement_PushPlayerBackFromCounter
# 40 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	releaseall
# 42 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	end
# 43 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 44 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_Movement_PushPlayerBackFromCounter:
# 45 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	walk_left
# 46 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	step_end
# 47 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 48 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_Text_GoAllOutOnCyclingRoad:
# 49 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "On CYCLING ROAD, you can go all out\n"
# 50 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "and cycle as fast as you'd like.\p"
# 51 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "It feels great to go that fast, but try\n"
# 52 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "not to crash into anyone!$"
# 53 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 54 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_Text_TooDangerousToWalk:
# 55 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "Sorry, you can't walk on CYCLING\n"
# 56 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "ROAD. It's too dangerous.\p"
# 57 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "Please come back with a BIKE.$"

Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad::
# 61 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lockall
# 62 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	compare VAR_SPEEDWAGON_STATE, 4
	goto_if_eq Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_2
# 77 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	compare VAR_SPEEDWAGON_STATE, 5
	goto_if_eq Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_3
# 86 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 0
# 87 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	clearflag FLAG_SYS_CYCLING_ROAD
# 88 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 0
Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_1:
# 90 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	releaseall
	end

Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_2:
# 63 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 64 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 1
# 65 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_AreYouCrazy, MSGBOX_AUTOCLOSE
# 66 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmessage
# 67 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	playse SE_PIN
# 68 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 69 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 1
# 70 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	delay 20
# 71 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_ThatBadge
# 72 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmessage
# 73 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 74 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 1
# 75 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 5
	goto Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_1

Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_3:
# 78 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 79 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 1
# 80 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_Text_0, MSGBOX_AUTOCLOSE
# 81 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmessage
# 82 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 83 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 1
	goto Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_1


Route110_SeasideCyclingRoadNorthEntrance_EventScript_SaveBikerMusic::
# 108 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	playbgm MUS_NONE, FALSE
	return


Route110_SeasisdeCyclingRoadNorthEntrance_EventScript_ThankYou::
# 113 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lock
# 114 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 115 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 1
# 116 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasisdeCyclingRoadNorthEntrance_EventScript_ThankYou_Text_0, MSGBOX_AUTOCLOSE
# 117 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmessage
# 118 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 119 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 1
# 120 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 7
# 121 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_CYCLIST
# 122 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	release
	end


Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_Text_0:
# 80 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "Please, help us!$"

Route110_SeasisdeCyclingRoadNorthEntrance_EventScript_ThankYou_Text_0:
# 116 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "Thank you for getting rid of them!$"

Route110_SeasideCyclingRoadNorthEntrance_Text_AreYouCrazy::
# 94 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "Wait!\p You're gonna go confront them?!\n Are you insane?!$"

Route110_SeasideCyclingRoadNorthEntrance_Text_ThatBadge::
# 100 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "That BADGE...! You must be a strong\n TRAINER.\p Okay, I won't stop you.\n Please, help us!$"
