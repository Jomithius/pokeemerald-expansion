# 1 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_WALLY, 6
# 2 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_WALLYS_UNCLE, 7
# 3 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_SCOTT, 11
# 4 "data/maps/MauvilleCity/scripts.pory"

# 5 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_MapScripts::
# 6 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_OnTransition
# 7 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MauvilleCity_OnFrame
# 8 "data/maps/MauvilleCity/scripts.pory"
	.byte 0
# 9 "data/maps/MauvilleCity/scripts.pory"

# 10 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnTransition:
# 11 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_SYS_DYNAMIC_LEVELS
# 12 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 13 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 14 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
# 15 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_TV_START
# 16 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 17 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 0
# 18 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_HIDE_DACA_RUSTURF_PEAK, MauvilleCity_EventScript_MoveWallyUpOneTile
# 19 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_MoveWattsonBackToGym
# 20 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_SYS_BIKERS_ROUTE_110, MauvilleCity_EventScript_SaveBikerMusic
# 21 "data/maps/MauvilleCity/scripts.pory"
	end
# 22 "data/maps/MauvilleCity/scripts.pory"

# 23 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnFrame:
# 24 "data/maps/MauvilleCity/scripts.pory"
	map_script_2 VAR_SPEEDWAGON_STATE, 6, MauvilleCity_EventScript_PolicemanGivesUturn
# 25 "data/maps/MauvilleCity/scripts.pory"
	.2byte 0
# 26 "data/maps/MauvilleCity/scripts.pory"

# 27 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWallyUpOneTile:
# 28 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_WALLY, 8, 6
# 29 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_WALLYS_UNCLE, 9, 6
# 30 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 12, 14
# 31 "data/maps/MauvilleCity/scripts.pory"
	return
# 32 "data/maps/MauvilleCity/scripts.pory"

# 33 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWattsonBackToGym::
# 34 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 35 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 36 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
# 37 "data/maps/MauvilleCity/scripts.pory"
	return
# 38 "data/maps/MauvilleCity/scripts.pory"

# 39 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Boy::
# 40 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
# 41 "data/maps/MauvilleCity/scripts.pory"
	end
# 42 "data/maps/MauvilleCity/scripts.pory"

# 43 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Maniac::
# 44 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
# 45 "data/maps/MauvilleCity/scripts.pory"
	end
# 46 "data/maps/MauvilleCity/scripts.pory"

# 47 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Woman::
# 48 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
# 49 "data/maps/MauvilleCity/scripts.pory"
	end
# 50 "data/maps/MauvilleCity/scripts.pory"

# 51 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RichBoy::
# 52 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
# 53 "data/maps/MauvilleCity/scripts.pory"
	end
# 54 "data/maps/MauvilleCity/scripts.pory"

# 55 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CitySign::
# 56 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
# 57 "data/maps/MauvilleCity/scripts.pory"
	end
# 58 "data/maps/MauvilleCity/scripts.pory"

# 59 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GymSign::
# 60 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
# 61 "data/maps/MauvilleCity/scripts.pory"
	end
# 62 "data/maps/MauvilleCity/scripts.pory"

# 63 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BikeShopSign::
# 64 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
# 65 "data/maps/MauvilleCity/scripts.pory"
	end
# 66 "data/maps/MauvilleCity/scripts.pory"

# 67 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GameCornerSign::
# 68 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
# 69 "data/maps/MauvilleCity/scripts.pory"
	end
# 70 "data/maps/MauvilleCity/scripts.pory"

# 71 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_SchoolKidM::
# 72 "data/maps/MauvilleCity/scripts.pory"
	lock
# 73 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 74 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
# 75 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
# 76 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TV_EXPLAINED
# 77 "data/maps/MauvilleCity/scripts.pory"
	release
# 78 "data/maps/MauvilleCity/scripts.pory"
	end
# 79 "data/maps/MauvilleCity/scripts.pory"

# 80 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_TVExplained::
# 81 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
# 82 "data/maps/MauvilleCity/scripts.pory"
	release
# 83 "data/maps/MauvilleCity/scripts.pory"
	end
# 84 "data/maps/MauvilleCity/scripts.pory"

# 85 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallysUncle::
# 86 "data/maps/MauvilleCity/scripts.pory"
	lock
# 87 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 88 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
# 89 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
# 90 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 91 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 92 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 93 "data/maps/MauvilleCity/scripts.pory"
	release
# 94 "data/maps/MauvilleCity/scripts.pory"
	end
# 95 "data/maps/MauvilleCity/scripts.pory"

# 96 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
# 97 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
# 98 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 99 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 100 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 101 "data/maps/MauvilleCity/scripts.pory"
	release
# 102 "data/maps/MauvilleCity/scripts.pory"
	end
# 103 "data/maps/MauvilleCity/scripts.pory"

# 104 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wally::
# 105 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 106 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallyRequestBattleAgain
# 107 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 108 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 109 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 110 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 111 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 112 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 113 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 114 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 115 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
# 116 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 117 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_Delay48
# 118 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 119 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 120 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 121 "data/maps/MauvilleCity/scripts.pory"
	end
# 122 "data/maps/MauvilleCity/scripts.pory"

# 123 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt::
# 124 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, MauvilleCity_EventScript_BattleWally
# 125 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_EventScript_DeclineWallyBattle
# 126 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 127 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 128 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_WallyAndUncleExitNorth
# 129 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_WallyAndUncleExitEast
# 130 "data/maps/MauvilleCity/scripts.pory"
	end
# 131 "data/maps/MauvilleCity/scripts.pory"

