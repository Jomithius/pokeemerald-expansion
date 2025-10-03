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
	call_if_ge VAR_SPEEDWAGON_STATE, 8, Route110_SeasisdeCyclingRoadEntrance_ResetCyclingRoadFlags
# 10 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	end
# 11 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 12 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_RestartChallenge::
# 13 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 1
# 14 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	return
# 15 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 16 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_Clerk::
# 17 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lock
# 18 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	faceplayer
# 19 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_GoAllOutOnCyclingRoad, MSGBOX_DEFAULT
# 20 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	release
# 21 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	end
# 22 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 23 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_UpdateMusic::
# 24 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	savebgm MUS_RG_SILPH
# 25 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	return
# 26 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 27 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck::
# 28 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lockall
# 29 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 30 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	call_if_eq VAR_RESULT, 2, Route110_SeasideCyclingRoadNorthEntrance_EventScript_OnMachBike
# 31 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route110_SeasideCyclingRoadNorthEntrance_EventScript_NoBike
# 32 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setflag FLAG_SYS_CYCLING_ROAD
# 33 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 34 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	releaseall
# 35 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	end
# 36 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 37 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_OnMachBike::
# 38 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 1
# 39 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	return
# 40 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 41 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_NoBike::
# 42 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_TooDangerousToWalk, MSGBOX_DEFAULT
# 43 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	closemessage
# 44 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route110_SeasideCyclingRoadNorthEntrance_Movement_PushPlayerBackFromCounter
# 45 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 0
# 46 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	releaseall
# 47 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	end
# 48 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 49 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_Movement_PushPlayerBackFromCounter:
# 50 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	walk_left
# 51 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	step_end
# 52 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 53 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad::
# 54 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lockall
# 55 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 0
# 56 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	clearflag FLAG_SYS_CYCLING_ROAD
# 57 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 0
# 58 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	releaseall
# 59 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	end
# 60 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 61 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_Text_GoAllOutOnCyclingRoad:
# 62 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "On CYCLING ROAD, you can go all out\n"
# 63 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "and cycle as fast as you'd like.\p"
# 64 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "It feels great to go that fast, but try\n"
# 65 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "not to crash into anyone!$"
# 66 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 67 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_Text_TooDangerousToWalk:
# 68 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "Sorry, you can't walk on CYCLING\n"
# 69 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "ROAD. It's too dangerous.\p"
# 70 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "Please come back with a BIKE.$"

Route110_SeasideCyclingRoadNorthEntrance_EventScript_AreYouCrazy::
# 74 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lockall
# 75 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 76 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 1
# 77 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 78 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_AreYouCrazy, MSGBOX_AUTOCLOSE
# 80 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmessage
# 81 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	playse SE_PIN
# 82 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 83 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 1
# 84 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	delay 20
# 85 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_ThatBadge
# 86 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmessage
# 87 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 88 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 1
# 89 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 90 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 0
# 91 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 5
# 92 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 0
# 93 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	releaseall
	end


Route110_SeasideCyclingRoadNorthEntrance_EventScript_PleaseHelpUs::
# 98 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lockall
# 99 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 0
# 100 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	releaseall
	end


Route110_SeasisdeCyclingRoadNorthEntrance_EventScript_ThankYou::
# 118 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lockall
# 119 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 120 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 1
# 121 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasisdeCyclingRoadNorthEntrance_EventScript_ThankYou_Text_0, MSGBOX_AUTOCLOSE
# 122 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmessage
# 123 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 124 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 1
# 125 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 7
# 126 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_CYCLIST
# 127 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	releaseall
	end


Route110_SeasisdeCyclingRoadNorthEntrance_EventScript_ThankYou_Text_0:
# 121 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "Thank you for getting rid of them!$"

Route110_SeasideCyclingRoadNorthEntrance_Text_AreYouCrazy::
# 104 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "Wait!\p You're gonna go confront them?!\n Are you insane?!$"

Route110_SeasideCyclingRoadNorthEntrance_Text_ThatBadge::
# 110 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "That BADGE…! You must be a strong\n TRAINER.\p Okay. I won't stop you.\n Please, help us!$"
