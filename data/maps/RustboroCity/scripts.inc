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
	clearflag FLAG_SYS_DYNAMIC_LEVELS
# 15 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 16 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 17 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_HideMapNamePopup
# 18 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 19 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_PositionScientistForExit
# 20 "data/maps/RustboroCity/scripts.pory"
	end
# 21 "data/maps/RustboroCity/scripts.pory"

# 22 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 23 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 24 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 12, 15
# 25 "data/maps/RustboroCity/scripts.pory"
	end
# 26 "data/maps/RustboroCity/scripts.pory"

# 27 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 28 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 11, 15
# 29 "data/maps/RustboroCity/scripts.pory"
	end
# 30 "data/maps/RustboroCity/scripts.pory"

# 31 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 32 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 33 "data/maps/RustboroCity/scripts.pory"
	return
# 34 "data/maps/RustboroCity/scripts.pory"

# 35 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnFrame:
# 36 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
# 37 "data/maps/RustboroCity/scripts.pory"
	.2byte 0
# 38 "data/maps/RustboroCity/scripts.pory"

# 39 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 40 "data/maps/RustboroCity/scripts.pory"
	lockall
# 41 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 42 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 43 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 44 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 45 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 46 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_SCIENTIST
# 47 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 48 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 49 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 50 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_ExclamationMark
# 51 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 52 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_Delay48
# 53 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 54 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 55 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 56 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 57 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 58 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 59 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 60 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 61 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 62 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 63 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 64 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 65 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 66 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 67 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 68 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 69 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 70 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 71 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 72 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 73 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 74 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 75 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 76 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 77 "data/maps/RustboroCity/scripts.pory"

# 78 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 79 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 80 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 81 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 82 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 83 "data/maps/RustboroCity/scripts.pory"

# 84 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 85 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 86 "data/maps/RustboroCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 87 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 88 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 89 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_PleaseSelectPokenav
# 90 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_PleaseSelectPokenav
# 91 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_PleaseSelectPokenav
# 92 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_PleaseSelectPokenav
# 93 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_PleaseSelectPokenav
# 94 "data/maps/RustboroCity/scripts.pory"
	case 6, RustboroCity_EventScript_PleaseSelectPokenav
# 95 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_PleaseSelectPokenav
# 96 "data/maps/RustboroCity/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_EventScript_PleaseSelectPokenav
# 97 "data/maps/RustboroCity/scripts.pory"
	special OpenPokenavForTutorial
# 98 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 99 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 100 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedStatEdits, MSGBOX_YESNO
# 101 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 102 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, RustboroCity_EventScript_ExplainIVsEVs
# 103 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 104 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 105 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 106 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 107 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 108 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 109 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 110 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_SYS_STAT_EDIT_GET
# 111 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 112 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 1
# 113 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 114 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 115 "data/maps/RustboroCity/scripts.pory"
	end
# 116 "data/maps/RustboroCity/scripts.pory"

# 117 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 118 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 119 "data/maps/RustboroCity/scripts.pory"
	step_end
# 120 "data/maps/RustboroCity/scripts.pory"

# 121 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 122 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 123 "data/maps/RustboroCity/scripts.pory"
	step_end
# 124 "data/maps/RustboroCity/scripts.pory"

# 125 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 126 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 127 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 128 "data/maps/RustboroCity/scripts.pory"
	step_end
# 129 "data/maps/RustboroCity/scripts.pory"

# 130 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 131 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 132 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 133 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 134 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 135 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 136 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 137 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 138 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 139 "data/maps/RustboroCity/scripts.pory"
	step_end
# 140 "data/maps/RustboroCity/scripts.pory"

# 141 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 142 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 143 "data/maps/RustboroCity/scripts.pory"
	step_end
# 144 "data/maps/RustboroCity/scripts.pory"

# 145 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 146 "data/maps/RustboroCity/scripts.pory"
	lock
# 147 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 148 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 149 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 150 "data/maps/RustboroCity/scripts.pory"
	release
# 151 "data/maps/RustboroCity/scripts.pory"
	end
# 152 "data/maps/RustboroCity/scripts.pory"

# 153 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 154 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 155 "data/maps/RustboroCity/scripts.pory"
	release
# 156 "data/maps/RustboroCity/scripts.pory"
	end
# 157 "data/maps/RustboroCity/scripts.pory"

# 158 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 159 "data/maps/RustboroCity/scripts.pory"
	lock
# 160 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 161 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 162 "data/maps/RustboroCity/scripts.pory"
	release
# 163 "data/maps/RustboroCity/scripts.pory"
	end
# 164 "data/maps/RustboroCity/scripts.pory"

# 165 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 166 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 167 "data/maps/RustboroCity/scripts.pory"
	end
# 168 "data/maps/RustboroCity/scripts.pory"

# 169 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 170 "data/maps/RustboroCity/scripts.pory"
	lock
# 171 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 172 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 173 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 174 "data/maps/RustboroCity/scripts.pory"
	release
# 175 "data/maps/RustboroCity/scripts.pory"
	end
# 176 "data/maps/RustboroCity/scripts.pory"

# 177 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 178 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 179 "data/maps/RustboroCity/scripts.pory"
	release
# 180 "data/maps/RustboroCity/scripts.pory"
	end
# 181 "data/maps/RustboroCity/scripts.pory"

# 182 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 183 "data/maps/RustboroCity/scripts.pory"
	lock
# 184 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 185 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 186 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 187 "data/maps/RustboroCity/scripts.pory"
	release
# 188 "data/maps/RustboroCity/scripts.pory"
	end
# 189 "data/maps/RustboroCity/scripts.pory"

# 190 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 191 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 192 "data/maps/RustboroCity/scripts.pory"
	release
# 193 "data/maps/RustboroCity/scripts.pory"
	end
# 194 "data/maps/RustboroCity/scripts.pory"

# 195 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 196 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 197 "data/maps/RustboroCity/scripts.pory"
	end
# 198 "data/maps/RustboroCity/scripts.pory"

# 199 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 200 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 201 "data/maps/RustboroCity/scripts.pory"
	end
# 202 "data/maps/RustboroCity/scripts.pory"

# 203 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 204 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 205 "data/maps/RustboroCity/scripts.pory"
	end
