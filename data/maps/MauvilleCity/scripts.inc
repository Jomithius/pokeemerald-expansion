# 1 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_WALLY, 6
# 2 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_WALLYS_UNCLE, 7
# 3 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_SCOTT, 1
# 4 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_DACA, 8
# 5 "data/maps/MauvilleCity/scripts.pory"

# 6 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_MapScripts::
# 7 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_OnTransition
# 8 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MauvilleCity_OnFrame
# 9 "data/maps/MauvilleCity/scripts.pory"
	.byte 0
# 10 "data/maps/MauvilleCity/scripts.pory"

# 11 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnTransition:
# 12 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_SYS_DYNAMIC_LEVELS
# 13 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 14 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 15 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
# 16 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_TV_START
# 17 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 18 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 0
# 19 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_HIDE_DACA_RUSTURF_PEAK, MauvilleCity_EventScript_MoveWallyUpOneTile
# 20 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_MoveWattsonBackToGym
# 21 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_SYS_BIKERS_ROUTE_110, MauvilleCity_EventScript_SaveBikerMusic
# 22 "data/maps/MauvilleCity/scripts.pory"
	end
# 23 "data/maps/MauvilleCity/scripts.pory"

# 24 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnFrame:
# 25 "data/maps/MauvilleCity/scripts.pory"
	map_script_2 VAR_SPEEDWAGON_STATE, 6, MauvilleCity_EventScript_PolicemanGivesUturn
# 26 "data/maps/MauvilleCity/scripts.pory"
	.2byte 0
# 27 "data/maps/MauvilleCity/scripts.pory"

# 28 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWallyUpOneTile:
# 29 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_WALLY, 8, 6
# 30 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_WALLYS_UNCLE, 9, 6
# 31 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 12, 14
# 32 "data/maps/MauvilleCity/scripts.pory"
	return
# 33 "data/maps/MauvilleCity/scripts.pory"

# 34 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWattsonBackToGym::
# 35 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 36 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 37 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
# 38 "data/maps/MauvilleCity/scripts.pory"
	return
# 39 "data/maps/MauvilleCity/scripts.pory"

# 40 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Boy::
# 41 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
# 42 "data/maps/MauvilleCity/scripts.pory"
	end
# 43 "data/maps/MauvilleCity/scripts.pory"

# 44 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Maniac::
# 45 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
# 46 "data/maps/MauvilleCity/scripts.pory"
	end
# 47 "data/maps/MauvilleCity/scripts.pory"

# 48 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Woman::
# 49 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
# 50 "data/maps/MauvilleCity/scripts.pory"
	end
# 51 "data/maps/MauvilleCity/scripts.pory"

# 52 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RichBoy::
# 53 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
# 54 "data/maps/MauvilleCity/scripts.pory"
	end
# 55 "data/maps/MauvilleCity/scripts.pory"

# 56 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CitySign::
# 57 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
# 58 "data/maps/MauvilleCity/scripts.pory"
	end
# 59 "data/maps/MauvilleCity/scripts.pory"

# 60 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GymSign::
# 61 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
# 62 "data/maps/MauvilleCity/scripts.pory"
	end
# 63 "data/maps/MauvilleCity/scripts.pory"

# 64 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BikeShopSign::
# 65 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
# 66 "data/maps/MauvilleCity/scripts.pory"
	end
# 67 "data/maps/MauvilleCity/scripts.pory"

# 68 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GameCornerSign::
# 69 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
# 70 "data/maps/MauvilleCity/scripts.pory"
	end
# 71 "data/maps/MauvilleCity/scripts.pory"

# 72 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_SchoolKidM::
# 73 "data/maps/MauvilleCity/scripts.pory"
	lock
# 74 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 75 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
# 76 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
# 77 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TV_EXPLAINED
# 78 "data/maps/MauvilleCity/scripts.pory"
	release
# 79 "data/maps/MauvilleCity/scripts.pory"
	end
# 80 "data/maps/MauvilleCity/scripts.pory"

# 81 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_TVExplained::
# 82 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
# 83 "data/maps/MauvilleCity/scripts.pory"
	release
# 84 "data/maps/MauvilleCity/scripts.pory"
	end
# 85 "data/maps/MauvilleCity/scripts.pory"

# 86 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallysUncle::
# 87 "data/maps/MauvilleCity/scripts.pory"
	lock
# 88 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 89 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
# 90 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
# 91 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 92 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 93 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 94 "data/maps/MauvilleCity/scripts.pory"
	release
# 95 "data/maps/MauvilleCity/scripts.pory"
	end
# 96 "data/maps/MauvilleCity/scripts.pory"

# 97 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
# 98 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
# 99 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 100 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 101 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 102 "data/maps/MauvilleCity/scripts.pory"
	release
# 103 "data/maps/MauvilleCity/scripts.pory"
	end
# 104 "data/maps/MauvilleCity/scripts.pory"

# 105 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wally::
# 106 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 107 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallyRequestBattleAgain
# 108 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 109 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 110 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 111 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 112 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 113 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 114 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 115 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 116 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
# 117 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 118 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_Delay48
# 119 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 120 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 121 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 122 "data/maps/MauvilleCity/scripts.pory"
	end
# 123 "data/maps/MauvilleCity/scripts.pory"

# 124 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt::
# 125 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, MauvilleCity_EventScript_BattleWally
# 126 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_EventScript_DeclineWallyBattle
# 127 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 128 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 129 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_WallyAndUncleExitNorth
# 130 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_WallyAndUncleExitEast
# 131 "data/maps/MauvilleCity/scripts.pory"
	end
# 132 "data/maps/MauvilleCity/scripts.pory"

# 133 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitNorth::
# 134 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 135 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth1
# 136 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth1
# 137 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 138 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 139 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 140 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 141 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
# 142 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
# 143 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 144 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 145 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 146 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 147 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth2
# 148 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth2
# 149 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 150 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 151 "data/maps/MauvilleCity/scripts.pory"
	end
# 152 "data/maps/MauvilleCity/scripts.pory"

# 153 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitEast::
# 154 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 155 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast1
# 156 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast1
# 157 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 158 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 159 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 160 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 161 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerEast
# 162 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 163 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 164 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 165 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 166 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast2
# 167 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast2
# 168 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 169 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 170 "data/maps/MauvilleCity/scripts.pory"
	end
# 171 "data/maps/MauvilleCity/scripts.pory"

