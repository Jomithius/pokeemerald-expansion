Route135_Lab_MapScripts::
# 6 "data/maps/Route135_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route135_Lab_OnTransition
# 2 "data/maps/Route135_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route135_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route135_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Route135_Lab/scripts.pory"
	map_script_2 VAR_ULTRA_SPACE_STATE, 0, Route135_Lab_EventScript_ToUltraSpace
# 4 "data/maps/Route135_Lab/scripts.pory"
	map_script_2 VAR_ULTRA_SPACE_STATE, 3, Route135_Lab_EventScript_EndUltraSpace
	.2byte 0


Route135_Lab_OnTransition::
# 10 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_TEMP_E
# 11 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_SYS_DYNAMIC_LEVELS
# 12 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_LANDMARK_ROUTE135
# 13 "data/maps/Route135_Lab/scripts.pory"
	call_if_set FLAG_ENABLED_JAMES_MATCH_CALL, Route135_Lab_DisableJamesMatchCall
# 14 "data/maps/Route135_Lab/scripts.pory"
	call_if_ge VAR_ULTRA_SPACE_STATE, 4, Route135_Lab_JamesPosition
	end


Route135_Lab_JamesPosition::
# 19 "data/maps/Route135_Lab/scripts.pory"
	setobjectxyperm 2, 5, 2
# 20 "data/maps/Route135_Lab/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	return


Route135_Lab_DisableJamesMatchCall::
# 25 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_ENABLED_JAMES_MATCH_CALL
	return


Route135_Lab_EventScript_Maniac::
# 30 "data/maps/Route135_Lab/scripts.pory"
	lock
# 31 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 4
	goto_if_eq Route135_Lab_EventScript_Maniac_2
# 34 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 5
	goto_if_eq Route135_Lab_EventScript_Maniac_3
# 37 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 6
	goto_if_eq Route135_Lab_EventScript_Maniac_4
# 41 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImBusyTalkToCosmog, MSGBOX_DEFAULT
Route135_Lab_EventScript_Maniac_1:
# 43 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 44 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_Maniac_2:
# 32 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImBusy, MSGBOX_DEFAULT
	goto Route135_Lab_EventScript_Maniac_1

Route135_Lab_EventScript_Maniac_3:
# 35 "data/maps/Route135_Lab/scripts.pory"
	goto Route135_Lab_EventScript_ToAreaZero
	goto Route135_Lab_EventScript_Maniac_1

Route135_Lab_EventScript_Maniac_4:
# 38 "data/maps/Route135_Lab/scripts.pory"
	goto Route135_Lab_EventScript_TalkToCosmog
	goto Route135_Lab_EventScript_Maniac_1


Route135_Lab_EventScript_James::
# 49 "data/maps/Route135_Lab/scripts.pory"
	lock
# 50 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 7
	goto_if_ge Route135_Lab_EventScript_James_4
Route135_Lab_EventScript_James_1:
# 53 "data/maps/Route135_Lab/scripts.pory"
	goto_if_set FLAG_SYS_DEFEATED_JAMES, Route135_Lab_EventScript_James_9
Route135_Lab_EventScript_James_8:
# 56 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 57 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 5
	goto_if_eq Route135_Lab_EventScript_James_12
# 62 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 6
	goto_if_eq Route135_Lab_EventScript_James_13
# 76 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImGoingToStayHere, MSGBOX_AUTOCLOSE
# 77 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
Route135_Lab_EventScript_James_11:
# 79 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 80 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 81 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_James_2:
# 51 "data/maps/Route135_Lab/scripts.pory"
	goto Route_135_EventScript_JamesBattle
	goto Route135_Lab_EventScript_James_1

Route135_Lab_EventScript_James_3:
# 50 "data/maps/Route135_Lab/scripts.pory"
	goto_if_unset FLAG_SYS_DEFEATED_JAMES, Route135_Lab_EventScript_James_2
	goto Route135_Lab_EventScript_James_1

Route135_Lab_EventScript_James_4:
# 50 "data/maps/Route135_Lab/scripts.pory"
	goto_if_set FLAG_SYS_FINAL_REMATCH, Route135_Lab_EventScript_James_3
	goto Route135_Lab_EventScript_James_1

Route135_Lab_EventScript_James_9:
# 54 "data/maps/Route135_Lab/scripts.pory"
	goto Route_135_EventScript_JamesGoFinishTheGame
	goto Route135_Lab_EventScript_James_8

Route135_Lab_EventScript_James_12:
# 58 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_James_Text_0, MSGBOX_AUTOCLOSE
# 60 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
	goto Route135_Lab_EventScript_James_11

Route135_Lab_EventScript_James_13:
# 63 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_James_Text_1, MSGBOX_AUTOCLOSE
# 73 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
	goto Route135_Lab_EventScript_James_11


Route_135_EventScript_JamesGoFinishTheGame::
# 86 "data/maps/Route135_Lab/scripts.pory"
	lock
