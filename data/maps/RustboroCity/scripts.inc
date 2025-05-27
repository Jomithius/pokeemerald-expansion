# 1 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_BOY, 7
# 2 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_GIRL, 8
# 3 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 9
# 4 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_GRUNT, 10
# 5 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_RIVAL, 14
# 6 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_SCIENTIST, 15
# 7 "data/maps/RustboroCity/scripts.pory"

# 8 "data/maps/RustboroCity/scripts.pory"
RustboroCity_MapScripts::
# 9 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
# 10 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_OnFrame
# 11 "data/maps/RustboroCity/scripts.pory"
	.byte 0
# 12 "data/maps/RustboroCity/scripts.pory"

# 13 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnTransition:
# 14 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 15 "data/maps/RustboroCity/scripts.pory"
    setflag FLAG_HIDE_RUSTBORO_MISA_OUTSIDE
# 16 "data/maps/RustboroCity/scripts.pory"
    setflag FLAG_HIDE_MISA_ROUTE115
# 17 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 18 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_HideMapNamePopup
# 19 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 20 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_PositionScientistForExit
# 21 "data/maps/RustboroCity/scripts.pory"
	end
# 22 "data/maps/RustboroCity/scripts.pory"

# 23 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 24 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 25 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 12, 15
# 26 "data/maps/RustboroCity/scripts.pory"
	end
# 27 "data/maps/RustboroCity/scripts.pory"

# 28 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 29 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 11, 15
# 30 "data/maps/RustboroCity/scripts.pory"
	end
# 31 "data/maps/RustboroCity/scripts.pory"

# 32 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 33 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 34 "data/maps/RustboroCity/scripts.pory"
	return
# 35 "data/maps/RustboroCity/scripts.pory"

# 36 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnFrame:
# 37 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
# 38 "data/maps/RustboroCity/scripts.pory"
	.2byte 0
# 39 "data/maps/RustboroCity/scripts.pory"

# 40 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 41 "data/maps/RustboroCity/scripts.pory"
	lockall
# 42 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 43 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 44 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 45 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 46 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 47 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_SCIENTIST
# 48 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 49 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 50 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 51 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_ExclamationMark
# 52 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 53 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_Delay48
# 54 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 55 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 56 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 57 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 58 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 59 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 60 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 61 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 62 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 63 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 64 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 65 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 66 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 67 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 68 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 69 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 70 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 71 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 72 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 73 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 74 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 75 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 76 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 77 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 78 "data/maps/RustboroCity/scripts.pory"

# 79 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 80 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 81 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 82 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 83 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 84 "data/maps/RustboroCity/scripts.pory"

# 85 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 86 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 87 "data/maps/RustboroCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 88 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 89 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 90 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_PleaseSelectPokenav
# 91 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_PleaseSelectPokenav
# 92 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_PleaseSelectPokenav
# 93 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_PleaseSelectPokenav
# 94 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_PleaseSelectPokenav
# 95 "data/maps/RustboroCity/scripts.pory"
	case 6, RustboroCity_EventScript_PleaseSelectPokenav
# 96 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_PleaseSelectPokenav
# 97 "data/maps/RustboroCity/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_EventScript_PleaseSelectPokenav
# 98 "data/maps/RustboroCity/scripts.pory"
	special OpenPokenavForTutorial
# 99 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 100 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 101 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 102 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 103 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 104 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 105 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 106 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 107 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 108 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_SYS_STAT_EDIT_GET
# 109 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 110 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 1
# 111 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 112 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 113 "data/maps/RustboroCity/scripts.pory"
	end
# 114 "data/maps/RustboroCity/scripts.pory"

# 115 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 116 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 117 "data/maps/RustboroCity/scripts.pory"
	step_end
# 118 "data/maps/RustboroCity/scripts.pory"

# 119 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 120 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 121 "data/maps/RustboroCity/scripts.pory"
	step_end
# 122 "data/maps/RustboroCity/scripts.pory"

# 123 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 124 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 125 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 126 "data/maps/RustboroCity/scripts.pory"
	step_end
# 127 "data/maps/RustboroCity/scripts.pory"

# 128 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 129 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 130 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 131 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 132 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 133 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 134 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 135 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 136 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 137 "data/maps/RustboroCity/scripts.pory"
	step_end
# 138 "data/maps/RustboroCity/scripts.pory"

# 139 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 140 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 141 "data/maps/RustboroCity/scripts.pory"
	step_end
# 142 "data/maps/RustboroCity/scripts.pory"

# 143 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 144 "data/maps/RustboroCity/scripts.pory"
	lock
# 145 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 146 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 147 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 148 "data/maps/RustboroCity/scripts.pory"
	release
# 149 "data/maps/RustboroCity/scripts.pory"
	end
# 150 "data/maps/RustboroCity/scripts.pory"

# 151 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 152 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 153 "data/maps/RustboroCity/scripts.pory"
	release
# 154 "data/maps/RustboroCity/scripts.pory"
	end
# 155 "data/maps/RustboroCity/scripts.pory"

# 156 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 157 "data/maps/RustboroCity/scripts.pory"
	lock
# 158 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 159 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 160 "data/maps/RustboroCity/scripts.pory"
	release
# 161 "data/maps/RustboroCity/scripts.pory"
	end
# 162 "data/maps/RustboroCity/scripts.pory"

# 163 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 164 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 165 "data/maps/RustboroCity/scripts.pory"
	end
# 166 "data/maps/RustboroCity/scripts.pory"

# 167 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 168 "data/maps/RustboroCity/scripts.pory"
	lock
# 169 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 170 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 171 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 172 "data/maps/RustboroCity/scripts.pory"
	release
# 173 "data/maps/RustboroCity/scripts.pory"
	end
# 174 "data/maps/RustboroCity/scripts.pory"

# 175 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 176 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 177 "data/maps/RustboroCity/scripts.pory"
	release
# 178 "data/maps/RustboroCity/scripts.pory"
	end
# 179 "data/maps/RustboroCity/scripts.pory"

# 180 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 181 "data/maps/RustboroCity/scripts.pory"
	lock
# 182 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 183 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 184 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 185 "data/maps/RustboroCity/scripts.pory"
	release
# 186 "data/maps/RustboroCity/scripts.pory"
	end
# 187 "data/maps/RustboroCity/scripts.pory"

