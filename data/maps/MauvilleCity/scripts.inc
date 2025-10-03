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
	call_if_ge VAR_SPEEDWAGON_STATE, 8, MauvilleCity_EventScript_ResetCyclingRoadFlags
# 23 "data/maps/MauvilleCity/scripts.pory"
	end
# 24 "data/maps/MauvilleCity/scripts.pory"

# 25 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ResetCyclingRoadFlags::
# 26 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_CYCLIST
# 27 "data/maps/MauvilleCity/scripts.pory"
	return
# 28 "data/maps/MauvilleCity/scripts.pory"

# 29 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnFrame:
# 30 "data/maps/MauvilleCity/scripts.pory"
	map_script_2 VAR_SPEEDWAGON_STATE, 6, MauvilleCity_EventScript_PolicemanGivesUturn @ functionally unused
# 31 "data/maps/MauvilleCity/scripts.pory"
	map_script_2 VAR_SPEEDWAGON_STATE, 7, MauvilleCity_EventScript_PolicemanGivesUturn @ functionally unused
# 32 "data/maps/MauvilleCity/scripts.pory"
	.2byte 0
# 33 "data/maps/MauvilleCity/scripts.pory"

# 34 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWallyUpOneTile:
# 35 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_WALLY, 8, 6
# 36 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_WALLYS_UNCLE, 9, 6
# 37 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 12, 14
# 38 "data/maps/MauvilleCity/scripts.pory"
	return
# 39 "data/maps/MauvilleCity/scripts.pory"

# 40 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWattsonBackToGym::
# 41 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 42 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 43 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
# 44 "data/maps/MauvilleCity/scripts.pory"
	return
# 45 "data/maps/MauvilleCity/scripts.pory"

# 46 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Boy::
# 47 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
# 48 "data/maps/MauvilleCity/scripts.pory"
	end
# 49 "data/maps/MauvilleCity/scripts.pory"

# 50 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Maniac::
# 51 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
# 52 "data/maps/MauvilleCity/scripts.pory"
	end
# 53 "data/maps/MauvilleCity/scripts.pory"

# 54 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Woman::
# 55 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
# 56 "data/maps/MauvilleCity/scripts.pory"
	end
# 57 "data/maps/MauvilleCity/scripts.pory"

# 58 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RichBoy::
# 59 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
# 60 "data/maps/MauvilleCity/scripts.pory"
	end
# 61 "data/maps/MauvilleCity/scripts.pory"

# 62 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CitySign::
# 63 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
# 64 "data/maps/MauvilleCity/scripts.pory"
	end
# 65 "data/maps/MauvilleCity/scripts.pory"

# 66 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GymSign::
# 67 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
# 68 "data/maps/MauvilleCity/scripts.pory"
	end
# 69 "data/maps/MauvilleCity/scripts.pory"

# 70 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BikeShopSign::
# 71 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
# 72 "data/maps/MauvilleCity/scripts.pory"
	end
# 73 "data/maps/MauvilleCity/scripts.pory"

# 74 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GameCornerSign::
# 75 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
# 76 "data/maps/MauvilleCity/scripts.pory"
	end
# 77 "data/maps/MauvilleCity/scripts.pory"

# 78 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_SchoolKidM::
# 79 "data/maps/MauvilleCity/scripts.pory"
	lock
# 80 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 81 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
# 82 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
# 83 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TV_EXPLAINED
# 84 "data/maps/MauvilleCity/scripts.pory"
	release
# 85 "data/maps/MauvilleCity/scripts.pory"
	end
# 86 "data/maps/MauvilleCity/scripts.pory"

# 87 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_TVExplained::
# 88 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
# 89 "data/maps/MauvilleCity/scripts.pory"
	release
# 90 "data/maps/MauvilleCity/scripts.pory"
	end
# 91 "data/maps/MauvilleCity/scripts.pory"

# 92 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallysUncle::
# 93 "data/maps/MauvilleCity/scripts.pory"
	lock
# 94 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 95 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
# 96 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
# 97 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 98 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 99 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 100 "data/maps/MauvilleCity/scripts.pory"
	release
# 101 "data/maps/MauvilleCity/scripts.pory"
	end
# 102 "data/maps/MauvilleCity/scripts.pory"

# 103 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
# 104 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
# 105 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 106 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 107 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 108 "data/maps/MauvilleCity/scripts.pory"
	release
# 109 "data/maps/MauvilleCity/scripts.pory"
	end
# 110 "data/maps/MauvilleCity/scripts.pory"

# 111 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wally::
# 112 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 113 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallyRequestBattleAgain
# 114 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 115 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 116 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 117 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 118 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 119 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 120 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 121 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 122 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
# 123 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 124 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_Delay48
# 125 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 126 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 127 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 128 "data/maps/MauvilleCity/scripts.pory"
	end
# 129 "data/maps/MauvilleCity/scripts.pory"

# 130 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt::
# 131 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, MauvilleCity_EventScript_BattleWally
# 132 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_EventScript_DeclineWallyBattle
# 133 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 134 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 135 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_WallyAndUncleExitNorth
# 136 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_WallyAndUncleExitEast
# 137 "data/maps/MauvilleCity/scripts.pory"
	end
# 138 "data/maps/MauvilleCity/scripts.pory"

# 139 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitNorth::
# 140 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 141 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth1
# 142 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth1
# 143 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 144 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 145 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 146 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 147 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
# 148 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
# 149 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 150 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 151 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 152 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 153 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth2
# 154 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth2
# 155 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 156 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 157 "data/maps/MauvilleCity/scripts.pory"
	end
# 158 "data/maps/MauvilleCity/scripts.pory"

# 159 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitEast::
# 160 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 161 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast1
# 162 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast1
# 163 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 164 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 165 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 166 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 167 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerEast
# 168 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 169 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 170 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 171 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 172 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast2
# 173 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast2
# 174 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 175 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 176 "data/maps/MauvilleCity/scripts.pory"
	end
# 177 "data/maps/MauvilleCity/scripts.pory"

# 178 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally::
# 179 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLY
# 180 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLYS_UNCLE
# 181 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 182 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 183 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 184 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 185 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 186 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottApproachPlayerNorth
# 187 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottApproachPlayerEast
# 188 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 189 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 190 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 191 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 192 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 193 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottExitNorth
# 194 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottExitEast
# 195 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 196 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 197 "data/maps/MauvilleCity/scripts.pory"
	end
# 198 "data/maps/MauvilleCity/scripts.pory"

