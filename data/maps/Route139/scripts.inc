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


Route139_EventScript_KimonoLady::
# 41 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_KimonoLady_Text_0, MSGBOX_NPC
	end


Route139_EventScript_LittleBoy::
# 50 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_LittleBoy_Text_0, MSGBOX_NPC
	end


Route139_EventScript_Satoshi::
# 58 "data/maps/Route139/scripts.pory"
	trainerbattle_single TRAINER_SATOSHI, Route139_EventScript_Satoshi_Text_0, Route139_EventScript_Satoshi_Text_1
# 59 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Satoshi_Text_2, MSGBOX_NPC
	end


Route139_EventScript_Yoshio::
# 65 "data/maps/Route139/scripts.pory"
	trainerbattle_single TRAINER_YOSHIO, Route139_EventScript_Yoshio_Text_0, Route139_EventScript_Yoshio_Text_1
# 66 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Yoshio_Text_2, MSGBOX_NPC
	end


Route139_EventScript_Katashi::
# 73 "data/maps/Route139/scripts.pory"
	trainerbattle_single TRAINER_KATASHI, Route139_EventScript_Katashi_Text_0, Route139_EventScript_Katashi_Text_1
# 74 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Katashi_Text_2, MSGBOX_NPC
	end


Route139_EventScript_Naoki::
# 82 "data/maps/Route139/scripts.pory"
	trainerbattle_single TRAINER_NAOKI, Route139_EventScript_Naoki_Text_0, Route139_EventScript_Naoki_Text_1
# 83 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_HIDE_LOYAL_THREE_JIRACHIS_ALTAR, Route139_EventScript_Naoki_2
# 88 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Naoki_Text_3, MSGBOX_NPC
Route139_EventScript_Naoki_1:
	end

Route139_EventScript_Naoki_2:
# 84 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Naoki_Text_2, MSGBOX_NPC
	goto Route139_EventScript_Naoki_1


Route139_EventScript_Kyoko::
# 97 "data/maps/Route139/scripts.pory"
	trainerbattle_single TRAINER_KYOKO, Route139_EventScript_Kyoko_Text_0, Route139_EventScript_Kyoko_Text_1
# 98 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Kyoko_Text_2, MSGBOX_NPC
	end


Route139_EventScript_BattleGirl::
# 105 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_BattleGirl_Text_0, MSGBOX_NPC
	end


Route139_EventScript_Expert_M::
# 111 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Expert_M_Text_0, MSGBOX_NPC
	end


Route139_LeftTrigger::
# 117 "data/maps/Route139/scripts.pory"
	lockall
# 118 "data/maps/Route139/scripts.pory"
	setflag FLAG_TEMP_5
# 119 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_Momo
	end


Route139_RightTrigger::
# 124 "data/maps/Route139/scripts.pory"
	lockall
# 125 "data/maps/Route139/scripts.pory"
	setflag FLAG_TEMP_6
# 126 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_Momo
	end


Route139_EventScript_Momo::
# 131 "data/maps/Route139/scripts.pory"
	lockall
# 132 "data/maps/Route139/scripts.pory"
	playse SE_SHINY
# 133 "data/maps/Route139/scripts.pory"
	fadescreen FADE_TO_WHITE
# 134 "data/maps/Route139/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 135 "data/maps/Route139/scripts.pory"
	addobject 15
# 136 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_TEMP_5, Route139_EventScript_Momo_2
# 139 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_TEMP_6, Route139_EventScript_Momo_3
# 143 "data/maps/Route139/scripts.pory"
	applymovement 15, Route139_Movement_MomoToPlayerTrigger
Route139_EventScript_Momo_1:
# 145 "data/maps/Route139/scripts.pory"
	delay 15
# 146 "data/maps/Route139/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 147 "data/maps/Route139/scripts.pory"
	waitmovement 15
# 148 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Momo_Text_0, MSGBOX_AUTOCLOSE
# 150 "data/maps/Route139/scripts.pory"
	waitmessage
# 151 "data/maps/Route139/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceDown
# 152 "data/maps/Route139/scripts.pory"
	waitmovement 15
# 153 "data/maps/Route139/scripts.pory"
	delay 24
# 154 "data/maps/Route139/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceLeft
# 155 "data/maps/Route139/scripts.pory"
	waitmovement 15
# 156 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Momo_Text_1, MSGBOX_AUTOCLOSE
# 159 "data/maps/Route139/scripts.pory"
	waitmessage
