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
	call_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_MoveWattsonBackToGym
# 19 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_SYS_BIKERS_ROUTE_110, MauvilleCity_EventScript_SaveBikerMusic
# 20 "data/maps/MauvilleCity/scripts.pory"
	end
# 21 "data/maps/MauvilleCity/scripts.pory"

# 22 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnFrame:
# 23 "data/maps/MauvilleCity/scripts.pory"
	map_script_2 VAR_SPEEDWAGON_STATE, 6, MauvilleCity_EventScript_PolicemanGivesUturn
# 24 "data/maps/MauvilleCity/scripts.pory"
	.2byte 0
# 25 "data/maps/MauvilleCity/scripts.pory"

# 26 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWattsonBackToGym::
# 27 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 28 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 29 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
# 30 "data/maps/MauvilleCity/scripts.pory"
	return
# 31 "data/maps/MauvilleCity/scripts.pory"

# 32 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Boy::
# 33 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
# 34 "data/maps/MauvilleCity/scripts.pory"
	end
# 35 "data/maps/MauvilleCity/scripts.pory"

# 36 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Maniac::
# 37 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
# 38 "data/maps/MauvilleCity/scripts.pory"
	end
# 39 "data/maps/MauvilleCity/scripts.pory"

# 40 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Woman::
# 41 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
# 42 "data/maps/MauvilleCity/scripts.pory"
	end
# 43 "data/maps/MauvilleCity/scripts.pory"

# 44 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RichBoy::
# 45 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
# 46 "data/maps/MauvilleCity/scripts.pory"
	end
# 47 "data/maps/MauvilleCity/scripts.pory"

# 48 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CitySign::
# 49 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
# 50 "data/maps/MauvilleCity/scripts.pory"
	end
# 51 "data/maps/MauvilleCity/scripts.pory"

# 52 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GymSign::
# 53 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
# 54 "data/maps/MauvilleCity/scripts.pory"
	end
# 55 "data/maps/MauvilleCity/scripts.pory"

# 56 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BikeShopSign::
# 57 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
# 58 "data/maps/MauvilleCity/scripts.pory"
	end
# 59 "data/maps/MauvilleCity/scripts.pory"

# 60 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GameCornerSign::
# 61 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
# 62 "data/maps/MauvilleCity/scripts.pory"
	end
# 63 "data/maps/MauvilleCity/scripts.pory"

# 64 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_SchoolKidM::
# 65 "data/maps/MauvilleCity/scripts.pory"
	lock
# 66 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 67 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
# 68 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
# 69 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TV_EXPLAINED
# 70 "data/maps/MauvilleCity/scripts.pory"
	release
# 71 "data/maps/MauvilleCity/scripts.pory"
	end
# 72 "data/maps/MauvilleCity/scripts.pory"

# 73 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_TVExplained::
# 74 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
# 75 "data/maps/MauvilleCity/scripts.pory"
	release
# 76 "data/maps/MauvilleCity/scripts.pory"
	end
# 77 "data/maps/MauvilleCity/scripts.pory"

# 78 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallysUncle::
# 79 "data/maps/MauvilleCity/scripts.pory"
	lock
# 80 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 81 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
# 82 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
# 83 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 84 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 85 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 86 "data/maps/MauvilleCity/scripts.pory"
	release
# 87 "data/maps/MauvilleCity/scripts.pory"
	end
# 88 "data/maps/MauvilleCity/scripts.pory"

# 89 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
# 90 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
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
MauvilleCity_EventScript_Wally::
# 98 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 99 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallyRequestBattleAgain
# 100 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 101 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 102 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 103 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 104 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 105 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 106 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 107 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 108 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
# 109 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 110 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_Delay48
# 111 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 112 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 113 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 114 "data/maps/MauvilleCity/scripts.pory"
	end
# 115 "data/maps/MauvilleCity/scripts.pory"

# 116 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt::
# 117 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, MauvilleCity_EventScript_BattleWally
# 118 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_EventScript_DeclineWallyBattle
# 119 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 120 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 121 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_WallyAndUncleExitNorth
# 122 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_WallyAndUncleExitEast
# 123 "data/maps/MauvilleCity/scripts.pory"
	end
# 124 "data/maps/MauvilleCity/scripts.pory"

# 125 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitNorth::
# 126 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 127 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth1
# 128 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth1
# 129 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 130 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 131 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 132 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 133 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
# 134 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
# 135 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 136 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 137 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 138 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 139 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth2
# 140 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth2
# 141 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 142 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 143 "data/maps/MauvilleCity/scripts.pory"
	end
# 144 "data/maps/MauvilleCity/scripts.pory"

# 145 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitEast::
# 146 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 147 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast1
# 148 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast1
# 149 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 150 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 151 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 152 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 153 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerEast
# 154 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 155 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 156 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 157 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 158 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast2
# 159 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast2
# 160 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 161 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 162 "data/maps/MauvilleCity/scripts.pory"
	end
# 163 "data/maps/MauvilleCity/scripts.pory"

# 164 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally::
# 165 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLY
# 166 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLYS_UNCLE
# 167 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 168 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 169 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 170 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 171 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 172 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottApproachPlayerNorth
# 173 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottApproachPlayerEast
# 174 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 175 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 176 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 177 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 178 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 179 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottExitNorth
# 180 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottExitEast
# 181 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 182 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 183 "data/maps/MauvilleCity/scripts.pory"
	end
