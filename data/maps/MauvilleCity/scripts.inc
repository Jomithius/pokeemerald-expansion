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
	.byte 0
# 8 "data/maps/MauvilleCity/scripts.pory"

# 9 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnTransition:
# 10 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 11 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 12 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
# 13 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_TV_START
# 14 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 15 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 0
# 16 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_MoveWattsonBackToGym
# 17 "data/maps/MauvilleCity/scripts.pory"
	end
# 18 "data/maps/MauvilleCity/scripts.pory"

# 19 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWattsonBackToGym::
# 20 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 21 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 22 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
# 23 "data/maps/MauvilleCity/scripts.pory"
	return
# 24 "data/maps/MauvilleCity/scripts.pory"

# 25 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Boy::
# 26 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
# 27 "data/maps/MauvilleCity/scripts.pory"
	end
# 28 "data/maps/MauvilleCity/scripts.pory"

# 29 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Maniac::
# 30 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
# 31 "data/maps/MauvilleCity/scripts.pory"
	end
# 32 "data/maps/MauvilleCity/scripts.pory"

# 33 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Woman::
# 34 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
# 35 "data/maps/MauvilleCity/scripts.pory"
	end
# 36 "data/maps/MauvilleCity/scripts.pory"

# 37 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RichBoy::
# 38 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
# 39 "data/maps/MauvilleCity/scripts.pory"
	end
# 40 "data/maps/MauvilleCity/scripts.pory"

# 41 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CitySign::
# 42 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
# 43 "data/maps/MauvilleCity/scripts.pory"
	end
# 44 "data/maps/MauvilleCity/scripts.pory"

# 45 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GymSign::
# 46 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
# 47 "data/maps/MauvilleCity/scripts.pory"
	end
# 48 "data/maps/MauvilleCity/scripts.pory"

# 49 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BikeShopSign::
# 50 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
# 51 "data/maps/MauvilleCity/scripts.pory"
	end
# 52 "data/maps/MauvilleCity/scripts.pory"

# 53 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GameCornerSign::
# 54 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
# 55 "data/maps/MauvilleCity/scripts.pory"
	end
# 56 "data/maps/MauvilleCity/scripts.pory"

# 57 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_SchoolKidM::
# 58 "data/maps/MauvilleCity/scripts.pory"
	lock
# 59 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 60 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
# 61 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
# 62 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TV_EXPLAINED
# 63 "data/maps/MauvilleCity/scripts.pory"
	release
# 64 "data/maps/MauvilleCity/scripts.pory"
	end
# 65 "data/maps/MauvilleCity/scripts.pory"

# 66 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_TVExplained::
# 67 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
# 68 "data/maps/MauvilleCity/scripts.pory"
	release
# 69 "data/maps/MauvilleCity/scripts.pory"
	end
# 70 "data/maps/MauvilleCity/scripts.pory"

# 71 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallysUncle::
# 72 "data/maps/MauvilleCity/scripts.pory"
	lock
# 73 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 74 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
# 75 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
# 76 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 77 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 78 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 79 "data/maps/MauvilleCity/scripts.pory"
	release
# 80 "data/maps/MauvilleCity/scripts.pory"
	end
# 81 "data/maps/MauvilleCity/scripts.pory"

# 82 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
# 83 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
# 84 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 85 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 86 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 87 "data/maps/MauvilleCity/scripts.pory"
	release
# 88 "data/maps/MauvilleCity/scripts.pory"
	end
# 89 "data/maps/MauvilleCity/scripts.pory"

# 90 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wally::
# 91 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 92 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallyRequestBattleAgain
# 93 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 94 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 95 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 96 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 97 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 98 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 99 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 100 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 101 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
# 102 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 103 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_Delay48
# 104 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 105 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 106 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 107 "data/maps/MauvilleCity/scripts.pory"
	end
# 108 "data/maps/MauvilleCity/scripts.pory"

