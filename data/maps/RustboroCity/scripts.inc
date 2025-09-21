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
	call RustboroCity_EventScript_ImportanceOfStatEditor
# 104 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 105 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 106 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 107 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 108 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 109 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 110 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 111 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_SYS_STAT_EDIT_GET
# 112 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 113 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 1
# 114 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 115 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 116 "data/maps/RustboroCity/scripts.pory"
	end
# 117 "data/maps/RustboroCity/scripts.pory"

# 118 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 119 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 120 "data/maps/RustboroCity/scripts.pory"
	step_end
# 121 "data/maps/RustboroCity/scripts.pory"

# 122 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 123 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 124 "data/maps/RustboroCity/scripts.pory"
	step_end
# 125 "data/maps/RustboroCity/scripts.pory"

# 126 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 127 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 128 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 129 "data/maps/RustboroCity/scripts.pory"
	step_end
# 130 "data/maps/RustboroCity/scripts.pory"

# 131 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 132 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 133 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 134 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 135 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 136 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 137 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 138 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 139 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 140 "data/maps/RustboroCity/scripts.pory"
	step_end
# 141 "data/maps/RustboroCity/scripts.pory"

# 142 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 143 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 144 "data/maps/RustboroCity/scripts.pory"
	step_end
# 145 "data/maps/RustboroCity/scripts.pory"

# 146 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 147 "data/maps/RustboroCity/scripts.pory"
	lock
# 148 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 149 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 150 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 151 "data/maps/RustboroCity/scripts.pory"
	release
# 152 "data/maps/RustboroCity/scripts.pory"
	end
# 153 "data/maps/RustboroCity/scripts.pory"

# 154 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 155 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 156 "data/maps/RustboroCity/scripts.pory"
	release
# 157 "data/maps/RustboroCity/scripts.pory"
	end
# 158 "data/maps/RustboroCity/scripts.pory"

# 159 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 160 "data/maps/RustboroCity/scripts.pory"
	lock
# 161 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 162 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 163 "data/maps/RustboroCity/scripts.pory"
	release
# 164 "data/maps/RustboroCity/scripts.pory"
	end
# 165 "data/maps/RustboroCity/scripts.pory"

# 166 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 167 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 168 "data/maps/RustboroCity/scripts.pory"
	end
# 169 "data/maps/RustboroCity/scripts.pory"

# 170 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 171 "data/maps/RustboroCity/scripts.pory"
	lock
# 172 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 173 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 174 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 175 "data/maps/RustboroCity/scripts.pory"
	release
# 176 "data/maps/RustboroCity/scripts.pory"
	end
# 177 "data/maps/RustboroCity/scripts.pory"

# 178 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 179 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 180 "data/maps/RustboroCity/scripts.pory"
	release
# 181 "data/maps/RustboroCity/scripts.pory"
	end
# 182 "data/maps/RustboroCity/scripts.pory"

# 183 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 184 "data/maps/RustboroCity/scripts.pory"
	lock
# 185 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 186 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 187 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 188 "data/maps/RustboroCity/scripts.pory"
	release
# 189 "data/maps/RustboroCity/scripts.pory"
	end
# 190 "data/maps/RustboroCity/scripts.pory"

# 191 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 192 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 193 "data/maps/RustboroCity/scripts.pory"
	release
# 194 "data/maps/RustboroCity/scripts.pory"
	end
# 195 "data/maps/RustboroCity/scripts.pory"

# 196 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 197 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 198 "data/maps/RustboroCity/scripts.pory"
	end
# 199 "data/maps/RustboroCity/scripts.pory"

# 200 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 201 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 202 "data/maps/RustboroCity/scripts.pory"
	end
# 203 "data/maps/RustboroCity/scripts.pory"

# 204 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 205 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 206 "data/maps/RustboroCity/scripts.pory"
	end
# 207 "data/maps/RustboroCity/scripts.pory"

# 208 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 209 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 210 "data/maps/RustboroCity/scripts.pory"
	end
# 211 "data/maps/RustboroCity/scripts.pory"

# 212 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 213 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 214 "data/maps/RustboroCity/scripts.pory"
	end
# 215 "data/maps/RustboroCity/scripts.pory"

# 216 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 217 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 218 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 219 "data/maps/RustboroCity/scripts.pory"
	end
# 220 "data/maps/RustboroCity/scripts.pory"

# 221 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 222 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 223 "data/maps/RustboroCity/scripts.pory"
	end
# 224 "data/maps/RustboroCity/scripts.pory"

# 225 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 226 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 227 "data/maps/RustboroCity/scripts.pory"
	end
# 228 "data/maps/RustboroCity/scripts.pory"

# 229 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 230 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 231 "data/maps/RustboroCity/scripts.pory"
	end
# 232 "data/maps/RustboroCity/scripts.pory"

# 233 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 234 "data/maps/RustboroCity/scripts.pory"
	lock
# 235 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 236 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 237 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 238 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 239 "data/maps/RustboroCity/scripts.pory"
	release
# 240 "data/maps/RustboroCity/scripts.pory"
	end
# 241 "data/maps/RustboroCity/scripts.pory"

# 242 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 243 "data/maps/RustboroCity/scripts.pory"
	lock
# 244 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 245 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 246 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 247 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 248 "data/maps/RustboroCity/scripts.pory"
	release
# 249 "data/maps/RustboroCity/scripts.pory"
	end
# 250 "data/maps/RustboroCity/scripts.pory"

# 251 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 252 "data/maps/RustboroCity/scripts.pory"
	lock
# 253 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 254 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 255 "data/maps/RustboroCity/scripts.pory"
	release
# 256 "data/maps/RustboroCity/scripts.pory"
	end
# 257 "data/maps/RustboroCity/scripts.pory"

# 258 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 259 "data/maps/RustboroCity/scripts.pory"
	lockall
# 260 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 261 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 262 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 263 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 264 "data/maps/RustboroCity/scripts.pory"
	end
# 265 "data/maps/RustboroCity/scripts.pory"

# 266 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 267 "data/maps/RustboroCity/scripts.pory"
	lockall
