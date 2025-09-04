BennisDojo_MapScripts::
# 2 "data/maps/BennisDojo/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BennisDojo_OnTransition
# 3 "data/maps/BennisDojo/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BennisDojo_OnResume
	.byte 0


BennisDojo_OnTransition::
# 8 "data/maps/BennisDojo/scripts.pory"
	call_if_unset FLAG_HIDE_ASAK_BENNIS_DOJO, BennisDojo_UpdateAsakPos
# 9 "data/maps/BennisDojo/scripts.pory"
	call_if_defeated TRAINER_BENNIS_4, BennisDojo_UpdateDisciplesPos
# 10 "data/maps/BennisDojo/scripts.pory"
	call_if_le VAR_BENNIS_DOJO_STATE, 4, BennisDojoHideMedicham
# 11 "data/maps/BennisDojo/scripts.pory"
	call_if_eq VAR_BENNIS_DOJO_STATE, 5, BennisDojoUpdateMusic
	end


BennisDojo_OnResume::
# 16 "data/maps/BennisDojo/scripts.pory"
	call_if_set FLAG_TEMP_5, BennisDojoHideMedicham
	end


BennisDojo_UpdateDisciplesPos::
# 21 "data/maps/BennisDojo/scripts.pory"
	setobjectxyperm 6, 8, 9
# 22 "data/maps/BennisDojo/scripts.pory"
	setobjectxyperm 9, 5, 9
# 23 "data/maps/BennisDojo/scripts.pory"
	setobjectxyperm 8, 3, 14
# 24 "data/maps/BennisDojo/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 25 "data/maps/BennisDojo/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 26 "data/maps/BennisDojo/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_WANDER_AROUND
	return


BennisDojo_UpdateAsakPos::
# 31 "data/maps/BennisDojo/scripts.pory"
	setobjectxyperm 11, 12, 15
	return


BennisDojoHideMedicham::
# 36 "data/maps/BennisDojo/scripts.pory"
	removeobject 10
# 37 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_TEMP_7
	return


BennisDojoUpdateMusic::
# 42 "data/maps/BennisDojo/scripts.pory"
	savebgm MUS_HG_GYM
	return


BennisDojo_EventScript_Bertho::
# 47 "data/maps/BennisDojo/scripts.pory"
	goto_if_defeated TRAINER_BENNIS_4, BennisDojo_EventScript_BaldyBaldyOverThere
# 48 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_single TRAINER_BERTHO, BennisDojo_EventScript_Bertho_Text_0, BennisDojo_EventScript_Bertho_Text_1
# 49 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_Bertho_Text_2, MSGBOX_NPC
	end


BennisDojo_EventScript_Benson::
# 55 "data/maps/BennisDojo/scripts.pory"
	goto_if_defeated TRAINER_BENNIS_4, BennisDojo_EventScript_BaldyBaldyOverThere
# 56 "data/maps/BennisDojo/scripts.pory"
	goto_if_not_defeated TRAINER_BERTHO, BennisDojo_EventScript_NoCheating
# 57 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_single TRAINER_BENSON, BennisDojo_EventScript_Benson_Text_0, BennisDojo_EventScript_Benson_Text_1
# 58 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_Benson_Text_2, MSGBOX_NPC
	end


BennisDojo_EventScript_Panini::
# 64 "data/maps/BennisDojo/scripts.pory"
	goto_if_not_defeated TRAINER_BENSON, BennisDojo_EventScript_NoCheatingPanini
# 65 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_single TRAINER_PANINI_2, BennisDojo_EventScript_Panini_Text_0, BennisDojo_EventScript_Panini_Text_1
# 66 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_Panini_Text_2, MSGBOX_NPC
	end


BennisDojo_EventScript_Bennis::
# 71 "data/maps/BennisDojo/scripts.pory"
	goto_if_not_defeated TRAINER_PANINI_2, BennisDojo_EventScript_NoCheating
# 72 "data/maps/BennisDojo/scripts.pory"
	goto_if_not_defeated TRAINER_BENNIS_4, BennisDojo_EventScript_BennisFinalBattle