# 87 "data/maps/Route135_Lab/scripts.pory"
	delay 30
# 88 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 89 "data/maps/Route135_Lab/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 90 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 91 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 92 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 93 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_LINA_TALKED_TO, 2
	goto_if_eq Route_135_EventScript_JamesGoFinishTheGame_12
Route_135_EventScript_JamesGoFinishTheGame_10:
# 120 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_LINA_TALKED_TO, 1
	goto_if_eq Route_135_EventScript_JamesGoFinishTheGame_9
Route_135_EventScript_JamesGoFinishTheGame_7:
# 152 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_LINA_TALKED_TO, 1
	goto_if_eq Route_135_EventScript_JamesGoFinishTheGame_6
Route_135_EventScript_JamesGoFinishTheGame_5:
# 191 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesGoFinishTheGame_Text_5, MSGBOX_AUTOCLOSE
# 211 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
Route_135_EventScript_JamesGoFinishTheGame_1:
# 213 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 214 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 215 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route_135_EventScript_JamesGoFinishTheGame_2:
# 94 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesGoFinishTheGame_Text_0, MSGBOX_AUTOCLOSE
# 118 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
	goto Route_135_EventScript_JamesGoFinishTheGame_1

Route_135_EventScript_JamesGoFinishTheGame_3:
# 121 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesGoFinishTheGame_Text_1, MSGBOX_DEFAULT
# 139 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 140 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesGoFinishTheGame_Text_2, MSGBOX_AUTOCLOSE
# 150 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
	goto Route_135_EventScript_JamesGoFinishTheGame_1

Route_135_EventScript_JamesGoFinishTheGame_4:
# 153 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesGoFinishTheGame_Text_1, MSGBOX_DEFAULT
# 171 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 172 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesGoFinishTheGame_Text_3, MSGBOX_AUTOCLOSE
# 182 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 183 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_B_POINTS
# 184 "data/maps/Route135_Lab/scripts.pory"
	message Route_135_EventScript_JamesGoFinishTheGame_Text_4
# 186 "data/maps/Route135_Lab/scripts.pory"
	waitfanfare
# 187 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 188 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_LINA_TALKED_TO, 2
	goto Route_135_EventScript_JamesGoFinishTheGame_1

Route_135_EventScript_JamesGoFinishTheGame_6:
# 152 "data/maps/Route135_Lab/scripts.pory"
	goto_if_set FLAG_LINA_HOUSE_EEVEE, Route_135_EventScript_JamesGoFinishTheGame_4
	goto Route_135_EventScript_JamesGoFinishTheGame_5

Route_135_EventScript_JamesGoFinishTheGame_9:
# 120 "data/maps/Route135_Lab/scripts.pory"
	goto_if_unset FLAG_LINA_HOUSE_EEVEE, Route_135_EventScript_JamesGoFinishTheGame_3
	goto Route_135_EventScript_JamesGoFinishTheGame_7

Route_135_EventScript_JamesGoFinishTheGame_12:
# 93 "data/maps/Route135_Lab/scripts.pory"
	goto_if_set FLAG_LINA_HOUSE_EEVEE, Route_135_EventScript_JamesGoFinishTheGame_2
	goto Route_135_EventScript_JamesGoFinishTheGame_10


Route_135_EventScript_JamesBattle::
# 220 "data/maps/Route135_Lab/scripts.pory"
	lock
# 221 "data/maps/Route135_Lab/scripts.pory"
	delay 30
# 222 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 223 "data/maps/Route135_Lab/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 224 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 225 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 226 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 227 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesBattle_Text_0, MSGBOX_DEFAULT
# 230 "data/maps/Route135_Lab/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route_135_EventScript_JamesBattle_Text_1, Route_135_EventScript_JamesBattle_Text_2
# 231 "data/maps/Route135_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route_135_EventScript_JamesBattleChoseNo
# 232 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesBattle_Text_3, MSGBOX_AUTOCLOSE
# 241 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 242 "data/maps/Route135_Lab/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_RESULT
# 243 "data/maps/Route135_Lab/scripts.pory"
	switch VAR_RESULT
# 244 "data/maps/Route135_Lab/scripts.pory"
	case DIR_WEST, Route_135_EventScript_JamesBattle_3
# 246 "data/maps/Route135_Lab/scripts.pory"
	case DIR_EAST, Route_135_EventScript_JamesBattle_4
# 248 "data/maps/Route135_Lab/scripts.pory"
	case DIR_NORTH, Route_135_EventScript_JamesBattle_5
# 251 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route_135_Lab_Movement_JamesLeavesPlayer
Route_135_EventScript_JamesBattle_1:
# 253 "data/maps/Route135_Lab/scripts.pory"
	delay 24
# 254 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 255 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 256 "data/maps/Route135_Lab/scripts.pory"
	removeobject 2
# 257 "data/maps/Route135_Lab/scripts.pory"
	playse SE_EXIT