# 172 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally::
# 173 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLY
# 174 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLYS_UNCLE
# 175 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 176 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 177 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 178 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 179 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 180 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottApproachPlayerNorth
# 181 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottApproachPlayerEast
# 182 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 183 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 184 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 185 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 186 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 187 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottExitNorth
# 188 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottExitEast
# 189 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 190 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 191 "data/maps/MauvilleCity/scripts.pory"
	end
# 192 "data/maps/MauvilleCity/scripts.pory"

# 193 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerNorth::
# 194 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 195 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerNorth
# 196 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 197 "data/maps/MauvilleCity/scripts.pory"
	return
# 198 "data/maps/MauvilleCity/scripts.pory"

# 199 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerEast::
# 200 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 12, 13
# 201 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 202 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
# 203 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 204 "data/maps/MauvilleCity/scripts.pory"
	return
# 205 "data/maps/MauvilleCity/scripts.pory"

# 206 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitNorth::
# 207 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 208 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitNorth
# 209 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 210 "data/maps/MauvilleCity/scripts.pory"
	return
# 211 "data/maps/MauvilleCity/scripts.pory"

# 212 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitEast::
# 213 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 214 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitEast
# 215 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 216 "data/maps/MauvilleCity/scripts.pory"
	return
# 217 "data/maps/MauvilleCity/scripts.pory"

# 218 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWally::
# 219 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 220 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
# 221 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 222 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 223 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 224 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 225 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 226 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 227 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 228 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 229 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
# 230 "data/maps/MauvilleCity/scripts.pory"
	return
# 231 "data/maps/MauvilleCity/scripts.pory"

# 232 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DeclineWallyBattle::
# 233 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 234 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 235 "data/maps/MauvilleCity/scripts.pory"
	release
# 236 "data/maps/MauvilleCity/scripts.pory"
	end
# 237 "data/maps/MauvilleCity/scripts.pory"

# 238 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyRequestBattleAgain::
# 239 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 240 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 241 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 242 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 243 "data/maps/MauvilleCity/scripts.pory"
	end
# 244 "data/maps/MauvilleCity/scripts.pory"

# 245 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth1:
# 246 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 247 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 248 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 249 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 250 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 251 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 252 "data/maps/MauvilleCity/scripts.pory"

# 253 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast1:
# 254 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 255 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 256 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 257 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 258 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 259 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 260 "data/maps/MauvilleCity/scripts.pory"

# 261 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth2:
# 262 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 263 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 264 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 265 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 266 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 267 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 268 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 269 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 270 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 271 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 272 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 273 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 274 "data/maps/MauvilleCity/scripts.pory"

# 275 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast2:
# 276 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 277 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 278 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 279 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 280 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 281 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 282 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 283 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 284 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 285 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 286 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 287 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 288 "data/maps/MauvilleCity/scripts.pory"

# 289 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
# 290 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 291 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 292 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 293 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 294 "data/maps/MauvilleCity/scripts.pory"

# 295 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast2:
# 296 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 297 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 298 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 299 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 300 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 301 "data/maps/MauvilleCity/scripts.pory"

# 302 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitNorth:
# 303 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 304 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 305 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 306 "data/maps/MauvilleCity/scripts.pory"

# 307 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast:
# 308 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 309 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 310 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 311 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 312 "data/maps/MauvilleCity/scripts.pory"

# 313 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast1:
# 314 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 315 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 316 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 317 "data/maps/MauvilleCity/scripts.pory"

# 318 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
# 319 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 320 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 321 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 322 "data/maps/MauvilleCity/scripts.pory"

# 323 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth1:
# 324 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 325 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 326 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 327 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 328 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 329 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 330 "data/maps/MauvilleCity/scripts.pory"

# 331 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast1:
# 332 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 333 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 334 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 335 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 336 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 337 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 338 "data/maps/MauvilleCity/scripts.pory"

# 339 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleNorth:
# 340 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 341 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 342 "data/maps/MauvilleCity/scripts.pory"
	delay_4
# 343 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 344 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 345 "data/maps/MauvilleCity/scripts.pory"

# 346 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
# 347 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 348 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 349 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 350 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 351 "data/maps/MauvilleCity/scripts.pory"

# 352 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerEast:
# 353 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 354 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 355 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 356 "data/maps/MauvilleCity/scripts.pory"

# 357 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth2:
# 358 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 359 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 360 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 361 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 362 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 363 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 364 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 365 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 366 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 367 "data/maps/MauvilleCity/scripts.pory"

# 368 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast2:
# 369 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 370 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 371 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 372 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 373 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 374 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 375 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 376 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 377 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 378 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 379 "data/maps/MauvilleCity/scripts.pory"

# 380 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerNorth:
# 381 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 382 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 383 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 384 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 385 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 386 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 387 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 388 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 389 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 390 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 391 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 392 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 393 "data/maps/MauvilleCity/scripts.pory"

# 394 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast:
# 395 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 396 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 397 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 398 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 399 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 400 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 401 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 402 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 403 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 404 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 405 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 406 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 407 "data/maps/MauvilleCity/scripts.pory"

# 408 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth:
# 409 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 410 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 411 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 412 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 413 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 414 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 415 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 416 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 417 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 418 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 419 "data/maps/MauvilleCity/scripts.pory"

# 420 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitEast:
# 421 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 422 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 423 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 424 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 425 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 426 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 427 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 428 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 429 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 430 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 431 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 432 "data/maps/MauvilleCity/scripts.pory"

# 433 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson::
# 434 "data/maps/MauvilleCity/scripts.pory"
	lock
# 435 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 436 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_ReceivedThunderbolt
# 437 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
# 438 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
# 439 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 440 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 441 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 442 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 443 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_CITY_STATE, 2 @ Custom for new mauville triggers
# 444 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 445 "data/maps/MauvilleCity/scripts.pory"
	release
# 446 "data/maps/MauvilleCity/scripts.pory"
	end
# 447 "data/maps/MauvilleCity/scripts.pory"

# 448 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BegunNewMauville::
# 449 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 450 "data/maps/MauvilleCity/scripts.pory"
	release
# 451 "data/maps/MauvilleCity/scripts.pory"
	end
# 452 "data/maps/MauvilleCity/scripts.pory"

# 453 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CompletedNewMauville::
# 454 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 455 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 456 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 457 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
# 458 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_CITY_STATE, 3 @ Custom for New Mauville triggers
# 459 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 460 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DacaGoesBackToGym
# 461 "data/maps/MauvilleCity/scripts.pory"
	@ release