# 160 "data/maps/Route139/scripts.pory"
	playse SE_M_PETAL_DANCE
# 161 "data/maps/Route139/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 162 "data/maps/Route139/scripts.pory"
	removeobject 15
# 163 "data/maps/Route139/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 164 "data/maps/Route139/scripts.pory"
	setflag FLAG_HIDE_ASAK_BALDESIA_MAIN_HOUSE
# 165 "data/maps/Route139/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 6
# 166 "data/maps/Route139/scripts.pory"
	releaseall
	end

Route139_EventScript_Momo_2:
# 137 "data/maps/Route139/scripts.pory"
	applymovement 15, Route139_Movement_MomoToPlayerLeftTrigger
	goto Route139_EventScript_Momo_1

Route139_EventScript_Momo_3:
# 140 "data/maps/Route139/scripts.pory"
	applymovement 15, Route139_Movement_MomoToPlayerRightTrigger
	goto Route139_EventScript_Momo_1


Route139_EventScript_KimonoOldWoman::
# 171 "data/maps/Route139/scripts.pory"
	lock
# 172 "data/maps/Route139/scripts.pory"
	faceplayer
# 173 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0 Route139_EventScript_StartSidequest
# 174 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 1 Route139_EventScript_RemindSidequest
# 175 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 2 Route139_EventScript_GiveResult
# 176 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 3 Route139_EventScript_GiveResult
# 177 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 4 Route139_EventScript_GiveResult
# 178 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 5 Route139_EventScript_GiveResult
# 179 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 6, Route139_EventScript_GiveSyrupyApple
# 180 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_KimonoOldWoman_Text_0, MSGBOX_AUTOCLOSE
# 184 "data/maps/Route139/scripts.pory"
	waitmessage
# 185 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_StartSidequest::
# 190 "data/maps/Route139/scripts.pory"
	lock
# 191 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_StartSidequest_Text_0
# 200 "data/maps/Route139/scripts.pory"
	waitmessage
# 201 "data/maps/Route139/scripts.pory"
	setvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 202 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_RemindSidequest::
# 207 "data/maps/Route139/scripts.pory"
	lock
# 208 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_RemindSidequest_Text_0, MSGBOX_AUTOCLOSE
# 211 "data/maps/Route139/scripts.pory"
	waitmessage
# 212 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_GiveResult::
# 217 "data/maps/Route139/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_ROUTE_139_TRAINER_COUNT
# 218 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_GiveResult_Text_0, MSGBOX_AUTOCLOSE
# 221 "data/maps/Route139/scripts.pory"
	waitmessage
# 222 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_GiveSyrupyApple::
# 227 "data/maps/Route139/scripts.pory"
	lock
# 228 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_GiveSyrupyApple_Text_0
# 231 "data/maps/Route139/scripts.pory"
	waitmessage
# 232 "data/maps/Route139/scripts.pory"
	checkitemspace ITEM_SYRUPY_APPLE
# 233 "data/maps/Route139/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route139_EventScript_GiveSyrupyApple_2
# 243 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_GiveSyrupyApple_Text_1, MSGBOX_AUTOCLOSE
Route139_EventScript_GiveSyrupyApple_1:
# 246 "data/maps/Route139/scripts.pory"
	waitmessage
# 247 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_GiveSyrupyApple_2:
# 234 "data/maps/Route139/scripts.pory"
	giveitem ITEM_SYRUPY_APPLE
# 235 "data/maps/Route139/scripts.pory"
	waitmessage
# 236 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_KimonoOldWoman_Text_0, MSGBOX_AUTOCLOSE
# 240 "data/maps/Route139/scripts.pory"
	setvar VAR_BALDESIA_ROUTE_139_STATE, 7
	goto Route139_EventScript_GiveSyrupyApple_1


Route139_EventScript_Morgan::
# 252 "data/maps/Route139/scripts.pory"
	lock
# 253 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 254 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Morgan_7
Route139_EventScript_Morgan_5:
# 274 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Morgan_4
Route139_EventScript_Morgan_1:
# 277 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Morgan_2:
# 255 "data/maps/Route139/scripts.pory"
	faceplayer
# 256 "data/maps/Route139/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, FALSE
# 257 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_0, MSGBOX_AUTOCLOSE
# 259 "data/maps/Route139/scripts.pory"
	waitmessage
# 260 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_MORGAN, Route139_Text_WorkerDefeat
# 261 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 263 "data/maps/Route139/scripts.pory"
	waitmessage
