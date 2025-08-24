BennisDojo_MapScripts::
# 2 "data/maps/BennisDojo/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BennisDojo_OnTransition
	.byte 0


BennisDojo_OnTransition::
# 7 "data/maps/BennisDojo/scripts.pory"
	call_if_unset FLAG_HIDE_ASAK_BENNIS_DOJO, BennisDojo_UpdateAsakPos
# 8 "data/maps/BennisDojo/scripts.pory"
	call_if_defeated TRAINER_BENNIS_4, BennisDojo_UpdateDisciplesPos
# 9 "data/maps/BennisDojo/scripts.pory"
	call_if_set FLAG_HIDE_REMATCH_TRAINERS_BENNIS_DOJO, BennisDojoHideMedicham
	end


BennisDojo_UpdateDisciplesPos::
# 14 "data/maps/BennisDojo/scripts.pory"
	setobjectxyperm 6, 8, 9
# 15 "data/maps/BennisDojo/scripts.pory"
	setobjectxyperm 9, 5, 9
# 16 "data/maps/BennisDojo/scripts.pory"
	setobjectxyperm 8, 3, 14
# 17 "data/maps/BennisDojo/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 18 "data/maps/BennisDojo/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 19 "data/maps/BennisDojo/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_WANDER_AROUND
	return


BennisDojo_UpdateAsakPos::
# 24 "data/maps/BennisDojo/scripts.pory"
	setobjectxyperm 11, 12, 15
	return


BennisDojoHideMedicham::
# 29 "data/maps/BennisDojo/scripts.pory"
	removeobject 10
	return


BennisDojo_EventScript_Bertho::
# 34 "data/maps/BennisDojo/scripts.pory"
	goto_if_defeated TRAINER_BENNIS_4, BennisDojo_EventScript_BaldyBaldyOverThere
# 35 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_single TRAINER_BERTHO, BennisDojo_EventScript_Bertho_Text_0, BennisDojo_EventScript_Bertho_Text_1
# 36 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_Bertho_Text_2, MSGBOX_NPC
	end


BennisDojo_EventScript_Benson::
# 42 "data/maps/BennisDojo/scripts.pory"
	goto_if_defeated TRAINER_BENNIS_4, BennisDojo_EventScript_BaldyBaldyOverThere
# 43 "data/maps/BennisDojo/scripts.pory"
	goto_if_not_defeated TRAINER_BERTHO, BennisDojo_EventScript_NoCheating
# 44 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_single TRAINER_BENSON, BennisDojo_EventScript_Benson_Text_0, BennisDojo_EventScript_Benson_Text_1
# 45 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_Benson_Text_2, MSGBOX_NPC
	end


BennisDojo_EventScript_Panini::
# 51 "data/maps/BennisDojo/scripts.pory"
	goto_if_not_defeated TRAINER_BENSON, BennisDojo_EventScript_NoCheatingPanini
# 52 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_single TRAINER_PANINI_2, BennisDojo_EventScript_Panini_Text_0, BennisDojo_EventScript_Panini_Text_1
# 53 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_Panini_Text_2, MSGBOX_NPC
	end


BennisDojo_EventScript_Bennis::
# 58 "data/maps/BennisDojo/scripts.pory"
	goto_if_not_defeated TRAINER_PANINI_2, BennisDojo_EventScript_NoCheating
# 59 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_TEMP_7
# 60 "data/maps/BennisDojo/scripts.pory"
	goto_if_not_defeated TRAINER_BENNIS_4, BennisDojo_EventScript_BennisFinalBattle
# 61 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_Bennis_Text_0, MSGBOX_NPC
	end


BennisDojo_EventScript_Asak::
# 69 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_Asak_Text_0, MSGBOX_NPC
	end


BennisDojo_EventScript_Medicham::
# 75 "data/maps/BennisDojo/scripts.pory"
	lock
# 76 "data/maps/BennisDojo/scripts.pory"
	faceplayer
