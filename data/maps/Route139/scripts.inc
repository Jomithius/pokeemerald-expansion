Route139_MapScripts::
# 2 "data/maps/Route139/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route139_OnTransition
	.byte 0


Route139_OnTransition::
# 6 "data/maps/Route139/scripts.pory"
	setflag FLAG_SYS_DYNAMIC_LEVELS
# 7 "data/maps/Route139/scripts.pory"
	call_if_set FLAG_DEFEATED_WORKER_MORGAN, Route139_UpdateWorkerMorgan
# 8 "data/maps/Route139/scripts.pory"
	call_if_set FLAG_DEFEATED_WORKER_JOHNALD, Route139_UpdateWorkerJohnald
# 9 "data/maps/Route139/scripts.pory"
	call_if_set FLAG_DEFEATED_WORKER_DINWIDDLE, Route139_UpdateWorkerDinwiddle
# 10 "data/maps/Route139/scripts.pory"
	call_if_set FLAG_DEFEATED_WORKER_WIDDLEDIN, Route139_UpdateWorkerWiddledin
# 11 "data/maps/Route139/scripts.pory"
	call_if_set FLAG_DEFEATED_WORKER_FREDWARD, Route139_UpdateWorkerFredward
	end


Route139_UpdateWorkerMorgan::
# 16 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	return


Route139_UpdateWorkerJohnald::
# 21 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	return


Route139_UpdateWorkerDinwiddle::
# 26 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	return


Route139_UpdateWorkerWiddledin::
# 31 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	return


Route139_UpdateWorkerFredward::
# 36 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
	return


Route139_EventScript_Satoshi::
# 41 "data/maps/Route139/scripts.pory"
	trainerbattle_single TRAINER_SATOSHI, Route139_EventScript_Satoshi_Text_0, Route139_EventScript_Satoshi_Text_1
# 42 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Satoshi_Text_2, MSGBOX_NPC
	end


Route139_EventScript_Yoshio::
# 48 "data/maps/Route139/scripts.pory"
	trainerbattle_single TRAINER_YOSHIO, Route139_EventScript_Yoshio_Text_0, Route139_EventScript_Yoshio_Text_1
# 49 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Yoshio_Text_2, MSGBOX_NPC
	end


Route139_EventScript_Katashi::
# 56 "data/maps/Route139/scripts.pory"
	trainerbattle_single TRAINER_KATASHI, Route139_EventScript_Katashi_Text_0, Route139_EventScript_Katashi_Text_1
# 57 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Katashi_Text_2, MSGBOX_NPC
	end


Route139_EventScript_Naoki::
# 65 "data/maps/Route139/scripts.pory"
	trainerbattle_single TRAINER_NAOKI, Route139_EventScript_Naoki_Text_0, Route139_EventScript_Naoki_Text_1
# 66 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Naoki_Text_2, MSGBOX_NPC
	end


Route139_EventScript_Kyoko::
# 74 "data/maps/Route139/scripts.pory"
	trainerbattle_single TRAINER_KYOKO, Route139_EventScript_Kyoko_Text_0, Route139_EventScript_Kyoko_Text_1
# 75 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Kyoko_Text_2, MSGBOX_NPC
	end


Route139_EventScript_BattleGirl::
# 82 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_BattleGirl_Text_0, MSGBOX_NPC
	end


Route139_EventScript_Expert_M::
# 88 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Expert_M_Text_0, MSGBOX_NPC
	end


Route139_LeftTrigger::
# 94 "data/maps/Route139/scripts.pory"
	lockall
# 95 "data/maps/Route139/scripts.pory"
	setflag FLAG_TEMP_5
# 96 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_Momo
	end


Route139_RightTrigger::
# 101 "data/maps/Route139/scripts.pory"
	lockall
# 102 "data/maps/Route139/scripts.pory"
	setflag FLAG_TEMP_6
# 103 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_Momo
	end


Route139_EventScript_Momo::
# 108 "data/maps/Route139/scripts.pory"
	lockall
# 109 "data/maps/Route139/scripts.pory"
	playse SE_SHINY
# 110 "data/maps/Route139/scripts.pory"
	fadescreen FADE_TO_WHITE
# 111 "data/maps/Route139/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 112 "data/maps/Route139/scripts.pory"
	addobject 15
