# 1 "data/maps/Route119/scripts.pory"
.set LOCALID_RIVAL, 16
# 2 "data/maps/Route119/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 25
# 3 "data/maps/Route119/scripts.pory"
.set LOCALID_SCOTT, 43
# 4 "data/maps/Route119/scripts.pory"

# 5 "data/maps/Route119/scripts.pory"
Route119_MapScripts::
# 6 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route119_OnResume
# 7 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_OnTransition
# 8 "data/maps/Route119/scripts.pory"
	.byte 0
# 9 "data/maps/Route119/scripts.pory"

# 10 "data/maps/Route119/scripts.pory"
Route119_OnResume:
# 11 "data/maps/Route119/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route119_EventScript_TryRemoveKecleon
# 12 "data/maps/Route119/scripts.pory"
	end
# 13 "data/maps/Route119/scripts.pory"

# 14 "data/maps/Route119/scripts.pory"
Route119_EventScript_TryRemoveKecleon::
# 15 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 16 "data/maps/Route119/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 17 "data/maps/Route119/scripts.pory"
	removeobject VAR_LAST_TALKED
# 18 "data/maps/Route119/scripts.pory"
	return
# 19 "data/maps/Route119/scripts.pory"

# 20 "data/maps/Route119/scripts.pory"
Route119_OnTransition:
# 21 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 22 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 23 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 1, Route119_EventScript_MoveInstituteWorkersDownstairs
# 24 "data/maps/Route119/scripts.pory"
	special SetRoute119Weather
# 25 "data/maps/Route119/scripts.pory"
	end
# 26 "data/maps/Route119/scripts.pory"

# 27 "data/maps/Route119/scripts.pory"
Route119_EventScript_MoveInstituteWorkersDownstairs::
# 28 "data/maps/Route119/scripts.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 29 "data/maps/Route119/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS
# 30 "data/maps/Route119/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 2
# 31 "data/maps/Route119/scripts.pory"
	return
# 32 "data/maps/Route119/scripts.pory"

# 33 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalTrigger1::
# 34 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 1
# 35 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
# 36 "data/maps/Route119/scripts.pory"
	end
# 37 "data/maps/Route119/scripts.pory"

# 38 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalTrigger2::
# 39 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 2
# 40 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
# 41 "data/maps/Route119/scripts.pory"
	end
# 42 "data/maps/Route119/scripts.pory"

# 43 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter::
# 44 "data/maps/Route119/scripts.pory"
	lockall
# 45 "data/maps/Route119/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 46 "data/maps/Route119/scripts.pory"
	checkplayergender
# 47 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route119_EventScript_PlayMayMusic
# 48 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route119_EventScript_PlayBrendanMusic
# 49 "data/maps/Route119/scripts.pory"
	delay 65
# 50 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_RivalEnter1
# 51 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_RivalEnter2
# 52 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 53 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route119/scripts.pory"
	delay 30
# 55 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetRivalPos1
# 56 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetRivalPos2
# 57 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 58 "data/maps/Route119/scripts.pory"
	addobject LOCALID_RIVAL
# 59 "data/maps/Route119/scripts.pory"
	delay 30
# 60 "data/maps/Route119/scripts.pory"
	checkplayergender
# 61 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route119_EventScript_BattleMay
# 62 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route119_EventScript_BattleBrendan
# 63 "data/maps/Route119/scripts.pory"
	releaseall
# 64 "data/maps/Route119/scripts.pory"
	end
# 65 "data/maps/Route119/scripts.pory"

# 66 "data/maps/Route119/scripts.pory"
Route119_EventScript_PlayMayMusic::
# 67 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 68 "data/maps/Route119/scripts.pory"
	return
# 69 "data/maps/Route119/scripts.pory"

# 70 "data/maps/Route119/scripts.pory"
Route119_EventScript_PlayBrendanMusic::
# 71 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 72 "data/maps/Route119/scripts.pory"
	return
# 73 "data/maps/Route119/scripts.pory"

# 74 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMay::
# 75 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayIntro, MSGBOX_DEFAULT
# 76 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_BattleMayTorchic
# 77 "data/maps/Route119/scripts.pory"
	end
# 78 "data/maps/Route119/scripts.pory"

# 79 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayTorchic::
# 80 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TORCHIC, Route119_Text_MayDefeat
# 81 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 82 "data/maps/Route119/scripts.pory"
	end
# 83 "data/maps/Route119/scripts.pory"

# 84 "data/maps/Route119/scripts.pory"
Route119_EventScript_DefeatedMay::
# 85 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayPresentForYou, MSGBOX_DEFAULT
# 86 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_GiveFlyHM
# 87 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayExplainFly, MSGBOX_DEFAULT
# 88 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive
# 89 "data/maps/Route119/scripts.pory"
	end
# 90 "data/maps/Route119/scripts.pory"