# 132 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitNorth::
# 133 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 134 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth1
# 135 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth1
# 136 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 137 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 138 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 139 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 140 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
# 141 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
# 142 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 143 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 144 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 145 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 146 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth2
# 147 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth2
# 148 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 149 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 150 "data/maps/MauvilleCity/scripts.pory"
	end
# 151 "data/maps/MauvilleCity/scripts.pory"

# 152 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitEast::
# 153 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 154 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast1
# 155 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast1
# 156 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 157 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 158 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 159 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 160 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerEast
# 161 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 162 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 163 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 164 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 165 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast2
# 166 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast2
# 167 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 168 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 169 "data/maps/MauvilleCity/scripts.pory"
	end
# 170 "data/maps/MauvilleCity/scripts.pory"

# 171 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally::
# 172 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLY
# 173 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLYS_UNCLE
# 174 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 175 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 176 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 177 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 178 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 179 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottApproachPlayerNorth
# 180 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottApproachPlayerEast
# 181 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 182 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 183 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 184 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 185 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 186 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottExitNorth
# 187 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottExitEast
# 188 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 189 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 190 "data/maps/MauvilleCity/scripts.pory"
	end
# 191 "data/maps/MauvilleCity/scripts.pory"

# 192 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerNorth::
# 193 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 194 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerNorth
# 195 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 196 "data/maps/MauvilleCity/scripts.pory"
	return
# 197 "data/maps/MauvilleCity/scripts.pory"

# 198 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerEast::
# 199 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 12, 13
# 200 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 201 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
# 202 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 203 "data/maps/MauvilleCity/scripts.pory"
	return
# 204 "data/maps/MauvilleCity/scripts.pory"

# 205 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitNorth::
# 206 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 207 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitNorth
# 208 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 209 "data/maps/MauvilleCity/scripts.pory"
	return
# 210 "data/maps/MauvilleCity/scripts.pory"

# 211 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitEast::
# 212 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 213 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitEast
# 214 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 215 "data/maps/MauvilleCity/scripts.pory"
	return
# 216 "data/maps/MauvilleCity/scripts.pory"

# 217 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWally::
# 218 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 219 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
# 220 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 221 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 222 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 223 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 224 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 225 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 226 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 227 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 228 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
# 229 "data/maps/MauvilleCity/scripts.pory"
	return
# 230 "data/maps/MauvilleCity/scripts.pory"

# 231 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DeclineWallyBattle::
# 232 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 233 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 234 "data/maps/MauvilleCity/scripts.pory"
	release
# 235 "data/maps/MauvilleCity/scripts.pory"
	end
# 236 "data/maps/MauvilleCity/scripts.pory"

# 237 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyRequestBattleAgain::
# 238 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 239 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 240 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 241 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 242 "data/maps/MauvilleCity/scripts.pory"
	end
# 243 "data/maps/MauvilleCity/scripts.pory"

# 244 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth1:
# 245 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 246 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 247 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 248 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 249 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 250 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 251 "data/maps/MauvilleCity/scripts.pory"

# 252 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast1:
# 253 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 254 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 255 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 256 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 257 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 258 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 259 "data/maps/MauvilleCity/scripts.pory"

# 260 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth2:
# 261 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 262 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 263 "data/maps/MauvilleCity/scripts.pory"
	walk_left
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
	delay_8
# 272 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 273 "data/maps/MauvilleCity/scripts.pory"

# 274 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast2:
# 275 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 276 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 277 "data/maps/MauvilleCity/scripts.pory"
	walk_left
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
	delay_8
# 286 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 287 "data/maps/MauvilleCity/scripts.pory"

# 288 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
# 289 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 290 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 291 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 292 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 293 "data/maps/MauvilleCity/scripts.pory"

# 294 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast2:
# 295 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 296 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 297 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 298 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 299 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 300 "data/maps/MauvilleCity/scripts.pory"

# 301 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitNorth:
# 302 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 303 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 304 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 305 "data/maps/MauvilleCity/scripts.pory"

# 306 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast:
# 307 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 308 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 309 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 310 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 311 "data/maps/MauvilleCity/scripts.pory"

# 312 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast1:
# 313 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 314 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 315 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 316 "data/maps/MauvilleCity/scripts.pory"

# 317 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
# 318 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 319 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 320 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 321 "data/maps/MauvilleCity/scripts.pory"

# 322 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth1:
# 323 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 324 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 325 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 326 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 327 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 328 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 329 "data/maps/MauvilleCity/scripts.pory"

# 330 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast1:
# 331 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 332 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 333 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 334 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 335 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 336 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 337 "data/maps/MauvilleCity/scripts.pory"

# 338 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleNorth:
# 339 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 340 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 341 "data/maps/MauvilleCity/scripts.pory"
	delay_4
# 342 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 343 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 344 "data/maps/MauvilleCity/scripts.pory"

# 345 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
# 346 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 347 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 348 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 349 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 350 "data/maps/MauvilleCity/scripts.pory"

# 351 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerEast:
# 352 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 353 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 354 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 355 "data/maps/MauvilleCity/scripts.pory"

# 356 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth2:
# 357 "data/maps/MauvilleCity/scripts.pory"
	walk_left
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
	step_end
# 366 "data/maps/MauvilleCity/scripts.pory"

# 367 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast2:
# 368 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 369 "data/maps/MauvilleCity/scripts.pory"
	walk_left
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
	step_end
# 378 "data/maps/MauvilleCity/scripts.pory"

# 379 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerNorth:
# 380 "data/maps/MauvilleCity/scripts.pory"
	walk_up
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
	walk_left
# 387 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 388 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 389 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 390 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 391 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 392 "data/maps/MauvilleCity/scripts.pory"

