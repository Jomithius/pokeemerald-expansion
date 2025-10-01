Route135_Lab_MapScripts::
# 7 "data/maps/Route135_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route135_Lab_OnTransition
# 2 "data/maps/Route135_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route135_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route135_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Route135_Lab/scripts.pory"
	map_script_2 VAR_ULTRA_SPACE_STATE, 0, Route135_Lab_EventScript_ToUltraSpace
# 4 "data/maps/Route135_Lab/scripts.pory"
	map_script_2 VAR_ULTRA_SPACE_STATE, 3, Route135_Lab_EventScript_EndUltraSpace
# 5 "data/maps/Route135_Lab/scripts.pory"
	map_script_2 VAR_ULTRA_SPACE_STATE, 6, Route135_Lab_EventScript_EndAreaZero
	.2byte 0


Route135_Lab_OnTransition::
# 11 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_TEMP_E
# 12 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_SYS_DYNAMIC_LEVELS
# 13 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_LANDMARK_ROUTE135
# 14 "data/maps/Route135_Lab/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE135
# 15 "data/maps/Route135_Lab/scripts.pory"
	call_if_set FLAG_ENABLED_JAMES_MATCH_CALL, Route135_Lab_DisableJamesMatchCall
# 16 "data/maps/Route135_Lab/scripts.pory"
	call_if_ge VAR_ULTRA_SPACE_STATE, 4, Route135_Lab_JamesPosition
	end


Route135_Lab_JamesPosition::
# 21 "data/maps/Route135_Lab/scripts.pory"
	setobjectxyperm 2, 5, 2
# 22 "data/maps/Route135_Lab/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	return


Route135_Lab_DisableJamesMatchCall::
# 27 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_ENABLED_JAMES_MATCH_CALL
	return


Route135_Lab_EventScript_Maniac::
# 32 "data/maps/Route135_Lab/scripts.pory"
	lock
# 33 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 4
	goto_if_eq Route135_Lab_EventScript_Maniac_2
# 36 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 5
	goto_if_eq Route135_Lab_EventScript_Maniac_3
# 39 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 6
	goto_if_eq Route135_Lab_EventScript_Maniac_4
# 43 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImBusyTalkToCosmog, MSGBOX_DEFAULT
Route135_Lab_EventScript_Maniac_1:
# 45 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 46 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_Maniac_2:
# 34 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImBusy, MSGBOX_DEFAULT
	goto Route135_Lab_EventScript_Maniac_1

Route135_Lab_EventScript_Maniac_3:
# 37 "data/maps/Route135_Lab/scripts.pory"
	goto Route135_Lab_EventScript_ToAreaZero
	goto Route135_Lab_EventScript_Maniac_1

Route135_Lab_EventScript_Maniac_4:
# 40 "data/maps/Route135_Lab/scripts.pory"
	goto Route135_Lab_EventScript_TalkToCosmog
	goto Route135_Lab_EventScript_Maniac_1


Route135_Lab_EventScript_James::
# 51 "data/maps/Route135_Lab/scripts.pory"
	lock
# 52 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 7
	goto_if_ge Route135_Lab_EventScript_James_4
Route135_Lab_EventScript_James_1:
# 55 "data/maps/Route135_Lab/scripts.pory"
	goto_if_set FLAG_SYS_DEFEATED_JAMES, Route135_Lab_EventScript_James_9
Route135_Lab_EventScript_James_8:
# 58 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 59 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 5
	goto_if_eq Route135_Lab_EventScript_James_12
# 64 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 6
	goto_if_eq Route135_Lab_EventScript_James_13
# 78 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImGoingToStayHere, MSGBOX_AUTOCLOSE
# 79 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
Route135_Lab_EventScript_James_11:
# 81 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 82 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 83 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_James_2:
# 53 "data/maps/Route135_Lab/scripts.pory"
	goto Route_135_EventScript_JamesBattle
	goto Route135_Lab_EventScript_James_1

Route135_Lab_EventScript_James_3:
# 52 "data/maps/Route135_Lab/scripts.pory"
	goto_if_unset FLAG_SYS_DEFEATED_JAMES, Route135_Lab_EventScript_James_2
	goto Route135_Lab_EventScript_James_1

Route135_Lab_EventScript_James_4:
# 52 "data/maps/Route135_Lab/scripts.pory"
	goto_if_set FLAG_SYS_FINAL_REMATCH, Route135_Lab_EventScript_James_3
	goto Route135_Lab_EventScript_James_1

Route135_Lab_EventScript_James_9:
# 56 "data/maps/Route135_Lab/scripts.pory"
	goto Route_135_EventScript_JamesGoFinishTheGame
	goto Route135_Lab_EventScript_James_8

Route135_Lab_EventScript_James_12:
# 60 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_James_Text_0, MSGBOX_AUTOCLOSE
# 62 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
	goto Route135_Lab_EventScript_James_11

Route135_Lab_EventScript_James_13:
# 65 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_James_Text_1, MSGBOX_AUTOCLOSE
# 75 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
	goto Route135_Lab_EventScript_James_11


Route_135_EventScript_JamesGoFinishTheGame::
# 88 "data/maps/Route135_Lab/scripts.pory"
	lock
# 89 "data/maps/Route135_Lab/scripts.pory"
	delay 30
