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
	msgbox Route139_EventScript_Naoki_Text_2, MSGBOX_NPC
	end


Route139_EventScript_Kyoko::
# 91 "data/maps/Route139/scripts.pory"
	trainerbattle_single TRAINER_KYOKO, Route139_EventScript_Kyoko_Text_0, Route139_EventScript_Kyoko_Text_1
# 92 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Kyoko_Text_2, MSGBOX_NPC
	end


Route139_EventScript_BattleGirl::
# 99 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_BattleGirl_Text_0, MSGBOX_NPC
	end


Route139_EventScript_Expert_M::
# 105 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Expert_M_Text_0, MSGBOX_NPC
	end


Route139_LeftTrigger::
# 111 "data/maps/Route139/scripts.pory"
	lockall
# 112 "data/maps/Route139/scripts.pory"
	setflag FLAG_TEMP_5
# 113 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_Momo
	end


Route139_RightTrigger::
# 118 "data/maps/Route139/scripts.pory"
	lockall
# 119 "data/maps/Route139/scripts.pory"
	setflag FLAG_TEMP_6
# 120 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_Momo
	end


Route139_EventScript_Momo::
# 125 "data/maps/Route139/scripts.pory"
	lockall
# 126 "data/maps/Route139/scripts.pory"
	playse SE_SHINY
# 127 "data/maps/Route139/scripts.pory"
	fadescreen FADE_TO_WHITE
# 128 "data/maps/Route139/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 129 "data/maps/Route139/scripts.pory"
	addobject 15
# 130 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_TEMP_5, Route139_EventScript_Momo_2
# 133 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_TEMP_6, Route139_EventScript_Momo_3
# 137 "data/maps/Route139/scripts.pory"
	applymovement 15, Route139_Movement_MomoToPlayerTrigger
Route139_EventScript_Momo_1:
# 139 "data/maps/Route139/scripts.pory"
	delay 15
# 140 "data/maps/Route139/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 141 "data/maps/Route139/scripts.pory"
	waitmovement 15
# 142 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Momo_Text_0, MSGBOX_AUTOCLOSE
# 144 "data/maps/Route139/scripts.pory"
	waitmessage
# 145 "data/maps/Route139/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceDown
# 146 "data/maps/Route139/scripts.pory"
	waitmovement 15
# 147 "data/maps/Route139/scripts.pory"
	delay 24
# 148 "data/maps/Route139/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceLeft
# 149 "data/maps/Route139/scripts.pory"
	waitmovement 15
# 150 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Momo_Text_1, MSGBOX_AUTOCLOSE
# 153 "data/maps/Route139/scripts.pory"
	waitmessage
# 154 "data/maps/Route139/scripts.pory"
	playse SE_M_PETAL_DANCE
# 155 "data/maps/Route139/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 156 "data/maps/Route139/scripts.pory"
	removeobject 15
# 157 "data/maps/Route139/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 158 "data/maps/Route139/scripts.pory"
	setflag FLAG_HIDE_ASAK_BALDESIA_MAIN_HOUSE
# 159 "data/maps/Route139/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 6
# 160 "data/maps/Route139/scripts.pory"
	releaseall
	end

Route139_EventScript_Momo_2:
# 131 "data/maps/Route139/scripts.pory"
	applymovement 15, Route139_Movement_MomoToPlayerLeftTrigger
	goto Route139_EventScript_Momo_1

Route139_EventScript_Momo_3:
# 134 "data/maps/Route139/scripts.pory"
	applymovement 15, Route139_Movement_MomoToPlayerRightTrigger
	goto Route139_EventScript_Momo_1


Route139_EventScript_KimonoOldWoman::
# 165 "data/maps/Route139/scripts.pory"
	lock
# 166 "data/maps/Route139/scripts.pory"
	faceplayer
# 167 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0 Route139_EventScript_StartSidequest
# 168 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 1 Route139_EventScript_RemindSidequest
# 169 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 2 Route139_EventScript_GiveResult
# 170 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 3 Route139_EventScript_GiveResult
# 171 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 4 Route139_EventScript_GiveResult
# 172 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 5 Route139_EventScript_GiveResult
# 173 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 6, Route139_EventScript_GiveSyrupyApple
# 174 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_KimonoOldWoman_Text_0, MSGBOX_AUTOCLOSE
# 178 "data/maps/Route139/scripts.pory"
	waitmessage