# 109 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt::
# 110 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, MauvilleCity_EventScript_BattleWally
# 111 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_EventScript_DeclineWallyBattle
# 112 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 113 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 114 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_WallyAndUncleExitNorth
# 115 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_WallyAndUncleExitEast
# 116 "data/maps/MauvilleCity/scripts.pory"
	end
# 117 "data/maps/MauvilleCity/scripts.pory"

# 118 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitNorth::
# 119 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 120 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth1
# 121 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth1
# 122 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 123 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 124 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 125 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 126 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
# 127 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
# 128 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 129 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 130 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 131 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 132 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth2
# 133 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth2
# 134 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 135 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 136 "data/maps/MauvilleCity/scripts.pory"
	end
# 137 "data/maps/MauvilleCity/scripts.pory"

# 138 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitEast::
# 139 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 140 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast1
# 141 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast1
# 142 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 143 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 144 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 145 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 146 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerEast
# 147 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 148 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 149 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 150 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 151 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast2
# 152 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast2
# 153 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 154 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 155 "data/maps/MauvilleCity/scripts.pory"
	end
# 156 "data/maps/MauvilleCity/scripts.pory"

# 157 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally::
# 158 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLY
# 159 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLYS_UNCLE
# 160 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 161 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 162 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 163 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 164 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 165 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottApproachPlayerNorth
# 166 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottApproachPlayerEast
# 167 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 168 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 169 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 170 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 171 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 172 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottExitNorth
# 173 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottExitEast
# 174 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 175 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 176 "data/maps/MauvilleCity/scripts.pory"
	end
# 177 "data/maps/MauvilleCity/scripts.pory"

# 178 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerNorth::
# 179 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 180 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerNorth
# 181 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 182 "data/maps/MauvilleCity/scripts.pory"
	return
# 183 "data/maps/MauvilleCity/scripts.pory"

# 184 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerEast::
# 185 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 12, 13
# 186 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 187 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
# 188 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 189 "data/maps/MauvilleCity/scripts.pory"
	return
# 190 "data/maps/MauvilleCity/scripts.pory"

# 191 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitNorth::
# 192 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 193 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitNorth
# 194 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 195 "data/maps/MauvilleCity/scripts.pory"
	return
# 196 "data/maps/MauvilleCity/scripts.pory"

# 197 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitEast::
# 198 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 199 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitEast
# 200 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 201 "data/maps/MauvilleCity/scripts.pory"
	return
# 202 "data/maps/MauvilleCity/scripts.pory"

# 203 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWally::
# 204 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 205 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
# 206 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 207 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 208 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 209 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 210 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 211 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 212 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 213 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 214 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
# 215 "data/maps/MauvilleCity/scripts.pory"
	return
# 216 "data/maps/MauvilleCity/scripts.pory"

# 217 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DeclineWallyBattle::
# 218 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 219 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 220 "data/maps/MauvilleCity/scripts.pory"
	release
# 221 "data/maps/MauvilleCity/scripts.pory"
	end
# 222 "data/maps/MauvilleCity/scripts.pory"

# 223 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyRequestBattleAgain::
# 224 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 225 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 226 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 227 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 228 "data/maps/MauvilleCity/scripts.pory"
	end
# 229 "data/maps/MauvilleCity/scripts.pory"

# 230 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth1:
# 231 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 232 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 233 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 234 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 235 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 236 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 237 "data/maps/MauvilleCity/scripts.pory"

# 238 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast1:
# 239 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 240 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 241 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 242 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 243 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 244 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 245 "data/maps/MauvilleCity/scripts.pory"

# 246 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth2:
# 247 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 248 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 249 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 250 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 251 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 252 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 253 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 254 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 255 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 256 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 257 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 258 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 259 "data/maps/MauvilleCity/scripts.pory"

# 260 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast2:
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
MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
# 275 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 276 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 277 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 278 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 279 "data/maps/MauvilleCity/scripts.pory"

# 280 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast2:
# 281 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 282 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 283 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 284 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 285 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 286 "data/maps/MauvilleCity/scripts.pory"

# 287 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitNorth:
# 288 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 289 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 290 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 291 "data/maps/MauvilleCity/scripts.pory"