# 184 "data/maps/MauvilleCity/scripts.pory"

# 185 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerNorth::
# 186 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 187 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerNorth
# 188 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 189 "data/maps/MauvilleCity/scripts.pory"
	return
# 190 "data/maps/MauvilleCity/scripts.pory"

# 191 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerEast::
# 192 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 12, 13
# 193 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 194 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
# 195 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 196 "data/maps/MauvilleCity/scripts.pory"
	return
# 197 "data/maps/MauvilleCity/scripts.pory"

# 198 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitNorth::
# 199 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 200 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitNorth
# 201 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 202 "data/maps/MauvilleCity/scripts.pory"
	return
# 203 "data/maps/MauvilleCity/scripts.pory"

# 204 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitEast::
# 205 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 206 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitEast
# 207 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 208 "data/maps/MauvilleCity/scripts.pory"
	return
# 209 "data/maps/MauvilleCity/scripts.pory"

# 210 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWally::
# 211 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 212 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
# 213 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 214 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 215 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 216 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 217 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 218 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 219 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 220 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 221 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
# 222 "data/maps/MauvilleCity/scripts.pory"
	return
# 223 "data/maps/MauvilleCity/scripts.pory"

# 224 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DeclineWallyBattle::
# 225 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 226 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 227 "data/maps/MauvilleCity/scripts.pory"
	release
# 228 "data/maps/MauvilleCity/scripts.pory"
	end
# 229 "data/maps/MauvilleCity/scripts.pory"

# 230 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyRequestBattleAgain::
# 231 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 232 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 233 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 234 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 235 "data/maps/MauvilleCity/scripts.pory"
	end
# 236 "data/maps/MauvilleCity/scripts.pory"

# 237 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth1:
# 238 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 239 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 240 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 241 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 242 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 243 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 244 "data/maps/MauvilleCity/scripts.pory"

# 245 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast1:
# 246 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 247 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 248 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 249 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 250 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 251 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 252 "data/maps/MauvilleCity/scripts.pory"

# 253 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth2:
# 254 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 255 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 256 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 257 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 258 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 259 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 260 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 261 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 262 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 263 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 264 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 265 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 266 "data/maps/MauvilleCity/scripts.pory"

# 267 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast2:
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
MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
# 282 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 283 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 284 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 285 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 286 "data/maps/MauvilleCity/scripts.pory"

# 287 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast2:
# 288 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 289 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 290 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 291 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 292 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 293 "data/maps/MauvilleCity/scripts.pory"

# 294 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitNorth:
# 295 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 296 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 297 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 298 "data/maps/MauvilleCity/scripts.pory"

# 299 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast:
# 300 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 301 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 302 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 303 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 304 "data/maps/MauvilleCity/scripts.pory"

# 305 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast1:
# 306 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 307 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 308 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 309 "data/maps/MauvilleCity/scripts.pory"

# 310 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
# 311 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 312 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 313 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 314 "data/maps/MauvilleCity/scripts.pory"

# 315 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth1:
# 316 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 317 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 318 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 319 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 320 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 321 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 322 "data/maps/MauvilleCity/scripts.pory"

# 323 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast1:
# 324 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 325 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 326 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 327 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 328 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 329 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 330 "data/maps/MauvilleCity/scripts.pory"

# 331 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleNorth:
# 332 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 333 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 334 "data/maps/MauvilleCity/scripts.pory"
	delay_4
# 335 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 336 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 337 "data/maps/MauvilleCity/scripts.pory"

# 338 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
# 339 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 340 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 341 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 342 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 343 "data/maps/MauvilleCity/scripts.pory"

# 344 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerEast:
# 345 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 346 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 347 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 348 "data/maps/MauvilleCity/scripts.pory"

# 349 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth2:
# 350 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 352 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 353 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 354 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 355 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 356 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 357 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 358 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 359 "data/maps/MauvilleCity/scripts.pory"

# 360 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast2:
# 361 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 362 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 363 "data/maps/MauvilleCity/scripts.pory"
	walk_left
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
	step_end
# 371 "data/maps/MauvilleCity/scripts.pory"

# 372 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerNorth:
# 373 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 374 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 375 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 376 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 377 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 378 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 379 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 380 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 381 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 382 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 383 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 384 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 385 "data/maps/MauvilleCity/scripts.pory"

# 386 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast:
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
	walk_left
# 393 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 394 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 395 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 396 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 397 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 398 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 399 "data/maps/MauvilleCity/scripts.pory"

# 400 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth:
# 401 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 402 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 403 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 404 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 405 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 406 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 407 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 408 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 409 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 410 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 411 "data/maps/MauvilleCity/scripts.pory"

# 412 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitEast:
# 413 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 414 "data/maps/MauvilleCity/scripts.pory"
	walk_left
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
	step_end
# 424 "data/maps/MauvilleCity/scripts.pory"

# 425 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson::
# 426 "data/maps/MauvilleCity/scripts.pory"
	lock
# 427 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 428 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_ReceivedThunderbolt
# 429 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
# 430 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
# 431 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 432 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 433 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 434 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 435 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 436 "data/maps/MauvilleCity/scripts.pory"
	release