# 179 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_StartSidequest::
# 184 "data/maps/Route139/scripts.pory"
	lock
# 185 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_StartSidequest_Text_0
# 194 "data/maps/Route139/scripts.pory"
	waitmessage
# 195 "data/maps/Route139/scripts.pory"
	setvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 196 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_RemindSidequest::
# 201 "data/maps/Route139/scripts.pory"
	lock
# 202 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_RemindSidequest_Text_0, MSGBOX_AUTOCLOSE
# 205 "data/maps/Route139/scripts.pory"
	waitmessage
# 206 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_GiveResult::
# 211 "data/maps/Route139/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_ROUTE_139_TRAINER_COUNT
# 212 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_GiveResult_Text_0, MSGBOX_AUTOCLOSE
# 215 "data/maps/Route139/scripts.pory"
	waitmessage
# 216 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_GiveSyrupyApple::
# 221 "data/maps/Route139/scripts.pory"
	lock
# 222 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_GiveSyrupyApple_Text_0
# 225 "data/maps/Route139/scripts.pory"
	waitmessage
# 226 "data/maps/Route139/scripts.pory"
	checkitemspace ITEM_SYRUPY_APPLE
# 227 "data/maps/Route139/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route139_EventScript_GiveSyrupyApple_2
# 237 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_GiveSyrupyApple_Text_1, MSGBOX_AUTOCLOSE
Route139_EventScript_GiveSyrupyApple_1:
# 240 "data/maps/Route139/scripts.pory"
	waitmessage
# 241 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_GiveSyrupyApple_2:
# 228 "data/maps/Route139/scripts.pory"
	giveitem ITEM_SYRUPY_APPLE
# 229 "data/maps/Route139/scripts.pory"
	waitmessage
# 230 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_KimonoOldWoman_Text_0, MSGBOX_AUTOCLOSE
# 234 "data/maps/Route139/scripts.pory"
	setvar VAR_BALDESIA_ROUTE_139_STATE, 7
	goto Route139_EventScript_GiveSyrupyApple_1


Route139_EventScript_Morgan::
# 246 "data/maps/Route139/scripts.pory"
	lock
# 247 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 248 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Morgan_7
Route139_EventScript_Morgan_5:
# 265 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Morgan_4
Route139_EventScript_Morgan_1:
# 268 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Morgan_2:
# 249 "data/maps/Route139/scripts.pory"
	faceplayer
# 250 "data/maps/Route139/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, FALSE
# 251 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_0, MSGBOX_AUTOCLOSE
# 253 "data/maps/Route139/scripts.pory"
	waitmessage
# 254 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_MORGAN, Route139_Text_WorkerDefeat
# 255 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 257 "data/maps/Route139/scripts.pory"
	waitmessage
# 258 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 259 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 260 "data/maps/Route139/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 261 "data/maps/Route139/scripts.pory"
	waitmovement 0
# 262 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 263 "data/maps/Route139/scripts.pory"
	setflag FLAG_DEFEATED_WORKER_MORGAN
	goto Route139_EventScript_Morgan_1

Route139_EventScript_Morgan_3:
# 266 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Morgan_1

Route139_EventScript_Morgan_4:
# 265 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_DEFEATED_WORKER_MORGAN, Route139_EventScript_Morgan_3
	goto Route139_EventScript_Morgan_1

Route139_EventScript_Morgan_7:
# 248 "data/maps/Route139/scripts.pory"
	goto_if_unset FLAG_DEFEATED_WORKER_MORGAN, Route139_EventScript_Morgan_2
	goto Route139_EventScript_Morgan_5


Route139_EventScript_Dinwiddle::
# 273 "data/maps/Route139/scripts.pory"
	lock
# 274 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 275 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Dinwiddle_7
Route139_EventScript_Dinwiddle_5:
# 292 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Dinwiddle_4
Route139_EventScript_Dinwiddle_1:
# 295 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Dinwiddle_2:
# 276 "data/maps/Route139/scripts.pory"
	faceplayer
# 277 "data/maps/Route139/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, FALSE
# 278 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_0, MSGBOX_AUTOCLOSE
# 280 "data/maps/Route139/scripts.pory"
	waitmessage
