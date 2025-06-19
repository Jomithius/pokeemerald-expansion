# 1 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_NORMAN, 12
# 2 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_WALLY, 9
# 3 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_WALLYS_DAD, 10
# 4 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_LUNA_F, 13
# 5 "data/maps/PetalburgCity_Gym/scripts.pory"

# 6 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_MapScripts::
# 7 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_Gym_OnLoad
# 8 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_Gym_OnTransition
# 9 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_Gym_OnWarp
# 10 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_Gym_OnFrame
# 11 "data/maps/PetalburgCity_Gym/scripts.pory"
	.byte 0
# 12 "data/maps/PetalburgCity_Gym/scripts.pory"

# 13 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnLoad:
# 14 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_OpenUnlockedDoors
# 15 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_ge VAR_PETALBURG_GYM_STATE, 7, PetalburgCity_Gym_EventScript_UnlockAllDoors
# 16 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 17 "data/maps/PetalburgCity_Gym/scripts.pory"

# 18 "data/maps/PetalburgCity_Gym/scripts.pory"
@ NOTE: Strength and OHKO rooms are misleading. Both are more accurately Critical-Hit
# 19 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenUnlockedDoors::
# 20 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 21 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 22 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 23 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 24 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 25 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 26 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 27 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 28 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 29 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 30 "data/maps/PetalburgCity_Gym/scripts.pory"

# 31 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockAllDoors::
# 32 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 33 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 34 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 35 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 36 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 37 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 38 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 39 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 40 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 41 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 42 "data/maps/PetalburgCity_Gym/scripts.pory"

# 43 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition:
# 44 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_MoveWallyToEntrance
# 45 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_MoveNormanToEntrance
# 46 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_CheckNormanForRematch
# 47 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 48 "data/maps/PetalburgCity_Gym/scripts.pory"

# 49 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveWallyToEntrance::
# 50 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_WALLY, 5, 108
# 51 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 52 "data/maps/PetalburgCity_Gym/scripts.pory"

# 53 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveNormanToEntrance::
# 54 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_NORMAN, 4, 107
# 55 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 56 "data/maps/PetalburgCity_Gym/scripts.pory"

# 57 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CheckNormanForRematch::
# 58 "data/maps/PetalburgCity_Gym/scripts.pory"
	setorcopyvar VAR_TRAINER_BATTLE_OPPONENT_A, TRAINER_NORMAN_1
# 59 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsTrainerReadyForRematch
# 60 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 61 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 62 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_LUNA_F, 4, 107
# 63 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 64 "data/maps/PetalburgCity_Gym/scripts.pory"

# 65 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontMoveNormanToFront::
# 66 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 8
# 67 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 68 "data/maps/PetalburgCity_Gym/scripts.pory"

# 69 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnWarp:
# 70 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_TurnPlayerNorth
# 71 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 72 "data/maps/PetalburgCity_Gym/scripts.pory"

# 73 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_TurnPlayerNorth::
# 74 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 75 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 76 "data/maps/PetalburgCity_Gym/scripts.pory"

# 77 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnFrame:
# 78 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial
# 79 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 80 "data/maps/PetalburgCity_Gym/scripts.pory"

# 81 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial::
# 82 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 83 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadSoDidItWorkOut, MSGBOX_DEFAULT
# 84 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouBye, MSGBOX_DEFAULT
# 85 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitGym
# 88 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 89 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_EXIT
# 90 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLY
# 91 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 92 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 93 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 94 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 95 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoCollectBadges, MSGBOX_DEFAULT
# 96 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 97 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 98 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 99 "data/maps/PetalburgCity_Gym/scripts.pory"

# 100 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitGym:
# 101 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 102 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 103 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 104 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 105 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 106 "data/maps/PetalburgCity_Gym/scripts.pory"

# 107 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman::
# 108 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 109 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 110 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 111 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_NormanNoBadges
# 112 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_NormanOneBadge
# 113 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_NormanTwoBadges
# 114 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 5, PetalburgCity_Gym_EventScript_NormanThreeBadges
# 115 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 6, PetalburgCity_Gym_EventScript_NormanBattle
# 116 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 7, PetalburgCity_Gym_EventScript_NormanPostBattle
# 117 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 8, PetalburgCity_Gym_EventScript_NormanRematch
# 118 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 119 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 120 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 121 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_SOUTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth
# 122 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
# 123 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_BeginWallyTutorialWest
# 124 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_BeginWallyTutorialEast
# 125 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 126 "data/maps/PetalburgCity_Gym/scripts.pory"

# 127 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth::
# 128 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 0
# 129 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 130 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 131 "data/maps/PetalburgCity_Gym/scripts.pory"

# 132 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth::
# 133 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 134 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 135 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"

# 137 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialWest::
# 138 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 139 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 140 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 141 "data/maps/PetalburgCity_Gym/scripts.pory"

# 142 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialEast::
# 143 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 144 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 145 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 146 "data/maps/PetalburgCity_Gym/scripts.pory"