# 90 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 91 "data/maps/Route135_Lab/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 92 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 93 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 94 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 95 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_LINA_TALKED_TO, 2
	goto_if_eq Route_135_EventScript_JamesGoFinishTheGame_12
Route_135_EventScript_JamesGoFinishTheGame_10:
# 122 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_LINA_TALKED_TO, 1
	goto_if_eq Route_135_EventScript_JamesGoFinishTheGame_9
Route_135_EventScript_JamesGoFinishTheGame_7:
# 154 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_LINA_TALKED_TO, 1
	goto_if_eq Route_135_EventScript_JamesGoFinishTheGame_6
Route_135_EventScript_JamesGoFinishTheGame_5:
# 193 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesGoFinishTheGame_Text_5, MSGBOX_AUTOCLOSE
# 213 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
Route_135_EventScript_JamesGoFinishTheGame_1:
# 215 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 216 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 217 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route_135_EventScript_JamesGoFinishTheGame_2:
# 96 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesGoFinishTheGame_Text_0, MSGBOX_AUTOCLOSE
# 120 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
	goto Route_135_EventScript_JamesGoFinishTheGame_1

Route_135_EventScript_JamesGoFinishTheGame_3:
# 123 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesGoFinishTheGame_Text_1, MSGBOX_DEFAULT
# 141 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 142 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesGoFinishTheGame_Text_2, MSGBOX_AUTOCLOSE
# 152 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
	goto Route_135_EventScript_JamesGoFinishTheGame_1

Route_135_EventScript_JamesGoFinishTheGame_4:
# 155 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesGoFinishTheGame_Text_1, MSGBOX_DEFAULT
# 173 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 174 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesGoFinishTheGame_Text_3, MSGBOX_AUTOCLOSE
# 184 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 185 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_B_POINTS
# 186 "data/maps/Route135_Lab/scripts.pory"
	message Route_135_EventScript_JamesGoFinishTheGame_Text_4
# 188 "data/maps/Route135_Lab/scripts.pory"
	waitfanfare
# 189 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 190 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_LINA_TALKED_TO, 2
	goto Route_135_EventScript_JamesGoFinishTheGame_1

Route_135_EventScript_JamesGoFinishTheGame_6:
# 154 "data/maps/Route135_Lab/scripts.pory"
	goto_if_set FLAG_LINA_HOUSE_EEVEE, Route_135_EventScript_JamesGoFinishTheGame_4
	goto Route_135_EventScript_JamesGoFinishTheGame_5

Route_135_EventScript_JamesGoFinishTheGame_9:
# 122 "data/maps/Route135_Lab/scripts.pory"
	goto_if_unset FLAG_LINA_HOUSE_EEVEE, Route_135_EventScript_JamesGoFinishTheGame_3
	goto Route_135_EventScript_JamesGoFinishTheGame_7

Route_135_EventScript_JamesGoFinishTheGame_12:
# 95 "data/maps/Route135_Lab/scripts.pory"
	goto_if_set FLAG_LINA_HOUSE_EEVEE, Route_135_EventScript_JamesGoFinishTheGame_2
	goto Route_135_EventScript_JamesGoFinishTheGame_10


Route_135_EventScript_JamesBattle::
# 222 "data/maps/Route135_Lab/scripts.pory"
	lock
# 223 "data/maps/Route135_Lab/scripts.pory"
	delay 30
# 224 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 225 "data/maps/Route135_Lab/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 226 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 227 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 228 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 229 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesBattle_Text_0, MSGBOX_DEFAULT
# 232 "data/maps/Route135_Lab/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route_135_EventScript_JamesBattle_Text_1, Route_135_EventScript_JamesBattle_Text_2
# 233 "data/maps/Route135_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route_135_EventScript_JamesBattleChoseNo
# 234 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesBattle_Text_3, MSGBOX_AUTOCLOSE
# 243 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 244 "data/maps/Route135_Lab/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_RESULT
# 245 "data/maps/Route135_Lab/scripts.pory"
	switch VAR_RESULT
# 246 "data/maps/Route135_Lab/scripts.pory"
	case DIR_WEST, Route_135_EventScript_JamesBattle_3
# 248 "data/maps/Route135_Lab/scripts.pory"
	case DIR_EAST, Route_135_EventScript_JamesBattle_4
# 250 "data/maps/Route135_Lab/scripts.pory"
	case DIR_NORTH, Route_135_EventScript_JamesBattle_5
# 253 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route_135_Lab_Movement_JamesLeavesPlayer
Route_135_EventScript_JamesBattle_1:
# 255 "data/maps/Route135_Lab/scripts.pory"
	delay 24
# 256 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 257 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 258 "data/maps/Route135_Lab/scripts.pory"
	removeobject 2
# 259 "data/maps/Route135_Lab/scripts.pory"
	playse SE_EXIT
# 260 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 261 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_HIDE_JAMES_ROUTE_115
# 262 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_MISA_STATE, 11
# 263 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route_135_EventScript_JamesBattle_3:
# 247 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route_135_Lab_Movement_JamesLeavesPlayer
	goto Route_135_EventScript_JamesBattle_1

Route_135_EventScript_JamesBattle_4:
# 249 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route_135_Lab_Movement_JamesLeavesPlayer
	goto Route_135_EventScript_JamesBattle_1