# 113 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_TEMP_5, Route139_EventScript_Momo_2
# 116 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_TEMP_6, Route139_EventScript_Momo_3
# 120 "data/maps/Route139/scripts.pory"
	applymovement 15, Route139_Movement_MomoToPlayerTrigger
Route139_EventScript_Momo_1:
# 122 "data/maps/Route139/scripts.pory"
	delay 15
# 123 "data/maps/Route139/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 124 "data/maps/Route139/scripts.pory"
	waitmovement 15
# 125 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Momo_Text_0, MSGBOX_AUTOCLOSE
# 127 "data/maps/Route139/scripts.pory"
	waitmessage
# 128 "data/maps/Route139/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceDown
# 129 "data/maps/Route139/scripts.pory"
	waitmovement 15
# 130 "data/maps/Route139/scripts.pory"
	delay 24
# 131 "data/maps/Route139/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceLeft
# 132 "data/maps/Route139/scripts.pory"
	waitmovement 15
# 133 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Momo_Text_1, MSGBOX_AUTOCLOSE
# 136 "data/maps/Route139/scripts.pory"
	waitmessage
# 137 "data/maps/Route139/scripts.pory"
	playse SE_M_PETAL_DANCE
# 138 "data/maps/Route139/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 139 "data/maps/Route139/scripts.pory"
	removeobject 15
# 140 "data/maps/Route139/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 141 "data/maps/Route139/scripts.pory"
	setflag FLAG_HIDE_ASAK_BALDESIA_MAIN_HOUSE
# 142 "data/maps/Route139/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 6
# 143 "data/maps/Route139/scripts.pory"
	releaseall
	end

Route139_EventScript_Momo_2:
# 114 "data/maps/Route139/scripts.pory"
	applymovement 15, Route139_Movement_MomoToPlayerLeftTrigger
	goto Route139_EventScript_Momo_1

Route139_EventScript_Momo_3:
# 117 "data/maps/Route139/scripts.pory"
	applymovement 15, Route139_Movement_MomoToPlayerRightTrigger
	goto Route139_EventScript_Momo_1


Route139_EventScript_KimonoOldWoman::
# 148 "data/maps/Route139/scripts.pory"
	lock
# 149 "data/maps/Route139/scripts.pory"
	faceplayer
# 150 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0 Route139_EventScript_StartSidequest
# 151 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 1 Route139_EventScript_RemindSidequest
# 152 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 2 Route139_EventScript_GiveResult
# 153 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 3 Route139_EventScript_GiveResult
# 154 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 4 Route139_EventScript_GiveResult
# 155 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 5 Route139_EventScript_GiveResult
# 156 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 6, Route139_EventScript_GiveSyrupyApple
# 157 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_KimonoOldWoman_Text_0, MSGBOX_AUTOCLOSE
# 161 "data/maps/Route139/scripts.pory"
	waitmessage
# 162 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_StartSidequest::
# 167 "data/maps/Route139/scripts.pory"
	lock
# 168 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_StartSidequest_Text_0
# 177 "data/maps/Route139/scripts.pory"
	waitmessage
# 178 "data/maps/Route139/scripts.pory"
	setvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 179 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_RemindSidequest::
# 184 "data/maps/Route139/scripts.pory"
	lock
# 185 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_RemindSidequest_Text_0, MSGBOX_AUTOCLOSE
# 188 "data/maps/Route139/scripts.pory"
	waitmessage
# 189 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_GiveResult::
# 194 "data/maps/Route139/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_ROUTE_139_TRAINER_COUNT
# 195 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_GiveResult_Text_0, MSGBOX_AUTOCLOSE
# 198 "data/maps/Route139/scripts.pory"
	waitmessage
# 199 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_GiveSyrupyApple::
# 204 "data/maps/Route139/scripts.pory"
	lock
# 205 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_GiveSyrupyApple_Text_0
# 208 "data/maps/Route139/scripts.pory"
	waitmessage
# 209 "data/maps/Route139/scripts.pory"
	checkitemspace ITEM_SYRUPY_APPLE
# 210 "data/maps/Route139/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route139_EventScript_GiveSyrupyApple_2
# 220 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_GiveSyrupyApple_Text_1, MSGBOX_AUTOCLOSE
Route139_EventScript_GiveSyrupyApple_1:
# 223 "data/maps/Route139/scripts.pory"
	waitmessage
