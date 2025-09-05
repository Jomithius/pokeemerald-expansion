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
# 35 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 5
	goto_if_eq Route135_Lab_EventScript_Maniac_3
# 38 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 6
	goto_if_eq Route135_Lab_EventScript_Maniac_4
Route135_Lab_EventScript_Maniac_1:
# 41 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImBusyTalkToCosmog, MSGBOX_DEFAULT
# 42 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 43 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_Maniac_2:
# 32 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImBusy, MSGBOX_DEFAULT
# 33 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
	goto Route135_Lab_EventScript_Maniac_1

Route135_Lab_EventScript_Maniac_3:
# 36 "data/maps/Route135_Lab/scripts.pory"
	goto Route135_Lab_EventScript_ToAreaZero
	goto Route135_Lab_EventScript_Maniac_1

Route135_Lab_EventScript_Maniac_4:
# 39 "data/maps/Route135_Lab/scripts.pory"
	goto Route135_Lab_EventScript_TalkToCosmog
	goto Route135_Lab_EventScript_Maniac_1


Route135_Lab_EventScript_James::
# 48 "data/maps/Route135_Lab/scripts.pory"
	lock
# 49 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 7
	goto_if_ge Route135_Lab_EventScript_James_4
Route135_Lab_EventScript_James_1:
# 52 "data/maps/Route135_Lab/scripts.pory"
	goto_if_set FLAG_SYS_DEFEATED_JAMES, Route135_Lab_EventScript_James_9
Route135_Lab_EventScript_James_8:
# 55 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 56 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 5
	goto_if_eq Route135_Lab_EventScript_James_12
# 61 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 6
	goto_if_eq Route135_Lab_EventScript_James_13
# 75 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImGoingToStayHere, MSGBOX_AUTOCLOSE
# 76 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
Route135_Lab_EventScript_James_11:
# 78 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 79 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 80 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_James_2:
# 50 "data/maps/Route135_Lab/scripts.pory"
	goto Route_135_EventScript_JamesBattle
	goto Route135_Lab_EventScript_James_1

Route135_Lab_EventScript_James_3:
# 49 "data/maps/Route135_Lab/scripts.pory"
	goto_if_unset FLAG_SYS_DEFEATED_JAMES, Route135_Lab_EventScript_James_2
	goto Route135_Lab_EventScript_James_1

Route135_Lab_EventScript_James_4:
# 49 "data/maps/Route135_Lab/scripts.pory"
	goto_if_set FLAG_SYS_FINAL_REMATCH, Route135_Lab_EventScript_James_3
	goto Route135_Lab_EventScript_James_1

Route135_Lab_EventScript_James_9:
# 53 "data/maps/Route135_Lab/scripts.pory"
	goto Route_135_EventScript_JamesGoFinishTheGame
	goto Route135_Lab_EventScript_James_8

Route135_Lab_EventScript_James_12:
# 57 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_James_Text_0, MSGBOX_AUTOCLOSE
# 59 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
	goto Route135_Lab_EventScript_James_11

Route135_Lab_EventScript_James_13:
# 62 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_James_Text_1, MSGBOX_AUTOCLOSE
# 72 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
	goto Route135_Lab_EventScript_James_11


Route_135_EventScript_JamesGoFinishTheGame::
# 85 "data/maps/Route135_Lab/scripts.pory"
	lock
# 86 "data/maps/Route135_Lab/scripts.pory"
	delay 30
# 87 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 88 "data/maps/Route135_Lab/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 89 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 91 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 92 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_LINA_TALKED_TO, 2
	goto_if_eq Route_135_EventScript_JamesGoFinishTheGame_12
Route_135_EventScript_JamesGoFinishTheGame_10:
# 119 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_LINA_TALKED_TO, 1
	goto_if_eq Route_135_EventScript_JamesGoFinishTheGame_9
Route_135_EventScript_JamesGoFinishTheGame_7:
# 151 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_LINA_TALKED_TO, 1
	goto_if_eq Route_135_EventScript_JamesGoFinishTheGame_6
Route_135_EventScript_JamesGoFinishTheGame_5:
# 190 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesGoFinishTheGame_Text_5, MSGBOX_AUTOCLOSE
# 210 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
Route_135_EventScript_JamesGoFinishTheGame_1:
# 212 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 213 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 214 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route_135_EventScript_JamesGoFinishTheGame_2:
# 93 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesGoFinishTheGame_Text_0, MSGBOX_AUTOCLOSE
# 117 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
	goto Route_135_EventScript_JamesGoFinishTheGame_1