# 188 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 189 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 190 "data/maps/RustboroCity/scripts.pory"
	release
# 191 "data/maps/RustboroCity/scripts.pory"
	end
# 192 "data/maps/RustboroCity/scripts.pory"

# 193 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 194 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 195 "data/maps/RustboroCity/scripts.pory"
	end
# 196 "data/maps/RustboroCity/scripts.pory"

# 197 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 198 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 199 "data/maps/RustboroCity/scripts.pory"
	end
# 200 "data/maps/RustboroCity/scripts.pory"

# 201 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 202 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 203 "data/maps/RustboroCity/scripts.pory"
	end
# 204 "data/maps/RustboroCity/scripts.pory"

# 205 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 206 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 207 "data/maps/RustboroCity/scripts.pory"
	end
# 208 "data/maps/RustboroCity/scripts.pory"

# 209 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 210 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 211 "data/maps/RustboroCity/scripts.pory"
	end
# 212 "data/maps/RustboroCity/scripts.pory"

# 213 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 214 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 215 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 216 "data/maps/RustboroCity/scripts.pory"
	end
# 217 "data/maps/RustboroCity/scripts.pory"

# 218 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 219 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 220 "data/maps/RustboroCity/scripts.pory"
	end
# 221 "data/maps/RustboroCity/scripts.pory"

# 222 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 223 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 224 "data/maps/RustboroCity/scripts.pory"
	end
# 225 "data/maps/RustboroCity/scripts.pory"

# 226 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 227 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 228 "data/maps/RustboroCity/scripts.pory"
	end
# 229 "data/maps/RustboroCity/scripts.pory"

# 230 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 231 "data/maps/RustboroCity/scripts.pory"
	lock
# 232 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 233 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 234 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 235 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 236 "data/maps/RustboroCity/scripts.pory"
	release
# 237 "data/maps/RustboroCity/scripts.pory"
	end
# 238 "data/maps/RustboroCity/scripts.pory"

# 239 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 240 "data/maps/RustboroCity/scripts.pory"
	lock
# 241 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 242 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 243 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 244 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 245 "data/maps/RustboroCity/scripts.pory"
	release
# 246 "data/maps/RustboroCity/scripts.pory"
	end
# 247 "data/maps/RustboroCity/scripts.pory"

# 248 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 249 "data/maps/RustboroCity/scripts.pory"
	lock
# 250 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 251 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 252 "data/maps/RustboroCity/scripts.pory"
	release
# 253 "data/maps/RustboroCity/scripts.pory"
	end
# 254 "data/maps/RustboroCity/scripts.pory"

# 255 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 256 "data/maps/RustboroCity/scripts.pory"
	lockall
# 257 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 258 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 259 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 260 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 261 "data/maps/RustboroCity/scripts.pory"
	end
# 262 "data/maps/RustboroCity/scripts.pory"

# 263 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 264 "data/maps/RustboroCity/scripts.pory"
	lockall
# 265 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 266 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 267 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 268 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 269 "data/maps/RustboroCity/scripts.pory"
	end
# 270 "data/maps/RustboroCity/scripts.pory"

# 271 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 272 "data/maps/RustboroCity/scripts.pory"
	lockall
# 273 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 274 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 275 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 276 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 277 "data/maps/RustboroCity/scripts.pory"
	end
# 278 "data/maps/RustboroCity/scripts.pory"

# 279 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 280 "data/maps/RustboroCity/scripts.pory"
	lockall
# 281 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 282 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 283 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 284 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 285 "data/maps/RustboroCity/scripts.pory"
	end
# 286 "data/maps/RustboroCity/scripts.pory"

# 287 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 288 "data/maps/RustboroCity/scripts.pory"
	lockall
# 289 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 290 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 291 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 292 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 293 "data/maps/RustboroCity/scripts.pory"
	end
# 294 "data/maps/RustboroCity/scripts.pory"

# 295 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 296 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 297 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 298 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 299 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_GRUNT
# 300 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_DEVON_EMPLOYEE
# 301 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_GRUNT, RustboroCity_Movement_GruntEscape
# 302 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 303 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_GRUNT
# 304 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 305 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 306 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 307 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 308 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 309 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 310 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 311 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 312 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 30, 10
# 313 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 314 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 315 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 316 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 317 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 318 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 319 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 320 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 321 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 322 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 323 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 324 "data/maps/RustboroCity/scripts.pory"
	end
# 325 "data/maps/RustboroCity/scripts.pory"

# 326 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 327 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 328 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 329 "data/maps/RustboroCity/scripts.pory"
	return
# 330 "data/maps/RustboroCity/scripts.pory"

# 331 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 332 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 333 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 334 "data/maps/RustboroCity/scripts.pory"
	return
# 335 "data/maps/RustboroCity/scripts.pory"

# 336 "data/maps/RustboroCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 337 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 338 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 339 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 340 "data/maps/RustboroCity/scripts.pory"
	return
# 341 "data/maps/RustboroCity/scripts.pory"

# 342 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 343 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 344 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 345 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 346 "data/maps/RustboroCity/scripts.pory"
	return
# 347 "data/maps/RustboroCity/scripts.pory"

# 348 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 349 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 350 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 351 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 352 "data/maps/RustboroCity/scripts.pory"
	return
# 353 "data/maps/RustboroCity/scripts.pory"

# 354 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 355 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 356 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 357 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 358 "data/maps/RustboroCity/scripts.pory"
	return
# 359 "data/maps/RustboroCity/scripts.pory"

# 360 "data/maps/RustboroCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 361 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 362 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 363 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 364 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 365 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 366 "data/maps/RustboroCity/scripts.pory"
	return
# 367 "data/maps/RustboroCity/scripts.pory"

# 368 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 369 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 370 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 371 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 372 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 373 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 374 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 375 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 376 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 377 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 378 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 379 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 380 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 381 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 382 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 383 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 384 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 385 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 386 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 387 "data/maps/RustboroCity/scripts.pory"
	step_end
# 388 "data/maps/RustboroCity/scripts.pory"

# 389 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 390 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 391 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 392 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 393 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 394 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 395 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 396 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 397 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 398 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 399 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 400 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 401 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 402 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 403 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 404 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 405 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 406 "data/maps/RustboroCity/scripts.pory"
	step_end