# 393 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast:
# 394 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 395 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 396 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 397 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 398 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 399 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 400 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 401 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 402 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 403 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 404 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 405 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 406 "data/maps/MauvilleCity/scripts.pory"

# 407 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth:
# 408 "data/maps/MauvilleCity/scripts.pory"
	walk_left
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
	step_end
# 418 "data/maps/MauvilleCity/scripts.pory"

# 419 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitEast:
# 420 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 421 "data/maps/MauvilleCity/scripts.pory"
	walk_left
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
	step_end
# 431 "data/maps/MauvilleCity/scripts.pory"

# 432 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson::
# 433 "data/maps/MauvilleCity/scripts.pory"
	lock
# 434 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 435 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_ReceivedThunderbolt
# 436 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
# 437 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
# 438 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 439 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 440 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 441 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 442 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 443 "data/maps/MauvilleCity/scripts.pory"
	release
# 444 "data/maps/MauvilleCity/scripts.pory"
	end
# 445 "data/maps/MauvilleCity/scripts.pory"

# 446 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BegunNewMauville::
# 447 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 448 "data/maps/MauvilleCity/scripts.pory"
	release
# 449 "data/maps/MauvilleCity/scripts.pory"
	end
# 450 "data/maps/MauvilleCity/scripts.pory"

# 451 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CompletedNewMauville::
# 452 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 453 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 454 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 455 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
# 456 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 457 "data/maps/MauvilleCity/scripts.pory"
	release
# 458 "data/maps/MauvilleCity/scripts.pory"
	end
# 459 "data/maps/MauvilleCity/scripts.pory"

# 460 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ReceivedThunderbolt::
# 461 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 462 "data/maps/MauvilleCity/scripts.pory"
	release
# 463 "data/maps/MauvilleCity/scripts.pory"
	end
# 464 "data/maps/MauvilleCity/scripts.pory"

# 465 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RegisterWallyCall::
# 466 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 467 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 468 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 469 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 470 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 471 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 472 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 473 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 474 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 475 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 476 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 477 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 478 "data/maps/MauvilleCity/scripts.pory"
	end
# 479 "data/maps/MauvilleCity/scripts.pory"

# 480 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleHesTooPeppy:
# 481 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: It's because of POKéMON that\n"
# 482 "data/maps/MauvilleCity/scripts.pory"
	.string "this boy's got more pep, I suppose…\l"
# 483 "data/maps/MauvilleCity/scripts.pory"
	.string "But he's become a bit too peppy…$"
# 484 "data/maps/MauvilleCity/scripts.pory"

# 485 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWantToChallengeGym:
# 486 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Aww, UNCLE, please?\p"
# 487 "data/maps/MauvilleCity/scripts.pory"
	.string "I want to challenge this GYM and see\n"
# 488 "data/maps/MauvilleCity/scripts.pory"
	.string "how much better I've become.\p"
# 489 "data/maps/MauvilleCity/scripts.pory"
	.string "Please? May I, please?$"
# 490 "data/maps/MauvilleCity/scripts.pory"

# 491 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleYourePushingIt:
# 492 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: Now hold on, WALLY.\p"
# 493 "data/maps/MauvilleCity/scripts.pory"
	.string "Since you started living with POKéMON,\n"
# 494 "data/maps/MauvilleCity/scripts.pory"
	.string "you have grown quite a lot stronger.\p"
# 495 "data/maps/MauvilleCity/scripts.pory"
	.string "But don't you think you're pushing it\n"
# 496 "data/maps/MauvilleCity/scripts.pory"
	.string "to suddenly challenge a GYM?$"
# 497 "data/maps/MauvilleCity/scripts.pory"

# 498 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWeCanBeatAnyone:
# 499 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: I'm not pushing it.\p"
# 500 "data/maps/MauvilleCity/scripts.pory"
	.string "If I combine forces with KIRLIA,\n"
# 501 "data/maps/MauvilleCity/scripts.pory"
	.string "we can beat anyone!$"
# 502 "data/maps/MauvilleCity/scripts.pory"

# 503 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWillYouBattleMe:
# 504 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh! Hi, {PLAYER}!\p"
# 505 "data/maps/MauvilleCity/scripts.pory"
	.string "I've gotten a lot stronger since\n"
# 506 "data/maps/MauvilleCity/scripts.pory"
	.string "we met.\p"
# 507 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, I want you and my UNCLE to\n"
# 508 "data/maps/MauvilleCity/scripts.pory"
	.string "understand that.\p"
# 509 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, please, will you have\n"
# 510 "data/maps/MauvilleCity/scripts.pory"
	.string "a battle with me?$"
# 511 "data/maps/MauvilleCity/scripts.pory"

# 512 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyMyUncleWontKnowImStrong:
# 513 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh… If you won't battle me,\n"
# 514 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, my UNCLE won't know that I've\l"
# 515 "data/maps/MauvilleCity/scripts.pory"
	.string "become really strong.$"
# 516 "data/maps/MauvilleCity/scripts.pory"

# 517 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleCanYouBattleWally:
# 518 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, was it?\n"
# 519 "data/maps/MauvilleCity/scripts.pory"
	.string "On WALLY's behalf, can I ask you to\l"
# 520 "data/maps/MauvilleCity/scripts.pory"
	.string "battle with him just this once?\p"
# 521 "data/maps/MauvilleCity/scripts.pory"
	.string "I don't think he's going to listen to\n"
# 522 "data/maps/MauvilleCity/scripts.pory"
	.string "any reason the way he is now.$"
# 523 "data/maps/MauvilleCity/scripts.pory"

# 524 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPleaseBattleMe:
# 525 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, please!\n"
# 526 "data/maps/MauvilleCity/scripts.pory"
	.string "Battle with me, please.$"