# 199 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerNorth::
# 200 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 201 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerNorth
# 202 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 203 "data/maps/MauvilleCity/scripts.pory"
	return
# 204 "data/maps/MauvilleCity/scripts.pory"

# 205 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerEast::
# 206 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 12, 13
# 207 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 208 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
# 209 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 210 "data/maps/MauvilleCity/scripts.pory"
	return
# 211 "data/maps/MauvilleCity/scripts.pory"

# 212 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitNorth::
# 213 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 214 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitNorth
# 215 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 216 "data/maps/MauvilleCity/scripts.pory"
	return
# 217 "data/maps/MauvilleCity/scripts.pory"

# 218 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitEast::
# 219 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 220 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitEast
# 221 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 222 "data/maps/MauvilleCity/scripts.pory"
	return
# 223 "data/maps/MauvilleCity/scripts.pory"

# 224 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWally::
# 225 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 226 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
# 227 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 228 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 229 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 230 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 231 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 232 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 233 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 234 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 235 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
# 236 "data/maps/MauvilleCity/scripts.pory"
	return
# 237 "data/maps/MauvilleCity/scripts.pory"

# 238 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DeclineWallyBattle::
# 239 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 240 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 241 "data/maps/MauvilleCity/scripts.pory"
	release
# 242 "data/maps/MauvilleCity/scripts.pory"
	end
# 243 "data/maps/MauvilleCity/scripts.pory"

# 244 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyRequestBattleAgain::
# 245 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 246 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 247 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 248 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 249 "data/maps/MauvilleCity/scripts.pory"
	end
# 250 "data/maps/MauvilleCity/scripts.pory"

# 251 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth1:
# 252 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 253 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 254 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 255 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 256 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 257 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 258 "data/maps/MauvilleCity/scripts.pory"

# 259 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast1:
# 260 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 261 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 262 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 263 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 264 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 265 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 266 "data/maps/MauvilleCity/scripts.pory"

# 267 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth2:
# 268 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 269 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 270 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 271 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 272 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 273 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 274 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 275 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 276 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 277 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 278 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 279 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 280 "data/maps/MauvilleCity/scripts.pory"

# 281 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast2:
# 282 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 283 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 284 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 285 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 286 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 287 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 288 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 289 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 290 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 291 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 292 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 293 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 294 "data/maps/MauvilleCity/scripts.pory"

# 295 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
# 296 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 297 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 298 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 299 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 300 "data/maps/MauvilleCity/scripts.pory"

# 301 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast2:
# 302 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 303 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 304 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 305 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 306 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 307 "data/maps/MauvilleCity/scripts.pory"

# 308 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitNorth:
# 309 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 310 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 311 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 312 "data/maps/MauvilleCity/scripts.pory"

# 313 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast:
# 314 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 315 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 316 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 317 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 318 "data/maps/MauvilleCity/scripts.pory"

# 319 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast1:
# 320 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 321 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 322 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 323 "data/maps/MauvilleCity/scripts.pory"

# 324 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
# 325 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 326 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 327 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 328 "data/maps/MauvilleCity/scripts.pory"

# 329 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth1:
# 330 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 331 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 332 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 333 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 334 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 335 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 336 "data/maps/MauvilleCity/scripts.pory"

# 337 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast1:
# 338 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 339 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 340 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 341 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 342 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 343 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 344 "data/maps/MauvilleCity/scripts.pory"

# 345 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleNorth:
# 346 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 347 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 348 "data/maps/MauvilleCity/scripts.pory"
	delay_4
# 349 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 350 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 351 "data/maps/MauvilleCity/scripts.pory"

# 352 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
# 353 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 354 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 355 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 356 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 357 "data/maps/MauvilleCity/scripts.pory"

# 358 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerEast:
# 359 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 360 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 361 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 362 "data/maps/MauvilleCity/scripts.pory"

# 363 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth2:
# 364 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 365 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 366 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 367 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 368 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 369 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 370 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 371 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 372 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 373 "data/maps/MauvilleCity/scripts.pory"

# 374 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast2:
# 375 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 376 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 377 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 378 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 379 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 380 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 381 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 382 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 383 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 384 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 385 "data/maps/MauvilleCity/scripts.pory"

# 386 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerNorth:
# 387 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 388 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 389 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 390 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 391 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 392 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 393 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 394 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 395 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 396 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 397 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 398 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 399 "data/maps/MauvilleCity/scripts.pory"

# 400 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast:
# 401 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 402 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 403 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 404 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 405 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 406 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 407 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 408 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 409 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 410 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 411 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 412 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 413 "data/maps/MauvilleCity/scripts.pory"

# 414 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth:
# 415 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 416 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 417 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 418 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 419 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 420 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 421 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 422 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 423 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 424 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 425 "data/maps/MauvilleCity/scripts.pory"

# 426 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitEast:
# 427 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 428 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 429 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 430 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 431 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 432 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 433 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 434 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 435 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 436 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 437 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 438 "data/maps/MauvilleCity/scripts.pory"

# 439 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson::
# 440 "data/maps/MauvilleCity/scripts.pory"
	lock
# 441 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 442 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_ReceivedThunderbolt
# 443 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
# 444 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
# 445 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 446 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 447 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 448 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 449 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_CITY_STATE, 2 @ Custom for new mauville triggers
# 450 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 451 "data/maps/MauvilleCity/scripts.pory"
	release
# 452 "data/maps/MauvilleCity/scripts.pory"
	end
# 453 "data/maps/MauvilleCity/scripts.pory"

# 454 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BegunNewMauville::
# 455 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 456 "data/maps/MauvilleCity/scripts.pory"
	release
# 457 "data/maps/MauvilleCity/scripts.pory"
	end
# 458 "data/maps/MauvilleCity/scripts.pory"

# 459 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CompletedNewMauville::
# 460 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 461 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 462 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 463 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
# 464 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_CITY_STATE, 3 @ Custom for New Mauville triggers
# 465 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 466 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DacaGoesBackToGym
# 467 "data/maps/MauvilleCity/scripts.pory"
	@ release
# 468 "data/maps/MauvilleCity/scripts.pory"
	end
# 469 "data/maps/MauvilleCity/scripts.pory"

# 470 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ReceivedThunderbolt::
# 471 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 472 "data/maps/MauvilleCity/scripts.pory"
	release
# 473 "data/maps/MauvilleCity/scripts.pory"
	end
# 474 "data/maps/MauvilleCity/scripts.pory"

# 475 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RegisterWallyCall::
# 476 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 477 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 478 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 479 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 480 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 481 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 482 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 483 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 484 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 485 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 486 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 487 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 488 "data/maps/MauvilleCity/scripts.pory"
	end