# 91 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendan::
# 92 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanIntro, MSGBOX_DEFAULT
# 93 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_BattleBrendanTreecko
# 94 "data/maps/Route119/scripts.pory"
	end
# 95 "data/maps/Route119/scripts.pory"

# 96 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanTreecko::
# 97 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TREECKO, Route119_Text_BrendanDefeat
# 98 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 99 "data/maps/Route119/scripts.pory"
	end
# 100 "data/maps/Route119/scripts.pory"

# 101 "data/maps/Route119/scripts.pory"
Route119_EventScript_DefeatedBrendan::
# 102 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanIllGiveYouThis, MSGBOX_DEFAULT
# 103 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_GiveFlyHM
# 104 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanExplainFly, MSGBOX_DEFAULT
# 105 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive
# 106 "data/maps/Route119/scripts.pory"
	end
# 107 "data/maps/Route119/scripts.pory"

# 108 "data/maps/Route119/scripts.pory"
Route119_EventScript_GiveFlyHM::
# 109 "data/maps/Route119/scripts.pory"
	giveitem ITEM_HM_FLY
# 110 "data/maps/Route119/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
# 111 "data/maps/Route119/scripts.pory"
	return
# 112 "data/maps/Route119/scripts.pory"

# 113 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive::
# 114 "data/maps/Route119/scripts.pory"
	closemessage
# 115 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetRivalPos1
# 116 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetRivalPos2
# 117 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_RIVAL
# 118 "data/maps/Route119/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 119 "data/maps/Route119/scripts.pory"
	delay 30
# 120 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_RivalExit1
# 121 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_RivalExit2
# 122 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 123 "data/maps/Route119/scripts.pory"
	setvar VAR_ROUTE119_STATE, 1
# 124 "data/maps/Route119/scripts.pory"
	savebgm MUS_DUMMY
# 125 "data/maps/Route119/scripts.pory"
	fadedefaultbgm
# 126 "data/maps/Route119/scripts.pory"
	delay 60
# 127 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetScottPos1
# 128 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetScottPos2
# 129 "data/maps/Route119/scripts.pory"
	addobject LOCALID_SCOTT
# 130 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_SCOTT, Route119_Movement_ScottEnter
# 131 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 132 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 133 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ScottWayToGoBeSeeingYou, MSGBOX_DEFAULT
# 134 "data/maps/Route119/scripts.pory"
	closemessage
# 135 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_ScottExit1
# 136 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_ScottExit2
# 137 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_SCOTT
# 138 "data/maps/Route119/scripts.pory"
	releaseall
# 139 "data/maps/Route119/scripts.pory"
	end
# 140 "data/maps/Route119/scripts.pory"

# 141 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetScottPos1::
# 142 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 27, 25
# 143 "data/maps/Route119/scripts.pory"
	return
# 144 "data/maps/Route119/scripts.pory"

# 145 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetScottPos2::
# 146 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 28, 25
# 147 "data/maps/Route119/scripts.pory"
	return
# 148 "data/maps/Route119/scripts.pory"

# 149 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottExit1::
# 150 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_SCOTT, Route119_Movement_ScottExit1
# 151 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 152 "data/maps/Route119/scripts.pory"
	return
# 153 "data/maps/Route119/scripts.pory"

# 154 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottExit2::
# 155 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_SCOTT, Route119_Movement_ScottExit2
# 156 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 157 "data/maps/Route119/scripts.pory"
	return
# 158 "data/maps/Route119/scripts.pory"

# 159 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEnter1::
# 160 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalEnter1
# 161 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 162 "data/maps/Route119/scripts.pory"
	return
# 163 "data/maps/Route119/scripts.pory"

# 164 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEnter2::
# 165 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalEnter2
# 166 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 167 "data/maps/Route119/scripts.pory"
	return
# 168 "data/maps/Route119/scripts.pory"

# 169 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExit1::
# 170 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_Movement_PlayerWatchRivalExit1
# 171 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalExit1
# 172 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 173 "data/maps/Route119/scripts.pory"
	return
# 174 "data/maps/Route119/scripts.pory"

# 175 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExit2::
# 176 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_Movement_PlayerWatchRivalExit2
# 177 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalExit2
# 178 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 179 "data/maps/Route119/scripts.pory"
	return
# 180 "data/maps/Route119/scripts.pory"

# 181 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetRivalPos1::
# 182 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 25, 32
# 183 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 25, 32
# 184 "data/maps/Route119/scripts.pory"
	return
# 185 "data/maps/Route119/scripts.pory"

# 186 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetRivalPos2::
# 187 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 26, 32
# 188 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 26, 32
# 189 "data/maps/Route119/scripts.pory"
	return
# 190 "data/maps/Route119/scripts.pory"

# 191 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit1:
# 192 "data/maps/Route119/scripts.pory"
	delay_16
# 193 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_right
# 194 "data/maps/Route119/scripts.pory"
	delay_8
# 195 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_up
# 196 "data/maps/Route119/scripts.pory"
	step_end