# 292 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast:
# 293 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 294 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 295 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 296 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 297 "data/maps/MauvilleCity/scripts.pory"

# 298 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast1:
# 299 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 300 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 301 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 302 "data/maps/MauvilleCity/scripts.pory"

# 303 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
# 304 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 305 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 306 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 307 "data/maps/MauvilleCity/scripts.pory"

# 308 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth1:
# 309 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 310 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 311 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 312 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 313 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 314 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 315 "data/maps/MauvilleCity/scripts.pory"

# 316 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast1:
# 317 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 318 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 319 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 320 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 321 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 322 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 323 "data/maps/MauvilleCity/scripts.pory"

# 324 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleNorth:
# 325 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 326 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 327 "data/maps/MauvilleCity/scripts.pory"
	delay_4
# 328 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 329 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 330 "data/maps/MauvilleCity/scripts.pory"

# 331 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
# 332 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 333 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 334 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 335 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 336 "data/maps/MauvilleCity/scripts.pory"

# 337 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerEast:
# 338 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 339 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 340 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 341 "data/maps/MauvilleCity/scripts.pory"

# 342 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth2:
# 343 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 344 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 345 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 346 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 347 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 348 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 349 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 350 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 351 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 352 "data/maps/MauvilleCity/scripts.pory"

# 353 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast2:
# 354 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 355 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 356 "data/maps/MauvilleCity/scripts.pory"
	walk_left
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
	step_end
# 364 "data/maps/MauvilleCity/scripts.pory"

# 365 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerNorth:
# 366 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 367 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 368 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 369 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 370 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 371 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 372 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 373 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 374 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 375 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 376 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 377 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 378 "data/maps/MauvilleCity/scripts.pory"

# 379 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast:
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
	walk_left
# 386 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 387 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 388 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 389 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 390 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 391 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 392 "data/maps/MauvilleCity/scripts.pory"

# 393 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth:
# 394 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 395 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 396 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 397 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 398 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 399 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 400 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 401 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 402 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 403 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 404 "data/maps/MauvilleCity/scripts.pory"

# 405 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitEast:
# 406 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 407 "data/maps/MauvilleCity/scripts.pory"
	walk_left
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
	step_end
# 417 "data/maps/MauvilleCity/scripts.pory"

# 418 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson::
# 419 "data/maps/MauvilleCity/scripts.pory"
	lock
# 420 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 421 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_ReceivedThunderbolt
# 422 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
# 423 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
# 424 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 425 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 426 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 427 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 428 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 429 "data/maps/MauvilleCity/scripts.pory"
	release
# 430 "data/maps/MauvilleCity/scripts.pory"
	end
# 431 "data/maps/MauvilleCity/scripts.pory"

# 432 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BegunNewMauville::
# 433 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 434 "data/maps/MauvilleCity/scripts.pory"
	release
# 435 "data/maps/MauvilleCity/scripts.pory"
	end
# 436 "data/maps/MauvilleCity/scripts.pory"

# 437 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CompletedNewMauville::
# 438 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 439 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 440 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 441 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
# 442 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 443 "data/maps/MauvilleCity/scripts.pory"
	release
# 444 "data/maps/MauvilleCity/scripts.pory"
	end
# 445 "data/maps/MauvilleCity/scripts.pory"

# 446 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ReceivedThunderbolt::
# 447 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 448 "data/maps/MauvilleCity/scripts.pory"
	release
# 449 "data/maps/MauvilleCity/scripts.pory"
	end
# 450 "data/maps/MauvilleCity/scripts.pory"

# 451 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RegisterWallyCall::
# 452 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 453 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 454 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 455 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 456 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 457 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 458 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 459 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 460 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 461 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 462 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 463 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 464 "data/maps/MauvilleCity/scripts.pory"
	end
# 465 "data/maps/MauvilleCity/scripts.pory"

# 466 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleHesTooPeppy:
# 467 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: It's because of POKéMON that\n"
# 468 "data/maps/MauvilleCity/scripts.pory"
	.string "this boy's got more pep, I suppose…\l"