# 77 "data/maps/BennisDojo/scripts.pory"
	playmoncry SPECIES_MEDICHAM, CRY_MODE_ENCOUNTER
# 78 "data/maps/BennisDojo/scripts.pory"
	waitmoncry
# 79 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_BennisFinalBattle::
# 84 "data/maps/BennisDojo/scripts.pory"
	lock
# 85 "data/maps/BennisDojo/scripts.pory"
	faceplayer
# 86 "data/maps/BennisDojo/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 87 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_BennisFinalBattle_Text_0, MSGBOX_AUTOCLOSE
# 93 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 94 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BENNIS_4, BennisDojo_EventScript_BennisFinalBattle_Text_1
# 95 "data/maps/BennisDojo/scripts.pory"
	goto_if_set FLAG_SYS_DEFEATED_BRUNO, BennisDojo_EventScript_AsakReturn
# 96 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_BennisFinalBattle_Text_2, MSGBOX_AUTOCLOSE
# 101 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 102 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_AsakReturn::
# 107 "data/maps/BennisDojo/scripts.pory"
	playse SE_DOOR
# 108 "data/maps/BennisDojo/scripts.pory"
	addobject 11
# 109 "data/maps/BennisDojo/scripts.pory"
	clearflag FLAG_HIDE_ASAK_BENNIS_DOJO
# 110 "data/maps/BennisDojo/scripts.pory"
	waitse
# 111 "data/maps/BennisDojo/scripts.pory"
	checkobjectat 8, 5
# 112 "data/maps/BennisDojo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BennisDojo_EventScript_AsakReturnEast
# 113 "data/maps/BennisDojo/scripts.pory"
	checkobjectat 7, 4
# 114 "data/maps/BennisDojo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BennisDojo_EventScript_AsakReturnNorth
# 115 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturns
# 116 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 117 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 118 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 119 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_0, MSGBOX_DEFAULT
# 123 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 124 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 125 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 126 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 127 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 128 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 129 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_1, MSGBOX_DEFAULT
# 131 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 132 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 133 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_2, MSGBOX_DEFAULT
# 137 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 138 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 139 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 140 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_3, MSGBOX_AUTOCLOSE
# 151 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 152 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsOriginalSpot
# 153 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 154 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 155 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 156 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 157 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 158 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_4, MSGBOX_AUTOCLOSE
# 161 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 162 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_AsakReturnEast::
# 167 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsEast
# 168 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 169 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 170 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 171 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 172 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 173 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_0, MSGBOX_DEFAULT
# 177 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 178 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 179 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 180 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 181 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnEast_Text_0, MSGBOX_DEFAULT
# 187 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 188 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 189 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 190 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 191 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnEast_Text_1, MSGBOX_AUTOCLOSE
# 193 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 194 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 195 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 196 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 197 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 198 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnEast_Text_2, MSGBOX_AUTOCLOSE
# 207 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 208 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsOriginalSpotEast
# 209 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 210 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 211 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 212 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 213 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 214 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_4, MSGBOX_AUTOCLOSE
# 217 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 218 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_AsakReturnNorth::
# 223 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturns
# 224 "data/maps/BennisDojo/scripts.pory"
	delay 16
# 225 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 226 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 227 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 228 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 229 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 230 "data/maps/BennisDojo/scripts.pory"
	waitmovement 7
# 231 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_0, MSGBOX_DEFAULT
# 235 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 236 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 237 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 238 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 239 "data/maps/BennisDojo/scripts.pory"
	waitse
# 240 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 241 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterUp
# 242 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 243 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnNorth_Text_0, MSGBOX_DEFAULT
# 245 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 246 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 247 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 248 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnNorth_Text_1, MSGBOX_AUTOCLOSE
# 263 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 264 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsOriginalSpot
# 265 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 266 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 267 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 268 "data/maps/BennisDojo/scripts.pory"
	setobjectxyperm 11, 12, 15
# 269 "data/maps/BennisDojo/scripts.pory"
	special DrawWholeMapView