# 489 "data/maps/MauvilleCity/scripts.pory"

# 490 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleHesTooPeppy:
# 491 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: It's because of POKéMON that\n"
# 492 "data/maps/MauvilleCity/scripts.pory"
	.string "this boy's got more pep, I suppose…\l"
# 493 "data/maps/MauvilleCity/scripts.pory"
	.string "But he's become a bit too peppy…$"
# 494 "data/maps/MauvilleCity/scripts.pory"

# 495 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWantToChallengeGym:
# 496 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Aww, UNCLE, please?\p"
# 497 "data/maps/MauvilleCity/scripts.pory"
	.string "I want to challenge this GYM and see\n"
# 498 "data/maps/MauvilleCity/scripts.pory"
	.string "how much better I've become.\p"
# 499 "data/maps/MauvilleCity/scripts.pory"
	.string "Please? May I, please?$"
# 500 "data/maps/MauvilleCity/scripts.pory"

# 501 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleYourePushingIt:
# 502 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: Now hold on, WALLY.\p"
# 503 "data/maps/MauvilleCity/scripts.pory"
	.string "Since you started living with POKéMON,\n"
# 504 "data/maps/MauvilleCity/scripts.pory"
	.string "you have grown quite a lot stronger.\p"
# 505 "data/maps/MauvilleCity/scripts.pory"
	.string "But don't you think you're pushing it\n"
# 506 "data/maps/MauvilleCity/scripts.pory"
	.string "to suddenly challenge a GYM?$"
# 507 "data/maps/MauvilleCity/scripts.pory"

# 508 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWeCanBeatAnyone:
# 509 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: I'm not pushing it.\p"
# 510 "data/maps/MauvilleCity/scripts.pory"
	.string "If I combine forces with KIRLIA,\n"
# 511 "data/maps/MauvilleCity/scripts.pory"
	.string "we can beat anyone!$"
# 512 "data/maps/MauvilleCity/scripts.pory"

# 513 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWillYouBattleMe:
# 514 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh! Hi, {PLAYER}!\p"
# 515 "data/maps/MauvilleCity/scripts.pory"
	.string "I've gotten a lot stronger since\n"
# 516 "data/maps/MauvilleCity/scripts.pory"
	.string "we met.\p"
# 517 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, I want you and my UNCLE to\n"
# 518 "data/maps/MauvilleCity/scripts.pory"
	.string "understand that.\p"
# 519 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, please, will you have\n"
# 520 "data/maps/MauvilleCity/scripts.pory"
	.string "a battle with me?$"
# 521 "data/maps/MauvilleCity/scripts.pory"

# 522 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyMyUncleWontKnowImStrong:
# 523 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh… If you won't battle me,\n"
# 524 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, my UNCLE won't know that I've\l"
# 525 "data/maps/MauvilleCity/scripts.pory"
	.string "become really strong.$"
# 526 "data/maps/MauvilleCity/scripts.pory"

# 527 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleCanYouBattleWally:
# 528 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, was it?\n"
# 529 "data/maps/MauvilleCity/scripts.pory"
	.string "On WALLY's behalf, can I ask you to\l"
# 530 "data/maps/MauvilleCity/scripts.pory"
	.string "battle with him just this once?\p"
# 531 "data/maps/MauvilleCity/scripts.pory"
	.string "I don't think he's going to listen to\n"
# 532 "data/maps/MauvilleCity/scripts.pory"
	.string "any reason the way he is now.$"
# 533 "data/maps/MauvilleCity/scripts.pory"

# 534 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPleaseBattleMe:
# 535 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, please!\n"
# 536 "data/maps/MauvilleCity/scripts.pory"
	.string "Battle with me, please.$"
# 537 "data/maps/MauvilleCity/scripts.pory"

# 538 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyHereICome:
# 539 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, thank you.\p"
# 540 "data/maps/MauvilleCity/scripts.pory"
	.string "Okay… Here I come!$"
# 541 "data/maps/MauvilleCity/scripts.pory"

# 542 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyDefeat:
# 543 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: … … … … … … …\p"
# 544 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … … … …\p"
# 545 "data/maps/MauvilleCity/scripts.pory"
	.string "I lost…$"
# 546 "data/maps/MauvilleCity/scripts.pory"

# 547 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyIllGoBackToVerdanturf:
# 548 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: UNCLE…\n"
# 549 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll go back to VERDANTURF…$"
# 550 "data/maps/MauvilleCity/scripts.pory"

# 551 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ThankYouNotEnoughToBattle:
# 552 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, thank you.\n"
# 553 "data/maps/MauvilleCity/scripts.pory"
	.string "Being a TRAINER is tough, isn't it?\p"
# 554 "data/maps/MauvilleCity/scripts.pory"
	.string "It's not enough just to have POKéMON\n"
# 555 "data/maps/MauvilleCity/scripts.pory"
	.string "and make them battle. That isn't what\l"
# 556 "data/maps/MauvilleCity/scripts.pory"
	.string "being a real TRAINER is about.$"
# 557 "data/maps/MauvilleCity/scripts.pory"

# 558 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleNoNeedToBeDown:
# 559 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: WALLY, there's no need to be so\n"
# 560 "data/maps/MauvilleCity/scripts.pory"
	.string "down on yourself.\p"
# 561 "data/maps/MauvilleCity/scripts.pory"
	.string "Why, what's keeping you from becoming\n"
# 562 "data/maps/MauvilleCity/scripts.pory"
	.string "stronger and stronger?\p"
# 563 "data/maps/MauvilleCity/scripts.pory"
	.string "Come on, let's go home.\n"
# 564 "data/maps/MauvilleCity/scripts.pory"
	.string "Everyone's waiting for you.$"
# 565 "data/maps/MauvilleCity/scripts.pory"

# 566 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleVisitUsSometime:
# 567 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, it just dawned on me\n"
# 568 "data/maps/MauvilleCity/scripts.pory"
	.string "that you must be the TRAINER who kept\l"
# 569 "data/maps/MauvilleCity/scripts.pory"
	.string "an eye out for WALLY when he caught\l"
# 570 "data/maps/MauvilleCity/scripts.pory"
	.string "his POKéMON.\p"
# 571 "data/maps/MauvilleCity/scripts.pory"
	.string "Why don't you visit us in VERDANTURF\n"
# 572 "data/maps/MauvilleCity/scripts.pory"
	.string "sometime?\l"