Route_135_EventScript_JamesGoFinishTheGame_3:
# 120 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesGoFinishTheGame_Text_1, MSGBOX_DEFAULT
# 138 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 139 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesGoFinishTheGame_Text_2, MSGBOX_AUTOCLOSE
# 149 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
	goto Route_135_EventScript_JamesGoFinishTheGame_1

Route_135_EventScript_JamesGoFinishTheGame_4:
# 152 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesGoFinishTheGame_Text_1, MSGBOX_DEFAULT
# 170 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 171 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesGoFinishTheGame_Text_3, MSGBOX_AUTOCLOSE
# 181 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 182 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_B_POINTS
# 183 "data/maps/Route135_Lab/scripts.pory"
	message Route_135_EventScript_JamesGoFinishTheGame_Text_4
# 185 "data/maps/Route135_Lab/scripts.pory"
	waitfanfare
# 186 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 187 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_LINA_TALKED_TO, 2
	goto Route_135_EventScript_JamesGoFinishTheGame_1

Route_135_EventScript_JamesGoFinishTheGame_6:
# 151 "data/maps/Route135_Lab/scripts.pory"
	goto_if_set FLAG_LINA_HOUSE_EEVEE, Route_135_EventScript_JamesGoFinishTheGame_4
	goto Route_135_EventScript_JamesGoFinishTheGame_5

Route_135_EventScript_JamesGoFinishTheGame_9:
# 119 "data/maps/Route135_Lab/scripts.pory"
	goto_if_unset FLAG_LINA_HOUSE_EEVEE, Route_135_EventScript_JamesGoFinishTheGame_3
	goto Route_135_EventScript_JamesGoFinishTheGame_7

Route_135_EventScript_JamesGoFinishTheGame_12:
# 92 "data/maps/Route135_Lab/scripts.pory"
	goto_if_set FLAG_LINA_HOUSE_EEVEE, Route_135_EventScript_JamesGoFinishTheGame_2
	goto Route_135_EventScript_JamesGoFinishTheGame_10


Route_135_EventScript_JamesBattle::
# 219 "data/maps/Route135_Lab/scripts.pory"
	lock
# 220 "data/maps/Route135_Lab/scripts.pory"
	delay 30
# 221 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 222 "data/maps/Route135_Lab/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 223 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 224 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 225 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 226 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesBattle_Text_0, MSGBOX_DEFAULT
# 229 "data/maps/Route135_Lab/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route_135_EventScript_JamesBattle_Text_1, Route_135_EventScript_JamesBattle_Text_2
# 230 "data/maps/Route135_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route_135_EventScript_JamesBattleChoseNo
# 231 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesBattle_Text_3, MSGBOX_AUTOCLOSE
# 240 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 241 "data/maps/Route135_Lab/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_RESULT
# 242 "data/maps/Route135_Lab/scripts.pory"
	switch VAR_RESULT
# 243 "data/maps/Route135_Lab/scripts.pory"
	case DIR_WEST, Route_135_EventScript_JamesBattle_3
# 245 "data/maps/Route135_Lab/scripts.pory"
	case DIR_EAST, Route_135_EventScript_JamesBattle_4
# 247 "data/maps/Route135_Lab/scripts.pory"
	case DIR_NORTH, Route_135_EventScript_JamesBattle_5
# 250 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route_135_Lab_Movement_JamesLeavesPlayer
Route_135_EventScript_JamesBattle_1:
# 252 "data/maps/Route135_Lab/scripts.pory"
	delay 24
# 253 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 254 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 255 "data/maps/Route135_Lab/scripts.pory"
	removeobject 2
# 256 "data/maps/Route135_Lab/scripts.pory"
	playse SE_EXIT
# 257 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 258 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_HIDE_JAMES_ROUTE_115
# 259 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_MISA_STATE, 11
# 260 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route_135_EventScript_JamesBattle_3:
# 244 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route_135_Lab_Movement_JamesLeavesPlayer
	goto Route_135_EventScript_JamesBattle_1

Route_135_EventScript_JamesBattle_4:
# 246 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route_135_Lab_Movement_JamesLeavesPlayer
	goto Route_135_EventScript_JamesBattle_1

Route_135_EventScript_JamesBattle_5:
# 248 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route_135_Lab_Movement_JamesLeavesPlayerNorth
	goto Route_135_EventScript_JamesBattle_1


Route_135_EventScript_JamesBattleChoseNo::
# 265 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesBattleChoseNo_Text_0, MSGBOX_AUTOCLOSE
# 267 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 268 "data/maps/Route135_Lab/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 269 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 270 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_ToUltraSpace::
# 275 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 276 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 277 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 278 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 279 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 280 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacApproachPlayer
# 281 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 282 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac1, MSGBOX_YESNO
# 283 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route135_Lab_EventScript_ToUltraSpace_2
# 354 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_ManiacNo, MSGBOX_AUTOCLOSE
# 355 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 356 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 357 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 358 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 359 "data/maps/Route135_Lab/scripts.pory"
	warp MAP_ROUTE135, 8, 10