# 264 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 265 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 266 "data/maps/Route139/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 267 "data/maps/Route139/scripts.pory"
	setobjectnewmovementtype 3, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 268 "data/maps/Route139/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 269 "data/maps/Route139/scripts.pory"
	waitmovement 3
# 270 "data/maps/Route139/scripts.pory"
	setflag FLAG_DEFEATED_WORKER_MORGAN
# 271 "data/maps/Route139/scripts.pory"
	special DrawWholeMapView
# 272 "data/maps/Route139/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto Route139_EventScript_Morgan_1

Route139_EventScript_Morgan_3:
# 275 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Morgan_1

Route139_EventScript_Morgan_4:
# 274 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_DEFEATED_WORKER_MORGAN, Route139_EventScript_Morgan_3
	goto Route139_EventScript_Morgan_1

Route139_EventScript_Morgan_7:
# 254 "data/maps/Route139/scripts.pory"
	goto_if_unset FLAG_DEFEATED_WORKER_MORGAN, Route139_EventScript_Morgan_2
	goto Route139_EventScript_Morgan_5


Route139_EventScript_Dinwiddle::
# 282 "data/maps/Route139/scripts.pory"
	lock
# 283 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 284 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Dinwiddle_7
Route139_EventScript_Dinwiddle_5:
# 304 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Dinwiddle_4
Route139_EventScript_Dinwiddle_1:
# 307 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Dinwiddle_2:
# 285 "data/maps/Route139/scripts.pory"
	faceplayer
# 286 "data/maps/Route139/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, FALSE
# 287 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_0, MSGBOX_AUTOCLOSE
# 289 "data/maps/Route139/scripts.pory"
	waitmessage
# 290 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_DINWIDDLE, Route139_Text_WorkerDefeat
# 291 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 293 "data/maps/Route139/scripts.pory"
	waitmessage
# 294 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 295 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 296 "data/maps/Route139/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 297 "data/maps/Route139/scripts.pory"
	setobjectnewmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 298 "data/maps/Route139/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 299 "data/maps/Route139/scripts.pory"
	waitmovement 5
# 300 "data/maps/Route139/scripts.pory"
	setflag FLAG_DEFEATED_WORKER_DINWIDDLE
# 301 "data/maps/Route139/scripts.pory"
	special DrawWholeMapView
# 302 "data/maps/Route139/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto Route139_EventScript_Dinwiddle_1

Route139_EventScript_Dinwiddle_3:
# 305 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Dinwiddle_1

Route139_EventScript_Dinwiddle_4:
# 304 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_DEFEATED_WORKER_DINWIDDLE, Route139_EventScript_Dinwiddle_3
	goto Route139_EventScript_Dinwiddle_1

Route139_EventScript_Dinwiddle_7:
# 284 "data/maps/Route139/scripts.pory"
	goto_if_unset FLAG_DEFEATED_WORKER_DINWIDDLE, Route139_EventScript_Dinwiddle_2
	goto Route139_EventScript_Dinwiddle_5


Route139_EventScript_Widdledin::
# 312 "data/maps/Route139/scripts.pory"
	lock
# 313 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 314 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Widdledin_7
Route139_EventScript_Widdledin_5:
# 334 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Widdledin_4
Route139_EventScript_Widdledin_1:
# 337 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Widdledin_2:
# 315 "data/maps/Route139/scripts.pory"
	faceplayer
# 316 "data/maps/Route139/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, FALSE
# 317 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_0, MSGBOX_AUTOCLOSE
# 319 "data/maps/Route139/scripts.pory"
	waitmessage
# 320 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_WIDDLEDIN, Route139_Text_WorkerDefeat
# 321 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 323 "data/maps/Route139/scripts.pory"
	waitmessage
# 324 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 325 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 326 "data/maps/Route139/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 327 "data/maps/Route139/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 328 "data/maps/Route139/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 329 "data/maps/Route139/scripts.pory"
	waitmovement 6
# 330 "data/maps/Route139/scripts.pory"
	setflag FLAG_DEFEATED_WORKER_WIDDLEDIN
# 331 "data/maps/Route139/scripts.pory"
	special DrawWholeMapView
# 332 "data/maps/Route139/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto Route139_EventScript_Widdledin_1

Route139_EventScript_Widdledin_3:
# 335 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Widdledin_1

Route139_EventScript_Widdledin_4:
# 334 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_DEFEATED_WORKER_WIDDLEDIN, Route139_EventScript_Widdledin_3
	goto Route139_EventScript_Widdledin_1