Route_135_EventScript_JamesBattle_5:
# 251 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route_135_Lab_Movement_JamesLeavesPlayerNorth
	goto Route_135_EventScript_JamesBattle_1


Route_135_EventScript_JamesBattleChoseNo::
# 268 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesBattleChoseNo_Text_0, MSGBOX_AUTOCLOSE
# 270 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 271 "data/maps/Route135_Lab/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 272 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 273 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_ToUltraSpace::
# 278 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 279 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 280 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 281 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 282 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 283 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacApproachPlayer
# 284 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 285 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac1, MSGBOX_YESNO
# 286 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route135_Lab_EventScript_ToUltraSpace_2
# 357 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_ManiacNo, MSGBOX_AUTOCLOSE
# 358 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 359 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 360 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 361 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 362 "data/maps/Route135_Lab/scripts.pory"
	warp MAP_ROUTE135, 8, 10
# 363 "data/maps/Route135_Lab/scripts.pory"
	waitstate
Route135_Lab_EventScript_ToUltraSpace_1:
# 365 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end

Route135_Lab_EventScript_ToUltraSpace_2:
# 287 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac2, MSGBOX_AUTOCLOSE
# 288 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 289 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacGoBackToPC
# 290 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 291 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerGoBackToPC
# 292 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 293 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac3, MSGBOX_AUTOCLOSE
# 294 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 295 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 296 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 297 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 300 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 301 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 302 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 303 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 304 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 305 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 306 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac4, MSGBOX_AUTOCLOSE
# 307 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 308 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 309 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 310 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToUltraSpace_Text_1, MSGBOX_AUTOCLOSE
# 311 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 312 "data/maps/Route135_Lab/scripts.pory"
	delay 20
# 313 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route135_Lab_Movement_JamesEnter
# 314 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 315 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 316 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 317 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 318 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 319 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 320 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 321 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 322 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 323 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James, MSGBOX_AUTOCLOSE
# 324 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 325 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 326 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 327 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 328 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 329 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac5, MSGBOX_AUTOCLOSE
# 330 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 331 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacStartExperiment
# 332 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 333 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route135_Lab_Movement_JamesStartExperiment
# 334 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 335 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerStartExperiment
# 336 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 337 "data/maps/Route135_Lab/scripts.pory"
	fadenewbgm MUS_NONE
# 338 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac6, MSGBOX_AUTOCLOSE
# 339 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 340 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 341 "data/maps/Route135_Lab/scripts.pory"
	playse SE_BERRY_BLENDER
# 342 "data/maps/Route135_Lab/scripts.pory"
	delay 60
# 343 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac7, MSGBOX_AUTOCLOSE
# 344 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 345 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 346 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 347 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 348 "data/maps/Route135_Lab/scripts.pory"
	playse SE_BREAKABLE_DOOR
# 349 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 350 "data/maps/Route135_Lab/scripts.pory"
	delay 10
# 351 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 352 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 1
# 353 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_ULTRA_SPACE, 40, 65
# 354 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ToUltraSpace_1


Route135_Lab_Shake::
# 370 "data/maps/Route135_Lab/scripts.pory"
	delay 30
# 371 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8004, 2
# 372 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8005, 6
# 373 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8006, 8
# 374 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8007, 4
# 375 "data/maps/Route135_Lab/scripts.pory"
	special ShakeCamera
# 376 "data/maps/Route135_Lab/scripts.pory"
	waitstate
# 377 "data/maps/Route135_Lab/scripts.pory"
	delay 60
# 378 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 379 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_TO_WHITE
# 380 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 381 "data/maps/Route135_Lab/scripts.pory"
	delay 20
# 382 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 383 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_TO_WHITE
# 384 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 385 "data/maps/Route135_Lab/scripts.pory"
	delay 10
# 386 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 387 "data/maps/Route135_Lab/scripts.pory"
	playse SE_INTRO_BLAST
# 388 "data/maps/Route135_Lab/scripts.pory"
	delay 20
	return


Route135_Lab_EventScript_Cosmog::
# 393 "data/maps/Route135_Lab/scripts.pory"
	lock
# 394 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 395 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 396 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 397 "data/maps/Route135_Lab/scripts.pory"
	goto_if_ge VAR_ULTRA_SPACE_STATE, 6, Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero
# 398 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_EndUltraSpace::
# 403 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 404 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Route_135_Lab_ManiacLookAround
# 405 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 406 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route_135_Lab_PlayerLookAround
# 407 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 408 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Route_135_Lab_JamesLookAround
# 409 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 410 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_EndUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 412 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 413 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 414 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 4
# 415 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac8, MSGBOX_AUTOCLOSE
# 416 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 417 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 418 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 419 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Route_135_Lab_Movement_ManiacReturnsToComputer
# 420 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 421 "data/maps/Route135_Lab/scripts.pory"
	applymovement 6, Route_135_Lab_Movement_CosmogReturnsToComputer