# 360 "data/maps/Route135_Lab/scripts.pory"
	waitstate
Route135_Lab_EventScript_ToUltraSpace_1:
# 362 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end

Route135_Lab_EventScript_ToUltraSpace_2:
# 284 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac2, MSGBOX_AUTOCLOSE
# 285 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 286 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacGoBackToPC
# 287 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 288 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerGoBackToPC
# 289 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 290 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac3, MSGBOX_AUTOCLOSE
# 291 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 292 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 293 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 294 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 297 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 298 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 299 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 300 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 301 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 302 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 303 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac4, MSGBOX_AUTOCLOSE
# 304 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 305 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 306 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 307 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToUltraSpace_Text_1, MSGBOX_AUTOCLOSE
# 308 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 309 "data/maps/Route135_Lab/scripts.pory"
	delay 20
# 310 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route135_Lab_Movement_JamesEnter
# 311 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 312 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 313 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 314 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 315 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 316 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 317 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 318 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 319 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 320 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James, MSGBOX_AUTOCLOSE
# 321 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 322 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 323 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 324 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 325 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 326 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac5, MSGBOX_AUTOCLOSE
# 327 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 328 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacStartExperiment
# 329 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 330 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route135_Lab_Movement_JamesStartExperiment
# 331 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 332 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerStartExperiment
# 333 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 334 "data/maps/Route135_Lab/scripts.pory"
	fadenewbgm MUS_NONE
# 335 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac6, MSGBOX_AUTOCLOSE
# 336 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 337 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 338 "data/maps/Route135_Lab/scripts.pory"
	playse SE_BERRY_BLENDER
# 339 "data/maps/Route135_Lab/scripts.pory"
	delay 60
# 340 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac7, MSGBOX_AUTOCLOSE
# 341 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 342 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 343 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 344 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 345 "data/maps/Route135_Lab/scripts.pory"
	playse SE_BREAKABLE_DOOR
# 346 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 347 "data/maps/Route135_Lab/scripts.pory"
	delay 10
# 348 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 349 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 1
# 350 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_ULTRA_SPACE, 40, 65
# 351 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ToUltraSpace_1


Route135_Lab_Shake::
# 367 "data/maps/Route135_Lab/scripts.pory"
	delay 30
# 368 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8004, 2
# 369 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8005, 6
# 370 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8006, 8
# 371 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8007, 4
# 372 "data/maps/Route135_Lab/scripts.pory"
	special ShakeCamera
# 373 "data/maps/Route135_Lab/scripts.pory"
	waitstate
# 374 "data/maps/Route135_Lab/scripts.pory"
	delay 60
# 375 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 376 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_TO_WHITE
# 377 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 378 "data/maps/Route135_Lab/scripts.pory"
	delay 20
# 379 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 380 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_TO_WHITE
# 381 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 382 "data/maps/Route135_Lab/scripts.pory"
	delay 10
# 383 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 384 "data/maps/Route135_Lab/scripts.pory"
	playse SE_INTRO_BLAST
# 385 "data/maps/Route135_Lab/scripts.pory"
	delay 20
	return


Route135_Lab_EventScript_Cosmog::
# 390 "data/maps/Route135_Lab/scripts.pory"
	lock
# 391 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 392 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 393 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 394 "data/maps/Route135_Lab/scripts.pory"
	goto_if_ge VAR_ULTRA_SPACE_STATE, 6, Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero
# 395 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_EndUltraSpace::
# 400 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 401 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Route_135_Lab_ManiacLookAround
# 402 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 403 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route_135_Lab_PlayerLookAround
# 404 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 405 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Route_135_Lab_JamesLookAround
# 406 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 407 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_EndUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 409 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 410 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 411 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 4
# 412 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac8, MSGBOX_AUTOCLOSE
# 413 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 414 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 415 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 416 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Route_135_Lab_Movement_ManiacReturnsToComputer
# 417 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 418 "data/maps/Route135_Lab/scripts.pory"
	applymovement 6, Route_135_Lab_Movement_CosmogReturnsToComputer
# 419 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 420 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 421 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 422 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceRight
# 423 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 6
# 424 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 425 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 4
# 426 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac9, MSGBOX_AUTOCLOSE
# 427 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 428 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 429 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 4
# 430 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Route_135_Lab_Movement_JamesFacePlayer
# 431 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 432 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James2, MSGBOX_AUTOCLOSE
# 433 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 434 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 435 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 436 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_EndUltraSpace_Text_1, MSGBOX_AUTOCLOSE
# 438 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 439 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 440 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 441 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James3, MSGBOX_AUTOCLOSE
# 442 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 443 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Route_135_Lab_Movement_JamesReturnsToComputer
# 444 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 445 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 446 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 447 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route_135_Lab_Movement_PlayerLeaves
# 448 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 449 "data/maps/Route135_Lab/scripts.pory"
	removeobject 5