# 206 "data/maps/RustboroCity/scripts.pory"

# 207 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 208 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 209 "data/maps/RustboroCity/scripts.pory"
	end
# 210 "data/maps/RustboroCity/scripts.pory"

# 211 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 212 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 213 "data/maps/RustboroCity/scripts.pory"
	end
# 214 "data/maps/RustboroCity/scripts.pory"

# 215 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 216 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 217 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 218 "data/maps/RustboroCity/scripts.pory"
	end
# 219 "data/maps/RustboroCity/scripts.pory"

# 220 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 221 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 222 "data/maps/RustboroCity/scripts.pory"
	end
# 223 "data/maps/RustboroCity/scripts.pory"

# 224 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 225 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 226 "data/maps/RustboroCity/scripts.pory"
	end
# 227 "data/maps/RustboroCity/scripts.pory"

# 228 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 229 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 230 "data/maps/RustboroCity/scripts.pory"
	end
# 231 "data/maps/RustboroCity/scripts.pory"

# 232 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 233 "data/maps/RustboroCity/scripts.pory"
	lock
# 234 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 235 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 236 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 237 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 238 "data/maps/RustboroCity/scripts.pory"
	release
# 239 "data/maps/RustboroCity/scripts.pory"
	end
# 240 "data/maps/RustboroCity/scripts.pory"

# 241 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 242 "data/maps/RustboroCity/scripts.pory"
	lock
# 243 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 244 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 245 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 246 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 247 "data/maps/RustboroCity/scripts.pory"
	release
# 248 "data/maps/RustboroCity/scripts.pory"
	end
# 249 "data/maps/RustboroCity/scripts.pory"

# 250 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 251 "data/maps/RustboroCity/scripts.pory"
	lock
# 252 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 253 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 254 "data/maps/RustboroCity/scripts.pory"
	release
# 255 "data/maps/RustboroCity/scripts.pory"
	end
# 256 "data/maps/RustboroCity/scripts.pory"

# 257 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 258 "data/maps/RustboroCity/scripts.pory"
	lockall
# 259 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 260 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 261 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 262 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 263 "data/maps/RustboroCity/scripts.pory"
	end
# 264 "data/maps/RustboroCity/scripts.pory"

# 265 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 266 "data/maps/RustboroCity/scripts.pory"
	lockall
# 267 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 268 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 269 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 270 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 271 "data/maps/RustboroCity/scripts.pory"
	end
# 272 "data/maps/RustboroCity/scripts.pory"

# 273 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 274 "data/maps/RustboroCity/scripts.pory"
	lockall
# 275 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 276 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 277 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 278 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 279 "data/maps/RustboroCity/scripts.pory"
	end
# 280 "data/maps/RustboroCity/scripts.pory"

# 281 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 282 "data/maps/RustboroCity/scripts.pory"
	lockall
# 283 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 284 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 285 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 286 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 287 "data/maps/RustboroCity/scripts.pory"
	end
# 288 "data/maps/RustboroCity/scripts.pory"

# 289 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 290 "data/maps/RustboroCity/scripts.pory"
	lockall
# 291 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 292 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 293 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 294 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 295 "data/maps/RustboroCity/scripts.pory"
	end
# 296 "data/maps/RustboroCity/scripts.pory"

# 297 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 298 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 299 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 300 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 301 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_GRUNT
# 302 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_DEVON_EMPLOYEE
# 303 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_GRUNT, RustboroCity_Movement_GruntEscape
# 304 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 305 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_GRUNT
# 306 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 307 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 308 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 309 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 310 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 311 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 312 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 313 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 314 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 30, 10
# 315 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 316 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 317 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 318 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 319 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 320 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 321 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 322 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 323 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 324 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 325 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 326 "data/maps/RustboroCity/scripts.pory"
	end
# 327 "data/maps/RustboroCity/scripts.pory"

# 328 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 329 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 330 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 331 "data/maps/RustboroCity/scripts.pory"
	return
# 332 "data/maps/RustboroCity/scripts.pory"

# 333 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 334 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 335 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 336 "data/maps/RustboroCity/scripts.pory"
	return
# 337 "data/maps/RustboroCity/scripts.pory"

# 338 "data/maps/RustboroCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 339 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 340 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 341 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 342 "data/maps/RustboroCity/scripts.pory"
	return
# 343 "data/maps/RustboroCity/scripts.pory"

# 344 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 345 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 346 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 347 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 348 "data/maps/RustboroCity/scripts.pory"
	return
# 349 "data/maps/RustboroCity/scripts.pory"

# 350 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 351 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 352 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 353 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 354 "data/maps/RustboroCity/scripts.pory"
	return
# 355 "data/maps/RustboroCity/scripts.pory"

# 356 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 357 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 358 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 359 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 360 "data/maps/RustboroCity/scripts.pory"
	return
# 361 "data/maps/RustboroCity/scripts.pory"

# 362 "data/maps/RustboroCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 363 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 364 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 365 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 366 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 367 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 368 "data/maps/RustboroCity/scripts.pory"
	return
# 369 "data/maps/RustboroCity/scripts.pory"

# 370 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 371 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 372 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 373 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 374 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 375 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 376 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 377 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
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
	walk_fast_up
# 388 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 389 "data/maps/RustboroCity/scripts.pory"
	step_end
# 390 "data/maps/RustboroCity/scripts.pory"

# 391 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 392 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 393 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 394 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 395 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 396 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 397 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 398 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
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
	walk_fast_up
# 407 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 408 "data/maps/RustboroCity/scripts.pory"
	step_end
# 409 "data/maps/RustboroCity/scripts.pory"

# 410 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 411 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 412 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 413 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 414 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 415 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 416 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 417 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 418 "data/maps/RustboroCity/scripts.pory"
	step_end
# 419 "data/maps/RustboroCity/scripts.pory"

# 420 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
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
	walk_up
# 427 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 428 "data/maps/RustboroCity/scripts.pory"
	step_end
# 429 "data/maps/RustboroCity/scripts.pory"

# 430 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 431 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 432 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 433 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 434 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 435 "data/maps/RustboroCity/scripts.pory"
	step_end
# 436 "data/maps/RustboroCity/scripts.pory"

# 437 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 438 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
# 439 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 440 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 441 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 442 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 443 "data/maps/RustboroCity/scripts.pory"
	step_end