# 573 "data/maps/MauvilleCity/scripts.pory"
	.string "I'm sure WALLY would enjoy it.$"
# 574 "data/maps/MauvilleCity/scripts.pory"

# 575 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPokenavCall:
# 576 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 577 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Beep!\p"
# 578 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh, hello, {PLAYER}!\p"
# 579 "data/maps/MauvilleCity/scripts.pory"
	.string "I just wanted to tell you that\n"
# 580 "data/maps/MauvilleCity/scripts.pory"
	.string "my uncle bought me a POKéNAV!\p"
# 581 "data/maps/MauvilleCity/scripts.pory"
	.string "Now I can get in touch with you\n"
# 582 "data/maps/MauvilleCity/scripts.pory"
	.string "anytime, {PLAYER}!\p"
# 583 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 584 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Click!$"
# 585 "data/maps/MauvilleCity/scripts.pory"

# 586 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RegisteredWally:
# 587 "data/maps/MauvilleCity/scripts.pory"
	.string "Registered WALLY\n"
# 588 "data/maps/MauvilleCity/scripts.pory"
	.string "in the POKéNAV.$"
# 589 "data/maps/MauvilleCity/scripts.pory"

# 590 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ScottYouDidntHoldBack:
# 591 "data/maps/MauvilleCity/scripts.pory"
	.string "SCOTT: Hehe…\n"
# 592 "data/maps/MauvilleCity/scripts.pory"
	.string "I was watching that match!\p"
# 593 "data/maps/MauvilleCity/scripts.pory"
	.string "You're friends with that boy WALLY,\n"
# 594 "data/maps/MauvilleCity/scripts.pory"
	.string "aren't you?\p"
# 595 "data/maps/MauvilleCity/scripts.pory"
	.string "But you didn't hold anything back\n"
# 596 "data/maps/MauvilleCity/scripts.pory"
	.string "and beat him impressively.\p"
# 597 "data/maps/MauvilleCity/scripts.pory"
	.string "Yeah! That's what a real POKéMON\n"
# 598 "data/maps/MauvilleCity/scripts.pory"
	.string "battle is all about!\p"
# 599 "data/maps/MauvilleCity/scripts.pory"
	.string "I idolize TRAINERS like that!\p"
# 600 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 601 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll be cheering for you!$"
# 602 "data/maps/MauvilleCity/scripts.pory"

# 603 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonNeedFavorTakeKey:
# 604 "data/maps/MauvilleCity/scripts.pory"
	.string "DACA: Oh, {PLAYER}{KUN}!\n"
# 605 "data/maps/MauvilleCity/scripts.pory"
	.string "You look ready to party!\l"
# 606 "data/maps/MauvilleCity/scripts.pory"
	.string "That's a good thing, hahaha!\p"
# 607 "data/maps/MauvilleCity/scripts.pory"
	.string "Fine! I've decided!\n"
# 608 "data/maps/MauvilleCity/scripts.pory"
	.string "I need a favor, {PLAYER}{KUN}!\p"
# 609 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY has an underground\n"
# 610 "data/maps/MauvilleCity/scripts.pory"
	.string "sector called NEW MAUVILLE.\p"
# 611 "data/maps/MauvilleCity/scripts.pory"
	.string "We used to party there, but it's\n"
# 612 "data/maps/MauvilleCity/scripts.pory"
	.string "abandoned now.\p"
# 613 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'd like you to go there and\n"
# 614 "data/maps/MauvilleCity/scripts.pory"
	.string "switch off the GENERATOR.\p"
# 615 "data/maps/MauvilleCity/scripts.pory"
	.string "It's been running a bit haywire.\n"
# 616 "data/maps/MauvilleCity/scripts.pory"
	.string "It's getting unsafe.\p"
# 617 "data/maps/MauvilleCity/scripts.pory"
	.string "Here, this is the KEY to get into\n"
# 618 "data/maps/MauvilleCity/scripts.pory"
	.string "NEW MAUVILLE.$"
# 619 "data/maps/MauvilleCity/scripts.pory"

# 620 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonWontBeChallenge:
# 621 "data/maps/MauvilleCity/scripts.pory"
	.string "Don't be nervous.\n"
# 622 "data/maps/MauvilleCity/scripts.pory"
	.string "It won't be a challenge to you.\p"
# 623 "data/maps/MauvilleCity/scripts.pory"
	.string "The entrance to NEW MAUVILLE is just\n"
# 624 "data/maps/MauvilleCity/scripts.pory"
	.string "a short SURF away from ROUTE 110.\p"
# 625 "data/maps/MauvilleCity/scripts.pory"
	.string "That's it, then! Go party!\n"
# 626 "data/maps/MauvilleCity/scripts.pory"
	.string "Hahaha!$"
# 627 "data/maps/MauvilleCity/scripts.pory"

# 628 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonThanksTakeTM:
# 629 "data/maps/MauvilleCity/scripts.pory"
	.string "DACA: Hahaha!\p"
# 630 "data/maps/MauvilleCity/scripts.pory"
	.string "Thanks, {PLAYER}{KUN}! I knew it was\n"
# 631 "data/maps/MauvilleCity/scripts.pory"
	.string "the right choice asking you!\p"
# 632 "data/maps/MauvilleCity/scripts.pory"
	.string "Take this for your trouble: a TM\n"
# 633 "data/maps/MauvilleCity/scripts.pory"
	.string "containing THUNDERBOLT!\p"
# 634 "data/maps/MauvilleCity/scripts.pory"
	.string "Go on, you've earned it!$"
# 635 "data/maps/MauvilleCity/scripts.pory"

# 636 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonYoungTakeCharge:
# 637 "data/maps/MauvilleCity/scripts.pory"
	.string "Hahaha!\p"
# 638 "data/maps/MauvilleCity/scripts.pory"
	.string "Let's party again soon,\n"
# 639 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}!$"
# 640 "data/maps/MauvilleCity/scripts.pory"

# 641 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_NurseHurtMonBackToHealth:
# 642 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have POKéMON\n"
# 643 "data/maps/MauvilleCity/scripts.pory"
	.string "battles and stuff…\p"
# 644 "data/maps/MauvilleCity/scripts.pory"
	.string "But if your POKéMON gets hurt,\n"
# 645 "data/maps/MauvilleCity/scripts.pory"
	.string "you have to nurse it back to health.$"
# 646 "data/maps/MauvilleCity/scripts.pory"

# 647 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_AllSortsOfPeopleComeThrough:
# 648 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
# 649 "data/maps/MauvilleCity/scripts.pory"
	.string "and south, and east and west.\p"