# 197 "data/maps/Route119/scripts.pory"

# 198 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit2:
# 199 "data/maps/Route119/scripts.pory"
	delay_16
# 200 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_left
# 201 "data/maps/Route119/scripts.pory"
	delay_8
# 202 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_up
# 203 "data/maps/Route119/scripts.pory"
	step_end
# 204 "data/maps/Route119/scripts.pory"

# 205 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter1:
# 206 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 207 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 208 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 209 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 210 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 211 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 212 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 213 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 214 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 215 "data/maps/Route119/scripts.pory"
	step_end
# 216 "data/maps/Route119/scripts.pory"

# 217 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter2:
# 218 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 219 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 220 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 221 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 222 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 223 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 224 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 225 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 226 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 227 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 228 "data/maps/Route119/scripts.pory"
	step_end
# 229 "data/maps/Route119/scripts.pory"

# 230 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit1:
# 231 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 232 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 233 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 234 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 235 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 236 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 237 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 238 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 239 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 240 "data/maps/Route119/scripts.pory"
	step_end
# 241 "data/maps/Route119/scripts.pory"

# 242 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit2:
# 243 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 244 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 245 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 246 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 247 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 248 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 249 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 250 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 251 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 252 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 253 "data/maps/Route119/scripts.pory"
	step_end
# 254 "data/maps/Route119/scripts.pory"

# 255 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottEnter:
# 256 "data/maps/Route119/scripts.pory"
	walk_down
# 257 "data/maps/Route119/scripts.pory"
	walk_down
# 258 "data/maps/Route119/scripts.pory"
	walk_down
# 259 "data/maps/Route119/scripts.pory"
	walk_down
# 260 "data/maps/Route119/scripts.pory"
	walk_left
# 261 "data/maps/Route119/scripts.pory"
	walk_left
# 262 "data/maps/Route119/scripts.pory"
	walk_down
# 263 "data/maps/Route119/scripts.pory"
	step_end
# 264 "data/maps/Route119/scripts.pory"

# 265 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit1:
# 266 "data/maps/Route119/scripts.pory"
	walk_up
# 267 "data/maps/Route119/scripts.pory"
	walk_right
# 268 "data/maps/Route119/scripts.pory"
	walk_right
# 269 "data/maps/Route119/scripts.pory"
	walk_up
# 270 "data/maps/Route119/scripts.pory"
	walk_up
# 271 "data/maps/Route119/scripts.pory"
	walk_up
# 272 "data/maps/Route119/scripts.pory"
	walk_up
# 273 "data/maps/Route119/scripts.pory"
	walk_up
# 274 "data/maps/Route119/scripts.pory"
	step_end
# 275 "data/maps/Route119/scripts.pory"

# 276 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit2:
# 277 "data/maps/Route119/scripts.pory"
	walk_up
# 278 "data/maps/Route119/scripts.pory"
	walk_right
# 279 "data/maps/Route119/scripts.pory"
	walk_up
# 280 "data/maps/Route119/scripts.pory"
	walk_up
# 281 "data/maps/Route119/scripts.pory"
	walk_up
# 282 "data/maps/Route119/scripts.pory"
	walk_up
# 283 "data/maps/Route119/scripts.pory"
	walk_up
# 284 "data/maps/Route119/scripts.pory"
	step_end
# 285 "data/maps/Route119/scripts.pory"

# 286 "data/maps/Route119/scripts.pory"
Route119_EventScript_CyclingTriathleteM::
# 287 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TallGrassSnaresBikeTires, MSGBOX_NPC
# 288 "data/maps/Route119/scripts.pory"
	end
# 289 "data/maps/Route119/scripts.pory"

# 290 "data/maps/Route119/scripts.pory"
Route119_EventScript_RouteSignFortree::
# 291 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RouteSignFortree, MSGBOX_SIGN
# 292 "data/maps/Route119/scripts.pory"
	end
# 293 "data/maps/Route119/scripts.pory"

# 294 "data/maps/Route119/scripts.pory"
Route119_EventScript_WeatherInstituteSign::
# 295 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_WeatherInstitute, MSGBOX_SIGN
# 296 "data/maps/Route119/scripts.pory"
	end
# 297 "data/maps/Route119/scripts.pory"

# 298 "data/maps/Route119/scripts.pory"
Route119_EventScript_Brent::
# 299 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_BRENT, Route119_Text_BrentIntro, Route119_Text_BrentDefeat
# 300 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrentPostBattle, MSGBOX_AUTOCLOSE
# 301 "data/maps/Route119/scripts.pory"
	end
# 302 "data/maps/Route119/scripts.pory"

# 303 "data/maps/Route119/scripts.pory"
Route119_EventScript_Donald::
# 304 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DONALD, Route119_Text_DonaldIntro, Route119_Text_DonaldDefeat
# 305 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DonaldPostBattle, MSGBOX_AUTOCLOSE
# 306 "data/maps/Route119/scripts.pory"
	end