# 422 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 423 "data/maps/Route135_Lab/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_LOOK_AROUND
# 424 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 425 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 426 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceRight
# 427 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 6
# 428 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 429 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 4
# 430 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac9, MSGBOX_AUTOCLOSE
# 431 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 432 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 433 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 4
# 434 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Route_135_Lab_Movement_JamesFacePlayer
# 435 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 436 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James2, MSGBOX_AUTOCLOSE
# 437 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 438 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 439 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 440 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_EndUltraSpace_Text_1, MSGBOX_AUTOCLOSE
# 442 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 443 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 444 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 445 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James3, MSGBOX_AUTOCLOSE
# 446 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 447 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Route_135_Lab_Movement_JamesReturnsToComputer
# 448 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 449 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 450 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 451 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route_135_Lab_Movement_PlayerLeaves
# 452 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 453 "data/maps/Route135_Lab/scripts.pory"
	removeobject 5
# 454 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_HIDE_NPCS_RETURNED_FROM_ULTRA_SPACE
# 455 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_HIDE_PROF_ROUTE_135_LAB
# 456 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_HIDE_JAMES_ROUTE_135_LAB
# 457 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 4
# 458 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_JAMES_AREA_ZERO_CALL_STEP_COUNTER, 0
# 459 "data/maps/Route135_Lab/scripts.pory"
	addvar VAR_FINAL_REMATCH_STATE, 1
# 460 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_JIMMY_FINAL_REMATCH_CALL_STEP_COUNTER, 0
# 461 "data/maps/Route135_Lab/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE135
# 462 "data/maps/Route135_Lab/scripts.pory"
	warp MAP_ROUTE135, 8, 10
# 463 "data/maps/Route135_Lab/scripts.pory"
	waitstate
# 464 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end


Route135_Lab_EventScript_JamesCallsPlayerAreaZero::
# 469 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 470 "data/maps/Route135_Lab/scripts.pory"
	pokenavcall Route_135_Lab_PokenavText_JamesComeBackToTheLab
# 471 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 472 "data/maps/Route135_Lab/scripts.pory"
	delay 30
# 473 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 5
# 474 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_SYS_UNLOCKED_AREA_ZERO
# 475 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end


Route135_Lab_EventScript_ToAreaZero::
# 480 "data/maps/Route135_Lab/scripts.pory"
	lock
# 481 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 482 "data/maps/Route135_Lab/scripts.pory"
	goto_if_set FLAG_SYS_DECLINED_AREA_ZERO, Route135_Lab_EventScript_ToAreaZero_2
# 486 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_ManiacIntroduceAreaZero, MSGBOX_YESNO
Route135_Lab_EventScript_ToAreaZero_1:
# 488 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 489 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route135_Lab_EventScript_ToAreaZero_6
# 507 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToAreaZero_Text_2, MSGBOX_AUTOCLOSE
# 509 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 510 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 511 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 512 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_SYS_DECLINED_AREA_ZERO
Route135_Lab_EventScript_ToAreaZero_5:
# 514 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_ToAreaZero_2:
# 483 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToAreaZero_Text_0, MSGBOX_YESNO
	goto Route135_Lab_EventScript_ToAreaZero_1

Route135_Lab_EventScript_ToAreaZero_6:
# 490 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToAreaZero_Text_1, MSGBOX_AUTOCLOSE
# 493 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_EventScript_PlayerGoesToCosmog
# 494 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 495 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_ManiacExplainCosmog, MSGBOX_AUTOCLOSE
# 496 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 497 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 498 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 499 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 500 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 501 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 503 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_AREA_ZERO, 15, 11
# 504 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ToAreaZero_5


Route135_Lab_EventScript_EndAreaZero::
# 519 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 520 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 521 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 522 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 523 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 524 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route_135_Lab_Movement_ProfToPlayerPostAreaZero
# 525 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 526 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_EndAreaZero_Text_0, MSGBOX_DEFAULT
# 542 "data/maps/Route135_Lab/scripts.pory"
	giveitem ITEM_N_SOLARIZER
# 543 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 544 "data/maps/Route135_Lab/scripts.pory"
	giveitem ITEM_N_LUNARIZER
# 545 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 546 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_EndAreaZero_Text_1
# 549 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 550 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 551 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 552 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 553 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_EndAreaZero_Text_2, MSGBOX_AUTOCLOSE
# 555 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 556 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 557 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 558 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 7
# 559 "data/maps/Route135_Lab/scripts.pory"
	addvar VAR_FINAL_REMATCH_STATE, 1
# 560 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_RECEIVED_MELTAN
# 561 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end


Route135_Lab_EventScript_TalkToCosmog::
# 566 "data/maps/Route135_Lab/scripts.pory"
	lock
# 567 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 568 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_TalkToCosmog_Text_0, MSGBOX_DEFAULT
# 577 "data/maps/Route135_Lab/scripts.pory"
	giveitem ITEM_N_SOLARIZER
# 578 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 579 "data/maps/Route135_Lab/scripts.pory"
	giveitem ITEM_N_LUNARIZER
# 580 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 581 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_TalkToCosmog_Text_1
# 584 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 585 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 586 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 587 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 588 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_EndAreaZero_Text_2, MSGBOX_AUTOCLOSE
# 590 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 591 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 592 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 593 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 7
# 594 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_RECEIVED_MELTAN
# 595 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero::
# 600 "data/maps/Route135_Lab/scripts.pory"
	lock
# 601 "data/maps/Route135_Lab/scripts.pory"
	message Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_Text_0
# 602 "data/maps/Route135_Lab/scripts.pory"
	multichoice 25, 5, MULTI_ULTRA_SPACE_CHOICE, 0