# 650 "data/maps/MauvilleCity/scripts.pory"
	.string "Because of that, we get all sorts of\n"
# 651 "data/maps/MauvilleCity/scripts.pory"
	.string "people coming through.$"
# 652 "data/maps/MauvilleCity/scripts.pory"

# 653 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RydelVeryGenerous:
# 654 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to RYDEL'S CYCLES yet?\p"
# 655 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL, the owner, is a very generous\n"
# 656 "data/maps/MauvilleCity/scripts.pory"
	.string "man.$"
# 657 "data/maps/MauvilleCity/scripts.pory"

# 658 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_PokemonCanJumpYouOnBike:
# 659 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a BIKE,\n"
# 660 "data/maps/MauvilleCity/scripts.pory"
	.string "wild POKéMON could jump you.$"
# 661 "data/maps/MauvilleCity/scripts.pory"

# 662 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_CitySign:
# 663 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY\n"
# 664 "data/maps/MauvilleCity/scripts.pory"
	.string "“The bright and shiny city of fun!”$"
# 665 "data/maps/MauvilleCity/scripts.pory"

# 666 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GymSign:
# 667 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\n"
# 668 "data/maps/MauvilleCity/scripts.pory"
	.string "LEADER: DACA\l"
# 669 "data/maps/MauvilleCity/scripts.pory"
	.string "“Get ready for a party!”$"
# 670 "data/maps/MauvilleCity/scripts.pory"

# 671 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BikeShopSign:
# 672 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
# 673 "data/maps/MauvilleCity/scripts.pory"
	.string "soul!”\l"
# 674 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL'S CYCLES$"
# 675 "data/maps/MauvilleCity/scripts.pory"

# 676 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GameCornerSign:
# 677 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
# 678 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE GAME CORNER$"
# 679 "data/maps/MauvilleCity/scripts.pory"

# 680 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ExplainTV:
# 681 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, do you check out TV at all?\p"
# 682 "data/maps/MauvilleCity/scripts.pory"
	.string "They've added a bunch of cool new\n"
# 683 "data/maps/MauvilleCity/scripts.pory"
	.string "shows recently.\p"
# 684 "data/maps/MauvilleCity/scripts.pory"
	.string "TV is so cool. I've seen my friends on\n"
# 685 "data/maps/MauvilleCity/scripts.pory"
	.string "TV just out of the blue.\p"
# 686 "data/maps/MauvilleCity/scripts.pory"
	.string "And, sometimes, they even put you on TV\n"
# 687 "data/maps/MauvilleCity/scripts.pory"
	.string "without telling you.\p"
# 688 "data/maps/MauvilleCity/scripts.pory"
	.string "I wish I would be on TV sometime.\p"
# 689 "data/maps/MauvilleCity/scripts.pory"
	.string "That's why I think you should check\n"
# 690 "data/maps/MauvilleCity/scripts.pory"
	.string "out TVs whenever you can.$"
# 691 "data/maps/MauvilleCity/scripts.pory"

# 692 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BeenCheckingOutTV:
# 693 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"

MauvilleCity_EventScript_GymNPC::
# 697 "data/maps/MauvilleCity/scripts.pory"
	lock
# 698 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, Common_Movement_FacePlayer
# 699 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 12
# 700 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_DacaGone, MSGBOX_NPC
# 701 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 702 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_Trigger_Bikers1::
# 716 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 717 "data/maps/MauvilleCity/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 718 "data/maps/MauvilleCity/scripts.pory"
	addobject 13
# 719 "data/maps/MauvilleCity/scripts.pory"
	addobject 14
# 720 "data/maps/MauvilleCity/scripts.pory"
	addobject 15
# 721 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Trigger_Bikers1_Text_0, MSGBOX_AUTOCLOSE
# 722 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 723 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 724 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 725 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 726 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 727 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 728 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerRunLeft
# 729 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 730 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 731 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 732 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 733 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM
# 734 "data/maps/MauvilleCity/scripts.pory"
	applymovement 13, MauvilleCity_Movement_Biker1
# 735 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 736 "data/maps/MauvilleCity/scripts.pory"
	applymovement 14, MauvilleCity_Movement_Biker1
# 737 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 738 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 14
# 739 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 740 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 741 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police1
# 742 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 743 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 744 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_Police, MSGBOX_AUTOCLOSE
# 745 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 746 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police2
# 747 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 748 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 749 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 2
# 750 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_BIKERS
# 751 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE_110_BIKER_POLICEMAN
# 752 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ROUTE110_HIDE_CYCLIST
# 753 "data/maps/MauvilleCity/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 754 "data/maps/MauvilleCity/scripts.pory"
	fadedefaultbgm
# 755 "data/maps/MauvilleCity/scripts.pory"
	removeobject 13
# 756 "data/maps/MauvilleCity/scripts.pory"
	removeobject 14
# 757 "data/maps/MauvilleCity/scripts.pory"
	removeobject 15
# 758 "data/maps/MauvilleCity/scripts.pory"
	addobject 16
# 759 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_Trigger_Bikers2::
# 764 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 765 "data/maps/MauvilleCity/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 766 "data/maps/MauvilleCity/scripts.pory"
	addobject 13
# 767 "data/maps/MauvilleCity/scripts.pory"
	addobject 14
# 768 "data/maps/MauvilleCity/scripts.pory"
	addobject 15
# 769 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Trigger_Bikers1_Text_0, MSGBOX_AUTOCLOSE
# 770 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 771 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 772 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 773 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 774 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 775 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 776 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerRunRight
# 777 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 778 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 779 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 780 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 781 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM
# 782 "data/maps/MauvilleCity/scripts.pory"
	applymovement 13, MauvilleCity_Movement_Biker1
# 783 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 784 "data/maps/MauvilleCity/scripts.pory"
	applymovement 14, MauvilleCity_Movement_Biker1
# 785 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 786 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 14
# 787 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 788 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 789 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police1
# 790 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 791 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 792 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_Police, MSGBOX_AUTOCLOSE
# 793 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 794 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police2
# 795 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 796 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 797 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 2
# 798 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_BIKERS
# 799 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE_110_BIKER_POLICEMAN
# 800 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ROUTE110_HIDE_CYCLIST
# 801 "data/maps/MauvilleCity/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 802 "data/maps/MauvilleCity/scripts.pory"
	fadedefaultbgm
# 803 "data/maps/MauvilleCity/scripts.pory"
	removeobject 13
# 804 "data/maps/MauvilleCity/scripts.pory"
	removeobject 14
