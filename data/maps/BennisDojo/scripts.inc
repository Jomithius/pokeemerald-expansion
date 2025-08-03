BennisDojo_MapScripts::
# 2 "data/maps/BennisDojo/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BennisDojo_OnTransition
	.byte 0


BennisDojo_OnTransition::
# 6 "data/maps/BennisDojo/scripts.pory"
	call_if_unset FLAG_HIDE_ASAK_BENNIS_DOJO, BennisDojo_UpdateAsakPos
# 7 "data/maps/BennisDojo/scripts.pory"
	call_if_defeated TRAINER_BENNIS_4, BennisDojo_UpdateDisciplesPos
# 8 "data/maps/BennisDojo/scripts.pory"
	call_if_set FLAG_HIDE_REMATCH_TRAINERS_BENNIS_DOJO, BennisDojoHideMedicham
	end


BennisDojo_UpdateDisciplesPos::
# 13 "data/maps/BennisDojo/scripts.pory"
	setobjectxyperm 6, 8, 9
# 14 "data/maps/BennisDojo/scripts.pory"
	setobjectxyperm 9, 5, 9
# 15 "data/maps/BennisDojo/scripts.pory"
	setobjectxyperm 8, 3, 14
# 16 "data/maps/BennisDojo/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 17 "data/maps/BennisDojo/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 18 "data/maps/BennisDojo/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_WANDER_AROUND
	return


BennisDojo_UpdateAsakPos::
# 23 "data/maps/BennisDojo/scripts.pory"
	setobjectxyperm 11, 12, 15
	return


BennisDojoHideMedicham::
# 28 "data/maps/BennisDojo/scripts.pory"
	removeobject 10
	return


BennisDojo_EventScript_Bertho::
# 33 "data/maps/BennisDojo/scripts.pory"
	goto_if_defeated TRAINER_BENNIS_4, BennisDojo_EventScript_BaldyBaldyOverThere
# 34 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_single TRAINER_BERTHO, BennisDojo_EventScript_Bertho_Text_0, BennisDojo_EventScript_Bertho_Text_1
# 35 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_Bertho_Text_2, MSGBOX_NPC
	end


BennisDojo_EventScript_Benson::
# 41 "data/maps/BennisDojo/scripts.pory"
	goto_if_defeated TRAINER_BENNIS_4, BennisDojo_EventScript_BaldyBaldyOverThere
# 42 "data/maps/BennisDojo/scripts.pory"
	goto_if_not_defeated TRAINER_BERTHO, BennisDojo_EventScript_NoCheating
# 43 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_single TRAINER_BENSON, BennisDojo_EventScript_Benson_Text_0, BennisDojo_EventScript_Benson_Text_1
# 44 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_Benson_Text_2, MSGBOX_NPC
	end


BennisDojo_EventScript_Panini::
# 50 "data/maps/BennisDojo/scripts.pory"
	goto_if_not_defeated TRAINER_BENSON, BennisDojo_EventScript_NoCheatingPanini
# 51 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_single TRAINER_PANINI_2, BennisDojo_EventScript_Panini_Text_0, BennisDojo_EventScript_Panini_Text_1
# 52 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_Panini_Text_2, MSGBOX_NPC
	end


BennisDojo_EventScript_Bennis::
# 57 "data/maps/BennisDojo/scripts.pory"
	goto_if_not_defeated TRAINER_PANINI_2, BennisDojo_EventScript_NoCheating
# 58 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_TEMP_7
# 59 "data/maps/BennisDojo/scripts.pory"
	goto_if_not_defeated TRAINER_BENNIS_4, BennisDojo_EventScript_BennisFinalBattle
# 60 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_Bennis_Text_0, MSGBOX_NPC
	end


BennisDojo_EventScript_Asak::
# 68 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_Asak_Text_0, MSGBOX_NPC
	end


BennisDojo_EventScript_Medicham::
# 74 "data/maps/BennisDojo/scripts.pory"
	lock