Route139_EventScript_Widdledin_7:
# 314 "data/maps/Route139/scripts.pory"
	goto_if_unset FLAG_DEFEATED_WORKER_WIDDLEDIN, Route139_EventScript_Widdledin_2
	goto Route139_EventScript_Widdledin_5


Route139_EventScript_Johnald::
# 342 "data/maps/Route139/scripts.pory"
	lock
# 343 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 344 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Johnald_7
Route139_EventScript_Johnald_5:
# 364 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Johnald_4
Route139_EventScript_Johnald_1:
# 367 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Johnald_2:
# 345 "data/maps/Route139/scripts.pory"
	faceplayer
# 346 "data/maps/Route139/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, FALSE
# 347 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_0, MSGBOX_AUTOCLOSE
# 349 "data/maps/Route139/scripts.pory"
	waitmessage
# 350 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_JOHNALD, Route139_Text_WorkerDefeat
# 351 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 353 "data/maps/Route139/scripts.pory"
	waitmessage
# 354 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 355 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 356 "data/maps/Route139/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 357 "data/maps/Route139/scripts.pory"
	setobjectnewmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 358 "data/maps/Route139/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 359 "data/maps/Route139/scripts.pory"
	waitmovement 2
# 360 "data/maps/Route139/scripts.pory"
	setflag FLAG_DEFEATED_WORKER_JOHNALD
# 361 "data/maps/Route139/scripts.pory"
	special DrawWholeMapView
# 362 "data/maps/Route139/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto Route139_EventScript_Johnald_1

Route139_EventScript_Johnald_3:
# 365 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Johnald_1

Route139_EventScript_Johnald_4:
# 364 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_DEFEATED_WORKER_JOHNALD, Route139_EventScript_Johnald_3
	goto Route139_EventScript_Johnald_1

Route139_EventScript_Johnald_7:
# 344 "data/maps/Route139/scripts.pory"
	goto_if_unset FLAG_DEFEATED_WORKER_JOHNALD, Route139_EventScript_Johnald_2
	goto Route139_EventScript_Johnald_5


Route139_EventScript_Fredward::
# 372 "data/maps/Route139/scripts.pory"
	lock
# 373 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 374 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Fredward_7
Route139_EventScript_Fredward_5:
# 396 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Fredward_4
Route139_EventScript_Fredward_1:
# 399 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Fredward_2:
# 375 "data/maps/Route139/scripts.pory"
	faceplayer
# 376 "data/maps/Route139/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, FALSE
# 377 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Fredward_Text_0, MSGBOX_AUTOCLOSE
# 381 "data/maps/Route139/scripts.pory"
	waitmessage
# 382 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_FREDWARD, Route139_Text_WorkerDefeat
# 383 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 385 "data/maps/Route139/scripts.pory"
	waitmessage
# 386 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 387 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 388 "data/maps/Route139/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 389 "data/maps/Route139/scripts.pory"
	setobjectnewmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 390 "data/maps/Route139/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 391 "data/maps/Route139/scripts.pory"
	waitmovement 7
# 392 "data/maps/Route139/scripts.pory"
	setflag FLAG_DEFEATED_WORKER_FREDWARD
# 393 "data/maps/Route139/scripts.pory"
	special DrawWholeMapView
# 394 "data/maps/Route139/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto Route139_EventScript_Fredward_1

Route139_EventScript_Fredward_3:
# 397 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Fredward_1

Route139_EventScript_Fredward_4:
# 396 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_DEFEATED_WORKER_FREDWARD, Route139_EventScript_Fredward_3
	goto Route139_EventScript_Fredward_1

Route139_EventScript_Fredward_7:
# 374 "data/maps/Route139/scripts.pory"
	goto_if_unset FLAG_DEFEATED_WORKER_FREDWARD, Route139_EventScript_Fredward_2
	goto Route139_EventScript_Fredward_5


Route139_EventScript_WorkerFiredUp::
# 404 "data/maps/Route139/scripts.pory"
	lock
# 405 "data/maps/Route139/scripts.pory"
	faceplayer
# 406 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_WorkerFiredUp_Text_0, MSGBOX_AUTOCLOSE
# 409 "data/maps/Route139/scripts.pory"
	waitmessage
# 410 "data/maps/Route139/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 411 "data/maps/Route139/scripts.pory"
	waitmovement 0
# 412 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_WorkerBored::
# 417 "data/maps/Route139/scripts.pory"
	lock