# 270 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 271 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 272 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 273 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 274 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 275 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_4, MSGBOX_AUTOCLOSE
# 278 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 279 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_NoCheating::
# 284 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_NoCheating_Text_0, MSGBOX_NPC
	end


BennisDojo_EventScript_NoCheatingPanini::
# 290 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_NoCheatingPanini_Text_0, MSGBOX_NPC
	end


BennisDojo_EventScript_BaldyBaldyOverThere::
# 296 "data/maps/BennisDojo/scripts.pory"
	lock
# 297 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_BaldyBaldyOverThere_Text_0, MSGBOX_AUTOCLOSE
# 299 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 300 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_ExpertBelt::
# 305 "data/maps/BennisDojo/scripts.pory"
	lock
# 306 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_ITEM_BENNIS_DOJO_EXPERT_BELT
# 307 "data/maps/BennisDojo/scripts.pory"
	finditem ITEM_EXPERT_BELT, 1
# 308 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 309 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_FocusSash::
# 314 "data/maps/BennisDojo/scripts.pory"
	lock
# 315 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_ITEM_BENNIS_DOJO_FOCUS_SASH
# 316 "data/maps/BennisDojo/scripts.pory"
	finditem ITEM_FOCUS_SASH, 1
# 317 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 318 "data/maps/BennisDojo/scripts.pory"
	release
	end


DojoBattleTrigger::
# 323 "data/maps/BennisDojo/scripts.pory"
	lockall
# 324 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 325 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 326 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 327 "data/maps/BennisDojo/scripts.pory"
	delay 10
# 328 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_0, MSGBOX_AUTOCLOSE
# 329 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 330 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove1
# 331 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 332 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 333 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 334 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak1, MSGBOX_AUTOCLOSE
# 335 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 336 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_ASAK, Asak_Outro
# 337 "data/maps/BennisDojo/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_EASY
	goto_if_eq DojoBattleTrigger_2
DojoBattleTrigger_1:
# 340 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_1, MSGBOX_AUTOCLOSE
# 341 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 342 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceup
# 343 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 344 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_2, MSGBOX_AUTOCLOSE
# 345 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 346 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 347 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 348 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniMove1
# 349 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 350 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 351 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 352 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceleft
# 353 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 354 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_3, MSGBOX_DEFAULT
# 355 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 356 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak2, MSGBOX_DEFAULT
# 357 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 358 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_4, MSGBOX_AUTOCLOSE
# 359 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 360 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_PANINI, Panini_Outro
# 361 "data/maps/BennisDojo/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_EASY
	goto_if_eq DojoBattleTrigger_5
DojoBattleTrigger_4:
# 364 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_5, MSGBOX_DEFAULT
# 365 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 366 "data/maps/BennisDojo/scripts.pory"
	msgbox AsakPaniniLoss, MSGBOX_DEFAULT
# 367 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 368 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_6, MSGBOX_AUTOCLOSE
# 369 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 370 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 371 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 372 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 373 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceup
# 374 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 375 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 376 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 377 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, faceup
# 378 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 379 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisMove1
# 380 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 381 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove2
# 382 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 383 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak3, MSGBOX_AUTOCLOSE
# 384 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 385 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, facedown
# 386 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 387 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak3_5, MSGBOX_DEFAULT
# 388 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 389 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_7, MSGBOX_AUTOCLOSE
# 391 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 392 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove3
# 393 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 394 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 395 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 396 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak4, MSGBOX_AUTOCLOSE
# 397 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 398 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 399 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 400 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, faceright
# 401 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 402 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_8, MSGBOX_AUTOCLOSE
# 403 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 1
# 404 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 405 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 406 "data/maps/BennisDojo/scripts.pory"
	goto BennisBattleStart
	end

DojoBattleTrigger_2:
# 338 "data/maps/BennisDojo/scripts.pory"
	special HealPlayerParty
	goto DojoBattleTrigger_1