# 75 "data/maps/BennisDojo/scripts.pory"
	faceplayer
# 76 "data/maps/BennisDojo/scripts.pory"
	playmoncry SPECIES_MEDICHAM, CRY_MODE_ENCOUNTER
# 77 "data/maps/BennisDojo/scripts.pory"
	waitmoncry
# 78 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_BennisFinalBattle::
# 83 "data/maps/BennisDojo/scripts.pory"
	lock
# 84 "data/maps/BennisDojo/scripts.pory"
	faceplayer
# 85 "data/maps/BennisDojo/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 86 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_BennisFinalBattle_Text_0, MSGBOX_AUTOCLOSE
# 92 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 93 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BENNIS_4, BennisDojo_EventScript_BennisFinalBattle_Text_1
# 94 "data/maps/BennisDojo/scripts.pory"
	goto_if_set FLAG_SYS_DEFEATED_BRUNO, BennisDojo_EventScript_AsakReturn
# 95 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_BennisFinalBattle_Text_2, MSGBOX_AUTOCLOSE
# 100 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 101 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_AsakReturn::
# 106 "data/maps/BennisDojo/scripts.pory"
	playse SE_DOOR
# 107 "data/maps/BennisDojo/scripts.pory"
	addobject 11
# 108 "data/maps/BennisDojo/scripts.pory"
	clearflag FLAG_HIDE_ASAK_BENNIS_DOJO
# 109 "data/maps/BennisDojo/scripts.pory"
	waitse
# 110 "data/maps/BennisDojo/scripts.pory"
	checkobjectat 8, 5
# 111 "data/maps/BennisDojo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BennisDojo_EventScript_AsakReturnEast
# 112 "data/maps/BennisDojo/scripts.pory"
	checkobjectat 7, 4
# 113 "data/maps/BennisDojo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BennisDojo_EventScript_AsakReturnNorth
# 114 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturns
# 115 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 116 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 117 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 118 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_0, MSGBOX_DEFAULT
# 122 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 123 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 124 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 125 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 126 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 127 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 128 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_1, MSGBOX_DEFAULT
# 130 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 131 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 132 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_2, MSGBOX_DEFAULT
# 136 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 137 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 138 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 139 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_3, MSGBOX_AUTOCLOSE
# 150 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 151 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsOriginalSpot
# 152 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 153 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 154 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 155 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 156 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 157 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_4, MSGBOX_AUTOCLOSE
# 160 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 161 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_AsakReturnEast::
# 166 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsEast
# 167 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 168 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 169 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 170 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 171 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 172 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_0, MSGBOX_DEFAULT
# 176 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 177 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 178 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 179 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 180 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnEast_Text_0, MSGBOX_DEFAULT
# 186 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 187 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 188 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 189 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 190 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnEast_Text_1, MSGBOX_AUTOCLOSE
# 192 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 193 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 194 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 195 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 196 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 197 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnEast_Text_2, MSGBOX_AUTOCLOSE
# 206 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 207 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsOriginalSpotEast
# 208 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 209 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 210 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 211 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 212 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 213 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_4, MSGBOX_AUTOCLOSE
# 216 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 217 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_AsakReturnNorth::
# 222 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturns
# 223 "data/maps/BennisDojo/scripts.pory"
	delay 16
# 224 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 225 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 226 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 227 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 228 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 229 "data/maps/BennisDojo/scripts.pory"
	waitmovement 7
# 230 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_0, MSGBOX_DEFAULT
# 234 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 235 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 236 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 237 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 238 "data/maps/BennisDojo/scripts.pory"
	waitse
# 239 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 240 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterUp
# 241 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 242 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnNorth_Text_0, MSGBOX_DEFAULT
# 244 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 245 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 246 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 247 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnNorth_Text_1, MSGBOX_AUTOCLOSE
# 262 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 263 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsOriginalSpot
# 264 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 265 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 266 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 267 "data/maps/BennisDojo/scripts.pory"
	setobjectxyperm 11, 12, 15