# 527 "data/maps/MauvilleCity/scripts.pory"

# 528 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyHereICome:
# 529 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, thank you.\p"
# 530 "data/maps/MauvilleCity/scripts.pory"
	.string "Okay… Here I come!$"
# 531 "data/maps/MauvilleCity/scripts.pory"

# 532 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyDefeat:
# 533 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: … … … … … … …\p"
# 534 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … … … …\p"
# 535 "data/maps/MauvilleCity/scripts.pory"
	.string "I lost…$"
# 536 "data/maps/MauvilleCity/scripts.pory"

# 537 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyIllGoBackToVerdanturf:
# 538 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: UNCLE…\n"
# 539 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll go back to VERDANTURF…$"
# 540 "data/maps/MauvilleCity/scripts.pory"

# 541 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ThankYouNotEnoughToBattle:
# 542 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, thank you.\n"
# 543 "data/maps/MauvilleCity/scripts.pory"
	.string "Being a TRAINER is tough, isn't it?\p"
# 544 "data/maps/MauvilleCity/scripts.pory"
	.string "It's not enough just to have POKéMON\n"
# 545 "data/maps/MauvilleCity/scripts.pory"
	.string "and make them battle. That isn't what\l"
# 546 "data/maps/MauvilleCity/scripts.pory"
	.string "being a real TRAINER is about.$"
# 547 "data/maps/MauvilleCity/scripts.pory"

# 548 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleNoNeedToBeDown:
# 549 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: WALLY, there's no need to be so\n"
# 550 "data/maps/MauvilleCity/scripts.pory"
	.string "down on yourself.\p"
# 551 "data/maps/MauvilleCity/scripts.pory"
	.string "Why, what's keeping you from becoming\n"
# 552 "data/maps/MauvilleCity/scripts.pory"
	.string "stronger and stronger?\p"
# 553 "data/maps/MauvilleCity/scripts.pory"
	.string "Come on, let's go home.\n"
# 554 "data/maps/MauvilleCity/scripts.pory"
	.string "Everyone's waiting for you.$"
# 555 "data/maps/MauvilleCity/scripts.pory"

# 556 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleVisitUsSometime:
# 557 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, it just dawned on me\n"
# 558 "data/maps/MauvilleCity/scripts.pory"
	.string "that you must be the TRAINER who kept\l"
# 559 "data/maps/MauvilleCity/scripts.pory"
	.string "an eye out for WALLY when he caught\l"
# 560 "data/maps/MauvilleCity/scripts.pory"
	.string "his POKéMON.\p"
# 561 "data/maps/MauvilleCity/scripts.pory"
	.string "Why don't you visit us in VERDANTURF\n"
# 562 "data/maps/MauvilleCity/scripts.pory"
	.string "sometime?\l"
# 563 "data/maps/MauvilleCity/scripts.pory"
	.string "I'm sure WALLY would enjoy it.$"
# 564 "data/maps/MauvilleCity/scripts.pory"

# 565 "data/maps/MauvilleCity/scripts.pory"

# 566 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPokenavCall:
# 567 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 568 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Beep!\p"
# 569 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh, hello, {PLAYER}!\p"
# 570 "data/maps/MauvilleCity/scripts.pory"
	.string "I just wanted to tell you that\n"
# 571 "data/maps/MauvilleCity/scripts.pory"
	.string "my uncle bought me a POKéNAV!\p"
# 572 "data/maps/MauvilleCity/scripts.pory"
	.string "Now I can get in touch with you\n"
# 573 "data/maps/MauvilleCity/scripts.pory"
	.string "anytime, {PLAYER}!\p"
# 574 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 575 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Click!$"
# 576 "data/maps/MauvilleCity/scripts.pory"

# 577 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RegisteredWally:
# 578 "data/maps/MauvilleCity/scripts.pory"
	.string "Registered WALLY\n"
# 579 "data/maps/MauvilleCity/scripts.pory"
	.string "in the POKéNAV.$"
# 580 "data/maps/MauvilleCity/scripts.pory"

# 581 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ScottYouDidntHoldBack:
# 582 "data/maps/MauvilleCity/scripts.pory"
	.string "SCOTT: Hehe…\n"
# 583 "data/maps/MauvilleCity/scripts.pory"
	.string "I was watching that match!\p"
# 584 "data/maps/MauvilleCity/scripts.pory"
	.string "You're friends with that boy WALLY,\n"
# 585 "data/maps/MauvilleCity/scripts.pory"
	.string "aren't you?\p"
# 586 "data/maps/MauvilleCity/scripts.pory"
	.string "But you didn't hold anything back\n"
# 587 "data/maps/MauvilleCity/scripts.pory"
	.string "and beat him impressively.\p"
# 588 "data/maps/MauvilleCity/scripts.pory"
	.string "Yeah! That's what a real POKéMON\n"
# 589 "data/maps/MauvilleCity/scripts.pory"
	.string "battle is all about!\p"
# 590 "data/maps/MauvilleCity/scripts.pory"
	.string "I idolize TRAINERS like that!\p"
# 591 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 592 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll be cheering for you!$"
# 593 "data/maps/MauvilleCity/scripts.pory"

# 594 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonNeedFavorTakeKey:
# 595 "data/maps/MauvilleCity/scripts.pory"
	.string "DACA: Oh, {PLAYER}{KUN}!\n"
# 596 "data/maps/MauvilleCity/scripts.pory"
	.string "You look ready to party!\l"
# 597 "data/maps/MauvilleCity/scripts.pory"
	.string "That's a good thing, hahaha!\p"
# 598 "data/maps/MauvilleCity/scripts.pory"
	.string "Fine! I've decided!\n"