# 73 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_Bennis_Text_0, MSGBOX_NPC
	end


BennisDojo_EventScript_Asak::
# 81 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_Asak_Text_0, MSGBOX_NPC
	end


BennisDojo_EventScript_Medicham::
# 87 "data/maps/BennisDojo/scripts.pory"
	lock
# 88 "data/maps/BennisDojo/scripts.pory"
	faceplayer
# 89 "data/maps/BennisDojo/scripts.pory"
	playmoncry SPECIES_MEDICHAM, CRY_MODE_ENCOUNTER
# 90 "data/maps/BennisDojo/scripts.pory"
	waitmoncry
# 91 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_BennisFinalBattle::
# 96 "data/maps/BennisDojo/scripts.pory"
	lock
# 97 "data/maps/BennisDojo/scripts.pory"
	faceplayer
# 98 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_TEMP_5
# 99 "data/maps/BennisDojo/scripts.pory"
	playbgm MUS_KIMONO_DANCE, FALSE
# 100 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_BennisFinalBattle_Text_0, MSGBOX_AUTOCLOSE
# 106 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 107 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BENNIS_4, BennisDojo_EventScript_BennisFinalBattle_Text_1
# 108 "data/maps/BennisDojo/scripts.pory"
	goto_if_set FLAG_SYS_DEFEATED_BRUNO, BennisDojo_EventScript_AsakReturn
# 109 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_BennisFinalBattle_Text_2, MSGBOX_AUTOCLOSE
# 114 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 115 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 6
# 116 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_AsakReturn::
# 121 "data/maps/BennisDojo/scripts.pory"
	playse SE_DOOR
# 122 "data/maps/BennisDojo/scripts.pory"
	addobject 11
# 123 "data/maps/BennisDojo/scripts.pory"
	clearflag FLAG_HIDE_ASAK_BENNIS_DOJO
# 124 "data/maps/BennisDojo/scripts.pory"
	waitse
# 125 "data/maps/BennisDojo/scripts.pory"
	checkobjectat 8, 5
# 126 "data/maps/BennisDojo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BennisDojo_EventScript_AsakReturnEast
# 127 "data/maps/BennisDojo/scripts.pory"
	checkobjectat 7, 4
# 128 "data/maps/BennisDojo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BennisDojo_EventScript_AsakReturnNorth
# 129 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturns
# 130 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 131 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 132 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 133 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_0, MSGBOX_DEFAULT
# 137 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 138 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 139 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 140 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 141 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 142 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 143 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_1, MSGBOX_DEFAULT
# 145 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 146 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 147 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_2, MSGBOX_DEFAULT
# 151 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 152 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 153 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 154 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_3, MSGBOX_AUTOCLOSE
# 165 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 166 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsOriginalSpot
# 167 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 168 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 169 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 170 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 171 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 172 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_4, MSGBOX_AUTOCLOSE
# 175 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 176 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 6
# 177 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_AsakReturnEast::
# 182 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsEast
# 183 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 184 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 185 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 186 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 187 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 188 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_0, MSGBOX_DEFAULT
# 192 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 193 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 194 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 195 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 196 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnEast_Text_0, MSGBOX_DEFAULT
# 202 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 203 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 204 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 205 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 206 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnEast_Text_1, MSGBOX_AUTOCLOSE
# 208 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 209 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 210 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 211 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 212 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 213 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnEast_Text_2, MSGBOX_AUTOCLOSE
# 222 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 223 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsOriginalSpotEast
# 224 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 225 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 226 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 227 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 228 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 229 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_4, MSGBOX_AUTOCLOSE
# 232 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 233 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 6
# 234 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_AsakReturnNorth::
# 239 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturns
# 240 "data/maps/BennisDojo/scripts.pory"
	delay 16
# 241 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 242 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 243 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 244 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 245 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 246 "data/maps/BennisDojo/scripts.pory"
	waitmovement 7
# 247 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_0, MSGBOX_DEFAULT
# 251 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 252 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 253 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 254 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 255 "data/maps/BennisDojo/scripts.pory"
	waitse
