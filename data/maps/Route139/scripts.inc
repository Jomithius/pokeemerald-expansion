Route139_MapScripts::
# 2 "data/maps/Route139/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route139_OnTransition
	.byte 0


Route139_OnTransition::
# 6 "data/maps/Route139/scripts.pory"
	call_if_set FLAG_DEFEATED_WORKER_MORGAN, Route139_UpdateWorkerMorgan
# 7 "data/maps/Route139/scripts.pory"
	call_if_set FLAG_DEFEATED_WORKER_JOHNALD, Route139_UpdateWorkerJohnald
# 8 "data/maps/Route139/scripts.pory"
	call_if_set FLAG_DEFEATED_WORKER_DINWIDDLE, Route139_UpdateWorkerDinwiddle
# 9 "data/maps/Route139/scripts.pory"
	call_if_set FLAG_DEFEATED_WORKER_WIDDLEDIN, Route139_UpdateWorkerWiddledin
# 10 "data/maps/Route139/scripts.pory"
	call_if_set FLAG_DEFEATED_WORKER_FREDWARD, Route139_UpdateWorkerFredward
	end


Route139_UpdateWorkerMorgan::
# 15 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	return


Route139_UpdateWorkerJohnald::
# 20 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	return


Route139_UpdateWorkerDinwiddle::
# 25 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	return


Route139_UpdateWorkerWiddledin::
# 30 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	return


Route139_UpdateWorkerFredward::
# 35 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
	return


Route139_EventScript_BattleGirl::
# 40 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_BattleGirl_Text_0, MSGBOX_NPC
	end


Route139_EventScript_Expert_M::
# 46 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Expert_M_Text_0, MSGBOX_NPC
	end


Route139_LeftTrigger::
# 52 "data/maps/Route139/scripts.pory"
	lockall
# 53 "data/maps/Route139/scripts.pory"
	setflag FLAG_TEMP_5
# 54 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_Momo
	end


Route139_RightTrigger::
# 59 "data/maps/Route139/scripts.pory"
	lockall
# 60 "data/maps/Route139/scripts.pory"
	setflag FLAG_TEMP_6
# 61 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_Momo
	end


Route139_EventScript_Momo::
# 66 "data/maps/Route139/scripts.pory"
	lockall
# 67 "data/maps/Route139/scripts.pory"
	playse SE_SHINY
# 68 "data/maps/Route139/scripts.pory"
	fadescreen FADE_TO_WHITE
# 69 "data/maps/Route139/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 70 "data/maps/Route139/scripts.pory"
	addobject 16
# 71 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_TEMP_5, Route139_EventScript_Momo_2
# 74 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_TEMP_6, Route139_EventScript_Momo_3
# 78 "data/maps/Route139/scripts.pory"
	applymovement 16, Route139_Movement_MomoToPlayerTrigger
Route139_EventScript_Momo_1:
# 80 "data/maps/Route139/scripts.pory"
	delay 16
# 81 "data/maps/Route139/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 82 "data/maps/Route139/scripts.pory"
	waitmovement 16
# 83 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Momo_Text_0, MSGBOX_AUTOCLOSE
# 85 "data/maps/Route139/scripts.pory"
	waitmessage
# 86 "data/maps/Route139/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceDown
# 87 "data/maps/Route139/scripts.pory"
	waitmovement 16
# 88 "data/maps/Route139/scripts.pory"
	delay 24
# 89 "data/maps/Route139/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceLeft
# 90 "data/maps/Route139/scripts.pory"
	waitmovement 16
# 91 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Momo_Text_1, MSGBOX_AUTOCLOSE
# 94 "data/maps/Route139/scripts.pory"
	waitmessage
# 95 "data/maps/Route139/scripts.pory"
	playse SE_M_PETAL_DANCE
# 96 "data/maps/Route139/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 97 "data/maps/Route139/scripts.pory"
	removeobject 16
# 98 "data/maps/Route139/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 99 "data/maps/Route139/scripts.pory"
	setflag FLAG_HIDE_ASAK_BALDESIA_MAIN_HOUSE
# 100 "data/maps/Route139/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 6
# 101 "data/maps/Route139/scripts.pory"
	releaseall
	end

Route139_EventScript_Momo_2:
# 72 "data/maps/Route139/scripts.pory"
	applymovement 16, Route139_Movement_MomoToPlayerLeftTrigger
	goto Route139_EventScript_Momo_1