# 599 "data/maps/MauvilleCity/scripts.pory"
	.string "I need a favor, {PLAYER}{KUN}!\p"
# 600 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY has an underground\n"
# 601 "data/maps/MauvilleCity/scripts.pory"
	.string "sector called NEW MAUVILLE.\p"
# 602 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'd like you to go there and\n"
# 603 "data/maps/MauvilleCity/scripts.pory"
	.string "switch off the GENERATOR.\p"
# 604 "data/maps/MauvilleCity/scripts.pory"
	.string "The GENERATOR has been running a bit\n"
# 605 "data/maps/MauvilleCity/scripts.pory"
	.string "haywire. It's getting unsafe.\p"
# 606 "data/maps/MauvilleCity/scripts.pory"
	.string "Here, this is the KEY to get into\n"
# 607 "data/maps/MauvilleCity/scripts.pory"
	.string "NEW MAUVILLE.$"
# 608 "data/maps/MauvilleCity/scripts.pory"

# 609 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonWontBeChallenge:
# 610 "data/maps/MauvilleCity/scripts.pory"
	.string "DACA: Don't worry about it.\n"
# 611 "data/maps/MauvilleCity/scripts.pory"
	.string "It won't be a challenge to you.\p"
# 612 "data/maps/MauvilleCity/scripts.pory"
	.string "The entrance to NEW MAUVILLE is just\n"
# 613 "data/maps/MauvilleCity/scripts.pory"
	.string "a short SURF away from ROUTE 110.\p"
# 614 "data/maps/MauvilleCity/scripts.pory"
	.string "That's it, then, go party!\n"
# 615 "data/maps/MauvilleCity/scripts.pory"
	.string "Hahaha!$"
# 616 "data/maps/MauvilleCity/scripts.pory"

# 617 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonThanksTakeTM:
# 618 "data/maps/MauvilleCity/scripts.pory"
	.string "DACA: Hahaha!\p"
# 619 "data/maps/MauvilleCity/scripts.pory"
	.string "I knew it, {PLAYER}{KUN}! I knew I'd made\n"
# 620 "data/maps/MauvilleCity/scripts.pory"
	.string "the right choice asking you!\p"
# 621 "data/maps/MauvilleCity/scripts.pory"
	.string "This is my thanks--a TM containing\n"
# 622 "data/maps/MauvilleCity/scripts.pory"
	.string "THUNDERBOLT!\p"
# 623 "data/maps/MauvilleCity/scripts.pory"
	.string "Go on, you've earned it!$"
# 624 "data/maps/MauvilleCity/scripts.pory"

# 625 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonYoungTakeCharge:
# 626 "data/maps/MauvilleCity/scripts.pory"
	.string "DACA: Hahaha!\p"
# 627 "data/maps/MauvilleCity/scripts.pory"
	.string "It pleases me to no end to see\n"
# 628 "data/maps/MauvilleCity/scripts.pory"
	.string "people party!$"
# 629 "data/maps/MauvilleCity/scripts.pory"

# 630 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_NurseHurtMonBackToHealth:
# 631 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have POKéMON\n"
# 632 "data/maps/MauvilleCity/scripts.pory"
	.string "battles and stuff…\p"
# 633 "data/maps/MauvilleCity/scripts.pory"
	.string "But if your POKéMON gets hurt,\n"
# 634 "data/maps/MauvilleCity/scripts.pory"
	.string "you have to nurse it back to health.$"
# 635 "data/maps/MauvilleCity/scripts.pory"

# 636 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_AllSortsOfPeopleComeThrough:
# 637 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
# 638 "data/maps/MauvilleCity/scripts.pory"
	.string "and south, and east and west.\p"
# 639 "data/maps/MauvilleCity/scripts.pory"
	.string "Because of that, we get all sorts of\n"
# 640 "data/maps/MauvilleCity/scripts.pory"
	.string "people coming through.$"
# 641 "data/maps/MauvilleCity/scripts.pory"

# 642 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RydelVeryGenerous:
# 643 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to RYDEL'S CYCLES yet?\p"
# 644 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL, the owner, is a very generous\n"
# 645 "data/maps/MauvilleCity/scripts.pory"
	.string "man.$"
# 646 "data/maps/MauvilleCity/scripts.pory"

# 647 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_PokemonCanJumpYouOnBike:
# 648 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a BIKE,\n"
# 649 "data/maps/MauvilleCity/scripts.pory"
	.string "wild POKéMON could jump you.$"
# 650 "data/maps/MauvilleCity/scripts.pory"

# 651 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_CitySign:
# 652 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY\n"
# 653 "data/maps/MauvilleCity/scripts.pory"
	.string "“The bright and shiny city of fun!”$"
# 654 "data/maps/MauvilleCity/scripts.pory"

# 655 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GymSign:
# 656 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\n"
# 657 "data/maps/MauvilleCity/scripts.pory"
	.string "LEADER: DACA\l"
# 658 "data/maps/MauvilleCity/scripts.pory"
	.string "“Get ready for a party!”$"
# 659 "data/maps/MauvilleCity/scripts.pory"

# 660 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BikeShopSign:
# 661 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
# 662 "data/maps/MauvilleCity/scripts.pory"
	.string "soul!”\l"
# 663 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL'S CYCLES$"
# 664 "data/maps/MauvilleCity/scripts.pory"

# 665 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GameCornerSign:
# 666 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
# 667 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE GAME CORNER$"
# 668 "data/maps/MauvilleCity/scripts.pory"

# 669 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ExplainTV:
# 670 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, do you check out TV at all?\p"
# 671 "data/maps/MauvilleCity/scripts.pory"
	.string "They've added a bunch of cool new\n"