# 805 "data/maps/MauvilleCity/scripts.pory"
	removeobject 15
# 806 "data/maps/MauvilleCity/scripts.pory"
	addobject 16
# 807 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_Trigger_Bikers3::
# 812 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 813 "data/maps/MauvilleCity/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 814 "data/maps/MauvilleCity/scripts.pory"
	addobject 13
# 815 "data/maps/MauvilleCity/scripts.pory"
	addobject 14
# 816 "data/maps/MauvilleCity/scripts.pory"
	addobject 15
# 817 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Trigger_Bikers1_Text_0, MSGBOX_AUTOCLOSE
# 818 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 819 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 820 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 821 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 822 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 823 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 824 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 825 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 826 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 827 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM
# 828 "data/maps/MauvilleCity/scripts.pory"
	applymovement 13, MauvilleCity_Movement_Biker1
# 829 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 830 "data/maps/MauvilleCity/scripts.pory"
	applymovement 14, MauvilleCity_Movement_Biker1
# 831 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 832 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 14
# 833 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 834 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 835 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police1
# 836 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 837 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 838 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_Police, MSGBOX_AUTOCLOSE
# 839 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 840 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police2
# 841 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 842 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 843 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 2
# 844 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_BIKERS
# 845 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE_110_BIKER_POLICEMAN
# 846 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ROUTE110_HIDE_CYCLIST
# 847 "data/maps/MauvilleCity/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 848 "data/maps/MauvilleCity/scripts.pory"
	fadedefaultbgm
# 849 "data/maps/MauvilleCity/scripts.pory"
	removeobject 13
# 850 "data/maps/MauvilleCity/scripts.pory"
	removeobject 14
# 851 "data/maps/MauvilleCity/scripts.pory"
	removeobject 15
# 852 "data/maps/MauvilleCity/scripts.pory"
	addobject 16
# 853 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_Trigger_Bikers4::
# 858 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 859 "data/maps/MauvilleCity/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 860 "data/maps/MauvilleCity/scripts.pory"
	addobject 13
# 861 "data/maps/MauvilleCity/scripts.pory"
	addobject 14
# 862 "data/maps/MauvilleCity/scripts.pory"
	addobject 15
# 863 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Trigger_Bikers1_Text_0, MSGBOX_AUTOCLOSE
# 864 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 865 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 866 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 867 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 868 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 869 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 870 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 871 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 872 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 873 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM
# 874 "data/maps/MauvilleCity/scripts.pory"
	applymovement 13, MauvilleCity_Movement_Biker1
# 875 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 876 "data/maps/MauvilleCity/scripts.pory"
	applymovement 14, MauvilleCity_Movement_Biker1
# 877 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 878 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 14
# 879 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 880 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 881 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police1
# 882 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 883 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 884 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_Police, MSGBOX_AUTOCLOSE
# 885 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 886 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police2
# 887 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 888 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 889 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 2
# 890 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_BIKERS
# 891 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE_110_BIKER_POLICEMAN
# 892 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ROUTE110_HIDE_CYCLIST
# 893 "data/maps/MauvilleCity/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 894 "data/maps/MauvilleCity/scripts.pory"
	fadedefaultbgm
# 895 "data/maps/MauvilleCity/scripts.pory"
	removeobject 13
# 896 "data/maps/MauvilleCity/scripts.pory"
	removeobject 14
# 897 "data/maps/MauvilleCity/scripts.pory"
	removeobject 15
# 898 "data/maps/MauvilleCity/scripts.pory"
	addobject 16
# 899 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


# 903 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerRunLeft:
# 904 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_left
# 904 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_left
	step_end

# 907 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerRunRight:
# 908 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
	step_end

# 912 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_Biker1:
# 913 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 913 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 913 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 913 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 913 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 913 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 913 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 913 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 913 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 913 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 914 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 914 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 914 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 914 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 914 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 914 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 914 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 914 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 914 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 914 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 914 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 914 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 914 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
	step_end

# 917 "data/maps/MauvilleCity/scripts.pory"
MauvileCity_Movement_Police1:
# 918 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 918 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 918 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 918 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 918 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 918 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
	step_end

# 921 "data/maps/MauvilleCity/scripts.pory"
MauvileCity_Movement_Police2:
# 922 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 922 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 922 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 922 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 923 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 923 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 923 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 923 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 923 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 923 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 923 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 923 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 923 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 923 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 923 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
	step_end

MauvilleCity_EventScript_Bikers_WomanWarn::
# 932 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 933 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 934 "data/maps/MauvilleCity/scripts.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 935 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 16
# 936 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 937 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 938 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 939 "data/maps/MauvilleCity/scripts.pory"
	applymovement 16, Common_Movement_FacePlayer
# 940 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 16
# 941 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WomanBikersRoute110, MSGBOX_AUTOCLOSE
# 942 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 943 "data/maps/MauvilleCity/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceDown
# 944 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 16
# 945 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 946 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 947 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 3
# 948 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_BIKERS_ROUTE_110
# 949 "data/maps/MauvilleCity/scripts.pory"
	playbgm MUS_RG_SILPH, TRUE
# 950 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 951 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_EventScript_Bikers_WomanWarnText::
# 962 "data/maps/MauvilleCity/scripts.pory"
	lock
# 963 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_Bikers_WomanWarnText_Text_0, MSGBOX_AUTOCLOSE
# 964 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 965 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvileCity_EventScript_SeeWhatsGoingOn::
# 970 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 971 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvileCity_EventScript_SeeWhatsGoingOn_Text_0, MSGBOX_AUTOCLOSE
# 973 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 974 "data/maps/MauvilleCity/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_0
# 975 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_TEMP_0, DIR_WEST
	goto_if_eq MauvileCity_EventScript_SeeWhatsGoingOn_2
# 980 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvileCity_Movement_WalkDown
# 981 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
MauvileCity_EventScript_SeeWhatsGoingOn_1:
# 983 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end

MauvileCity_EventScript_SeeWhatsGoingOn_2:
# 976 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 977 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	goto MauvileCity_EventScript_SeeWhatsGoingOn_1


MauvileCity_EventScript_ICantLeaveLikeThis::
# 988 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 989 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvileCity_EventScript_ICantLeaveLikeThis_Text_0, MSGBOX_AUTOCLOSE
# 990 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 991 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvileCity_Movement_WalkDown
# 992 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 993 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvileCity_EventScript_ICantLeaveLikeThisEast::
# 998 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 999 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvileCity_EventScript_ICantLeaveLikeThis_Text_0, MSGBOX_AUTOCLOSE
# 1000 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1001 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 1002 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1003 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