# 268 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 269 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 270 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 271 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 272 "data/maps/RustboroCity/scripts.pory"
	end
# 273 "data/maps/RustboroCity/scripts.pory"

# 274 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 275 "data/maps/RustboroCity/scripts.pory"
	lockall
# 276 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 277 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 278 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 279 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 280 "data/maps/RustboroCity/scripts.pory"
	end
# 281 "data/maps/RustboroCity/scripts.pory"

# 282 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 283 "data/maps/RustboroCity/scripts.pory"
	lockall
# 284 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 285 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 286 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 287 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 288 "data/maps/RustboroCity/scripts.pory"
	end
# 289 "data/maps/RustboroCity/scripts.pory"

# 290 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 291 "data/maps/RustboroCity/scripts.pory"
	lockall
# 292 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 293 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 294 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 295 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 296 "data/maps/RustboroCity/scripts.pory"
	end
# 297 "data/maps/RustboroCity/scripts.pory"

# 298 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 299 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 300 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 301 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 302 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_GRUNT
# 303 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_DEVON_EMPLOYEE
# 304 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_GRUNT, RustboroCity_Movement_GruntEscape
# 305 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 306 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_GRUNT
# 307 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 308 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 309 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 310 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 311 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 312 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 313 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 314 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 315 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 30, 10
# 316 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 317 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 318 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 319 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 320 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 321 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 322 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 323 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 324 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 325 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 326 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 327 "data/maps/RustboroCity/scripts.pory"
	end
# 328 "data/maps/RustboroCity/scripts.pory"

# 329 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 330 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 331 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 332 "data/maps/RustboroCity/scripts.pory"
	return
# 333 "data/maps/RustboroCity/scripts.pory"

# 334 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 335 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 336 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 337 "data/maps/RustboroCity/scripts.pory"
	return
# 338 "data/maps/RustboroCity/scripts.pory"

# 339 "data/maps/RustboroCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 340 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 341 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 342 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 343 "data/maps/RustboroCity/scripts.pory"
	return
# 344 "data/maps/RustboroCity/scripts.pory"

# 345 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 346 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 347 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 348 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 349 "data/maps/RustboroCity/scripts.pory"
	return
# 350 "data/maps/RustboroCity/scripts.pory"

# 351 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 352 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 353 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 354 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 355 "data/maps/RustboroCity/scripts.pory"
	return
# 356 "data/maps/RustboroCity/scripts.pory"

# 357 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 358 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 359 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 360 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 361 "data/maps/RustboroCity/scripts.pory"
	return
# 362 "data/maps/RustboroCity/scripts.pory"

# 363 "data/maps/RustboroCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 364 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 365 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 366 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 367 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 368 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 369 "data/maps/RustboroCity/scripts.pory"
	return
# 370 "data/maps/RustboroCity/scripts.pory"

# 371 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 372 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 373 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 374 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 375 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 376 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 377 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 378 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
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
	walk_fast_up
# 390 "data/maps/RustboroCity/scripts.pory"
	step_end
# 391 "data/maps/RustboroCity/scripts.pory"

# 392 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 393 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 394 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 395 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 396 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 397 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 398 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 399 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
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
	walk_fast_up
# 409 "data/maps/RustboroCity/scripts.pory"
	step_end
# 410 "data/maps/RustboroCity/scripts.pory"

# 411 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
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
	walk_right
# 418 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 419 "data/maps/RustboroCity/scripts.pory"
	step_end
# 420 "data/maps/RustboroCity/scripts.pory"

# 421 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
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
	walk_up
# 429 "data/maps/RustboroCity/scripts.pory"
	step_end
# 430 "data/maps/RustboroCity/scripts.pory"

# 431 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 432 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 433 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 434 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 435 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 436 "data/maps/RustboroCity/scripts.pory"
	step_end
# 437 "data/maps/RustboroCity/scripts.pory"

# 438 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 439 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
# 440 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 441 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 442 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 443 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 444 "data/maps/RustboroCity/scripts.pory"
	step_end
# 445 "data/maps/RustboroCity/scripts.pory"

# 446 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 447 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 448 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 449 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 450 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 451 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 452 "data/maps/RustboroCity/scripts.pory"
	step_end
# 453 "data/maps/RustboroCity/scripts.pory"

# 454 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 455 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 456 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 457 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 458 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 459 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 460 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 461 "data/maps/RustboroCity/scripts.pory"
	step_end
# 462 "data/maps/RustboroCity/scripts.pory"

# 463 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 464 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 465 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 466 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 467 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 468 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 469 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 470 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 471 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_down
# 472 "data/maps/RustboroCity/scripts.pory"
	step_end
# 473 "data/maps/RustboroCity/scripts.pory"

# 474 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 475 "data/maps/RustboroCity/scripts.pory"
	lock
# 476 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 477 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 478 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 479 "data/maps/RustboroCity/scripts.pory"
	release
# 480 "data/maps/RustboroCity/scripts.pory"
	end
# 481 "data/maps/RustboroCity/scripts.pory"

# 482 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 483 "data/maps/RustboroCity/scripts.pory"
	waitse
# 484 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 485 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 486 "data/maps/RustboroCity/scripts.pory"
	end
# 487 "data/maps/RustboroCity/scripts.pory"

# 488 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 489 "data/maps/RustboroCity/scripts.pory"
	lockall
# 490 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 491 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 492 "data/maps/RustboroCity/scripts.pory"
	end
# 493 "data/maps/RustboroCity/scripts.pory"

# 494 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 495 "data/maps/RustboroCity/scripts.pory"
	lockall
# 496 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 497 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 498 "data/maps/RustboroCity/scripts.pory"
	end
# 499 "data/maps/RustboroCity/scripts.pory"

# 500 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 501 "data/maps/RustboroCity/scripts.pory"
	lockall
# 502 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 503 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 504 "data/maps/RustboroCity/scripts.pory"
	end
# 505 "data/maps/RustboroCity/scripts.pory"

# 506 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 507 "data/maps/RustboroCity/scripts.pory"
	lockall
# 508 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 509 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 510 "data/maps/RustboroCity/scripts.pory"
	end