# 268 "data/maps/BennisDojo/scripts.pory"
	special DrawWholeMapView
# 269 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 270 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 271 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 272 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 273 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 274 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_4, MSGBOX_AUTOCLOSE
# 277 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 278 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_NoCheating::
# 283 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_NoCheating_Text_0, MSGBOX_NPC
	end


BennisDojo_EventScript_NoCheatingPanini::
# 289 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_NoCheatingPanini_Text_0, MSGBOX_NPC
	end


BennisDojo_EventScript_BaldyBaldyOverThere::
# 295 "data/maps/BennisDojo/scripts.pory"
	lock
# 296 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_BaldyBaldyOverThere_Text_0, MSGBOX_AUTOCLOSE
# 298 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 299 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_ExpertBelt::
# 304 "data/maps/BennisDojo/scripts.pory"
	lockall
# 305 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_ITEM_BENNIS_DOJO_EXPERT_BELT
# 306 "data/maps/BennisDojo/scripts.pory"
	finditem ITEM_EXPERT_BELT, 1
# 307 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 308 "data/maps/BennisDojo/scripts.pory"
	releaseall
	end


BennisDojo_FocusSash::
# 313 "data/maps/BennisDojo/scripts.pory"
	lockall
# 314 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_ITEM_BENNIS_DOJO_FOCUS_SASH
# 315 "data/maps/BennisDojo/scripts.pory"
	finditem ITEM_FOCUS_SASH, 1
# 316 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 317 "data/maps/BennisDojo/scripts.pory"
	releaseall
	end


DojoBattleTrigger::
# 322 "data/maps/BennisDojo/scripts.pory"
	lock
# 323 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 324 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 325 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 326 "data/maps/BennisDojo/scripts.pory"
	delay 10
# 327 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_0, MSGBOX_AUTOCLOSE
# 328 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 329 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove1
# 330 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 331 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 332 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 333 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak1, MSGBOX_AUTOCLOSE
# 334 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 335 "data/maps/BennisDojo/scripts.pory"
	call BennisDojo_EventScript_AsakBattle
# 336 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_1, MSGBOX_AUTOCLOSE
# 337 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 338 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceup
# 339 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_2, MSGBOX_AUTOCLOSE
# 340 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 341 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 342 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 343 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniMove1
# 344 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 345 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 346 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 347 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceleft
# 348 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 349 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_3, MSGBOX_AUTOCLOSE
# 350 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 351 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak2, MSGBOX_AUTOCLOSE
# 352 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 353 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_4, MSGBOX_AUTOCLOSE
# 354 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 355 "data/maps/BennisDojo/scripts.pory"
	call BennisDojo_EventScript_PaniniBattle
# 356 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_5, MSGBOX_AUTOCLOSE
# 357 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 358 "data/maps/BennisDojo/scripts.pory"
	msgbox AsakPaniniLoss, MSGBOX_AUTOCLOSE
# 359 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 360 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_6, MSGBOX_AUTOCLOSE
# 361 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 362 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 363 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 364 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 365 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceup
# 366 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 367 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 368 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 369 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, faceup
# 370 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 371 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisMove1
# 372 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 373 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove2
# 374 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 375 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak3, MSGBOX_AUTOCLOSE
# 376 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 377 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, facedown
# 378 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 379 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak3_5, MSGBOX_AUTOCLOSE
# 380 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 381 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_7, MSGBOX_AUTOCLOSE
# 383 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 384 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove3
# 385 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 386 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 387 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 388 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak4, MSGBOX_AUTOCLOSE
# 389 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 390 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 391 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 392 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, faceright
# 393 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 394 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_8, MSGBOX_AUTOCLOSE
# 395 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 1
# 396 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 397 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 398 "data/maps/BennisDojo/scripts.pory"
	call BennisBattleStart
	return


Dojo_EarlierAnswerNO::
# 403 "data/maps/BennisDojo/scripts.pory"
	lock