# 224 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_GiveSyrupyApple_2:
# 211 "data/maps/Route139/scripts.pory"
	giveitem ITEM_SYRUPY_APPLE
# 212 "data/maps/Route139/scripts.pory"
	waitmessage
# 213 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_KimonoOldWoman_Text_0, MSGBOX_AUTOCLOSE
# 217 "data/maps/Route139/scripts.pory"
	setvar VAR_BALDESIA_ROUTE_139_STATE, 7
	goto Route139_EventScript_GiveSyrupyApple_1


Route139_EventScript_Morgan::
# 229 "data/maps/Route139/scripts.pory"
	lock
# 230 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 231 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Morgan_7
Route139_EventScript_Morgan_5:
# 248 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Morgan_4
Route139_EventScript_Morgan_1:
# 251 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Morgan_2:
# 232 "data/maps/Route139/scripts.pory"
	faceplayer
# 233 "data/maps/Route139/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, FALSE
# 234 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_0, MSGBOX_AUTOCLOSE
# 236 "data/maps/Route139/scripts.pory"
	waitmessage
# 237 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_MORGAN, Route139_Text_WorkerDefeat
# 238 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 240 "data/maps/Route139/scripts.pory"
	waitmessage
# 241 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 242 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 243 "data/maps/Route139/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 244 "data/maps/Route139/scripts.pory"
	waitmovement 0
# 245 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 246 "data/maps/Route139/scripts.pory"
	setflag FLAG_DEFEATED_WORKER_MORGAN
	goto Route139_EventScript_Morgan_1

Route139_EventScript_Morgan_3:
# 249 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Morgan_1

Route139_EventScript_Morgan_4:
# 248 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_DEFEATED_WORKER_MORGAN, Route139_EventScript_Morgan_3
	goto Route139_EventScript_Morgan_1

Route139_EventScript_Morgan_7:
# 231 "data/maps/Route139/scripts.pory"
	goto_if_unset FLAG_DEFEATED_WORKER_MORGAN, Route139_EventScript_Morgan_2
	goto Route139_EventScript_Morgan_5


Route139_EventScript_Dinwiddle::
# 256 "data/maps/Route139/scripts.pory"
	lock
# 257 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 258 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Dinwiddle_7
Route139_EventScript_Dinwiddle_5:
# 275 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Dinwiddle_4
Route139_EventScript_Dinwiddle_1:
# 278 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Dinwiddle_2:
# 259 "data/maps/Route139/scripts.pory"
	faceplayer
# 260 "data/maps/Route139/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, FALSE
# 261 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_0, MSGBOX_AUTOCLOSE
# 263 "data/maps/Route139/scripts.pory"
	waitmessage
# 264 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_DINWIDDLE, Route139_Text_WorkerDefeat
# 265 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 267 "data/maps/Route139/scripts.pory"
	waitmessage
# 268 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 269 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 270 "data/maps/Route139/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 271 "data/maps/Route139/scripts.pory"
	waitmovement 0
# 272 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 273 "data/maps/Route139/scripts.pory"
	setflag FLAG_DEFEATED_WORKER_DINWIDDLE
	goto Route139_EventScript_Dinwiddle_1

Route139_EventScript_Dinwiddle_3:
# 276 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Dinwiddle_1

Route139_EventScript_Dinwiddle_4:
# 275 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_DEFEATED_WORKER_DINWIDDLE, Route139_EventScript_Dinwiddle_3
	goto Route139_EventScript_Dinwiddle_1

Route139_EventScript_Dinwiddle_7:
# 258 "data/maps/Route139/scripts.pory"
	goto_if_unset FLAG_DEFEATED_WORKER_DINWIDDLE, Route139_EventScript_Dinwiddle_2
	goto Route139_EventScript_Dinwiddle_5


Route139_EventScript_Widdledin::
# 283 "data/maps/Route139/scripts.pory"
	lock
# 284 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 285 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Widdledin_7
Route139_EventScript_Widdledin_5:
# 302 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Widdledin_4
Route139_EventScript_Widdledin_1:
# 305 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Widdledin_2:
# 286 "data/maps/Route139/scripts.pory"
	faceplayer
# 287 "data/maps/Route139/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, FALSE
# 288 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_0, MSGBOX_AUTOCLOSE
# 290 "data/maps/Route139/scripts.pory"
	waitmessage
# 291 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_WIDDLEDIN, Route139_Text_WorkerDefeat
# 292 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 294 "data/maps/Route139/scripts.pory"
	waitmessage