Route139_EventScript_Momo_3:
# 75 "data/maps/Route139/scripts.pory"
	applymovement 16, Route139_Movement_MomoToPlayerRightTrigger
	goto Route139_EventScript_Momo_1


Route139_EventScript_KimonoOldWoman::
# 106 "data/maps/Route139/scripts.pory"
	lock
# 107 "data/maps/Route139/scripts.pory"
	faceplayer
# 108 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0 Route139_EventScript_StartSidequest
# 109 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 1 Route139_EventScript_RemindSidequest
# 110 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 2 Route139_EventScript_GiveResult
# 111 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 3 Route139_EventScript_GiveResult
# 112 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 4 Route139_EventScript_GiveResult
# 113 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 5 Route139_EventScript_GiveResult
# 114 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 6, Route139_EventScript_GiveSyrupyApple
# 115 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_KimonoOldWoman_Text_0, MSGBOX_AUTOCLOSE
# 119 "data/maps/Route139/scripts.pory"
	waitmessage
# 120 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_StartSidequest::
# 125 "data/maps/Route139/scripts.pory"
	lock
# 126 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_StartSidequest_Text_0
# 135 "data/maps/Route139/scripts.pory"
	waitmessage
# 136 "data/maps/Route139/scripts.pory"
	setvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 137 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_RemindSidequest::
# 142 "data/maps/Route139/scripts.pory"
	lock
# 143 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_RemindSidequest_Text_0, MSGBOX_AUTOCLOSE
# 146 "data/maps/Route139/scripts.pory"
	waitmessage
# 147 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_GiveResult::
# 152 "data/maps/Route139/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_ROUTE_139_TRAINER_COUNT
# 153 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_GiveResult_Text_0, MSGBOX_AUTOCLOSE
# 156 "data/maps/Route139/scripts.pory"
	waitmessage
# 157 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_GiveSyrupyApple::
# 162 "data/maps/Route139/scripts.pory"
	lock
# 163 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_GiveSyrupyApple_Text_0
# 166 "data/maps/Route139/scripts.pory"
	waitmessage
# 167 "data/maps/Route139/scripts.pory"
	checkitemspace ITEM_SYRUPY_APPLE
# 168 "data/maps/Route139/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route139_EventScript_GiveSyrupyApple_2
# 178 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_GiveSyrupyApple_Text_1, MSGBOX_AUTOCLOSE
Route139_EventScript_GiveSyrupyApple_1:
# 181 "data/maps/Route139/scripts.pory"
	waitmessage
# 182 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_GiveSyrupyApple_2:
# 169 "data/maps/Route139/scripts.pory"
	giveitem ITEM_SYRUPY_APPLE
# 170 "data/maps/Route139/scripts.pory"
	waitmessage
# 171 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_KimonoOldWoman_Text_0, MSGBOX_AUTOCLOSE
# 175 "data/maps/Route139/scripts.pory"
	setvar VAR_BALDESIA_ROUTE_139_STATE, 7
	goto Route139_EventScript_GiveSyrupyApple_1


Route139_EventScript_Morgan::
# 187 "data/maps/Route139/scripts.pory"
	lock
# 188 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 189 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Morgan_7
Route139_EventScript_Morgan_5:
# 206 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Morgan_4
Route139_EventScript_Morgan_1:
# 209 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Morgan_2:
# 190 "data/maps/Route139/scripts.pory"
	faceplayer
# 191 "data/maps/Route139/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 192 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_0, MSGBOX_AUTOCLOSE
# 194 "data/maps/Route139/scripts.pory"
	waitmessage
# 195 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_MORGAN, Route139_Text_WorkerDefeat
# 196 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 198 "data/maps/Route139/scripts.pory"
	waitmessage
# 199 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 200 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 201 "data/maps/Route139/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 202 "data/maps/Route139/scripts.pory"
	waitmovement 0
# 203 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 204 "data/maps/Route139/scripts.pory"
	setflag FLAG_DEFEATED_WORKER_MORGAN
	goto Route139_EventScript_Morgan_1

Route139_EventScript_Morgan_3:
# 207 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Morgan_1

Route139_EventScript_Morgan_4:
# 206 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_DEFEATED_WORKER_MORGAN, Route139_EventScript_Morgan_3
	goto Route139_EventScript_Morgan_1