# 256 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 257 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterUp
# 258 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 259 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnNorth_Text_0, MSGBOX_DEFAULT
# 261 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 262 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 263 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 264 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnNorth_Text_1, MSGBOX_AUTOCLOSE
# 279 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 280 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsOriginalSpot
# 281 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 282 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 283 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 284 "data/maps/BennisDojo/scripts.pory"
	setobjectxyperm 11, 12, 15
# 285 "data/maps/BennisDojo/scripts.pory"
	special DrawWholeMapView
# 286 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 287 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 288 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 289 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 290 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 291 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_4, MSGBOX_AUTOCLOSE
# 294 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 295 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 6
# 296 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_NoCheating::
# 301 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_NoCheating_Text_0, MSGBOX_NPC
	end


BennisDojo_EventScript_NoCheatingPanini::
# 307 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_NoCheatingPanini_Text_0, MSGBOX_NPC
	end


BennisDojo_EventScript_BaldyBaldyOverThere::
# 313 "data/maps/BennisDojo/scripts.pory"
	lock
# 314 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_BaldyBaldyOverThere_Text_0, MSGBOX_AUTOCLOSE
# 316 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 317 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_ExpertBelt::
# 322 "data/maps/BennisDojo/scripts.pory"
	lock
# 323 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_ITEM_BENNIS_DOJO_EXPERT_BELT
# 324 "data/maps/BennisDojo/scripts.pory"
	finditem ITEM_EXPERT_BELT, 1
# 325 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 326 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_FocusSash::
# 331 "data/maps/BennisDojo/scripts.pory"
	lock
# 332 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_ITEM_BENNIS_DOJO_FOCUS_SASH
# 333 "data/maps/BennisDojo/scripts.pory"
	finditem ITEM_FOCUS_SASH, 1
# 334 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 335 "data/maps/BennisDojo/scripts.pory"
	release
	end


DojoBattleTrigger::
# 340 "data/maps/BennisDojo/scripts.pory"
	lockall
# 341 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 342 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 343 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 344 "data/maps/BennisDojo/scripts.pory"
	delay 10
# 345 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_0, MSGBOX_AUTOCLOSE
# 346 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 347 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove1
# 348 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 349 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 350 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 351 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak1, MSGBOX_AUTOCLOSE
# 352 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 353 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_ASAK, Asak_Outro
# 354 "data/maps/BennisDojo/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_EASY
	goto_if_eq DojoBattleTrigger_2
DojoBattleTrigger_1:
# 357 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_1, MSGBOX_AUTOCLOSE
# 358 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 359 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceup
# 360 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 361 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_2, MSGBOX_AUTOCLOSE
# 362 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 363 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 364 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 365 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniMove1
# 366 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 367 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 368 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 369 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceleft
# 370 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 371 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_3, MSGBOX_DEFAULT
# 372 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 373 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak2, MSGBOX_DEFAULT
# 374 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 375 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_4, MSGBOX_AUTOCLOSE
# 376 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 377 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_PANINI, Panini_Outro
# 378 "data/maps/BennisDojo/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_EASY
	goto_if_eq DojoBattleTrigger_5
DojoBattleTrigger_4:
# 381 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_5, MSGBOX_DEFAULT
# 382 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 383 "data/maps/BennisDojo/scripts.pory"
	msgbox AsakPaniniLoss, MSGBOX_DEFAULT
# 384 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 385 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_6, MSGBOX_AUTOCLOSE
# 386 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 387 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 388 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 389 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 390 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceup
# 391 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 392 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 393 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 394 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, faceup
# 395 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 396 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisMove1
# 397 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 398 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove2
# 399 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 400 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak3, MSGBOX_AUTOCLOSE
# 401 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 402 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, facedown
# 403 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 404 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak3_5, MSGBOX_DEFAULT
# 405 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 406 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_7, MSGBOX_AUTOCLOSE
# 408 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 409 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove3
# 410 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 411 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 412 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 413 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak4, MSGBOX_AUTOCLOSE
# 414 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 415 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 416 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 417 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, faceright
# 418 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 419 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_8, MSGBOX_AUTOCLOSE
# 420 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 1
# 421 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 422 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 423 "data/maps/BennisDojo/scripts.pory"
	goto BennisBattleStart
	end