# 437 "data/maps/MauvilleCity/scripts.pory"
	end
# 438 "data/maps/MauvilleCity/scripts.pory"

# 439 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BegunNewMauville::
# 440 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 441 "data/maps/MauvilleCity/scripts.pory"
	release
# 442 "data/maps/MauvilleCity/scripts.pory"
	end
# 443 "data/maps/MauvilleCity/scripts.pory"

# 444 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CompletedNewMauville::
# 445 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 446 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 447 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 448 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
# 449 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 450 "data/maps/MauvilleCity/scripts.pory"
	release
# 451 "data/maps/MauvilleCity/scripts.pory"
	end
# 452 "data/maps/MauvilleCity/scripts.pory"

# 453 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ReceivedThunderbolt::
# 454 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 455 "data/maps/MauvilleCity/scripts.pory"
	release
# 456 "data/maps/MauvilleCity/scripts.pory"
	end
# 457 "data/maps/MauvilleCity/scripts.pory"

# 458 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RegisterWallyCall::
# 459 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 460 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 461 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 462 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 463 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 464 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 465 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 466 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 467 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 468 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 469 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 470 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 471 "data/maps/MauvilleCity/scripts.pory"
	end
# 472 "data/maps/MauvilleCity/scripts.pory"

# 473 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleHesTooPeppy:
# 474 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: It's because of POKéMON that\n"
# 475 "data/maps/MauvilleCity/scripts.pory"
	.string "this boy's got more pep, I suppose…\l"
# 476 "data/maps/MauvilleCity/scripts.pory"
	.string "But he's become a bit too peppy…$"
# 477 "data/maps/MauvilleCity/scripts.pory"

# 478 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWantToChallengeGym:
# 479 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Aww, UNCLE, please?\p"
# 480 "data/maps/MauvilleCity/scripts.pory"
	.string "I want to challenge this GYM and see\n"
# 481 "data/maps/MauvilleCity/scripts.pory"
	.string "how much better I've become.\p"
# 482 "data/maps/MauvilleCity/scripts.pory"
	.string "Please? May I, please?$"
# 483 "data/maps/MauvilleCity/scripts.pory"

# 484 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleYourePushingIt:
# 485 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: Now hold on, WALLY.\p"
# 486 "data/maps/MauvilleCity/scripts.pory"
	.string "Since you started living with POKéMON,\n"
# 487 "data/maps/MauvilleCity/scripts.pory"
	.string "you have grown quite a lot stronger.\p"
# 488 "data/maps/MauvilleCity/scripts.pory"
	.string "But don't you think you're pushing it\n"
# 489 "data/maps/MauvilleCity/scripts.pory"
	.string "to suddenly challenge a GYM?$"
# 490 "data/maps/MauvilleCity/scripts.pory"

# 491 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWeCanBeatAnyone:
# 492 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: I'm not pushing it.\p"
# 493 "data/maps/MauvilleCity/scripts.pory"
	.string "If I combine forces with RALTS,\n"
# 494 "data/maps/MauvilleCity/scripts.pory"
	.string "we can beat anyone!$"
# 495 "data/maps/MauvilleCity/scripts.pory"

# 496 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWillYouBattleMe:
# 497 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh! Hi, {PLAYER}!\p"
# 498 "data/maps/MauvilleCity/scripts.pory"
	.string "I've gotten a lot stronger since\n"
# 499 "data/maps/MauvilleCity/scripts.pory"
	.string "we met.\p"
# 500 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, I want you and my UNCLE to\n"
# 501 "data/maps/MauvilleCity/scripts.pory"
	.string "understand that.\p"
# 502 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, please, will you have\n"
# 503 "data/maps/MauvilleCity/scripts.pory"
	.string "a battle with me?$"
# 504 "data/maps/MauvilleCity/scripts.pory"

# 505 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyMyUncleWontKnowImStrong:
# 506 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh… If you won't battle me,\n"
# 507 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, my UNCLE won't know that I've\l"
# 508 "data/maps/MauvilleCity/scripts.pory"
	.string "become really strong.$"
# 509 "data/maps/MauvilleCity/scripts.pory"

# 510 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleCanYouBattleWally:
# 511 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, was it?\n"
# 512 "data/maps/MauvilleCity/scripts.pory"
	.string "On WALLY's behalf, can I ask you to\l"
# 513 "data/maps/MauvilleCity/scripts.pory"
	.string "battle with him just this once?\p"
# 514 "data/maps/MauvilleCity/scripts.pory"
	.string "I don't think he's going to listen to\n"
# 515 "data/maps/MauvilleCity/scripts.pory"
	.string "any reason the way he is now.$"
# 516 "data/maps/MauvilleCity/scripts.pory"

# 517 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPleaseBattleMe:
# 518 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, please!\n"
# 519 "data/maps/MauvilleCity/scripts.pory"
	.string "Battle with me, please.$"
# 520 "data/maps/MauvilleCity/scripts.pory"

# 521 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyHereICome:
# 522 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, thank you.\p"
# 523 "data/maps/MauvilleCity/scripts.pory"
	.string "Okay… Here I come!$"
# 524 "data/maps/MauvilleCity/scripts.pory"