# 444 "data/maps/RustboroCity/scripts.pory"

# 445 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 446 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 447 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 448 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 449 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 450 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 451 "data/maps/RustboroCity/scripts.pory"
	step_end
# 452 "data/maps/RustboroCity/scripts.pory"

# 453 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 454 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 455 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 456 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 457 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 458 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 459 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 460 "data/maps/RustboroCity/scripts.pory"
	step_end
# 461 "data/maps/RustboroCity/scripts.pory"

# 462 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 463 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 464 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 465 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 466 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 467 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 468 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 469 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 470 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_down
# 471 "data/maps/RustboroCity/scripts.pory"
	step_end
# 472 "data/maps/RustboroCity/scripts.pory"

# 473 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 474 "data/maps/RustboroCity/scripts.pory"
	lock
# 475 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 476 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 477 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 478 "data/maps/RustboroCity/scripts.pory"
	release
# 479 "data/maps/RustboroCity/scripts.pory"
	end
# 480 "data/maps/RustboroCity/scripts.pory"

# 481 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 482 "data/maps/RustboroCity/scripts.pory"
	waitse
# 483 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 484 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 485 "data/maps/RustboroCity/scripts.pory"
	end
# 486 "data/maps/RustboroCity/scripts.pory"

# 487 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 488 "data/maps/RustboroCity/scripts.pory"
	lockall
# 489 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 490 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 491 "data/maps/RustboroCity/scripts.pory"
	end
# 492 "data/maps/RustboroCity/scripts.pory"

# 493 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 494 "data/maps/RustboroCity/scripts.pory"
	lockall
# 495 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 496 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 497 "data/maps/RustboroCity/scripts.pory"
	end
# 498 "data/maps/RustboroCity/scripts.pory"

# 499 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 500 "data/maps/RustboroCity/scripts.pory"
	lockall
# 501 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 502 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 503 "data/maps/RustboroCity/scripts.pory"
	end
# 504 "data/maps/RustboroCity/scripts.pory"

# 505 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 506 "data/maps/RustboroCity/scripts.pory"
	lockall
# 507 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 508 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 509 "data/maps/RustboroCity/scripts.pory"
	end
# 510 "data/maps/RustboroCity/scripts.pory"

# 511 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 512 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 513 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 514 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 515 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 516 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 517 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 518 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_DEVON_EMPLOYEE
# 519 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 520 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 521 "data/maps/RustboroCity/scripts.pory"
	end
# 522 "data/maps/RustboroCity/scripts.pory"

# 523 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 524 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 525 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 526 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 527 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 528 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 529 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 530 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 531 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 532 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 533 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 534 "data/maps/RustboroCity/scripts.pory"
	return
# 535 "data/maps/RustboroCity/scripts.pory"

# 536 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 537 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 538 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 539 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 540 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 541 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 542 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 543 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 544 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 545 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 546 "data/maps/RustboroCity/scripts.pory"
	return
# 547 "data/maps/RustboroCity/scripts.pory"

# 548 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 549 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 550 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 551 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 552 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 553 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 554 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 555 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 556 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 557 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 558 "data/maps/RustboroCity/scripts.pory"
	return
# 559 "data/maps/RustboroCity/scripts.pory"

# 560 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 561 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 562 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 563 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 564 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 565 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 566 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 567 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 568 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 569 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 570 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 571 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 572 "data/maps/RustboroCity/scripts.pory"
	return
# 573 "data/maps/RustboroCity/scripts.pory"

# 574 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 575 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 576 "data/maps/RustboroCity/scripts.pory"
	step_end
# 577 "data/maps/RustboroCity/scripts.pory"

# 578 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 579 "data/maps/RustboroCity/scripts.pory"
	lockall
# 580 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 581 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 582 "data/maps/RustboroCity/scripts.pory"
	end
# 583 "data/maps/RustboroCity/scripts.pory"

# 584 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 585 "data/maps/RustboroCity/scripts.pory"
	lockall
# 586 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 587 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 588 "data/maps/RustboroCity/scripts.pory"
	end
# 589 "data/maps/RustboroCity/scripts.pory"

# 590 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 591 "data/maps/RustboroCity/scripts.pory"
	lockall
# 592 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 593 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 594 "data/maps/RustboroCity/scripts.pory"
	end
# 595 "data/maps/RustboroCity/scripts.pory"

# 596 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 597 "data/maps/RustboroCity/scripts.pory"
	lockall
# 598 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 599 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 600 "data/maps/RustboroCity/scripts.pory"
	end
# 601 "data/maps/RustboroCity/scripts.pory"

# 602 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 603 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 604 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 605 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 606 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 607 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 608 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 609 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 610 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RECEIVED_EXP_SHARE
# 611 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_I_EXP_SHARE
# 612 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 613 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ExplainExpShare, MSGBOX_DEFAULT
# 614 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 615 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 616 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 617 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 618 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 619 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 620 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 621 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 622 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 623 "data/maps/RustboroCity/scripts.pory"
	end
# 624 "data/maps/RustboroCity/scripts.pory"

# 625 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 626 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 627 "data/maps/RustboroCity/scripts.pory"
	return
# 628 "data/maps/RustboroCity/scripts.pory"

# 629 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 630 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 631 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 632 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 633 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 634 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 635 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 636 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 637 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 638 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 639 "data/maps/RustboroCity/scripts.pory"
	return
# 640 "data/maps/RustboroCity/scripts.pory"

# 641 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 642 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 643 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 644 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 645 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 646 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 647 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 648 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 649 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 650 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 651 "data/maps/RustboroCity/scripts.pory"
	return
# 652 "data/maps/RustboroCity/scripts.pory"

# 653 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 654 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 655 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 656 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 657 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 658 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 659 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 660 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 661 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 662 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 663 "data/maps/RustboroCity/scripts.pory"
	return
# 664 "data/maps/RustboroCity/scripts.pory"

# 665 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 666 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 667 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 668 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 669 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 670 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 671 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 672 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 673 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 674 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 675 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 676 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 677 "data/maps/RustboroCity/scripts.pory"
	return
# 678 "data/maps/RustboroCity/scripts.pory"

