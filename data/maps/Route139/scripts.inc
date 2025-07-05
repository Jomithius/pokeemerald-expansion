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


Route139_LeftTrigger::
# 40 "data/maps/Route139/scripts.pory"
	lockall
# 41 "data/maps/Route139/scripts.pory"
	setflag FLAG_TEMP_5
# 42 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_Momo
	end


Route139_RightTrigger::
# 47 "data/maps/Route139/scripts.pory"
	lockall
# 48 "data/maps/Route139/scripts.pory"
	setflag FLAG_TEMP_6
# 49 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_Momo
	end


Route139_EventScript_Momo::
# 54 "data/maps/Route139/scripts.pory"
	lockall
# 55 "data/maps/Route139/scripts.pory"
	playse SE_SHINY
# 56 "data/maps/Route139/scripts.pory"
	fadescreen FADE_TO_WHITE
# 57 "data/maps/Route139/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 58 "data/maps/Route139/scripts.pory"
	addobject 16
# 59 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_TEMP_5, Route139_EventScript_Momo_2
# 62 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_TEMP_6, Route139_EventScript_Momo_3
# 66 "data/maps/Route139/scripts.pory"
	applymovement 16, Route139_Movement_MomoToPlayerTrigger
Route139_EventScript_Momo_1:
# 68 "data/maps/Route139/scripts.pory"
	delay 16
# 69 "data/maps/Route139/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 70 "data/maps/Route139/scripts.pory"
	waitmovement 16
# 71 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Momo_Text_0, MSGBOX_AUTOCLOSE
# 73 "data/maps/Route139/scripts.pory"
	waitmessage
# 74 "data/maps/Route139/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceDown
# 75 "data/maps/Route139/scripts.pory"
	waitmovement 16
# 76 "data/maps/Route139/scripts.pory"
	delay 24
# 77 "data/maps/Route139/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceLeft
# 78 "data/maps/Route139/scripts.pory"
	waitmovement 16
# 79 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Momo_Text_1, MSGBOX_AUTOCLOSE
# 82 "data/maps/Route139/scripts.pory"
	waitmessage
# 83 "data/maps/Route139/scripts.pory"
	playse SE_M_PETAL_DANCE
# 84 "data/maps/Route139/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 85 "data/maps/Route139/scripts.pory"
	removeobject 16
# 86 "data/maps/Route139/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 87 "data/maps/Route139/scripts.pory"
	setflag FLAG_HIDE_ASAK_BALDESIA_MAIN_HOUSE
# 88 "data/maps/Route139/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 6
# 89 "data/maps/Route139/scripts.pory"
	releaseall
	end

Route139_EventScript_Momo_2:
# 60 "data/maps/Route139/scripts.pory"
	applymovement 16, Route139_Movement_MomoToPlayerLeftTrigger
	goto Route139_EventScript_Momo_1

Route139_EventScript_Momo_3:
# 63 "data/maps/Route139/scripts.pory"
	applymovement 16, Route139_Movement_MomoToPlayerRightTrigger
	goto Route139_EventScript_Momo_1


Route139_EventScript_KimonoOldWoman::
# 94 "data/maps/Route139/scripts.pory"
	lock
# 95 "data/maps/Route139/scripts.pory"
	faceplayer
# 96 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0 Route139_EventScript_StartSidequest
# 97 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 1 Route139_EventScript_RemindSidequest
# 98 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 2 Route139_EventScript_GiveResult
# 99 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 3 Route139_EventScript_GiveResult
# 100 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 4 Route139_EventScript_GiveResult
# 101 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 5 Route139_EventScript_GiveResult
# 102 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 6, Route139_EventScript_GiveSyrupyApple
# 103 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_KimonoOldWoman_Text_0, MSGBOX_AUTOCLOSE
# 107 "data/maps/Route139/scripts.pory"
	waitmessage