# 1007 "data/maps/MauvilleCity/scripts.pory"
MauvileCity_Movement_WalkDown:
# 1008 "data/maps/MauvilleCity/scripts.pory"
	walk_down
	step_end

MauvilleCity_EventScript_SaveBikerMusic::
# 1012 "data/maps/MauvilleCity/scripts.pory"
	savebgm MUS_RG_SILPH
# 1013 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
	return


MauvilleCity_EventScript_PolicemanGivesUturn::
# 1019 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 1020 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_PolicemanGivesUturn_Text_0, MSGBOX_AUTOCLOSE
# 1021 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1022 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_POLICEMAN_ROUTE_110
# 1023 "data/maps/MauvilleCity/scripts.pory"
	addobject 17
# 1024 "data/maps/MauvilleCity/scripts.pory"
	applymovement 17, MauvilleCity_Movement_PolicemanApproachesPlayer
# 1025 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 17
# 1026 "data/maps/MauvilleCity/scripts.pory"
	msgbox Route110_Text_PolicemanThankYou, MSGBOX_DEFAULT
# 1027 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1028 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_U_TURN
# 1029 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1030 "data/maps/MauvilleCity/scripts.pory"
	msgbox Route110_Text_PolicemanThankYou2, MSGBOX_AUTOCLOSE
# 1031 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1032 "data/maps/MauvilleCity/scripts.pory"
	applymovement 17, MauvilleCity_Movement_PolicemanLeaves
# 1033 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 17
# 1034 "data/maps/MauvilleCity/scripts.pory"
	removeobject 17
# 1035 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_CYCLIST
# 1036 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_ROUTE_110
# 1037 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 8
# 1038 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


# 1042 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PolicemanApproachesPlayer:
# 1043 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 1043 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 1043 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 1044 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1044 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1044 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1044 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1044 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1044 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1045 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 1045 "data/maps/MauvilleCity/scripts.pory"
	walk_up
	step_end

# 1048 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PolicemanLeaves:
# 1049 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 1049 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 1050 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 1050 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 1050 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 1050 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 1050 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 1050 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 1051 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 1051 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 1051 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 1051 "data/maps/MauvilleCity/scripts.pory"
	walk_down
	step_end

MauvilleCity_EventScript_BikerLeave::
# 1055 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 1056 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 1057 "data/maps/MauvilleCity/scripts.pory"
	applymovement 48, Common_Movement_ExclamationMark
# 1058 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1059 "data/maps/MauvilleCity/scripts.pory"
	waitse
# 1060 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_BikerLeave_Text_0, MSGBOX_AUTOCLOSE
# 1062 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1063 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 1064 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1065 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_EventScript_BikerLeft::
# 1070 "data/maps/MauvilleCity/scripts.pory"
	lock
# 1071 "data/maps/MauvilleCity/scripts.pory"
	applymovement 48, Common_Movement_WalkInPlaceRight
# 1072 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 48
# 1073 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_BikerLeft_Text_0, MSGBOX_AUTOCLOSE
# 1075 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1076 "data/maps/MauvilleCity/scripts.pory"
	applymovement 49, Common_Movement_WalkInPlaceLeft
# 1077 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 49
# 1078 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_BikerLeft_Text_1, MSGBOX_AUTOCLOSE
# 1083 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1084 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 1085 "data/maps/MauvilleCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 1086 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1087 "data/maps/MauvilleCity/scripts.pory"
	waitse
# 1088 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 1089 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_BikerLeave_Text_0, MSGBOX_AUTOCLOSE
# 1091 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1092 "data/maps/MauvilleCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 1093 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1094 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_BikerRight::
# 1099 "data/maps/MauvilleCity/scripts.pory"
	lock
# 1100 "data/maps/MauvilleCity/scripts.pory"
	applymovement 48, Common_Movement_WalkInPlaceRight
# 1101 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 48
# 1102 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_BikerLeft_Text_0, MSGBOX_AUTOCLOSE
# 1104 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1105 "data/maps/MauvilleCity/scripts.pory"
	applymovement 49, Common_Movement_WalkInPlaceLeft
# 1106 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 49
# 1107 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_BikerLeft_Text_1, MSGBOX_AUTOCLOSE
# 1112 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1113 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 1114 "data/maps/MauvilleCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 1115 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1116 "data/maps/MauvilleCity/scripts.pory"
	waitse
# 1117 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 1118 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_BikerLeave_Text_0, MSGBOX_AUTOCLOSE
# 1120 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1121 "data/maps/MauvilleCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 1122 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1123 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_NewMauvilleStartTrigger::
# 1128 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 1129 "data/maps/MauvilleCity/scripts.pory"
	setobjectnewmovementtype LOCALID_DACA, MOVEMENT_TYPE_NONE
# 1130 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 1131 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_DACA, Common_Movement_ExclamationMark
# 1132 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1133 "data/maps/MauvilleCity/scripts.pory"
	waitse
# 1134 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_DACA, Common_Movement_WalkInPlaceFasterRight
# 1135 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1136 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_NewMauvilleStartTrigger_Text_0, MSGBOX_DEFAULT
# 1137 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1138 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 1139 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1140 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_NewMauvilleStartTrigger_Text_1, MSGBOX_AUTOCLOSE
# 1141 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1142 "data/maps/MauvilleCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 1143 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_TEMP_1
# 1144 "data/maps/MauvilleCity/scripts.pory"
	case 7, MauvilleCity_EventScript_NewMauvilleStartTrigger_3
# 1146 "data/maps/MauvilleCity/scripts.pory"
	case 8, MauvilleCity_EventScript_NewMauvilleStartTrigger_4
# 1148 "data/maps/MauvilleCity/scripts.pory"
	case 9, MauvilleCity_EventScript_NewMauvilleStartTrigger_5
# 1150 "data/maps/MauvilleCity/scripts.pory"
	case 10, MauvilleCity_EventScript_NewMauvilleStartTrigger_6
# 1152 "data/maps/MauvilleCity/scripts.pory"
	case 11, MauvilleCity_EventScript_NewMauvilleStartTrigger_7
# 1155 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
MauvilleCity_EventScript_NewMauvilleStartTrigger_1:
# 1157 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1158 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WattsonNewMauvilleTrigger
	end

MauvilleCity_EventScript_NewMauvilleStartTrigger_3:
# 1145 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerToDaca7
	goto MauvilleCity_EventScript_NewMauvilleStartTrigger_1

MauvilleCity_EventScript_NewMauvilleStartTrigger_4:
# 1147 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerToDaca8
	goto MauvilleCity_EventScript_NewMauvilleStartTrigger_1