DojoBattleTrigger_5:
# 362 "data/maps/BennisDojo/scripts.pory"
	special HealPlayerParty
	goto DojoBattleTrigger_4


Dojo_EarlierAnswerNO::
# 411 "data/maps/BennisDojo/scripts.pory"
	lockall
# 412 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 413 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 414 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 415 "data/maps/BennisDojo/scripts.pory"
	delay 10
# 416 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove1
# 417 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 418 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 419 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 420 "data/maps/BennisDojo/scripts.pory"
	msgbox Dojo_EarlierAnswerNO_Text_0, MSGBOX_AUTOCLOSE
# 421 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniMove1
# 422 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 423 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 424 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 425 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_3, MSGBOX_AUTOCLOSE
# 426 "data/maps/BennisDojo/scripts.pory"
	delay 20
# 427 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisMove1
# 428 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 429 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 430 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 431 "data/maps/BennisDojo/scripts.pory"
	goto BennisBattleStart
	return


BennisBattleStart::
# 435 "data/maps/BennisDojo/scripts.pory"
	lockall
# 436 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisBattleStart_Text_0, MSGBOX_YESNO
# 437 "data/maps/BennisDojo/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BennisBattleStart_2
# 444 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisIfNo, MSGBOX_AUTOCLOSE
# 445 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 446 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisLeave
# 447 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 448 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniLeave
# 449 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 450 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakLeave
# 451 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 452 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerLeaves
# 453 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 454 "data/maps/BennisDojo/scripts.pory"
	warp MAP_DEWFORD_TOWN, 8, 18
# 455 "data/maps/BennisDojo/scripts.pory"
	waitstate
BennisBattleStart_1:
# 457 "data/maps/BennisDojo/scripts.pory"
	releaseall
	end

BennisBattleStart_2:
# 438 "data/maps/BennisDojo/scripts.pory"
	msgbox Bennis_Intro, MSGBOX_AUTOCLOSE
# 439 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BENNIS_1, Bennis_Outro
# 440 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 441 "data/maps/BennisDojo/scripts.pory"
	goto BennisEnd
	goto BennisBattleStart_1


BennisEnd::
# 462 "data/maps/BennisDojo/scripts.pory"
	lockall
# 463 "data/maps/BennisDojo/scripts.pory"
	msgbox Bennis2, MSGBOX_DEFAULT
# 464 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 465 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisEnd_Text_0, MSGBOX_AUTOCLOSE
# 466 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 467 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 468 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 469 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak5, MSGBOX_AUTOCLOSE
# 470 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 471 "data/maps/BennisDojo/scripts.pory"
	playbgm MUS_NONE, FALSE
# 472 "data/maps/BennisDojo/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 473 "data/maps/BennisDojo/scripts.pory"
	playse SE_FLEE
# 474 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_BENNIS_DOJO_1
# 475 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 2
# 476 "data/maps/BennisDojo/scripts.pory"
	fadedefaultbgm
# 477 "data/maps/BennisDojo/scripts.pory"
	removeobject 1
# 478 "data/maps/BennisDojo/scripts.pory"
	removeobject 2
# 479 "data/maps/BennisDojo/scripts.pory"
	removeobject 3
# 480 "data/maps/BennisDojo/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 481 "data/maps/BennisDojo/scripts.pory"
	releaseall
	end


# 485 "data/maps/BennisDojo/scripts.pory"
exclaim:
# 486 "data/maps/BennisDojo/scripts.pory"
	emote_exclamation_mark
	step_end

# 489 "data/maps/BennisDojo/scripts.pory"
AsakMove1:
# 490 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 490 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 490 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 490 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 491 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 492 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 506 "data/maps/BennisDojo/scripts.pory"
PaniniMove1:
# 507 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 507 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 507 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 507 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 507 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 507 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 507 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 508 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 514 "data/maps/BennisDojo/scripts.pory"
BennisMove1:
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
	step_end