# 108 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_StartSidequest::
# 113 "data/maps/Route139/scripts.pory"
	lock
# 114 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_StartSidequest_Text_0
# 123 "data/maps/Route139/scripts.pory"
	waitmessage
# 124 "data/maps/Route139/scripts.pory"
	setvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 125 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_RemindSidequest::
# 130 "data/maps/Route139/scripts.pory"
	lock
# 131 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_RemindSidequest_Text_0, MSGBOX_AUTOCLOSE
# 134 "data/maps/Route139/scripts.pory"
	waitmessage
# 135 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_GiveResult::
# 140 "data/maps/Route139/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_ROUTE_139_TRAINER_COUNT
# 141 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_GiveResult_Text_0, MSGBOX_AUTOCLOSE
# 144 "data/maps/Route139/scripts.pory"
	waitmessage
# 145 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_GiveSyrupyApple::
# 150 "data/maps/Route139/scripts.pory"
	lock
# 151 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_GiveSyrupyApple_Text_0
# 154 "data/maps/Route139/scripts.pory"
	waitmessage
# 155 "data/maps/Route139/scripts.pory"
	checkitemspace ITEM_SYRUPY_APPLE
# 156 "data/maps/Route139/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route139_EventScript_GiveSyrupyApple_2
# 166 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_GiveSyrupyApple_Text_1, MSGBOX_AUTOCLOSE
Route139_EventScript_GiveSyrupyApple_1:
# 169 "data/maps/Route139/scripts.pory"
	waitmessage
# 170 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_GiveSyrupyApple_2:
# 157 "data/maps/Route139/scripts.pory"
	giveitem ITEM_SYRUPY_APPLE
# 158 "data/maps/Route139/scripts.pory"
	waitmessage
# 159 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_KimonoOldWoman_Text_0, MSGBOX_AUTOCLOSE
# 163 "data/maps/Route139/scripts.pory"
	setvar VAR_BALDESIA_ROUTE_139_STATE, 7
	goto Route139_EventScript_GiveSyrupyApple_1


Route139_EventScript_Morgan::
# 175 "data/maps/Route139/scripts.pory"
	lock
# 176 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 177 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Morgan_7
Route139_EventScript_Morgan_5:
# 194 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Morgan_4
Route139_EventScript_Morgan_1:
# 197 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Morgan_2:
# 178 "data/maps/Route139/scripts.pory"
	faceplayer
# 179 "data/maps/Route139/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 180 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_0, MSGBOX_AUTOCLOSE
# 182 "data/maps/Route139/scripts.pory"
	waitmessage
# 183 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_MORGAN, Route139_Text_WorkerDefeat
# 184 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 186 "data/maps/Route139/scripts.pory"
	waitmessage
# 187 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 188 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 189 "data/maps/Route139/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 190 "data/maps/Route139/scripts.pory"
	waitmovement 0
# 191 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 192 "data/maps/Route139/scripts.pory"
	setflag FLAG_DEFEATED_WORKER_MORGAN
	goto Route139_EventScript_Morgan_1

Route139_EventScript_Morgan_3:
# 195 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Morgan_1

Route139_EventScript_Morgan_4:
# 194 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_DEFEATED_WORKER_MORGAN, Route139_EventScript_Morgan_3
	goto Route139_EventScript_Morgan_1

Route139_EventScript_Morgan_7:
# 177 "data/maps/Route139/scripts.pory"
	goto_if_unset FLAG_DEFEATED_WORKER_MORGAN, Route139_EventScript_Morgan_2
	goto Route139_EventScript_Morgan_5


Route139_EventScript_Dinwiddle::
# 202 "data/maps/Route139/scripts.pory"
	lock
# 203 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 204 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Dinwiddle_7
Route139_EventScript_Dinwiddle_5:
# 221 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Dinwiddle_4
Route139_EventScript_Dinwiddle_1:
# 224 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Dinwiddle_2:
# 205 "data/maps/Route139/scripts.pory"
	faceplayer