# 679 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 680 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 681 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 682 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 683 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 684 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 685 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 686 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 687 "data/maps/RustboroCity/scripts.pory"
	return
# 688 "data/maps/RustboroCity/scripts.pory"

# 689 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 690 "data/maps/RustboroCity/scripts.pory"
	lockall
# 691 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 692 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 693 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 694 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 695 "data/maps/RustboroCity/scripts.pory"

# 696 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 697 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 698 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 699 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 700 "data/maps/RustboroCity/scripts.pory"
	return
# 701 "data/maps/RustboroCity/scripts.pory"

# 702 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 703 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 704 "data/maps/RustboroCity/scripts.pory"
	return
# 705 "data/maps/RustboroCity/scripts.pory"

# 706 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 707 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 708 "data/maps/RustboroCity/scripts.pory"
	return
# 709 "data/maps/RustboroCity/scripts.pory"

# 710 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 711 "data/maps/RustboroCity/scripts.pory"
	lockall
# 712 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 713 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 714 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 715 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 716 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 717 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 718 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 719 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 720 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 721 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 722 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 723 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 724 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 725 "data/maps/RustboroCity/scripts.pory"

# 726 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 727 "data/maps/RustboroCity/scripts.pory"
	lockall
# 728 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 729 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 730 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 731 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 732 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 733 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 734 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 735 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 736 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 737 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 738 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 739 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 740 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 741 "data/maps/RustboroCity/scripts.pory"

# 742 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 743 "data/maps/RustboroCity/scripts.pory"
	lockall
# 744 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 745 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 746 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 747 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 748 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 749 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 750 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 751 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 752 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 753 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 754 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 755 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 756 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 757 "data/maps/RustboroCity/scripts.pory"

# 758 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 759 "data/maps/RustboroCity/scripts.pory"
	lockall
# 760 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 761 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 762 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 763 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 764 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 765 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 766 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 767 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 768 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 769 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 770 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 771 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 772 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 773 "data/maps/RustboroCity/scripts.pory"

# 774 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 775 "data/maps/RustboroCity/scripts.pory"
	lockall
# 776 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 777 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 778 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 779 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 780 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 781 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 782 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 783 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 784 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 785 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 786 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 787 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 788 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 789 "data/maps/RustboroCity/scripts.pory"

# 790 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 791 "data/maps/RustboroCity/scripts.pory"
	lockall
# 792 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 793 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 794 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 795 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 796 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 797 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 798 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 799 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 800 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 801 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 802 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 803 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 804 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 805 "data/maps/RustboroCity/scripts.pory"

# 806 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 807 "data/maps/RustboroCity/scripts.pory"
	lockall
# 808 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 809 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 810 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 811 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 812 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 813 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 814 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 815 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 816 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 817 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 818 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 819 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 820 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 821 "data/maps/RustboroCity/scripts.pory"

# 822 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 823 "data/maps/RustboroCity/scripts.pory"
	lockall
# 824 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 825 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 826 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 827 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 828 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 829 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 830 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 831 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 832 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 833 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 834 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 835 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 836 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 837 "data/maps/RustboroCity/scripts.pory"

# 838 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 839 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 840 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
# 841 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
# 842 "data/maps/RustboroCity/scripts.pory"
	end
# 843 "data/maps/RustboroCity/scripts.pory"

# 844 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 845 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 846 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
# 847 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 848 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 849 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 850 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 851 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 852 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 853 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 854 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 855 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 856 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 857 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 858 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 859 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 860 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 861 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 862 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 863 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 864 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 865 "data/maps/RustboroCity/scripts.pory"
	end
# 866 "data/maps/RustboroCity/scripts.pory"

# 867 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle::
# 868 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 869 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 870 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 871 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 872 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 873 "data/maps/RustboroCity/scripts.pory"
	end
# 874 "data/maps/RustboroCity/scripts.pory"

# 875 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay::
# 876 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 877 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleMayTorchic
# 878 "data/maps/RustboroCity/scripts.pory"
	end
# 879 "data/maps/RustboroCity/scripts.pory"

# 880 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 881 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 882 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 883 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 884 "data/maps/RustboroCity/scripts.pory"
	end
# 885 "data/maps/RustboroCity/scripts.pory"

# 886 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 887 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 888 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 889 "data/maps/RustboroCity/scripts.pory"
	return
# 890 "data/maps/RustboroCity/scripts.pory"

# 891 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTorchic::
# 892 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 893 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 894 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 895 "data/maps/RustboroCity/scripts.pory"
	end
# 896 "data/maps/RustboroCity/scripts.pory"

# 897 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 898 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
# 899 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanAskToBattle
# 900 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 901 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 902 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 903 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 904 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 905 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 906 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 907 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 908 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 909 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 910 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 911 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 912 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 913 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 914 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 915 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 916 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 917 "data/maps/RustboroCity/scripts.pory"
	end
# 918 "data/maps/RustboroCity/scripts.pory"

# 919 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle::
# 920 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 921 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 922 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 923 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 924 "data/maps/RustboroCity/scripts.pory"
	end
# 925 "data/maps/RustboroCity/scripts.pory"

# 926 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan::
# 927 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 928 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleBrendanTreecko
# 929 "data/maps/RustboroCity/scripts.pory"
	end
# 930 "data/maps/RustboroCity/scripts.pory"

# 931 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint::
# 932 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 933 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 934 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 935 "data/maps/RustboroCity/scripts.pory"
	end
# 936 "data/maps/RustboroCity/scripts.pory"

# 937 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko::
# 938 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 939 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 940 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 941 "data/maps/RustboroCity/scripts.pory"
	end
# 942 "data/maps/RustboroCity/scripts.pory"

# 943 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 944 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 945 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 946 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 947 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 948 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 949 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 950 "data/maps/RustboroCity/scripts.pory"
	step_end
# 951 "data/maps/RustboroCity/scripts.pory"

# 952 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 953 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 954 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 955 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 956 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 957 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 958 "data/maps/RustboroCity/scripts.pory"
	step_end
# 959 "data/maps/RustboroCity/scripts.pory"

# 960 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 961 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 962 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 963 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 964 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 965 "data/maps/RustboroCity/scripts.pory"
	step_end
# 966 "data/maps/RustboroCity/scripts.pory"

# 967 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 968 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 969 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 970 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 971 "data/maps/RustboroCity/scripts.pory"
	step_end