# 258 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 259 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_HIDE_JAMES_ROUTE_115
# 260 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_MISA_STATE, 11
# 261 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route_135_EventScript_JamesBattle_3:
# 245 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route_135_Lab_Movement_JamesLeavesPlayer
	goto Route_135_EventScript_JamesBattle_1

Route_135_EventScript_JamesBattle_4:
# 247 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route_135_Lab_Movement_JamesLeavesPlayer
	goto Route_135_EventScript_JamesBattle_1

Route_135_EventScript_JamesBattle_5:
# 249 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route_135_Lab_Movement_JamesLeavesPlayerNorth
	goto Route_135_EventScript_JamesBattle_1


Route_135_EventScript_JamesBattleChoseNo::
# 266 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesBattleChoseNo_Text_0, MSGBOX_AUTOCLOSE
# 268 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 269 "data/maps/Route135_Lab/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 270 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 271 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_ToUltraSpace::
# 276 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 277 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 278 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 279 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 280 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 281 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacApproachPlayer
# 282 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 283 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac1, MSGBOX_YESNO
# 284 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route135_Lab_EventScript_ToUltraSpace_2
# 355 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_ManiacNo, MSGBOX_AUTOCLOSE
# 356 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 357 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 358 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 359 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 360 "data/maps/Route135_Lab/scripts.pory"
	warp MAP_ROUTE135, 8, 10
# 361 "data/maps/Route135_Lab/scripts.pory"
	waitstate
Route135_Lab_EventScript_ToUltraSpace_1:
# 363 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end

Route135_Lab_EventScript_ToUltraSpace_2:
# 285 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac2, MSGBOX_AUTOCLOSE
# 286 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 287 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacGoBackToPC
# 288 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 289 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerGoBackToPC
# 290 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 291 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac3, MSGBOX_AUTOCLOSE
# 292 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 293 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 294 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 295 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 298 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 299 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 300 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 301 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 302 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 303 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 304 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac4, MSGBOX_AUTOCLOSE
# 305 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 306 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 307 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 308 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToUltraSpace_Text_1, MSGBOX_AUTOCLOSE
# 309 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 310 "data/maps/Route135_Lab/scripts.pory"
	delay 20
# 311 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route135_Lab_Movement_JamesEnter
# 312 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 313 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 314 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 315 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 316 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 317 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 318 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 319 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 320 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 321 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James, MSGBOX_AUTOCLOSE
# 322 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 323 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 324 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 325 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 326 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 327 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac5, MSGBOX_AUTOCLOSE
# 328 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 329 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacStartExperiment
# 330 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 331 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route135_Lab_Movement_JamesStartExperiment
# 332 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 333 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerStartExperiment
# 334 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 335 "data/maps/Route135_Lab/scripts.pory"
	fadenewbgm MUS_NONE
# 336 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac6, MSGBOX_AUTOCLOSE
# 337 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 338 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 339 "data/maps/Route135_Lab/scripts.pory"
	playse SE_BERRY_BLENDER
# 340 "data/maps/Route135_Lab/scripts.pory"
	delay 60
# 341 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac7, MSGBOX_AUTOCLOSE
# 342 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 343 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 344 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 345 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 346 "data/maps/Route135_Lab/scripts.pory"
	playse SE_BREAKABLE_DOOR
# 347 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 348 "data/maps/Route135_Lab/scripts.pory"
	delay 10
# 349 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 350 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 1
# 351 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_ULTRA_SPACE, 40, 65
# 352 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ToUltraSpace_1


Route135_Lab_Shake::
# 368 "data/maps/Route135_Lab/scripts.pory"
	delay 30
# 369 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8004, 2
# 370 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8005, 6
# 371 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8006, 8
# 372 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8007, 4
# 373 "data/maps/Route135_Lab/scripts.pory"
	special ShakeCamera
# 374 "data/maps/Route135_Lab/scripts.pory"
	waitstate
# 375 "data/maps/Route135_Lab/scripts.pory"
	delay 60
# 376 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 377 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_TO_WHITE
# 378 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 379 "data/maps/Route135_Lab/scripts.pory"
	delay 20
# 380 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 381 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_TO_WHITE
# 382 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 383 "data/maps/Route135_Lab/scripts.pory"
	delay 10
# 384 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 385 "data/maps/Route135_Lab/scripts.pory"
	playse SE_INTRO_BLAST
# 386 "data/maps/Route135_Lab/scripts.pory"
	delay 20
	return


Route135_Lab_EventScript_Cosmog::
# 391 "data/maps/Route135_Lab/scripts.pory"
	lock
# 392 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 393 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 394 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 395 "data/maps/Route135_Lab/scripts.pory"
	goto_if_ge VAR_ULTRA_SPACE_STATE, 6, Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero
# 396 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_EndUltraSpace::
# 401 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 402 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Route_135_Lab_ManiacLookAround
# 403 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 404 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route_135_Lab_PlayerLookAround
# 405 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 406 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Route_135_Lab_JamesLookAround
# 407 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 408 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_EndUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 410 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 411 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 412 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 4
# 413 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac8, MSGBOX_AUTOCLOSE
# 414 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 415 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 416 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 417 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Route_135_Lab_Movement_ManiacReturnsToComputer
# 418 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 419 "data/maps/Route135_Lab/scripts.pory"
	applymovement 6, Route_135_Lab_Movement_CosmogReturnsToComputer
# 420 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 421 "data/maps/Route135_Lab/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_LOOK_AROUND
# 422 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 423 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 424 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceRight
# 425 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 6
# 426 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 427 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 4
# 428 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac9, MSGBOX_AUTOCLOSE
# 429 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 430 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 431 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 4
# 432 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Route_135_Lab_Movement_JamesFacePlayer
# 433 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 434 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James2, MSGBOX_AUTOCLOSE
# 435 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 436 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 437 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 438 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_EndUltraSpace_Text_1, MSGBOX_AUTOCLOSE
# 440 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 441 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 442 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 443 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James3, MSGBOX_AUTOCLOSE
# 444 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 445 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Route_135_Lab_Movement_JamesReturnsToComputer
# 446 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 447 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 448 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 449 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route_135_Lab_Movement_PlayerLeaves
# 450 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 451 "data/maps/Route135_Lab/scripts.pory"
	removeobject 5
# 452 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_HIDE_NPCS_RETURNED_FROM_ULTRA_SPACE
# 453 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_HIDE_PROF_ROUTE_135_LAB
# 454 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_HIDE_JAMES_ROUTE_135_LAB
# 455 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 4
# 456 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_JAMES_AREA_ZERO_CALL_STEP_COUNTER, 0
# 457 "data/maps/Route135_Lab/scripts.pory"
	addvar VAR_FINAL_REMATCH_STATE, 1
# 458 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_JIMMY_FINAL_REMATCH_CALL_STEP_COUNTER, 0
# 459 "data/maps/Route135_Lab/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE135
# 460 "data/maps/Route135_Lab/scripts.pory"
	warp MAP_ROUTE135, 8, 10
# 461 "data/maps/Route135_Lab/scripts.pory"
	waitstate
# 462 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end


Route135_Lab_EventScript_JamesCallsPlayerAreaZero::
# 467 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 468 "data/maps/Route135_Lab/scripts.pory"
	pokenavcall Route_135_Lab_PokenavText_JamesComeBackToTheLab
# 469 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 470 "data/maps/Route135_Lab/scripts.pory"
	delay 30
# 471 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 5
# 472 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_SYS_UNLOCKED_AREA_ZERO
# 473 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end


Route135_Lab_EventScript_ToAreaZero::
# 478 "data/maps/Route135_Lab/scripts.pory"
	lock
# 479 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 480 "data/maps/Route135_Lab/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route135_Lab_EventScript_ToAreaZero_2
# 484 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_ManiacIntroduceAreaZero, MSGBOX_YESNO
Route135_Lab_EventScript_ToAreaZero_1:
# 486 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 487 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route135_Lab_EventScript_ToAreaZero_6
# 505 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToAreaZero_Text_2, MSGBOX_AUTOCLOSE
# 507 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 508 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 509 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 510 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_TEMP_1
Route135_Lab_EventScript_ToAreaZero_5:
# 512 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_ToAreaZero_2:
# 481 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToAreaZero_Text_0, MSGBOX_YESNO
	goto Route135_Lab_EventScript_ToAreaZero_1

Route135_Lab_EventScript_ToAreaZero_6:
# 488 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToAreaZero_Text_1, MSGBOX_AUTOCLOSE
# 491 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_EventScript_PlayerGoesToCosmog
# 492 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 493 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_ManiacExplainCosmog, MSGBOX_AUTOCLOSE
# 494 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 495 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 496 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 497 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 498 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 499 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 500 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 6
# 501 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_AREA_ZERO, 15, 11
# 502 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ToAreaZero_5


Route135_Lab_EventScript_TalkToCosmog::
# 517 "data/maps/Route135_Lab/scripts.pory"
	lock
# 518 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 519 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_TalkToCosmog_Text_0, MSGBOX_DEFAULT
# 528 "data/maps/Route135_Lab/scripts.pory"
	giveitem ITEM_N_SOLARIZER
# 529 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 530 "data/maps/Route135_Lab/scripts.pory"
	giveitem ITEM_N_LUNARIZER
# 531 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 532 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_TalkToCosmog_Text_1
# 535 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 536 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 537 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 538 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 539 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_TalkToCosmog_Text_2, MSGBOX_AUTOCLOSE
# 541 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 542 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 543 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 544 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 7
# 545 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_RECEIVED_MELTAN
# 546 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero::
# 551 "data/maps/Route135_Lab/scripts.pory"
	lock