# 147 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial::
# 148 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_WALLY
# 149 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyArriveSouth
# 151 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyArriveNorth
# 152 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 153 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon, MSGBOX_DEFAULT
# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight, MSGBOX_DEFAULT
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon, MSGBOX_DEFAULT
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHmISee, MSGBOX_DEFAULT
# 158 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth
# 159 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth
# 160 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressPlayerWest
# 161 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressPlayerEast
# 162 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally, MSGBOX_DEFAULT
# 163 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressWallySouth
# 164 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressWallyNorth
# 165 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressWallyWest
# 166 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressWallyEast
# 167 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon, MSGBOX_DEFAULT
# 168 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall, MSGBOX_DEFAULT
# 169 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyOhWowThankYou, MSGBOX_DEFAULT
# 170 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanFaceDoorSouth
# 171 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanFaceDoorNorth
# 172 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanFaceDoorWest
# 173 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanFaceDoorEast
# 174 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 175 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyFaceDown
# 176 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 177 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 178 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WouldYouReallyComeWithMe, MSGBOX_DEFAULT
# 179 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 180 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 181 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 182 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_ExitGymWithWallySouth
# 183 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth
# 184 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallyWest
# 185 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallyEast
# 186 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLY
# 187 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 188 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 189 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 2
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 193 "data/maps/PetalburgCity_Gym/scripts.pory"
	special InitBirchState
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 197 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"

# 199 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveSouth::
# 200 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 201 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 202 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 203 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 204 "data/maps/PetalburgCity_Gym/scripts.pory"

# 205 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveNorth::
# 206 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArriveNorth
# 207 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 208 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 209 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 210 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 211 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 212 "data/maps/PetalburgCity_Gym/scripts.pory"

# 213 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveWestEast::
# 214 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 215 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 216 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 217 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 218 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 219 "data/maps/PetalburgCity_Gym/scripts.pory"

# 220 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallySouth::
# 221 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 222 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 223 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallySouth
# 224 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 226 "data/maps/PetalburgCity_Gym/scripts.pory"

# 227 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth::
# 228 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitNorth
# 229 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth
# 230 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 231 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 232 "data/maps/PetalburgCity_Gym/scripts.pory"

# 233 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyWest::
# 234 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 235 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyWest
# 236 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 237 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 238 "data/maps/PetalburgCity_Gym/scripts.pory"

# 239 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyEast::
# 240 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitEast
# 241 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyEast
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 244 "data/maps/PetalburgCity_Gym/scripts.pory"

# 245 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth::
# 246 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterUp
# 247 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 248 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 249 "data/maps/PetalburgCity_Gym/scripts.pory"

# 250 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth::
# 251 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 252 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 253 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 254 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 255 "data/maps/PetalburgCity_Gym/scripts.pory"

# 256 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerWest::
# 257 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 258 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 259 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 260 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 261 "data/maps/PetalburgCity_Gym/scripts.pory"

# 262 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerEast::
# 263 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 264 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 265 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 266 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 267 "data/maps/PetalburgCity_Gym/scripts.pory"

# 268 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallySouth::
# 269 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 270 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 271 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 272 "data/maps/PetalburgCity_Gym/scripts.pory"

# 273 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyNorth::
# 274 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 275 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 276 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"

# 278 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyWest::
# 279 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 280 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 281 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 282 "data/maps/PetalburgCity_Gym/scripts.pory"

# 283 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyEast::
# 284 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 285 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 286 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 287 "data/maps/PetalburgCity_Gym/scripts.pory"

# 288 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFacePlayer::
# 289 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 290 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 291 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 292 "data/maps/PetalburgCity_Gym/scripts.pory"

# 293 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFaceDown::
# 294 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterDown
# 295 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 296 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 297 "data/maps/PetalburgCity_Gym/scripts.pory"

# 298 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanNoBadges::
# 299 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro, MSGBOX_DEFAULT
# 300 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 301 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 302 "data/maps/PetalburgCity_Gym/scripts.pory"

# 303 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanOneBadge::
# 304 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford, MSGBOX_DEFAULT
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 306 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 307 "data/maps/PetalburgCity_Gym/scripts.pory"

# 308 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanTwoBadges::
# 309 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 311 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 312 "data/maps/PetalburgCity_Gym/scripts.pory"

# 313 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanThreeBadges::
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 316 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 317 "data/maps/PetalburgCity_Gym/scripts.pory"

# 318 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorSouth::
# 319 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 320 "data/maps/PetalburgCity_Gym/scripts.pory"

# 321 "data/maps/PetalburgCity_Gym/scripts.pory"
@ For all other NormanFaceDoorX, Norman is already facing the door from NormanAddressWallyX
# 322 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorNorth::
# 323 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 324 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 325 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 326 "data/maps/PetalburgCity_Gym/scripts.pory"

# 327 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorWest::
# 328 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 329 "data/maps/PetalburgCity_Gym/scripts.pory"

# 330 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorEast::
# 331 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 332 "data/maps/PetalburgCity_Gym/scripts.pory"

# 333 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanPostBattle::
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry
# 335 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_GiveEnigmaBerry
# 336 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_FACADE, PetalburgCity_Gym_EventScript_GiveFacade2
# 337 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough
# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoingToKeepTraining, MSGBOX_DEFAULT
# 339 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 340 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"

# 342 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade2::
# 343 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 345 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 346 "data/maps/PetalburgCity_Gym/scripts.pory"

# 347 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanRematch::
# 348 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanPreRematch, PetalburgCity_Gym_Text_NormanRematchDefeat, PetalburgCity_Gym_Text_NormanRematchNeedTwoMons
# 349 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanPostRematch, MSGBOX_AUTOCLOSE
# 350 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 351 "data/maps/PetalburgCity_Gym/scripts.pory"

# 352 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry::
# 353 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 354 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 355 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_ENIGMA_BERRY_E_READER
# 356 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 357 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkpcitem ITEM_ENIGMA_BERRY_E_READER
# 358 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_ENIGMA_BERRY_AVAILABLE, 0, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 360 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry, MSGBOX_DEFAULT
# 361 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, TRUE
# 362 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 363 "data/maps/PetalburgCity_Gym/scripts.pory"