# 672 "data/maps/MauvilleCity/scripts.pory"
	.string "shows recently.\p"
# 673 "data/maps/MauvilleCity/scripts.pory"
	.string "TV is so cool. I've seen my friends on\n"
# 674 "data/maps/MauvilleCity/scripts.pory"
	.string "TV just out of the blue.\p"
# 675 "data/maps/MauvilleCity/scripts.pory"
	.string "And, sometimes, they even put you on TV\n"
# 676 "data/maps/MauvilleCity/scripts.pory"
	.string "without telling you.\p"
# 677 "data/maps/MauvilleCity/scripts.pory"
	.string "I wish I would be on TV sometime.\p"
# 678 "data/maps/MauvilleCity/scripts.pory"
	.string "That's why I think you should check\n"
# 679 "data/maps/MauvilleCity/scripts.pory"
	.string "out TVs whenever you can.$"
# 680 "data/maps/MauvilleCity/scripts.pory"

# 681 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BeenCheckingOutTV:
# 682 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"

MauvilleCity_EventScript_GymNPC::
# 686 "data/maps/MauvilleCity/scripts.pory"
	lock
# 687 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, Common_Movement_FacePlayer
# 688 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 12
# 689 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_DacaGone, MSGBOX_NPC
# 690 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 691 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_Trigger_Bikers1::
# 705 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 706 "data/maps/MauvilleCity/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 707 "data/maps/MauvilleCity/scripts.pory"
	addobject 13
# 708 "data/maps/MauvilleCity/scripts.pory"
	addobject 14
# 709 "data/maps/MauvilleCity/scripts.pory"
	addobject 15
# 710 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Trigger_Bikers1_Text_0, MSGBOX_AUTOCLOSE
# 711 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 712 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 713 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 714 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 715 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerRunLeft
# 716 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 717 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 718 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 719 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 720 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM
# 721 "data/maps/MauvilleCity/scripts.pory"
	applymovement 13, MauvilleCity_Movement_Biker1
# 722 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 723 "data/maps/MauvilleCity/scripts.pory"
	applymovement 14, MauvilleCity_Movement_Biker1
# 724 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 725 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 14
# 726 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 727 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 728 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police1
# 729 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 730 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 731 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_Police, MSGBOX_AUTOCLOSE
# 732 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 733 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police2
# 734 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 735 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 736 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 2
# 737 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_BIKERS
# 738 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE_110_BIKER_POLICEMAN
# 739 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ROUTE110_HIDE_CYCLIST
# 740 "data/maps/MauvilleCity/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 741 "data/maps/MauvilleCity/scripts.pory"
	fadedefaultbgm
# 742 "data/maps/MauvilleCity/scripts.pory"
	removeobject 13
# 743 "data/maps/MauvilleCity/scripts.pory"
	removeobject 14
# 744 "data/maps/MauvilleCity/scripts.pory"
	removeobject 15
# 745 "data/maps/MauvilleCity/scripts.pory"
	addobject 16
# 746 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_Trigger_Bikers2::
# 751 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 752 "data/maps/MauvilleCity/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 753 "data/maps/MauvilleCity/scripts.pory"
	addobject 13
# 754 "data/maps/MauvilleCity/scripts.pory"
	addobject 14
# 755 "data/maps/MauvilleCity/scripts.pory"
	addobject 15
# 756 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Trigger_Bikers1_Text_0, MSGBOX_AUTOCLOSE
# 757 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 758 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 759 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 760 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 761 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerRunRight
# 762 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 763 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 764 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 765 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 766 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM
# 767 "data/maps/MauvilleCity/scripts.pory"
	applymovement 13, MauvilleCity_Movement_Biker1
# 768 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 769 "data/maps/MauvilleCity/scripts.pory"
	applymovement 14, MauvilleCity_Movement_Biker1
# 770 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 771 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 14
# 772 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 773 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 774 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police1
# 775 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 776 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 777 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_Police, MSGBOX_AUTOCLOSE
# 778 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 779 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police2
# 780 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 781 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 782 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 2
# 783 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_BIKERS
# 784 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE_110_BIKER_POLICEMAN
# 785 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ROUTE110_HIDE_CYCLIST
# 786 "data/maps/MauvilleCity/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 787 "data/maps/MauvilleCity/scripts.pory"
	fadedefaultbgm
# 788 "data/maps/MauvilleCity/scripts.pory"
	removeobject 13
# 789 "data/maps/MauvilleCity/scripts.pory"
	removeobject 14
# 790 "data/maps/MauvilleCity/scripts.pory"
	removeobject 15
# 791 "data/maps/MauvilleCity/scripts.pory"
	addobject 16
# 792 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_Trigger_Bikers3::
# 797 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 798 "data/maps/MauvilleCity/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 799 "data/maps/MauvilleCity/scripts.pory"
	addobject 13
# 800 "data/maps/MauvilleCity/scripts.pory"
	addobject 14
# 801 "data/maps/MauvilleCity/scripts.pory"
	addobject 15
# 802 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Trigger_Bikers1_Text_0, MSGBOX_AUTOCLOSE
# 803 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 804 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 805 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 806 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 807 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 808 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 809 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 810 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM
# 811 "data/maps/MauvilleCity/scripts.pory"
	applymovement 13, MauvilleCity_Movement_Biker1
# 812 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 813 "data/maps/MauvilleCity/scripts.pory"
	applymovement 14, MauvilleCity_Movement_Biker1