# 281 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_DINWIDDLE, Route139_Text_WorkerDefeat
# 282 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 284 "data/maps/Route139/scripts.pory"
	waitmessage
# 285 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 286 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 287 "data/maps/Route139/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 288 "data/maps/Route139/scripts.pory"
	waitmovement 0
# 289 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 290 "data/maps/Route139/scripts.pory"
	setflag FLAG_DEFEATED_WORKER_DINWIDDLE
	goto Route139_EventScript_Dinwiddle_1

Route139_EventScript_Dinwiddle_3:
# 293 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Dinwiddle_1

Route139_EventScript_Dinwiddle_4:
# 292 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_DEFEATED_WORKER_DINWIDDLE, Route139_EventScript_Dinwiddle_3
	goto Route139_EventScript_Dinwiddle_1

Route139_EventScript_Dinwiddle_7:
# 275 "data/maps/Route139/scripts.pory"
	goto_if_unset FLAG_DEFEATED_WORKER_DINWIDDLE, Route139_EventScript_Dinwiddle_2
	goto Route139_EventScript_Dinwiddle_5


Route139_EventScript_Widdledin::
# 300 "data/maps/Route139/scripts.pory"
	lock
# 301 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 302 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Widdledin_7
Route139_EventScript_Widdledin_5:
# 319 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Widdledin_4
Route139_EventScript_Widdledin_1:
# 322 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Widdledin_2:
# 303 "data/maps/Route139/scripts.pory"
	faceplayer
# 304 "data/maps/Route139/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, FALSE
# 305 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_0, MSGBOX_AUTOCLOSE
# 307 "data/maps/Route139/scripts.pory"
	waitmessage
# 308 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_WIDDLEDIN, Route139_Text_WorkerDefeat
# 309 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 311 "data/maps/Route139/scripts.pory"
	waitmessage
# 312 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 313 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 314 "data/maps/Route139/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 315 "data/maps/Route139/scripts.pory"
	waitmovement 0
# 316 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 317 "data/maps/Route139/scripts.pory"
	setflag FLAG_DEFEATED_WORKER_WIDDLEDIN
	goto Route139_EventScript_Widdledin_1

Route139_EventScript_Widdledin_3:
# 320 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Widdledin_1

Route139_EventScript_Widdledin_4:
# 319 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_DEFEATED_WORKER_WIDDLEDIN, Route139_EventScript_Widdledin_3
	goto Route139_EventScript_Widdledin_1

Route139_EventScript_Widdledin_7:
# 302 "data/maps/Route139/scripts.pory"
	goto_if_unset FLAG_DEFEATED_WORKER_WIDDLEDIN, Route139_EventScript_Widdledin_2
	goto Route139_EventScript_Widdledin_5


Route139_EventScript_Johnald::
# 327 "data/maps/Route139/scripts.pory"
	lock
# 328 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 329 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Johnald_7
Route139_EventScript_Johnald_5:
# 346 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Johnald_4
Route139_EventScript_Johnald_1:
# 349 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Johnald_2:
# 330 "data/maps/Route139/scripts.pory"
	faceplayer
# 331 "data/maps/Route139/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, FALSE
# 332 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_0, MSGBOX_AUTOCLOSE
# 334 "data/maps/Route139/scripts.pory"
	waitmessage
# 335 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_JOHNALD, Route139_Text_WorkerDefeat
# 336 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 338 "data/maps/Route139/scripts.pory"
	waitmessage
# 339 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 340 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 341 "data/maps/Route139/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 342 "data/maps/Route139/scripts.pory"
	waitmovement 0
# 343 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 344 "data/maps/Route139/scripts.pory"
	setflag FLAG_DEFEATED_WORKER_JOHNALD
	goto Route139_EventScript_Johnald_1

Route139_EventScript_Johnald_3:
# 347 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Johnald_1

Route139_EventScript_Johnald_4:
# 346 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_DEFEATED_WORKER_JOHNALD, Route139_EventScript_Johnald_3
	goto Route139_EventScript_Johnald_1

Route139_EventScript_Johnald_7:
# 329 "data/maps/Route139/scripts.pory"
	goto_if_unset FLAG_DEFEATED_WORKER_JOHNALD, Route139_EventScript_Johnald_2
	goto Route139_EventScript_Johnald_5