# 407 "data/maps/RustboroCity/scripts.pory"

# 408 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 409 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 410 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 411 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 412 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 413 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 414 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 415 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 416 "data/maps/RustboroCity/scripts.pory"
	step_end
# 417 "data/maps/RustboroCity/scripts.pory"

# 418 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 419 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 420 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 421 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 422 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 423 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 424 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 425 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 426 "data/maps/RustboroCity/scripts.pory"
	step_end
# 427 "data/maps/RustboroCity/scripts.pory"

# 428 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 429 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 430 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 431 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 432 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 433 "data/maps/RustboroCity/scripts.pory"
	step_end
# 434 "data/maps/RustboroCity/scripts.pory"

# 435 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 436 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
# 437 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 438 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 439 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 440 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 441 "data/maps/RustboroCity/scripts.pory"
	step_end
# 442 "data/maps/RustboroCity/scripts.pory"

# 443 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 444 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 445 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 446 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 447 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 448 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 449 "data/maps/RustboroCity/scripts.pory"
	step_end
# 450 "data/maps/RustboroCity/scripts.pory"

# 451 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 452 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 453 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 454 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 455 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 456 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 457 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 458 "data/maps/RustboroCity/scripts.pory"
	step_end
# 459 "data/maps/RustboroCity/scripts.pory"

# 460 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 461 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 462 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 463 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 464 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 465 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 466 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 467 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 468 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_down
# 469 "data/maps/RustboroCity/scripts.pory"
	step_end
# 470 "data/maps/RustboroCity/scripts.pory"

# 471 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 472 "data/maps/RustboroCity/scripts.pory"
	lock
# 473 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 474 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 475 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 476 "data/maps/RustboroCity/scripts.pory"
	release
# 477 "data/maps/RustboroCity/scripts.pory"
	end
# 478 "data/maps/RustboroCity/scripts.pory"

# 479 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 480 "data/maps/RustboroCity/scripts.pory"
	waitse
# 481 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 482 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 483 "data/maps/RustboroCity/scripts.pory"
	end
# 484 "data/maps/RustboroCity/scripts.pory"

# 485 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 486 "data/maps/RustboroCity/scripts.pory"
	lockall
# 487 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 488 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 489 "data/maps/RustboroCity/scripts.pory"
	end
# 490 "data/maps/RustboroCity/scripts.pory"

# 491 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 492 "data/maps/RustboroCity/scripts.pory"
	lockall
# 493 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 494 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 495 "data/maps/RustboroCity/scripts.pory"
	end
# 496 "data/maps/RustboroCity/scripts.pory"

# 497 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 498 "data/maps/RustboroCity/scripts.pory"
	lockall
# 499 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 500 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 501 "data/maps/RustboroCity/scripts.pory"
	end
# 502 "data/maps/RustboroCity/scripts.pory"

# 503 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 504 "data/maps/RustboroCity/scripts.pory"
	lockall
# 505 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 506 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 507 "data/maps/RustboroCity/scripts.pory"
	end
# 508 "data/maps/RustboroCity/scripts.pory"

# 509 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 510 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 511 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 512 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 513 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 514 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 515 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 516 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_DEVON_EMPLOYEE
# 517 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 518 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 519 "data/maps/RustboroCity/scripts.pory"
	end
# 520 "data/maps/RustboroCity/scripts.pory"

# 521 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 522 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 523 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 524 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 525 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 526 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 527 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 528 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 529 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 530 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 531 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 532 "data/maps/RustboroCity/scripts.pory"
	return
# 533 "data/maps/RustboroCity/scripts.pory"

# 534 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 535 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 536 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 537 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 538 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 539 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 540 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 541 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 542 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 543 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 544 "data/maps/RustboroCity/scripts.pory"
	return
# 545 "data/maps/RustboroCity/scripts.pory"

# 546 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 547 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 548 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 549 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 550 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 551 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 552 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 553 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 554 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 555 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 556 "data/maps/RustboroCity/scripts.pory"
	return
# 557 "data/maps/RustboroCity/scripts.pory"

# 558 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 559 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 560 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 561 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 562 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 563 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 564 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 565 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 566 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 567 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 568 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 569 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 570 "data/maps/RustboroCity/scripts.pory"
	return
# 571 "data/maps/RustboroCity/scripts.pory"

# 572 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 573 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 574 "data/maps/RustboroCity/scripts.pory"
	step_end
# 575 "data/maps/RustboroCity/scripts.pory"

# 576 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 577 "data/maps/RustboroCity/scripts.pory"
	lockall
# 578 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 579 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 580 "data/maps/RustboroCity/scripts.pory"
	end
# 581 "data/maps/RustboroCity/scripts.pory"

# 582 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 583 "data/maps/RustboroCity/scripts.pory"
	lockall
# 584 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 585 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 586 "data/maps/RustboroCity/scripts.pory"
	end
# 587 "data/maps/RustboroCity/scripts.pory"

# 588 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 589 "data/maps/RustboroCity/scripts.pory"
	lockall
# 590 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 591 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 592 "data/maps/RustboroCity/scripts.pory"
	end
# 593 "data/maps/RustboroCity/scripts.pory"

# 594 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 595 "data/maps/RustboroCity/scripts.pory"
	lockall
# 596 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 597 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 598 "data/maps/RustboroCity/scripts.pory"
	end
# 599 "data/maps/RustboroCity/scripts.pory"

# 600 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 601 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 602 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 603 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 604 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 605 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 606 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 607 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 608 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 609 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 610 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 611 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 612 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 613 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 614 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 615 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 616 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 617 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 618 "data/maps/RustboroCity/scripts.pory"
	end
# 619 "data/maps/RustboroCity/scripts.pory"

# 620 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 621 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 622 "data/maps/RustboroCity/scripts.pory"
	return
# 623 "data/maps/RustboroCity/scripts.pory"

# 624 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 625 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 626 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 627 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 628 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 629 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 630 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 631 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 632 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 633 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 634 "data/maps/RustboroCity/scripts.pory"
	return
# 635 "data/maps/RustboroCity/scripts.pory"

# 636 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 637 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 638 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 639 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 640 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 641 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 642 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 643 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 644 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 645 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 646 "data/maps/RustboroCity/scripts.pory"
	return
# 647 "data/maps/RustboroCity/scripts.pory"