# 206 "data/maps/Route139/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 207 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_0, MSGBOX_AUTOCLOSE
# 209 "data/maps/Route139/scripts.pory"
	waitmessage
# 210 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_DINWIDDLE, Route139_Text_WorkerDefeat
# 211 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 213 "data/maps/Route139/scripts.pory"
	waitmessage
# 214 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 215 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 216 "data/maps/Route139/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 217 "data/maps/Route139/scripts.pory"
	waitmovement 0
# 218 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 219 "data/maps/Route139/scripts.pory"
	setflag FLAG_DEFEATED_WORKER_DINWIDDLE
	goto Route139_EventScript_Dinwiddle_1

Route139_EventScript_Dinwiddle_3:
# 222 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Dinwiddle_1

Route139_EventScript_Dinwiddle_4:
# 221 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_DEFEATED_WORKER_DINWIDDLE, Route139_EventScript_Dinwiddle_3
	goto Route139_EventScript_Dinwiddle_1

Route139_EventScript_Dinwiddle_7:
# 204 "data/maps/Route139/scripts.pory"
	goto_if_unset FLAG_DEFEATED_WORKER_DINWIDDLE, Route139_EventScript_Dinwiddle_2
	goto Route139_EventScript_Dinwiddle_5


Route139_EventScript_Widdledin::
# 229 "data/maps/Route139/scripts.pory"
	lock
# 230 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 231 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Widdledin_7
Route139_EventScript_Widdledin_5:
# 248 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Widdledin_4
Route139_EventScript_Widdledin_1:
# 251 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Widdledin_2:
# 232 "data/maps/Route139/scripts.pory"
	faceplayer
# 233 "data/maps/Route139/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 234 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_0, MSGBOX_AUTOCLOSE
# 236 "data/maps/Route139/scripts.pory"
	waitmessage
# 237 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_WIDDLEDIN, Route139_Text_WorkerDefeat
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
	setobjectmovementtype 6, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 246 "data/maps/Route139/scripts.pory"
	setflag FLAG_DEFEATED_WORKER_WIDDLEDIN
	goto Route139_EventScript_Widdledin_1

Route139_EventScript_Widdledin_3:
# 249 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Widdledin_1

Route139_EventScript_Widdledin_4:
# 248 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_DEFEATED_WORKER_WIDDLEDIN, Route139_EventScript_Widdledin_3
	goto Route139_EventScript_Widdledin_1

Route139_EventScript_Widdledin_7:
# 231 "data/maps/Route139/scripts.pory"
	goto_if_unset FLAG_DEFEATED_WORKER_WIDDLEDIN, Route139_EventScript_Widdledin_2
	goto Route139_EventScript_Widdledin_5


Route139_EventScript_Johnald::
# 256 "data/maps/Route139/scripts.pory"
	lock
# 257 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 258 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Johnald_7
Route139_EventScript_Johnald_5:
# 275 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Johnald_4
Route139_EventScript_Johnald_1:
# 278 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Johnald_2:
# 259 "data/maps/Route139/scripts.pory"
	faceplayer
# 260 "data/maps/Route139/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 261 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_0, MSGBOX_AUTOCLOSE
# 263 "data/maps/Route139/scripts.pory"
	waitmessage
# 264 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_JOHNALD, Route139_Text_WorkerDefeat
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
	setobjectmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 273 "data/maps/Route139/scripts.pory"
	setflag FLAG_DEFEATED_WORKER_JOHNALD
	goto Route139_EventScript_Johnald_1

Route139_EventScript_Johnald_3:
# 276 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Johnald_1

Route139_EventScript_Johnald_4:
# 275 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_DEFEATED_WORKER_JOHNALD, Route139_EventScript_Johnald_3
	goto Route139_EventScript_Johnald_1