# 450 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_HIDE_NPCS_RETURNED_FROM_ULTRA_SPACE
# 451 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_HIDE_PROF_ROUTE_135_LAB
# 452 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_HIDE_JAMES_ROUTE_135_LAB
# 453 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 4
# 454 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_JAMES_AREA_ZERO_CALL_STEP_COUNTER, 0
# 455 "data/maps/Route135_Lab/scripts.pory"
	addvar VAR_FINAL_REMATCH_STATE, 1
# 456 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_JIMMY_FINAL_REMATCH_CALL_STEP_COUNTER, 0
# 457 "data/maps/Route135_Lab/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE135
# 458 "data/maps/Route135_Lab/scripts.pory"
	warp MAP_ROUTE135, 8, 10
# 459 "data/maps/Route135_Lab/scripts.pory"
	waitstate
# 460 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end


Route135_Lab_EventScript_JamesCallsPlayerAreaZero::
# 465 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 466 "data/maps/Route135_Lab/scripts.pory"
	pokenavcall Route_135_Lab_PokenavText_JamesComeBackToTheLab
# 467 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 468 "data/maps/Route135_Lab/scripts.pory"
	delay 30
# 469 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 5
# 470 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_SYS_UNLOCKED_AREA_ZERO
# 471 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end


Route135_Lab_EventScript_ToAreaZero::
# 476 "data/maps/Route135_Lab/scripts.pory"
	lock
# 477 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 478 "data/maps/Route135_Lab/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route135_Lab_EventScript_ToAreaZero_2
# 482 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_ManiacIntroduceAreaZero, MSGBOX_YESNO
Route135_Lab_EventScript_ToAreaZero_1:
# 484 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 485 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route135_Lab_EventScript_ToAreaZero_6
# 503 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToAreaZero_Text_2, MSGBOX_AUTOCLOSE
# 505 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 506 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 507 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 508 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_TEMP_1
Route135_Lab_EventScript_ToAreaZero_5:
# 510 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_ToAreaZero_2:
# 479 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToAreaZero_Text_0, MSGBOX_YESNO
	goto Route135_Lab_EventScript_ToAreaZero_1

Route135_Lab_EventScript_ToAreaZero_6:
# 486 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToAreaZero_Text_1, MSGBOX_AUTOCLOSE
# 489 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_EventScript_PlayerGoesToCosmog
# 490 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 491 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_ManiacExplainCosmog, MSGBOX_AUTOCLOSE
# 492 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 493 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 494 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 495 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 496 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 497 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 498 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 6
# 499 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_AREA_ZERO, 15, 11
# 500 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ToAreaZero_5


Route135_Lab_EventScript_TalkToCosmog::
# 515 "data/maps/Route135_Lab/scripts.pory"
	lock
# 516 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 517 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_TalkToCosmog_Text_0, MSGBOX_AUTOCLOSE
# 526 "data/maps/Route135_Lab/scripts.pory"
	giveitem ITEM_N_SOLARIZER
# 527 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 528 "data/maps/Route135_Lab/scripts.pory"
	giveitem ITEM_N_LUNARIZER
# 529 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 530 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_TalkToCosmog_Text_1
# 533 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 534 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 535 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 536 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 537 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_TalkToCosmog_Text_2, MSGBOX_AUTOCLOSE
# 539 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 540 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 541 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 542 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 7
# 543 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_RECEIVED_MELTAN
# 544 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero::
# 549 "data/maps/Route135_Lab/scripts.pory"
	lock
# 550 "data/maps/Route135_Lab/scripts.pory"
	message Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_Text_0
# 551 "data/maps/Route135_Lab/scripts.pory"
	multichoice 25, 5, MULTI_ULTRA_SPACE_CHOICE, 0
# 552 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 553 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_2
# 560 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_3
Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_1:
# 567 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_2:
# 554 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 555 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 556 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 557 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_ULTRA_SPACE, 26, 49
# 558 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_1

Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_3:
# 561 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 562 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 563 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 564 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_AREA_ZERO, 15, 11
# 565 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_1


Route135_Lab_EventScript_PlayerGoesToCosmog::
# 572 "data/maps/Route135_Lab/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_0
# 573 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq Route135_Lab_EventScript_PlayerGoesToCosmog_2
# 578 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerGoesToCosmogNorth
# 579 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
Route135_Lab_EventScript_PlayerGoesToCosmog_1:
# 581 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 582 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
	return