# 418 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_WorkerBored_Text_0, MSGBOX_AUTOCLOSE
# 419 "data/maps/Route139/scripts.pory"
	waitmessage
# 420 "data/maps/Route139/scripts.pory"
	release
	end


# 428 "data/maps/Route139/scripts.pory"
Route139_Movement_MomoToPlayerLeftTrigger:
# 429 "data/maps/Route139/scripts.pory"
	walk_left
# 429 "data/maps/Route139/scripts.pory"
	walk_left
# 429 "data/maps/Route139/scripts.pory"
	walk_left
# 429 "data/maps/Route139/scripts.pory"
	walk_left
# 429 "data/maps/Route139/scripts.pory"
	walk_left
# 429 "data/maps/Route139/scripts.pory"
	walk_left
# 429 "data/maps/Route139/scripts.pory"
	walk_left
# 429 "data/maps/Route139/scripts.pory"
	walk_left
# 429 "data/maps/Route139/scripts.pory"
	walk_left
# 429 "data/maps/Route139/scripts.pory"
	walk_left
	step_end

# 432 "data/maps/Route139/scripts.pory"
Route139_Movement_MomoToPlayerTrigger:
# 433 "data/maps/Route139/scripts.pory"
	walk_left
# 433 "data/maps/Route139/scripts.pory"
	walk_left
# 433 "data/maps/Route139/scripts.pory"
	walk_left
# 433 "data/maps/Route139/scripts.pory"
	walk_left
# 433 "data/maps/Route139/scripts.pory"
	walk_left
# 433 "data/maps/Route139/scripts.pory"
	walk_left
# 433 "data/maps/Route139/scripts.pory"
	walk_left
# 433 "data/maps/Route139/scripts.pory"
	walk_left
# 433 "data/maps/Route139/scripts.pory"
	walk_left
	step_end

# 436 "data/maps/Route139/scripts.pory"
Route139_Movement_MomoToPlayerRightTrigger:
# 437 "data/maps/Route139/scripts.pory"
	walk_left
# 437 "data/maps/Route139/scripts.pory"
	walk_left
# 437 "data/maps/Route139/scripts.pory"
	walk_left
# 437 "data/maps/Route139/scripts.pory"
	walk_left
# 437 "data/maps/Route139/scripts.pory"
	walk_left
# 437 "data/maps/Route139/scripts.pory"
	walk_left
# 437 "data/maps/Route139/scripts.pory"
	walk_left
# 437 "data/maps/Route139/scripts.pory"
	walk_left
	step_end

Route139_EventScript_KimonoLady_Text_0:
# 41 "data/maps/Route139/scripts.pory"
	.string "The men of the village work hard\n maintaining this forest.\p All of the lumber is used to expand\n the village.\p None of it is wasted.$"

Route139_EventScript_LittleBoy_Text_0:
# 50 "data/maps/Route139/scripts.pory"
	.string "When I grow up, I want to\n help maintain the forest too!\p I'm starting my training now!$"

Route139_EventScript_Satoshi_Text_0:
# 58 "data/maps/Route139/scripts.pory"
	.string "Ha!\nYou fell for my trap!$"

Route139_EventScript_Satoshi_Text_1:
# 58 "data/maps/Route139/scripts.pory"
	.string "I still lost…$"

Route139_EventScript_Satoshi_Text_2:
# 59 "data/maps/Route139/scripts.pory"
	.string "The Chief and MASTER BENNIS are some\n of the greatest NINJAS to ever live.$"

Route139_EventScript_Yoshio_Text_0:
# 65 "data/maps/Route139/scripts.pory"
	.string "Too slow!$"

Route139_EventScript_Yoshio_Text_1:
# 65 "data/maps/Route139/scripts.pory"
	.string "T-Too slow…$"

Route139_EventScript_Yoshio_Text_2:
# 66 "data/maps/Route139/scripts.pory"
	.string "Huh?\p You could see my head sticking out\n from behind the rock?$"

Route139_EventScript_Katashi_Text_0:
# 73 "data/maps/Route139/scripts.pory"
	.string "A NINJA must be calm, swift,\nand decisive.$"

Route139_EventScript_Katashi_Text_1:
# 73 "data/maps/Route139/scripts.pory"
	.string "Impressive.$"

Route139_EventScript_Katashi_Text_2:
# 74 "data/maps/Route139/scripts.pory"
	.string "LADY ASAKURA was able to become\n a full-fledged NINJA at a very\l young age.\p She's an inspiration to us all.$"