# 469 "data/maps/MauvilleCity/scripts.pory"
	.string "But he's become a bit too peppy…$"
# 470 "data/maps/MauvilleCity/scripts.pory"

# 471 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWantToChallengeGym:
# 472 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Aww, UNCLE, please?\p"
# 473 "data/maps/MauvilleCity/scripts.pory"
	.string "I want to challenge this GYM and see\n"
# 474 "data/maps/MauvilleCity/scripts.pory"
	.string "how much better I've become.\p"
# 475 "data/maps/MauvilleCity/scripts.pory"
	.string "Please? May I, please?$"
# 476 "data/maps/MauvilleCity/scripts.pory"

# 477 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleYourePushingIt:
# 478 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: Now hold on, WALLY.\p"
# 479 "data/maps/MauvilleCity/scripts.pory"
	.string "Since you started living with POKéMON,\n"
# 480 "data/maps/MauvilleCity/scripts.pory"
	.string "you have grown quite a lot stronger.\p"
# 481 "data/maps/MauvilleCity/scripts.pory"
	.string "But don't you think you're pushing it\n"
# 482 "data/maps/MauvilleCity/scripts.pory"
	.string "to suddenly challenge a GYM?$"
# 483 "data/maps/MauvilleCity/scripts.pory"

# 484 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWeCanBeatAnyone:
# 485 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: I'm not pushing it.\p"
# 486 "data/maps/MauvilleCity/scripts.pory"
	.string "If I combine forces with RALTS,\n"
# 487 "data/maps/MauvilleCity/scripts.pory"
	.string "we can beat anyone!$"
# 488 "data/maps/MauvilleCity/scripts.pory"

# 489 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWillYouBattleMe:
# 490 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh! Hi, {PLAYER}!\p"
# 491 "data/maps/MauvilleCity/scripts.pory"
	.string "I've gotten a lot stronger since\n"
# 492 "data/maps/MauvilleCity/scripts.pory"
	.string "we met.\p"
# 493 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, I want you and my UNCLE to\n"
# 494 "data/maps/MauvilleCity/scripts.pory"
	.string "understand that.\p"
# 495 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, please, will you have\n"
# 496 "data/maps/MauvilleCity/scripts.pory"
	.string "a battle with me?$"
# 497 "data/maps/MauvilleCity/scripts.pory"

# 498 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyMyUncleWontKnowImStrong:
# 499 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh… If you won't battle me,\n"
# 500 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, my UNCLE won't know that I've\l"
# 501 "data/maps/MauvilleCity/scripts.pory"
	.string "become really strong.$"
# 502 "data/maps/MauvilleCity/scripts.pory"

# 503 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleCanYouBattleWally:
# 504 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, was it?\n"
# 505 "data/maps/MauvilleCity/scripts.pory"
	.string "On WALLY's behalf, can I ask you to\l"
# 506 "data/maps/MauvilleCity/scripts.pory"
	.string "battle with him just this once?\p"
# 507 "data/maps/MauvilleCity/scripts.pory"
	.string "I don't think he's going to listen to\n"
# 508 "data/maps/MauvilleCity/scripts.pory"
	.string "any reason the way he is now.$"
# 509 "data/maps/MauvilleCity/scripts.pory"

# 510 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPleaseBattleMe:
# 511 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, please!\n"
# 512 "data/maps/MauvilleCity/scripts.pory"
	.string "Battle with me, please.$"
# 513 "data/maps/MauvilleCity/scripts.pory"

# 514 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyHereICome:
# 515 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, thank you.\p"
# 516 "data/maps/MauvilleCity/scripts.pory"
	.string "Okay… Here I come!$"
# 517 "data/maps/MauvilleCity/scripts.pory"

# 518 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyDefeat:
# 519 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: … … … … … … …\p"
# 520 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … … … …\p"
# 521 "data/maps/MauvilleCity/scripts.pory"
	.string "I lost…$"
# 522 "data/maps/MauvilleCity/scripts.pory"