# 550 "data/maps/BennisDojo/scripts.pory"
faceup:
# 551 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_up
	step_end

# 554 "data/maps/BennisDojo/scripts.pory"
faceleft:
# 555 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_left
	step_end

# 558 "data/maps/BennisDojo/scripts.pory"
faceright:
# 559 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_right
	step_end

# 561 "data/maps/BennisDojo/scripts.pory"
facedown:
# 562 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_down
	step_end

# 565 "data/maps/BennisDojo/scripts.pory"
PlayerLeaves:
# 566 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 566 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 566 "data/maps/BennisDojo/scripts.pory"
	walk_down
	step_end

# 569 "data/maps/BennisDojo/scripts.pory"
AsakMove2:
# 570 "data/maps/BennisDojo/scripts.pory"
	walk_fast_up
# 570 "data/maps/BennisDojo/scripts.pory"
	walk_fast_up
# 571 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
	step_end

# 574 "data/maps/BennisDojo/scripts.pory"
AsakMove3:
# 575 "data/maps/BennisDojo/scripts.pory"
	walk_fast_right
# 576 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 576 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 577 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 580 "data/maps/BennisDojo/scripts.pory"
AsakLeave:
# 581 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 582 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 582 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 582 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 582 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 583 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_down
	step_end

# 586 "data/maps/BennisDojo/scripts.pory"
PaniniLeave:
# 587 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 587 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 587 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 587 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 587 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 587 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 587 "data/maps/BennisDojo/scripts.pory"
	walk_up
	step_end

# 590 "data/maps/BennisDojo/scripts.pory"
BennisLeave:
# 591 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 591 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 591 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 591 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 591 "data/maps/BennisDojo/scripts.pory"
	walk_up
	step_end

# 594 "data/maps/BennisDojo/scripts.pory"
BennisDojo_Movement_AsakReturns:
# 595 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 596 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 596 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 596 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 596 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 596 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 596 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 596 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 596 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 596 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 596 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 597 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_left
	step_end

# 600 "data/maps/BennisDojo/scripts.pory"
BennisDojo_Movement_AsakReturnsEast:
# 601 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 601 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 601 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 601 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 601 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 601 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 601 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 601 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 601 "data/maps/BennisDojo/scripts.pory"
	walk_up
	step_end

# 604 "data/maps/BennisDojo/scripts.pory"
BennisDojo_Movement_AsakReturnsOriginalSpot:
# 605 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 605 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 605 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 605 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 605 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 605 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 605 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 605 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 605 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 605 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 606 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 606 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 606 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 606 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 607 "data/maps/BennisDojo/scripts.pory"
	face_down
	step_end

# 610 "data/maps/BennisDojo/scripts.pory"
BennisDojo_Movement_AsakReturnsOriginalSpotEast:
# 611 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 611 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 611 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 611 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 611 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 611 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 611 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 611 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 611 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 612 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 612 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 612 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 612 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 612 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 613 "data/maps/BennisDojo/scripts.pory"
	face_down
	step_end

BennisDojo_EventScript_Bertho_Text_0:
# 35 "data/maps/BennisDojo/scripts.pory"
	.string "You have to beat me first!$"

BennisDojo_EventScript_Bertho_Text_1:
# 35 "data/maps/BennisDojo/scripts.pory"
	.string "I would've won if I was balder…$"

BennisDojo_EventScript_Bertho_Text_2:
# 36 "data/maps/BennisDojo/scripts.pory"
	.string "You got to beat all of us in order\n before you can challenge MASTER BENNIS.$"

BennisDojo_EventScript_Benson_Text_0:
# 44 "data/maps/BennisDojo/scripts.pory"
	.string "You have to beat me next!$"

BennisDojo_EventScript_Benson_Text_1:
# 44 "data/maps/BennisDojo/scripts.pory"
	.string "People and their stupid hair…$"