# 307 "data/maps/Route119/scripts.pory"

# 308 "data/maps/Route119/scripts.pory"
Route119_EventScript_Taylor::
# 309 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAYLOR, Route119_Text_TaylorIntro, Route119_Text_TaylorDefeat
# 310 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
# 311 "data/maps/Route119/scripts.pory"
	end
# 312 "data/maps/Route119/scripts.pory"

# 313 "data/maps/Route119/scripts.pory"
Route119_EventScript_Doug::
# 314 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DOUG, Route119_Text_DougIntro, Route119_Text_DougDefeat
# 315 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DougPostBattle, MSGBOX_AUTOCLOSE
# 316 "data/maps/Route119/scripts.pory"
	end
# 317 "data/maps/Route119/scripts.pory"

# 318 "data/maps/Route119/scripts.pory"
Route119_EventScript_Greg::
# 319 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_GREG, Route119_Text_GregIntro, Route119_Text_GregDefeat
# 320 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_GregPostBattle, MSGBOX_AUTOCLOSE
# 321 "data/maps/Route119/scripts.pory"
	end
# 322 "data/maps/Route119/scripts.pory"

# 323 "data/maps/Route119/scripts.pory"
Route119_EventScript_Kent::
# 324 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_KENT, Route119_Text_KentIntro, Route119_Text_KentDefeat
# 325 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_KentPostBattle, MSGBOX_AUTOCLOSE
# 326 "data/maps/Route119/scripts.pory"
	end
# 327 "data/maps/Route119/scripts.pory"

# 328 "data/maps/Route119/scripts.pory"
Route119_EventScript_Jackson::
# 329 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_JACKSON_1, Route119_Text_JacksonIntro, Route119_Text_JacksonDefeat, Route119_EventScript_RegisterJackson
# 330 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 331 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route119_EventScript_RematchJackson
# 332 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostBattle, MSGBOX_DEFAULT
# 333 "data/maps/Route119/scripts.pory"
	release
# 334 "data/maps/Route119/scripts.pory"
	end
# 335 "data/maps/Route119/scripts.pory"

# 336 "data/maps/Route119/scripts.pory"
Route119_EventScript_RegisterJackson::
# 337 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 338 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 339 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonRegister, MSGBOX_DEFAULT
# 340 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_JACKSON_1
# 341 "data/maps/Route119/scripts.pory"
	release
# 342 "data/maps/Route119/scripts.pory"
	end
# 343 "data/maps/Route119/scripts.pory"

# 344 "data/maps/Route119/scripts.pory"
Route119_EventScript_RematchJackson::
# 345 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_JACKSON_1, Route119_Text_JacksonRematchIntro, Route119_Text_JacksonRematchDefeat
# 346 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostRematch, MSGBOX_AUTOCLOSE
# 347 "data/maps/Route119/scripts.pory"
	end
# 348 "data/maps/Route119/scripts.pory"

# 349 "data/maps/Route119/scripts.pory"
Route119_EventScript_Catherine::
# 350 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CATHERINE_1, Route119_Text_CatherineIntro, Route119_Text_CatherineDefeat, Route119_EventScript_RegisterCatherine
# 351 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 352 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route119_EventScript_RematchCatherine
# 353 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostBattle, MSGBOX_DEFAULT
# 354 "data/maps/Route119/scripts.pory"
	release
# 355 "data/maps/Route119/scripts.pory"
	end
# 356 "data/maps/Route119/scripts.pory"

# 357 "data/maps/Route119/scripts.pory"
Route119_EventScript_RegisterCatherine::
# 358 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 359 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 360 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherineRegister, MSGBOX_DEFAULT
# 361 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_CATHERINE_1
# 362 "data/maps/Route119/scripts.pory"
	release
# 363 "data/maps/Route119/scripts.pory"
	end
# 364 "data/maps/Route119/scripts.pory"

# 365 "data/maps/Route119/scripts.pory"
Route119_EventScript_RematchCatherine::
# 366 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_CATHERINE_1, Route119_Text_CatherineRematchIntro, Route119_Text_CatherineRematchDefeat
# 367 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostRematch, MSGBOX_AUTOCLOSE
# 368 "data/maps/Route119/scripts.pory"
	end
# 369 "data/maps/Route119/scripts.pory"

# 370 "data/maps/Route119/scripts.pory"
Route119_EventScript_Hugh::
# 371 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HUGH, Route119_Text_HughIntro, Route119_Text_HughDefeat
# 372 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HughPostBattle, MSGBOX_AUTOCLOSE
# 373 "data/maps/Route119/scripts.pory"
	end
# 374 "data/maps/Route119/scripts.pory"

# 375 "data/maps/Route119/scripts.pory"
Route119_EventScript_Phil::
# 376 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_PHIL, Route119_Text_PhilIntro, Route119_Text_PhilDefeat
# 377 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_PhilPostBattle, MSGBOX_AUTOCLOSE
# 378 "data/maps/Route119/scripts.pory"
	end