# 462 "data/maps/MauvilleCity/scripts.pory"
	end
# 463 "data/maps/MauvilleCity/scripts.pory"

# 464 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ReceivedThunderbolt::
# 465 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 466 "data/maps/MauvilleCity/scripts.pory"
	release
# 467 "data/maps/MauvilleCity/scripts.pory"
	end
# 468 "data/maps/MauvilleCity/scripts.pory"

# 469 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RegisterWallyCall::
# 470 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 471 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 472 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 473 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 474 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 475 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 476 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 477 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 478 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 479 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 480 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 481 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 482 "data/maps/MauvilleCity/scripts.pory"
	end
# 483 "data/maps/MauvilleCity/scripts.pory"

# 484 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleHesTooPeppy:
# 485 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: It's because of POKéMON that\n"
# 486 "data/maps/MauvilleCity/scripts.pory"
	.string "this boy's got more pep, I suppose…\l"
# 487 "data/maps/MauvilleCity/scripts.pory"
	.string "But he's become a bit too peppy…$"
# 488 "data/maps/MauvilleCity/scripts.pory"

# 489 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWantToChallengeGym:
# 490 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Aww, UNCLE, please?\p"
# 491 "data/maps/MauvilleCity/scripts.pory"
	.string "I want to challenge this GYM and see\n"
# 492 "data/maps/MauvilleCity/scripts.pory"
	.string "how much better I've become.\p"
# 493 "data/maps/MauvilleCity/scripts.pory"
	.string "Please? May I, please?$"
# 494 "data/maps/MauvilleCity/scripts.pory"

# 495 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleYourePushingIt:
# 496 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: Now hold on, WALLY.\p"
# 497 "data/maps/MauvilleCity/scripts.pory"
	.string "Since you started living with POKéMON,\n"
# 498 "data/maps/MauvilleCity/scripts.pory"
	.string "you have grown quite a lot stronger.\p"
# 499 "data/maps/MauvilleCity/scripts.pory"
	.string "But don't you think you're pushing it\n"
# 500 "data/maps/MauvilleCity/scripts.pory"
	.string "to suddenly challenge a GYM?$"
# 501 "data/maps/MauvilleCity/scripts.pory"

# 502 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWeCanBeatAnyone:
# 503 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: I'm not pushing it.\p"
# 504 "data/maps/MauvilleCity/scripts.pory"
	.string "If I combine forces with KIRLIA,\n"
# 505 "data/maps/MauvilleCity/scripts.pory"
	.string "we can beat anyone!$"
# 506 "data/maps/MauvilleCity/scripts.pory"

# 507 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWillYouBattleMe:
# 508 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh! Hi, {PLAYER}!\p"
# 509 "data/maps/MauvilleCity/scripts.pory"
	.string "I've gotten a lot stronger since\n"
# 510 "data/maps/MauvilleCity/scripts.pory"
	.string "we met.\p"
# 511 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, I want you and my UNCLE to\n"
# 512 "data/maps/MauvilleCity/scripts.pory"
	.string "understand that.\p"
# 513 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, please, will you have\n"
# 514 "data/maps/MauvilleCity/scripts.pory"
	.string "a battle with me?$"
# 515 "data/maps/MauvilleCity/scripts.pory"

# 516 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyMyUncleWontKnowImStrong:
# 517 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh… If you won't battle me,\n"
# 518 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, my UNCLE won't know that I've\l"
# 519 "data/maps/MauvilleCity/scripts.pory"
	.string "become really strong.$"
# 520 "data/maps/MauvilleCity/scripts.pory"

# 521 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleCanYouBattleWally:
# 522 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, was it?\n"
# 523 "data/maps/MauvilleCity/scripts.pory"
	.string "On WALLY's behalf, can I ask you to\l"
# 524 "data/maps/MauvilleCity/scripts.pory"
	.string "battle with him just this once?\p"
# 525 "data/maps/MauvilleCity/scripts.pory"
	.string "I don't think he's going to listen to\n"
# 526 "data/maps/MauvilleCity/scripts.pory"
	.string "any reason the way he is now.$"
# 527 "data/maps/MauvilleCity/scripts.pory"

# 528 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPleaseBattleMe:
# 529 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, please!\n"
# 530 "data/maps/MauvilleCity/scripts.pory"
	.string "Battle with me, please.$"
# 531 "data/maps/MauvilleCity/scripts.pory"

# 532 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyHereICome:
# 533 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, thank you.\p"
# 534 "data/maps/MauvilleCity/scripts.pory"
	.string "Okay… Here I come!$"
# 535 "data/maps/MauvilleCity/scripts.pory"

# 536 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyDefeat:
# 537 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: … … … … … … …\p"
# 538 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … … … …\p"
# 539 "data/maps/MauvilleCity/scripts.pory"
	.string "I lost…$"
# 540 "data/maps/MauvilleCity/scripts.pory"

# 541 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyIllGoBackToVerdanturf:
# 542 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: UNCLE…\n"
# 543 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll go back to VERDANTURF…$"
# 544 "data/maps/MauvilleCity/scripts.pory"

# 545 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ThankYouNotEnoughToBattle:
# 546 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, thank you.\n"
# 547 "data/maps/MauvilleCity/scripts.pory"
	.string "Being a TRAINER is tough, isn't it?\p"
# 548 "data/maps/MauvilleCity/scripts.pory"
	.string "It's not enough just to have POKéMON\n"
# 549 "data/maps/MauvilleCity/scripts.pory"
	.string "and make them battle. That isn't what\l"
# 550 "data/maps/MauvilleCity/scripts.pory"
	.string "being a real TRAINER is about.$"
# 551 "data/maps/MauvilleCity/scripts.pory"

# 552 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleNoNeedToBeDown:
# 553 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: WALLY, there's no need to be so\n"
# 554 "data/maps/MauvilleCity/scripts.pory"
	.string "down on yourself.\p"
# 555 "data/maps/MauvilleCity/scripts.pory"
	.string "Why, what's keeping you from becoming\n"
# 556 "data/maps/MauvilleCity/scripts.pory"
	.string "stronger and stronger?\p"
# 557 "data/maps/MauvilleCity/scripts.pory"
	.string "Come on, let's go home.\n"
# 558 "data/maps/MauvilleCity/scripts.pory"
	.string "Everyone's waiting for you.$"
# 559 "data/maps/MauvilleCity/scripts.pory"

# 560 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleVisitUsSometime:
# 561 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, it just dawned on me\n"
# 562 "data/maps/MauvilleCity/scripts.pory"
	.string "that you must be the TRAINER who kept\l"