# 648 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 649 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 650 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 651 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 652 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 653 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 654 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 655 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 656 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 657 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 658 "data/maps/RustboroCity/scripts.pory"
	return
# 659 "data/maps/RustboroCity/scripts.pory"

# 660 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 661 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 662 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 663 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 664 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 665 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 666 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 667 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 668 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 669 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 670 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 671 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 672 "data/maps/RustboroCity/scripts.pory"
	return
# 673 "data/maps/RustboroCity/scripts.pory"

# 674 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 675 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 676 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 677 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 678 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 679 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 680 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 681 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 682 "data/maps/RustboroCity/scripts.pory"
	return
# 683 "data/maps/RustboroCity/scripts.pory"

# 684 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 685 "data/maps/RustboroCity/scripts.pory"
	lockall
# 686 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 687 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 688 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 689 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 690 "data/maps/RustboroCity/scripts.pory"

# 691 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 692 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 693 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 694 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 695 "data/maps/RustboroCity/scripts.pory"
	return
# 696 "data/maps/RustboroCity/scripts.pory"

# 697 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 698 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 699 "data/maps/RustboroCity/scripts.pory"
	return
# 700 "data/maps/RustboroCity/scripts.pory"

# 701 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 702 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 703 "data/maps/RustboroCity/scripts.pory"
	return
# 704 "data/maps/RustboroCity/scripts.pory"

# 705 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 706 "data/maps/RustboroCity/scripts.pory"
	lockall
# 707 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 708 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 709 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 710 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 711 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 712 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 713 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 714 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 715 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 716 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 717 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 718 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 719 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 720 "data/maps/RustboroCity/scripts.pory"

# 721 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 722 "data/maps/RustboroCity/scripts.pory"
	lockall
# 723 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 724 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 725 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 726 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 727 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 728 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 729 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 730 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 731 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 732 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 733 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 734 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 735 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 736 "data/maps/RustboroCity/scripts.pory"

# 737 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 738 "data/maps/RustboroCity/scripts.pory"
	lockall
# 739 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 740 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 741 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 742 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 743 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 744 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 745 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 746 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 747 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 748 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 749 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 750 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 751 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 752 "data/maps/RustboroCity/scripts.pory"

# 753 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 754 "data/maps/RustboroCity/scripts.pory"
	lockall
# 755 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 756 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 757 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 758 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 759 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 760 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 761 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 762 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 763 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 764 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 765 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 766 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 767 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 768 "data/maps/RustboroCity/scripts.pory"

# 769 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 770 "data/maps/RustboroCity/scripts.pory"
	lockall
# 771 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 772 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 773 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 774 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 775 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 776 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 777 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 778 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 779 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 780 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 781 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 782 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 783 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 784 "data/maps/RustboroCity/scripts.pory"

# 785 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 786 "data/maps/RustboroCity/scripts.pory"
	lockall
# 787 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 788 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 789 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 790 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 791 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 792 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 793 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 794 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 795 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 796 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 797 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 798 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 799 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 800 "data/maps/RustboroCity/scripts.pory"

# 801 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 802 "data/maps/RustboroCity/scripts.pory"
	lockall
# 803 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 804 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 805 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 806 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 807 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 808 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 809 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 810 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 811 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 812 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 813 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 814 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 815 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 816 "data/maps/RustboroCity/scripts.pory"

# 817 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 818 "data/maps/RustboroCity/scripts.pory"
	lockall
# 819 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 820 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 821 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 822 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 823 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 824 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 825 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 826 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 827 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 828 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 829 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 830 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 831 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 832 "data/maps/RustboroCity/scripts.pory"

# 833 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 834 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 835 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
# 836 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
# 837 "data/maps/RustboroCity/scripts.pory"
	end
# 838 "data/maps/RustboroCity/scripts.pory"

# 839 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 840 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 841 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
# 842 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 843 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 844 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 845 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 846 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 847 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 848 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 849 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 850 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 851 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 852 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 853 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 854 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 855 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 856 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 857 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 858 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 859 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 860 "data/maps/RustboroCity/scripts.pory"
	end
# 861 "data/maps/RustboroCity/scripts.pory"

# 862 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle::
# 863 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 864 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 865 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 866 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 867 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 868 "data/maps/RustboroCity/scripts.pory"
	end
# 869 "data/maps/RustboroCity/scripts.pory"

# 870 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay::
# 871 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 872 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 873 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 874 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 875 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 876 "data/maps/RustboroCity/scripts.pory"
	end
# 877 "data/maps/RustboroCity/scripts.pory"

# 878 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 879 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 880 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 881 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 882 "data/maps/RustboroCity/scripts.pory"
	end
# 883 "data/maps/RustboroCity/scripts.pory"

# 884 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 885 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 886 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 887 "data/maps/RustboroCity/scripts.pory"
	return
# 888 "data/maps/RustboroCity/scripts.pory"

# 889 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTreecko::
# 890 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 891 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 892 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 893 "data/maps/RustboroCity/scripts.pory"
	end
# 894 "data/maps/RustboroCity/scripts.pory"

# 895 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTorchic::
# 896 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 897 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 898 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 899 "data/maps/RustboroCity/scripts.pory"
	end
# 900 "data/maps/RustboroCity/scripts.pory"

# 901 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayMudkip::
# 902 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 903 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 904 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 905 "data/maps/RustboroCity/scripts.pory"
	end
# 906 "data/maps/RustboroCity/scripts.pory"

# 907 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 908 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
# 909 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanAskToBattle
# 910 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 911 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 912 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 913 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 914 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 915 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 916 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 917 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 918 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 919 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 920 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 921 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 922 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 923 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 924 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 925 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 926 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 927 "data/maps/RustboroCity/scripts.pory"
	end
# 928 "data/maps/RustboroCity/scripts.pory"

# 929 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle::
# 930 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 931 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 932 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 933 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 934 "data/maps/RustboroCity/scripts.pory"
	end
# 935 "data/maps/RustboroCity/scripts.pory"

# 936 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan::
# 937 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 938 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 939 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 940 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 941 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 942 "data/maps/RustboroCity/scripts.pory"
	end
# 943 "data/maps/RustboroCity/scripts.pory"

# 944 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint::
# 945 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 946 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 947 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 948 "data/maps/RustboroCity/scripts.pory"
	end