# 295 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 296 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 297 "data/maps/Route139/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 298 "data/maps/Route139/scripts.pory"
	waitmovement 0
# 299 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 300 "data/maps/Route139/scripts.pory"
	setflag FLAG_DEFEATED_WORKER_WIDDLEDIN
	goto Route139_EventScript_Widdledin_1

Route139_EventScript_Widdledin_3:
# 303 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Widdledin_1

Route139_EventScript_Widdledin_4:
# 302 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_DEFEATED_WORKER_WIDDLEDIN, Route139_EventScript_Widdledin_3
	goto Route139_EventScript_Widdledin_1

Route139_EventScript_Widdledin_7:
# 285 "data/maps/Route139/scripts.pory"
	goto_if_unset FLAG_DEFEATED_WORKER_WIDDLEDIN, Route139_EventScript_Widdledin_2
	goto Route139_EventScript_Widdledin_5


Route139_EventScript_Johnald::
# 310 "data/maps/Route139/scripts.pory"
	lock
# 311 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 312 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Johnald_7
Route139_EventScript_Johnald_5:
# 329 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Johnald_4
Route139_EventScript_Johnald_1:
# 332 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Johnald_2:
# 313 "data/maps/Route139/scripts.pory"
	faceplayer
# 314 "data/maps/Route139/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, FALSE
# 315 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_0, MSGBOX_AUTOCLOSE
# 317 "data/maps/Route139/scripts.pory"
	waitmessage
# 318 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_JOHNALD, Route139_Text_WorkerDefeat
# 319 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 321 "data/maps/Route139/scripts.pory"
	waitmessage
# 322 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 323 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 324 "data/maps/Route139/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 325 "data/maps/Route139/scripts.pory"
	waitmovement 0
# 326 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 327 "data/maps/Route139/scripts.pory"
	setflag FLAG_DEFEATED_WORKER_JOHNALD
	goto Route139_EventScript_Johnald_1

Route139_EventScript_Johnald_3:
# 330 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Johnald_1

Route139_EventScript_Johnald_4:
# 329 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_DEFEATED_WORKER_JOHNALD, Route139_EventScript_Johnald_3
	goto Route139_EventScript_Johnald_1

Route139_EventScript_Johnald_7:
# 312 "data/maps/Route139/scripts.pory"
	goto_if_unset FLAG_DEFEATED_WORKER_JOHNALD, Route139_EventScript_Johnald_2
	goto Route139_EventScript_Johnald_5


Route139_EventScript_Fredward::
# 337 "data/maps/Route139/scripts.pory"
	lock
# 338 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 339 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Fredward_7
Route139_EventScript_Fredward_5:
# 358 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Fredward_4
Route139_EventScript_Fredward_1:
# 361 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Fredward_2:
# 340 "data/maps/Route139/scripts.pory"
	faceplayer
# 341 "data/maps/Route139/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, FALSE
# 342 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Fredward_Text_0, MSGBOX_AUTOCLOSE
# 346 "data/maps/Route139/scripts.pory"
	waitmessage
# 347 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_FREDWARD, Route139_Text_WorkerDefeat
# 348 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 350 "data/maps/Route139/scripts.pory"
	waitmessage
# 351 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 352 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 353 "data/maps/Route139/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 354 "data/maps/Route139/scripts.pory"
	waitmovement 0
# 355 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 356 "data/maps/Route139/scripts.pory"
	setflag FLAG_DEFEATED_WORKER_FREDWARD
	goto Route139_EventScript_Fredward_1

Route139_EventScript_Fredward_3:
# 359 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Fredward_1

Route139_EventScript_Fredward_4:
# 358 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_DEFEATED_WORKER_FREDWARD, Route139_EventScript_Fredward_3
	goto Route139_EventScript_Fredward_1

Route139_EventScript_Fredward_7:
# 339 "data/maps/Route139/scripts.pory"
	goto_if_unset FLAG_DEFEATED_WORKER_FREDWARD, Route139_EventScript_Fredward_2
	goto Route139_EventScript_Fredward_5


Route139_EventScript_WorkerFiredUp::
# 366 "data/maps/Route139/scripts.pory"
	lock
# 367 "data/maps/Route139/scripts.pory"
	faceplayer