# 379 "data/maps/Route119/scripts.pory"

# 380 "data/maps/Route119/scripts.pory"
Route119_EventScript_Yasu::
# 381 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_YASU, Route119_Text_YasuIntro, Route119_Text_YasuDefeat
# 382 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_YasuPostBattle, MSGBOX_AUTOCLOSE
# 383 "data/maps/Route119/scripts.pory"
	end
# 384 "data/maps/Route119/scripts.pory"

# 385 "data/maps/Route119/scripts.pory"
Route119_EventScript_Takashi::
# 386 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAKASHI, Route119_Text_TakashiIntro, Route119_Text_TakashiDefeat
# 387 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
# 388 "data/maps/Route119/scripts.pory"
	end
# 389 "data/maps/Route119/scripts.pory"

# 390 "data/maps/Route119/scripts.pory"
Route119_EventScript_Hideo::
# 391 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HIDEO, Route119_Text_HideoIntro, Route119_Text_HideoDefeat
# 392 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HideoPostBattle, MSGBOX_AUTOCLOSE
# 393 "data/maps/Route119/scripts.pory"
	end
# 394 "data/maps/Route119/scripts.pory"

# 395 "data/maps/Route119/scripts.pory"
Route119_EventScript_Chris::
# 396 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CHRIS, Route119_Text_ChrisIntro, Route119_Text_ChrisDefeat
# 397 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ChrisPostBattle, MSGBOX_AUTOCLOSE
# 398 "data/maps/Route119/scripts.pory"
	end
# 399 "data/maps/Route119/scripts.pory"

# 400 "data/maps/Route119/scripts.pory"
Route119_EventScript_Fabian::
# 401 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_FABIAN, Route119_Text_FabianIntro, Route119_Text_FabianDefeat
# 402 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_FabianPostBattle, MSGBOX_AUTOCLOSE
# 403 "data/maps/Route119/scripts.pory"
	end
# 404 "data/maps/Route119/scripts.pory"

# 405 "data/maps/Route119/scripts.pory"
Route119_EventScript_Dayton::
# 406 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DAYTON, Route119_Text_DaytonIntro, Route119_Text_DaytonDefeat
# 407 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DaytonPostBattle, MSGBOX_AUTOCLOSE
# 408 "data/maps/Route119/scripts.pory"
	end
# 409 "data/maps/Route119/scripts.pory"

# 410 "data/maps/Route119/scripts.pory"
Route119_EventScript_Rachel::
# 411 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_RACHEL, Route119_Text_RachelIntro, Route119_Text_RachelDefeat
# 412 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RachelPostBattle, MSGBOX_AUTOCLOSE
# 413 "data/maps/Route119/scripts.pory"
	end
# 414 "data/maps/Route119/scripts.pory"

# 415 "data/maps/Route119/scripts.pory"
Route119_EventScript_BridgeAquaGrunt1::
# 416 "data/maps/Route119/scripts.pory"
	lock
# 417 "data/maps/Route119/scripts.pory"
	faceplayer
# 418 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_StayAwayFromWeatherInstitute, MSGBOX_DEFAULT
# 419 "data/maps/Route119/scripts.pory"
	closemessage
# 420 "data/maps/Route119/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 421 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 422 "data/maps/Route119/scripts.pory"
	release
# 423 "data/maps/Route119/scripts.pory"
	end
# 424 "data/maps/Route119/scripts.pory"

# 425 "data/maps/Route119/scripts.pory"
Route119_EventScript_BridgeAquaGrunt2::
# 426 "data/maps/Route119/scripts.pory"
	lock
# 427 "data/maps/Route119/scripts.pory"
	faceplayer
# 428 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DontGoNearWeatherInstitute, MSGBOX_DEFAULT
# 429 "data/maps/Route119/scripts.pory"
	closemessage
# 430 "data/maps/Route119/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 431 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 432 "data/maps/Route119/scripts.pory"
	release
# 433 "data/maps/Route119/scripts.pory"
	end
# 434 "data/maps/Route119/scripts.pory"

# 435 "data/maps/Route119/scripts.pory"
Route119_EventScript_Boy1::
# 436 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ThoughtFlyByCatchingBirdMons, MSGBOX_NPC
# 437 "data/maps/Route119/scripts.pory"
	end
# 438 "data/maps/Route119/scripts.pory"

# 439 "data/maps/Route119/scripts.pory"
Route119_EventScript_Boy2::
# 440 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CanYourMonMakeSecretBase, MSGBOX_NPC
# 441 "data/maps/Route119/scripts.pory"
	end
# 442 "data/maps/Route119/scripts.pory"

# 443 "data/maps/Route119/scripts.pory"
Route119_EventScript_TrainerTipsDecoration::
# 444 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TrainerTipsDecoration, MSGBOX_SIGN
# 445 "data/maps/Route119/scripts.pory"
	end
# 446 "data/maps/Route119/scripts.pory"