# 949 "data/maps/RustboroCity/scripts.pory"

# 950 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko::
# 951 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 952 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 953 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 954 "data/maps/RustboroCity/scripts.pory"
	end
# 955 "data/maps/RustboroCity/scripts.pory"

# 956 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTorchic::
# 957 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
# 958 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 959 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 960 "data/maps/RustboroCity/scripts.pory"
	end
# 961 "data/maps/RustboroCity/scripts.pory"

# 962 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanMudkip::
# 963 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
# 964 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 965 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 966 "data/maps/RustboroCity/scripts.pory"
	end
# 967 "data/maps/RustboroCity/scripts.pory"

# 968 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 969 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 970 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 971 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 972 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 973 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 974 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 975 "data/maps/RustboroCity/scripts.pory"
	step_end
# 976 "data/maps/RustboroCity/scripts.pory"

# 977 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 978 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 979 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 980 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 981 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 982 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 983 "data/maps/RustboroCity/scripts.pory"
	step_end
# 984 "data/maps/RustboroCity/scripts.pory"

# 985 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 986 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 987 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 988 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 989 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 990 "data/maps/RustboroCity/scripts.pory"
	step_end
# 991 "data/maps/RustboroCity/scripts.pory"

# 992 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 993 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 994 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 995 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 996 "data/maps/RustboroCity/scripts.pory"
	step_end
# 997 "data/maps/RustboroCity/scripts.pory"

# 998 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 999 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1000 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1001 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1002 "data/maps/RustboroCity/scripts.pory"

# 1003 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 1004 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1005 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1006 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1007 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1008 "data/maps/RustboroCity/scripts.pory"

# 1009 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 1010 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1011 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1012 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1013 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1014 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1015 "data/maps/RustboroCity/scripts.pory"

# 1016 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 1017 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1018 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1019 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1020 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1021 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1022 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1023 "data/maps/RustboroCity/scripts.pory"

# 1024 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 1025 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 1026 "data/maps/RustboroCity/scripts.pory"
	end
# 1027 "data/maps/RustboroCity/scripts.pory"

# 1028 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 1029 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON CORPORATION…\n"
# 1030 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to DEVON.\p"
# 1031 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 1032 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 1033 "data/maps/RustboroCity/scripts.pory"

# 1034 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 1035 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 1036 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 1037 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 1038 "data/maps/RustboroCity/scripts.pory"

# 1039 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 1040 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the POKéMON GYM\n"
# 1041 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 1042 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny GYM BADGE\n"
# 1043 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess TRAINERS begin to\l"
# 1044 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 1045 "data/maps/RustboroCity/scripts.pory"

# 1046 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 1047 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's RUSTBORO's GYM BADGE!\p"
# 1048 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the POKéMON GYM BADGES,\n"
# 1049 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO's is the coolest, I'd say.$"
# 1050 "data/maps/RustboroCity/scripts.pory"

# 1051 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 1052 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 1053 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 1054 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 1055 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL?$"
# 1056 "data/maps/RustboroCity/scripts.pory"

# 1057 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 1058 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the GYM LEADER, but…\p"
# 1059 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 1060 "data/maps/RustboroCity/scripts.pory"
	.string "my FIRE-type POKéMON…\p"
# 1061 "data/maps/RustboroCity/scripts.pory"
	.string "FIRE-type POKéMON don't match up\n"
# 1062 "data/maps/RustboroCity/scripts.pory"
	.string "well against a firefighter…$"
# 1063 "data/maps/RustboroCity/scripts.pory"

# 1064 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 1065 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1066 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1067 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 1068 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 1069 "data/maps/RustboroCity/scripts.pory"

# 1070 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 1071 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1072 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1073 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 1074 "data/maps/RustboroCity/scripts.pory"
	.string "SLATEPORT for his pet, PEEKO.\p"
# 1075 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 1076 "data/maps/RustboroCity/scripts.pory"
	.string "that PEEKO.$"
# 1077 "data/maps/RustboroCity/scripts.pory"

# 1078 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 1079 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\p"
# 1080 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 1081 "data/maps/RustboroCity/scripts.pory"
	.string "places with POKéMON, too.$"
# 1082 "data/maps/RustboroCity/scripts.pory"

# 1083 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 1084 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL!\p"
# 1085 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 1086 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare POKéMON easily?$"
# 1087 "data/maps/RustboroCity/scripts.pory"

# 1088 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 1089 "data/maps/RustboroCity/scripts.pory"
	.string "If a POKéMON gains experience in\n"
# 1090 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 1091 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 1092 "data/maps/RustboroCity/scripts.pory"

# 1093 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 1094 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON changes shape?\n"
# 1095 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 1096 "data/maps/RustboroCity/scripts.pory"

# 1097 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 1098 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON you get in a trade from\n"
# 1099 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 1100 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain GYM\n"
# 1101 "data/maps/RustboroCity/scripts.pory"
	.string "BADGES, it may not obey you…$"
# 1102 "data/maps/RustboroCity/scripts.pory"

# 1103 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 1104 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 1105 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 1106 "data/maps/RustboroCity/scripts.pory"

# 1107 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 1108 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 1109 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my GOODS!$"
# 1110 "data/maps/RustboroCity/scripts.pory"

# 1111 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 1112 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 1113 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic TRAINER who\n"
# 1114 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in PETALBURG WOODS!\p"
# 1115 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by TEAM AQUA!\n"
# 1116 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the DEVON GOODS back!\p"
# 1117 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 1118 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 1119 "data/maps/RustboroCity/scripts.pory"

# 1120 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 1121 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 1122 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 1123 "data/maps/RustboroCity/scripts.pory"

# 1124 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 1125 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 1126 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON GOODS?\p"
# 1127 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 1128 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 1129 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great TRAINER!\p"
# 1130 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 1131 "data/maps/RustboroCity/scripts.pory"
	.string "another GREAT BALL!$"
# 1132 "data/maps/RustboroCity/scripts.pory"

# 1133 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 1134 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 1135 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 1136 "data/maps/RustboroCity/scripts.pory"

# 1137 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1138 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 1139 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 1140 "data/maps/RustboroCity/scripts.pory"

# 1141 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister:
# 1142 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1143 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1144 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV!\p"
# 1145 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1146 "data/maps/RustboroCity/scripts.pory"
	.string "contact one another anytime!\p"