# 511 "data/maps/RustboroCity/scripts.pory"

# 512 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 513 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 514 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 515 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 516 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 517 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 518 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 519 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_DEVON_EMPLOYEE
# 520 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 521 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 522 "data/maps/RustboroCity/scripts.pory"
	end
# 523 "data/maps/RustboroCity/scripts.pory"

# 524 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 525 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 526 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 527 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 528 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 529 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 530 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 531 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 532 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 533 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 534 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 535 "data/maps/RustboroCity/scripts.pory"
	return
# 536 "data/maps/RustboroCity/scripts.pory"

# 537 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 538 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 539 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 540 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 541 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 542 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 543 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 544 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 545 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 546 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 547 "data/maps/RustboroCity/scripts.pory"
	return
# 548 "data/maps/RustboroCity/scripts.pory"

# 549 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 550 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 551 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 552 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 553 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 554 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 555 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 556 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 557 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 558 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 559 "data/maps/RustboroCity/scripts.pory"
	return
# 560 "data/maps/RustboroCity/scripts.pory"

# 561 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 562 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 563 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 564 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 565 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 566 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 567 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 568 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 569 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 570 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 571 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 572 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 573 "data/maps/RustboroCity/scripts.pory"
	return
# 574 "data/maps/RustboroCity/scripts.pory"

# 575 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 576 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 577 "data/maps/RustboroCity/scripts.pory"
	step_end
# 578 "data/maps/RustboroCity/scripts.pory"

# 579 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 580 "data/maps/RustboroCity/scripts.pory"
	lockall
# 581 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 582 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 583 "data/maps/RustboroCity/scripts.pory"
	end
# 584 "data/maps/RustboroCity/scripts.pory"

# 585 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 586 "data/maps/RustboroCity/scripts.pory"
	lockall
# 587 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 588 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 589 "data/maps/RustboroCity/scripts.pory"
	end
# 590 "data/maps/RustboroCity/scripts.pory"

# 591 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 592 "data/maps/RustboroCity/scripts.pory"
	lockall
# 593 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 594 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 595 "data/maps/RustboroCity/scripts.pory"
	end
# 596 "data/maps/RustboroCity/scripts.pory"

# 597 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 598 "data/maps/RustboroCity/scripts.pory"
	lockall
# 599 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 600 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 601 "data/maps/RustboroCity/scripts.pory"
	end
# 602 "data/maps/RustboroCity/scripts.pory"

# 603 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 604 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 605 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 606 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 607 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 608 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 609 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 610 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 611 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RECEIVED_EXP_SHARE
# 612 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_I_EXP_SHARE
# 613 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 614 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ExplainExpShare, MSGBOX_DEFAULT
# 615 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 616 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 617 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 618 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 619 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 620 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 621 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 622 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 623 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 624 "data/maps/RustboroCity/scripts.pory"
	end
# 625 "data/maps/RustboroCity/scripts.pory"

# 626 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 627 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 628 "data/maps/RustboroCity/scripts.pory"
	return
# 629 "data/maps/RustboroCity/scripts.pory"

# 630 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 631 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 632 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 633 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 634 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 635 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 636 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 637 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 638 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 639 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 640 "data/maps/RustboroCity/scripts.pory"
	return
# 641 "data/maps/RustboroCity/scripts.pory"

# 642 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 643 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 644 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 645 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 646 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 647 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 648 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 649 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 650 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 651 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 652 "data/maps/RustboroCity/scripts.pory"
	return
# 653 "data/maps/RustboroCity/scripts.pory"

# 654 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 655 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 656 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 657 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 658 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 659 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 660 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 661 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 662 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 663 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 664 "data/maps/RustboroCity/scripts.pory"
	return
# 665 "data/maps/RustboroCity/scripts.pory"

# 666 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 667 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 668 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 669 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 670 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 671 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 672 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 673 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 674 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 675 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 676 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 677 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 678 "data/maps/RustboroCity/scripts.pory"
	return
# 679 "data/maps/RustboroCity/scripts.pory"

# 680 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 681 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 682 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 683 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 684 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 685 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 686 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 687 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 688 "data/maps/RustboroCity/scripts.pory"
	return
# 689 "data/maps/RustboroCity/scripts.pory"

# 690 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 691 "data/maps/RustboroCity/scripts.pory"
	lockall
# 692 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 693 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 694 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 695 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 696 "data/maps/RustboroCity/scripts.pory"

# 697 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 698 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 699 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 700 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 701 "data/maps/RustboroCity/scripts.pory"
	return
# 702 "data/maps/RustboroCity/scripts.pory"

# 703 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 704 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 705 "data/maps/RustboroCity/scripts.pory"
	return
# 706 "data/maps/RustboroCity/scripts.pory"

# 707 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 708 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 709 "data/maps/RustboroCity/scripts.pory"
	return
# 710 "data/maps/RustboroCity/scripts.pory"

# 711 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 712 "data/maps/RustboroCity/scripts.pory"
	lockall
# 713 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 714 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 715 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 716 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 717 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 718 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 719 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 720 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 721 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 722 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 723 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 724 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 725 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 726 "data/maps/RustboroCity/scripts.pory"

# 727 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 728 "data/maps/RustboroCity/scripts.pory"
	lockall
# 729 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 730 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 731 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 732 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 733 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 734 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 735 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 736 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 737 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 738 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 739 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 740 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 741 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 742 "data/maps/RustboroCity/scripts.pory"

# 743 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 744 "data/maps/RustboroCity/scripts.pory"
	lockall
# 745 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 746 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 747 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 748 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 749 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 750 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 751 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 752 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 753 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 754 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 755 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 756 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 757 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 758 "data/maps/RustboroCity/scripts.pory"

# 759 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 760 "data/maps/RustboroCity/scripts.pory"
	lockall
# 761 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 762 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 763 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 764 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 765 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 766 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 767 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 768 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 769 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 770 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 771 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 772 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 773 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 774 "data/maps/RustboroCity/scripts.pory"

# 775 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 776 "data/maps/RustboroCity/scripts.pory"
	lockall