# 523 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyIllGoBackToVerdanturf:
# 524 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: UNCLE…\n"
# 525 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll go back to VERDANTURF…$"
# 526 "data/maps/MauvilleCity/scripts.pory"

# 527 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ThankYouNotEnoughToBattle:
# 528 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, thank you.\n"
# 529 "data/maps/MauvilleCity/scripts.pory"
	.string "Being a TRAINER is tough, isn't it?\p"
# 530 "data/maps/MauvilleCity/scripts.pory"
	.string "It's not enough just to have POKéMON\n"
# 531 "data/maps/MauvilleCity/scripts.pory"
	.string "and make them battle. That isn't what\l"
# 532 "data/maps/MauvilleCity/scripts.pory"
	.string "being a real TRAINER is about.$"
# 533 "data/maps/MauvilleCity/scripts.pory"

# 534 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleNoNeedToBeDown:
# 535 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: WALLY, there's no need to be so\n"
# 536 "data/maps/MauvilleCity/scripts.pory"
	.string "down on yourself.\p"
# 537 "data/maps/MauvilleCity/scripts.pory"
	.string "Why, what's keeping you from becoming\n"
# 538 "data/maps/MauvilleCity/scripts.pory"
	.string "stronger and stronger?\p"
# 539 "data/maps/MauvilleCity/scripts.pory"
	.string "Come on, let's go home.\n"
# 540 "data/maps/MauvilleCity/scripts.pory"
	.string "Everyone's waiting for you.$"
# 541 "data/maps/MauvilleCity/scripts.pory"

# 542 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleVisitUsSometime:
# 543 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, it just dawned on me\n"
# 544 "data/maps/MauvilleCity/scripts.pory"
	.string "that you must be the TRAINER who kept\l"
# 545 "data/maps/MauvilleCity/scripts.pory"
	.string "an eye out for WALLY when he caught\l"
# 546 "data/maps/MauvilleCity/scripts.pory"
	.string "his POKéMON.\p"
# 547 "data/maps/MauvilleCity/scripts.pory"
	.string "Why don't you visit us in VERDANTURF\n"
# 548 "data/maps/MauvilleCity/scripts.pory"
	.string "sometime?\l"
# 549 "data/maps/MauvilleCity/scripts.pory"
	.string "I'm sure WALLY would enjoy it.$"
# 550 "data/maps/MauvilleCity/scripts.pory"

# 551 "data/maps/MauvilleCity/scripts.pory"

# 552 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPokenavCall:
# 553 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 554 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Beep!\p"
# 555 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh, hello, {PLAYER}!\p"
# 556 "data/maps/MauvilleCity/scripts.pory"
	.string "I just wanted to tell you that\n"
# 557 "data/maps/MauvilleCity/scripts.pory"
	.string "my uncle bought me a POKéNAV!\p"
# 558 "data/maps/MauvilleCity/scripts.pory"
	.string "Now I can get in touch with you\n"
# 559 "data/maps/MauvilleCity/scripts.pory"
	.string "anytime, {PLAYER}!\p"
# 560 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 561 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Click!$"
# 562 "data/maps/MauvilleCity/scripts.pory"

# 563 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RegisteredWally:
# 564 "data/maps/MauvilleCity/scripts.pory"
	.string "Registered WALLY\n"
# 565 "data/maps/MauvilleCity/scripts.pory"
	.string "in the POKéNAV.$"
# 566 "data/maps/MauvilleCity/scripts.pory"

# 567 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ScottYouDidntHoldBack:
# 568 "data/maps/MauvilleCity/scripts.pory"
	.string "SCOTT: Hehe…\n"
# 569 "data/maps/MauvilleCity/scripts.pory"
	.string "I was watching that match!\p"
# 570 "data/maps/MauvilleCity/scripts.pory"
	.string "You're friends with that boy WALLY,\n"
# 571 "data/maps/MauvilleCity/scripts.pory"
	.string "aren't you?\p"
# 572 "data/maps/MauvilleCity/scripts.pory"
	.string "But you didn't hold anything back\n"
