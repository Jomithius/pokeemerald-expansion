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
	call_if_set FLAG_SYS_BIKERS_ROUTE_110, Route110_SeasideCyclingRoadNorthEntrance_UpdateMusic
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
Route110_SeasideCyclingRoadNorthEntrance_UpdateMusic::
# 23 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	playbgm MUS_RG_SILPH, TRUE
# 24 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	return
# 25 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 26 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck::
# 27 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lockall
# 28 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 29 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	call_if_eq VAR_RESULT, 2, Route110_SeasideCyclingRoadNorthEntrance_EventScript_OnMachBike
# 30 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route110_SeasideCyclingRoadNorthEntrance_EventScript_NoBike
# 31 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setflag FLAG_SYS_CYCLING_ROAD
# 32 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 33 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	releaseall
# 34 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	end
# 35 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 36 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_OnMachBike::
# 37 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 1
# 38 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	return
# 39 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 40 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_NoBike::
# 41 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_TooDangerousToWalk, MSGBOX_DEFAULT
# 42 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	closemessage
# 43 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route110_SeasideCyclingRoadNorthEntrance_Movement_PushPlayerBackFromCounter
# 44 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	releaseall
# 46 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	end
# 47 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 48 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_Movement_PushPlayerBackFromCounter:
# 49 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	walk_left
# 50 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	step_end
# 51 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 52 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_Text_GoAllOutOnCyclingRoad:
# 53 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "On CYCLING ROAD, you can go all out\n"
# 54 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "and cycle as fast as you'd like.\p"
# 55 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "It feels great to go that fast, but try\n"
# 56 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "not to crash into anyone!$"
# 57 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 58 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_Text_TooDangerousToWalk:
# 59 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "Sorry, you can't walk on CYCLING\n"
# 60 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "ROAD. It's too dangerous.\p"
# 61 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "Please come back with a BIKE.$"

Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad::
# 65 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lockall
# 66 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	compare VAR_SPEEDWAGON_STATE, 4
	goto_if_eq Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_2
# 81 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	compare VAR_SPEEDWAGON_STATE, 5
	goto_if_eq Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_3
# 90 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 0
# 91 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	clearflag FLAG_SYS_CYCLING_ROAD
# 92 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 0
Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_1:
# 94 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	releaseall
	end

Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_2:
# 67 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 68 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 1
# 69 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_AreYouCrazy, MSGBOX_AUTOCLOSE
# 70 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmessage
# 71 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	playse SE_PIN
# 72 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 73 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 1
# 74 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	delay 20
# 75 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_ThatBadge
# 76 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmessage
# 77 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 78 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 1
# 79 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 5
	goto Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_1

Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_3:
# 82 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 83 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 1
# 84 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_Text_0, MSGBOX_AUTOCLOSE
# 85 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmessage
# 86 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 87 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 1
	goto Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_1


Route110_SeasisdeCyclingRoadNorthEntrance_EventScript_ThankYou::
# 112 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lock
# 113 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 114 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 1
# 115 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasisdeCyclingRoadNorthEntrance_EventScript_ThankYou_Text_0, MSGBOX_AUTOCLOSE
# 116 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmessage
# 117 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 118 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 1
# 119 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 7
# 120 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_CYCLIST
# 121 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	release
	end


Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad_Text_0:
# 84 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "Please, help us!$"

Route110_SeasisdeCyclingRoadNorthEntrance_EventScript_ThankYou_Text_0:
# 115 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "Thank you for getting rid of them!$"

Route110_SeasideCyclingRoadNorthEntrance_Text_AreYouCrazy::
# 98 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "Wait!\p You're gonna go confront them?!\n Are you insane?!$"

Route110_SeasideCyclingRoadNorthEntrance_Text_ThatBadge::
# 104 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "That BADGE…! You must be a strong\n TRAINER.\p Okay, I won't stop you.\n Please, help us!$"