# 777 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 778 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 779 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 780 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 781 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 782 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 783 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 784 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 785 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 786 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 787 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 788 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 789 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 790 "data/maps/RustboroCity/scripts.pory"

# 791 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 792 "data/maps/RustboroCity/scripts.pory"
	lockall
# 793 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 794 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 795 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 796 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 797 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 798 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 799 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 800 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 801 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 802 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 803 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 804 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 805 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 806 "data/maps/RustboroCity/scripts.pory"

# 807 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 808 "data/maps/RustboroCity/scripts.pory"
	lockall
# 809 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 810 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 811 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 812 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 813 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 814 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 815 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 816 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 817 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 818 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 819 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 820 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 821 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 822 "data/maps/RustboroCity/scripts.pory"

# 823 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 824 "data/maps/RustboroCity/scripts.pory"
	lockall
# 825 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 826 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 827 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 828 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 829 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 830 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 831 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 832 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 833 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 834 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 835 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 836 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 837 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 838 "data/maps/RustboroCity/scripts.pory"

# 839 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 840 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 841 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
# 842 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
# 843 "data/maps/RustboroCity/scripts.pory"
	end
# 844 "data/maps/RustboroCity/scripts.pory"

# 845 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 846 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 847 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
# 848 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 849 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 850 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 851 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 852 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 853 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 854 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 855 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 856 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 857 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 858 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 859 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 860 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 861 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 862 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 863 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 864 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 865 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 866 "data/maps/RustboroCity/scripts.pory"
	end
# 867 "data/maps/RustboroCity/scripts.pory"

# 868 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle::
# 869 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 870 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 871 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 872 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 873 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 874 "data/maps/RustboroCity/scripts.pory"
	end
# 875 "data/maps/RustboroCity/scripts.pory"

# 876 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay::
# 877 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 878 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleMayTorchic
# 879 "data/maps/RustboroCity/scripts.pory"
	end
# 880 "data/maps/RustboroCity/scripts.pory"

# 881 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 882 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 883 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 884 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 885 "data/maps/RustboroCity/scripts.pory"
	end
# 886 "data/maps/RustboroCity/scripts.pory"

# 887 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 888 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 889 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 890 "data/maps/RustboroCity/scripts.pory"
	return
# 891 "data/maps/RustboroCity/scripts.pory"

# 892 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTorchic::
# 893 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 894 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 895 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 896 "data/maps/RustboroCity/scripts.pory"
	end
# 897 "data/maps/RustboroCity/scripts.pory"

# 898 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 899 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
# 900 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanAskToBattle
# 901 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 902 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 903 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 904 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 905 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 906 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 907 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 908 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 909 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 910 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 911 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 912 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 913 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 914 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 915 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 916 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 917 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 918 "data/maps/RustboroCity/scripts.pory"
	end
# 919 "data/maps/RustboroCity/scripts.pory"

# 920 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle::
# 921 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 922 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 923 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 924 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 925 "data/maps/RustboroCity/scripts.pory"
	end
# 926 "data/maps/RustboroCity/scripts.pory"

# 927 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan::
# 928 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 929 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleBrendanTreecko
# 930 "data/maps/RustboroCity/scripts.pory"
	end
# 931 "data/maps/RustboroCity/scripts.pory"

# 932 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint::
# 933 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 934 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 935 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 936 "data/maps/RustboroCity/scripts.pory"
	end
# 937 "data/maps/RustboroCity/scripts.pory"

# 938 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko::
# 939 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 940 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 941 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 942 "data/maps/RustboroCity/scripts.pory"
	end
# 943 "data/maps/RustboroCity/scripts.pory"

# 944 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 945 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 946 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 947 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 948 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 949 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 950 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 951 "data/maps/RustboroCity/scripts.pory"
	step_end
# 952 "data/maps/RustboroCity/scripts.pory"

# 953 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 954 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 955 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 956 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 957 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 958 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 959 "data/maps/RustboroCity/scripts.pory"
	step_end
# 960 "data/maps/RustboroCity/scripts.pory"

# 961 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 962 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 963 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 964 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 965 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 966 "data/maps/RustboroCity/scripts.pory"
	step_end
# 967 "data/maps/RustboroCity/scripts.pory"

# 968 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 969 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 970 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 971 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 972 "data/maps/RustboroCity/scripts.pory"
	step_end
# 973 "data/maps/RustboroCity/scripts.pory"

# 974 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 975 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 976 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 977 "data/maps/RustboroCity/scripts.pory"
	step_end
# 978 "data/maps/RustboroCity/scripts.pory"

# 979 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 980 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 981 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 982 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 983 "data/maps/RustboroCity/scripts.pory"
	step_end
# 984 "data/maps/RustboroCity/scripts.pory"

# 985 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 986 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 987 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 988 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 989 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 990 "data/maps/RustboroCity/scripts.pory"
	step_end
# 991 "data/maps/RustboroCity/scripts.pory"

# 992 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 993 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 994 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 995 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 996 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 997 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 998 "data/maps/RustboroCity/scripts.pory"
	step_end
# 999 "data/maps/RustboroCity/scripts.pory"

# 1000 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 1001 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 1002 "data/maps/RustboroCity/scripts.pory"
	end
# 1003 "data/maps/RustboroCity/scripts.pory"

# 1004 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 1005 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON CORPORATION…\n"
# 1006 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to DEVON.\p"
# 1007 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 1008 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 1009 "data/maps/RustboroCity/scripts.pory"

# 1010 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 1011 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 1012 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 1013 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 1014 "data/maps/RustboroCity/scripts.pory"

# 1015 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 1016 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the POKéMON GYM\n"
# 1017 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 1018 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny GYM BADGE\n"
# 1019 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess TRAINERS begin to\l"
# 1020 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 1021 "data/maps/RustboroCity/scripts.pory"

# 1022 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 1023 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's RUSTBORO's GYM BADGE!\p"
# 1024 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the POKéMON GYM BADGES,\n"
# 1025 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO's is the coolest, I'd say.$"
# 1026 "data/maps/RustboroCity/scripts.pory"