# 364 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry::
# 365 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
# 366 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 367 "data/maps/PetalburgCity_Gym/scripts.pory"

# 368 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveEnigmaBerry::
# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ENIGMA_BERRY_E_READER
# 370 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 371 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
# 372 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 374 "data/maps/PetalburgCity_Gym/scripts.pory"

# 375 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanBattle::
# 376 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanIntro, MSGBOX_DEFAULT
# 377 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanDefeat
# 378 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 379 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
# 382 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 383 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 384 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 385 "data/maps/PetalburgCity_Gym/scripts.pory"
	special ResetHealLocationFromDewford
# 386 "data/maps/PetalburgCity_Gym/scripts.pory"
	call EventScript_HideMrBriney
# 387 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 388 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 389 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 5
# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
# 392 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 393 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 394 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 395 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveSwordsDance
# 396 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 397 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 399 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 40
# 400 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 401 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_WALLYS_DAD
# 403 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 404 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_WallysDadArrivesNorth
# 405 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_WallysDadArrivesWest
# 406 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_WallysDadArrivesEast
# 407 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 408 "data/maps/PetalburgCity_Gym/scripts.pory"

# 409 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade::
# 410 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_FACADE
# 411 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 412 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_FACADE
# 413 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainFacade, MSGBOX_DEFAULT
# 414 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 415 "data/maps/PetalburgCity_Gym/scripts.pory"

# 416 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesNorth::
# 417 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 418 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 419 "data/maps/PetalburgCity_Gym/scripts.pory"

# 420 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesEast::
# 421 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 422 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 423 "data/maps/PetalburgCity_Gym/scripts.pory"

# 424 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesWest::
# 425 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 426 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 427 "data/maps/PetalburgCity_Gym/scripts.pory"

# 428 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives::
# 429 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadEnterGym
# 430 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 431 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_PIN
# 432 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_ExclamationMark
# 433 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 434 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_Delay48
# 435 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 436 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 437 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth
# 438 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast
# 439 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest
# 440 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 441 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 442 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 443 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth
# 444 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast
# 445 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest
# 446 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LetMeBorrowPlayer, MSGBOX_DEFAULT
# 447 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 448 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 449 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 450 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth
# 451 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast
# 452 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest
# 453 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLYS_DAD
# 454 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 4
# 455 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 456 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 457 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 458 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 459 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 460 "data/maps/PetalburgCity_Gym/scripts.pory"

# 461 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth::
# 462 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterUp
# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 464 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 465 "data/maps/PetalburgCity_Gym/scripts.pory"

# 466 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast::
# 467 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterRight
# 468 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 469 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 470 "data/maps/PetalburgCity_Gym/scripts.pory"

# 471 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest::
# 472 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterLeft
# 473 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 474 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 475 "data/maps/PetalburgCity_Gym/scripts.pory"

# 476 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth::
# 477 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth
# 478 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 479 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 480 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 481 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 482 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 483 "data/maps/PetalburgCity_Gym/scripts.pory"

# 484 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast::
# 485 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast
# 486 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 487 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 488 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 490 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 491 "data/maps/PetalburgCity_Gym/scripts.pory"

# 492 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest::
# 493 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest
# 494 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 495 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 496 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 497 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 498 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 499 "data/maps/PetalburgCity_Gym/scripts.pory"

# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth::
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitNorth
# 502 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 503 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth
# 504 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 505 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 506 "data/maps/PetalburgCity_Gym/scripts.pory"

# 507 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast::
# 508 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitEast
# 509 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast
# 510 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 511 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 512 "data/maps/PetalburgCity_Gym/scripts.pory"

# 513 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest::
# 514 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitWest
# 515 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest
# 516 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 517 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 518 "data/maps/PetalburgCity_Gym/scripts.pory"

# 519 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitNorth:
# 520 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 521 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 522 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 523 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 524 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 525 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 526 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 527 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 528 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 529 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 530 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 531 "data/maps/PetalburgCity_Gym/scripts.pory"

# 532 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitEast:
# 533 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 534 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 535 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 536 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 537 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 538 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 539 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 540 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 541 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 542 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 543 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 544 "data/maps/PetalburgCity_Gym/scripts.pory"

# 545 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitWest:
# 546 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 547 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 548 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 549 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 550 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 551 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 552 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 553 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 554 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 555 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 556 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 557 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 558 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 559 "data/maps/PetalburgCity_Gym/scripts.pory"

# 560 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth:
# 561 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 562 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 563 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 564 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 565 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 566 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 567 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 568 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 569 "data/maps/PetalburgCity_Gym/scripts.pory"

# 570 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast:
# 571 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 572 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 573 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 574 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 575 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 576 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 577 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 578 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 579 "data/maps/PetalburgCity_Gym/scripts.pory"

# 580 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest:
# 581 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 582 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 583 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 584 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 585 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 586 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 587 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 588 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 589 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 590 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 591 "data/maps/PetalburgCity_Gym/scripts.pory"

# 592 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadEnterGym:
# 593 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 594 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 595 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 596 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 597 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 598 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 599 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 601 "data/maps/PetalburgCity_Gym/scripts.pory"

# 602 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth:
# 603 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 604 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 605 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 606 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 607 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 608 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 609 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 610 "data/maps/PetalburgCity_Gym/scripts.pory"

# 611 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast:
# 612 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 613 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 614 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 615 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 616 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 617 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 618 "data/maps/PetalburgCity_Gym/scripts.pory"

# 619 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest:
# 620 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 621 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 622 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 623 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 624 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 625 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 626 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 627 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 628 "data/maps/PetalburgCity_Gym/scripts.pory"

# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_Unused:
# 630 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 631 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 632 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 633 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 634 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 635 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 636 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 637 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 638 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 639 "data/maps/PetalburgCity_Gym/scripts.pory"

# 640 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArriveNorth:
# 641 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 642 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 643 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 644 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 645 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 646 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 647 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 648 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 649 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 650 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 651 "data/maps/PetalburgCity_Gym/scripts.pory"

# 652 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArrive:
# 653 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 654 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 655 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 656 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 657 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 658 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 659 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 660 "data/maps/PetalburgCity_Gym/scripts.pory"

# 661 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitNorth:
# 662 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 663 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 664 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 665 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 666 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 667 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 668 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 669 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 670 "data/maps/PetalburgCity_Gym/scripts.pory"

# 671 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitEast:
# 672 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 673 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 674 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 675 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 676 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 677 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 678 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 679 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 680 "data/maps/PetalburgCity_Gym/scripts.pory"

# 681 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitSouthWest:
# 682 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 683 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 684 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 685 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 686 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 687 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 688 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 689 "data/maps/PetalburgCity_Gym/scripts.pory"

# 690 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth:
# 691 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 692 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 693 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 694 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 695 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 696 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 697 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 698 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 699 "data/maps/PetalburgCity_Gym/scripts.pory"

# 700 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallySouth:
# 701 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 702 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 703 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 704 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 705 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 706 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 707 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 708 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 709 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 710 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 711 "data/maps/PetalburgCity_Gym/scripts.pory"

# 712 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyWest:
# 713 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 714 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 715 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 716 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 717 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 718 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 719 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 720 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 721 "data/maps/PetalburgCity_Gym/scripts.pory"

# 722 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyEast:
# 723 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 724 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 725 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 726 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 727 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 728 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 729 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 730 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 731 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 732 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 733 "data/maps/PetalburgCity_Gym/scripts.pory"

# 734 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough::
# 735 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough, MSGBOX_DEFAULT
# 736 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 737 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 738 "data/maps/PetalburgCity_Gym/scripts.pory"

# 739 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor::
# 740 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 741 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 742 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 743 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 744 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterSpeedRoom, MSGBOX_YESNO
# 745 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 746 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 747 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 748 "data/maps/PetalburgCity_Gym/scripts.pory"

# 749 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom::
# 750 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 751 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 752 "data/maps/PetalburgCity_Gym/scripts.pory"
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
# 753 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 754 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 755 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 756 "data/maps/PetalburgCity_Gym/scripts.pory"

# 757 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontEnterRoom::
# 758 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 759 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 760 "data/maps/PetalburgCity_Gym/scripts.pory"

# 761 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DoorLocked::
# 762 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
# 763 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 764 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 765 "data/maps/PetalburgCity_Gym/scripts.pory"

# 766 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8008 and VAR_0x8009 below are the x and y coordinates of the warp
# 767 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
# 768 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 769 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 770 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 771 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 98
# 772 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterAccuracyRoom, MSGBOX_YESNO
# 773 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 774 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 775 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 776 "data/maps/PetalburgCity_Gym/scripts.pory"

# 777 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ConfusionRoomDoor::
# 778 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 779 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 780 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 781 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 46
# 782 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterConfusionRoom, MSGBOX_YESNO
# 783 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 784 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 785 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 786 "data/maps/PetalburgCity_Gym/scripts.pory"

# 787 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor::
# 788 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 789 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 790 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 791 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 792 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 793 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 794 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 795 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 796 "data/maps/PetalburgCity_Gym/scripts.pory"

# 797 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor::
# 798 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 799 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 800 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 801 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 802 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 803 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 804 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 805 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 806 "data/maps/PetalburgCity_Gym/scripts.pory"

# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 809 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 810 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 811 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 812 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterRecoveryRoom, MSGBOX_YESNO
# 813 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 814 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 815 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 816 "data/maps/PetalburgCity_Gym/scripts.pory"

# 817 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
# 818 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 819 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_DoorLocked
# 820 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 821 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 822 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 823 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 824 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 825 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 826 "data/maps/PetalburgCity_Gym/scripts.pory"

# 827 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
# 828 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 829 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 830 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 831 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 832 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 833 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 834 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 835 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 836 "data/maps/PetalburgCity_Gym/scripts.pory"

# 837 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor::
# 838 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 839 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 840 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 841 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 842 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 843 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 844 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 845 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 846 "data/maps/PetalburgCity_Gym/scripts.pory"

# 847 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightOHKORoomDoor::
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 849 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_DoorLocked
# 850 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 851 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 852 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 853 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 854 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 855 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 856 "data/maps/PetalburgCity_Gym/scripts.pory"

# 857 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor::
# 858 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 859 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_DoorLocked
# 860 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 861 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 862 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 863 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 864 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 865 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 866 "data/maps/PetalburgCity_Gym/scripts.pory"

# 867 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 869 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_DoorLocked
# 870 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 871 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 872 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 873 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 874 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 875 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 876 "data/maps/PetalburgCity_Gym/scripts.pory"

# 877 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall::
# 878 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallIntro, PetalburgCity_Gym_Text_RandallDefeat, PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors
# 879 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_RandallPostBadge
# 880 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 881 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 882 "data/maps/PetalburgCity_Gym/scripts.pory"

# 883 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
# 884 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 885 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 886 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 887 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 888 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 889 "data/maps/PetalburgCity_Gym/scripts.pory"

# 890 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallPostBadge::
# 891 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
# 892 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 893 "data/maps/PetalburgCity_Gym/scripts.pory"