Route139_EventScript_Fredward::
# 354 "data/maps/Route139/scripts.pory"
	lock
# 355 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 356 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Fredward_7
Route139_EventScript_Fredward_5:
# 375 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Fredward_4
Route139_EventScript_Fredward_1:
# 378 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Fredward_2:
# 357 "data/maps/Route139/scripts.pory"
	faceplayer
# 358 "data/maps/Route139/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, FALSE
# 359 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Fredward_Text_0, MSGBOX_AUTOCLOSE
# 363 "data/maps/Route139/scripts.pory"
	waitmessage
# 364 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_FREDWARD, Route139_Text_WorkerDefeat
# 365 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 367 "data/maps/Route139/scripts.pory"
	waitmessage
# 368 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 369 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 370 "data/maps/Route139/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 371 "data/maps/Route139/scripts.pory"
	waitmovement 0
# 372 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 373 "data/maps/Route139/scripts.pory"
	setflag FLAG_DEFEATED_WORKER_FREDWARD
	goto Route139_EventScript_Fredward_1

Route139_EventScript_Fredward_3:
# 376 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Fredward_1

Route139_EventScript_Fredward_4:
# 375 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_DEFEATED_WORKER_FREDWARD, Route139_EventScript_Fredward_3
	goto Route139_EventScript_Fredward_1

Route139_EventScript_Fredward_7:
# 356 "data/maps/Route139/scripts.pory"
	goto_if_unset FLAG_DEFEATED_WORKER_FREDWARD, Route139_EventScript_Fredward_2
	goto Route139_EventScript_Fredward_5


Route139_EventScript_WorkerFiredUp::
# 383 "data/maps/Route139/scripts.pory"
	lock
# 384 "data/maps/Route139/scripts.pory"
	faceplayer
# 385 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_WorkerFiredUp_Text_0, MSGBOX_AUTOCLOSE
# 388 "data/maps/Route139/scripts.pory"
	waitmessage
# 389 "data/maps/Route139/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 390 "data/maps/Route139/scripts.pory"
	waitmovement 0
# 391 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_WorkerBored::
# 396 "data/maps/Route139/scripts.pory"
	lock
# 397 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_WorkerBored_Text_0, MSGBOX_AUTOCLOSE
# 398 "data/maps/Route139/scripts.pory"
	waitmessage
# 399 "data/maps/Route139/scripts.pory"
	release
	end


# 407 "data/maps/Route139/scripts.pory"
Route139_Movement_MomoToPlayerLeftTrigger:
# 408 "data/maps/Route139/scripts.pory"
	walk_left
# 408 "data/maps/Route139/scripts.pory"
	walk_left
# 408 "data/maps/Route139/scripts.pory"
	walk_left
# 408 "data/maps/Route139/scripts.pory"
	walk_left
# 408 "data/maps/Route139/scripts.pory"
	walk_left
# 408 "data/maps/Route139/scripts.pory"
	walk_left
# 408 "data/maps/Route139/scripts.pory"
	walk_left
# 408 "data/maps/Route139/scripts.pory"
	walk_left
# 408 "data/maps/Route139/scripts.pory"
	walk_left
# 408 "data/maps/Route139/scripts.pory"
	walk_left
	step_end

# 411 "data/maps/Route139/scripts.pory"
Route139_Movement_MomoToPlayerTrigger:
# 412 "data/maps/Route139/scripts.pory"
	walk_left
# 412 "data/maps/Route139/scripts.pory"
	walk_left
# 412 "data/maps/Route139/scripts.pory"
	walk_left
# 412 "data/maps/Route139/scripts.pory"
	walk_left
# 412 "data/maps/Route139/scripts.pory"
	walk_left
# 412 "data/maps/Route139/scripts.pory"
	walk_left
# 412 "data/maps/Route139/scripts.pory"
	walk_left
# 412 "data/maps/Route139/scripts.pory"
	walk_left
# 412 "data/maps/Route139/scripts.pory"
	walk_left
	step_end

# 415 "data/maps/Route139/scripts.pory"
Route139_Movement_MomoToPlayerRightTrigger:
# 416 "data/maps/Route139/scripts.pory"
	walk_left
# 416 "data/maps/Route139/scripts.pory"
	walk_left
# 416 "data/maps/Route139/scripts.pory"
	walk_left