# 972 "data/maps/RustboroCity/scripts.pory"

# 973 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 974 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 975 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 976 "data/maps/RustboroCity/scripts.pory"
	step_end
# 977 "data/maps/RustboroCity/scripts.pory"

# 978 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 979 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 980 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 981 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 982 "data/maps/RustboroCity/scripts.pory"
	step_end
# 983 "data/maps/RustboroCity/scripts.pory"

# 984 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 985 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 986 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 987 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 988 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 989 "data/maps/RustboroCity/scripts.pory"
	step_end
# 990 "data/maps/RustboroCity/scripts.pory"

# 991 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 992 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 993 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 994 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 995 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 996 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 997 "data/maps/RustboroCity/scripts.pory"
	step_end
# 998 "data/maps/RustboroCity/scripts.pory"

# 999 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 1000 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 1001 "data/maps/RustboroCity/scripts.pory"
	end
# 1002 "data/maps/RustboroCity/scripts.pory"

# 1003 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 1004 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON CORPORATION…\n"
# 1005 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to DEVON.\p"
# 1006 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 1007 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 1008 "data/maps/RustboroCity/scripts.pory"

# 1009 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 1010 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 1011 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 1012 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 1013 "data/maps/RustboroCity/scripts.pory"

# 1014 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 1015 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the POKéMON GYM\n"
# 1016 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 1017 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny GYM BADGE\n"
# 1018 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess TRAINERS begin to\l"
# 1019 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 1020 "data/maps/RustboroCity/scripts.pory"

# 1021 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 1022 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's RUSTBORO's GYM BADGE!\p"
# 1023 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the POKéMON GYM BADGES,\n"
# 1024 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO's is the coolest, I'd say.$"
# 1025 "data/maps/RustboroCity/scripts.pory"

# 1026 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 1027 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 1028 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 1029 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 1030 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL?$"
# 1031 "data/maps/RustboroCity/scripts.pory"

# 1032 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 1033 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the GYM LEADER, but…\p"
# 1034 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 1035 "data/maps/RustboroCity/scripts.pory"
	.string "my FIRE-type POKéMON…\p"
# 1036 "data/maps/RustboroCity/scripts.pory"
	.string "FIRE-type POKéMON don't match up\n"
# 1037 "data/maps/RustboroCity/scripts.pory"
	.string "well against a firefighter…$"
# 1038 "data/maps/RustboroCity/scripts.pory"

# 1039 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 1040 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1041 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1042 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 1043 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 1044 "data/maps/RustboroCity/scripts.pory"

# 1045 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 1046 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1047 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1048 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 1049 "data/maps/RustboroCity/scripts.pory"
	.string "SLATEPORT for his pet, PEEKO.\p"
# 1050 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 1051 "data/maps/RustboroCity/scripts.pory"
	.string "that PEEKO.$"
# 1052 "data/maps/RustboroCity/scripts.pory"

# 1053 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 1054 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\p"
# 1055 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 1056 "data/maps/RustboroCity/scripts.pory"
	.string "places with POKéMON, too.$"
# 1057 "data/maps/RustboroCity/scripts.pory"

# 1058 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 1059 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL!\p"
# 1060 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 1061 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare POKéMON easily?$"
# 1062 "data/maps/RustboroCity/scripts.pory"

# 1063 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 1064 "data/maps/RustboroCity/scripts.pory"
	.string "If a POKéMON gains experience in\n"
# 1065 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 1066 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 1067 "data/maps/RustboroCity/scripts.pory"

# 1068 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 1069 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON changes shape?\n"
# 1070 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 1071 "data/maps/RustboroCity/scripts.pory"

# 1072 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 1073 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON you get in a trade from\n"
# 1074 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 1075 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain GYM\n"
# 1076 "data/maps/RustboroCity/scripts.pory"
	.string "BADGES, it may not obey you…$"
# 1077 "data/maps/RustboroCity/scripts.pory"

# 1078 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 1079 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 1080 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 1081 "data/maps/RustboroCity/scripts.pory"

# 1082 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 1083 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 1084 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my GOODS!$"
# 1085 "data/maps/RustboroCity/scripts.pory"

# 1086 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 1087 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 1088 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic TRAINER who\n"
# 1089 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in PETALBURG WOODS!\p"
# 1090 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by TEAM AQUA!\n"
# 1091 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the DEVON GOODS back!\p"
# 1092 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 1093 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 1094 "data/maps/RustboroCity/scripts.pory"

# 1095 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 1096 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 1097 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 1098 "data/maps/RustboroCity/scripts.pory"

# 1099 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 1100 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 1101 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON GOODS?\p"
# 1102 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 1103 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 1104 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great TRAINER!\p"
# 1105 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 1106 "data/maps/RustboroCity/scripts.pory"
	.string "this item I've developed!$"
# 1107 "data/maps/RustboroCity/scripts.pory"

# 1108 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 1109 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 1110 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 1111 "data/maps/RustboroCity/scripts.pory"

# 1112 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1113 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 1114 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 1115 "data/maps/RustboroCity/scripts.pory"

# 1116 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister:
# 1117 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1118 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1119 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV!\p"
# 1120 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1121 "data/maps/RustboroCity/scripts.pory"
	.string "contact one another anytime!\p"
# 1122 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1123 "data/maps/RustboroCity/scripts.pory"

# 1124 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredMay:
# 1125 "data/maps/RustboroCity/scripts.pory"
	.string "Registered MAY\n"
# 1126 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1127 "data/maps/RustboroCity/scripts.pory"

# 1128 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayPassedBrineyWantToBattle:
# 1129 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, I passed\n"
# 1130 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY in PETALBURG WOODS.\p"
# 1131 "data/maps/RustboroCity/scripts.pory"
	.string "I guess he's on his way home to his\n"
# 1132 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1133 "data/maps/RustboroCity/scripts.pory"
	.string "How's your POKéDEX coming along,\n"
# 1134 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
# 1135 "data/maps/RustboroCity/scripts.pory"
	.string "So…\n"
# 1136 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle?$"
# 1137 "data/maps/RustboroCity/scripts.pory"