Route139_EventScript_Johnald_7:
# 258 "data/maps/Route139/scripts.pory"
	goto_if_unset FLAG_DEFEATED_WORKER_JOHNALD, Route139_EventScript_Johnald_2
	goto Route139_EventScript_Johnald_5


Route139_EventScript_Fredward::
# 283 "data/maps/Route139/scripts.pory"
	lock
# 284 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 285 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Fredward_7
Route139_EventScript_Fredward_5:
# 304 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Fredward_4
Route139_EventScript_Fredward_1:
# 307 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Fredward_2:
# 286 "data/maps/Route139/scripts.pory"
	faceplayer
# 287 "data/maps/Route139/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 288 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Fredward_Text_0, MSGBOX_AUTOCLOSE
# 292 "data/maps/Route139/scripts.pory"
	waitmessage
# 293 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_FREDWARD, Route139_Text_WorkerDefeat
# 294 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 296 "data/maps/Route139/scripts.pory"
	waitmessage
# 297 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 298 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 299 "data/maps/Route139/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 300 "data/maps/Route139/scripts.pory"
	waitmovement 0
# 301 "data/maps/Route139/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 302 "data/maps/Route139/scripts.pory"
	setflag FLAG_DEFEATED_WORKER_FREDWARD
	goto Route139_EventScript_Fredward_1

Route139_EventScript_Fredward_3:
# 305 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Fredward_1

Route139_EventScript_Fredward_4:
# 304 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_DEFEATED_WORKER_FREDWARD, Route139_EventScript_Fredward_3
	goto Route139_EventScript_Fredward_1

Route139_EventScript_Fredward_7:
# 285 "data/maps/Route139/scripts.pory"
	goto_if_unset FLAG_DEFEATED_WORKER_FREDWARD, Route139_EventScript_Fredward_2
	goto Route139_EventScript_Fredward_5


Route139_EventScript_WorkerFiredUp::
# 312 "data/maps/Route139/scripts.pory"
	lock
# 313 "data/maps/Route139/scripts.pory"
	faceplayer
# 314 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_WorkerFiredUp_Text_0, MSGBOX_AUTOCLOSE
# 317 "data/maps/Route139/scripts.pory"
	waitmessage
# 318 "data/maps/Route139/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 319 "data/maps/Route139/scripts.pory"
	waitmovement 0
# 320 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_WorkerBored::
# 325 "data/maps/Route139/scripts.pory"
	lock
# 326 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_WorkerBored_Text_0, MSGBOX_AUTOCLOSE
# 327 "data/maps/Route139/scripts.pory"
	waitmessage
# 328 "data/maps/Route139/scripts.pory"
	release
	end


# 336 "data/maps/Route139/scripts.pory"
Route139_Movement_MomoToPlayerLeftTrigger:
# 337 "data/maps/Route139/scripts.pory"
	walk_left
# 337 "data/maps/Route139/scripts.pory"
	walk_left
# 337 "data/maps/Route139/scripts.pory"
	walk_left
# 337 "data/maps/Route139/scripts.pory"
	walk_left
# 337 "data/maps/Route139/scripts.pory"
	walk_left
# 337 "data/maps/Route139/scripts.pory"
	walk_left
# 337 "data/maps/Route139/scripts.pory"
	walk_left
# 337 "data/maps/Route139/scripts.pory"
	walk_left
# 337 "data/maps/Route139/scripts.pory"
	walk_left
# 337 "data/maps/Route139/scripts.pory"
	walk_left
	step_end

# 340 "data/maps/Route139/scripts.pory"
Route139_Movement_MomoToPlayerTrigger:
# 341 "data/maps/Route139/scripts.pory"
	walk_left
# 341 "data/maps/Route139/scripts.pory"
	walk_left
# 341 "data/maps/Route139/scripts.pory"
	walk_left
# 341 "data/maps/Route139/scripts.pory"
	walk_left
# 341 "data/maps/Route139/scripts.pory"
	walk_left