# 563 "data/maps/MauvilleCity/scripts.pory"
	.string "an eye out for WALLY when he caught\l"
# 564 "data/maps/MauvilleCity/scripts.pory"
	.string "his POKéMON.\p"
# 565 "data/maps/MauvilleCity/scripts.pory"
	.string "Why don't you visit us in VERDANTURF\n"
# 566 "data/maps/MauvilleCity/scripts.pory"
	.string "sometime?\l"
# 567 "data/maps/MauvilleCity/scripts.pory"
	.string "I'm sure WALLY would enjoy it.$"
# 568 "data/maps/MauvilleCity/scripts.pory"

# 569 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPokenavCall:
# 570 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 571 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Beep!\p"
# 572 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh, hello, {PLAYER}!\p"
# 573 "data/maps/MauvilleCity/scripts.pory"
	.string "I just wanted to tell you that\n"
# 574 "data/maps/MauvilleCity/scripts.pory"
	.string "my uncle bought me a POKéNAV!\p"
# 575 "data/maps/MauvilleCity/scripts.pory"
	.string "Now I can get in touch with you\n"
# 576 "data/maps/MauvilleCity/scripts.pory"
	.string "anytime, {PLAYER}!\p"
# 577 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 578 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Click!$"
# 579 "data/maps/MauvilleCity/scripts.pory"

# 580 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RegisteredWally:
# 581 "data/maps/MauvilleCity/scripts.pory"
	.string "Registered WALLY\n"
# 582 "data/maps/MauvilleCity/scripts.pory"
	.string "in the POKéNAV.$"
# 583 "data/maps/MauvilleCity/scripts.pory"

# 584 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ScottYouDidntHoldBack:
# 585 "data/maps/MauvilleCity/scripts.pory"
	.string "SCOTT: Hehe…\n"
# 586 "data/maps/MauvilleCity/scripts.pory"
	.string "I was watching that match!\p"
# 587 "data/maps/MauvilleCity/scripts.pory"
	.string "You're friends with that boy WALLY,\n"
# 588 "data/maps/MauvilleCity/scripts.pory"
	.string "aren't you?\p"
# 589 "data/maps/MauvilleCity/scripts.pory"
	.string "But you didn't hold anything back\n"
# 590 "data/maps/MauvilleCity/scripts.pory"
	.string "and beat him impressively.\p"
# 591 "data/maps/MauvilleCity/scripts.pory"
	.string "Yeah! That's what a real POKéMON\n"
# 592 "data/maps/MauvilleCity/scripts.pory"
	.string "battle is all about!\p"
# 593 "data/maps/MauvilleCity/scripts.pory"
	.string "I idolize TRAINERS like that!\p"
# 594 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 595 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll be cheering for you!$"
# 596 "data/maps/MauvilleCity/scripts.pory"

# 597 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonNeedFavorTakeKey:
# 598 "data/maps/MauvilleCity/scripts.pory"
	.string "DACA: Oh, {PLAYER}{KUN}!\n"
# 599 "data/maps/MauvilleCity/scripts.pory"
	.string "You look ready to party!\l"
# 600 "data/maps/MauvilleCity/scripts.pory"
	.string "That's a good thing, hahaha!\p"
# 601 "data/maps/MauvilleCity/scripts.pory"
	.string "Fine! I've decided!\n"
# 602 "data/maps/MauvilleCity/scripts.pory"
	.string "I need a favor, {PLAYER}{KUN}!\p"
# 603 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY has an underground\n"
# 604 "data/maps/MauvilleCity/scripts.pory"
	.string "sector called NEW MAUVILLE.\p"
# 605 "data/maps/MauvilleCity/scripts.pory"
	.string "We used to party there, but it's\n"
# 606 "data/maps/MauvilleCity/scripts.pory"
	.string "abandoned now.\p"
# 607 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'd like you to go there and\n"
# 608 "data/maps/MauvilleCity/scripts.pory"
	.string "switch off the GENERATOR.\p"
# 609 "data/maps/MauvilleCity/scripts.pory"
	.string "It's been running a bit haywire.\n"
# 610 "data/maps/MauvilleCity/scripts.pory"
	.string "It's getting unsafe.\p"
# 611 "data/maps/MauvilleCity/scripts.pory"
	.string "Here, this is the KEY to get into\n"
# 612 "data/maps/MauvilleCity/scripts.pory"
	.string "NEW MAUVILLE.$"
# 613 "data/maps/MauvilleCity/scripts.pory"

# 614 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonWontBeChallenge:
# 615 "data/maps/MauvilleCity/scripts.pory"
	.string "Don't be nervous.\n"
# 616 "data/maps/MauvilleCity/scripts.pory"
	.string "It won't be a challenge to you.\p"
# 617 "data/maps/MauvilleCity/scripts.pory"
	.string "The entrance to NEW MAUVILLE is just\n"
# 618 "data/maps/MauvilleCity/scripts.pory"
	.string "a short SURF away from ROUTE 110.\p"
# 619 "data/maps/MauvilleCity/scripts.pory"
	.string "That's it, then! Go party!\n"
# 620 "data/maps/MauvilleCity/scripts.pory"
	.string "Hahaha!$"
# 621 "data/maps/MauvilleCity/scripts.pory"

# 622 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonThanksTakeTM:
# 623 "data/maps/MauvilleCity/scripts.pory"
	.string "DACA: Hahaha!\p"
# 624 "data/maps/MauvilleCity/scripts.pory"
	.string "Thanks, {PLAYER}{KUN}! I knew it was\n"
# 625 "data/maps/MauvilleCity/scripts.pory"
	.string "the right choice asking you!\p"
# 626 "data/maps/MauvilleCity/scripts.pory"
	.string "Take this for your trouble: a TM\n"
# 627 "data/maps/MauvilleCity/scripts.pory"
	.string "containing THUNDERBOLT!\p"
# 628 "data/maps/MauvilleCity/scripts.pory"
	.string "Go on, you've earned it!$"
# 629 "data/maps/MauvilleCity/scripts.pory"

# 630 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonYoungTakeCharge:
# 631 "data/maps/MauvilleCity/scripts.pory"
	.string "Hahaha!\p"
# 632 "data/maps/MauvilleCity/scripts.pory"
	.string "Let's party again soon,\n"
# 633 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}!$"
# 634 "data/maps/MauvilleCity/scripts.pory"