# 404 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 405 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 406 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 407 "data/maps/BennisDojo/scripts.pory"
	delay 10
# 408 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove1
# 409 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 410 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 411 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 412 "data/maps/BennisDojo/scripts.pory"
	msgbox Dojo_EarlierAnswerNO_Text_0, MSGBOX_AUTOCLOSE
# 413 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniMove1
# 414 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 415 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 416 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 417 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_3, MSGBOX_AUTOCLOSE
# 418 "data/maps/BennisDojo/scripts.pory"
	delay 20
# 419 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisMove1
# 420 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 421 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 422 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 423 "data/maps/BennisDojo/scripts.pory"
	call BennisBattleStart
	return


BennisBattleStart::
# 427 "data/maps/BennisDojo/scripts.pory"
	lock
# 428 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisBattleStart_Text_0, MSGBOX_YESNO
# 429 "data/maps/BennisDojo/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BennisBattleStart_2
# 437 "data/maps/BennisDojo/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BennisBattleStart_4
	return

BennisBattleStart_2:
# 430 "data/maps/BennisDojo/scripts.pory"
	msgbox Bennis_Intro, MSGBOX_AUTOCLOSE
# 431 "data/maps/BennisDojo/scripts.pory"
	call BennisDojo_EventScript_BennisBattle1
# 432 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 433 "data/maps/BennisDojo/scripts.pory"
	call BennisEnd
# 434 "data/maps/BennisDojo/scripts.pory"
	release
	end

BennisBattleStart_4:
# 438 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisIfNo, MSGBOX_AUTOCLOSE
# 439 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 440 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisLeave
# 441 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 442 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniLeave
# 443 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 444 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakLeave
# 445 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 446 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerLeaves
# 447 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 448 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisEnd::
# 455 "data/maps/BennisDojo/scripts.pory"
	lock
# 456 "data/maps/BennisDojo/scripts.pory"
	msgbox Bennis2, MSGBOX_AUTOCLOSE
# 457 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 458 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisEnd_Text_0, MSGBOX_AUTOCLOSE
# 459 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 460 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 461 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 462 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak5, MSGBOX_AUTOCLOSE
# 463 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 464 "data/maps/BennisDojo/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 465 "data/maps/BennisDojo/scripts.pory"
	playse SE_FLEE
# 466 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_BENNIS_DOJO_1
# 467 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 2
# 468 "data/maps/BennisDojo/scripts.pory"
	removeobject 1
# 469 "data/maps/BennisDojo/scripts.pory"
	removeobject 2
# 470 "data/maps/BennisDojo/scripts.pory"
	removeobject 3
# 471 "data/maps/BennisDojo/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
	return


BennisDojo_EventScript_AsakBattle::
# 476 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_ASAK, Asak_Outro
# 477 "data/maps/BennisDojo/scripts.pory"
	lock
	return


BennisDojo_EventScript_PaniniBattle::
# 482 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_PANINI, Panini_Outro
# 483 "data/maps/BennisDojo/scripts.pory"
	lock
	return


BennisDojo_EventScript_BennisBattle1::
# 488 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BENNIS_1, Bennis_Outro
# 489 "data/maps/BennisDojo/scripts.pory"
	lock
	return


# 493 "data/maps/BennisDojo/scripts.pory"
exclaim:
# 494 "data/maps/BennisDojo/scripts.pory"
	emote_exclamation_mark
	step_end

# 497 "data/maps/BennisDojo/scripts.pory"
AsakMove1:
# 498 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 498 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 498 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 498 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 499 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 500 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 514 "data/maps/BennisDojo/scripts.pory"
PaniniMove1:
# 515 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 515 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 515 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 515 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 515 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 515 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 515 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 516 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 522 "data/maps/BennisDojo/scripts.pory"
BennisMove1:
# 523 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 523 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 523 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 523 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 523 "data/maps/BennisDojo/scripts.pory"
	walk_down
	step_end