# 603 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 604 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_2
# 612 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_3
Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_1:
# 619 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_2:
# 605 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 606 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 607 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 608 "data/maps/Route135_Lab/scripts.pory"
	setrespawn HEAL_LOCATION_ULTRA_SPACE
# 609 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_ULTRA_SPACE, 26, 49
# 610 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_1

Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_3:
# 613 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 614 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 615 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 616 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_AREA_ZERO, 15, 11
# 617 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_1


Route135_Lab_EventScript_PlayerGoesToCosmog::
# 624 "data/maps/Route135_Lab/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_0
# 625 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq Route135_Lab_EventScript_PlayerGoesToCosmog_2
# 630 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerGoesToCosmogNorth
# 631 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
Route135_Lab_EventScript_PlayerGoesToCosmog_1:
# 633 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 634 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
	return

Route135_Lab_EventScript_PlayerGoesToCosmog_2:
# 626 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerGoesToCosmogEast
# 627 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
	goto Route135_Lab_EventScript_PlayerGoesToCosmog_1


# 638 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacApproachPlayer:
# 639 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 639 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 639 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 639 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 639 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 640 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 640 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

# 643 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacGoBackToPC:
# 644 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 644 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 644 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 645 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 645 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 645 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 645 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 646 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 649 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoBackToPC:
# 650 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 650 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 650 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 651 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 651 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 651 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 651 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 652 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 688 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_JamesEnter:
# 689 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 689 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 689 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 689 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 689 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 689 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 690 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
	step_end

# 705 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacStartExperiment:
# 706 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 706 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 706 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 707 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 708 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 711 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_JamesStartExperiment:
# 712 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 712 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 712 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 713 "data/maps/Route135_Lab/scripts.pory"
	walk_right
	step_end

# 716 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerStartExperiment:
# 717 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 717 "data/maps/Route135_Lab/scripts.pory"
	walk_up
	step_end

# 720 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_ManiacLookAround:
# 721 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 722 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 723 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
# 724 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 725 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 726 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 727 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
	step_end

# 731 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_JamesLookAround:
# 732 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 733 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 734 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
# 735 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 736 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 737 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 738 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 742 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_PlayerLookAround:
# 743 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
# 744 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 745 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 746 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 747 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 748 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 749 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 814 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_ManiacReturnsToComputer:
# 815 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_down
# 816 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 816 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 816 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 816 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 817 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_up
# 818 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
	step_end

# 821 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_CosmogReturnsToComputer:
# 822 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 823 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 823 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 823 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 824 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 825 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 825 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 826 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 829 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesFacePlayer:
# 830 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 831 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 834 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesReturnsToComputer:
# 835 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 835 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 835 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 835 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 836 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 836 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 837 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 837 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 838 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 839 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 839 "data/maps/Route135_Lab/scripts.pory"
	walk_up
	step_end

# 842 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_PlayerLeaves:
# 843 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 843 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 843 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 843 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

# 852 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoesToCosmogEast:
# 853 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 854 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 857 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoesToCosmogNorth:
# 858 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 859 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 859 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 860 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

Route_135_Lab_EventScript_Meltan::
# 920 "data/maps/Route135_Lab/scripts.pory"
	lock
# 921 "data/maps/Route135_Lab/scripts.pory"
	showmonpic SPECIES_MELTAN, 10, 4
# 922 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_0, MSGBOX_YESNO
# 926 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route_135_Lab_EventScript_Meltan_2
# 951 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 952 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_2
Route_135_Lab_EventScript_Meltan_1:
# 955 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 956 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route_135_Lab_EventScript_Meltan_2:
# 927 "data/maps/Route135_Lab/scripts.pory"
	givemon SPECIES_MELTAN, 75
# 928 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MELTAN
# 929 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Route_135_Lab_EventScript_Meltan_5
# 937 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Route_135_Lab_EventScript_Meltan_6
# 946 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 947 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto Route_135_Lab_EventScript_Meltan_1

Route_135_Lab_EventScript_Meltan_5:
# 930 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 931 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1, MSGBOX_DEFAULT
# 932 "data/maps/Route135_Lab/scripts.pory"
	waitfanfare
# 933 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 934 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_MELTAN
# 935 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMon
	goto Route_135_Lab_EventScript_Meltan_1

Route_135_Lab_EventScript_Meltan_6:
# 938 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 939 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1, MSGBOX_DEFAULT
# 940 "data/maps/Route135_Lab/scripts.pory"
	waitfanfare
# 941 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 942 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_MELTAN
# 943 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMonBox
	goto Route_135_Lab_EventScript_Meltan_1


Route_135_Lab_EventScript_TypeNull::
# 961 "data/maps/Route135_Lab/scripts.pory"
	lock
# 962 "data/maps/Route135_Lab/scripts.pory"
	showmonpic SPECIES_TYPE_NULL, 10, 4
# 963 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_TypeNull_Text_0, MSGBOX_YESNO
# 967 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route_135_Lab_EventScript_TypeNull_2
# 992 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 993 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_2
Route_135_Lab_EventScript_TypeNull_1:
# 996 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 997 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route_135_Lab_EventScript_TypeNull_2:
# 968 "data/maps/Route135_Lab/scripts.pory"
	givemon SPECIES_TYPE_NULL, 70