# 635 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_NurseHurtMonBackToHealth:
# 636 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have POKéMON\n"
# 637 "data/maps/MauvilleCity/scripts.pory"
	.string "battles and stuff…\p"
# 638 "data/maps/MauvilleCity/scripts.pory"
	.string "But if your POKéMON gets hurt,\n"
# 639 "data/maps/MauvilleCity/scripts.pory"
	.string "you have to nurse it back to health.$"
# 640 "data/maps/MauvilleCity/scripts.pory"

# 641 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_AllSortsOfPeopleComeThrough:
# 642 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
# 643 "data/maps/MauvilleCity/scripts.pory"
	.string "and south, and east and west.\p"
# 644 "data/maps/MauvilleCity/scripts.pory"
	.string "Because of that, we get all sorts of\n"
# 645 "data/maps/MauvilleCity/scripts.pory"
	.string "people coming through.$"
# 646 "data/maps/MauvilleCity/scripts.pory"

# 647 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RydelVeryGenerous:
# 648 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to RYDEL'S CYCLES yet?\p"
# 649 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL, the owner, is a very generous\n"
# 650 "data/maps/MauvilleCity/scripts.pory"
	.string "man.$"
# 651 "data/maps/MauvilleCity/scripts.pory"

# 652 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_PokemonCanJumpYouOnBike:
# 653 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a BIKE,\n"
# 654 "data/maps/MauvilleCity/scripts.pory"
	.string "wild POKéMON could jump you.$"
# 655 "data/maps/MauvilleCity/scripts.pory"

# 656 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_CitySign:
# 657 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY\n"
# 658 "data/maps/MauvilleCity/scripts.pory"
	.string "“The bright and shiny city of fun!”$"
# 659 "data/maps/MauvilleCity/scripts.pory"

# 660 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GymSign:
# 661 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\n"
# 662 "data/maps/MauvilleCity/scripts.pory"
	.string "LEADER: DACA\l"
# 663 "data/maps/MauvilleCity/scripts.pory"
	.string "“Get ready for a party!”$"
# 664 "data/maps/MauvilleCity/scripts.pory"

# 665 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BikeShopSign:
# 666 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
# 667 "data/maps/MauvilleCity/scripts.pory"
	.string "soul!”\l"
# 668 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL'S CYCLES$"
# 669 "data/maps/MauvilleCity/scripts.pory"

# 670 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GameCornerSign:
# 671 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
# 672 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE GAME CORNER$"
# 673 "data/maps/MauvilleCity/scripts.pory"

# 674 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ExplainTV:
# 675 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, do you check out TV at all?\p"
# 676 "data/maps/MauvilleCity/scripts.pory"
	.string "They've added a bunch of cool new\n"
# 677 "data/maps/MauvilleCity/scripts.pory"
	.string "shows recently.\p"
# 678 "data/maps/MauvilleCity/scripts.pory"
	.string "TV is so cool. I've seen my friends on\n"
# 679 "data/maps/MauvilleCity/scripts.pory"
	.string "TV just out of the blue.\p"
# 680 "data/maps/MauvilleCity/scripts.pory"
	.string "And, sometimes, they even put you on TV\n"
# 681 "data/maps/MauvilleCity/scripts.pory"
	.string "without telling you.\p"
# 682 "data/maps/MauvilleCity/scripts.pory"
	.string "I wish I would be on TV sometime.\p"
# 683 "data/maps/MauvilleCity/scripts.pory"
	.string "That's why I think you should check\n"
# 684 "data/maps/MauvilleCity/scripts.pory"
	.string "out TVs whenever you can.$"
# 685 "data/maps/MauvilleCity/scripts.pory"

# 686 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BeenCheckingOutTV:
# 687 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"

MauvilleCity_EventScript_GymNPC::
# 691 "data/maps/MauvilleCity/scripts.pory"
	lock
# 692 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, Common_Movement_FacePlayer
# 693 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 12
# 694 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_DacaGone, MSGBOX_NPC
# 695 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 696 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_Trigger_Bikers1::
# 710 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 711 "data/maps/MauvilleCity/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 712 "data/maps/MauvilleCity/scripts.pory"
	addobject 13
# 713 "data/maps/MauvilleCity/scripts.pory"
	addobject 14
# 714 "data/maps/MauvilleCity/scripts.pory"
	addobject 15
# 715 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Trigger_Bikers1_Text_0, MSGBOX_AUTOCLOSE
# 716 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 717 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 718 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 719 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 720 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerRunLeft
# 721 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 722 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 723 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 724 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 725 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM
# 726 "data/maps/MauvilleCity/scripts.pory"
	applymovement 13, MauvilleCity_Movement_Biker1
# 727 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 728 "data/maps/MauvilleCity/scripts.pory"
	applymovement 14, MauvilleCity_Movement_Biker1
# 729 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 730 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 14
# 731 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 732 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 733 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police1
# 734 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 735 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 736 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_Police, MSGBOX_AUTOCLOSE
# 737 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 738 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police2
# 739 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 740 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 741 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 2
# 742 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_BIKERS
# 743 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE_110_BIKER_POLICEMAN
# 744 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ROUTE110_HIDE_CYCLIST
# 745 "data/maps/MauvilleCity/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 746 "data/maps/MauvilleCity/scripts.pory"
	fadedefaultbgm
# 747 "data/maps/MauvilleCity/scripts.pory"
	removeobject 13
# 748 "data/maps/MauvilleCity/scripts.pory"
	removeobject 14
# 749 "data/maps/MauvilleCity/scripts.pory"
	removeobject 15
# 750 "data/maps/MauvilleCity/scripts.pory"
	addobject 16
# 751 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_Trigger_Bikers2::
# 756 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 757 "data/maps/MauvilleCity/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 758 "data/maps/MauvilleCity/scripts.pory"
	addobject 13
# 759 "data/maps/MauvilleCity/scripts.pory"
	addobject 14
# 760 "data/maps/MauvilleCity/scripts.pory"
	addobject 15
# 761 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Trigger_Bikers1_Text_0, MSGBOX_AUTOCLOSE
# 762 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 763 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 764 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 765 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 766 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerRunRight
# 767 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 768 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 769 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 770 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 771 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM
# 772 "data/maps/MauvilleCity/scripts.pory"
	applymovement 13, MauvilleCity_Movement_Biker1
# 773 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 774 "data/maps/MauvilleCity/scripts.pory"
	applymovement 14, MauvilleCity_Movement_Biker1