Route135_Lab_EventScript_PlayerGoesToCosmog_2:
# 574 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerGoesToCosmogEast
# 575 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
	goto Route135_Lab_EventScript_PlayerGoesToCosmog_1


# 586 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacApproachPlayer:
# 587 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 587 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 587 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 587 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 587 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 588 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 588 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

# 591 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacGoBackToPC:
# 592 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 592 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 592 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 593 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 593 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 593 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 593 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 594 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 597 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoBackToPC:
# 598 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 598 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 598 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 599 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 599 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 599 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 599 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 600 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 636 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_JamesEnter:
# 637 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 637 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 637 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 637 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 637 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 637 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 638 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
	step_end

# 653 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacStartExperiment:
# 654 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 654 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 654 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 655 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 656 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 659 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_JamesStartExperiment:
# 660 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 660 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 660 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 661 "data/maps/Route135_Lab/scripts.pory"
	walk_right
	step_end

# 664 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerStartExperiment:
# 665 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 665 "data/maps/Route135_Lab/scripts.pory"
	walk_up
	step_end

# 668 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_ManiacLookAround:
# 669 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 670 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 671 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
# 672 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 673 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 674 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 675 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
	step_end

# 679 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_JamesLookAround:
# 680 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 681 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 682 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
# 683 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 684 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 685 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 686 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 690 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_PlayerLookAround:
# 691 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
# 692 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 693 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 694 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 695 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 696 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 697 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 762 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_ManiacReturnsToComputer:
# 763 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_down
# 764 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 764 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 764 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 764 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 765 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_up
# 766 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
	step_end

# 769 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_CosmogReturnsToComputer:
# 770 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 771 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 771 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 771 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 772 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 773 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 773 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 774 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 777 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesFacePlayer:
# 778 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 779 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 782 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesReturnsToComputer:
# 783 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 783 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 783 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 783 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 784 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 784 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 785 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 785 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 786 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 787 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 787 "data/maps/Route135_Lab/scripts.pory"
	walk_up
	step_end

# 790 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_PlayerLeaves:
# 791 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 791 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 791 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 791 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

# 800 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoesToCosmogEast:
# 801 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 802 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 805 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoesToCosmogNorth:
# 806 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 807 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 807 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 808 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

Route_135_Lab_EventScript_Meltan::
# 867 "data/maps/Route135_Lab/scripts.pory"
	lock
# 868 "data/maps/Route135_Lab/scripts.pory"
	showmonpic SPECIES_MELTAN, 10, 4
# 869 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_0, MSGBOX_YESNO
# 873 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route_135_Lab_EventScript_Meltan_2
# 896 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 897 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_2
Route_135_Lab_EventScript_Meltan_1:
# 900 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 901 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route_135_Lab_EventScript_Meltan_2:
# 874 "data/maps/Route135_Lab/scripts.pory"
	givemon SPECIES_MELTAN, 75
# 875 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MELTAN
# 876 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Route_135_Lab_EventScript_Meltan_5
# 883 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Route_135_Lab_EventScript_Meltan_6
# 891 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 892 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto Route_135_Lab_EventScript_Meltan_1

Route_135_Lab_EventScript_Meltan_5:
# 877 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 878 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1
# 879 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 880 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_MELTAN
# 881 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMon
	goto Route_135_Lab_EventScript_Meltan_1

Route_135_Lab_EventScript_Meltan_6:
# 884 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 885 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1
# 886 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 887 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_MELTAN
# 888 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMonBox
	goto Route_135_Lab_EventScript_Meltan_1


Route_135_Lab_EventScript_TypeNull::
# 906 "data/maps/Route135_Lab/scripts.pory"
	lock
# 907 "data/maps/Route135_Lab/scripts.pory"
	showmonpic SPECIES_TYPE_NULL, 10, 4
# 908 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_TypeNull_Text_0, MSGBOX_YESNO
# 912 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route_135_Lab_EventScript_TypeNull_2
# 935 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 936 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_2
Route_135_Lab_EventScript_TypeNull_1:
# 939 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 940 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route_135_Lab_EventScript_TypeNull_2:
# 913 "data/maps/Route135_Lab/scripts.pory"
	givemon SPECIES_TYPE_NULL, 70
# 914 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TYPE_NULL
# 915 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Route_135_Lab_EventScript_TypeNull_5
# 922 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Route_135_Lab_EventScript_TypeNull_6
# 930 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 931 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto Route_135_Lab_EventScript_TypeNull_1

Route_135_Lab_EventScript_TypeNull_5:
# 916 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 917 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1
# 918 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 919 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_TYPE_NULL
# 920 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMon
	goto Route_135_Lab_EventScript_TypeNull_1