DojoBattleTrigger_2:
# 355 "data/maps/BennisDojo/scripts.pory"
	special HealPlayerParty
	goto DojoBattleTrigger_1

DojoBattleTrigger_5:
# 379 "data/maps/BennisDojo/scripts.pory"
	special HealPlayerParty
	goto DojoBattleTrigger_4


Dojo_EarlierAnswerNO::
# 428 "data/maps/BennisDojo/scripts.pory"
	lockall
# 429 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 430 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 431 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 432 "data/maps/BennisDojo/scripts.pory"
	delay 10
# 433 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove1
# 434 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 435 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 436 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 437 "data/maps/BennisDojo/scripts.pory"
	msgbox Dojo_EarlierAnswerNO_Text_0, MSGBOX_AUTOCLOSE
# 438 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniMove1
# 439 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 440 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 441 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 442 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_3, MSGBOX_AUTOCLOSE
# 443 "data/maps/BennisDojo/scripts.pory"
	delay 20
# 444 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisMove1
# 445 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 446 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 447 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 448 "data/maps/BennisDojo/scripts.pory"
	goto BennisBattleStart
	end


BennisBattleStart::
# 453 "data/maps/BennisDojo/scripts.pory"
	lockall
# 454 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisBattleStart_Text_0, MSGBOX_YESNO
# 455 "data/maps/BennisDojo/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BennisBattleStart_2
# 462 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisIfNo, MSGBOX_AUTOCLOSE
# 463 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 464 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisLeave
# 465 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 466 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniLeave
# 467 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 468 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakLeave
# 469 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 470 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerLeaves
# 471 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 472 "data/maps/BennisDojo/scripts.pory"
	warp MAP_DEWFORD_TOWN, 8, 18
# 473 "data/maps/BennisDojo/scripts.pory"
	waitstate
BennisBattleStart_1:
# 475 "data/maps/BennisDojo/scripts.pory"
	releaseall
	end

BennisBattleStart_2:
# 456 "data/maps/BennisDojo/scripts.pory"
	msgbox Bennis_Intro, MSGBOX_AUTOCLOSE
# 457 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BENNIS_1, Bennis_Outro
# 458 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 459 "data/maps/BennisDojo/scripts.pory"
	goto BennisEnd
	goto BennisBattleStart_1


BennisEnd::
# 480 "data/maps/BennisDojo/scripts.pory"
	lockall
# 481 "data/maps/BennisDojo/scripts.pory"
	msgbox Bennis2, MSGBOX_DEFAULT
# 482 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 483 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisEnd_Text_0, MSGBOX_AUTOCLOSE
# 484 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 485 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 486 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 487 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak5, MSGBOX_AUTOCLOSE
# 488 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 489 "data/maps/BennisDojo/scripts.pory"
	fadeoutbgm 0
# 490 "data/maps/BennisDojo/scripts.pory"
	delay 16
# 491 "data/maps/BennisDojo/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 492 "data/maps/BennisDojo/scripts.pory"
	playse SE_FLEE
# 493 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_BENNIS_DOJO_1
# 494 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 2
# 495 "data/maps/BennisDojo/scripts.pory"
	removeobject 1
# 496 "data/maps/BennisDojo/scripts.pory"
	removeobject 2
# 497 "data/maps/BennisDojo/scripts.pory"
	removeobject 3
# 498 "data/maps/BennisDojo/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 499 "data/maps/BennisDojo/scripts.pory"
	delay 24
# 500 "data/maps/BennisDojo/scripts.pory"
	fadeinbgm 0
# 501 "data/maps/BennisDojo/scripts.pory"
	releaseall
	end


# 505 "data/maps/BennisDojo/scripts.pory"
exclaim:
# 506 "data/maps/BennisDojo/scripts.pory"
	emote_exclamation_mark
	step_end