# 341 "data/maps/Route139/scripts.pory"
	walk_left
# 341 "data/maps/Route139/scripts.pory"
	walk_left
# 341 "data/maps/Route139/scripts.pory"
	walk_left
# 341 "data/maps/Route139/scripts.pory"
	walk_left
	step_end

# 344 "data/maps/Route139/scripts.pory"
Route139_Movement_MomoToPlayerRightTrigger:
# 345 "data/maps/Route139/scripts.pory"
	walk_left
# 345 "data/maps/Route139/scripts.pory"
	walk_left
# 345 "data/maps/Route139/scripts.pory"
	walk_left
# 345 "data/maps/Route139/scripts.pory"
	walk_left
# 345 "data/maps/Route139/scripts.pory"
	walk_left
# 345 "data/maps/Route139/scripts.pory"
	walk_left
# 345 "data/maps/Route139/scripts.pory"
	walk_left
# 345 "data/maps/Route139/scripts.pory"
	walk_left
	step_end

Route139_EventScript_Momo_Text_0:
# 71 "data/maps/Route139/scripts.pory"
	.string "MOMO: … … …\n The altar is up ahead through the cave.$"

Route139_EventScript_Momo_Text_1:
# 79 "data/maps/Route139/scripts.pory"
	.string "MOMO: … … …\n Be careful.\l I'll meet you there.$"

Route139_EventScript_KimonoOldWoman_Text_0:
# 103 "data/maps/Route139/scripts.pory"
	.string "This dessert has been a staple food\n in our village for a few years now.\p The apples required to make them only\n grow in this area.$"

Route139_EventScript_StartSidequest_Text_0:
# 114 "data/maps/Route139/scripts.pory"
	.string "Hm… I sense strength in you, young one.\n Would you mind helping an old lady out?\p These meat heads only think about\n battling, and they're all bored of\l battling each other.\p Do you mind battling them?\n I want them to get fired up.\p I'll give you a reward if you can\n defeat all 5 of them.$"

Route139_EventScript_RemindSidequest_Text_0:
# 131 "data/maps/Route139/scripts.pory"
	.string "I need to get my workers fired up.\p If you can defeat all 5 of them in\n a battle, I'll give you a reward.$"

Route139_EventScript_GiveResult_Text_0:
# 141 "data/maps/Route139/scripts.pory"
	.string "So far you've defeated {STR_VAR_1} out of\n 5 workers.\p Keep up the good work.$"

Route139_EventScript_GiveSyrupyApple_Text_0:
# 151 "data/maps/Route139/scripts.pory"
	.string "Thank you, young one.\p My workers are all fired up.\n As promised, here's your reward.$"

Route139_EventScript_GiveSyrupyApple_Text_1:
# 166 "data/maps/Route139/scripts.pory"
	.string "Hm… It seems you don't have enough room,\n young one.$"

Route139_EventScript_Morgan_Text_0:
# 180 "data/maps/Route139/scripts.pory"
	.string "Huh? The boss said we should battle?\n Alright, sounds fun!$"

Route139_EventScript_Morgan_Text_1:
# 184 "data/maps/Route139/scripts.pory"
	.string "Okay!\n I feel like I can focus on my work now!$"

Route139_EventScript_Fredward_Text_0:
# 288 "data/maps/Route139/scripts.pory"
	.string "Huh? The boss said we should battle?\n Alright!\p Just warning you, I'm the strongest out\n of all of us!$"

Route139_EventScript_WorkerFiredUp_Text_0:
# 314 "data/maps/Route139/scripts.pory"
	.string "Thanks!\n I lost, but that was a great battle!\p I feel like I can focus on my work now!$"

Route139_EventScript_WorkerBored_Text_0:
# 326 "data/maps/Route139/scripts.pory"
	.string "So bored…$"

Route139_Text_WorkerDefeat::
# 332 "data/maps/Route139/scripts.pory"
	.string "That was a great battle!$"