Route_135_Lab_EventScript_TypeNull_6:
# 923 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 924 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1
# 925 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 926 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_TYPE_NULL
# 927 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMonBox
	goto Route_135_Lab_EventScript_TypeNull_1


# 944 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesLeavesPlayer:
# 945 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 945 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 946 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 947 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 947 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 947 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 947 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 947 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 947 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 947 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 947 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 947 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

# 950 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesLeavesPlayerNorth:
# 951 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 952 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 952 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 952 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 952 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 952 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 952 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 952 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 952 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 952 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 952 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 952 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

Route135_Lab_EventScript_James_Text_0:
# 57 "data/maps/Route135_Lab/scripts.pory"
	.string "What's up, {PLAYER}.\n The PROF. is waiting for you.$"

Route135_Lab_EventScript_James_Text_1:
# 62 "data/maps/Route135_Lab/scripts.pory"
	.string "How did the expedition go?\n I surveyed that place too.\p It's crazy to think there's whole\n other worlds and civilizations out\l there parallel to ours.\p Maybe the void could actually be\n real…\p Don't worry, I'm not going to\n go back to my phase.\p I'm just thinking out loud.$"

Route_135_EventScript_JamesGoFinishTheGame_Text_0:
# 93 "data/maps/Route135_Lab/scripts.pory"
	.string "Oh, {PLAYER}? Wow.\n Uh, this is kind of awkward…\p Honestly, I didn't expect to see\n you again after that last battle.\p Um…\l …\p You're the type of person who needs\n to see EVERYTHING in a game. I see…\p Well, there's nothing really left for\n you here, unless you want to go back\l to ULTRA SPACE or AREA ZERO for some\l reason.\p But you know, I felt like that last\n battle was a good end to my story, and\l you just made it weird by coming back\l here to talk to me again.\p You didn't even know if there would be\n any different dialogue, you weirdo.\p You're at the end, {PLAYER}.\n Hurry up and do what you need to do.\p Oh, and here's a hint: your exploration\n throughout the game paid off.\p You'll be able to challenge the\n “secret” superboss. Good luck.$"

Route_135_EventScript_JamesGoFinishTheGame_Text_1:
# 120 "data/maps/Route135_Lab/scripts.pory"
	.string "Oh, {PLAYER}? Wow.\n Uh, this is kind of awkward…\p Honestly, I didn't expect to see\n you again after that last battle.\p Um…\l …\p You're the type of person who needs\n to see EVERYTHING in a game. I see…\p Well, there's nothing really left for\n you here, unless you want to go back\l to ULTRA SPACE or AREA ZERO for some\l reason.\p But you know, I felt like that last\n battle was a good end to my story, and\l you just made it weird by coming back\l here to talk to me again.\p You didn't even know if there would be\n any different dialogue, you weirdo.$"

Route_135_EventScript_JamesGoFinishTheGame_Text_2:
# 139 "data/maps/Route135_Lab/scripts.pory"
	.string "You know what, though?\p It sucks you didn't keep this same\n energy throughout the whole game,\l because you didn't unlock the “secret” \l superboss.\p But you know what? As a favor,\n I'll give you a hint:\p Go back to SLATEPORT, steal a POKéMON\n and come back and talk to me.\p Good luck, {PLAYER}.$"

Route_135_EventScript_JamesGoFinishTheGame_Text_3:
# 171 "data/maps/Route135_Lab/scripts.pory"
	.string "You know what, though?\p It sucks you didn't keep this same\n energy throughout the whole game,\l because you didn't unlock the “secret” \l superboss.\p But you know what? As a favor,\n I'll make it so you have a chance\l to battle them.\p Good luck, {PLAYER}.\n Go finish the game.$"

Route_135_EventScript_JamesGoFinishTheGame_Text_4:
# 183 "data/maps/Route135_Lab/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}You're now able to challenge\n the superboss!$"

Route_135_EventScript_JamesGoFinishTheGame_Text_5:
# 190 "data/maps/Route135_Lab/scripts.pory"
	.string "Oh, {PLAYER}? Wow.\n Uh, this is kind of awkward…\p Honestly, I didn't expect to see\n you again after that last battle.\p Um…\l …\p You're the type of person who needs\n to see EVERYTHING in a game. I see…\p Well, there's nothing really left for\n you here, unless you want to go back\l to ULTRA SPACE or AREA ZERO for some\l reason.\p But you know, I felt like that last\n battle was a good end to my story, and\l you just made it weird by coming back\l here to talk to me again.\p You didn't even know if there would be\n any different dialogue, you weirdo.\p You're at the end, {PLAYER}.\n Hurry up and do what you need to do.$"