# 509 "data/maps/BennisDojo/scripts.pory"
AsakMove1:
# 510 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 510 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 510 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 510 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 511 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 512 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 526 "data/maps/BennisDojo/scripts.pory"
PaniniMove1:
# 527 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 527 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 527 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 527 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 527 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 527 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 527 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 528 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 534 "data/maps/BennisDojo/scripts.pory"
BennisMove1:
# 535 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 535 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 535 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 535 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 535 "data/maps/BennisDojo/scripts.pory"
	walk_down
	step_end

# 570 "data/maps/BennisDojo/scripts.pory"
faceup:
# 571 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_up
	step_end

# 574 "data/maps/BennisDojo/scripts.pory"
faceleft:
# 575 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_left
	step_end

# 578 "data/maps/BennisDojo/scripts.pory"
faceright:
# 579 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_right
	step_end

# 581 "data/maps/BennisDojo/scripts.pory"
facedown:
# 582 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_down
	step_end

# 585 "data/maps/BennisDojo/scripts.pory"
PlayerLeaves:
# 586 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 586 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 586 "data/maps/BennisDojo/scripts.pory"
	walk_down
	step_end

# 589 "data/maps/BennisDojo/scripts.pory"
AsakMove2:
# 590 "data/maps/BennisDojo/scripts.pory"
	walk_fast_up
# 590 "data/maps/BennisDojo/scripts.pory"
	walk_fast_up
# 591 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
	step_end

# 594 "data/maps/BennisDojo/scripts.pory"
AsakMove3:
# 595 "data/maps/BennisDojo/scripts.pory"
	walk_fast_right
# 596 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 596 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 597 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 600 "data/maps/BennisDojo/scripts.pory"
AsakLeave:
# 601 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 602 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 602 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 602 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 602 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 603 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_down
	step_end

# 606 "data/maps/BennisDojo/scripts.pory"
PaniniLeave:
# 607 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 607 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 607 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 607 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 607 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 607 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 607 "data/maps/BennisDojo/scripts.pory"
	walk_up
	step_end

# 610 "data/maps/BennisDojo/scripts.pory"
BennisLeave:
# 611 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 611 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 611 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 611 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 611 "data/maps/BennisDojo/scripts.pory"
	walk_up
	step_end

# 614 "data/maps/BennisDojo/scripts.pory"
BennisDojo_Movement_AsakReturns:
# 615 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 616 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 616 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 616 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 616 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 616 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 616 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 616 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 616 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 616 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 616 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 617 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_left
	step_end

# 620 "data/maps/BennisDojo/scripts.pory"
BennisDojo_Movement_AsakReturnsEast:
# 621 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 621 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 621 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 621 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 621 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 621 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 621 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 621 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 621 "data/maps/BennisDojo/scripts.pory"
	walk_up
	step_end

# 624 "data/maps/BennisDojo/scripts.pory"
BennisDojo_Movement_AsakReturnsOriginalSpot:
# 625 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 625 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 625 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 625 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 625 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 625 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 625 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 625 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 625 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 625 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 626 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 626 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 626 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 626 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 627 "data/maps/BennisDojo/scripts.pory"
	face_down
	step_end

# 630 "data/maps/BennisDojo/scripts.pory"
BennisDojo_Movement_AsakReturnsOriginalSpotEast:
# 631 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 631 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 631 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 631 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 631 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 631 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 631 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 631 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 631 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 632 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 632 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 632 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 632 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 632 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 633 "data/maps/BennisDojo/scripts.pory"
	face_down
	step_end

BennisDojo_EventScript_Bertho_Text_0:
# 48 "data/maps/BennisDojo/scripts.pory"
	.string "You have to beat me first!$"

BennisDojo_EventScript_Bertho_Text_1:
# 48 "data/maps/BennisDojo/scripts.pory"
	.string "I would've won if I was balder…$"

BennisDojo_EventScript_Bertho_Text_2:
# 49 "data/maps/BennisDojo/scripts.pory"
	.string "You got to beat all of us in order\n before you can challenge MASTER BENNIS.$"

BennisDojo_EventScript_Benson_Text_0:
# 57 "data/maps/BennisDojo/scripts.pory"
	.string "You have to beat me next!$"