# 558 "data/maps/BennisDojo/scripts.pory"
faceup:
# 559 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_up
	step_end

# 562 "data/maps/BennisDojo/scripts.pory"
faceleft:
# 563 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_left
	step_end

# 566 "data/maps/BennisDojo/scripts.pory"
faceright:
# 567 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_right
	step_end

# 569 "data/maps/BennisDojo/scripts.pory"
facedown:
# 570 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_down
	step_end

# 573 "data/maps/BennisDojo/scripts.pory"
PlayerLeaves:
# 574 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 574 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 574 "data/maps/BennisDojo/scripts.pory"
	walk_down
	step_end

# 577 "data/maps/BennisDojo/scripts.pory"
AsakMove2:
# 578 "data/maps/BennisDojo/scripts.pory"
	walk_fast_up
# 578 "data/maps/BennisDojo/scripts.pory"
	walk_fast_up
# 579 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
	step_end

# 582 "data/maps/BennisDojo/scripts.pory"
AsakMove3:
# 583 "data/maps/BennisDojo/scripts.pory"
	walk_fast_right
# 584 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 584 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 585 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 588 "data/maps/BennisDojo/scripts.pory"
AsakLeave:
# 589 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 590 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 590 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 590 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 590 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 591 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_down
	step_end

# 594 "data/maps/BennisDojo/scripts.pory"
PaniniLeave:
# 595 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 595 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 595 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 595 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 595 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 595 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 595 "data/maps/BennisDojo/scripts.pory"
	walk_up
	step_end

# 598 "data/maps/BennisDojo/scripts.pory"
BennisLeave:
# 599 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 599 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 599 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 599 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 599 "data/maps/BennisDojo/scripts.pory"
	walk_up
	step_end

# 602 "data/maps/BennisDojo/scripts.pory"
BennisDojo_Movement_AsakReturns:
# 603 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 604 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 604 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 604 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 604 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 604 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 604 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 604 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 604 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 604 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 604 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 605 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_left
	step_end

# 608 "data/maps/BennisDojo/scripts.pory"
BennisDojo_Movement_AsakReturnsEast:
# 609 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 609 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 609 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 609 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 609 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 609 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 609 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 609 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 609 "data/maps/BennisDojo/scripts.pory"
	walk_up
	step_end

# 612 "data/maps/BennisDojo/scripts.pory"
BennisDojo_Movement_AsakReturnsOriginalSpot:
# 613 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 613 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 613 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 613 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 613 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 613 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 613 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 613 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 613 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 613 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 614 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 614 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 614 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 614 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 615 "data/maps/BennisDojo/scripts.pory"
	face_down
	step_end

# 618 "data/maps/BennisDojo/scripts.pory"
BennisDojo_Movement_AsakReturnsOriginalSpotEast:
# 619 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 619 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 619 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 619 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 619 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 619 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 619 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 619 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 619 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 620 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 620 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 620 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 620 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 620 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 621 "data/maps/BennisDojo/scripts.pory"
	face_down
	step_end

BennisDojo_EventScript_Bertho_Text_0:
# 34 "data/maps/BennisDojo/scripts.pory"
	.string "You have to beat me first!$"

BennisDojo_EventScript_Bertho_Text_1:
# 34 "data/maps/BennisDojo/scripts.pory"
	.string "I would've won if I was balder…$"

BennisDojo_EventScript_Bertho_Text_2:
# 35 "data/maps/BennisDojo/scripts.pory"
	.string "You got to beat all of us in order\n before you can challenge MASTER BENNIS.$"

BennisDojo_EventScript_Benson_Text_0:
# 43 "data/maps/BennisDojo/scripts.pory"
	.string "You have to beat me next!$"

BennisDojo_EventScript_Benson_Text_1:
# 43 "data/maps/BennisDojo/scripts.pory"
	.string "People and their stupid hair…$"