# 416 "data/maps/Route139/scripts.pory"
	walk_left
# 416 "data/maps/Route139/scripts.pory"
	walk_left
# 416 "data/maps/Route139/scripts.pory"
	walk_left
# 416 "data/maps/Route139/scripts.pory"
	walk_left
# 416 "data/maps/Route139/scripts.pory"
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
# 83 "data/maps/Route139/scripts.pory"
	.string "I heard LADY ASAKURA returned for\n the ritual.\p I hope she's in time.\n She has a habit of procrastinating.$"

Route139_EventScript_Kyoko_Text_0:
# 91 "data/maps/Route139/scripts.pory"
	.string "Fufufu…\nThe ritual… Soon…$"

Route139_EventScript_Kyoko_Text_1:
# 91 "data/maps/Route139/scripts.pory"
	.string "…$"

Route139_EventScript_Kyoko_Text_2:
# 92 "data/maps/Route139/scripts.pory"
	.string "… I saw the Young Lady has returned.\p Her scalp is resplendent as ever…$"

Route139_EventScript_BattleGirl_Text_0:
# 99 "data/maps/Route139/scripts.pory"
	.string "BRUNO's way too strong.\n I can't beat him.$"

Route139_EventScript_Expert_M_Text_0:
# 105 "data/maps/Route139/scripts.pory"
	.string "There are some rare POKéMON\n in this river.$"

Route139_EventScript_Momo_Text_0:
# 142 "data/maps/Route139/scripts.pory"
	.string "MOMO: … … …\n The altar is up ahead through the cave.$"

Route139_EventScript_Momo_Text_1:
# 150 "data/maps/Route139/scripts.pory"
	.string "MOMO: … … …\n Be careful.\l I'll meet you there.$"

Route139_EventScript_KimonoOldWoman_Text_0:
# 174 "data/maps/Route139/scripts.pory"
	.string "This dessert has been a staple food\n in our village for a few years now.\p The apples required to make them only\n grow in this area.$"

Route139_EventScript_StartSidequest_Text_0:
# 185 "data/maps/Route139/scripts.pory"
	.string "Hm… I sense strength in you, young one.\n Would you mind helping an old lady out?\p These meat heads only think about\n battling, and they're all bored of\l battling each other.\p Do you mind battling them?\n I want them to get fired up.\p I'll give you a reward if you can\n defeat all 5 of them.$"

Route139_EventScript_RemindSidequest_Text_0:
# 202 "data/maps/Route139/scripts.pory"
	.string "I need to get my workers fired up.\p If you can defeat all 5 of them in\n a battle, I'll give you a reward.$"

Route139_EventScript_GiveResult_Text_0:
# 212 "data/maps/Route139/scripts.pory"
	.string "So far you've defeated {STR_VAR_1} out of\n 5 workers.\p Keep up the good work.$"

Route139_EventScript_GiveSyrupyApple_Text_0:
# 222 "data/maps/Route139/scripts.pory"
	.string "Thank you, young one.\p My workers are all fired up.\n As promised, here's your reward.$"

Route139_EventScript_GiveSyrupyApple_Text_1:
# 237 "data/maps/Route139/scripts.pory"
	.string "Hm… It seems you don't have enough room,\n young one.$"

Route139_EventScript_Morgan_Text_0:
# 251 "data/maps/Route139/scripts.pory"
	.string "Huh? The boss said we should battle?\n All right, sounds fun!$"

Route139_EventScript_Morgan_Text_1:
# 255 "data/maps/Route139/scripts.pory"
	.string "Okay!\n I feel like I can focus on my work now!$"

Route139_EventScript_Fredward_Text_0:
# 359 "data/maps/Route139/scripts.pory"
	.string "Huh? The boss said we should battle?\n All right!\p Just warning you, I'm the strongest out\n of all of us!$"

Route139_EventScript_WorkerFiredUp_Text_0:
# 385 "data/maps/Route139/scripts.pory"
	.string "Thanks!\n I lost, but that was a great battle!\p I feel like I can focus on my work now!$"

Route139_EventScript_WorkerBored_Text_0:
# 397 "data/maps/Route139/scripts.pory"
	.string "So bored…$"

Route139_Text_WorkerDefeat::
# 403 "data/maps/Route139/scripts.pory"
	.string "That was a great battle!$"