# 1138 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayOhHaventRaisedPokemonEnough:
# 1139 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1140 "data/maps/RustboroCity/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1141 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON very much?\p"
# 1142 "data/maps/RustboroCity/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1143 "data/maps/RustboroCity/scripts.pory"

# 1144 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayWantToBattle:
# 1145 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1146 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle here?$"
# 1147 "data/maps/RustboroCity/scripts.pory"

# 1148 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayImNotGoingToLose:
# 1149 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1150 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1151 "data/maps/RustboroCity/scripts.pory"

# 1152 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayDefeat:
# 1153 "data/maps/RustboroCity/scripts.pory"
	.string "Yikes!\n"
# 1154 "data/maps/RustboroCity/scripts.pory"
	.string "You're better than I expected!$"
# 1155 "data/maps/RustboroCity/scripts.pory"

# 1156 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint:
# 1157 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, MR. BRINEY, who\n"
# 1158 "data/maps/RustboroCity/scripts.pory"
	.string "I just passed…\p"
# 1159 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
# 1160 "data/maps/RustboroCity/scripts.pory"
	.string "might not know this, but MR. BRINEY\l"
# 1161 "data/maps/RustboroCity/scripts.pory"
	.string "was once a revered seafarer.$"
# 1162 "data/maps/RustboroCity/scripts.pory"

# 1163 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister:
# 1164 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1165 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1166 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV! Cool!\p"
# 1167 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1168 "data/maps/RustboroCity/scripts.pory"
	.string "get in touch anytime!\p"
# 1169 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1170 "data/maps/RustboroCity/scripts.pory"

# 1171 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan:
# 1172 "data/maps/RustboroCity/scripts.pory"
	.string "Registered BRENDAN\n"
# 1173 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1174 "data/maps/RustboroCity/scripts.pory"

# 1175 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanPassedBrineyWantToBattle:
# 1176 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, {PLAYER}, I walked\n"
# 1177 "data/maps/RustboroCity/scripts.pory"
	.string "by MR. BRINEY in PETALBURG WOODS.\p"
# 1178 "data/maps/RustboroCity/scripts.pory"
	.string "I bet he was on his way home to his\n"
# 1179 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1180 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, how's your POKéDEX?\n"
# 1181 "data/maps/RustboroCity/scripts.pory"
	.string "Have you filled in any pages yet?\p"
# 1182 "data/maps/RustboroCity/scripts.pory"
	.string "Mine rules.\p"
# 1183 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle to test how\n"
# 1184 "data/maps/RustboroCity/scripts.pory"
	.string "far you've progressed?$"
# 1185 "data/maps/RustboroCity/scripts.pory"

# 1186 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanNoConfidenceInPokemon:
# 1187 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1188 "data/maps/RustboroCity/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1189 "data/maps/RustboroCity/scripts.pory"

# 1190 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanWantToBattle:
# 1191 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1192 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle with me?$"
# 1193 "data/maps/RustboroCity/scripts.pory"

# 1194 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanIWontGoEasy:
# 1195 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1196 "data/maps/RustboroCity/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1197 "data/maps/RustboroCity/scripts.pory"

# 1198 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanDefeat:
# 1199 "data/maps/RustboroCity/scripts.pory"
	.string "Hmm…\n"
# 1200 "data/maps/RustboroCity/scripts.pory"
	.string "You're pretty good.$"
# 1201 "data/maps/RustboroCity/scripts.pory"

# 1202 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint:
# 1203 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, you know\n"
# 1204 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY? The guy I just passed?\p"
# 1205 "data/maps/RustboroCity/scripts.pory"
	.string "I bet you didn't know this, since you\n"
# 1206 "data/maps/RustboroCity/scripts.pory"
	.string "just moved here, {PLAYER}, but\l"
# 1207 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY was once a great sailor.$"
# 1208 "data/maps/RustboroCity/scripts.pory"

# 1209 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1210 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1211 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 1212 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1213 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1214 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 1215 "data/maps/RustboroCity/scripts.pory"

# 1216 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1217 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORPORATION\p"
# 1218 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1219 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 1220 "data/maps/RustboroCity/scripts.pory"

# 1221 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1222 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\n"
# 1223 "data/maps/RustboroCity/scripts.pory"
	.string "LEADER: STEVE\p"
# 1224 "data/maps/RustboroCity/scripts.pory"
	.string "“The firefighting genius!”$"
# 1225 "data/maps/RustboroCity/scripts.pory"

# 1226 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1227 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORP. BRANCH OFFICE\p"
# 1228 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to DEVON employees\n"
# 1229 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1230 "data/maps/RustboroCity/scripts.pory"

# 1231 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1232 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY\p"
# 1233 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1234 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 1235 "data/maps/RustboroCity/scripts.pory"

# 1236 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1237 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL\p"
# 1238 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1239 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON!”$"
# 1240 "data/maps/RustboroCity/scripts.pory"

# 1241 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1242 "data/maps/RustboroCity/scripts.pory"
	.string "CUTTER'S HOUSE$"
# 1243 "data/maps/RustboroCity/scripts.pory"

# 1244 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1245 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing new features\n"
# 1246 "data/maps/RustboroCity/scripts.pory"
	.string "for the POKéNAV…\p"
# 1247 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 1248 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, may I see that POKéNAV?\n"
# 1249 "data/maps/RustboroCity/scripts.pory"
	.string "The one our PRESIDENT gave you?$"
# 1250 "data/maps/RustboroCity/scripts.pory"

# 1251 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1252 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 1253 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 1254 "data/maps/RustboroCity/scripts.pory"
	.string "MATCH CALL to your POKéNAV.\p"
# 1255 "data/maps/RustboroCity/scripts.pory"
	.string "Using the MATCH CALL feature,\n"
# 1256 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 1257 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your POKéNAV.\p"
# 1258 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
# 1259 "data/maps/RustboroCity/scripts.pory"
	.string "be registered in your POKéNAV.\p"
# 1260 "data/maps/RustboroCity/scripts.pory"
	.string "Test it out.\n"
# 1261 "data/maps/RustboroCity/scripts.pory"
	.string "Please give our PRESIDENT a call.$"
# 1262 "data/maps/RustboroCity/scripts.pory"

# 1263 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1264 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the POKéNAV.$"
# 1265 "data/maps/RustboroCity/scripts.pory"