BennisDojo_EventScript_Benson_Text_2:
# 44 "data/maps/BennisDojo/scripts.pory"
	.string "Just PANINI is left.\n Then you can battle MASTER BENNIS!$"

BennisDojo_EventScript_Panini_Text_0:
# 51 "data/maps/BennisDojo/scripts.pory"
	.string "Panini! Panini nini pani!$"

BennisDojo_EventScript_Panini_Text_1:
# 51 "data/maps/BennisDojo/scripts.pory"
	.string "Panini! Panini panini.$"

BennisDojo_EventScript_Panini_Text_2:
# 52 "data/maps/BennisDojo/scripts.pory"
	.string "Panini!$"

BennisDojo_EventScript_Bennis_Text_0:
# 60 "data/maps/BennisDojo/scripts.pory"
	.string "Hm.\n Those were some good vibrations.\p You're a strong TRAINER, {PLAYER}.\n You're welcome to train here anytime.$"

BennisDojo_EventScript_Asak_Text_0:
# 68 "data/maps/BennisDojo/scripts.pory"
	.string "{PLAYER}, please give LADY ASAKURA my\n  regards the next time you see her.$"

BennisDojo_EventScript_BennisFinalBattle_Text_0:
# 86 "data/maps/BennisDojo/scripts.pory"
	.string "{PLAYER}. I'm glad you showed up for\n a proper challenge of my dojo.\p You've turned into a fine TRAINER.\n I won't hold back this time.\p Let's get some good vibrations\n from this place!$"

BennisDojo_EventScript_BennisFinalBattle_Text_1:
# 93 "data/maps/BennisDojo/scripts.pory"
	.string "Everyone's so mean to me…$"

BennisDojo_EventScript_BennisFinalBattle_Text_2:
# 95 "data/maps/BennisDojo/scripts.pory"
	.string "Hm.\n That was a good battle.\p Thanks again for what you did during\n the ritual.\p You're welcome to train here anytime.$"

BennisDojo_EventScript_AsakReturn_Text_0:
# 118 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: MASTER BENNIS!\n I'm back.\p MASTER BENNIS: Oho.\n ASAK. Welcome back.$"

BennisDojo_EventScript_AsakReturn_Text_1:
# 128 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: {PLAYER}?!\n What are you doing here?$"

BennisDojo_EventScript_AsakReturn_Text_2:
# 132 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm. We battled.\n {PLAYER} had a wonderful victory.\p ASAK: I see… As expected.\n They also beat my brother.$"

BennisDojo_EventScript_AsakReturn_Text_3:
# 139 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Oho. You beat\n BRUNO? That's impressive.\p ASAK: Well, it feels good to be back.\n Any longer there and the old hag\l would've made me help look for a\l successor.\p But who knows? Maybe {PLAYER} can take\n on the role once they're done with\l their travels.\p Well, time to get back to business\n as usual!$"

BennisDojo_EventScript_AsakReturn_Text_4:
# 157 "data/maps/BennisDojo/scripts.pory"
	.string "Hm.\n Well, it was a good battle.\l You're welcome to train here anytime.$"

BennisDojo_EventScript_AsakReturnEast_Text_0:
# 180 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: {PLAYER}?!\n What are you doing here?\p MASTER BENNIS: Hm. We battled.\n {PLAYER} had a wonderful victory.\p ASAK: I see… As expected.\n They also beat my brother.$"

BennisDojo_EventScript_AsakReturnEast_Text_1:
# 190 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Oho. You beat\n BRUNO? That's impressive.$"

BennisDojo_EventScript_AsakReturnEast_Text_2:
# 197 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Well, it feels good to be back.\n Any longer there and the old hag\l would've made me help look for a\l successor.\p But who knows? Maybe {PLAYER} can take\n on the role once they're done with\l their travels.\p Well, time to get back to business\n as usual!$"

BennisDojo_EventScript_AsakReturnNorth_Text_0:
# 242 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: {PLAYER}?!\n What are you doing here?!$"