Route_135_EventScript_JamesBattle_Text_0:
# 226 "data/maps/Route135_Lab/scripts.pory"
	.string "Oh, {PLAYER}.\n Sorry, I was focused on my research.\p What's up?$"

Route_135_EventScript_JamesBattle_Text_1:
# 229 "data/maps/Route135_Lab/scripts.pory"
	.string "Want to battle?$"

Route_135_EventScript_JamesBattle_Text_2:
# 229 "data/maps/Route135_Lab/scripts.pory"
	.string "Nevermind.$"

Route_135_EventScript_JamesBattle_Text_3:
# 231 "data/maps/Route135_Lab/scripts.pory"
	.string "A battle?\p Well, it HAS been a while since\n the last time we did.\l …\l Sure.\p I was actually going to head home for\n a bit to take care of some things.\p Could you meet me on ROUTE 115?\n I'll wait for you there.$"

Route_135_EventScript_JamesBattleChoseNo_Text_0:
# 265 "data/maps/Route135_Lab/scripts.pory"
	.string "Oh, okay.\n I'm kind of busy right now, so…$"

Route135_Lab_EventScript_ToUltraSpace_Text_0:
# 294 "data/maps/Route135_Lab/scripts.pory"
	.string " In fact, this POKéMON here came from one\n of those rifts.\l I've named it COSMOG.$"

Route135_Lab_EventScript_ToUltraSpace_Text_1:
# 307 "data/maps/Route135_Lab/scripts.pory"
	.string "Assistant!$"

Route135_Lab_EventScript_EndUltraSpace_Text_0:
# 407 "data/maps/Route135_Lab/scripts.pory"
	.string "MANIAC: We…\n We really returned…$"

Route135_Lab_EventScript_EndUltraSpace_Text_1:
# 436 "data/maps/Route135_Lab/scripts.pory"
	.string "I think I understand why JIMMY gave\n me this job now…$"

Route135_Lab_EventScript_ToAreaZero_Text_0:
# 479 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern. Did you change your mind?$"

Route135_Lab_EventScript_ToAreaZero_Text_1:
# 486 "data/maps/Route135_Lab/scripts.pory"
	.string "Resplendent!\n Go stand next to COSMOG.\p It shall transport you.$"

Route135_Lab_EventScript_ToAreaZero_Text_2:
# 503 "data/maps/Route135_Lab/scripts.pory"
	.string "…I see. Well, you know where\n to find me if you change your mind.$"

Route135_Lab_EventScript_TalkToCosmog_Text_0:
# 517 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern.\n It seems the survey went well.\l Thanks for the great data.\p Well, other than that, there hasn't\n been any significant new developments.\p But on another trip to ULTRA SPACE, we\n found these devices.\p I couldn't find any use for them, but\n maybe you can.$"

Route135_Lab_EventScript_TalkToCosmog_Text_1:
# 530 "data/maps/Route135_Lab/scripts.pory"
	.string "If you'd like to return to one of the\n previous worlds, COSMOG is ready.\l It seems to trust you now.$"

Route135_Lab_EventScript_TalkToCosmog_Text_2:
# 537 "data/maps/Route135_Lab/scripts.pory"
	.string "I'm busy, so I'll leave it to you.\n You know the routine by now.$"

Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_Text_0:
# 550 "data/maps/Route135_Lab/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Where would you like to go?$"

Route_135_Lab_EventScript_Meltan_Text_0:
# 869 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p It contained the POKéMON\n MELTAN.\p Take the POKé BALL?$"

Route_135_Lab_EventScript_Meltan_Text_1:
# 878 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} took the POKéMON!$"

Route_135_Lab_EventScript_Meltan_Text_2:
# 897 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} decided not to take the \n POKéMON.$"

Route_135_Lab_EventScript_TypeNull_Text_0:
# 908 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p It contained the POKéMON\n TYPE NULL.\p Take the POKé BALL?$"

Route135_Lab_Text_Maniac1::
# 603 "data/maps/Route135_Lab/scripts.pory"
	.string "Hm? Are you the new intern?$"

Route135_Lab_Text_Maniac2::
# 607 "data/maps/Route135_Lab/scripts.pory"
	.string "Resplendent!\n You're just in time.\l Come with me.$"

Route135_Lab_Text_Maniac3::
# 613 "data/maps/Route135_Lab/scripts.pory"
	.string "I presume you're already aware of\n what's being researched here… but\l to reiterate, I'm currently looking\l into the possibility of traveling\l to new worlds.\p In fact, I discovered the existence of\n different dimensions parallel to ours.\p I've named the endless expanse\n between these worlds ULTRA SPACE.\p Around the world, there have been\n rifts across the region that connect\l our world to this ULTRA SPACE.$"