BennisDojo_EventScript_Benson_Text_2:
# 45 "data/maps/BennisDojo/scripts.pory"
	.string "Just PANINI is left.\n Then you can battle MASTER BENNIS!$"

BennisDojo_EventScript_Panini_Text_0:
# 52 "data/maps/BennisDojo/scripts.pory"
	.string "Panini! Panini nini pani!$"

BennisDojo_EventScript_Panini_Text_1:
# 52 "data/maps/BennisDojo/scripts.pory"
	.string "Panini! Panini panini.$"

BennisDojo_EventScript_Panini_Text_2:
# 53 "data/maps/BennisDojo/scripts.pory"
	.string "Panini!$"

BennisDojo_EventScript_Bennis_Text_0:
# 61 "data/maps/BennisDojo/scripts.pory"
	.string "Hm.\n Those were some good vibrations.\p You're a strong TRAINER, {PLAYER}.\n You're welcome to train here anytime.$"

BennisDojo_EventScript_Asak_Text_0:
# 69 "data/maps/BennisDojo/scripts.pory"
	.string "{PLAYER}, please give LADY ASAKURA my\n  regards the next time you see her.$"

BennisDojo_EventScript_BennisFinalBattle_Text_0:
# 87 "data/maps/BennisDojo/scripts.pory"
	.string "{PLAYER}. I'm glad you showed up for\n a proper challenge of my dojo.\p You've turned into a fine TRAINER.\n I won't hold back this time.\p Let's get some good vibrations\n from this place!$"

BennisDojo_EventScript_BennisFinalBattle_Text_1:
# 94 "data/maps/BennisDojo/scripts.pory"
	.string "Everyone's so mean to me…$"

BennisDojo_EventScript_BennisFinalBattle_Text_2:
# 96 "data/maps/BennisDojo/scripts.pory"
	.string "Hm.\n That was a good battle.\p Thanks again for what you did during\n the ritual.\p You're welcome to train here anytime.$"

BennisDojo_EventScript_AsakReturn_Text_0:
# 119 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: MASTER BENNIS!\n I'm back.\p MASTER BENNIS: Oho.\n ASAK. Welcome back.$"

BennisDojo_EventScript_AsakReturn_Text_1:
# 129 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: {PLAYER}?!\n What are you doing here?$"

BennisDojo_EventScript_AsakReturn_Text_2:
# 133 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm. We battled.\n {PLAYER} had a wonderful victory.\p ASAK: I see… As expected.\n They also beat my brother.$"

BennisDojo_EventScript_AsakReturn_Text_3:
# 140 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Oho. You beat\n BRUNO? That's impressive.\p ASAK: Well, it feels good to be back.\n Any longer there and the old hag\l would've made me help look for a\l successor.\p But who knows? Maybe {PLAYER} can take\n on the role once they're done with\l their travels.\p Well, time to get back to business\n as usual!$"

BennisDojo_EventScript_AsakReturn_Text_4:
# 158 "data/maps/BennisDojo/scripts.pory"
	.string "Hm.\n Well, it was a good battle.\l You're welcome to train here anytime.$"

BennisDojo_EventScript_AsakReturnEast_Text_0:
# 181 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: {PLAYER}?!\n What are you doing here?\p MASTER BENNIS: Hm. We battled.\n {PLAYER} had a wonderful victory.\p ASAK: I see… As expected.\n They also beat my brother.$"

BennisDojo_EventScript_AsakReturnEast_Text_1:
# 191 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Oho. You beat\n BRUNO? That's impressive.$"

BennisDojo_EventScript_AsakReturnEast_Text_2:
# 198 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Well, it feels good to be back.\n Any longer there and the old hag\l would've made me help look for a\l successor.\p But who knows? Maybe {PLAYER} can take\n on the role once they're done with\l their travels.\p Well, time to get back to business\n as usual!$"

BennisDojo_EventScript_AsakReturnNorth_Text_0:
# 243 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: {PLAYER}?!\n What are you doing here?!$"