# 969 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TYPE_NULL
# 970 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Route_135_Lab_EventScript_TypeNull_5
# 978 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Route_135_Lab_EventScript_TypeNull_6
# 987 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 988 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto Route_135_Lab_EventScript_TypeNull_1

Route_135_Lab_EventScript_TypeNull_5:
# 971 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 972 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1, MSGBOX_DEFAULT
# 973 "data/maps/Route135_Lab/scripts.pory"
	waitfanfare
# 974 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 975 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_TYPE_NULL
# 976 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMon
	goto Route_135_Lab_EventScript_TypeNull_1

Route_135_Lab_EventScript_TypeNull_6:
# 979 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 980 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1, MSGBOX_DEFAULT
# 981 "data/maps/Route135_Lab/scripts.pory"
	waitfanfare
# 982 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 983 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_TYPE_NULL
# 984 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMonBox
	goto Route_135_Lab_EventScript_TypeNull_1


# 1001 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesLeavesPlayer:
# 1002 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 1002 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 1003 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 1004 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 1004 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 1004 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 1004 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 1004 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 1004 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 1004 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 1004 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 1004 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

# 1007 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesLeavesPlayerNorth:
# 1008 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 1009 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 1009 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 1009 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 1009 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 1009 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 1009 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 1009 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 1009 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 1009 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 1009 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 1009 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

# 1012 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_ProfToPlayerPostAreaZero:
# 1013 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 1014 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
	step_end

Route135_Lab_EventScript_James_Text_0:
# 60 "data/maps/Route135_Lab/scripts.pory"
	.string "What's up, {PLAYER}.\n The PROF. is waiting for you.$"

Route135_Lab_EventScript_James_Text_1:
# 65 "data/maps/Route135_Lab/scripts.pory"
	.string "How did the expedition go?\n I wanna survey that place too.\p It's crazy to think there's whole\n other worlds and civilizations out\l there parallel to ours.\p Maybe the void could actually be\n real…\p Don't worry, I'm not going to\n go back to my phase.\p I'm just thinking out loud.$"

Route_135_EventScript_JamesGoFinishTheGame_Text_0:
# 96 "data/maps/Route135_Lab/scripts.pory"
	.string "Oh, {PLAYER}? Wow.\n Uh, this is kind of awkward…\p Honestly, I didn't expect to see\n you again after that last battle.\p Um…\l …\p You're the type of person who needs\n to see EVERYTHING in a game. I see…\p Well, there's nothing really left for\n you here, unless you want to go back\l to ULTRA SPACE or AREA ZERO for some\l reason.\p But you know, I felt like that last\n battle was a good end to my story, and\l you just made it weird by coming back\l here to talk to me again.\p You didn't even know if there would be\n any different dialogue, you weirdo.\p You're at the end, {PLAYER}.\n Hurry up and do what you need to do.\p Oh, and here's a hint: your exploration\n throughout the game paid off.\p You'll be able to challenge the\n “secret” superboss. Good luck.$"

Route_135_EventScript_JamesGoFinishTheGame_Text_1:
# 123 "data/maps/Route135_Lab/scripts.pory"
	.string "Oh, {PLAYER}? Wow.\n Uh, this is kind of awkward…\p Honestly, I didn't expect to see\n you again after that last battle.\p Um…\l …\p You're the type of person who needs\n to see EVERYTHING in a game. I see…\p Well, there's nothing really left for\n you here, unless you want to go back\l to ULTRA SPACE or AREA ZERO for some\l reason.\p But you know, I felt like that last\n battle was a good end to my story, and\l you just made it weird by coming back\l here to talk to me again.\p You didn't even know if there would be\n any different dialogue, you weirdo.$"

Route_135_EventScript_JamesGoFinishTheGame_Text_2:
# 142 "data/maps/Route135_Lab/scripts.pory"
	.string "You know what, though?\p It sucks you didn't keep this same\n energy throughout the whole game,\l because you didn't unlock the “secret” \l superboss.\p But you know what? As a favor,\n I'll give you a hint:\p Go back to SLATEPORT, steal a POKéMON\n and come back and talk to me.\p Good luck, {PLAYER}.$"

Route_135_EventScript_JamesGoFinishTheGame_Text_3:
# 174 "data/maps/Route135_Lab/scripts.pory"
	.string "You know what, though?\p It sucks you didn't keep this same\n energy throughout the whole game,\l because you didn't unlock the “secret” \l superboss.\p But you know what? As a favor,\n I'll make it so you have a chance\l to battle them.\p Good luck, {PLAYER}.\n Go finish the game.$"

Route_135_EventScript_JamesGoFinishTheGame_Text_4:
# 186 "data/maps/Route135_Lab/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}You're now able to challenge\n the superboss!$"

Route_135_EventScript_JamesGoFinishTheGame_Text_5:
# 193 "data/maps/Route135_Lab/scripts.pory"
	.string "Oh, {PLAYER}? Wow.\n Uh, this is kind of awkward…\p Honestly, I didn't expect to see\n you again after that last battle.\p Um…\l …\p You're the type of person who needs\n to see EVERYTHING in a game. I see…\p Well, there's nothing really left for\n you here, unless you want to go back\l to ULTRA SPACE or AREA ZERO for some\l reason.\p But you know, I felt like that last\n battle was a good end to my story, and\l you just made it weird by coming back\l here to talk to me again.\p You didn't even know if there would be\n any different dialogue, you weirdo.\p You're at the end, {PLAYER}.\n Hurry up and do what you need to do.$"