# 775 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 776 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 14
# 777 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 778 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 779 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police1
# 780 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 781 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 782 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_Police, MSGBOX_AUTOCLOSE
# 783 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 784 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police2
# 785 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 786 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 787 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 2
# 788 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_BIKERS
# 789 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE_110_BIKER_POLICEMAN
# 790 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ROUTE110_HIDE_CYCLIST
# 791 "data/maps/MauvilleCity/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 792 "data/maps/MauvilleCity/scripts.pory"
	fadedefaultbgm
# 793 "data/maps/MauvilleCity/scripts.pory"
	removeobject 13
# 794 "data/maps/MauvilleCity/scripts.pory"
	removeobject 14
# 795 "data/maps/MauvilleCity/scripts.pory"
	removeobject 15
# 796 "data/maps/MauvilleCity/scripts.pory"
	addobject 16
# 797 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_Trigger_Bikers3::
# 802 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 803 "data/maps/MauvilleCity/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 804 "data/maps/MauvilleCity/scripts.pory"
	addobject 13
# 805 "data/maps/MauvilleCity/scripts.pory"
	addobject 14
# 806 "data/maps/MauvilleCity/scripts.pory"
	addobject 15
# 807 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Trigger_Bikers1_Text_0, MSGBOX_AUTOCLOSE
# 808 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 809 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 810 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 811 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 812 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 813 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 814 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 815 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM
# 816 "data/maps/MauvilleCity/scripts.pory"
	applymovement 13, MauvilleCity_Movement_Biker1
# 817 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 818 "data/maps/MauvilleCity/scripts.pory"
	applymovement 14, MauvilleCity_Movement_Biker1
# 819 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 820 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 14
# 821 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 822 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 823 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police1
# 824 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 825 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 826 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_Police, MSGBOX_AUTOCLOSE
# 827 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 828 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police2
# 829 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 830 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 831 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 2
# 832 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_BIKERS
# 833 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE_110_BIKER_POLICEMAN
# 834 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ROUTE110_HIDE_CYCLIST
# 835 "data/maps/MauvilleCity/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 836 "data/maps/MauvilleCity/scripts.pory"
	fadedefaultbgm
# 837 "data/maps/MauvilleCity/scripts.pory"
	removeobject 13
# 838 "data/maps/MauvilleCity/scripts.pory"
	removeobject 14
# 839 "data/maps/MauvilleCity/scripts.pory"
	removeobject 15
# 840 "data/maps/MauvilleCity/scripts.pory"
	addobject 16
# 841 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_Trigger_Bikers4::
# 846 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 847 "data/maps/MauvilleCity/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 848 "data/maps/MauvilleCity/scripts.pory"
	addobject 13
# 849 "data/maps/MauvilleCity/scripts.pory"
	addobject 14
# 850 "data/maps/MauvilleCity/scripts.pory"
	addobject 15
# 851 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Trigger_Bikers1_Text_0, MSGBOX_AUTOCLOSE
# 852 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 853 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 854 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 855 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 856 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 857 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 858 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 859 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM
# 860 "data/maps/MauvilleCity/scripts.pory"
	applymovement 13, MauvilleCity_Movement_Biker1
# 861 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 862 "data/maps/MauvilleCity/scripts.pory"
	applymovement 14, MauvilleCity_Movement_Biker1
# 863 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 864 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 14
# 865 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 866 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 867 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police1
# 868 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 869 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 870 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_Police, MSGBOX_AUTOCLOSE
# 871 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 872 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police2
# 873 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 874 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 875 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 2
# 876 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_BIKERS
# 877 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE_110_BIKER_POLICEMAN
# 878 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ROUTE110_HIDE_CYCLIST
# 879 "data/maps/MauvilleCity/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 880 "data/maps/MauvilleCity/scripts.pory"
	fadedefaultbgm
# 881 "data/maps/MauvilleCity/scripts.pory"
	removeobject 13
# 882 "data/maps/MauvilleCity/scripts.pory"
	removeobject 14
# 883 "data/maps/MauvilleCity/scripts.pory"
	removeobject 15
# 884 "data/maps/MauvilleCity/scripts.pory"
	addobject 16
# 885 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


# 889 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerRunLeft:
# 890 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_left
# 890 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_left
	step_end

# 893 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerRunRight:
# 894 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
	step_end

# 898 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_Biker1:
# 899 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 899 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 899 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 899 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 899 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 899 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 899 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 899 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 899 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 899 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 900 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 900 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 900 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 900 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 900 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 900 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 900 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 900 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 900 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 900 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 900 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 900 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 900 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
	step_end

# 903 "data/maps/MauvilleCity/scripts.pory"
MauvileCity_Movement_Police1:
# 904 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 904 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 904 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 904 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 904 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 904 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
	step_end

# 907 "data/maps/MauvilleCity/scripts.pory"
MauvileCity_Movement_Police2:
# 908 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 908 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 908 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 908 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 909 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 909 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 909 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 909 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 909 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 909 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 909 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 909 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 909 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 909 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 909 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
	step_end

MauvilleCity_EventScript_Bikers_WomanWarn::
# 918 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 919 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 920 "data/maps/MauvilleCity/scripts.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 921 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 16
# 922 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 923 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 924 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 925 "data/maps/MauvilleCity/scripts.pory"
	applymovement 16, Common_Movement_FacePlayer
# 926 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 16
# 927 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WomanBikersRoute110, MSGBOX_AUTOCLOSE
# 928 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 929 "data/maps/MauvilleCity/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceDown
# 930 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 16
# 931 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 932 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 933 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 3
# 934 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_BIKERS_ROUTE_110
# 935 "data/maps/MauvilleCity/scripts.pory"
	playbgm MUS_RG_SILPH, TRUE
# 936 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 937 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_EventScript_Bikers_WomanWarnText::
# 948 "data/maps/MauvilleCity/scripts.pory"
	lock
# 949 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_Bikers_WomanWarnText_Text_0, MSGBOX_AUTOCLOSE
# 950 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 951 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvileCity_EventScript_SeeWhatsGoingOn::
# 956 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 957 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvileCity_EventScript_SeeWhatsGoingOn_Text_0, MSGBOX_AUTOCLOSE
# 959 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 960 "data/maps/MauvilleCity/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_0
# 961 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_TEMP_0, DIR_WEST
	goto_if_eq MauvileCity_EventScript_SeeWhatsGoingOn_2
# 966 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvileCity_Movement_WalkDown
# 967 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
MauvileCity_EventScript_SeeWhatsGoingOn_1:
# 969 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end