# 814 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 815 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 14
# 816 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 817 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 818 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police1
# 819 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 820 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 821 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_Police, MSGBOX_AUTOCLOSE
# 822 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 823 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police2
# 824 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 825 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 826 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 2
# 827 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_BIKERS
# 828 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE_110_BIKER_POLICEMAN
# 829 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ROUTE110_HIDE_CYCLIST
# 830 "data/maps/MauvilleCity/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 831 "data/maps/MauvilleCity/scripts.pory"
	fadedefaultbgm
# 832 "data/maps/MauvilleCity/scripts.pory"
	removeobject 13
# 833 "data/maps/MauvilleCity/scripts.pory"
	removeobject 14
# 834 "data/maps/MauvilleCity/scripts.pory"
	removeobject 15
# 835 "data/maps/MauvilleCity/scripts.pory"
	addobject 16
# 836 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_Trigger_Bikers4::
# 841 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 842 "data/maps/MauvilleCity/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 843 "data/maps/MauvilleCity/scripts.pory"
	addobject 13
# 844 "data/maps/MauvilleCity/scripts.pory"
	addobject 14
# 845 "data/maps/MauvilleCity/scripts.pory"
	addobject 15
# 846 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Trigger_Bikers1_Text_0, MSGBOX_AUTOCLOSE
# 847 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 848 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 849 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 850 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 851 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 852 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 853 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 854 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM
# 855 "data/maps/MauvilleCity/scripts.pory"
	applymovement 13, MauvilleCity_Movement_Biker1
# 856 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 857 "data/maps/MauvilleCity/scripts.pory"
	applymovement 14, MauvilleCity_Movement_Biker1
# 858 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 859 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 14
# 860 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 861 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 862 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police1
# 863 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 864 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 865 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_Police, MSGBOX_AUTOCLOSE
# 866 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 867 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police2
# 868 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 869 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 870 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 2
# 871 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_BIKERS
# 872 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE_110_BIKER_POLICEMAN
# 873 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ROUTE110_HIDE_CYCLIST
# 874 "data/maps/MauvilleCity/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 875 "data/maps/MauvilleCity/scripts.pory"
	fadedefaultbgm
# 876 "data/maps/MauvilleCity/scripts.pory"
	removeobject 13
# 877 "data/maps/MauvilleCity/scripts.pory"
	removeobject 14
# 878 "data/maps/MauvilleCity/scripts.pory"
	removeobject 15
# 879 "data/maps/MauvilleCity/scripts.pory"
	addobject 16
# 880 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


# 884 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerRunLeft:
# 885 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_left
# 885 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_left
	step_end

# 888 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerRunRight:
# 889 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
	step_end

# 893 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_Biker1:
# 894 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 894 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 894 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 894 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 894 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 894 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 894 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 894 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 894 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 894 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 895 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 895 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 895 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 895 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 895 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 895 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 895 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 895 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 895 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 895 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 895 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 895 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 895 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
	step_end

# 898 "data/maps/MauvilleCity/scripts.pory"
MauvileCity_Movement_Police1:
# 899 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 899 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 899 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 899 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 899 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 899 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
	step_end

# 902 "data/maps/MauvilleCity/scripts.pory"
MauvileCity_Movement_Police2:
# 903 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 903 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 903 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 903 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 904 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 904 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 904 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 904 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 904 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 904 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 904 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 904 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 904 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 904 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 904 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
	step_end

MauvilleCity_EventScript_Bikers_WomanWarn::
# 913 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 914 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 915 "data/maps/MauvilleCity/scripts.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 916 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 16
# 917 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 918 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 919 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 920 "data/maps/MauvilleCity/scripts.pory"
	applymovement 16, Common_Movement_FacePlayer
# 921 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 16
# 922 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WomanBikersRoute110, MSGBOX_AUTOCLOSE
# 923 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 924 "data/maps/MauvilleCity/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceDown
# 925 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 16
# 926 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 927 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 928 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 3
# 929 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_BIKERS_ROUTE_110
# 930 "data/maps/MauvilleCity/scripts.pory"
	playbgm MUS_RG_SILPH, TRUE
# 931 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 932 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_EventScript_Bikers_WomanWarnText::
# 943 "data/maps/MauvilleCity/scripts.pory"
	lock
# 944 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_Bikers_WomanWarnText_Text_0, MSGBOX_AUTOCLOSE
# 945 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 946 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvileCity_EventScript_SeeWhatsGoingOn::
# 951 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 952 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvileCity_EventScript_SeeWhatsGoingOn_Text_0, MSGBOX_AUTOCLOSE
# 954 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 955 "data/maps/MauvilleCity/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_0
# 956 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_TEMP_0, DIR_WEST
	goto_if_eq MauvileCity_EventScript_SeeWhatsGoingOn_2
# 961 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvileCity_Movement_WalkDown
# 962 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
MauvileCity_EventScript_SeeWhatsGoingOn_1:
# 964 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end

MauvileCity_EventScript_SeeWhatsGoingOn_2:
# 957 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 958 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	goto MauvileCity_EventScript_SeeWhatsGoingOn_1


MauvileCity_EventScript_ICantLeaveLikeThis::
# 969 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 970 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvileCity_EventScript_ICantLeaveLikeThis_Text_0, MSGBOX_AUTOCLOSE
# 971 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 972 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvileCity_Movement_WalkDown
# 973 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 974 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvileCity_EventScript_ICantLeaveLikeThisEast::
# 979 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 980 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvileCity_EventScript_ICantLeaveLikeThis_Text_0, MSGBOX_AUTOCLOSE
# 981 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 982 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 983 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 984 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


# 988 "data/maps/MauvilleCity/scripts.pory"
MauvileCity_Movement_WalkDown:
# 989 "data/maps/MauvilleCity/scripts.pory"
	walk_down
	step_end