# 552 "data/maps/Route135_Lab/scripts.pory"
	message Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_Text_0
# 553 "data/maps/Route135_Lab/scripts.pory"
	multichoice 25, 5, MULTI_ULTRA_SPACE_CHOICE, 0
# 554 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 555 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_2
# 562 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_3
Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_1:
# 569 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_2:
# 556 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 557 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 558 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 559 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_ULTRA_SPACE, 26, 49
# 560 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_1

Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_3:
# 563 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 564 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 565 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 566 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_AREA_ZERO, 15, 11
# 567 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_1


Route135_Lab_EventScript_PlayerGoesToCosmog::
# 574 "data/maps/Route135_Lab/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_0
# 575 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq Route135_Lab_EventScript_PlayerGoesToCosmog_2
# 580 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerGoesToCosmogNorth
# 581 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
Route135_Lab_EventScript_PlayerGoesToCosmog_1:
# 583 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 584 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
	return

Route135_Lab_EventScript_PlayerGoesToCosmog_2:
# 576 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerGoesToCosmogEast
# 577 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
	goto Route135_Lab_EventScript_PlayerGoesToCosmog_1


# 588 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacApproachPlayer:
# 589 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 589 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 589 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 589 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 589 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 590 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 590 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

# 593 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacGoBackToPC:
# 594 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 594 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 594 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 595 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 595 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 595 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 595 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 596 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 599 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoBackToPC:
# 600 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 600 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 600 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 601 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 601 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 601 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 601 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 602 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 638 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_JamesEnter:
# 639 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 639 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 639 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 639 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 639 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 639 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 640 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
	step_end

# 655 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacStartExperiment:
# 656 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 656 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 656 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 657 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 658 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 661 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_JamesStartExperiment:
# 662 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 662 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 662 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 663 "data/maps/Route135_Lab/scripts.pory"
	walk_right
	step_end

# 666 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerStartExperiment:
# 667 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 667 "data/maps/Route135_Lab/scripts.pory"
	walk_up
	step_end

# 670 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_ManiacLookAround:
# 671 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 672 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 673 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
# 674 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 675 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 676 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 677 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
	step_end

# 681 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_JamesLookAround:
# 682 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 683 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 684 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
# 685 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 686 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 687 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 688 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 692 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_PlayerLookAround:
# 693 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
# 694 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 695 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 696 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 697 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 698 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 699 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 764 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_ManiacReturnsToComputer:
# 765 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_down
# 766 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 766 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 766 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 766 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 767 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_up
# 768 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
	step_end

# 771 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_CosmogReturnsToComputer:
# 772 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 773 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 773 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 773 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 774 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 775 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 775 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 776 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 779 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesFacePlayer:
# 780 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 781 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 784 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesReturnsToComputer:
# 785 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 785 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 785 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 785 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 786 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 786 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 787 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 787 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 788 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 789 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 789 "data/maps/Route135_Lab/scripts.pory"
	walk_up
	step_end

# 792 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_PlayerLeaves:
# 793 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 793 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 793 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 793 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

# 802 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoesToCosmogEast:
# 803 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 804 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 807 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoesToCosmogNorth:
# 808 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 809 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 809 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 810 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

Route_135_Lab_EventScript_Meltan::
# 869 "data/maps/Route135_Lab/scripts.pory"
	lock
# 870 "data/maps/Route135_Lab/scripts.pory"
	showmonpic SPECIES_MELTAN, 10, 4
# 871 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_0, MSGBOX_YESNO
# 875 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route_135_Lab_EventScript_Meltan_2
# 898 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 899 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_2
Route_135_Lab_EventScript_Meltan_1:
# 902 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 903 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route_135_Lab_EventScript_Meltan_2:
# 876 "data/maps/Route135_Lab/scripts.pory"
	givemon SPECIES_MELTAN, 75
# 877 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MELTAN
# 878 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Route_135_Lab_EventScript_Meltan_5
# 885 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Route_135_Lab_EventScript_Meltan_6
# 893 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 894 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto Route_135_Lab_EventScript_Meltan_1

Route_135_Lab_EventScript_Meltan_5:
# 879 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 880 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1
# 881 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 882 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_MELTAN
# 883 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMon
	goto Route_135_Lab_EventScript_Meltan_1

Route_135_Lab_EventScript_Meltan_6:
# 886 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 887 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1
# 888 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 889 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_MELTAN
# 890 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMonBox
	goto Route_135_Lab_EventScript_Meltan_1


Route_135_Lab_EventScript_TypeNull::
# 908 "data/maps/Route135_Lab/scripts.pory"
	lock
# 909 "data/maps/Route135_Lab/scripts.pory"
	showmonpic SPECIES_TYPE_NULL, 10, 4
# 910 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_TypeNull_Text_0, MSGBOX_YESNO
# 914 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route_135_Lab_EventScript_TypeNull_2
# 937 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 938 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_2
Route_135_Lab_EventScript_TypeNull_1:
# 941 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 942 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route_135_Lab_EventScript_TypeNull_2:
# 915 "data/maps/Route135_Lab/scripts.pory"
	givemon SPECIES_TYPE_NULL, 70