# 368 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_WorkerFiredUp_Text_0, MSGBOX_AUTOCLOSE
# 371 "data/maps/Route139/scripts.pory"
	waitmessage
# 372 "data/maps/Route139/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 373 "data/maps/Route139/scripts.pory"
	waitmovement 0
# 374 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_WorkerBored::
# 379 "data/maps/Route139/scripts.pory"
	lock
# 380 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_WorkerBored_Text_0, MSGBOX_AUTOCLOSE
# 381 "data/maps/Route139/scripts.pory"
	waitmessage
# 382 "data/maps/Route139/scripts.pory"
	release
	end


# 390 "data/maps/Route139/scripts.pory"
Route139_Movement_MomoToPlayerLeftTrigger:
# 391 "data/maps/Route139/scripts.pory"
	walk_left
# 391 "data/maps/Route139/scripts.pory"
	walk_left
# 391 "data/maps/Route139/scripts.pory"
	walk_left
# 391 "data/maps/Route139/scripts.pory"
	walk_left
# 391 "data/maps/Route139/scripts.pory"
	walk_left
# 391 "data/maps/Route139/scripts.pory"
	walk_left
# 391 "data/maps/Route139/scripts.pory"
	walk_left
# 391 "data/maps/Route139/scripts.pory"
	walk_left
# 391 "data/maps/Route139/scripts.pory"
	walk_left
# 391 "data/maps/Route139/scripts.pory"
	walk_left
	step_end

# 394 "data/maps/Route139/scripts.pory"
Route139_Movement_MomoToPlayerTrigger:
# 395 "data/maps/Route139/scripts.pory"
	walk_left
# 395 "data/maps/Route139/scripts.pory"
	walk_left
# 395 "data/maps/Route139/scripts.pory"
	walk_left
# 395 "data/maps/Route139/scripts.pory"
	walk_left
# 395 "data/maps/Route139/scripts.pory"
	walk_left
# 395 "data/maps/Route139/scripts.pory"
	walk_left
# 395 "data/maps/Route139/scripts.pory"
	walk_left
# 395 "data/maps/Route139/scripts.pory"
	walk_left
# 395 "data/maps/Route139/scripts.pory"
	walk_left
	step_end

# 398 "data/maps/Route139/scripts.pory"
Route139_Movement_MomoToPlayerRightTrigger:
# 399 "data/maps/Route139/scripts.pory"
	walk_left
# 399 "data/maps/Route139/scripts.pory"
	walk_left
# 399 "data/maps/Route139/scripts.pory"
	walk_left
# 399 "data/maps/Route139/scripts.pory"
	walk_left
# 399 "data/maps/Route139/scripts.pory"
	walk_left
# 399 "data/maps/Route139/scripts.pory"
	walk_left
# 399 "data/maps/Route139/scripts.pory"
	walk_left
# 399 "data/maps/Route139/scripts.pory"
	walk_left
	step_end

Route139_EventScript_Satoshi_Text_0:
# 41 "data/maps/Route139/scripts.pory"
	.string "Ha!\nYou fell for my trap!$"

Route139_EventScript_Satoshi_Text_1:
# 41 "data/maps/Route139/scripts.pory"
	.string "I still lost…$"

Route139_EventScript_Satoshi_Text_2:
# 42 "data/maps/Route139/scripts.pory"
	.string "The Chief and MASTER BENNIS are some\n of the greatest NINJAS to ever live.$"

Route139_EventScript_Yoshio_Text_0:
# 48 "data/maps/Route139/scripts.pory"
	.string "Too slow!$"

Route139_EventScript_Yoshio_Text_1:
# 48 "data/maps/Route139/scripts.pory"
	.string "T-Too slow…$"

Route139_EventScript_Yoshio_Text_2:
# 49 "data/maps/Route139/scripts.pory"
	.string "Huh?\p You could see my head sticking out\n from behind the rock?$"

Route139_EventScript_Katashi_Text_0:
# 56 "data/maps/Route139/scripts.pory"
	.string "A NINJA must be calm, swift,\nand decisive.$"

Route139_EventScript_Katashi_Text_1:
# 56 "data/maps/Route139/scripts.pory"
	.string "Impressive.$"

Route139_EventScript_Katashi_Text_2:
# 57 "data/maps/Route139/scripts.pory"
	.string "LADY ASAKURA was able to become\n a full-fledged NINJA at a very\l young age.\p She's an inspiration to us all.$"