BennisDojo_EventScript_AsakReturnNorth_Text_1:
# 248 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm. We battled.\n {PLAYER} had a wonderful victory.\p ASAK: I see… As expected.\n They also beat my brother.\p MASTER BENNIS: Oho. BRUNO?\n That's impressive.\p ASAK: Well, it feels good to be back.\n Any longer there and the old hag\l would've made me help look for a\l successor.\p But who knows? Maybe {PLAYER} can take\n on the role once they're done with\l their travels.\p Well, time to get back to business\n as usual!$"

BennisDojo_EventScript_NoCheating_Text_0:
# 284 "data/maps/BennisDojo/scripts.pory"
	.string "What are you doing?\n You have to fight us in order.$"

BennisDojo_EventScript_NoCheatingPanini_Text_0:
# 290 "data/maps/BennisDojo/scripts.pory"
	.string "Panini?\n Papanini pani.$"

BennisDojo_EventScript_BaldyBaldyOverThere_Text_0:
# 297 "data/maps/BennisDojo/scripts.pory"
	.string "Baldy, baldy, over there!\n What's it like to have no hair?$"

DojoBattleTrigger_Text_0:
# 328 "data/maps/BennisDojo/scripts.pory"
	.string "Hey!$"

DojoBattleTrigger_Text_1:
# 340 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Impossible…$"

DojoBattleTrigger_Text_2:
# 344 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI!$"

DojoBattleTrigger_Text_3:
# 354 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Panini?$"

DojoBattleTrigger_Text_4:
# 358 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Panini!$"

DojoBattleTrigger_Text_5:
# 364 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: P-Panini…$"

DojoBattleTrigger_Text_6:
# 368 "data/maps/BennisDojo/scripts.pory"
	.string "???: What's all this noise?$"

DojoBattleTrigger_Text_7:
# 389 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm.\n  I'll take you on.$"

DojoBattleTrigger_Text_8:
# 402 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Pani!$"

Dojo_EarlierAnswerNO_Text_0:
# 420 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Back again?!$"

BennisBattleStart_Text_0:
# 436 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Are you ready now?$"

BennisEnd_Text_0:
# 465 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: P-Panini?!$"

Asak1::
# 495 "data/maps/BennisDojo/scripts.pory"
	.string "Who are you? Another goofball TRAINER?\n Didn't you see the sign?\p How rude of you to barge into our dojo\n when MASTER BENNIS is meditating.\p I guess I'll have to teach you a lesson!$"

Asak_Outro::
# 502 "data/maps/BennisDojo/scripts.pory"
	.string "I lost my focus…$"

Panini_Outro::
# 504 "data/maps/BennisDojo/scripts.pory"
	.string "Panini?!$"

Asak2::
# 511 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Show this hooligan what happens\n when you challenge our dojo!$"

AsakPaniniLoss::
# 518 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: WHAT?! Even though I'VE never\n even beaten Panini…$"

Asak3::
# 522 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: MASTER BENNIS! I'm sorry for\n disturbing you.\p This TRAINER was intruding on\n our dojo.$"

Asak3_5::
# 527 "data/maps/BennisDojo/scripts.pory"
	.string "We tried to get rid of them, but\n I'm ashamed to say we were no match.$"

Asak4::
# 530 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Ha! It's over for you now.\n MASTER BENNIS has NEVER lost!$"

BennisIfNo::
# 533 "data/maps/BennisDojo/scripts.pory"
	.string "Hm.\n Don't keep me waiting too long.$"

Bennis_Intro::
# 536 "data/maps/BennisDojo/scripts.pory"
	.string "Oho. I'm gettin' good vibrations from\n this place.$"

Bennis_Outro::
# 541 "data/maps/BennisDojo/scripts.pory"
	.string "Everyone's so mean to me…$"

Bennis2::
# 543 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm.. Beefy.$"

Asak5::
# 545 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: This can't be…\n Even MASTER BENNIS…\p ASAK: W-We won't forget this\n humiliation!$"