# 916 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TYPE_NULL
# 917 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Route_135_Lab_EventScript_TypeNull_5
# 924 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Route_135_Lab_EventScript_TypeNull_6
# 932 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 933 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto Route_135_Lab_EventScript_TypeNull_1

Route_135_Lab_EventScript_TypeNull_5:
# 918 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 919 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1
# 920 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 921 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_TYPE_NULL
# 922 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMon
	goto Route_135_Lab_EventScript_TypeNull_1

Route_135_Lab_EventScript_TypeNull_6:
# 925 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 926 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1
# 927 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 928 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_TYPE_NULL
# 929 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMonBox
	goto Route_135_Lab_EventScript_TypeNull_1


# 946 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesLeavesPlayer:
# 947 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 947 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 948 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 949 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 949 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 949 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 949 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 949 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 949 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 949 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 949 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 949 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

# 952 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesLeavesPlayerNorth:
# 953 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 954 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 954 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 954 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 954 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 954 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 954 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 954 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 954 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 954 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 954 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 954 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

Route135_Lab_EventScript_James_Text_0:
# 58 "data/maps/Route135_Lab/scripts.pory"
	.string "What's up, {PLAYER}.\n The PROF. is waiting for you.$"

Route135_Lab_EventScript_James_Text_1:
# 63 "data/maps/Route135_Lab/scripts.pory"
	.string "How did the expedition go?\n I surveyed that place too.\p It's crazy to think there's whole\n other worlds and civilizations out\l there parallel to ours.\p Maybe the void could actually be\n real…\p Don't worry, I'm not going to\n go back to my phase.\p I'm just thinking out loud.$"

Route_135_EventScript_JamesGoFinishTheGame_Text_0:
# 94 "data/maps/Route135_Lab/scripts.pory"
	.string "Oh, {PLAYER}? Wow.\n Uh, this is kind of awkward…\p Honestly, I didn't expect to see\n you again after that last battle.\p Um…\l …\p You're the type of person who needs\n to see EVERYTHING in a game. I see…\p Well, there's nothing really left for\n you here, unless you want to go back\l to ULTRA SPACE or AREA ZERO for some\l reason.\p But you know, I felt like that last\n battle was a good end to my story, and\l you just made it weird by coming back\l here to talk to me again.\p You didn't even know if there would be\n any different dialogue, you weirdo.\p You're at the end, {PLAYER}.\n Hurry up and do what you need to do.\p Oh, and here's a hint: your exploration\n throughout the game paid off.\p You'll be able to challenge the\n “secret” superboss. Good luck.$"

Route_135_EventScript_JamesGoFinishTheGame_Text_1:
# 121 "data/maps/Route135_Lab/scripts.pory"
	.string "Oh, {PLAYER}? Wow.\n Uh, this is kind of awkward…\p Honestly, I didn't expect to see\n you again after that last battle.\p Um…\l …\p You're the type of person who needs\n to see EVERYTHING in a game. I see…\p Well, there's nothing really left for\n you here, unless you want to go back\l to ULTRA SPACE or AREA ZERO for some\l reason.\p But you know, I felt like that last\n battle was a good end to my story, and\l you just made it weird by coming back\l here to talk to me again.\p You didn't even know if there would be\n any different dialogue, you weirdo.$"

Route_135_EventScript_JamesGoFinishTheGame_Text_2:
# 140 "data/maps/Route135_Lab/scripts.pory"
	.string "You know what, though?\p It sucks you didn't keep this same\n energy throughout the whole game,\l because you didn't unlock the “secret” \l superboss.\p But you know what? As a favor,\n I'll give you a hint:\p Go back to SLATEPORT, steal a POKéMON\n and come back and talk to me.\p Good luck, {PLAYER}.$"

Route_135_EventScript_JamesGoFinishTheGame_Text_3:
# 172 "data/maps/Route135_Lab/scripts.pory"
	.string "You know what, though?\p It sucks you didn't keep this same\n energy throughout the whole game,\l because you didn't unlock the “secret” \l superboss.\p But you know what? As a favor,\n I'll make it so you have a chance\l to battle them.\p Good luck, {PLAYER}.\n Go finish the game.$"

Route_135_EventScript_JamesGoFinishTheGame_Text_4:
# 184 "data/maps/Route135_Lab/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}You're now able to challenge\n the superboss!$"

Route_135_EventScript_JamesGoFinishTheGame_Text_5:
# 191 "data/maps/Route135_Lab/scripts.pory"
	.string "Oh, {PLAYER}? Wow.\n Uh, this is kind of awkward…\p Honestly, I didn't expect to see\n you again after that last battle.\p Um…\l …\p You're the type of person who needs\n to see EVERYTHING in a game. I see…\p Well, there's nothing really left for\n you here, unless you want to go back\l to ULTRA SPACE or AREA ZERO for some\l reason.\p But you know, I felt like that last\n battle was a good end to my story, and\l you just made it weird by coming back\l here to talk to me again.\p You didn't even know if there would be\n any different dialogue, you weirdo.\p You're at the end, {PLAYER}.\n Hurry up and do what you need to do.$"