# 447 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottWonAtFortreeGymCall::
# 448 "data/maps/Route119/scripts.pory"
	lockall
# 449 "data/maps/Route119/scripts.pory"
	pokenavcall Route119_Text_ScottYouWonAtFortreeGym
# 450 "data/maps/Route119/scripts.pory"
	waitmessage
# 451 "data/maps/Route119/scripts.pory"
	clearflag FLAG_SCOTT_CALL_FORTREE_GYM
# 452 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 453 "data/maps/Route119/scripts.pory"
	releaseall
# 454 "data/maps/Route119/scripts.pory"
	end
# 455 "data/maps/Route119/scripts.pory"

# 456 "data/maps/Route119/scripts.pory"
Route119_Text_MayIntro:
# 457 "data/maps/Route119/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 458 "data/maps/Route119/scripts.pory"
	.string "Where were you? I was looking for you!\p"
# 459 "data/maps/Route119/scripts.pory"
	.string "How much stronger have you gotten?\n"
# 460 "data/maps/Route119/scripts.pory"
	.string "Let me check for you!\p"
# 461 "data/maps/Route119/scripts.pory"
	.string "Ready with your POKéMON?\n"
# 462 "data/maps/Route119/scripts.pory"
	.string "Of course you are! Go!$"
# 463 "data/maps/Route119/scripts.pory"

# 464 "data/maps/Route119/scripts.pory"
Route119_Text_MayDefeat:
# 465 "data/maps/Route119/scripts.pory"
	.string "Achah!\n"
# 466 "data/maps/Route119/scripts.pory"
	.string "{PLAYER}{KUN}, you're strong!\p"
# 467 "data/maps/Route119/scripts.pory"
	.string "I was worried that you might be\n"
# 468 "data/maps/Route119/scripts.pory"
	.string "struggling with your training.$"
# 469 "data/maps/Route119/scripts.pory"

# 470 "data/maps/Route119/scripts.pory"
Route119_Text_MayPresentForYou:
# 471 "data/maps/Route119/scripts.pory"
	.string "MAY: But I had absolutely nothing to\n"
# 472 "data/maps/Route119/scripts.pory"
	.string "worry about! Keep it up!\p"
# 473 "data/maps/Route119/scripts.pory"
	.string "And, here! I have a present for you.$"
# 474 "data/maps/Route119/scripts.pory"

# 475 "data/maps/Route119/scripts.pory"
Route119_Text_MayExplainFly:
# 476 "data/maps/Route119/scripts.pory"
	.string "MAY: Use FLY, and your POKéMON will\n"
# 477 "data/maps/Route119/scripts.pory"
	.string "instantly carry you to any town you've\l"
# 478 "data/maps/Route119/scripts.pory"
	.string "already visited.\p"
# 479 "data/maps/Route119/scripts.pory"
	.string "But, to use FLY, you have to get\n"
# 480 "data/maps/Route119/scripts.pory"
	.string "the GYM BADGE from FORTREE CITY.\l"
# 481 "data/maps/Route119/scripts.pory"
	.string "That's important, so don't forget.\p"
# 482 "data/maps/Route119/scripts.pory"
	.string "You should FLY home and visit\n"
# 483 "data/maps/Route119/scripts.pory"
	.string "LITTLEROOT for a change.\p"
# 484 "data/maps/Route119/scripts.pory"
	.string "I bet your mom's worried about you,\n"
# 485 "data/maps/Route119/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 486 "data/maps/Route119/scripts.pory"
	.string "Well, let's meet again somewhere!$"
# 487 "data/maps/Route119/scripts.pory"

# 488 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanIntro:
# 489 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: {PLAYER}! So this is where\n"
# 490 "data/maps/Route119/scripts.pory"
	.string "you've been looking for POKéMON?\p"
# 491 "data/maps/Route119/scripts.pory"
	.string "Let me see how good you got.\n"
# 492 "data/maps/Route119/scripts.pory"
	.string "I'll test you!\p"
# 493 "data/maps/Route119/scripts.pory"
	.string "Now!\n"
# 494 "data/maps/Route119/scripts.pory"
	.string "It's a battle, so battle!$"
# 495 "data/maps/Route119/scripts.pory"

# 496 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanDefeat:
# 497 "data/maps/Route119/scripts.pory"
	.string "Hmm…\n"
# 498 "data/maps/Route119/scripts.pory"
	.string "You've gotten pretty darn decent.$"
# 499 "data/maps/Route119/scripts.pory"

# 500 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanIllGiveYouThis:
# 501 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: I'd say you're good enough\n"
# 502 "data/maps/Route119/scripts.pory"
	.string "to search for POKéMON anywhere.\p"
# 503 "data/maps/Route119/scripts.pory"
	.string "Here, I'll give you this.\n"
# 504 "data/maps/Route119/scripts.pory"
	.string "Try it out.$"
# 505 "data/maps/Route119/scripts.pory"