# 1147 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1148 "data/maps/RustboroCity/scripts.pory"

# 1149 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredMay:
# 1150 "data/maps/RustboroCity/scripts.pory"
	.string "Registered MAY\n"
# 1151 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1152 "data/maps/RustboroCity/scripts.pory"

# 1153 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayPassedBrineyWantToBattle:
# 1154 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, I passed\n"
# 1155 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY in PETALBURG WOODS.\p"
# 1156 "data/maps/RustboroCity/scripts.pory"
	.string "I guess he's on his way home to his\n"
# 1157 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1158 "data/maps/RustboroCity/scripts.pory"
	.string "How's your POKéDEX coming along,\n"
# 1159 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
# 1160 "data/maps/RustboroCity/scripts.pory"
	.string "So…\n"
# 1161 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle?$"
# 1162 "data/maps/RustboroCity/scripts.pory"

# 1163 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayOhHaventRaisedPokemonEnough:
# 1164 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1165 "data/maps/RustboroCity/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1166 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON very much?\p"
# 1167 "data/maps/RustboroCity/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1168 "data/maps/RustboroCity/scripts.pory"

# 1169 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayWantToBattle:
# 1170 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1171 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle here?$"
# 1172 "data/maps/RustboroCity/scripts.pory"

# 1173 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayImNotGoingToLose:
# 1174 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1175 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1176 "data/maps/RustboroCity/scripts.pory"

# 1177 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayDefeat:
# 1178 "data/maps/RustboroCity/scripts.pory"
	.string "Yikes!\n"
# 1179 "data/maps/RustboroCity/scripts.pory"
	.string "You're better than I expected!$"
# 1180 "data/maps/RustboroCity/scripts.pory"

# 1181 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint:
# 1182 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, MR. BRINEY, who\n"
# 1183 "data/maps/RustboroCity/scripts.pory"
	.string "I just passed…\p"
# 1184 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
# 1185 "data/maps/RustboroCity/scripts.pory"
	.string "might not know this, but MR. BRINEY\l"
# 1186 "data/maps/RustboroCity/scripts.pory"
	.string "was once a revered seafarer.$"
# 1187 "data/maps/RustboroCity/scripts.pory"

# 1188 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister:
# 1189 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1190 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1191 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV! Cool!\p"
# 1192 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1193 "data/maps/RustboroCity/scripts.pory"
	.string "get in touch anytime!\p"
# 1194 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1195 "data/maps/RustboroCity/scripts.pory"

# 1196 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan:
# 1197 "data/maps/RustboroCity/scripts.pory"
	.string "Registered BRENDAN\n"
# 1198 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1199 "data/maps/RustboroCity/scripts.pory"

# 1200 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanPassedBrineyWantToBattle:
# 1201 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, {PLAYER}, I walked\n"
# 1202 "data/maps/RustboroCity/scripts.pory"
	.string "by MR. BRINEY in PETALBURG WOODS.\p"
# 1203 "data/maps/RustboroCity/scripts.pory"
	.string "I bet he was on his way home to his\n"
# 1204 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1205 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, how's your POKéDEX?\n"
# 1206 "data/maps/RustboroCity/scripts.pory"
	.string "Have you filled in any pages yet?\p"
# 1207 "data/maps/RustboroCity/scripts.pory"
	.string "Mine rules.\p"
# 1208 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle to test how\n"
# 1209 "data/maps/RustboroCity/scripts.pory"
	.string "far you've progressed?$"
# 1210 "data/maps/RustboroCity/scripts.pory"

# 1211 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanNoConfidenceInPokemon:
# 1212 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1213 "data/maps/RustboroCity/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1214 "data/maps/RustboroCity/scripts.pory"

# 1215 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanWantToBattle:
# 1216 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1217 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle with me?$"
# 1218 "data/maps/RustboroCity/scripts.pory"

# 1219 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanIWontGoEasy:
# 1220 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1221 "data/maps/RustboroCity/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1222 "data/maps/RustboroCity/scripts.pory"

# 1223 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanDefeat:
# 1224 "data/maps/RustboroCity/scripts.pory"
	.string "Hmm…\n"
# 1225 "data/maps/RustboroCity/scripts.pory"
	.string "You're pretty good.$"
# 1226 "data/maps/RustboroCity/scripts.pory"

# 1227 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint:
# 1228 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, you know\n"
# 1229 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY? The guy I just passed?\p"
# 1230 "data/maps/RustboroCity/scripts.pory"
	.string "I bet you didn't know this, since you\n"
# 1231 "data/maps/RustboroCity/scripts.pory"
	.string "just moved here, {PLAYER}, but\l"
# 1232 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY was once a great sailor.$"
# 1233 "data/maps/RustboroCity/scripts.pory"

# 1234 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1235 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1236 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 1237 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1238 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1239 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 1240 "data/maps/RustboroCity/scripts.pory"

# 1241 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1242 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORPORATION\p"
# 1243 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1244 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 1245 "data/maps/RustboroCity/scripts.pory"

# 1246 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1247 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\n"
# 1248 "data/maps/RustboroCity/scripts.pory"
	.string "LEADER: STEVE\p"
# 1249 "data/maps/RustboroCity/scripts.pory"
	.string "“The firefighting genius!”$"
# 1250 "data/maps/RustboroCity/scripts.pory"

# 1251 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1252 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORP. BRANCH OFFICE\p"
# 1253 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to DEVON employees\n"
# 1254 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1255 "data/maps/RustboroCity/scripts.pory"

# 1256 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1257 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY\p"
# 1258 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1259 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 1260 "data/maps/RustboroCity/scripts.pory"

# 1261 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1262 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL\p"
# 1263 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1264 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON!”$"
# 1265 "data/maps/RustboroCity/scripts.pory"

# 1266 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1267 "data/maps/RustboroCity/scripts.pory"
	.string "CUTTER'S HOUSE$"
# 1268 "data/maps/RustboroCity/scripts.pory"

# 1269 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1270 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing new features\n"
# 1271 "data/maps/RustboroCity/scripts.pory"
	.string "for the POKéNAV…\p"
# 1272 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 1273 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, may I see that POKéNAV?\n"
# 1274 "data/maps/RustboroCity/scripts.pory"
	.string "The one our PRESIDENT gave you?$"