Route139_EventScript_Naoki_Text_0:
# 82 "data/maps/Route139/scripts.pory"
	.string "Be a dear and entertain me\nwith a battle.$"

Route139_EventScript_Naoki_Text_1:
# 82 "data/maps/Route139/scripts.pory"
	.string "Thank you.\nIt was fun.$"

Route139_EventScript_Naoki_Text_2:
# 84 "data/maps/Route139/scripts.pory"
	.string "I heard the ritual was almost ruined.\n Is that really true?$"

Route139_EventScript_Naoki_Text_3:
# 88 "data/maps/Route139/scripts.pory"
	.string "I heard LADY ASAKURA returned for\n the ritual.\p I hope she's in time.\n She has a habit of procrastinating.$"

Route139_EventScript_Kyoko_Text_0:
# 97 "data/maps/Route139/scripts.pory"
	.string "Fufufu…\nThe ritual… Soon…$"

Route139_EventScript_Kyoko_Text_1:
# 97 "data/maps/Route139/scripts.pory"
	.string "…$"

Route139_EventScript_Kyoko_Text_2:
# 98 "data/maps/Route139/scripts.pory"
	.string "… I saw the BALD MAIDEN.\p Her scalp is resplendent as ever…$"

Route139_EventScript_BattleGirl_Text_0:
# 105 "data/maps/Route139/scripts.pory"
	.string "BRUNO's way too strong.\n I can't beat him.$"

Route139_EventScript_Expert_M_Text_0:
# 111 "data/maps/Route139/scripts.pory"
	.string "There are some rare POKéMON\n in this river.$"

Route139_EventScript_Momo_Text_0:
# 148 "data/maps/Route139/scripts.pory"
	.string "MOMO: … … …\n The altar is up ahead through the cave.$"

Route139_EventScript_Momo_Text_1:
# 156 "data/maps/Route139/scripts.pory"
	.string "MOMO: … … …\n Be careful.\l I'll meet you there.$"

Route139_EventScript_KimonoOldWoman_Text_0:
# 180 "data/maps/Route139/scripts.pory"
	.string "This dessert has been a staple food\n in our village for a few years now.\p The apples required to make them only\n grow in this area.$"

Route139_EventScript_StartSidequest_Text_0:
# 191 "data/maps/Route139/scripts.pory"
	.string "Hm… I sense strength in you, young one.\n Would you mind helping an old lady out?\p These meatheads only think about\n battling, and they're all bored of\l battling each other.\p Do you mind battling them?\n I want them to get fired up.\p I'll give you a reward if you can\n defeat all 5 of them.$"

Route139_EventScript_RemindSidequest_Text_0:
# 208 "data/maps/Route139/scripts.pory"
	.string "I need to get my workers fired up.\p If you can defeat all 5 of them in\n a battle, I'll give you a reward.$"

Route139_EventScript_GiveResult_Text_0:
# 218 "data/maps/Route139/scripts.pory"
	.string "So far you've defeated {STR_VAR_1} out of\n 5 workers.\p Keep up the good work.$"

Route139_EventScript_GiveSyrupyApple_Text_0:
# 228 "data/maps/Route139/scripts.pory"
	.string "Thank you, young one.\p My workers are all fired up.\n As promised, here's your reward.$"

Route139_EventScript_GiveSyrupyApple_Text_1:
# 243 "data/maps/Route139/scripts.pory"
	.string "Hm… It seems you don't have enough room,\n young one.$"

Route139_EventScript_Morgan_Text_0:
# 257 "data/maps/Route139/scripts.pory"
	.string "Huh? The boss said we should battle?\n All right, sounds fun!$"

Route139_EventScript_Morgan_Text_1:
# 261 "data/maps/Route139/scripts.pory"
	.string "Okay!\n I feel like I can focus on my work now!$"

Route139_EventScript_Fredward_Text_0:
# 377 "data/maps/Route139/scripts.pory"
	.string "Huh? The boss said we should battle?\n All right!\p Just warning you, I'm the strongest out\n of all of us!$"

Route139_EventScript_WorkerFiredUp_Text_0:
# 406 "data/maps/Route139/scripts.pory"
	.string "Thanks!\n I lost, but that was a great battle!\p I feel like I can focus on my work now!$"

Route139_EventScript_WorkerBored_Text_0:
# 418 "data/maps/Route139/scripts.pory"
	.string "So bored…$"

Route139_Text_WorkerDefeat::
# 424 "data/maps/Route139/scripts.pory"
	.string "That was a great battle!$"