MauvilleCity_EventScript_SaveBikerMusic::
# 993 "data/maps/MauvilleCity/scripts.pory"
	savebgm MUS_RG_SILPH
# 994 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
	return


MauvilleCity_EventScript_PolicemanGivesUturn::
# 1000 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 1001 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_PolicemanGivesUturn_Text_0, MSGBOX_AUTOCLOSE
# 1002 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1003 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_POLICEMAN_ROUTE_110
# 1004 "data/maps/MauvilleCity/scripts.pory"
	addobject 17
# 1005 "data/maps/MauvilleCity/scripts.pory"
	applymovement 17, MauvilleCity_Movement_PolicemanApproachesPlayer
# 1006 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 17
# 1007 "data/maps/MauvilleCity/scripts.pory"
	msgbox Route110_Text_PolicemanThankYou, MSGBOX_DEFAULT
# 1008 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1009 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_U_TURN
# 1010 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1011 "data/maps/MauvilleCity/scripts.pory"
	msgbox Route110_Text_PolicemanThankYou2, MSGBOX_AUTOCLOSE
# 1012 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1013 "data/maps/MauvilleCity/scripts.pory"
	applymovement 17, MauvilleCity_Movement_PolicemanLeaves
# 1014 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 17
# 1015 "data/maps/MauvilleCity/scripts.pory"
	removeobject 17
# 1016 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_CYCLIST
# 1017 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_ROUTE_110
# 1018 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 8
# 1019 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


# 1023 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PolicemanApproachesPlayer:
# 1024 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 1024 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 1024 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 1025 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1025 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1025 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1025 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1025 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1025 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1026 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 1026 "data/maps/MauvilleCity/scripts.pory"
	walk_up
	step_end

# 1029 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PolicemanLeaves:
# 1030 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 1030 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 1031 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 1031 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 1031 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 1031 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 1031 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 1031 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 1032 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 1032 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 1032 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 1032 "data/maps/MauvilleCity/scripts.pory"
	walk_down
	step_end

MauvilleCity_EventScript_BikerLeave::
# 1036 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 1037 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 1038 "data/maps/MauvilleCity/scripts.pory"
	applymovement 48, Common_Movement_ExclamationMark
# 1039 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1040 "data/maps/MauvilleCity/scripts.pory"
	waitse
# 1041 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_BikerLeave_Text_0, MSGBOX_AUTOCLOSE
# 1043 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1044 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 1045 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1046 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_EventScript_BikerLeft::
# 1051 "data/maps/MauvilleCity/scripts.pory"
	lock
# 1052 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_BikerLeft_Text_0, MSGBOX_AUTOCLOSE
# 1054 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1055 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 1056 "data/maps/MauvilleCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 1057 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1058 "data/maps/MauvilleCity/scripts.pory"
	waitse
# 1059 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 1060 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_BikerLeave_Text_0, MSGBOX_AUTOCLOSE
# 1062 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1063 "data/maps/MauvilleCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 1064 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1065 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_BikerRight::
# 1070 "data/maps/MauvilleCity/scripts.pory"
	lock
# 1071 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_BikerRight_Text_0, MSGBOX_AUTOCLOSE
# 1076 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1077 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 1078 "data/maps/MauvilleCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 1079 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1080 "data/maps/MauvilleCity/scripts.pory"
	waitse
# 1081 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 1082 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_BikerLeave_Text_0, MSGBOX_AUTOCLOSE
# 1084 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1085 "data/maps/MauvilleCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 1086 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 1087 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_Trigger_Bikers1_Text_0:
# 710 "data/maps/MauvilleCity/scripts.pory"
	.string "LOOK OUT!$"

MauvilleCity_EventScript_Bikers_WomanWarnText_Text_0:
# 944 "data/maps/MauvilleCity/scripts.pory"
	.string "Oh no…$"

MauvileCity_EventScript_SeeWhatsGoingOn_Text_0:
# 952 "data/maps/MauvilleCity/scripts.pory"
	.string "I should see what's happening\n on ROUTE 110.$"

MauvileCity_EventScript_ICantLeaveLikeThis_Text_0:
# 970 "data/maps/MauvilleCity/scripts.pory"
	.string "I can't just abandon that Policeman!$"

MauvilleCity_EventScript_PolicemanGivesUturn_Text_0:
# 1001 "data/maps/MauvilleCity/scripts.pory"
	.string "Wait!$"

MauvilleCity_EventScript_BikerLeave_Text_0:
# 1041 "data/maps/MauvilleCity/scripts.pory"
	.string "Hey, don't you see us talking?\n Get out of here!$"

MauvilleCity_EventScript_BikerLeft_Text_0:
# 1052 "data/maps/MauvilleCity/scripts.pory"
	.string "The boss is going to be here\n soon, right?$"

MauvilleCity_EventScript_BikerRight_Text_0:
# 1071 "data/maps/MauvilleCity/scripts.pory"
	.string "Yeah…\p I think that pig's still\n on our trail.\p Hopefully we distracted him\n for long enough.$"

MauvilleCity_Text_DacaGone::
# 695 "data/maps/MauvilleCity/scripts.pory"
	.string "Like, what's up, dude?\n Here to challenge the GYM?\p Sorry, the LEADER went to \n RUSTURF TUNNEL.\p I don't know when she'll be back.\n Maybe you could go get her for me?$"

MauvilleCity_Text_Police::
# 907 "data/maps/MauvilleCity/scripts.pory"
	.string "Huff.. Huff..\n Requesting back up on ROUTE 110!$"

MauvilleCity_Text_WomanBikersRoute110::
# 936 "data/maps/MauvilleCity/scripts.pory"
	.string "A biker gang took over the CYCLING\n ROAD!\l That poor policeman is outnumbered!$"