# 1275 "data/maps/RustboroCity/scripts.pory"

# 1276 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1277 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 1278 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 1279 "data/maps/RustboroCity/scripts.pory"
	.string "MATCH CALL to your POKéNAV.\p"
# 1280 "data/maps/RustboroCity/scripts.pory"
	.string "Using the MATCH CALL feature,\n"
# 1281 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 1282 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your POKéNAV.\p"
# 1283 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
# 1284 "data/maps/RustboroCity/scripts.pory"
	.string "be registered in your POKéNAV.\p"
# 1285 "data/maps/RustboroCity/scripts.pory"
	.string "Test it out.\n"
# 1286 "data/maps/RustboroCity/scripts.pory"
	.string "Please give our PRESIDENT a call.$"
# 1287 "data/maps/RustboroCity/scripts.pory"

# 1288 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1289 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the POKéNAV.$"
# 1290 "data/maps/RustboroCity/scripts.pory"

# 1291 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1292 "data/maps/RustboroCity/scripts.pory"
	.string "I also added another feature named\n"
# 1293 "data/maps/RustboroCity/scripts.pory"
	.string "EDIT STATS to your POKéNAV.\p"
# 1294 "data/maps/RustboroCity/scripts.pory"
	.string "You can use it to edit the IVs\n"
# 1295 "data/maps/RustboroCity/scripts.pory"
	.string "and EVs of your POKéMON.\p"
# 1296 "data/maps/RustboroCity/scripts.pory"
	.string "To use it, just select a POKéMON\n"
# 1297 "data/maps/RustboroCity/scripts.pory"
	.string "from within the party menu.\p"
# 1298 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 1299 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 1300 "data/maps/RustboroCity/scripts.pory"

# 1301 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1302 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 1303 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 1304 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another TRAINER.\p"
# 1305 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two TRAINERS\n"
# 1306 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more POKéMON,\l"
# 1307 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1308 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1309 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two TRAINERS by yourself?$"

RustboroCity_EventScript_Misa::
# 1313 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1314 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1315 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1316 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroPlayerStepBack
# 1317 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1318 "data/maps/RustboroCity/scripts.pory"
	opendoor 16, 38
# 1319 "data/maps/RustboroCity/scripts.pory"
	waitdooranim
# 1320 "data/maps/RustboroCity/scripts.pory"
	addobject 17
# 1321 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroCity_Movement_PlayerWalkDown
# 1322 "data/maps/RustboroCity/scripts.pory"
	waitmovement 17
# 1323 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 1324 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_MISA_OUTSIDE
# 1325 "data/maps/RustboroCity/scripts.pory"
	closedoor 16, 38
# 1326 "data/maps/RustboroCity/scripts.pory"
	waitdooranim
# 1327 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 1328 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1329 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroExclaim
# 1330 "data/maps/RustboroCity/scripts.pory"
	waitmovement 17
# 1331 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 1332 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_MISA_THEME, FALSE
# 1333 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 1334 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroMisa1, MSGBOX_AUTOCLOSE
# 1335 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1336 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroMisa2, MSGBOX_AUTOCLOSE
# 1337 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1338 "data/maps/RustboroCity/scripts.pory"
	goto MisaPlayerMeetRival
	return


MisaPlayerMeetRival::
# 1342 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroMisa4, MSGBOX_YESNO
# 1343 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MisaPlayerMeetRival_2
MisaPlayerMeetRival_1:
# 1346 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MisaPlayerMeetRival_4
	return

MisaPlayerMeetRival_2:
# 1344 "data/maps/RustboroCity/scripts.pory"
	goto MisaAgreeMeetRival
	goto MisaPlayerMeetRival_1

MisaPlayerMeetRival_4:
# 1347 "data/maps/RustboroCity/scripts.pory"
	goto MisaDeclineMeetRival
	return


MisaAgreeMeetRival::
# 1353 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroMisaIfYes, MSGBOX_AUTOCLOSE
# 1354 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1355 "data/maps/RustboroCity/scripts.pory"
	call MisaEnd
# 1356 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 1357 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 1358 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end


MisaDeclineMeetRival::
# 1363 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroMisaIfNo, MSGBOX_YESNO
# 1364 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MisaDeclineMeetRival_2
MisaDeclineMeetRival_1:
# 1367 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MisaDeclineMeetRival_4
	return

MisaDeclineMeetRival_2:
# 1365 "data/maps/RustboroCity/scripts.pory"
	goto MisaAgreeMeetRival
	goto MisaDeclineMeetRival_1

MisaDeclineMeetRival_4:
# 1368 "data/maps/RustboroCity/scripts.pory"
	goto MisaDeclineMeetRival
	return


MisaEnd::
# 1373 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MISA_RUSTBORO_GYM_TRIGGER, MisaEnd_1
# 1395 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1396 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroExclaim
# 1397 "data/maps/RustboroCity/scripts.pory"
	waitmovement 17
# 1398 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 1399 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroMisa5, MSGBOX_AUTOCLOSE
# 1400 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1401 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroMisaLeave1
# 1402 "data/maps/RustboroCity/scripts.pory"
	waitmovement 17
# 1403 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroFaceRight
# 1404 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1405 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroMisaLeave2
# 1406 "data/maps/RustboroCity/scripts.pory"
	waitmovement 17
# 1407 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 1408 "data/maps/RustboroCity/scripts.pory"
	removeobject 17
# 1409 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 1410 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_MISA_OUTSIDE
# 1411 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_MISA_STATE, 1
	return

MisaEnd_1:
# 1374 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1375 "data/maps/RustboroCity/scripts.pory"
	applymovement 18, RustboroExclaim
# 1376 "data/maps/RustboroCity/scripts.pory"
	waitmovement 18
# 1377 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 1378 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroMisa5, MSGBOX_AUTOCLOSE
# 1379 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1380 "data/maps/RustboroCity/scripts.pory"
	applymovement 18, RustboroMisaLeaveGym1
# 1381 "data/maps/RustboroCity/scripts.pory"
	waitmovement 18
# 1382 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroFaceLeft
# 1383 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1384 "data/maps/RustboroCity/scripts.pory"
	applymovement 18, RustboroMisaLeaveGym2
# 1385 "data/maps/RustboroCity/scripts.pory"
	waitmovement 18