MauvileCity_EventScript_SeeWhatsGoingOn_2:
# 962 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 963 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	goto MauvileCity_EventScript_SeeWhatsGoingOn_1


MauvileCity_EventScript_ICantLeaveLikeThis::
# 974 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 975 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvileCity_EventScript_ICantLeaveLikeThis_Text_0, MSGBOX_AUTOCLOSE
# 976 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 977 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvileCity_Movement_WalkDown
# 978 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 979 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvileCity_EventScript_ICantLeaveLikeThisEast::
# 984 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 985 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvileCity_EventScript_ICantLeaveLikeThis_Text_0, MSGBOX_AUTOCLOSE
# 986 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 987 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 988 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 989 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


# 993 "data/maps/MauvilleCity/scripts.pory"
MauvileCity_Movement_WalkDown:
# 994 "data/maps/MauvilleCity/scripts.pory"
	walk_down
	step_end

MauvilleCity_EventScript_SaveBikerMusic::
# 998 "data/maps/MauvilleCity/scripts.pory"
	savebgm MUS_RG_SILPH
# 999 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
	return


MauvilleCity_EventScript_PolicemanGivesUturn::
# 1005 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 1006 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_PolicemanGivesUturn_Text_0, MSGBOX_AUTOCLOSE
# 1007 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1008 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_POLICEMAN_ROUTE_110
# 1009 "data/maps/MauvilleCity/scripts.pory"
	addobject 17
# 1010 "data/maps/MauvilleCity/scripts.pory"
	applymovement 17, MauvilleCity_Movement_PolicemanApproachesPlayer
# 1011 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 17
# 1012 "data/maps/MauvilleCity/scripts.pory"
	msgbox Route110_Text_PolicemanThankYou, MSGBOX_DEFAULT
# 1013 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1014 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_U_TURN
# 1015 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1016 "data/maps/MauvilleCity/scripts.pory"
	msgbox Route110_Text_PolicemanThankYou2, MSGBOX_AUTOCLOSE
# 1017 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1018 "data/maps/MauvilleCity/scripts.pory"
	applymovement 17, MauvilleCity_Movement_PolicemanLeaves
# 1019 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 17
# 1020 "data/maps/MauvilleCity/scripts.pory"
	removeobject 17
# 1021 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_CYCLIST
# 1022 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_ROUTE_110
# 1023 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 8
# 1024 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


# 1028 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PolicemanApproachesPlayer:
# 1029 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 1029 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 1029 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 1030 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1030 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1030 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1030 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1030 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1030 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1031 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 1031 "data/maps/MauvilleCity/scripts.pory"
	walk_up
	step_end

# 1034 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PolicemanLeaves:
# 1035 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 1035 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 1036 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 1036 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 1036 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 1036 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 1036 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 1036 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 1037 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 1037 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 1037 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 1037 "data/maps/MauvilleCity/scripts.pory"
	walk_down
	step_end

MauvilleCity_EventScript_BikerLeave::
# 1041 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 1042 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 1043 "data/maps/MauvilleCity/scripts.pory"
	applymovement 48, Common_Movement_ExclamationMark
# 1044 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1045 "data/maps/MauvilleCity/scripts.pory"
	waitse
# 1046 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_BikerLeave_Text_0, MSGBOX_AUTOCLOSE
# 1048 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1049 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 1050 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1051 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_EventScript_BikerLeft::
# 1056 "data/maps/MauvilleCity/scripts.pory"
	lock
# 1057 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_BikerLeft_Text_0, MSGBOX_AUTOCLOSE
# 1059 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1060 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 1061 "data/maps/MauvilleCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 1062 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1063 "data/maps/MauvilleCity/scripts.pory"
	waitse
# 1064 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 1065 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_BikerLeave_Text_0, MSGBOX_AUTOCLOSE
# 1067 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1068 "data/maps/MauvilleCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 1069 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1070 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_BikerRight::
# 1075 "data/maps/MauvilleCity/scripts.pory"
	lock
# 1076 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_BikerRight_Text_0, MSGBOX_AUTOCLOSE
# 1081 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1082 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 1083 "data/maps/MauvilleCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 1084 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1085 "data/maps/MauvilleCity/scripts.pory"
	waitse
# 1086 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 1087 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_BikerLeave_Text_0, MSGBOX_AUTOCLOSE
# 1089 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1090 "data/maps/MauvilleCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 1091 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1092 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_NewMauvilleStartTrigger::
# 1097 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 1098 "data/maps/MauvilleCity/scripts.pory"
	setobjectnewmovementtype LOCALID_DACA, MOVEMENT_TYPE_NONE
# 1099 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 1100 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_DACA, Common_Movement_ExclamationMark
# 1101 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1102 "data/maps/MauvilleCity/scripts.pory"
	waitse
# 1103 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_DACA, Common_Movement_WalkInPlaceFasterRight
# 1104 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1105 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_NewMauvilleStartTrigger_Text_0, MSGBOX_DEFAULT
# 1106 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1107 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 1108 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1109 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_NewMauvilleStartTrigger_Text_1, MSGBOX_AUTOCLOSE
# 1110 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1111 "data/maps/MauvilleCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 1112 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_TEMP_1
# 1113 "data/maps/MauvilleCity/scripts.pory"
	case 7, MauvilleCity_EventScript_NewMauvilleStartTrigger_3
# 1115 "data/maps/MauvilleCity/scripts.pory"
	case 8, MauvilleCity_EventScript_NewMauvilleStartTrigger_4
# 1117 "data/maps/MauvilleCity/scripts.pory"
	case 9, MauvilleCity_EventScript_NewMauvilleStartTrigger_5
# 1119 "data/maps/MauvilleCity/scripts.pory"
	case 10, MauvilleCity_EventScript_NewMauvilleStartTrigger_6
# 1121 "data/maps/MauvilleCity/scripts.pory"
	case 11, MauvilleCity_EventScript_NewMauvilleStartTrigger_7
# 1124 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
MauvilleCity_EventScript_NewMauvilleStartTrigger_1:
# 1126 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1127 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WattsonNewMauvilleTrigger
	end

MauvilleCity_EventScript_NewMauvilleStartTrigger_3:
# 1114 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerToDaca7
	goto MauvilleCity_EventScript_NewMauvilleStartTrigger_1

MauvilleCity_EventScript_NewMauvilleStartTrigger_4:
# 1116 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerToDaca8
	goto MauvilleCity_EventScript_NewMauvilleStartTrigger_1