BennisDojo_EventScript_AsakReturnNorth_Text_1:
# 247 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm. We battled.\n {PLAYER} had a wonderful victory.\p ASAK: I see… As expected.\n They also beat my brother.\p MASTER BENNIS: Oho. BRUNO?\n That's impressive.\p ASAK: Well, it feels good to be back.\n Any longer there and the old hag\l would've made me help look for a\l successor.\p But who knows? Maybe {PLAYER} can take\n on the role once they're done with\l their travels.\p Well, time to get back to business\n as usual!$"

BennisDojo_EventScript_NoCheating_Text_0:
# 283 "data/maps/BennisDojo/scripts.pory"
	.string "What are you doing?\n You have to fight us in order.$"

BennisDojo_EventScript_NoCheatingPanini_Text_0:
# 289 "data/maps/BennisDojo/scripts.pory"
	.string "Panini?\n Papanini pani.$"

BennisDojo_EventScript_BaldyBaldyOverThere_Text_0:
# 296 "data/maps/BennisDojo/scripts.pory"
	.string "Baldy, baldy, over there!\n What's it like to have no hair?$"

DojoBattleTrigger_Text_0:
# 327 "data/maps/BennisDojo/scripts.pory"
	.string "Hey!$"

DojoBattleTrigger_Text_1:
# 336 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Impossible…$"

DojoBattleTrigger_Text_2:
# 339 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI!$"

DojoBattleTrigger_Text_3:
# 349 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Panini?$"

DojoBattleTrigger_Text_4:
# 353 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Panini!$"

DojoBattleTrigger_Text_5:
# 356 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: P-Panini…$"

DojoBattleTrigger_Text_6:
# 360 "data/maps/BennisDojo/scripts.pory"
	.string "What's all this noise?$"

DojoBattleTrigger_Text_7:
# 381 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm.\n  I'll take you on.$"

DojoBattleTrigger_Text_8:
# 394 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Pani!$"

Dojo_EarlierAnswerNO_Text_0:
# 412 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Back again?!$"

BennisBattleStart_Text_0:
# 428 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Are you ready now?$"

BennisEnd_Text_0:
# 458 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: P-Panini?!$"

Asak1::
# 503 "data/maps/BennisDojo/scripts.pory"
	.string "Who are you? Another goofball trainer?\n Didn't you see the sign?\p How rude of you to barge into our dojo\n when MASTER BENNIS is meditating.\p I guess I'll have to teach you a lesson!$"

Asak_Outro::
# 510 "data/maps/BennisDojo/scripts.pory"
	.string "I lost my focus…$"

Panini_Outro::
# 512 "data/maps/BennisDojo/scripts.pory"
	.string "Panini?!$"

Asak2::
# 519 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Show this hooligan what happens\n when you challenge our dojo!$"

AsakPaniniLoss::
# 526 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: WHAT?! Even though I'VE never\n even beaten Panini…$"

Asak3::
# 530 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: MASTER BENNIS! I'm sorry for\n disturbing you.\p This trainer was intruding on\n our dojo.$"

Asak3_5::
# 535 "data/maps/BennisDojo/scripts.pory"
	.string "We tried to get rid of them, but\n I'm ashamed to say we were no match.$"

Asak4::
# 538 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Ha! It's over for you now.\n MASTER BENNIS has NEVER lost!$"

BennisIfNo::
# 541 "data/maps/BennisDojo/scripts.pory"
	.string "Hm.\n Don't keep me waiting too long.$"

Bennis_Intro::
# 544 "data/maps/BennisDojo/scripts.pory"
	.string "Oho. I'm gettin' good vibrations from\n this place.$"

Bennis_Outro::
# 549 "data/maps/BennisDojo/scripts.pory"
	.string "Everyone's so mean to me…$"

Bennis2::
# 551 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm.. Beefy.$"

Asak5::
# 553 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: This can't be…\n Even MASTER BENNIS…\p ASAK: W-We won't forget this\n humiliation!$"