# 894 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker::
# 895 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerIntro, PetalburgCity_Gym_Text_ParkerDefeat, PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors
# 896 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_ParkerPostBadge
# 897 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 898 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 899 "data/maps/PetalburgCity_Gym/scripts.pory"

# 900 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
# 901 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 902 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 903 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 904 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 905 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 906 "data/maps/PetalburgCity_Gym/scripts.pory"

# 907 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerPostBadge::
# 908 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
# 909 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 910 "data/maps/PetalburgCity_Gym/scripts.pory"

# 911 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George::
# 912 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeIntro, PetalburgCity_Gym_Text_GeorgeDefeat, PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors
# 913 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GeorgePostBadge
# 914 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 915 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 916 "data/maps/PetalburgCity_Gym/scripts.pory"

# 917 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
# 918 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 919 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 920 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 921 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 922 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 923 "data/maps/PetalburgCity_Gym/scripts.pory"

# 924 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgePostBadge::
# 925 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
# 926 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 927 "data/maps/PetalburgCity_Gym/scripts.pory"

# 928 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke::
# 929 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeIntro, PetalburgCity_Gym_Text_BerkeDefeat, PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors
# 930 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_BerkePostBadge
# 931 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 932 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 933 "data/maps/PetalburgCity_Gym/scripts.pory"

# 934 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
# 935 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 936 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 937 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 938 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 939 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 940 "data/maps/PetalburgCity_Gym/scripts.pory"

# 941 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkePostBadge::
# 942 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
# 943 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 944 "data/maps/PetalburgCity_Gym/scripts.pory"

# 945 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary::
# 946 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat, PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
# 947 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_MaryPostBadge
# 948 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 949 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 950 "data/maps/PetalburgCity_Gym/scripts.pory"

# 951 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
# 952 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 953 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 954 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 955 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 956 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 957 "data/maps/PetalburgCity_Gym/scripts.pory"

# 958 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryPostBadge::
# 959 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
# 960 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 961 "data/maps/PetalburgCity_Gym/scripts.pory"

# 962 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia::
# 963 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat, PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
# 964 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_AlexiaPostBadge
# 965 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 966 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 967 "data/maps/PetalburgCity_Gym/scripts.pory"

# 968 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
# 969 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 970 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 971 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 972 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 973 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 974 "data/maps/PetalburgCity_Gym/scripts.pory"

# 975 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaPostBadge::
# 976 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
# 977 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 978 "data/maps/PetalburgCity_Gym/scripts.pory"

# 979 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody::
# 980 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat, PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
# 981 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_JodyPostBadge
# 982 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 983 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 984 "data/maps/PetalburgCity_Gym/scripts.pory"

# 985 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
# 986 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 987 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 988 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 989 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 990 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 991 "data/maps/PetalburgCity_Gym/scripts.pory"

# 992 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyPostBadge::
# 993 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
# 994 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 995 "data/maps/PetalburgCity_Gym/scripts.pory"