MauvilleCity_EventScript_NewMauvilleStartTrigger_5:
# 1118 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft2
	goto MauvilleCity_EventScript_NewMauvilleStartTrigger_1

MauvilleCity_EventScript_NewMauvilleStartTrigger_6:
# 1120 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerToDaca10
	goto MauvilleCity_EventScript_NewMauvilleStartTrigger_1

MauvilleCity_EventScript_NewMauvilleStartTrigger_7:
# 1122 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerToDaca11
	goto MauvilleCity_EventScript_NewMauvilleStartTrigger_1


MauvilleCity_EventScript_WattsonNewMauvilleTrigger::
# 1132 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 1133 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1134 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 1135 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 1136 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 1137 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_CITY_STATE, 2
# 1138 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_AUTOCLOSE
# 1139 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1140 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_EventScript_TakeCareOfFavorToDaca::
# 1145 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 1146 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_TakeCareOfFavorToDaca_Text_0, MSGBOX_AUTOCLOSE
# 1148 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1149 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 1150 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1151 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_EventScript_DacaGoesBackToGym::
# 1156 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 1157 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 1158 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_DacaGoesBackToGym_3
# 1159 "data/maps/MauvilleCity/scripts.pory"
	case DIR_SOUTH, MauvilleCity_EventScript_DacaGoesBackToGym_3
# 1163 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_DacaGoesBackToGym_4
# 1167 "data/maps/MauvilleCity/scripts.pory"
	case DIR_WEST, MauvilleCity_EventScript_DacaGoesBackToGym_5
# 1170 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_DACA, MauvilleCity_Movement_DacaLeavesPlayerFaceNorthSouth
MauvilleCity_EventScript_DacaGoesBackToGym_1:
# 1172 "data/maps/MauvilleCity/scripts.pory"
	waitmovement LOCALID_DACA
# 1173 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_DACA
# 1174 "data/maps/MauvilleCity/scripts.pory"
	release
	end

MauvilleCity_EventScript_DacaGoesBackToGym_3:
# 1160 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_DACA, MauvilleCity_Movement_DacaLeavesPlayerFaceNorthSouth
# 1161 "data/maps/MauvilleCity/scripts.pory"
	delay 16
# 1162 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	goto MauvilleCity_EventScript_DacaGoesBackToGym_1

MauvilleCity_EventScript_DacaGoesBackToGym_4:
# 1164 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_DACA, MauvilleCity_Movement_DacaLeavesPlayerFaceEast
# 1165 "data/maps/MauvilleCity/scripts.pory"
	delay 24
# 1166 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	goto MauvilleCity_EventScript_DacaGoesBackToGym_1

MauvilleCity_EventScript_DacaGoesBackToGym_5:
# 1168 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_DACA, MauvilleCity_Movement_DacaLeavesPlayerFaceNorthSouth
	goto MauvilleCity_EventScript_DacaGoesBackToGym_1


# 1178 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerToDaca7:
# 1179 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1180 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 1180 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 1181 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 1184 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerToDaca8:
# 1185 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1185 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1186 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 1187 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_left
	step_end

# 1190 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerToDaca10:
# 1191 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1191 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1192 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 1193 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_left
	step_end

# 1196 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerToDaca11:
# 1197 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1198 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 1198 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 1199 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 1202 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_DacaLeavesPlayerFaceNorthSouth:
# 1203 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1203 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1203 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1203 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1203 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1203 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1203 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1203 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1203 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 1206 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_DacaLeavesPlayerFaceEast:
# 1207 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 1208 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1208 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1208 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1208 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1208 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1208 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1208 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1208 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1208 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1208 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

MauvilleCity_Trigger_Bikers1_Text_0:
# 715 "data/maps/MauvilleCity/scripts.pory"
	.string "LOOK OUT!$"

MauvilleCity_EventScript_Bikers_WomanWarnText_Text_0:
# 949 "data/maps/MauvilleCity/scripts.pory"
	.string "Oh no…$"

MauvileCity_EventScript_SeeWhatsGoingOn_Text_0:
# 957 "data/maps/MauvilleCity/scripts.pory"
	.string "I should see what's happening\n on ROUTE 110.$"

MauvileCity_EventScript_ICantLeaveLikeThis_Text_0:
# 975 "data/maps/MauvilleCity/scripts.pory"
	.string "I can't just abandon that policeman!$"

MauvilleCity_EventScript_PolicemanGivesUturn_Text_0:
# 1006 "data/maps/MauvilleCity/scripts.pory"
	.string "Wait!$"

MauvilleCity_EventScript_BikerLeave_Text_0:
# 1046 "data/maps/MauvilleCity/scripts.pory"
	.string "Hey, don't you see us talking?\n Get out of here!$"

MauvilleCity_EventScript_BikerLeft_Text_0:
# 1057 "data/maps/MauvilleCity/scripts.pory"
	.string "The boss is going to be here\n soon, right?$"

MauvilleCity_EventScript_BikerRight_Text_0:
# 1076 "data/maps/MauvilleCity/scripts.pory"
	.string "Yeah…\p I think that pig's still\n on our trail.\p Hopefully we distracted him\n for long enough.$"

MauvilleCity_EventScript_NewMauvilleStartTrigger_Text_0:
# 1105 "data/maps/MauvilleCity/scripts.pory"
	.string "DACA: {PLAYER}!$"

MauvilleCity_EventScript_NewMauvilleStartTrigger_Text_1:
# 1109 "data/maps/MauvilleCity/scripts.pory"
	.string "Over here!$"

MauvilleCity_EventScript_TakeCareOfFavorToDaca_Text_0:
# 1146 "data/maps/MauvilleCity/scripts.pory"
	.string "I should take care of that\n favor for DACA first.$"

MauvilleCity_Text_DacaGone::
# 700 "data/maps/MauvilleCity/scripts.pory"
	.string "Like, what's up, dude?\n Here to challenge the GYM?\p Sorry, the LEADER went to \n RUSTURF TUNNEL.\p I don't know when she'll be back.\n Maybe you could go get her for me?$"

MauvilleCity_Text_Police::
# 912 "data/maps/MauvilleCity/scripts.pory"
	.string "Huff… Huff…\n Requesting back up on ROUTE 110!$"

MauvilleCity_Text_WomanBikersRoute110::
# 941 "data/maps/MauvilleCity/scripts.pory"
	.string "A BIKER gang took over the CYCLING\n ROAD!\p That poor policeman is outnumbered!$"