# 506 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanExplainFly:
# 507 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: Use FLY, and your POKéMON\n"
# 508 "data/maps/Route119/scripts.pory"
	.string "instantly carries you to any town\l"
# 509 "data/maps/Route119/scripts.pory"
	.string "you've already visited.\p"
# 510 "data/maps/Route119/scripts.pory"
	.string "But you need the FORTREE GYM BADGE \n"
# 511 "data/maps/Route119/scripts.pory"
	.string "to do that.\p"
# 512 "data/maps/Route119/scripts.pory"
	.string "Anyway, I have to move along.$"
# 513 "data/maps/Route119/scripts.pory"

# 514 "data/maps/Route119/scripts.pory"
Route119_Text_ScottWayToGoBeSeeingYou:
# 515 "data/maps/Route119/scripts.pory"
	.string "SCOTT: Hahahah!\n"
# 516 "data/maps/Route119/scripts.pory"
	.string "Way to go, {PLAYER}{KUN}!\p"
# 517 "data/maps/Route119/scripts.pory"
	.string "I just passed by a TRAINER riding\n"
# 518 "data/maps/Route119/scripts.pory"
	.string "a BIKE.\p"
# 519 "data/maps/Route119/scripts.pory"
	.string "You just beat that TRAINER, didn't you?\n"
# 520 "data/maps/Route119/scripts.pory"
	.string "It was pretty obvious that you did.\p"
# 521 "data/maps/Route119/scripts.pory"
	.string "The kid looked really upset with\n"
# 522 "data/maps/Route119/scripts.pory"
	.string "a face all red from anger.\p"
# 523 "data/maps/Route119/scripts.pory"
	.string "I sure seem to run into you often.\n"
# 524 "data/maps/Route119/scripts.pory"
	.string "Are you off to FORTREE GYM next?\p"
# 525 "data/maps/Route119/scripts.pory"
	.string "I expect that you'll do well at the GYM.\n"
# 526 "data/maps/Route119/scripts.pory"
	.string "Well, I'll be seeing you!$"
# 527 "data/maps/Route119/scripts.pory"

# 528 "data/maps/Route119/scripts.pory"

# 529 "data/maps/Route119/scripts.pory"
Route119_Text_ScottYouWonAtFortreeGym:
# 530 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
# 531 "data/maps/Route119/scripts.pory"
	.string "… … … … … Beep!\p"
# 532 "data/maps/Route119/scripts.pory"
	.string "SCOTT: Hiya, {PLAYER}{KUN}, it's me!\p"
# 533 "data/maps/Route119/scripts.pory"
	.string "Just as I thought, you won at\n"
# 534 "data/maps/Route119/scripts.pory"
	.string "the FORTREE GYM.\p"
# 535 "data/maps/Route119/scripts.pory"
	.string "Your strength…\n"
# 536 "data/maps/Route119/scripts.pory"
	.string "Perhaps you really are the TRAINER\l"
# 537 "data/maps/Route119/scripts.pory"
	.string "that I've been searching for.\p"
# 538 "data/maps/Route119/scripts.pory"
	.string "Remember, you have a fan in me.\n"
# 539 "data/maps/Route119/scripts.pory"
	.string "I'll be cheering from the sidelines.\l"
# 540 "data/maps/Route119/scripts.pory"
	.string "Keep up the great work!\p"
# 541 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
# 542 "data/maps/Route119/scripts.pory"
	.string "… … … … … Click!$"
# 543 "data/maps/Route119/scripts.pory"

# 544 "data/maps/Route119/scripts.pory"
Route119_Text_StayAwayFromWeatherInstitute:
# 545 "data/maps/Route119/scripts.pory"
	.string "We're standing lookout here.\p"
# 546 "data/maps/Route119/scripts.pory"
	.string "Hey, you! Stay away from the WEATHER\n"
# 547 "data/maps/Route119/scripts.pory"
	.string "INSTITUTE. It's not safe.$"
# 548 "data/maps/Route119/scripts.pory"

# 549 "data/maps/Route119/scripts.pory"
Route119_Text_DontGoNearWeatherInstitute:
# 550 "data/maps/Route119/scripts.pory"
	.string "Lookout duty is surprisingly boring.\p"
# 551 "data/maps/Route119/scripts.pory"
	.string "Hey, you! Please don't go near the\n"
# 552 "data/maps/Route119/scripts.pory"
	.string "WEATHER INSTITUTE.$"
# 553 "data/maps/Route119/scripts.pory"

# 554 "data/maps/Route119/scripts.pory"
Route119_Text_ThoughtFlyByCatchingBirdMons:
# 555 "data/maps/Route119/scripts.pory"
	.string "I thought you FLY by catching a whole\n"
# 556 "data/maps/Route119/scripts.pory"
	.string "flock of BIRD POKéMON, and then\l"
# 557 "data/maps/Route119/scripts.pory"
	.string "hanging on to them somehow.\p"