# 996 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8004 below is the room number
# 997 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8005 below is 0 when the door should be slid open and 1 when it should be unlocked immediately
# 998 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
# 999 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 1000 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1001 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1002 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
# 1003 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1004 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1005 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
# 1006 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 1007 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1008 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1009 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
# 1010 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1011 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1012 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
# 1013 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 1014 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1015 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1016 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1018 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1019 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
# 1020 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 1021 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1022 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1023 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
# 1024 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1025 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1026 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
# 1027 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 5
# 1028 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1029 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1030 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
# 1031 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1032 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1033 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
# 1034 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 6
# 1035 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1036 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1037 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
# 1038 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1039 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1040 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
# 1041 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 7
# 1042 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1043 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1044 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
# 1045 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1046 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1047 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
# 1048 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 8
# 1049 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1050 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1051 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
# 1052 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1053 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1054 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles::
# 1055 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1056 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1057 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1058 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1059 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1060 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1061 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles::
# 1062 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1063 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1064 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1065 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1066 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1067 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1068 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles::
# 1069 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1070 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1071 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1072 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1073 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1074 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1075 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles::
# 1076 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1077 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1078 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1079 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1080 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles::
# 1081 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1082 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1083 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1084 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1085 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1086 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1087 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles::
# 1088 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1089 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1090 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1091 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1092 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles::
# 1093 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1094 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1095 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1096 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1097 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles::
# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1099 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1100 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1101 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1102 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
# 1103 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 1104 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1105 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1106 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1107 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockRoomDoors::
# 1108 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymUnlockRoomDoors
# 1109 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1110 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide::
# 1112 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1113 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1114 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
# 1115 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1117 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1118 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1119 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuidePostVictory::
# 1120 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 1121 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1122 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1123 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1124 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymStatue::
# 1125 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1126 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1128 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1129 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1130 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymStatue::
# 1131 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1132 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1133 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1134 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1135 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1136 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatueCertified::
# 1137 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1139 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1140 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1141 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatue::
# 1142 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 1143 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1144 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1145 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1146 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon:
# 1147 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LUNA: Hm?\p"
# 1148 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Who are you?\n"
# 1149 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…\p"
# 1150 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, {PLAYER}, huh? Sounds familiar…\n"
# 1151 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm… Oh, yeah! I know your MOM.\p"
# 1152 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You and her just moved to\n"
# 1153 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LITTLEROOT TOWN, right.\p"
# 1154 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Nice to meet you. I'm LUNA,\n"
# 1155 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY's GYM LEADER.\l"
# 1156 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…\p"
# 1157 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, I see.\n"
# 1158 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You just got your POKéMON.\p"
# 1159 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm… Then I guess you're going to\n"
# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a TRAINER like me, {PLAYER}.\p"
# 1161 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's great news!\n"
# 1162 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll be looking forward to it.$"
# 1163 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1164 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIdLikeAPokemon:
# 1165 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Um… I…\n"
# 1166 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'd like to get a POKéMON, please…$"
# 1167 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1168 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOhYoureWallyRight:
# 1169 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LUNA: Hm? You're… Uh… Oh, right.\n"
# 1170 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're WALLY, right?\p"
# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do know this is a GYM… right?\n"
# 1172 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Not a charity.$"
# 1173 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1174 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon:
# 1175 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: B-But I'm going to go stay with\n"
# 1176 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my relatives in VERDANTURF TOWN.\p"
# 1177 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I thought I would be lonely by myself,\n"
# 1178 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I wanted to take a POKéMON along.\p"
# 1179 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But I've never caught a POKéMON before.\n"
# 1180 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I don't know how…$"
# 1181 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1182 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHmISee:
# 1183 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LUNA: Hm. Okay.\n"
# 1184 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Yeah, that's way too much work for me.$"
# 1185 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1186 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPlayerGoWithWally:
# 1187 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LUNA: {PLAYER}, you heard that,\n"
# 1188 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right?\p"
# 1189 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you go with WALLY and make sure that\n"
# 1190 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "he catches a POKéMON?$"
# 1191 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1192 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon:
# 1193 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY, here, uh, just borrow this\n"
# 1194 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "or something.\p"
# 1195 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY received a ZIGZAGOON!$"
# 1196 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1197 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall:
# 1198 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Oh, wow!\n"
# 1199 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "A POKéMON!\p"
# 1200 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LUNA: I'll give you a POKé BALL, too.\n"
# 1201 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You can figure the rest out.\p"
# 1202 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY received a POKé BALL!$"
# 1203 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1204 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyOhWowThankYou:
# 1205 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Oh, wow!\n"
# 1206 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Thank you!$"
# 1207 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1208 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WouldYouReallyComeWithMe:
# 1209 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}… Would you really come\n"
# 1210 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me?$"
# 1211 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1212 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadSoDidItWorkOut:
# 1213 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LUNA: So, did it work out?$"
# 1214 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1215 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouBye:
# 1216 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Thank you, yes, it did.\n"
# 1217 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here's your POKéMON back.\p"
# 1218 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, thank you for coming along\n"
# 1219 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me.\p"
# 1220 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You two are why I was able to catch\n"
# 1221 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my POKéMON.\p"
# 1222 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I promise I'll take really good\n"
# 1223 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "care of it.\p"
# 1224 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh! My mom's waiting for me,\n"
# 1225 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I have to go!\p"
# 1226 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Bye, {PLAYER}!$"
# 1227 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1228 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoCollectBadges:
# 1229 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LUNA: Now…\p"
# 1230 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, if you want to become a\n"
# 1231 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "strong TRAINER, here's my advice.\p"
# 1232 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Head for RUSTBORO CITY beyond this\n"
# 1233 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "town.\p"
# 1234 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There, you should challenge\n"
# 1235 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the GYM LEADER, STEVE.\p"
# 1236 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After that, go on to other POKéMON\n"
# 1237 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYMS and defeat their LEADERS.\p"
# 1238 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Collect BADGES from them,\n"
# 1239 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "understood?\p"
# 1240 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Of course, I'm a GYM LEADER, too.\n"
# 1241 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We'll battle one day, {PLAYER}.\p"
# 1242 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But that's only after you become\n"
# 1243 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.$"
# 1244 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1245 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToRustboro:
# 1246 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LUNA: Hm? Aren't you going to the\n"
# 1247 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "POKéMON GYM in RUSTBORO CITY?\p"
# 1248 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There's no challenge for me to\n"
# 1249 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle you right now.\p"
# 1250 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Come back when you\n"
# 1251 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "have four GYM BADGES, okay?$"
# 1252 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1253 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToDewford:
# 1254 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LUNA: I see… So, you've beaten\n"
# 1255 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the GYM LEADER in RUSTBORO CITY.\p"
# 1256 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But there are many more TRAINERS\n"
# 1257 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "who are stronger than you, {PLAYER}.\p"
# 1258 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Across the sea in SLATEPORT is a\n"
# 1259 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER.\p"
# 1260 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You should go challenge him.$"
# 1261 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1262 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_YouHaveGottenStronger:
# 1263 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LUNA: Hm… {PLAYER}, you have gotten\n"
# 1264 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1265 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can tell by the number of BADGES\n"
# 1266 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "that you've earned.$"
# 1267 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1268 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanIntro:
# 1269 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LUNA: Hm…\n"
# 1270 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So, you did get stronger.\p"
# 1271 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Fine, as I promised, we will have\n"
# 1272 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a POKéMON battle.\p"
# 1273 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…\n"
# 1274 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What?\p"
# 1275 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Who am I?\p"
# 1276 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm LUNA.\p"
# 1277 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…\p"
# 1278 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I “look different”?\p"
# 1279 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I have no idea what you're talking about.\p"
# 1280 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just don't think about it too much.\n"
# 1281 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Come on, let's battle.$"
# 1282 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1283 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanDefeat:
# 1284 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…\p"
# 1285 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's hard to be strong enough\n"
# 1286 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "to admit that you're weak… you know?\p"
# 1287 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here, take this.$"
# 1288 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1289 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ReceivedBalanceBadge:
# 1290 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER} received the BALANCE BADGE\n"
# 1291 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from LUNA!$"
# 1292 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1293 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis:
# 1294 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LUNA: With that BADGE, the POKéMON\n"
# 1295 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "that know the HM move SURF\n"
# 1296 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "will be able to travel over water.\p"
# 1297 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Also I don't have room, so {PLAYER},\n"
# 1298 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "take this.$"
# 1299 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1300 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainFacade:
# 1301 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LUNA: TM42 contains FACADE.\p"
# 1302 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It doubles the power of moves if\n"
# 1303 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the POKéMON is poisoned, paralyzed,\l"
# 1304 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "or burned.\p"
# 1305 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It might be able to turn a bad\n"
# 1306 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "situation into an advantage.\p"
# 1307 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Actually, take this too.$"
# 1308 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1309 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHappyAndSad:
# 1310 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LUNA: As the GYM LEADER, I can't\n"
# 1311 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "express how…$"
# 1312 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1313 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PleaseComeWithMe:
# 1314 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, there you are, {PLAYER}{KUN}!\p"
# 1315 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Please come with me.\n"
# 1316 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I have something I want you to have.$"
# 1317 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1318 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LetMeBorrowPlayer:
# 1319 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LUNA, you don't mind, do you?\p"
# 1320 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me borrow {PLAYER}{KUN} for\n"
# 1321 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a minute or two.$"
# 1322 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1323 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoingToKeepTraining:
# 1324 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LUNA: {PLAYER}, you should go visit\n"
# 1325 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your mother every so often.\p"
# 1326 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to stay here and redouble\n"
# 1327 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my training with LOPUNNY.$"
# 1328 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 1329 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough:
# 1330 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LUNA: {PLAYER}, how are things going?\p"
# 1331 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The world of POKéMON is deep.\p"
# 1332 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I honestly think that no amount of\n"
# 1333 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training would ever be enough.$"
# 1334 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1335 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuideAdvice:
# 1336 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 1337 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 1338 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The doors in this GYM open when you\n"
# 1339 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "beat the awaiting TRAINERS.\p"
# 1340 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whoops! The doors in this room are\n"
# 1341 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "already open, so don't attack me!\p"
# 1342 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The TRAINERS of PETALBURG GYM\n"
# 1343 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "use all kinds of items.\p"
# 1344 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the left leads to\n"
# 1345 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the SPEED ROOM.\p"
# 1346 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the right leads to\n"
# 1347 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ACCURACY ROOM.\p"
# 1348 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The room's name will be on\n"
# 1349 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the door, so choose carefully.\p"
# 1350 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Once you've chosen the door…\n"
# 1351 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, hey, go for it!$"
# 1352 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1353 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuidePostVictory:
# 1354 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}! Whoa! You've overcome even\n"
# 1355 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LUNA!\p"
# 1356 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Like, whoa!\n"
# 1357 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What a stunning turn of events!$"
# 1358 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1359 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallIntro:
# 1360 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The ability to attack before the\n"
# 1361 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "opponent…\p"
# 1362 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just that alone puts me at a great\n"
# 1363 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "advantage, don't you agree?$"
# 1364 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1365 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallDefeat:
# 1366 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That was a magnificent battle!$"
# 1367 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1368 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBattle:
# 1369 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on to the next room where a new\n"
# 1370 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "challenge awaits you.\p"
# 1371 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "At the left is the CONFUSION ROOM.\p"
# 1372 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door leads to the DEFENSE\n"
# 1373 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ROOM.$"
# 1374 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1375 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBadge:
# 1376 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whomever you beat, and whomever you\n"
# 1377 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "may lose to, you never shirk from\l"
# 1378 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training yourself and your POKéMON.\p"
# 1379 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's what I think being a\n"
# 1380 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER is all about.$"
# 1381 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1382 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerIntro:
# 1383 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the CONFUSION ROOM.\p"
# 1384 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Are you also confused at LUNA's\n"
# 1385 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "new appearance?$"
# 1386 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1387 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerDefeat:
# 1388 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't confuse your team enough…\n"
# 1389 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You share a strong bond together.$"
# 1390 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1391 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBattle:
# 1392 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The next room is the STRENGTH ROOM.\n"
# 1393 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you withstand brute force?$"
# 1394 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1395 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBadge:
# 1396 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After you beat our LEADER, the\n"
# 1397 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training has become a lot tougher.$"
# 1398 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1399 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeIntro:
# 1400 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just when you think you're going to\n"
# 1401 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "win, your opponent restores HP…\p"
# 1402 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you just imagine how awful that\n"
# 1403 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "must feel?\p"
# 1404 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you exactly how awful it\n"
# 1405 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "feels!$"
# 1406 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1407 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeDefeat:
# 1408 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't restore HP enough…\n"
# 1409 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What ATTACK power…$"
# 1410 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1411 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBattle:
# 1412 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LUNA came back from MT. PYRE\n"
# 1413 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "looking different.\p"
# 1414 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just who did he meet out there?\n"
# 1415 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Nobody's said anything yet.$"
# 1416 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1417 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBadge:
# 1418 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Seriously…\n"
# 1419 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Nobody's gonna say anything?$"
# 1420 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1421 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeIntro:
# 1422 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm not going to take it easy just\n"
# 1423 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "because you helped out LUNA.\p"
# 1424 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you how horrid it is for\n"
# 1425 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a POKéMON to take a critical hit!$"
# 1426 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1427 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeDefeat:
# 1428 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your power…\n"
# 1429 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're the real deal.$"
# 1430 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1431 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBattle:
# 1432 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LUNA really is strong.\n"
# 1433 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "He's a TRAINER worth my respect.$"
# 1434 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1435 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBadge:
# 1436 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Since LUNA became the LEADER,\n"
# 1437 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the TRAINERS of PETALBURG CITY have\l"
# 1438 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a lot more… degen.$"
# 1439 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1440 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryIntro:
# 1441 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Giggle…\n"
# 1442 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the ACCURACY ROOM.\p"
# 1443 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's pretty nasty when every attack\n"
# 1444 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lands without fail.$"
# 1445 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1446 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryDefeat:
# 1447 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You were a cut above me…$"
# 1448 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1449 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBattle:
# 1450 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There are some even stronger\n"
# 1451 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "TRAINERS waiting for you.\p"
# 1452 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The left is the DEFENSE ROOM, and\n"
# 1453 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the right is the RECOVERY ROOM.\p"
# 1454 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your POKéMON's ATTACK power will be\n"
# 1455 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "on trial either way.$"
# 1456 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1457 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBadge:
# 1458 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you know what we're trying to\n"
# 1459 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "achieve as TRAINERS?\p"
# 1460 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We're striving to become soul mates\n"
# 1461 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with our POKéMON.$"
# 1462 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1463 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaIntro:
# 1464 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The higher the DEFENSE, the more\n"
# 1465 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "reckless I can be in attack.$"
# 1466 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1467 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaDefeat:
# 1468 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our defenses weren't enough…$"
# 1469 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1470 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBattle:
# 1471 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you've taught me a valuable\n"
# 1472 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lesson here.\p"
# 1473 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now, go on! The left door goes to\n"
# 1474 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the STRENGTH ROOM.\p"
# 1475 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door opens to\n"
# 1476 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ONE-HIT KO ROOM.\p"
# 1477 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Both of them have TRAINERS who are\n"
# 1478 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "skilled at offense.$"
# 1479 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1480 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBadge:
# 1481 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hi! Have you tried using SURF?$"
# 1482 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1483 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyIntro:
# 1484 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Are we not gonna talk about how LUNA\n"
# 1485 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "looks way different now?$"
# 1486 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1487 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyDefeat:
# 1488 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Why isn't anybody saying anything?$"
# 1489 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1490 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBattle:
# 1491 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Seriously…\n"
# 1492 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What did he do at MT. PYRE?\p"
# 1493 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, you'll see what I mean\n"
# 1494 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "in the next room.$"
# 1495 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1496 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBadge:
# 1497 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here's another secret…\n"
# 1498 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The reason this GYM's theme is\l"
# 1499 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "using items is because LUNA said\l"
# 1500 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "he didn't have any room to store\l"
# 1501 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "them anymore.\p"
# 1502 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "He just dumped all of them on us\n"
# 1503 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "and said to use them when battling.$"
# 1504 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1505 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked:
# 1506 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1507 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1508 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1509 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterSpeedRoom:
# 1510 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“SPEED ROOM,” the sign says.\p"
# 1511 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1512 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1513 "data/maps/PetalburgCity_Gym/scripts.pory"
@ Unused
# 1514 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked2:
# 1515 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1516 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1517 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1518 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterAccuracyRoom:
# 1519 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ACCURACY ROOM,” the sign says.\p"
# 1520 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1521 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1522 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterConfusionRoom:
# 1523 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“CONFUSION ROOM,” the sign says.\p"
# 1524 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1525 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1526 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterDefenseRoom:
# 1527 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“DEFENSE ROOM,” the sign says.\p"
# 1528 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1529 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1530 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterRecoveryRoom:
# 1531 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“RECOVERY ROOM,” the sign says.\p"
# 1532 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1533 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1534 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterStrengthRoom:
# 1535 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“STRENGTH ROOM,” the sign says.\p"
# 1536 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1537 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1538 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterOHKORoom:
# 1539 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ONE-HIT KO ROOM,” the sign says.\p"
# 1540 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1541 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1542 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterGymLeadersRoom:
# 1543 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“GYM LEADER'S ROOM\p"
# 1544 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“See for yourself what POKéMON await\n"
# 1545 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "you!” the sign says.\p"
# 1546 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1547 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1548 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatue:
# 1549 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM$"
# 1550 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1551 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatueCertified:
# 1552 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\p"
# 1553 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "NORMAN'S CERTIFIED TRAINERS:\p"
# 1554 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "JAMES\n"
# 1555 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 1556 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1557 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPreRematch:
# 1558 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LUNA: {PLAYER}…\n"
# 1559 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1560 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1561 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.$"
# 1562 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1563 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchDefeat:
# 1564 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Uh… Haha…\n"
# 1565 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Maybe that was going too hard…$"
# 1566 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1567 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPostRematch:
# 1568 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LUNA: {PLAYER}…\n"
# 1569 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What is your dream?\p"
# 1570 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "My dream…\n"
# 1571 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hahaha…\l"
# 1572 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It has already come true, actually.$"
# 1573 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1574 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchNeedTwoMons:
# 1575 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LUNA: {PLAYER}…\n"
# 1576 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1577 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1578 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1579 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1580 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm? Wait a second, {PLAYER}.\p"
# 1581 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you only have one POKéMON that is\n"
# 1582 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "capable of battle?\p"
# 1583 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sorry, but you'll have to come back\n"
# 1584 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with at least two POKéMON.$"

PetalburgGym_EventScript_Lopunny::
# 1589 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1590 "data/maps/PetalburgCity_Gym/scripts.pory"
	playmoncry SPECIES_LOPUNNY, CRY_MODE_ENCOUNTER
# 1591 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 1592 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
	end


PetalburgCity_Gym_EventScript_GiveSwordsDance::
# 1597 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_SWORDS_DANCE
# 1598 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainSwordsDance, MSGBOX_DEFAULT
	return


PetalburgCity_Gym_Text_ExplainSwordsDance::
# 1602 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That TM63, SWORDS DANCE, sharply\n raises the user's ATTACK.$"