# 1266 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedStatEdits:
# 1267 "data/maps/RustboroCity/scripts.pory"
	.string "I also added another feature named\n"
# 1268 "data/maps/RustboroCity/scripts.pory"
	.string "EDIT STATS to your POKéNAV.\p"
# 1269 "data/maps/RustboroCity/scripts.pory"
	.string "You can use it to edit the IVs\n"
# 1270 "data/maps/RustboroCity/scripts.pory"
	.string "and EVs of your POKéMON.\p"
# 1271 "data/maps/RustboroCity/scripts.pory"
	.string "To use it, just select a POKéMON\n"
# 1272 "data/maps/RustboroCity/scripts.pory"
	.string "from within the party menu.\p"
# 1273 "data/maps/RustboroCity/scripts.pory"
	.string "Would you like an explanation\n"
# 1274 "data/maps/RustboroCity/scripts.pory"
	.string "of IVs and EVs?$"
# 1275 "data/maps/RustboroCity/scripts.pory"

# 1276 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1277 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 1278 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 1279 "data/maps/RustboroCity/scripts.pory"

# 1280 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1281 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 1282 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 1283 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another TRAINER.\p"
# 1284 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two TRAINERS\n"
# 1285 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more POKéMON,\l"
# 1286 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1287 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1288 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two TRAINERS by yourself?$"

RustboroCity_EventScript_Misa::
# 1292 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1293 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1294 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1295 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroPlayerStepBack
# 1296 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1297 "data/maps/RustboroCity/scripts.pory"
	opendoor 16, 38
# 1298 "data/maps/RustboroCity/scripts.pory"
	waitdooranim
# 1299 "data/maps/RustboroCity/scripts.pory"
	addobject 17
# 1300 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroCity_Movement_PlayerWalkDown
# 1301 "data/maps/RustboroCity/scripts.pory"
	waitmovement 17
# 1302 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 1303 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_MISA_OUTSIDE
# 1304 "data/maps/RustboroCity/scripts.pory"
	closedoor 16, 38
# 1305 "data/maps/RustboroCity/scripts.pory"
	waitdooranim
# 1306 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 1307 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1308 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroExclaim
# 1309 "data/maps/RustboroCity/scripts.pory"
	waitmovement 17
# 1310 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 1311 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_MISA_THEME, FALSE
# 1312 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 1313 "data/maps/RustboroCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 1314 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroMisa1, MSGBOX_DEFAULT
# 1315 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1316 "data/maps/RustboroCity/scripts.pory"
	goto MisaPlayerMeetRival
	return


MisaPlayerMeetRival::
# 1320 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroMisa4, MSGBOX_YESNO
# 1321 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MisaPlayerMeetRival_2
MisaPlayerMeetRival_1:
# 1324 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MisaPlayerMeetRival_4
	return

MisaPlayerMeetRival_2:
# 1322 "data/maps/RustboroCity/scripts.pory"
	goto MisaAgreeMeetRival
	goto MisaPlayerMeetRival_1

MisaPlayerMeetRival_4:
# 1325 "data/maps/RustboroCity/scripts.pory"
	goto MisaDeclineMeetRival
	return


MisaAgreeMeetRival::
# 1331 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroMisaIfYes, MSGBOX_AUTOCLOSE
# 1332 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1333 "data/maps/RustboroCity/scripts.pory"
	call MisaEnd
# 1334 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 1335 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end


MisaDeclineMeetRival::
# 1340 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroMisaIfNo, MSGBOX_YESNO
# 1341 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MisaDeclineMeetRival_2
MisaDeclineMeetRival_1:
# 1344 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MisaDeclineMeetRival_4
	return

MisaDeclineMeetRival_2:
# 1342 "data/maps/RustboroCity/scripts.pory"
	goto MisaAgreeMeetRival
	goto MisaDeclineMeetRival_1

MisaDeclineMeetRival_4:
# 1345 "data/maps/RustboroCity/scripts.pory"
	goto MisaDeclineMeetRival
	return


MisaEnd::
# 1350 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_TEMP_5, MisaEnd_2
# 1371 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1372 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroExclaim
# 1373 "data/maps/RustboroCity/scripts.pory"
	waitmovement 17
# 1374 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 1375 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroMisa5, MSGBOX_AUTOCLOSE
# 1376 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1377 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroMisaLeave1
# 1378 "data/maps/RustboroCity/scripts.pory"
	waitmovement 17
# 1379 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroFaceRight
# 1380 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1381 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroMisaLeave2
# 1382 "data/maps/RustboroCity/scripts.pory"
	waitmovement 17
# 1383 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 1384 "data/maps/RustboroCity/scripts.pory"
	removeobject 17
# 1385 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 1386 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_MISA_OUTSIDE
# 1387 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_ROUTE115
# 1388 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_MISA_STATE, 1
MisaEnd_1:
	return

MisaEnd_2:
# 1351 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1352 "data/maps/RustboroCity/scripts.pory"
	applymovement 18, RustboroExclaim
# 1353 "data/maps/RustboroCity/scripts.pory"
	waitmovement 18
# 1354 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 1355 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroMisa5, MSGBOX_AUTOCLOSE
# 1356 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1357 "data/maps/RustboroCity/scripts.pory"
	applymovement 18, RustboroMisaLeaveGym1
# 1358 "data/maps/RustboroCity/scripts.pory"
	waitmovement 18
# 1359 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroFaceLeft
# 1360 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1361 "data/maps/RustboroCity/scripts.pory"
	applymovement 18, RustboroMisaLeaveGym2
# 1362 "data/maps/RustboroCity/scripts.pory"
	waitmovement 18
# 1363 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 1364 "data/maps/RustboroCity/scripts.pory"
	removeobject 18
# 1365 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 1366 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_MISA_OUTSIDE
# 1367 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_ROUTE115
# 1368 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_MISA_STATE, 1
	goto MisaEnd_1


RustboroCity_Eventscript_Promise_To_Misa::
# 1394 "data/maps/RustboroCity/scripts.pory"
	lock
# 1395 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Eventscript_Promise_To_Misa_Text_0, MSGBOX_AUTOCLOSE
# 1397 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1398 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 1399 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1400 "data/maps/RustboroCity/scripts.pory"
	release
	end