Route_135_EventScript_JamesBattle_Text_0:
# 227 "data/maps/Route135_Lab/scripts.pory"
	.string "Oh, {PLAYER}.\n Sorry, I was focused on my research.\p What's up?$"

Route_135_EventScript_JamesBattle_Text_1:
# 230 "data/maps/Route135_Lab/scripts.pory"
	.string "Want to battle?$"

Route_135_EventScript_JamesBattle_Text_2:
# 230 "data/maps/Route135_Lab/scripts.pory"
	.string "Nevermind.$"

Route_135_EventScript_JamesBattle_Text_3:
# 232 "data/maps/Route135_Lab/scripts.pory"
	.string "A battle?\p Well, it HAS been a while since\n the last time we did.\l …\l Sure.\p I was actually going to head home for\n a bit to take care of some things.\p Could you meet me on ROUTE 115?\n I'll wait for you there.$"

Route_135_EventScript_JamesBattleChoseNo_Text_0:
# 266 "data/maps/Route135_Lab/scripts.pory"
	.string "Oh, okay.\n I'm kind of busy right now, so…$"

Route135_Lab_EventScript_ToUltraSpace_Text_0:
# 295 "data/maps/Route135_Lab/scripts.pory"
	.string " In fact, this POKéMON here came from one\n of those rifts.\l I've named it COSMOG.$"

Route135_Lab_EventScript_ToUltraSpace_Text_1:
# 308 "data/maps/Route135_Lab/scripts.pory"
	.string "Assistant!$"

Route135_Lab_EventScript_EndUltraSpace_Text_0:
# 408 "data/maps/Route135_Lab/scripts.pory"
	.string "PROF.: We…\n We really returned…$"

Route135_Lab_EventScript_EndUltraSpace_Text_1:
# 438 "data/maps/Route135_Lab/scripts.pory"
	.string "I think I understand why JIMMY gave\n me this job now…$"

Route135_Lab_EventScript_ToAreaZero_Text_0:
# 481 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern. Did you change your mind?$"

Route135_Lab_EventScript_ToAreaZero_Text_1:
# 488 "data/maps/Route135_Lab/scripts.pory"
	.string "Resplendent!\n Go stand next to COSMOG.\p It shall transport you.$"

Route135_Lab_EventScript_ToAreaZero_Text_2:
# 505 "data/maps/Route135_Lab/scripts.pory"
	.string "…I see. Well, you know where\n to find me if you change your mind.$"

Route135_Lab_EventScript_TalkToCosmog_Text_0:
# 519 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern.\n It seems the survey went well.\l Thanks for the great data.\p Well, other than that, there hasn't\n been any significant new developments.\p But on another trip to ULTRA SPACE, we\n found these devices.\p I couldn't find any use for them, but\n maybe you can.$"

Route135_Lab_EventScript_TalkToCosmog_Text_1:
# 532 "data/maps/Route135_Lab/scripts.pory"
	.string "If you'd like to return to one of the\n previous worlds, COSMOG is ready.\l It seems to trust you now.$"

Route135_Lab_EventScript_TalkToCosmog_Text_2:
# 539 "data/maps/Route135_Lab/scripts.pory"
	.string "I'm busy, so I'll leave it to you.\n You know the routine by now.$"

Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_Text_0:
# 552 "data/maps/Route135_Lab/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Where would you like to go?$"

Route_135_Lab_EventScript_Meltan_Text_0:
# 871 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p It contained the POKéMON\n MELTAN.\p Take the POKé BALL?$"

Route_135_Lab_EventScript_Meltan_Text_1:
# 880 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} took the POKéMON!$"

Route_135_Lab_EventScript_Meltan_Text_2:
# 899 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} decided not to take the \n POKéMON.$"

Route_135_Lab_EventScript_TypeNull_Text_0:
# 910 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p It contained the POKéMON\n TYPE NULL.\p Take the POKé BALL?$"

Route135_Lab_Text_Maniac1::
# 605 "data/maps/Route135_Lab/scripts.pory"
	.string "Hm? Are you the new intern?$"

Route135_Lab_Text_Maniac2::
# 609 "data/maps/Route135_Lab/scripts.pory"
	.string "Resplendent!\n You're just in time.\l Come with me.$"

Route135_Lab_Text_Maniac3::
# 615 "data/maps/Route135_Lab/scripts.pory"
	.string "I presume you're already aware of\n what's being researched here…\p But to reiterate, I'm currently looking\l into the possibility of traveling\l to new worlds.\p In fact, I discovered the existence of\n different dimensions parallel to ours.\p I've named the endless expanse\n between these worlds ULTRA SPACE.\p There have been past accounts of rifts\n opening in other regions that can\l connect our world to this ULTRA SPACE.$"