# 525 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyDefeat:
# 526 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: … … … … … … …\p"
# 527 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … … … …\p"
# 528 "data/maps/MauvilleCity/scripts.pory"
	.string "I lost…$"
# 529 "data/maps/MauvilleCity/scripts.pory"

# 530 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyIllGoBackToVerdanturf:
# 531 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: UNCLE…\n"
# 532 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll go back to VERDANTURF…$"
# 533 "data/maps/MauvilleCity/scripts.pory"

# 534 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ThankYouNotEnoughToBattle:
# 535 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, thank you.\n"
# 536 "data/maps/MauvilleCity/scripts.pory"
	.string "Being a TRAINER is tough, isn't it?\p"
# 537 "data/maps/MauvilleCity/scripts.pory"
	.string "It's not enough just to have POKéMON\n"
# 538 "data/maps/MauvilleCity/scripts.pory"
	.string "and make them battle. That isn't what\l"
# 539 "data/maps/MauvilleCity/scripts.pory"
	.string "being a real TRAINER is about.$"
# 540 "data/maps/MauvilleCity/scripts.pory"

# 541 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleNoNeedToBeDown:
# 542 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: WALLY, there's no need to be so\n"
# 543 "data/maps/MauvilleCity/scripts.pory"
	.string "down on yourself.\p"
# 544 "data/maps/MauvilleCity/scripts.pory"
	.string "Why, what's keeping you from becoming\n"
# 545 "data/maps/MauvilleCity/scripts.pory"
	.string "stronger and stronger?\p"
# 546 "data/maps/MauvilleCity/scripts.pory"
	.string "Come on, let's go home.\n"
# 547 "data/maps/MauvilleCity/scripts.pory"
	.string "Everyone's waiting for you.$"
# 548 "data/maps/MauvilleCity/scripts.pory"

# 549 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleVisitUsSometime:
# 550 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, it just dawned on me\n"
# 551 "data/maps/MauvilleCity/scripts.pory"
	.string "that you must be the TRAINER who kept\l"
# 552 "data/maps/MauvilleCity/scripts.pory"
	.string "an eye out for WALLY when he caught\l"
# 553 "data/maps/MauvilleCity/scripts.pory"
	.string "his POKéMON.\p"
# 554 "data/maps/MauvilleCity/scripts.pory"
	.string "Why don't you visit us in VERDANTURF\n"
# 555 "data/maps/MauvilleCity/scripts.pory"
	.string "sometime?\l"
# 556 "data/maps/MauvilleCity/scripts.pory"
	.string "I'm sure WALLY would enjoy it.$"
# 557 "data/maps/MauvilleCity/scripts.pory"

# 558 "data/maps/MauvilleCity/scripts.pory"

# 559 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPokenavCall:
# 560 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 561 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Beep!\p"
# 562 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh, hello, {PLAYER}!\p"
# 563 "data/maps/MauvilleCity/scripts.pory"
	.string "I just wanted to tell you that\n"
# 564 "data/maps/MauvilleCity/scripts.pory"
	.string "my uncle bought me a POKéNAV!\p"
# 565 "data/maps/MauvilleCity/scripts.pory"
	.string "Now I can get in touch with you\n"
# 566 "data/maps/MauvilleCity/scripts.pory"
	.string "anytime, {PLAYER}!\p"
# 567 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 568 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Click!$"
# 569 "data/maps/MauvilleCity/scripts.pory"

# 570 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RegisteredWally:
# 571 "data/maps/MauvilleCity/scripts.pory"
	.string "Registered WALLY\n"
# 572 "data/maps/MauvilleCity/scripts.pory"
	.string "in the POKéNAV.$"
# 573 "data/maps/MauvilleCity/scripts.pory"

# 574 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ScottYouDidntHoldBack:
# 575 "data/maps/MauvilleCity/scripts.pory"
	.string "SCOTT: Hehe…\n"
# 576 "data/maps/MauvilleCity/scripts.pory"
	.string "I was watching that match!\p"
# 577 "data/maps/MauvilleCity/scripts.pory"
	.string "You're friends with that boy WALLY,\n"
# 578 "data/maps/MauvilleCity/scripts.pory"
	.string "aren't you?\p"
# 579 "data/maps/MauvilleCity/scripts.pory"
	.string "But you didn't hold anything back\n"
# 580 "data/maps/MauvilleCity/scripts.pory"
	.string "and beat him impressively.\p"
# 581 "data/maps/MauvilleCity/scripts.pory"
	.string "Yeah! That's what a real POKéMON\n"
# 582 "data/maps/MauvilleCity/scripts.pory"
	.string "battle is all about!\p"
# 583 "data/maps/MauvilleCity/scripts.pory"
	.string "I idolize TRAINERS like that!\p"
# 584 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 585 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll be cheering for you!$"
# 586 "data/maps/MauvilleCity/scripts.pory"

# 587 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonNeedFavorTakeKey:
# 588 "data/maps/MauvilleCity/scripts.pory"
	.string "DACA: Oh, {PLAYER}{KUN}!\n"
# 589 "data/maps/MauvilleCity/scripts.pory"
	.string "You look ready to party!\l"
# 590 "data/maps/MauvilleCity/scripts.pory"
	.string "That's a good thing, hahaha!\p"