# 573 "data/maps/MauvilleCity/scripts.pory"
	.string "and beat him impressively.\p"
# 574 "data/maps/MauvilleCity/scripts.pory"
	.string "Yeah! That's what a real POKéMON\n"
# 575 "data/maps/MauvilleCity/scripts.pory"
	.string "battle is all about!\p"
# 576 "data/maps/MauvilleCity/scripts.pory"
	.string "I idolize TRAINERS like that!\p"
# 577 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 578 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll be cheering for you!$"
# 579 "data/maps/MauvilleCity/scripts.pory"

# 580 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonNeedFavorTakeKey:
# 581 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Oh, {PLAYER}{KUN}!\n"
# 582 "data/maps/MauvilleCity/scripts.pory"
	.string "You look like you have a lot of zip!\l"
# 583 "data/maps/MauvilleCity/scripts.pory"
	.string "That's a good thing, wahahahaha!\p"
# 584 "data/maps/MauvilleCity/scripts.pory"
	.string "Fine! I've decided!\n"
# 585 "data/maps/MauvilleCity/scripts.pory"
	.string "I need a favor, {PLAYER}{KUN}!\p"
# 586 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY has an underground\n"
# 587 "data/maps/MauvilleCity/scripts.pory"
	.string "sector called NEW MAUVILLE.\p"
# 588 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'd like you to go there and\n"
# 589 "data/maps/MauvilleCity/scripts.pory"
	.string "switch off the GENERATOR.\p"
# 590 "data/maps/MauvilleCity/scripts.pory"
	.string "The GENERATOR has been running a bit\n"
# 591 "data/maps/MauvilleCity/scripts.pory"
	.string "haywire. It's getting unsafe.\p"
# 592 "data/maps/MauvilleCity/scripts.pory"
	.string "Here, this is the KEY to get into\n"
# 593 "data/maps/MauvilleCity/scripts.pory"
	.string "NEW MAUVILLE.$"
# 594 "data/maps/MauvilleCity/scripts.pory"

# 595 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonWontBeChallenge:
# 596 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Don't you worry about it.\n"
# 597 "data/maps/MauvilleCity/scripts.pory"
	.string "It won't be a challenge to you.\p"
# 598 "data/maps/MauvilleCity/scripts.pory"
	.string "The entrance to NEW MAUVILLE is just\n"
# 599 "data/maps/MauvilleCity/scripts.pory"
	.string "a short SURF away from ROUTE 110.\p"
# 600 "data/maps/MauvilleCity/scripts.pory"
	.string "That's it, then, you have my trust!\n"
# 601 "data/maps/MauvilleCity/scripts.pory"
	.string "Wahahahaha!$"
# 602 "data/maps/MauvilleCity/scripts.pory"

# 603 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonThanksTakeTM:
# 604 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
# 605 "data/maps/MauvilleCity/scripts.pory"
	.string "I knew it, {PLAYER}{KUN}! I knew I'd made\n"
# 606 "data/maps/MauvilleCity/scripts.pory"
	.string "the right choice asking you!\p"
# 607 "data/maps/MauvilleCity/scripts.pory"
	.string "This is my thanks--a TM containing\n"
# 608 "data/maps/MauvilleCity/scripts.pory"
	.string "THUNDERBOLT!\p"
# 609 "data/maps/MauvilleCity/scripts.pory"
	.string "Go on, you've earned it!$"
# 610 "data/maps/MauvilleCity/scripts.pory"

# 611 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonYoungTakeCharge:
# 612 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
# 613 "data/maps/MauvilleCity/scripts.pory"
	.string "It pleases me to no end to see\n"
# 614 "data/maps/MauvilleCity/scripts.pory"
	.string "the young step up and take charge!$"
# 615 "data/maps/MauvilleCity/scripts.pory"

# 616 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_NurseHurtMonBackToHealth:
# 617 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have POKéMON\n"
# 618 "data/maps/MauvilleCity/scripts.pory"
	.string "battles and stuff…\p"
# 619 "data/maps/MauvilleCity/scripts.pory"
	.string "But if your POKéMON gets hurt,\n"