Route139_EventScript_Naoki_Text_0:
# 65 "data/maps/Route139/scripts.pory"
	.string "Be a dear and entertain me\nwith a battle.$"

Route139_EventScript_Naoki_Text_1:
# 65 "data/maps/Route139/scripts.pory"
	.string "Thank you.\nIt was fun.$"

Route139_EventScript_Naoki_Text_2:
# 66 "data/maps/Route139/scripts.pory"
	.string "I heard LADY ASAKURA returned for\n the ritual.\p I hope she's in time.\n She has a habit of procrastinating.$"

Route139_EventScript_Kyoko_Text_0:
# 74 "data/maps/Route139/scripts.pory"
	.string "Fufufu…\nThe ritual… Soon…$"

Route139_EventScript_Kyoko_Text_1:
# 74 "data/maps/Route139/scripts.pory"
	.string "…$"

Route139_EventScript_Kyoko_Text_2:
# 75 "data/maps/Route139/scripts.pory"
	.string "… I saw the Young Lady has returned.\p Her scalp is resplendent as ever…$"

Route139_EventScript_BattleGirl_Text_0:
# 82 "data/maps/Route139/scripts.pory"
	.string "BRUNO's way too strong.\n I can't beat him.$"

Route139_EventScript_Expert_M_Text_0:
# 88 "data/maps/Route139/scripts.pory"
	.string "There are some rare POKéMON\n in this river.$"

Route139_EventScript_Momo_Text_0:
# 125 "data/maps/Route139/scripts.pory"
	.string "MOMO: … … …\n The altar is up ahead through the cave.$"

Route139_EventScript_Momo_Text_1:
# 133 "data/maps/Route139/scripts.pory"
	.string "MOMO: … … …\n Be careful.\l I'll meet you there.$"

Route139_EventScript_KimonoOldWoman_Text_0:
# 157 "data/maps/Route139/scripts.pory"
	.string "This dessert has been a staple food\n in our village for a few years now.\p The apples required to make them only\n grow in this area.$"

Route139_EventScript_StartSidequest_Text_0:
# 168 "data/maps/Route139/scripts.pory"
	.string "Hm… I sense strength in you, young one.\n Would you mind helping an old lady out?\p These meat heads only think about\n battling, and they're all bored of\l battling each other.\p Do you mind battling them?\n I want them to get fired up.\p I'll give you a reward if you can\n defeat all 5 of them.$"

Route139_EventScript_RemindSidequest_Text_0:
# 185 "data/maps/Route139/scripts.pory"
	.string "I need to get my workers fired up.\p If you can defeat all 5 of them in\n a battle, I'll give you a reward.$"

Route139_EventScript_GiveResult_Text_0:
# 195 "data/maps/Route139/scripts.pory"
	.string "So far you've defeated {STR_VAR_1} out of\n 5 workers.\p Keep up the good work.$"

Route139_EventScript_GiveSyrupyApple_Text_0:
# 205 "data/maps/Route139/scripts.pory"
	.string "Thank you, young one.\p My workers are all fired up.\n As promised, here's your reward.$"

Route139_EventScript_GiveSyrupyApple_Text_1:
# 220 "data/maps/Route139/scripts.pory"
	.string "Hm… It seems you don't have enough room,\n young one.$"

Route139_EventScript_Morgan_Text_0:
# 234 "data/maps/Route139/scripts.pory"
	.string "Huh? The boss said we should battle?\n All right, sounds fun!$"

Route139_EventScript_Morgan_Text_1:
# 238 "data/maps/Route139/scripts.pory"
	.string "Okay!\n I feel like I can focus on my work now!$"

Route139_EventScript_Fredward_Text_0:
# 342 "data/maps/Route139/scripts.pory"
	.string "Huh? The boss said we should battle?\n All right!\p Just warning you, I'm the strongest out\n of all of us!$"

Route139_EventScript_WorkerFiredUp_Text_0:
# 368 "data/maps/Route139/scripts.pory"
	.string "Thanks!\n I lost, but that was a great battle!\p I feel like I can focus on my work now!$"

Route139_EventScript_WorkerBored_Text_0:
# 380 "data/maps/Route139/scripts.pory"
	.string "So bored…$"

Route139_Text_WorkerDefeat::
# 386 "data/maps/Route139/scripts.pory"
	.string "That was a great battle!$"