# 591 "data/maps/MauvilleCity/scripts.pory"
	.string "Fine! I've decided!\n"
# 592 "data/maps/MauvilleCity/scripts.pory"
	.string "I need a favor, {PLAYER}{KUN}!\p"
# 593 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY has an underground\n"
# 594 "data/maps/MauvilleCity/scripts.pory"
	.string "sector called NEW MAUVILLE.\p"
# 595 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'd like you to go there and\n"
# 596 "data/maps/MauvilleCity/scripts.pory"
	.string "switch off the GENERATOR.\p"
# 597 "data/maps/MauvilleCity/scripts.pory"
	.string "The GENERATOR has been running a bit\n"
# 598 "data/maps/MauvilleCity/scripts.pory"
	.string "haywire. It's getting unsafe.\p"
# 599 "data/maps/MauvilleCity/scripts.pory"
	.string "Here, this is the KEY to get into\n"
# 600 "data/maps/MauvilleCity/scripts.pory"
	.string "NEW MAUVILLE.$"
# 601 "data/maps/MauvilleCity/scripts.pory"

# 602 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonWontBeChallenge:
# 603 "data/maps/MauvilleCity/scripts.pory"
	.string "DACA: Don't worry about it.\n"
# 604 "data/maps/MauvilleCity/scripts.pory"
	.string "It won't be a challenge to you.\p"
# 605 "data/maps/MauvilleCity/scripts.pory"
	.string "The entrance to NEW MAUVILLE is just\n"
# 606 "data/maps/MauvilleCity/scripts.pory"
	.string "a short SURF away from ROUTE 110.\p"
# 607 "data/maps/MauvilleCity/scripts.pory"
	.string "That's it, then, go party!\n"
# 608 "data/maps/MauvilleCity/scripts.pory"
	.string "Hahaha!$"
# 609 "data/maps/MauvilleCity/scripts.pory"

# 610 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonThanksTakeTM:
# 611 "data/maps/MauvilleCity/scripts.pory"
	.string "DACA: Hahaha!\p"
# 612 "data/maps/MauvilleCity/scripts.pory"
	.string "I knew it, {PLAYER}{KUN}! I knew I'd made\n"
# 613 "data/maps/MauvilleCity/scripts.pory"
	.string "the right choice asking you!\p"
# 614 "data/maps/MauvilleCity/scripts.pory"
	.string "This is my thanks--a TM containing\n"
# 615 "data/maps/MauvilleCity/scripts.pory"
	.string "THUNDERBOLT!\p"
# 616 "data/maps/MauvilleCity/scripts.pory"
	.string "Go on, you've earned it!$"
# 617 "data/maps/MauvilleCity/scripts.pory"

# 618 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonYoungTakeCharge:
# 619 "data/maps/MauvilleCity/scripts.pory"
	.string "DACA: Hahaha!\p"
# 620 "data/maps/MauvilleCity/scripts.pory"
	.string "It pleases me to no end to see\n"
# 621 "data/maps/MauvilleCity/scripts.pory"
	.string "people party!$"
# 622 "data/maps/MauvilleCity/scripts.pory"

# 623 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_NurseHurtMonBackToHealth:
# 624 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have POKéMON\n"
# 625 "data/maps/MauvilleCity/scripts.pory"
	.string "battles and stuff…\p"
# 626 "data/maps/MauvilleCity/scripts.pory"
	.string "But if your POKéMON gets hurt,\n"
# 627 "data/maps/MauvilleCity/scripts.pory"
	.string "you have to nurse it back to health.$"
# 628 "data/maps/MauvilleCity/scripts.pory"

# 629 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_AllSortsOfPeopleComeThrough:
# 630 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
# 631 "data/maps/MauvilleCity/scripts.pory"
	.string "and south, and east and west.\p"
# 632 "data/maps/MauvilleCity/scripts.pory"
	.string "Because of that, we get all sorts of\n"
# 633 "data/maps/MauvilleCity/scripts.pory"
	.string "people coming through.$"
# 634 "data/maps/MauvilleCity/scripts.pory"

# 635 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RydelVeryGenerous:
# 636 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to RYDEL'S CYCLES yet?\p"
# 637 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL, the owner, is a very generous\n"
# 638 "data/maps/MauvilleCity/scripts.pory"
	.string "man.$"
# 639 "data/maps/MauvilleCity/scripts.pory"

# 640 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_PokemonCanJumpYouOnBike:
# 641 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a BIKE,\n"
# 642 "data/maps/MauvilleCity/scripts.pory"
	.string "wild POKéMON could jump you.$"
# 643 "data/maps/MauvilleCity/scripts.pory"

# 644 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_CitySign:
# 645 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY\n"
# 646 "data/maps/MauvilleCity/scripts.pory"
	.string "“The bright and shiny city of fun!”$"
# 647 "data/maps/MauvilleCity/scripts.pory"

# 648 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GymSign:
# 649 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\n"
# 650 "data/maps/MauvilleCity/scripts.pory"
	.string "LEADER: DACA\l"
# 651 "data/maps/MauvilleCity/scripts.pory"
	.string "“Get ready for a party!”$"
# 652 "data/maps/MauvilleCity/scripts.pory"