Route139_EventScript_Morgan_7:
# 189 "data/maps/Route139/scripts.pory"
	goto_if_unset FLAG_DEFEATED_WORKER_MORGAN, Route139_EventScript_Morgan_2
	goto Route139_EventScript_Morgan_5


Route139_EventScript_Dinwiddle::
# 214 "data/maps/Route139/scripts.pory"
	lock
# 215 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 216 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Dinwiddle_7
Route139_EventScript_Dinwiddle_5:
# 233 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Dinwiddle_4
Route139_EventScript_Dinwiddle_1:
# 236 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Dinwiddle_2:
# 217 "data/maps/Route139/scripts.pory"
	faceplayer
# 218 "data/maps/Route139/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 219 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_0, MSGBOX_AUTOCLOSE
# 221 "data/maps/Route139/scripts.pory"
	waitmessage
# 222 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_DINWIDDLE, Route139_Text_WorkerDefeat
# 223 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 225 "data/maps/Route139/scripts.pory"
	waitmessage
# 226 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 227 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 228 "data/maps/Route139/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 229 "data/maps/Route139/scripts.pory"
	waitmovement 0
# 230 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 231 "data/maps/Route139/scripts.pory"
	setflag FLAG_DEFEATED_WORKER_DINWIDDLE
	goto Route139_EventScript_Dinwiddle_1

Route139_EventScript_Dinwiddle_3:
# 234 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Dinwiddle_1

Route139_EventScript_Dinwiddle_4:
# 233 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_DEFEATED_WORKER_DINWIDDLE, Route139_EventScript_Dinwiddle_3
	goto Route139_EventScript_Dinwiddle_1

Route139_EventScript_Dinwiddle_7:
# 216 "data/maps/Route139/scripts.pory"
	goto_if_unset FLAG_DEFEATED_WORKER_DINWIDDLE, Route139_EventScript_Dinwiddle_2
	goto Route139_EventScript_Dinwiddle_5


Route139_EventScript_Widdledin::
# 241 "data/maps/Route139/scripts.pory"
	lock
# 242 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 243 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Widdledin_7
Route139_EventScript_Widdledin_5:
# 260 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Widdledin_4
Route139_EventScript_Widdledin_1:
# 263 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Widdledin_2:
# 244 "data/maps/Route139/scripts.pory"
	faceplayer
# 245 "data/maps/Route139/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 246 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_0, MSGBOX_AUTOCLOSE
# 248 "data/maps/Route139/scripts.pory"
	waitmessage
# 249 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_WIDDLEDIN, Route139_Text_WorkerDefeat
# 250 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 252 "data/maps/Route139/scripts.pory"
	waitmessage
# 253 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 254 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 255 "data/maps/Route139/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 256 "data/maps/Route139/scripts.pory"
	waitmovement 0
# 257 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 258 "data/maps/Route139/scripts.pory"
	setflag FLAG_DEFEATED_WORKER_WIDDLEDIN
	goto Route139_EventScript_Widdledin_1

Route139_EventScript_Widdledin_3:
# 261 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Widdledin_1

Route139_EventScript_Widdledin_4:
# 260 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_DEFEATED_WORKER_WIDDLEDIN, Route139_EventScript_Widdledin_3
	goto Route139_EventScript_Widdledin_1

Route139_EventScript_Widdledin_7:
# 243 "data/maps/Route139/scripts.pory"
	goto_if_unset FLAG_DEFEATED_WORKER_WIDDLEDIN, Route139_EventScript_Widdledin_2
	goto Route139_EventScript_Widdledin_5


Route139_EventScript_Johnald::
# 268 "data/maps/Route139/scripts.pory"
	lock
# 269 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 270 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Johnald_7
Route139_EventScript_Johnald_5:
# 287 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Johnald_4
Route139_EventScript_Johnald_1:
# 290 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Johnald_2:
# 271 "data/maps/Route139/scripts.pory"
	faceplayer
# 272 "data/maps/Route139/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 273 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_0, MSGBOX_AUTOCLOSE
# 275 "data/maps/Route139/scripts.pory"
	waitmessage
# 276 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_JOHNALD, Route139_Text_WorkerDefeat
# 277 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 279 "data/maps/Route139/scripts.pory"
	waitmessage
# 280 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 281 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 282 "data/maps/Route139/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 283 "data/maps/Route139/scripts.pory"
	waitmovement 0