Route_135_EventScript_JamesBattle_Text_0:
# 229 "data/maps/Route135_Lab/scripts.pory"
	.string "Oh, {PLAYER}.\n Sorry, I was focused on my research.\p What's up?$"

Route_135_EventScript_JamesBattle_Text_1:
# 232 "data/maps/Route135_Lab/scripts.pory"
	.string "Want to battle?$"

Route_135_EventScript_JamesBattle_Text_2:
# 232 "data/maps/Route135_Lab/scripts.pory"
	.string "Nevermind.$"

Route_135_EventScript_JamesBattle_Text_3:
# 234 "data/maps/Route135_Lab/scripts.pory"
	.string "A battle?\p Well, it HAS been a while since\n the last time we did.\l …\l Sure.\p I was actually going to head home for\n a bit to take care of some things.\p Could you meet me on ROUTE 115?\n I'll wait for you there.$"

Route_135_EventScript_JamesBattleChoseNo_Text_0:
# 268 "data/maps/Route135_Lab/scripts.pory"
	.string "Oh, okay.\n I'm kind of busy right now, so…$"

Route135_Lab_EventScript_ToUltraSpace_Text_0:
# 297 "data/maps/Route135_Lab/scripts.pory"
	.string " In fact, this POKéMON here came from one\n of those rifts.\l I've named it COSMOG.$"

Route135_Lab_EventScript_ToUltraSpace_Text_1:
# 310 "data/maps/Route135_Lab/scripts.pory"
	.string "Assistant!$"

Route135_Lab_EventScript_EndUltraSpace_Text_0:
# 410 "data/maps/Route135_Lab/scripts.pory"
	.string "PROF.: We…\n We really returned…$"

Route135_Lab_EventScript_EndUltraSpace_Text_1:
# 440 "data/maps/Route135_Lab/scripts.pory"
	.string "I think I understand why JIMMY gave\n me this job now…$"

Route135_Lab_EventScript_ToAreaZero_Text_0:
# 483 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern. Did you change your mind?$"

Route135_Lab_EventScript_ToAreaZero_Text_1:
# 490 "data/maps/Route135_Lab/scripts.pory"
	.string "Resplendent!\n Go stand next to COSMOG.\p It shall transport you.$"

Route135_Lab_EventScript_ToAreaZero_Text_2:
# 507 "data/maps/Route135_Lab/scripts.pory"
	.string "…I see. Well, you know where\n to find me if you change your mind.$"

Route135_Lab_EventScript_EndAreaZero_Text_0:
# 526 "data/maps/Route135_Lab/scripts.pory"
	.string "PROF.: Ah, intern!\n The survey went well, yes?\l Thanks for the great data.\p Now that we know it's safe, I can send\n JAMES there for further investigation.\p What?\n … … …\p N-No, you weren't just a guinea pig!\n …\p W-Well, other than that, there hasn't\n been any significant new developments.\p But on another trip to the ULTRA SPACE,\n we found these devices.\p After an analysis, I couldn't find any\n use for them.\p But… maybe you can?$"

Route135_Lab_EventScript_EndAreaZero_Text_1:
# 546 "data/maps/Route135_Lab/scripts.pory"
	.string "If you'd like to return to one of the\n previous worlds, COSMOG is ready.\p It seems to trust you now.$"

Route135_Lab_EventScript_EndAreaZero_Text_2:
# 553 "data/maps/Route135_Lab/scripts.pory"
	.string "I'm busy, so I'll leave it to you.\n You know the routine by now.$"

Route135_Lab_EventScript_TalkToCosmog_Text_0:
# 568 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern.\n It seems the survey went well.\l Thanks for the great data.\p Well, other than that, there hasn't\n been any significant new developments.\p But on another trip to ULTRA SPACE, we\n found these devices.\p I couldn't find any use for them, but\n maybe you can.$"

Route135_Lab_EventScript_TalkToCosmog_Text_1:
# 581 "data/maps/Route135_Lab/scripts.pory"
	.string "If you'd like to return to one of the\n previous worlds, COSMOG is ready.\l It seems to trust you now.$"

Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_Text_0:
# 601 "data/maps/Route135_Lab/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Where would you like to go?$"

Route_135_Lab_EventScript_Meltan_Text_0:
# 922 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p It contained the POKéMON\n MELTAN.\p Take the POKé BALL?$"

Route_135_Lab_EventScript_Meltan_Text_1:
# 931 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} took the POKéMON!$"

Route_135_Lab_EventScript_Meltan_Text_2:
# 952 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} decided not to take the \n POKéMON.$"

Route_135_Lab_EventScript_TypeNull_Text_0:
# 963 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p It contained the POKéMON\n TYPE NULL.\p Take the POKé BALL?$"

Route135_Lab_Text_Maniac1::
# 655 "data/maps/Route135_Lab/scripts.pory"
	.string "Hm? Are you the new intern?$"

Route135_Lab_Text_Maniac2::
# 659 "data/maps/Route135_Lab/scripts.pory"
	.string "Resplendent!\n You're just in time.\l Come with me.$"