# 1386 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 1387 "data/maps/RustboroCity/scripts.pory"
	removeobject 18
# 1388 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 1389 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_MISA_OUTSIDE
# 1390 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_MISA_STATE, 1
	return


RustboroCity_Eventscript_Promise_To_Misa::
# 1417 "data/maps/RustboroCity/scripts.pory"
	lock
# 1418 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Eventscript_Promise_To_Misa_Text_0, MSGBOX_AUTOCLOSE
# 1420 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1421 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 1422 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1423 "data/maps/RustboroCity/scripts.pory"
	release
	end


RustboroCityGym_EventScript_Misa::
# 1428 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MISA_RUSTBORO_GYM_TRIGGER
# 1429 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1430 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1431 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1432 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroPlayerStepBack
# 1433 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1434 "data/maps/RustboroCity/scripts.pory"
	opendoor 27, 19
# 1435 "data/maps/RustboroCity/scripts.pory"
	waitdooranim
# 1436 "data/maps/RustboroCity/scripts.pory"
	addobject 18
# 1437 "data/maps/RustboroCity/scripts.pory"
	applymovement 18, RustboroCity_Movement_PlayerWalkDown
# 1438 "data/maps/RustboroCity/scripts.pory"
	waitmovement 18
# 1439 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 1440 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_MISA_OUTSIDE
# 1441 "data/maps/RustboroCity/scripts.pory"
	closedoor 27, 19
# 1442 "data/maps/RustboroCity/scripts.pory"
	waitdooranim
# 1443 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 1444 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1445 "data/maps/RustboroCity/scripts.pory"
	applymovement 18, RustboroExclaim
# 1446 "data/maps/RustboroCity/scripts.pory"
	waitmovement 18
# 1447 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 1448 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_MISA_THEME, FALSE
# 1449 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 1450 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroMisa1, MSGBOX_AUTOCLOSE
# 1451 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1452 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroMisa2, MSGBOX_AUTOCLOSE
# 1453 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1454 "data/maps/RustboroCity/scripts.pory"
	goto MisaPlayerMeetRival
	return


RustboroCity_LunaDexNav::
# 1490 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1491 "data/maps/RustboroCity/scripts.pory"
	pokenavcall Route104_LunaDexNavText
# 1492 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1493 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 1494 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 2
# 1495 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_NPC_LUNA_HOUSE_PETALBURG
# 1496 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_NPC_RATDUARDO_SIDEQUEST
# 1497 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end


# 1513 "data/maps/RustboroCity/scripts.pory"
RustboroExclaim:
# 1513 "data/maps/RustboroCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 1515 "data/maps/RustboroCity/scripts.pory"
RustboroFaceLeft:
# 1515 "data/maps/RustboroCity/scripts.pory"
	face_left
	step_end

# 1517 "data/maps/RustboroCity/scripts.pory"
RustboroFaceRight:
# 1518 "data/maps/RustboroCity/scripts.pory"
	face_right
	step_end

# 1521 "data/maps/RustboroCity/scripts.pory"
RustboroFaceUp:
# 1522 "data/maps/RustboroCity/scripts.pory"
	face_up
	step_end

# 1525 "data/maps/RustboroCity/scripts.pory"
RustboroMisaLeave1:
# 1526 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1527 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

# 1530 "data/maps/RustboroCity/scripts.pory"
RustboroMisaLeave2:
# 1531 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1531 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1531 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1532 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1532 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1532 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1532 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1532 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1532 "data/maps/RustboroCity/scripts.pory"
	walk_up
	step_end

# 1535 "data/maps/RustboroCity/scripts.pory"
RustboroMisaLeaveGym1:
# 1536 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1537 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

# 1540 "data/maps/RustboroCity/scripts.pory"
RustboroMisaLeaveGym2:
# 1541 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1541 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1541 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1541 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1541 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1541 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1541 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1541 "data/maps/RustboroCity/scripts.pory"
	walk_left
	step_end

# 1544 "data/maps/RustboroCity/scripts.pory"
RustboroPlayerStepBack:
# 1545 "data/maps/RustboroCity/scripts.pory"
	lock_facing_direction
# 1546 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1547 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 1548 "data/maps/RustboroCity/scripts.pory"
	unlock_facing_direction
	step_end

RustboroCity_Eventscript_Promise_To_Misa_Text_0:
# 1418 "data/maps/RustboroCity/scripts.pory"
	.string "I should probably keep my promise to\n MISA...$"

RustboroMisa1::
# 1457 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! Excuse me. I didn't see you there.\l It's nice to meet you.\n My name's MISA.$"

RustboroMisa2::
# 1461 "data/maps/RustboroCity/scripts.pory"
	.string "MISA: That POKéMON.. So cute!\n So you're a new trainer? That's great!\l  It looks like you're already raising\l  your POKéMON with love and care.\p I actually have a son around the\n same age as you.\l He's also starting his journey soon.\l He should be on ROUTE 115 preparing.$"

RustboroMisa3::
# 1470 "data/maps/RustboroCity/scripts.pory"
	.string "I actually have a son around the\n same age as you.\l He's also starting his journey soon.\l He should be on ROUTE 115 preparing.$"

RustboroMisa4::
# 1475 "data/maps/RustboroCity/scripts.pory"
	.string "Could you do me a favor and go\n meet him? He's always been a bit...\l different and could use a new friend.$"

RustboroMisaIfYes::
# 1479 "data/maps/RustboroCity/scripts.pory"
	.string "MISA: Thank you! You're so sweet.\n Just head north to get to ROUTE 115.$"

RustboroMisaIfNo::
# 1482 "data/maps/RustboroCity/scripts.pory"
	.string "MISA: Oh... Please don't be like that.\n Would you reconsider?$"

RustboroMisa5::
# 1485 "data/maps/RustboroCity/scripts.pory"
	.string "MISA: Oh! I'm almost late for the\n meeting! I have to go.\l It was nice meeting you, {PLAYER}!$"

RustboroCity_LunaDexNavText::
# 1501 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …\n … … … … … Beep!\p {PLAYER}? It's LUNA.\n Are you still in the area?\p I need a favor. Meet me in front of\n my house in PETALBURG.\p It's the one north of the POKéMON\n CENTER.\p … … … … … …\n … … … … … Click!$"