Route135_Lab_Text_Maniac4::
# 630 "data/maps/Route135_Lab/scripts.pory"
	.string "I've reached a breakthrough in my\n experiments and now plan to attempt\l to open a rift to the ULTRA SPACE.\p You made it just in time.\n Quite fortuitous, indeed.$"

Route135_Lab_Text_James::
# 643 "data/maps/Route135_Lab/scripts.pory"
	.string "JAMES: {PLAYER}?\n What are you doing here?$"

Route135_Lab_Text_Maniac5::
# 648 "data/maps/Route135_Lab/scripts.pory"
	.string "PROF.: Ah, so you two are\n already acquainted.\p Then let us forgo the formalities and\n get right to the experiment!$"

Route135_Lab_Text_Maniac6::
# 703 "data/maps/Route135_Lab/scripts.pory"
	.string "This machine I've built should be\n capable of creating the rift…\l Let us begin.$"

Route135_Lab_Text_Maniac7::
# 709 "data/maps/Route135_Lab/scripts.pory"
	.string "It's working! It's really working!\n RESPLENDENT!\p I knew I was a genius!\n Wait… No! Something's wrong!$"

Route135_Lab_Text_ManiacNo::
# 716 "data/maps/Route135_Lab/scripts.pory"
	.string "I see…\n Well, this is a private LAB.\p If you're not going to help me with\n my research, you'll have to leave.$"

Route135_Lab_Text_Maniac8::
# 723 "data/maps/Route135_Lab/scripts.pory"
	.string "Great work COSMOG!\n These discoveries are monumental!\p I must log all my findings this instant!\n Come with me, COSMOG!$"

Route135_Lab_Text_Maniac9::
# 730 "data/maps/Route135_Lab/scripts.pory"
	.string "PROF.: Thanks for your work, intern.\n You're free to do as you would.\p I shall contact you if your assistance\n is required again.$"

Route135_Lab_Text_James2::
# 737 "data/maps/Route135_Lab/scripts.pory"
	.string "JAMES: … He's gonna be like that for a\n while.\p Well, either way, that really was a crazy\n experience.\p What are you going to do now, {PLAYER}?\n I'm going to stay and help out more.\l I think if I do, I'll find the answers\l I'm looking for.$"

Route135_Lab_Text_James3::
# 748 "data/maps/Route135_Lab/scripts.pory"
	.string "Anyways, like the PROF. said, we'll let\n let you know if anything else happens.\p See ya, {PLAYER}.$"

Route_135_Lab_Text_ImGoingToStayHere::
# 754 "data/maps/Route135_Lab/scripts.pory"
	.string "I don't know how long I'm going to\n stay here but I don't mind it.\p Yeah, it's in a rural area, but the people\n are nice.\p The PROF.'s a little weird, but I can\n tolerate it.$"

Route_135_Lab_Text_ImBusy::
# 796 "data/maps/Route135_Lab/scripts.pory"
	.string "Salutations, intern.\n There's no new breakthroughs yet.\p I'm busy now, so come back later.$"

Route135_Lab_Text_ManiacIntroduceAreaZero::
# 813 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern.\n Salutations.\p I assume JAMES provided you with the\n relevant information, yes?\p As you saw, COSMOG is capable of\n traversing the ULTRA SPACE at will.\p With extensive testing and research,\n we've been able to survey the ULTRA\l SPACE further.\p During these surveys, we came across\n another rift that seems to lead to\l another world…\p Seeing as you were crazy enough to\n walk across the sky, I presume you'd\l be open to being the first human to\l explore this new world, yes?$"

Route135_Lab_Text_ManiacExplainCosmog::
# 832 "data/maps/Route135_Lab/scripts.pory"
	.string "The camera I put on COSMOG showed\n the world has a somewhat strange\l composition… Although there are signs\l that it was once inhabited by humans,\l so it should be safe to traverse.\p COSMOG will be with you, so if you want\n to return to the lab, just ask it.\p Now, it is time! Godspeed, intern!\n COSMOG, if you will!$"

Route_135_Lab_Text_ImBusyTalkToCosmog::
# 844 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern.\n Sadly, there's no new discoveries.\p Just ask COSMOG if you need to return\n to the ULTRA SPACE.\p It seems to trust you enough without\n needing my intervention any further.$"

Route_135_Lab_PokenavText_JamesComeBackToTheLab::
# 853 "data/maps/Route135_Lab/scripts.pory"
	.string "… … … … … …\n … … … … … Beep!\p {PLAYER}?\n It's JAMES.\p The PROF. says there's a new\n breakthrough in his research.\p He thinks you'll be interested\n in helping with his experiment.\p Can you come to the LAB when\n you have a chance?\p … … … … … …\n … … … … … Click!$"