BennisDojo_EventScript_Benson_Text_1:
# 57 "data/maps/BennisDojo/scripts.pory"
	.string "People and their stupid hair…$"

BennisDojo_EventScript_Benson_Text_2:
# 58 "data/maps/BennisDojo/scripts.pory"
	.string "Just PANINI is left.\n Then you can battle MASTER BENNIS!$"

BennisDojo_EventScript_Panini_Text_0:
# 65 "data/maps/BennisDojo/scripts.pory"
	.string "Panini! Panini nini pani!$"

BennisDojo_EventScript_Panini_Text_1:
# 65 "data/maps/BennisDojo/scripts.pory"
	.string "Panini! Panini panini.$"

BennisDojo_EventScript_Panini_Text_2:
# 66 "data/maps/BennisDojo/scripts.pory"
	.string "Panini!$"

BennisDojo_EventScript_Bennis_Text_0:
# 73 "data/maps/BennisDojo/scripts.pory"
	.string "Hm.\n Those were some good vibrations.\p You're a strong TRAINER, {PLAYER}.\n You're welcome to train here anytime.$"

BennisDojo_EventScript_Asak_Text_0:
# 81 "data/maps/BennisDojo/scripts.pory"
	.string "{PLAYER}, please give LADY ASAKURA my\n  regards the next time you see her.$"

BennisDojo_EventScript_BennisFinalBattle_Text_0:
# 100 "data/maps/BennisDojo/scripts.pory"
	.string "{PLAYER}. I'm glad you showed up for\n a proper challenge of my dojo.\p You've turned into a fine TRAINER.\n I won't hold back this time.\p Let's get some good vibrations\n from this place!$"

BennisDojo_EventScript_BennisFinalBattle_Text_1:
# 107 "data/maps/BennisDojo/scripts.pory"
	.string "Everyone's so mean to me…$"

BennisDojo_EventScript_BennisFinalBattle_Text_2:
# 109 "data/maps/BennisDojo/scripts.pory"
	.string "Hm.\n That was a good battle.\p Thanks again for what you did during\n the ritual.\p You're welcome to train here anytime.$"

BennisDojo_EventScript_AsakReturn_Text_0:
# 133 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: MASTER BENNIS!\n I'm back.\p MASTER BENNIS: Oho.\n ASAK. Welcome back.$"

BennisDojo_EventScript_AsakReturn_Text_1:
# 143 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: {PLAYER}?!\n What are you doing here?$"

BennisDojo_EventScript_AsakReturn_Text_2:
# 147 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm. We battled.\n {PLAYER} had a wonderful victory.\p ASAK: I see… As expected.\n They also beat my brother.$"

BennisDojo_EventScript_AsakReturn_Text_3:
# 154 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Oho. You beat\n BRUNO? That's impressive.\p ASAK: Well, it feels good to be back.\n Any longer there and the old hag\l would've made me help look for a\l successor.\p But who knows? Maybe {PLAYER} can take\n on the role once they're done with\l their travels.\p Well, time to get back to business\n as usual!$"

BennisDojo_EventScript_AsakReturn_Text_4:
# 172 "data/maps/BennisDojo/scripts.pory"
	.string "Hm.\n Well, it was a good battle.\l You're welcome to train here anytime.$"

BennisDojo_EventScript_AsakReturnEast_Text_0:
# 196 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: {PLAYER}?!\n What are you doing here?\p MASTER BENNIS: Hm. We battled.\n {PLAYER} had a wonderful victory.\p ASAK: I see… As expected.\n They also beat my brother.$"

BennisDojo_EventScript_AsakReturnEast_Text_1:
# 206 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Oho. You beat\n BRUNO? That's impressive.$"

BennisDojo_EventScript_AsakReturnEast_Text_2:
# 213 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Well, it feels good to be back.\n Any longer there and the old hag\l would've made me help look for a\l successor.\p But who knows? Maybe {PLAYER} can take\n on the role once they're done with\l their travels.\p Well, time to get back to business\n as usual!$"