# 653 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BikeShopSign:
# 654 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
# 655 "data/maps/MauvilleCity/scripts.pory"
	.string "soul!”\l"
# 656 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL'S CYCLES$"
# 657 "data/maps/MauvilleCity/scripts.pory"

# 658 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GameCornerSign:
# 659 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
# 660 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE GAME CORNER$"
# 661 "data/maps/MauvilleCity/scripts.pory"

# 662 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ExplainTV:
# 663 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, do you check out TV at all?\p"
# 664 "data/maps/MauvilleCity/scripts.pory"
	.string "They've added a bunch of cool new\n"
# 665 "data/maps/MauvilleCity/scripts.pory"
	.string "shows recently.\p"
# 666 "data/maps/MauvilleCity/scripts.pory"
	.string "TV is so cool. I've seen my friends on\n"
# 667 "data/maps/MauvilleCity/scripts.pory"
	.string "TV just out of the blue.\p"
# 668 "data/maps/MauvilleCity/scripts.pory"
	.string "And, sometimes, they even put you on TV\n"
# 669 "data/maps/MauvilleCity/scripts.pory"
	.string "without telling you.\p"
# 670 "data/maps/MauvilleCity/scripts.pory"
	.string "I wish I would be on TV sometime.\p"
# 671 "data/maps/MauvilleCity/scripts.pory"
	.string "That's why I think you should check\n"
# 672 "data/maps/MauvilleCity/scripts.pory"
	.string "out TVs whenever you can.$"
# 673 "data/maps/MauvilleCity/scripts.pory"

# 674 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BeenCheckingOutTV:
# 675 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"

MauvilleCity_EventScript_GymNPC::
# 679 "data/maps/MauvilleCity/scripts.pory"
	lock
# 680 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, Common_Movement_FacePlayer
# 681 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 12
# 682 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_DacaGone, MSGBOX_NPC
# 683 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 684 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_Trigger_Bikers1::
# 698 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 699 "data/maps/MauvilleCity/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 700 "data/maps/MauvilleCity/scripts.pory"
	addobject 13
# 701 "data/maps/MauvilleCity/scripts.pory"
	addobject 14
# 702 "data/maps/MauvilleCity/scripts.pory"
	addobject 15
# 703 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Trigger_Bikers1_Text_0, MSGBOX_AUTOCLOSE
# 704 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 705 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 706 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 707 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 708 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerRunLeft
# 709 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 710 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 711 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 712 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 713 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM
# 714 "data/maps/MauvilleCity/scripts.pory"
	applymovement 13, MauvilleCity_Movement_Biker1
# 715 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 716 "data/maps/MauvilleCity/scripts.pory"
	applymovement 14, MauvilleCity_Movement_Biker1
# 717 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 718 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 14
# 719 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 720 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 721 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police1
# 722 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 723 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 724 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_Police, MSGBOX_AUTOCLOSE
# 725 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 726 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police2
# 727 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 728 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 729 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 2
# 730 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_BIKERS
# 731 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE_110_BIKER_POLICEMAN
# 732 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ROUTE110_HIDE_CYCLIST
# 733 "data/maps/MauvilleCity/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 734 "data/maps/MauvilleCity/scripts.pory"
	fadedefaultbgm
# 735 "data/maps/MauvilleCity/scripts.pory"
	removeobject 13
# 736 "data/maps/MauvilleCity/scripts.pory"
	removeobject 14
# 737 "data/maps/MauvilleCity/scripts.pory"
	removeobject 15
# 738 "data/maps/MauvilleCity/scripts.pory"
	addobject 16
# 739 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_Trigger_Bikers2::
# 744 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 745 "data/maps/MauvilleCity/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 746 "data/maps/MauvilleCity/scripts.pory"
	addobject 13
# 747 "data/maps/MauvilleCity/scripts.pory"
	addobject 14
# 748 "data/maps/MauvilleCity/scripts.pory"
	addobject 15
# 749 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Trigger_Bikers1_Text_0, MSGBOX_AUTOCLOSE
# 750 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 751 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 752 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 753 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 754 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerRunRight
# 755 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 756 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 757 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 758 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 759 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM
# 760 "data/maps/MauvilleCity/scripts.pory"
	applymovement 13, MauvilleCity_Movement_Biker1
# 761 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 762 "data/maps/MauvilleCity/scripts.pory"
	applymovement 14, MauvilleCity_Movement_Biker1
# 763 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 764 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 14
# 765 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 766 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 767 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police1
# 768 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 769 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 770 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_Police, MSGBOX_AUTOCLOSE
# 771 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 772 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police2
# 773 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 774 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 775 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 2
# 776 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_BIKERS
# 777 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE_110_BIKER_POLICEMAN
# 778 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ROUTE110_HIDE_CYCLIST
# 779 "data/maps/MauvilleCity/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 780 "data/maps/MauvilleCity/scripts.pory"
	fadedefaultbgm
# 781 "data/maps/MauvilleCity/scripts.pory"
	removeobject 13
# 782 "data/maps/MauvilleCity/scripts.pory"
	removeobject 14
# 783 "data/maps/MauvilleCity/scripts.pory"
	removeobject 15
# 784 "data/maps/MauvilleCity/scripts.pory"
	addobject 16