RustboroCityGym_EventScript_Misa::
# 1405 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1406 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_TEMP_5
# 1407 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1408 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1409 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroPlayerStepBack
# 1410 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1411 "data/maps/RustboroCity/scripts.pory"
	opendoor 27, 19
# 1412 "data/maps/RustboroCity/scripts.pory"
	waitdooranim
# 1413 "data/maps/RustboroCity/scripts.pory"
	addobject 18
# 1414 "data/maps/RustboroCity/scripts.pory"
	applymovement 18, RustboroCity_Movement_PlayerWalkDown
# 1415 "data/maps/RustboroCity/scripts.pory"
	waitmovement 18
# 1416 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 1417 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_MISA_OUTSIDE
# 1418 "data/maps/RustboroCity/scripts.pory"
	closedoor 27, 19
# 1419 "data/maps/RustboroCity/scripts.pory"
	waitdooranim
# 1420 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 1421 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1422 "data/maps/RustboroCity/scripts.pory"
	applymovement 18, RustboroExclaim
# 1423 "data/maps/RustboroCity/scripts.pory"
	waitmovement 18
# 1424 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 1425 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_MISA_THEME, FALSE
# 1426 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 1427 "data/maps/RustboroCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 1428 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroMisa1, MSGBOX_DEFAULT
# 1429 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1430 "data/maps/RustboroCity/scripts.pory"
	goto MisaPlayerMeetRival
	return


RustboroCity_LunaDexNav::
# 1460 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1461 "data/maps/RustboroCity/scripts.pory"
	pokenavcall Route104_LunaDexNavText
# 1462 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1463 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 1464 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 2
# 1465 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_NPC_LUNA_HOUSE_PETALBURG
# 1466 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_NPC_RATDUARDO_SIDEQUEST
# 1467 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end


RustboroCity_EventScript_ExplainIVsEVs::
# 1484 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_ExplainIVsEVs_Text_0, MSGBOX_DEFAULT
# 1501 "data/maps/RustboroCity/scripts.pory"
	waitmessage
	return


# 1505 "data/maps/RustboroCity/scripts.pory"
RustboroExclaim:
# 1505 "data/maps/RustboroCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 1507 "data/maps/RustboroCity/scripts.pory"
RustboroFaceLeft:
# 1507 "data/maps/RustboroCity/scripts.pory"
	face_left
	step_end

# 1509 "data/maps/RustboroCity/scripts.pory"
RustboroFaceRight:
# 1510 "data/maps/RustboroCity/scripts.pory"
	face_right
	step_end

# 1513 "data/maps/RustboroCity/scripts.pory"
RustboroFaceUp:
# 1514 "data/maps/RustboroCity/scripts.pory"
	face_up
	step_end

# 1517 "data/maps/RustboroCity/scripts.pory"
RustboroMisaLeave1:
# 1518 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1519 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

# 1522 "data/maps/RustboroCity/scripts.pory"
RustboroMisaLeave2:
# 1523 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1523 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1523 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1524 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1524 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1524 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1524 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1524 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1524 "data/maps/RustboroCity/scripts.pory"
	walk_up
	step_end

# 1527 "data/maps/RustboroCity/scripts.pory"
RustboroMisaLeaveGym1:
# 1528 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1529 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

# 1532 "data/maps/RustboroCity/scripts.pory"
RustboroMisaLeaveGym2:
# 1533 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1533 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1533 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1533 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1533 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1533 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1533 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1533 "data/maps/RustboroCity/scripts.pory"
	walk_left
	step_end

# 1536 "data/maps/RustboroCity/scripts.pory"
RustboroPlayerStepBack:
# 1537 "data/maps/RustboroCity/scripts.pory"
	lock_facing_direction
# 1538 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1539 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 1540 "data/maps/RustboroCity/scripts.pory"
	unlock_facing_direction
	step_end

RustboroCity_Eventscript_Promise_To_Misa_Text_0:
# 1395 "data/maps/RustboroCity/scripts.pory"
	.string "I should probably keep my promise to\n MISA…$"

RustboroCity_EventScript_ExplainIVsEVs_Text_0:
# 1484 "data/maps/RustboroCity/scripts.pory"
	.string "IVs, or INDIVIDUAL VALUES, are\n the inherent talents of a POKéMON and\l can range from 0-31.\p This stat is determined from birth.\p Luckily, all POKéMON in HOENN are\n born equal in this regard.\p EVs, or EFFORT VALUES, are gained\n from battling POKéMON.\p Each stat, such as HP, ATK, etc.,\n can gain EVs from defeating certain\l POKéMON.\p A POKéMON can have up to 510 EVs total,\n with a maximum of 252 in a single stat.\p A POKéMON with EVs can be much stronger\n stronger than one without any!\p I recommend you take a look\n at the STAT EDITOR.$"

RustboroMisa1::
# 1433 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! Excuse me. I didn't see you there.\l It's nice to meet you.\n My name's MISA.\p MISA: That {STR_VAR_1}… So cute!\n So you're a new TRAINER? That's great!\l  It looks like you're already raising\l  your POKéMON with love and care.\p I actually have a son around the\n same age as you.\p He's also starting his journey soon.\n He should be on ROUTE 115 preparing.$"

RustboroMisa4::
# 1445 "data/maps/RustboroCity/scripts.pory"
	.string "Could you do me a favor and go\n meet him? He's always been a bit…\l different and could use a new friend.$"

RustboroMisaIfYes::
# 1449 "data/maps/RustboroCity/scripts.pory"
	.string "Thank you! You're so sweet.\n Just head north to get to ROUTE 115.$"

RustboroMisaIfNo::
# 1452 "data/maps/RustboroCity/scripts.pory"
	.string "Oh… Please don't be like that.\n Would you reconsider?$"

RustboroMisa5::
# 1455 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! I'm almost late for the\n meeting! I have to go.\l It was nice meeting you, {PLAYER}!$"

RustboroCity_LunaDexNavText::
# 1471 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …\n … … … … … Beep!\p {PLAYER}? It's LUNA.\n Are you still in the area?\p I need a favor. Meet me in front of\n my house in PETALBURG.\p It's the one north of the POKéMON\n CENTER.\p … … … … … …\n … … … … … Click!$"