# 620 "data/maps/MauvilleCity/scripts.pory"
	.string "you have to nurse it back to health.$"
# 621 "data/maps/MauvilleCity/scripts.pory"

# 622 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_AllSortsOfPeopleComeThrough:
# 623 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
# 624 "data/maps/MauvilleCity/scripts.pory"
	.string "and south, and east and west.\p"
# 625 "data/maps/MauvilleCity/scripts.pory"
	.string "Because of that, we get all sorts of\n"
# 626 "data/maps/MauvilleCity/scripts.pory"
	.string "people coming through.$"
# 627 "data/maps/MauvilleCity/scripts.pory"

# 628 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RydelVeryGenerous:
# 629 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to RYDEL'S CYCLES yet?\p"
# 630 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL, the owner, is a very generous\n"
# 631 "data/maps/MauvilleCity/scripts.pory"
	.string "man.$"
# 632 "data/maps/MauvilleCity/scripts.pory"

# 633 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_PokemonCanJumpYouOnBike:
# 634 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a BIKE,\n"
# 635 "data/maps/MauvilleCity/scripts.pory"
	.string "wild POKéMON could jump you.$"
# 636 "data/maps/MauvilleCity/scripts.pory"

# 637 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_CitySign:
# 638 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY\n"
# 639 "data/maps/MauvilleCity/scripts.pory"
	.string "“The bright and shiny city of fun!”$"
# 640 "data/maps/MauvilleCity/scripts.pory"

# 641 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GymSign:
# 642 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\n"
# 643 "data/maps/MauvilleCity/scripts.pory"
	.string "LEADER: WATTSON\l"
# 644 "data/maps/MauvilleCity/scripts.pory"
	.string "“The cheerfully electrifying man!”$"
# 645 "data/maps/MauvilleCity/scripts.pory"

# 646 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BikeShopSign:
# 647 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
# 648 "data/maps/MauvilleCity/scripts.pory"
	.string "soul!”\l"
# 649 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL'S CYCLES$"
# 650 "data/maps/MauvilleCity/scripts.pory"

# 651 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GameCornerSign:
# 652 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
# 653 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE GAME CORNER$"
# 654 "data/maps/MauvilleCity/scripts.pory"

# 655 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ExplainTV:
# 656 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, do you check out TV at all?\p"
# 657 "data/maps/MauvilleCity/scripts.pory"
	.string "They've added a bunch of cool new\n"
# 658 "data/maps/MauvilleCity/scripts.pory"
	.string "shows recently.\p"
# 659 "data/maps/MauvilleCity/scripts.pory"
	.string "TV is so cool. I've seen my friends on\n"
# 660 "data/maps/MauvilleCity/scripts.pory"
	.string "TV just out of the blue.\p"
# 661 "data/maps/MauvilleCity/scripts.pory"
	.string "And, sometimes, they even put you on TV\n"
# 662 "data/maps/MauvilleCity/scripts.pory"
	.string "without telling you.\p"
# 663 "data/maps/MauvilleCity/scripts.pory"
	.string "I wish I would be on TV sometime.\p"
# 664 "data/maps/MauvilleCity/scripts.pory"
	.string "That's why I think you should check\n"
# 665 "data/maps/MauvilleCity/scripts.pory"
	.string "out TVs whenever you can.$"
# 666 "data/maps/MauvilleCity/scripts.pory"

# 667 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BeenCheckingOutTV:
# 668 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"

MauvilleCity_EventScript_GymNPC::
# 672 "data/maps/MauvilleCity/scripts.pory"
	lock
# 673 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, Common_Movement_FacePlayer
# 674 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 12
# 675 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_DacaGone, MSGBOX_NPC
# 676 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 677 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_Text_DacaGone::
# 681 "data/maps/MauvilleCity/scripts.pory"
	.string "What's up, dude?\n Here to challenge the GYM?\p Sorry, the LEADER went to \n RUSTURF TUNNEL.\p I don't when she'll be back.\l Maybe you could go get her for me?$"