# 558 "data/maps/Route119/scripts.pory"
	.string "But it turns out there's an HM move\n"
# 559 "data/maps/Route119/scripts.pory"
	.string "called FLY!\p"
# 560 "data/maps/Route119/scripts.pory"
	.string "I wish I'd known about that a long\n"
# 561 "data/maps/Route119/scripts.pory"
	.string "time ago…$"
# 562 "data/maps/Route119/scripts.pory"

# 563 "data/maps/Route119/scripts.pory"
Route119_Text_TallGrassSnaresBikeTires:
# 564 "data/maps/Route119/scripts.pory"
	.string "Tch…\n"
# 565 "data/maps/Route119/scripts.pory"
	.string "It's a no-go…\p"
# 566 "data/maps/Route119/scripts.pory"
	.string "The tall grass snares BIKE tires.\n"
# 567 "data/maps/Route119/scripts.pory"
	.string "There's no way you can cycle here.$"
# 568 "data/maps/Route119/scripts.pory"

# 569 "data/maps/Route119/scripts.pory"
Route119_Text_CanYourMonMakeSecretBase:
# 570 "data/maps/Route119/scripts.pory"
	.string "Can your POKéMON use its SECRET POWER\n"
# 571 "data/maps/Route119/scripts.pory"
	.string "on a big pile of grass and make a\l"
# 572 "data/maps/Route119/scripts.pory"
	.string "SECRET BASE?$"
# 573 "data/maps/Route119/scripts.pory"

# 574 "data/maps/Route119/scripts.pory"
Route119_Text_RouteSignFortree:
# 575 "data/maps/Route119/scripts.pory"
	.string "ROUTE 119\n"
# 576 "data/maps/Route119/scripts.pory"
	.string "{RIGHT_ARROW} FORTREE CITY$"
# 577 "data/maps/Route119/scripts.pory"

# 578 "data/maps/Route119/scripts.pory"
Route119_Text_WeatherInstitute:
# 579 "data/maps/Route119/scripts.pory"
	.string "WEATHER INSTITUTE$"
# 580 "data/maps/Route119/scripts.pory"

# 581 "data/maps/Route119/scripts.pory"
Route119_Text_TrainerTipsDecoration:
# 582 "data/maps/Route119/scripts.pory"
	.string "TRAINER TIPS\p"
# 583 "data/maps/Route119/scripts.pory"
	.string "Up to sixteen decorations and\n"
# 584 "data/maps/Route119/scripts.pory"
	.string "furniture items can be placed in\l"
# 585 "data/maps/Route119/scripts.pory"
	.string "a SECRET BASE.\p"
# 586 "data/maps/Route119/scripts.pory"
	.string "Pick your favorite items and create\n"
# 587 "data/maps/Route119/scripts.pory"
	.string "your very own SECRET BASE exactly the\l"
# 588 "data/maps/Route119/scripts.pory"
	.string "way you want.$"

Route119_EventScript_Lurantis::
# 592 "data/maps/Route119/scripts.pory"
	lock
# 593 "data/maps/Route119/scripts.pory"
	faceplayer
# 594 "data/maps/Route119/scripts.pory"
	playmoncry SPECIES_LURANTIS, CRY_MODE_ENCOUNTER
# 595 "data/maps/Route119/scripts.pory"
	delay 40
# 596 "data/maps/Route119/scripts.pory"
	waitmoncry
# 597 "data/maps/Route119/scripts.pory"
	setwildbattle SPECIES_LURANTIS_TOTEM, 37, ITEM_ABILITY_CAPSULE
# 598 "data/maps/Route119/scripts.pory"
	dowildbattle
# 599 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 600 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route119_EventScript_Lurantis_2
# 600 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route119_EventScript_Lurantis_2
# 606 "data/maps/Route119/scripts.pory"
	playmoncry SPECIES_LURANTIS, CRY_MODE_ENCOUNTER
# 607 "data/maps/Route119/scripts.pory"
	waitmoncry
# 608 "data/maps/Route119/scripts.pory"
	fadescreen FADE_TO_BLACK
# 609 "data/maps/Route119/scripts.pory"
	removeobject VAR_LAST_TALKED
# 610 "data/maps/Route119/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
# 611 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_Lurantis_Text_0, MSGBOX_AUTOCLOSE
# 612 "data/maps/Route119/scripts.pory"
	waitmessage
Route119_EventScript_Lurantis_1:
# 614 "data/maps/Route119/scripts.pory"
	release
	end

Route119_EventScript_Lurantis_2:
# 601 "data/maps/Route119/scripts.pory"
	fadescreen FADE_TO_BLACK
# 602 "data/maps/Route119/scripts.pory"
	removeobject VAR_LAST_TALKED
# 603 "data/maps/Route119/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto Route119_EventScript_Lurantis_1


Route119_EventScript_Lurantis_Text_0:
# 611 "data/maps/Route119/scripts.pory"
	.string "The LURANTIS disappeared…$"