Route135_Lab_Text_Maniac3::
# 665 "data/maps/Route135_Lab/scripts.pory"
	.string "I presume you're already aware of\n what's being researched here…\p But to reiterate, I'm currently looking\n into the possibility of traveling\l to new worlds.\p In fact, I discovered the existence of\n different dimensions parallel to ours.\p I've named the endless expanse\n between these worlds ULTRA SPACE.\p There have been past accounts of rifts\n opening in other regions that can\l connect our world to this ULTRA SPACE.$"

Route135_Lab_Text_Maniac4::
# 680 "data/maps/Route135_Lab/scripts.pory"
	.string "I've reached a breakthrough in my\n experiments and now plan to attempt\l to open a rift to the ULTRA SPACE.\p You made it just in time.\n Quite fortuitous, indeed.$"

Route135_Lab_Text_James::
# 693 "data/maps/Route135_Lab/scripts.pory"
	.string "JAMES: {PLAYER}?\n What are you doing here?$"

Route135_Lab_Text_Maniac5::
# 698 "data/maps/Route135_Lab/scripts.pory"
	.string "PROF.: Ah, so you two are\n already acquainted.\p Then let us forgo the formalities and\n get right to the experiment!$"

Route135_Lab_Text_Maniac6::
# 753 "data/maps/Route135_Lab/scripts.pory"
	.string "This machine I've built should be\n capable of creating the rift…\l Let us begin.$"

Route135_Lab_Text_Maniac7::
# 759 "data/maps/Route135_Lab/scripts.pory"
	.string "It's working! It's really working!\n RESPLENDENT!\p I knew I was a genius!\n Wait… No! Something's wrong!$"

Route135_Lab_Text_ManiacNo::
# 766 "data/maps/Route135_Lab/scripts.pory"
	.string "I see…\n Well, this is a private LAB.\p If you're not going to help me with\n my research, you'll have to leave.$"

Route135_Lab_Text_Maniac8::
# 773 "data/maps/Route135_Lab/scripts.pory"
	.string "Great work COSMOG!\n These discoveries are monumental!\p I must log all my findings this instant!\n Come with me, COSMOG!$"

Route135_Lab_Text_Maniac9::
# 780 "data/maps/Route135_Lab/scripts.pory"
	.string "PROF.: Thanks for your work, intern.\n You're free to do as you would.\p I shall contact you if your assistance\n is required again.$"

Route135_Lab_Text_James2::
# 787 "data/maps/Route135_Lab/scripts.pory"
	.string "JAMES: … He's gonna be like that for a\n while.\p Well, either way, that really was a crazy\n experience.\p What are you going to do now, {PLAYER}?\n I'm going to stay and help out more.\l I think if I do, I'll find the answers\l I'm looking for.$"

Route135_Lab_Text_James3::
# 798 "data/maps/Route135_Lab/scripts.pory"
	.string "Anyways, like the PROF. said, we'll let\n let you know if anything else happens.\p See ya, {PLAYER}.$"

Route_135_Lab_Text_ImGoingToStayHere::
# 804 "data/maps/Route135_Lab/scripts.pory"
	.string "I don't know how long I'm going to\n stay here but I don't mind it.\p Yeah, it's in a rural area, but the people\n are nice.\p The PROF.'s a little weird, but I can\n tolerate it.$"

Route_135_Lab_Text_ImBusy::
# 846 "data/maps/Route135_Lab/scripts.pory"
	.string "Salutations, intern.\n There's no new breakthroughs yet.\p I'm busy now, so come back later.$"

Route135_Lab_Text_ManiacIntroduceAreaZero::
# 863 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern.\n Salutations.\p I assume JAMES provided you with the\n relevant information, yes?\p As you saw, COSMOG is capable of\n traversing the ULTRA SPACE at will.\p With extensive testing and research,\n we've been able to survey the ULTRA\l SPACE further.\p During these surveys, we came across\n another rift that seems to lead to\l another world…\p Seeing as you were crazy enough to\n walk across the sky, I presume you'd\l be open to being the first human to\l explore this new world, yes?$"

Route135_Lab_Text_ManiacExplainCosmog::
# 882 "data/maps/Route135_Lab/scripts.pory"
	.string "The camera I put on COSMOG showed that\n the world has a somewhat… strange\l composition.\p Although there are signs that it was\n once inhabited by humans, so it should\l be safe to traverse.\p COSMOG will be with you, so if you want\n to return to the lab, just ask it.\p Now, it is time! Godspeed, intern!\n COSMOG, if you will!$"

Route_135_Lab_Text_ImBusyTalkToCosmog::
# 895 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern.\n Sadly, there's no new discoveries.\p Just ask COSMOG if you need to return\n to the ULTRA SPACE.\p It seems to trust you enough without\n needing my intervention any further.$"

Route_135_Lab_PokenavText_JamesComeBackToTheLab::
# 904 "data/maps/Route135_Lab/scripts.pory"
	.string "… … … … … …\n … … … … … Beep!\p {PLAYER}?\n It's JAMES.\p The PROF. says there's a new\n breakthrough in his research.\p He thinks you'll be interested\n in helping with his experiment.\p Can you come to the LAB when\n you have a chance?\p … … … … … …\n … … … … … Click!$"