# 785 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_Trigger_Bikers3::
# 790 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 791 "data/maps/MauvilleCity/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 792 "data/maps/MauvilleCity/scripts.pory"
	addobject 13
# 793 "data/maps/MauvilleCity/scripts.pory"
	addobject 14
# 794 "data/maps/MauvilleCity/scripts.pory"
	addobject 15
# 795 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Trigger_Bikers1_Text_0, MSGBOX_AUTOCLOSE
# 796 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 797 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 798 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 799 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 800 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 801 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 802 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 803 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM
# 804 "data/maps/MauvilleCity/scripts.pory"
	applymovement 13, MauvilleCity_Movement_Biker1
# 805 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 806 "data/maps/MauvilleCity/scripts.pory"
	applymovement 14, MauvilleCity_Movement_Biker1
# 807 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 808 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 14
# 809 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 810 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 811 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police1
# 812 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 813 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 814 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_Police, MSGBOX_AUTOCLOSE
# 815 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 816 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police2
# 817 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 818 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 819 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 2
# 820 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_BIKERS
# 821 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE_110_BIKER_POLICEMAN
# 822 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ROUTE110_HIDE_CYCLIST
# 823 "data/maps/MauvilleCity/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 824 "data/maps/MauvilleCity/scripts.pory"
	fadedefaultbgm
# 825 "data/maps/MauvilleCity/scripts.pory"
	removeobject 13
# 826 "data/maps/MauvilleCity/scripts.pory"
	removeobject 14
# 827 "data/maps/MauvilleCity/scripts.pory"
	removeobject 15
# 828 "data/maps/MauvilleCity/scripts.pory"
	addobject 16
# 829 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_Trigger_Bikers4::
# 834 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 835 "data/maps/MauvilleCity/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 836 "data/maps/MauvilleCity/scripts.pory"
	addobject 13
# 837 "data/maps/MauvilleCity/scripts.pory"
	addobject 14
# 838 "data/maps/MauvilleCity/scripts.pory"
	addobject 15
# 839 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Trigger_Bikers1_Text_0, MSGBOX_AUTOCLOSE
# 840 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 841 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 842 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 843 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 844 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 845 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 846 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 847 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM
# 848 "data/maps/MauvilleCity/scripts.pory"
	applymovement 13, MauvilleCity_Movement_Biker1
# 849 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 850 "data/maps/MauvilleCity/scripts.pory"
	applymovement 14, MauvilleCity_Movement_Biker1
# 851 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 852 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 14
# 853 "data/maps/MauvilleCity/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 854 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 855 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police1
# 856 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 857 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 858 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_Police, MSGBOX_AUTOCLOSE
# 859 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 860 "data/maps/MauvilleCity/scripts.pory"
	applymovement 15, MauvileCity_Movement_Police2
# 861 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 15
# 862 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 863 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 2
# 864 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_BIKERS
# 865 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE_110_BIKER_POLICEMAN
# 866 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ROUTE110_HIDE_CYCLIST
# 867 "data/maps/MauvilleCity/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 868 "data/maps/MauvilleCity/scripts.pory"
	fadedefaultbgm
# 869 "data/maps/MauvilleCity/scripts.pory"
	removeobject 13
# 870 "data/maps/MauvilleCity/scripts.pory"
	removeobject 14
# 871 "data/maps/MauvilleCity/scripts.pory"
	removeobject 15
# 872 "data/maps/MauvilleCity/scripts.pory"
	addobject 16
# 873 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


# 877 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerRunLeft:
# 878 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_left
# 878 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_left
	step_end

# 881 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerRunRight:
# 882 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
	step_end

# 886 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_Biker1:
# 887 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 887 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 887 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 887 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 887 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 887 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 887 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 887 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 887 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 887 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_down
# 888 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 888 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 888 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 888 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 888 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 888 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 888 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 888 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 888 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 888 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 888 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 888 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
# 888 "data/maps/MauvilleCity/scripts.pory"
	walk_faster_right
	step_end

# 891 "data/maps/MauvilleCity/scripts.pory"
MauvileCity_Movement_Police1:
# 892 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 892 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 892 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 892 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 892 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 892 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
	step_end

# 895 "data/maps/MauvilleCity/scripts.pory"
MauvileCity_Movement_Police2:
# 896 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 896 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 896 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 896 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_down
# 897 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 897 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 897 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 897 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 897 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 897 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 897 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 897 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 897 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 897 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
# 897 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_right
	step_end

MauvilleCity_EventScript_Bikers_WomanWarn::
# 906 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 907 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 908 "data/maps/MauvilleCity/scripts.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 909 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 16
# 910 "data/maps/MauvilleCity/scripts.pory"
	delay 20
# 911 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 912 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 913 "data/maps/MauvilleCity/scripts.pory"
	applymovement 16, Common_Movement_FacePlayer
# 914 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 16
# 915 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WomanBikersRoute110, MSGBOX_AUTOCLOSE
# 916 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 917 "data/maps/MauvilleCity/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceDown
# 918 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 16
# 919 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 920 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 921 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 3
# 922 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_BIKERS_ROUTE_110
# 923 "data/maps/MauvilleCity/scripts.pory"
	playbgm MUS_RG_SILPH, TRUE
# 924 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 925 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_EventScript_Bikers_WomanWarnText::
# 936 "data/maps/MauvilleCity/scripts.pory"
	lock