MauvilleCity_EventScript_NewMauvilleStartTrigger_5:
# 1149 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft2
	goto MauvilleCity_EventScript_NewMauvilleStartTrigger_1

MauvilleCity_EventScript_NewMauvilleStartTrigger_6:
# 1151 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerToDaca10
	goto MauvilleCity_EventScript_NewMauvilleStartTrigger_1

MauvilleCity_EventScript_NewMauvilleStartTrigger_7:
# 1153 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerToDaca11
	goto MauvilleCity_EventScript_NewMauvilleStartTrigger_1


MauvilleCity_EventScript_WattsonNewMauvilleTrigger::
# 1163 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 1164 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1165 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 1166 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 1167 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 1168 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_CITY_STATE, 2
# 1169 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_AUTOCLOSE
# 1170 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1171 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_EventScript_TakeCareOfFavorToDaca::
# 1176 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 1177 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_TakeCareOfFavorToDaca_Text_0, MSGBOX_AUTOCLOSE
# 1179 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1180 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 1181 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1182 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_EventScript_DacaGoesBackToGym::
# 1187 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 1188 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 1189 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_DacaGoesBackToGym_3
# 1190 "data/maps/MauvilleCity/scripts.pory"
	case DIR_SOUTH, MauvilleCity_EventScript_DacaGoesBackToGym_3
# 1194 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_DacaGoesBackToGym_4
# 1198 "data/maps/MauvilleCity/scripts.pory"
	case DIR_WEST, MauvilleCity_EventScript_DacaGoesBackToGym_5
# 1201 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_DACA, MauvilleCity_Movement_DacaLeavesPlayerFaceNorthSouth
MauvilleCity_EventScript_DacaGoesBackToGym_1:
# 1203 "data/maps/MauvilleCity/scripts.pory"
	waitmovement LOCALID_DACA
# 1204 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_DACA
# 1205 "data/maps/MauvilleCity/scripts.pory"
	release
	end

MauvilleCity_EventScript_DacaGoesBackToGym_3:
# 1191 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_DACA, MauvilleCity_Movement_DacaLeavesPlayerFaceNorthSouth
# 1192 "data/maps/MauvilleCity/scripts.pory"
	delay 16
# 1193 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	goto MauvilleCity_EventScript_DacaGoesBackToGym_1

MauvilleCity_EventScript_DacaGoesBackToGym_4:
# 1195 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_DACA, MauvilleCity_Movement_DacaLeavesPlayerFaceEast
# 1196 "data/maps/MauvilleCity/scripts.pory"
	delay 24
# 1197 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	goto MauvilleCity_EventScript_DacaGoesBackToGym_1

MauvilleCity_EventScript_DacaGoesBackToGym_5:
# 1199 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_DACA, MauvilleCity_Movement_DacaLeavesPlayerFaceNorthSouth
	goto MauvilleCity_EventScript_DacaGoesBackToGym_1


# 1209 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerToDaca7:
# 1210 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1211 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 1211 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 1212 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 1215 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerToDaca8:
# 1216 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1216 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1217 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 1218 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_left
	step_end

# 1221 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerToDaca10:
# 1222 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1222 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1223 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 1224 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_left
	step_end

# 1227 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerToDaca11:
# 1228 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1229 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 1229 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 1230 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 1233 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_DacaLeavesPlayerFaceNorthSouth:
# 1234 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1234 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1234 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1234 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1234 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1234 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1234 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1234 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1234 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 1237 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_DacaLeavesPlayerFaceEast:
# 1238 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 1239 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1239 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1239 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1239 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1239 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1239 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1239 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1239 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1239 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1239 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

MauvilleCity_Trigger_Bikers1_Text_0:
# 721 "data/maps/MauvilleCity/scripts.pory"
	.string "LOOK OUT!$"

MauvilleCity_EventScript_Bikers_WomanWarnText_Text_0:
# 963 "data/maps/MauvilleCity/scripts.pory"
	.string "Oh no…$"

MauvileCity_EventScript_SeeWhatsGoingOn_Text_0:
# 971 "data/maps/MauvilleCity/scripts.pory"
	.string "I should see what's happening\n on ROUTE 110.$"

MauvileCity_EventScript_ICantLeaveLikeThis_Text_0:
# 989 "data/maps/MauvilleCity/scripts.pory"
	.string "I can't just abandon that policeman!$"

MauvilleCity_EventScript_PolicemanGivesUturn_Text_0:
# 1020 "data/maps/MauvilleCity/scripts.pory"
	.string "Wait!$"

MauvilleCity_EventScript_BikerLeave_Text_0:
# 1060 "data/maps/MauvilleCity/scripts.pory"
	.string "Hey, don't you see us talking?\n Get out of here!$"

MauvilleCity_EventScript_BikerLeft_Text_0:
# 1073 "data/maps/MauvilleCity/scripts.pory"
	.string "The boss is going to be here\n soon, right?$"

MauvilleCity_EventScript_BikerLeft_Text_1:
# 1078 "data/maps/MauvilleCity/scripts.pory"
	.string "Yeah…\p I think that pig's still\n on our trail.\p Hopefully we distracted him\n for long enough.$"

MauvilleCity_EventScript_NewMauvilleStartTrigger_Text_0:
# 1136 "data/maps/MauvilleCity/scripts.pory"
	.string "DACA: {PLAYER}!$"

MauvilleCity_EventScript_NewMauvilleStartTrigger_Text_1:
# 1140 "data/maps/MauvilleCity/scripts.pory"
	.string "Over here!$"

MauvilleCity_EventScript_TakeCareOfFavorToDaca_Text_0:
# 1177 "data/maps/MauvilleCity/scripts.pory"
	.string "I should take care of that\n favor for DACA first.$"

MauvilleCity_Text_DacaGone::
# 706 "data/maps/MauvilleCity/scripts.pory"
	.string "Like, what's up, dude?\n Here to challenge the GYM?\p Sorry, the LEADER went to \n RUSTURF TUNNEL.\p I don't know when she'll be back.\n Maybe you could go get her for me?$"

MauvilleCity_Text_Police::
# 926 "data/maps/MauvilleCity/scripts.pory"
	.string "Huff… Huff…\n Requesting back up on ROUTE 110!$"

MauvilleCity_Text_WomanBikersRoute110::
# 955 "data/maps/MauvilleCity/scripts.pory"
	.string "A BIKER gang took over the CYCLING\n ROAD!\p That poor policeman is outnumbered!$"