# 284 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 285 "data/maps/Route139/scripts.pory"
	setflag FLAG_DEFEATED_WORKER_JOHNALD
	goto Route139_EventScript_Johnald_1

Route139_EventScript_Johnald_3:
# 288 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Johnald_1

Route139_EventScript_Johnald_4:
# 287 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_DEFEATED_WORKER_JOHNALD, Route139_EventScript_Johnald_3
	goto Route139_EventScript_Johnald_1

Route139_EventScript_Johnald_7:
# 270 "data/maps/Route139/scripts.pory"
	goto_if_unset FLAG_DEFEATED_WORKER_JOHNALD, Route139_EventScript_Johnald_2
	goto Route139_EventScript_Johnald_5


Route139_EventScript_Fredward::
# 295 "data/maps/Route139/scripts.pory"
	lock
# 296 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 297 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Fredward_7
Route139_EventScript_Fredward_5:
# 316 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Fredward_4
Route139_EventScript_Fredward_1:
# 319 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Fredward_2:
# 298 "data/maps/Route139/scripts.pory"
	faceplayer
# 299 "data/maps/Route139/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 300 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Fredward_Text_0, MSGBOX_AUTOCLOSE
# 304 "data/maps/Route139/scripts.pory"
	waitmessage
# 305 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_FREDWARD, Route139_Text_WorkerDefeat
# 306 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 308 "data/maps/Route139/scripts.pory"
	waitmessage
# 309 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 310 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 311 "data/maps/Route139/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 312 "data/maps/Route139/scripts.pory"
	waitmovement 0
# 313 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 314 "data/maps/Route139/scripts.pory"
	setflag FLAG_DEFEATED_WORKER_FREDWARD
	goto Route139_EventScript_Fredward_1

Route139_EventScript_Fredward_3:
# 317 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Fredward_1

Route139_EventScript_Fredward_4:
# 316 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_DEFEATED_WORKER_FREDWARD, Route139_EventScript_Fredward_3
	goto Route139_EventScript_Fredward_1

Route139_EventScript_Fredward_7:
# 297 "data/maps/Route139/scripts.pory"
	goto_if_unset FLAG_DEFEATED_WORKER_FREDWARD, Route139_EventScript_Fredward_2
	goto Route139_EventScript_Fredward_5


Route139_EventScript_WorkerFiredUp::
# 324 "data/maps/Route139/scripts.pory"
	lock
# 325 "data/maps/Route139/scripts.pory"
	faceplayer
# 326 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_WorkerFiredUp_Text_0, MSGBOX_AUTOCLOSE
# 329 "data/maps/Route139/scripts.pory"
	waitmessage
# 330 "data/maps/Route139/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 331 "data/maps/Route139/scripts.pory"
	waitmovement 0
# 332 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_WorkerBored::
# 337 "data/maps/Route139/scripts.pory"
	lock
# 338 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_WorkerBored_Text_0, MSGBOX_AUTOCLOSE
# 339 "data/maps/Route139/scripts.pory"
	waitmessage
# 340 "data/maps/Route139/scripts.pory"
	release
	end


# 348 "data/maps/Route139/scripts.pory"
Route139_Movement_MomoToPlayerLeftTrigger:
# 349 "data/maps/Route139/scripts.pory"
	walk_left
# 349 "data/maps/Route139/scripts.pory"
	walk_left
# 349 "data/maps/Route139/scripts.pory"
	walk_left
# 349 "data/maps/Route139/scripts.pory"
	walk_left
# 349 "data/maps/Route139/scripts.pory"
	walk_left
# 349 "data/maps/Route139/scripts.pory"
	walk_left
# 349 "data/maps/Route139/scripts.pory"
	walk_left
# 349 "data/maps/Route139/scripts.pory"
	walk_left
# 349 "data/maps/Route139/scripts.pory"
	walk_left
# 349 "data/maps/Route139/scripts.pory"
	walk_left
	step_end

# 352 "data/maps/Route139/scripts.pory"
Route139_Movement_MomoToPlayerTrigger:
# 353 "data/maps/Route139/scripts.pory"
	walk_left
# 353 "data/maps/Route139/scripts.pory"
	walk_left
# 353 "data/maps/Route139/scripts.pory"
	walk_left
# 353 "data/maps/Route139/scripts.pory"
	walk_left