Route135_Lab_Text_Maniac4::
# 628 "data/maps/Route135_Lab/scripts.pory"
	.string "I've reached a breakthrough in my\n experiments and now plan to attempt\l to open a rift to the ULTRA SPACE.\p You made it just in time.\n Quite fortuitous, indeed.$"

Route135_Lab_Text_James::
# 641 "data/maps/Route135_Lab/scripts.pory"
	.string "JAMES: {PLAYER}?\n What are you doing here?$"

Route135_Lab_Text_Maniac5::
# 646 "data/maps/Route135_Lab/scripts.pory"
	.string "MANIAC: Ah, so you two are\n already acquainted.\p Then let us forgo the formalities and\n get right to the experiment!$"

Route135_Lab_Text_Maniac6::
# 701 "data/maps/Route135_Lab/scripts.pory"
	.string "This machine I've built should be\n capable of creating the rift…\l Let us begin.$"

Route135_Lab_Text_Maniac7::
# 707 "data/maps/Route135_Lab/scripts.pory"
	.string "It's working! It's really working!\n RESPLENDENT!\p I knew I was a genius!\n Wait… No! Something's wrong!$"

Route135_Lab_Text_ManiacNo::
# 714 "data/maps/Route135_Lab/scripts.pory"
	.string "I see…\n Well, this is a private LAB.\p If you're not going to help me with\n my research, you'll have to leave.$"

Route135_Lab_Text_Maniac8::
# 721 "data/maps/Route135_Lab/scripts.pory"
	.string "Great work COSMOG!\n These discoveries are monumental!\p I must log all my findings this instant!\n Come with me, COSMOG!$"

Route135_Lab_Text_Maniac9::
# 728 "data/maps/Route135_Lab/scripts.pory"
	.string "MANIAC: Thanks for your work, intern.\n You're free to do as you would.\p I shall contact you if your assistance\n is required again.$"

Route135_Lab_Text_James2::
# 735 "data/maps/Route135_Lab/scripts.pory"
	.string "JAMES: …He's gonna be like that for a\n while.\p Well, either way, that really was a crazy\n experience.\p What are you going to do now, {PLAYER}?\n I'm going to stay and help out more.\l I think if I do, I'll find the answers\l I'm looking for.$"

Route135_Lab_Text_James3::
# 746 "data/maps/Route135_Lab/scripts.pory"
	.string "Anyways, like the PROF. said, we'll let\n let you know if anything else happens.\p See ya, {PLAYER}.$"

Route_135_Lab_Text_ImGoingToStayHere::
# 752 "data/maps/Route135_Lab/scripts.pory"
	.string "I don't know how long I'm going to\n stay here but I don't mind it.\p Yeah, it's in a rural area, but the people\n are nice.\p The PROF.'s a little weird, but I can\n tolerate it.$"

Route_135_Lab_Text_ImBusy::
# 794 "data/maps/Route135_Lab/scripts.pory"
	.string "Salutations, intern.\n There's no new breakthroughs yet.\p I'm busy now, so come back later.$"

Route135_Lab_Text_ManiacIntroduceAreaZero::
# 811 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern.\n Salutations.\p I assume JAMES provided you with the\n relevant information, yes?\p As you saw, COSMOG is capable of\n traversing the ULTRA SPACE at will.\p With extensive testing and research,\n we've been able to survey the ULTRA\l SPACE further.\p During these surveys, we came across\n another rift that seems to lead to\l another world…\p Seeing as you were crazy enough to\n walk across the sky, I presume you'd\l be open to being the first human to\l explore this new world, yes?$"

Route135_Lab_Text_ManiacExplainCosmog::
# 830 "data/maps/Route135_Lab/scripts.pory"
	.string "The camera I put on COSMOG showed\n the world has a somewhat strange\l composition… Although there are signs\l that it was once inhabited by humans,\l so it should be safe to traverse.\p COSMOG will be with you, so if you want\n to return to the lab, just ask it.\p Now, it is time! Godspeed, intern!\n COSMOG, if you will!$"

Route_135_Lab_Text_ImBusyTalkToCosmog::
# 842 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern.\n Sadly, there's no new discoveries.\p Just ask COSMOG if you need to return\n to the ULTRA SPACE.\p It seems to trust you enough without\n needing my intervention any further.$"

Route_135_Lab_PokenavText_JamesComeBackToTheLab::
# 851 "data/maps/Route135_Lab/scripts.pory"
	.string "… … … … … …\n … … … … … Beep!\p {PLAYER}?\n It's JAMES.\p The PROF. says there's a new\n breakthrough in his research.\p He thinks you'll be interested\n in helping with his experiment.\p Can you come to the LAB when\n you have a chance?\p … … … … … …\n … … … … … Click!$"