# 1027 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 1028 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 1029 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 1030 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 1031 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL?$"
# 1032 "data/maps/RustboroCity/scripts.pory"

# 1033 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 1034 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the GYM LEADER, but…\p"
# 1035 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 1036 "data/maps/RustboroCity/scripts.pory"
	.string "my FIRE-type POKéMON…\p"
# 1037 "data/maps/RustboroCity/scripts.pory"
	.string "FIRE-type POKéMON don't match up\n"
# 1038 "data/maps/RustboroCity/scripts.pory"
	.string "well against a firefighter…$"
# 1039 "data/maps/RustboroCity/scripts.pory"

# 1040 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 1041 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1042 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1043 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 1044 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 1045 "data/maps/RustboroCity/scripts.pory"

# 1046 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 1047 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1048 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1049 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 1050 "data/maps/RustboroCity/scripts.pory"
	.string "SLATEPORT for his pet, PEEKO.\p"
# 1051 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 1052 "data/maps/RustboroCity/scripts.pory"
	.string "that PEEKO.$"
# 1053 "data/maps/RustboroCity/scripts.pory"

# 1054 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 1055 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\p"
# 1056 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 1057 "data/maps/RustboroCity/scripts.pory"
	.string "places with POKéMON, too.$"
# 1058 "data/maps/RustboroCity/scripts.pory"

# 1059 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 1060 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL!\p"
# 1061 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 1062 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare POKéMON easily?$"
# 1063 "data/maps/RustboroCity/scripts.pory"

# 1064 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 1065 "data/maps/RustboroCity/scripts.pory"
	.string "If a POKéMON gains experience in\n"
# 1066 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 1067 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 1068 "data/maps/RustboroCity/scripts.pory"

# 1069 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 1070 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON changes shape?\n"
# 1071 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 1072 "data/maps/RustboroCity/scripts.pory"

# 1073 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 1074 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON you get in a trade from\n"
# 1075 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 1076 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain GYM\n"
# 1077 "data/maps/RustboroCity/scripts.pory"
	.string "BADGES, it may not obey you…$"
# 1078 "data/maps/RustboroCity/scripts.pory"

# 1079 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 1080 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 1081 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 1082 "data/maps/RustboroCity/scripts.pory"

# 1083 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 1084 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 1085 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my GOODS!$"
# 1086 "data/maps/RustboroCity/scripts.pory"

# 1087 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 1088 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 1089 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic TRAINER who\n"
# 1090 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in PETALBURG WOODS!\p"
# 1091 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by TEAM AQUA!\n"
# 1092 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the DEVON GOODS back!\p"
# 1093 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 1094 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 1095 "data/maps/RustboroCity/scripts.pory"

# 1096 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 1097 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 1098 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 1099 "data/maps/RustboroCity/scripts.pory"

# 1100 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 1101 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 1102 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON GOODS?\p"
# 1103 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 1104 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 1105 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great TRAINER!\p"
# 1106 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 1107 "data/maps/RustboroCity/scripts.pory"
	.string "this item I've developed!$"
# 1108 "data/maps/RustboroCity/scripts.pory"

# 1109 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 1110 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 1111 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 1112 "data/maps/RustboroCity/scripts.pory"

# 1113 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1114 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 1115 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 1116 "data/maps/RustboroCity/scripts.pory"

# 1117 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister:
# 1118 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1119 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1120 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV!\p"
# 1121 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1122 "data/maps/RustboroCity/scripts.pory"
	.string "contact one another anytime!\p"
# 1123 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1124 "data/maps/RustboroCity/scripts.pory"

# 1125 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredMay:
# 1126 "data/maps/RustboroCity/scripts.pory"
	.string "Registered MAY\n"
# 1127 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1128 "data/maps/RustboroCity/scripts.pory"

# 1129 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayPassedBrineyWantToBattle:
# 1130 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, I passed\n"
# 1131 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY in PETALBURG WOODS.\p"
# 1132 "data/maps/RustboroCity/scripts.pory"
	.string "I guess he's on his way home to his\n"
# 1133 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1134 "data/maps/RustboroCity/scripts.pory"
	.string "How's your POKéDEX coming along,\n"
# 1135 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
# 1136 "data/maps/RustboroCity/scripts.pory"
	.string "So…\n"
# 1137 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle?$"
# 1138 "data/maps/RustboroCity/scripts.pory"

# 1139 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayOhHaventRaisedPokemonEnough:
# 1140 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1141 "data/maps/RustboroCity/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1142 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON very much?\p"
# 1143 "data/maps/RustboroCity/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1144 "data/maps/RustboroCity/scripts.pory"

# 1145 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayWantToBattle:
# 1146 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1147 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle here?$"
# 1148 "data/maps/RustboroCity/scripts.pory"

# 1149 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayImNotGoingToLose:
# 1150 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1151 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1152 "data/maps/RustboroCity/scripts.pory"

# 1153 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayDefeat:
# 1154 "data/maps/RustboroCity/scripts.pory"
	.string "Yikes!\n"
# 1155 "data/maps/RustboroCity/scripts.pory"
	.string "You're better than I expected!$"
# 1156 "data/maps/RustboroCity/scripts.pory"

# 1157 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint:
# 1158 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, MR. BRINEY, who\n"
# 1159 "data/maps/RustboroCity/scripts.pory"
	.string "I just passed…\p"
# 1160 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
# 1161 "data/maps/RustboroCity/scripts.pory"
	.string "might not know this, but MR. BRINEY\l"
# 1162 "data/maps/RustboroCity/scripts.pory"
	.string "was once a revered seafarer.$"
# 1163 "data/maps/RustboroCity/scripts.pory"

# 1164 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister:
# 1165 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1166 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1167 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV! Cool!\p"
# 1168 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1169 "data/maps/RustboroCity/scripts.pory"
	.string "get in touch anytime!\p"
# 1170 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1171 "data/maps/RustboroCity/scripts.pory"

# 1172 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan:
# 1173 "data/maps/RustboroCity/scripts.pory"
	.string "Registered BRENDAN\n"
# 1174 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1175 "data/maps/RustboroCity/scripts.pory"