# 937 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_Bikers_WomanWarnText_Text_0, MSGBOX_AUTOCLOSE
# 938 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 939 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvileCity_EventScript_SeeWhatsGoingOn::
# 944 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 945 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvileCity_EventScript_SeeWhatsGoingOn_Text_0, MSGBOX_AUTOCLOSE
# 947 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 948 "data/maps/MauvilleCity/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_0
# 949 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_TEMP_0, DIR_WEST
	goto_if_eq MauvileCity_EventScript_SeeWhatsGoingOn_2
# 954 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvileCity_Movement_WalkDown
# 955 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
MauvileCity_EventScript_SeeWhatsGoingOn_1:
# 957 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end

MauvileCity_EventScript_SeeWhatsGoingOn_2:
# 950 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 951 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	goto MauvileCity_EventScript_SeeWhatsGoingOn_1


MauvileCity_EventScript_ICantLeaveLikeThis::
# 962 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 963 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvileCity_EventScript_ICantLeaveLikeThis_Text_0, MSGBOX_AUTOCLOSE
# 964 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 965 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvileCity_Movement_WalkDown
# 966 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 967 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvileCity_EventScript_ICantLeaveLikeThisEast::
# 972 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 973 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvileCity_EventScript_ICantLeaveLikeThis_Text_0, MSGBOX_AUTOCLOSE
# 974 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 975 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 976 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 977 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


# 981 "data/maps/MauvilleCity/scripts.pory"
MauvileCity_Movement_WalkDown:
# 982 "data/maps/MauvilleCity/scripts.pory"
	walk_down
	step_end

MauvilleCity_EventScript_SaveBikerMusic::
# 986 "data/maps/MauvilleCity/scripts.pory"
	savebgm MUS_RG_SILPH
# 987 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
	return


MauvilleCity_EventScript_PolicemanGivesUturn::
# 993 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 994 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_PolicemanGivesUturn_Text_0, MSGBOX_AUTOCLOSE
# 995 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 996 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_POLICEMAN_ROUTE_110
# 997 "data/maps/MauvilleCity/scripts.pory"
	addobject 17
# 998 "data/maps/MauvilleCity/scripts.pory"
	applymovement 17, MauvilleCity_Movement_PolicemanApproachesPlayer
# 999 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 17
# 1000 "data/maps/MauvilleCity/scripts.pory"
	msgbox Route110_Text_PolicemanThankYou, MSGBOX_DEFAULT
# 1001 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1002 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_U_TURN
# 1003 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1004 "data/maps/MauvilleCity/scripts.pory"
	msgbox Route110_Text_PolicemanThankYou2, MSGBOX_AUTOCLOSE
# 1005 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 1006 "data/maps/MauvilleCity/scripts.pory"
	applymovement 17, MauvilleCity_Movement_PolicemanLeaves
# 1007 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 17
# 1008 "data/maps/MauvilleCity/scripts.pory"
	removeobject 17
# 1009 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_CYCLIST
# 1010 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_ROUTE_110
# 1011 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 8
# 1012 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


# 1016 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PolicemanApproachesPlayer:
# 1017 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 1017 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 1017 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 1018 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1018 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1018 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1018 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1018 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1018 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 1019 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 1019 "data/maps/MauvilleCity/scripts.pory"
	walk_up
	step_end

# 1022 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PolicemanLeaves:
# 1023 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 1023 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 1024 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 1024 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 1024 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 1024 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 1024 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 1024 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 1025 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 1025 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 1025 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 1025 "data/maps/MauvilleCity/scripts.pory"
	walk_down
	step_end

MauvilleCity_Trigger_Bikers1_Text_0:
# 703 "data/maps/MauvilleCity/scripts.pory"
	.string "LOOK OUT!$"

MauvilleCity_EventScript_Bikers_WomanWarnText_Text_0:
# 937 "data/maps/MauvilleCity/scripts.pory"
	.string "Oh no…$"

MauvileCity_EventScript_SeeWhatsGoingOn_Text_0:
# 945 "data/maps/MauvilleCity/scripts.pory"
	.string "I should see what's happening\n on ROUTE 110.$"

MauvileCity_EventScript_ICantLeaveLikeThis_Text_0:
# 963 "data/maps/MauvilleCity/scripts.pory"
	.string "I can't just abandon that Policeman!$"

MauvilleCity_EventScript_PolicemanGivesUturn_Text_0:
# 994 "data/maps/MauvilleCity/scripts.pory"
	.string "Wait!$"

MauvilleCity_Text_DacaGone::
# 688 "data/maps/MauvilleCity/scripts.pory"
	.string "Like, what's up, dude?\n Here to challenge the GYM?\p Sorry, the LEADER went to \n RUSTURF TUNNEL.\p I don't when she'll be back.\n Maybe you could go get her for me?$"

MauvilleCity_Text_Police::
# 900 "data/maps/MauvilleCity/scripts.pory"
	.string "Huff.. Huff..\n Requesting back up on ROUTE 110!$"

MauvilleCity_Text_WomanBikersRoute110::
# 929 "data/maps/MauvilleCity/scripts.pory"
	.string "A biker gang took over the CYCLING\n ROAD!\l That poor policeman is outnumbered!$"