BennisDojo_EventScript_AsakReturnNorth_Text_0:
# 259 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: {PLAYER}?!\n What are you doing here?!$"

BennisDojo_EventScript_AsakReturnNorth_Text_1:
# 264 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm. We battled.\n {PLAYER} had a wonderful victory.\p ASAK: I see… As expected.\n They also beat my brother.\p MASTER BENNIS: Oho. BRUNO?\n That's impressive.\p ASAK: Well, it feels good to be back.\n Any longer there and the old hag\l would've made me help look for a\l successor.\p But who knows? Maybe {PLAYER} can take\n on the role once they're done with\l their travels.\p Well, time to get back to business\n as usual!$"

BennisDojo_EventScript_NoCheating_Text_0:
# 301 "data/maps/BennisDojo/scripts.pory"
	.string "What are you doing?\n You have to fight us in order.$"

BennisDojo_EventScript_NoCheatingPanini_Text_0:
# 307 "data/maps/BennisDojo/scripts.pory"
	.string "Panini?\n Papanini panini.$"

BennisDojo_EventScript_BaldyBaldyOverThere_Text_0:
# 314 "data/maps/BennisDojo/scripts.pory"
	.string "Baldy, baldy, over there!\n What's it like to have no hair?$"

DojoBattleTrigger_Text_0:
# 345 "data/maps/BennisDojo/scripts.pory"
	.string "Hey!$"

DojoBattleTrigger_Text_1:
# 357 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Impossible…$"

DojoBattleTrigger_Text_2:
# 361 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI!$"

DojoBattleTrigger_Text_3:
# 371 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Panini?$"

DojoBattleTrigger_Text_4:
# 375 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Panini!$"

DojoBattleTrigger_Text_5:
# 381 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: P-Panini…$"

DojoBattleTrigger_Text_6:
# 385 "data/maps/BennisDojo/scripts.pory"
	.string "???: What's all this noise?$"

DojoBattleTrigger_Text_7:
# 406 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm.\n  I'll take you on.$"

DojoBattleTrigger_Text_8:
# 419 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Pani!$"

Dojo_EarlierAnswerNO_Text_0:
# 437 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Back again?!$"

BennisBattleStart_Text_0:
# 454 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Are you ready now?$"

BennisEnd_Text_0:
# 483 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: P-Panini?!$"

Asak1::
# 515 "data/maps/BennisDojo/scripts.pory"
	.string "Who are you? Another goofball TRAINER?\n Didn't you see the sign?\p How rude of you to barge into our dojo\n when MASTER BENNIS is meditating.\p I guess I'll have to teach you a lesson!$"

Asak_Outro::
# 522 "data/maps/BennisDojo/scripts.pory"
	.string "I lost my focus…$"

Panini_Outro::
# 524 "data/maps/BennisDojo/scripts.pory"
	.string "Panini?!$"

Asak2::
# 531 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Show this hooligan what happens\n when you challenge our dojo!$"

AsakPaniniLoss::
# 538 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: WHAT?! Even though I'VE never\n even beaten Panini…$"

Asak3::
# 542 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: MASTER BENNIS! I'm sorry for\n disturbing you.\p This TRAINER was intruding on\n our dojo.$"

Asak3_5::
# 547 "data/maps/BennisDojo/scripts.pory"
	.string "We tried to get rid of them, but\n I'm ashamed to say we were no match.$"

Asak4::
# 550 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Ha! It's over for you now.\n MASTER BENNIS has NEVER lost!$"

BennisIfNo::
# 553 "data/maps/BennisDojo/scripts.pory"
	.string "Hm.\n Don't keep me waiting too long.$"

Bennis_Intro::
# 556 "data/maps/BennisDojo/scripts.pory"
	.string "Oho. I'm gettin' good vibrations from\n this place.$"

Bennis_Outro::
# 561 "data/maps/BennisDojo/scripts.pory"
	.string "Everyone's so mean to me…$"

Bennis2::
# 563 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm.. Beefy.$"

Asak5::
# 565 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: This can't be…\n Even MASTER BENNIS…\p ASAK: W-We won't forget this\n humiliation!$"