# 1176 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanPassedBrineyWantToBattle:
# 1177 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, {PLAYER}, I walked\n"
# 1178 "data/maps/RustboroCity/scripts.pory"
	.string "by MR. BRINEY in PETALBURG WOODS.\p"
# 1179 "data/maps/RustboroCity/scripts.pory"
	.string "I bet he was on his way home to his\n"
# 1180 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1181 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, how's your POKéDEX?\n"
# 1182 "data/maps/RustboroCity/scripts.pory"
	.string "Have you filled in any pages yet?\p"
# 1183 "data/maps/RustboroCity/scripts.pory"
	.string "Mine rules.\p"
# 1184 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle to test how\n"
# 1185 "data/maps/RustboroCity/scripts.pory"
	.string "far you've progressed?$"
# 1186 "data/maps/RustboroCity/scripts.pory"

# 1187 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanNoConfidenceInPokemon:
# 1188 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1189 "data/maps/RustboroCity/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1190 "data/maps/RustboroCity/scripts.pory"

# 1191 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanWantToBattle:
# 1192 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1193 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle with me?$"
# 1194 "data/maps/RustboroCity/scripts.pory"

# 1195 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanIWontGoEasy:
# 1196 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1197 "data/maps/RustboroCity/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1198 "data/maps/RustboroCity/scripts.pory"

# 1199 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanDefeat:
# 1200 "data/maps/RustboroCity/scripts.pory"
	.string "Hmm…\n"
# 1201 "data/maps/RustboroCity/scripts.pory"
	.string "You're pretty good.$"
# 1202 "data/maps/RustboroCity/scripts.pory"

# 1203 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint:
# 1204 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, you know\n"
# 1205 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY? The guy I just passed?\p"
# 1206 "data/maps/RustboroCity/scripts.pory"
	.string "I bet you didn't know this, since you\n"
# 1207 "data/maps/RustboroCity/scripts.pory"
	.string "just moved here, {PLAYER}, but\l"
# 1208 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY was once a great sailor.$"
# 1209 "data/maps/RustboroCity/scripts.pory"

# 1210 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1211 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1212 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 1213 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1214 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1215 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 1216 "data/maps/RustboroCity/scripts.pory"

# 1217 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1218 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORPORATION\p"
# 1219 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1220 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 1221 "data/maps/RustboroCity/scripts.pory"

# 1222 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1223 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\n"
# 1224 "data/maps/RustboroCity/scripts.pory"
	.string "LEADER: STEVE\p"
# 1225 "data/maps/RustboroCity/scripts.pory"
	.string "“The firefighting genius!”$"
# 1226 "data/maps/RustboroCity/scripts.pory"

# 1227 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1228 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORP. BRANCH OFFICE\p"
# 1229 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to DEVON employees\n"
# 1230 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1231 "data/maps/RustboroCity/scripts.pory"

# 1232 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1233 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY\p"
# 1234 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1235 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 1236 "data/maps/RustboroCity/scripts.pory"

# 1237 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1238 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL\p"
# 1239 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1240 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON!”$"
# 1241 "data/maps/RustboroCity/scripts.pory"

# 1242 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1243 "data/maps/RustboroCity/scripts.pory"
	.string "CUTTER'S HOUSE$"
# 1244 "data/maps/RustboroCity/scripts.pory"

# 1245 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1246 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing new features\n"
# 1247 "data/maps/RustboroCity/scripts.pory"
	.string "for the POKéNAV…\p"
# 1248 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 1249 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, may I see that POKéNAV?\n"
# 1250 "data/maps/RustboroCity/scripts.pory"
	.string "The one our PRESIDENT gave you?$"
# 1251 "data/maps/RustboroCity/scripts.pory"

# 1252 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1253 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 1254 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 1255 "data/maps/RustboroCity/scripts.pory"
	.string "MATCH CALL to your POKéNAV.\p"
# 1256 "data/maps/RustboroCity/scripts.pory"
	.string "Using the MATCH CALL feature,\n"
# 1257 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 1258 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your POKéNAV.\p"
# 1259 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
# 1260 "data/maps/RustboroCity/scripts.pory"
	.string "be registered in your POKéNAV.\p"
# 1261 "data/maps/RustboroCity/scripts.pory"
	.string "Test it out.\n"
# 1262 "data/maps/RustboroCity/scripts.pory"
	.string "Please give our PRESIDENT a call.$"
# 1263 "data/maps/RustboroCity/scripts.pory"

# 1264 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1265 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the POKéNAV.$"
# 1266 "data/maps/RustboroCity/scripts.pory"

# 1267 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedStatEdits:
# 1268 "data/maps/RustboroCity/scripts.pory"
	.string "I also added another feature named\n"
# 1269 "data/maps/RustboroCity/scripts.pory"
	.string "EDIT STATS to your POKéNAV.\p"
# 1270 "data/maps/RustboroCity/scripts.pory"
	.string "You can use it to edit the IVs\n"
# 1271 "data/maps/RustboroCity/scripts.pory"
	.string "and EVs of your POKéMON.\p"
# 1272 "data/maps/RustboroCity/scripts.pory"
	.string "To use it, just select a POKéMON\n"
# 1273 "data/maps/RustboroCity/scripts.pory"
	.string "from within the party menu.\p"
# 1274 "data/maps/RustboroCity/scripts.pory"
	.string "Would you like an explanation\n"
# 1275 "data/maps/RustboroCity/scripts.pory"
	.string "of IVs and EVs?$"
# 1276 "data/maps/RustboroCity/scripts.pory"

# 1277 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1278 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 1279 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 1280 "data/maps/RustboroCity/scripts.pory"

# 1281 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1282 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 1283 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 1284 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another TRAINER.\p"
# 1285 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two TRAINERS\n"
# 1286 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more POKéMON,\l"
# 1287 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1288 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1289 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two TRAINERS by yourself?$"

RustboroCity_EventScript_Misa::
# 1293 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1294 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1295 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1296 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroPlayerStepBack
# 1297 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1298 "data/maps/RustboroCity/scripts.pory"
	opendoor 16, 38