# 353 "data/maps/Route139/scripts.pory"
	walk_left
# 353 "data/maps/Route139/scripts.pory"
	walk_left
# 353 "data/maps/Route139/scripts.pory"
	walk_left
# 353 "data/maps/Route139/scripts.pory"
	walk_left
# 353 "data/maps/Route139/scripts.pory"
	walk_left
	step_end

# 356 "data/maps/Route139/scripts.pory"
Route139_Movement_MomoToPlayerRightTrigger:
# 357 "data/maps/Route139/scripts.pory"
	walk_left
# 357 "data/maps/Route139/scripts.pory"
	walk_left
# 357 "data/maps/Route139/scripts.pory"
	walk_left
# 357 "data/maps/Route139/scripts.pory"
	walk_left
# 357 "data/maps/Route139/scripts.pory"
	walk_left
# 357 "data/maps/Route139/scripts.pory"
	walk_left
# 357 "data/maps/Route139/scripts.pory"
	walk_left
# 357 "data/maps/Route139/scripts.pory"
	walk_left
	step_end

Route139_EventScript_BattleGirl_Text_0:
# 40 "data/maps/Route139/scripts.pory"
	.string "BRUNO's way too strong.\n I can't beat him.$"

Route139_EventScript_Expert_M_Text_0:
# 46 "data/maps/Route139/scripts.pory"
	.string "There are some rare POKéMON\n in this river.$"

Route139_EventScript_Momo_Text_0:
# 83 "data/maps/Route139/scripts.pory"
	.string "MOMO: … … …\n The altar is up ahead through the cave.$"

Route139_EventScript_Momo_Text_1:
# 91 "data/maps/Route139/scripts.pory"
	.string "MOMO: … … …\n Be careful.\l I'll meet you there.$"

Route139_EventScript_KimonoOldWoman_Text_0:
# 115 "data/maps/Route139/scripts.pory"
	.string "This dessert has been a staple food\n in our village for a few years now.\p The apples required to make them only\n grow in this area.$"

Route139_EventScript_StartSidequest_Text_0:
# 126 "data/maps/Route139/scripts.pory"
	.string "Hm… I sense strength in you, young one.\n Would you mind helping an old lady out?\p These meat heads only think about\n battling, and they're all bored of\l battling each other.\p Do you mind battling them?\n I want them to get fired up.\p I'll give you a reward if you can\n defeat all 5 of them.$"

Route139_EventScript_RemindSidequest_Text_0:
# 143 "data/maps/Route139/scripts.pory"
	.string "I need to get my workers fired up.\p If you can defeat all 5 of them in\n a battle, I'll give you a reward.$"

Route139_EventScript_GiveResult_Text_0:
# 153 "data/maps/Route139/scripts.pory"
	.string "So far you've defeated {STR_VAR_1} out of\n 5 workers.\p Keep up the good work.$"

Route139_EventScript_GiveSyrupyApple_Text_0:
# 163 "data/maps/Route139/scripts.pory"
	.string "Thank you, young one.\p My workers are all fired up.\n As promised, here's your reward.$"

Route139_EventScript_GiveSyrupyApple_Text_1:
# 178 "data/maps/Route139/scripts.pory"
	.string "Hm… It seems you don't have enough room,\n young one.$"

Route139_EventScript_Morgan_Text_0:
# 192 "data/maps/Route139/scripts.pory"
	.string "Huh? The boss said we should battle?\n Alright, sounds fun!$"

Route139_EventScript_Morgan_Text_1:
# 196 "data/maps/Route139/scripts.pory"
	.string "Okay!\n I feel like I can focus on my work now!$"

Route139_EventScript_Fredward_Text_0:
# 300 "data/maps/Route139/scripts.pory"
	.string "Huh? The boss said we should battle?\n Alright!\p Just warning you, I'm the strongest out\n of all of us!$"

Route139_EventScript_WorkerFiredUp_Text_0:
# 326 "data/maps/Route139/scripts.pory"
	.string "Thanks!\n I lost, but that was a great battle!\p I feel like I can focus on my work now!$"

Route139_EventScript_WorkerBored_Text_0:
# 338 "data/maps/Route139/scripts.pory"
	.string "So bored…$"

Route139_Text_WorkerDefeat::
# 344 "data/maps/Route139/scripts.pory"
	.string "That was a great battle!$"
