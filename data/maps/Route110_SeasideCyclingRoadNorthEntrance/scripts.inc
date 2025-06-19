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
	end
# 9 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 10 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_RestartChallenge::
# 11 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 1
# 12 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	return
# 13 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 14 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_Clerk::
# 15 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lock
# 16 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	faceplayer
# 17 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_GoAllOutOnCyclingRoad, MSGBOX_DEFAULT
# 18 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	release
# 19 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	end
# 20 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 21 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck::
# 22 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lockall
# 23 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 24 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	call_if_eq VAR_RESULT, 2, Route110_SeasideCyclingRoadNorthEntrance_EventScript_OnMachBike
# 25 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route110_SeasideCyclingRoadNorthEntrance_EventScript_NoBike
# 26 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setflag FLAG_SYS_CYCLING_ROAD
# 27 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 28 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	releaseall
# 29 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	end
# 30 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 31 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_OnMachBike::
# 32 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 1
# 33 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	return
# 34 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 35 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_NoBike::
# 36 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_TooDangerousToWalk, MSGBOX_DEFAULT
# 37 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	closemessage
# 38 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route110_SeasideCyclingRoadNorthEntrance_Movement_PushPlayerBackFromCounter
# 39 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	releaseall
# 41 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	end
# 42 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 43 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_Movement_PushPlayerBackFromCounter:
# 44 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	walk_left
# 45 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	step_end
# 46 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 47 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_Text_GoAllOutOnCyclingRoad:
# 48 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "On CYCLING ROAD, you can go all out\n"
# 49 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "and cycle as fast as you'd like.\p"
# 50 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "It feels great to go that fast, but try\n"
# 51 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "not to crash into anyone!$"
# 52 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 53 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_Text_TooDangerousToWalk:
# 54 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "Sorry, you can't walk on CYCLING\n"
# 55 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "ROAD. It's too dangerous.\p"
# 56 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "Please come back with a BIKE.$"

Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad::
# 60 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lockall
# 61 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	compare VAR_SPEEDWAGON_STATE, 4
	goto_if_eq Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_2
# 76 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	compare VAR_SPEEDWAGON_STATE, 5
	goto_if_eq Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_3
# 85 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 0
# 86 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	clearflag FLAG_SYS_CYCLING_ROAD
# 87 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 0
Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_1:
# 89 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	releaseall
	end

Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_2:
# 62 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 63 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 1
# 64 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_AreYouCrazy, MSGBOX_AUTOCLOSE
# 65 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmessage
# 66 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	playse SE_PIN
# 67 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 68 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 1
# 69 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	delay 20
# 70 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_ThatBadge
# 71 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmessage
# 72 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 73 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 1
# 74 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 5
	goto Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_1

Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_3:
# 77 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 78 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 1
# 79 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_Text_0, MSGBOX_AUTOCLOSE
# 80 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmessage
# 81 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 82 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 1
	goto Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_1


Route110_SeasisdeCyclingRoadNorthEntrance_EventScript_ThankYou::
# 107 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lock
# 108 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 109 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 1
# 110 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasisdeCyclingRoadNorthEntrance_EventScript_ThankYou_Text_0, MSGBOX_AUTOCLOSE
# 111 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmessage
# 112 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 113 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 1
# 114 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 7
# 115 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_CYCLIST
# 116 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	release
	end


Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_Text_0:
# 79 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "Please, help us!$"

Route110_SeasisdeCyclingRoadNorthEntrance_EventScript_ThankYou_Text_0:
# 110 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "Thank you for getting rid of them!$"

Route110_SeasideCyclingRoadNorthEntrance_Text_AreYouCrazy::
# 93 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "Wait!\p You're gonna go confront them?!\n Are you insane?!$"

Route110_SeasideCyclingRoadNorthEntrance_Text_ThatBadge::
# 99 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "That BADGE…! You must be a strong\n TRAINER.\p Okay, I won't stop you.\n Please, help us!$"