# 1299 "data/maps/RustboroCity/scripts.pory"
	waitdooranim
# 1300 "data/maps/RustboroCity/scripts.pory"
	addobject 17
# 1301 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroCity_Movement_PlayerWalkDown
# 1302 "data/maps/RustboroCity/scripts.pory"
	waitmovement 17
# 1303 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 1304 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_MISA_OUTSIDE
# 1305 "data/maps/RustboroCity/scripts.pory"
	closedoor 16, 38
# 1306 "data/maps/RustboroCity/scripts.pory"
	waitdooranim
# 1307 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 1308 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1309 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroExclaim
# 1310 "data/maps/RustboroCity/scripts.pory"
	waitmovement 17
# 1311 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 1312 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_MISA_THEME, FALSE
# 1313 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 1314 "data/maps/RustboroCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 1315 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroMisa1, MSGBOX_DEFAULT
# 1316 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1317 "data/maps/RustboroCity/scripts.pory"
	goto MisaPlayerMeetRival
	end


MisaPlayerMeetRival::
# 1322 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroMisa4, MSGBOX_YESNO
# 1323 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MisaPlayerMeetRival_2
MisaPlayerMeetRival_1:
# 1326 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MisaPlayerMeetRival_5
MisaPlayerMeetRival_4:
	end

MisaPlayerMeetRival_2:
# 1324 "data/maps/RustboroCity/scripts.pory"
	goto MisaAgreeMeetRival
	goto MisaPlayerMeetRival_1

MisaPlayerMeetRival_5:
# 1327 "data/maps/RustboroCity/scripts.pory"
	goto MisaDeclineMeetRival
	goto MisaPlayerMeetRival_4


MisaAgreeMeetRival::
# 1333 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroMisaIfYes, MSGBOX_AUTOCLOSE
# 1334 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1335 "data/maps/RustboroCity/scripts.pory"
	call MisaEnd
# 1336 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 1337 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end


MisaDeclineMeetRival::
# 1342 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroMisaIfNo, MSGBOX_YESNO
# 1343 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MisaDeclineMeetRival_2
MisaDeclineMeetRival_1:
# 1346 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MisaDeclineMeetRival_5
MisaDeclineMeetRival_4:
	end

MisaDeclineMeetRival_2:
# 1344 "data/maps/RustboroCity/scripts.pory"
	goto MisaAgreeMeetRival
	goto MisaDeclineMeetRival_1

MisaDeclineMeetRival_5:
# 1347 "data/maps/RustboroCity/scripts.pory"
	goto MisaDeclineMeetRival
	goto MisaDeclineMeetRival_4


MisaEnd::
# 1353 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_TEMP_5, MisaEnd_2
# 1374 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1375 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroExclaim
# 1376 "data/maps/RustboroCity/scripts.pory"
	waitmovement 17
# 1377 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 1378 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroMisa5, MSGBOX_AUTOCLOSE
# 1379 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1380 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroMisaLeave1
# 1381 "data/maps/RustboroCity/scripts.pory"
	waitmovement 17
# 1382 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroFaceRight
# 1383 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1384 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroMisaLeave2
# 1385 "data/maps/RustboroCity/scripts.pory"
	waitmovement 17
# 1386 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 1387 "data/maps/RustboroCity/scripts.pory"
	removeobject 17
# 1388 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 1389 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_MISA_OUTSIDE
# 1390 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_ROUTE115
# 1391 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_MISA_STATE, 1
MisaEnd_1:
	return

MisaEnd_2:
# 1354 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1355 "data/maps/RustboroCity/scripts.pory"
	applymovement 18, RustboroExclaim
# 1356 "data/maps/RustboroCity/scripts.pory"
	waitmovement 18
# 1357 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 1358 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroMisa5, MSGBOX_AUTOCLOSE
# 1359 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1360 "data/maps/RustboroCity/scripts.pory"
	applymovement 18, RustboroMisaLeaveGym1
# 1361 "data/maps/RustboroCity/scripts.pory"
	waitmovement 18
# 1362 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroFaceLeft
# 1363 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1364 "data/maps/RustboroCity/scripts.pory"
	applymovement 18, RustboroMisaLeaveGym2
# 1365 "data/maps/RustboroCity/scripts.pory"
	waitmovement 18
# 1366 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 1367 "data/maps/RustboroCity/scripts.pory"
	removeobject 18
# 1368 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 1369 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_MISA_OUTSIDE
# 1370 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_ROUTE115
# 1371 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_MISA_STATE, 1
	goto MisaEnd_1


RustboroCity_Eventscript_Promise_To_Misa::
# 1397 "data/maps/RustboroCity/scripts.pory"
	lock
# 1398 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Eventscript_Promise_To_Misa_Text_0, MSGBOX_AUTOCLOSE
# 1400 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1401 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 1402 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1403 "data/maps/RustboroCity/scripts.pory"
	release
	end


RustboroCityGym_EventScript_Misa::
# 1408 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1409 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_TEMP_5
# 1410 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1411 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1412 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroPlayerStepBack
# 1413 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1414 "data/maps/RustboroCity/scripts.pory"
	opendoor 27, 19
# 1415 "data/maps/RustboroCity/scripts.pory"
	waitdooranim
# 1416 "data/maps/RustboroCity/scripts.pory"
	addobject 18
# 1417 "data/maps/RustboroCity/scripts.pory"
	applymovement 18, RustboroCity_Movement_PlayerWalkDown
# 1418 "data/maps/RustboroCity/scripts.pory"
	waitmovement 18
# 1419 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 1420 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_MISA_OUTSIDE
# 1421 "data/maps/RustboroCity/scripts.pory"
	closedoor 27, 19
# 1422 "data/maps/RustboroCity/scripts.pory"
	waitdooranim
# 1423 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 1424 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1425 "data/maps/RustboroCity/scripts.pory"
	applymovement 18, RustboroExclaim
# 1426 "data/maps/RustboroCity/scripts.pory"
	waitmovement 18
# 1427 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 1428 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_MISA_THEME, FALSE
# 1429 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 1430 "data/maps/RustboroCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 1431 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroMisa1, MSGBOX_DEFAULT
# 1432 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1433 "data/maps/RustboroCity/scripts.pory"
	goto MisaPlayerMeetRival
	end


RustboroCity_LunaDexNav::
# 1467 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1468 "data/maps/RustboroCity/scripts.pory"
	pokenavcall Route104_LunaDexNavText
# 1469 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1470 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 1471 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 2
# 1472 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_NPC_LUNA_HOUSE_PETALBURG
# 1473 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_NPC_RATDUARDO_SIDEQUEST
# 1474 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_JIMMY_SNOWDRIFT_CITY
# 1475 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_WIPE_COUNTER, 0
# 1476 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end


RustboroCity_EventScript_ExplainIVsEVs::
# 1481 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_ExplainIVsEVs_Text_0, MSGBOX_DEFAULT
# 1498 "data/maps/RustboroCity/scripts.pory"
	waitmessage
	return


RustboroCity_EventScript_ImportanceOfStatEditor::
# 1503 "data/maps/RustboroCity/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_HARD
	goto_if_eq RustboroCity_EventScript_ImportanceOfStatEditor_2
# 1511 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_ImportanceOfStatEditor_Text_1, MSGBOX_DEFAULT
RustboroCity_EventScript_ImportanceOfStatEditor_1:
# 1516 "data/maps/RustboroCity/scripts.pory"
	waitmessage
	return

RustboroCity_EventScript_ImportanceOfStatEditor_2:
# 1504 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_ImportanceOfStatEditor_Text_0, MSGBOX_DEFAULT
	goto RustboroCity_EventScript_ImportanceOfStatEditor_1


# 1520 "data/maps/RustboroCity/scripts.pory"
RustboroExclaim:
# 1520 "data/maps/RustboroCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 1522 "data/maps/RustboroCity/scripts.pory"
RustboroFaceLeft:
# 1522 "data/maps/RustboroCity/scripts.pory"
	face_left
	step_end

# 1524 "data/maps/RustboroCity/scripts.pory"
RustboroFaceRight:
# 1525 "data/maps/RustboroCity/scripts.pory"
	face_right
	step_end

# 1528 "data/maps/RustboroCity/scripts.pory"
RustboroFaceUp:
# 1529 "data/maps/RustboroCity/scripts.pory"
	face_up
	step_end

# 1532 "data/maps/RustboroCity/scripts.pory"
RustboroMisaLeave1:
# 1533 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1534 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

# 1537 "data/maps/RustboroCity/scripts.pory"
RustboroMisaLeave2:
# 1538 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1538 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1538 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1539 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1539 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1539 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1539 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1539 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1539 "data/maps/RustboroCity/scripts.pory"
	walk_up
	step_end

# 1542 "data/maps/RustboroCity/scripts.pory"
RustboroMisaLeaveGym1:
# 1543 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1544 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

# 1547 "data/maps/RustboroCity/scripts.pory"
RustboroMisaLeaveGym2:
# 1548 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1548 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1548 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1548 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1548 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1548 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1548 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1548 "data/maps/RustboroCity/scripts.pory"
	walk_left
	step_end

# 1551 "data/maps/RustboroCity/scripts.pory"
RustboroPlayerStepBack:
# 1552 "data/maps/RustboroCity/scripts.pory"
	lock_facing_direction
# 1553 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1554 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 1555 "data/maps/RustboroCity/scripts.pory"
	unlock_facing_direction
	step_end

RustboroCity_Eventscript_Promise_To_Misa_Text_0:
# 1398 "data/maps/RustboroCity/scripts.pory"
	.string "I should probably keep my promise to\n MISA…$"

RustboroCity_EventScript_ExplainIVsEVs_Text_0:
# 1481 "data/maps/RustboroCity/scripts.pory"
	.string "IVs, or INDIVIDUAL VALUES, are\n the inherent talents of a POKéMON and\l can range from 0-31.\p This stat is determined from birth.\p Luckily, most POKéMON in HOENN are\n born equal in this regard.\p EVs, or EFFORT VALUES, are gained\n from battling POKéMON.\p Each stat, such as HP, ATK, etc.,\n can gain EVs from defeating certain\l POKéMON.\p A POKéMON can have up to 510 EVs total,\n with a maximum of 252 in a single stat.\p A POKéMON with EVs can be much stronger\n than one without any!\p I recommend you take a look\n at the STAT EDITOR.$"

RustboroCity_EventScript_ImportanceOfStatEditor_Text_0:
# 1504 "data/maps/RustboroCity/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}The STAT EDITOR is an extremely useful\n mechanic to take advantage of.\p While complex EV spreads aren't needed,\n giving all of your POKéMON proper EVs\l is a requirement.$"

RustboroCity_EventScript_ImportanceOfStatEditor_Text_1:
# 1511 "data/maps/RustboroCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}The STAT EDITOR is an extremely useful\n mechanic to take advantage of.\p Using it will make your playthrough\n much easier.$"

RustboroMisa1::
# 1437 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! Excuse me.\n  I didn't see you there.\p My name's MISA.\n … … … …\p {PLAYER}? I see.\n That's a nice name!\p And that {STR_VAR_1}… So cute!\n So you're a new TRAINER? That's great!\p  It looks like you're already raising\n  your POKéMON with love and care.\p I actually have a son around the\n same age as you.\p He's also starting his journey soon.\n He should be on ROUTE 115 preparing.$"

RustboroMisa4::
# 1452 "data/maps/RustboroCity/scripts.pory"
	.string "Could you do me a favor and go\n meet him? He's always been a bit…\l different and could use a new friend.$"

RustboroMisaIfYes::
# 1456 "data/maps/RustboroCity/scripts.pory"
	.string "Thank you! You're so sweet.\n Just head north to get to ROUTE 115.$"

RustboroMisaIfNo::
# 1459 "data/maps/RustboroCity/scripts.pory"
	.string "Oh… Please don't be like that.\n Would you reconsider?$"

RustboroMisa5::
# 1462 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! I'm almost late for the\n meeting! I have to go.\p It was nice meeting you, {PLAYER}!$"
