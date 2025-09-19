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
	setflag FLAG_SYS_DYNAMIC_LEVELS
# 43 "data/maps/BennisDojo/scripts.pory"
	savebgm MUS_HG_GYM
	return


BennisDojo_EventScript_Bertho::
# 48 "data/maps/BennisDojo/scripts.pory"
	goto_if_defeated TRAINER_BENNIS_4, BennisDojo_EventScript_BaldyBaldyOverThere
# 49 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_single TRAINER_BERTHO, BennisDojo_EventScript_Bertho_Text_0, BennisDojo_EventScript_Bertho_Text_1
# 50 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_Bertho_Text_2, MSGBOX_NPC
	end


BennisDojo_EventScript_Benson::
# 56 "data/maps/BennisDojo/scripts.pory"
	goto_if_defeated TRAINER_BENNIS_4, BennisDojo_EventScript_BaldyBaldyOverThere
# 57 "data/maps/BennisDojo/scripts.pory"
	goto_if_not_defeated TRAINER_BERTHO, BennisDojo_EventScript_NoCheating
# 58 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_single TRAINER_BENSON, BennisDojo_EventScript_Benson_Text_0, BennisDojo_EventScript_Benson_Text_1
# 59 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_Benson_Text_2, MSGBOX_NPC
	end


BennisDojo_EventScript_Panini::
# 65 "data/maps/BennisDojo/scripts.pory"
	goto_if_not_defeated TRAINER_BENSON, BennisDojo_EventScript_NoCheatingPanini
# 66 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_single TRAINER_PANINI_2, BennisDojo_EventScript_Panini_Text_0, BennisDojo_EventScript_Panini_Text_1
# 67 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_Panini_Text_2, MSGBOX_NPC
	end


BennisDojo_EventScript_Bennis::
# 72 "data/maps/BennisDojo/scripts.pory"
	goto_if_not_defeated TRAINER_PANINI_2, BennisDojo_EventScript_NoCheating
# 73 "data/maps/BennisDojo/scripts.pory"
	goto_if_not_defeated TRAINER_BENNIS_4, BennisDojo_EventScript_BennisFinalBattle
# 74 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_Bennis_Text_0, MSGBOX_NPC
	end


BennisDojo_EventScript_Asak::
# 82 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_Asak_Text_0, MSGBOX_NPC
	end


BennisDojo_EventScript_Medicham::
# 88 "data/maps/BennisDojo/scripts.pory"
	lock
# 89 "data/maps/BennisDojo/scripts.pory"
	faceplayer
# 90 "data/maps/BennisDojo/scripts.pory"
	playmoncry SPECIES_MEDICHAM, CRY_MODE_ENCOUNTER
# 91 "data/maps/BennisDojo/scripts.pory"
	waitmoncry
# 92 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_BennisFinalBattle::
# 97 "data/maps/BennisDojo/scripts.pory"
	lock
# 98 "data/maps/BennisDojo/scripts.pory"
	faceplayer
# 99 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_TEMP_5
# 100 "data/maps/BennisDojo/scripts.pory"
	playbgm MUS_KIMONO_DANCE, FALSE
# 101 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_BennisFinalBattle_Text_0, MSGBOX_AUTOCLOSE
# 107 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 108 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BENNIS_4, BennisDojo_EventScript_BennisFinalBattle_Text_1
# 109 "data/maps/BennisDojo/scripts.pory"
	goto_if_set FLAG_SYS_DEFEATED_BRUNO, BennisDojo_EventScript_AsakReturn
# 110 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_BennisFinalBattle_Text_2, MSGBOX_AUTOCLOSE
# 115 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 116 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 6
# 117 "data/maps/BennisDojo/scripts.pory"
	clearflag FLAG_SYS_DYNAMIC_LEVELS
# 118 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_AsakReturn::
# 123 "data/maps/BennisDojo/scripts.pory"
	playse SE_DOOR
# 124 "data/maps/BennisDojo/scripts.pory"
	addobject 11
# 125 "data/maps/BennisDojo/scripts.pory"
	clearflag FLAG_HIDE_ASAK_BENNIS_DOJO
# 126 "data/maps/BennisDojo/scripts.pory"
	waitse
# 127 "data/maps/BennisDojo/scripts.pory"
	checkobjectat 8, 5
# 128 "data/maps/BennisDojo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BennisDojo_EventScript_AsakReturnEast
# 129 "data/maps/BennisDojo/scripts.pory"
	checkobjectat 7, 4
# 130 "data/maps/BennisDojo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BennisDojo_EventScript_AsakReturnNorth
# 131 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturns
# 132 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 133 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 134 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 135 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_0, MSGBOX_DEFAULT
# 139 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 140 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 141 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 142 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 143 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 144 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 145 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_1, MSGBOX_DEFAULT
# 147 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 148 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 149 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_2, MSGBOX_DEFAULT
# 153 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 154 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 155 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 156 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_3, MSGBOX_AUTOCLOSE
# 167 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 168 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsOriginalSpot
# 169 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 170 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 171 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 172 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 173 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 174 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_4, MSGBOX_AUTOCLOSE
# 177 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 178 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 6
# 179 "data/maps/BennisDojo/scripts.pory"
	clearflag FLAG_SYS_DYNAMIC_LEVELS
# 180 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_HIDE_ASAK_BALDESIAN_FOREST_DOJO
# 181 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_AsakReturnEast::
# 186 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsEast
# 187 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 188 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 189 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 190 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 191 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 192 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_0, MSGBOX_DEFAULT
# 196 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 197 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 198 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 199 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 200 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnEast_Text_0, MSGBOX_DEFAULT
# 206 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 207 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 208 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 209 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 210 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnEast_Text_1, MSGBOX_AUTOCLOSE
# 212 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 213 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 214 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 215 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 216 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 217 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnEast_Text_2, MSGBOX_AUTOCLOSE
# 226 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 227 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsOriginalSpotEast
# 228 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 229 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 230 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 231 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 232 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 233 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_4, MSGBOX_AUTOCLOSE
# 236 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 237 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 6
# 238 "data/maps/BennisDojo/scripts.pory"
	clearflag FLAG_SYS_DYNAMIC_LEVELS
# 239 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_HIDE_ASAK_BALDESIAN_FOREST_DOJO
# 240 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_AsakReturnNorth::
# 245 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturns
# 246 "data/maps/BennisDojo/scripts.pory"
	delay 16
# 247 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 248 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 249 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 250 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 251 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 252 "data/maps/BennisDojo/scripts.pory"
	waitmovement 7
# 253 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_0, MSGBOX_DEFAULT
# 257 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 258 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 259 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 260 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 261 "data/maps/BennisDojo/scripts.pory"
	waitse
# 262 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 263 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterUp
# 264 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 265 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnNorth_Text_0, MSGBOX_DEFAULT
# 267 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 268 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 269 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 270 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnNorth_Text_1, MSGBOX_AUTOCLOSE
# 285 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 286 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsOriginalSpot
# 287 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 288 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 289 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 290 "data/maps/BennisDojo/scripts.pory"
	setobjectxyperm 11, 12, 15
# 291 "data/maps/BennisDojo/scripts.pory"
	special DrawWholeMapView
# 292 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 293 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 294 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 295 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 296 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 297 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_4, MSGBOX_AUTOCLOSE
# 300 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 301 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 6
# 302 "data/maps/BennisDojo/scripts.pory"
	clearflag FLAG_SYS_DYNAMIC_LEVELS
# 303 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_HIDE_ASAK_BALDESIAN_FOREST_DOJO
# 304 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_NoCheating::
# 309 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_NoCheating_Text_0, MSGBOX_NPC
	end


BennisDojo_EventScript_NoCheatingPanini::
# 315 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_NoCheatingPanini_Text_0, MSGBOX_NPC
	end


BennisDojo_EventScript_BaldyBaldyOverThere::
# 321 "data/maps/BennisDojo/scripts.pory"
	lock
# 322 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_BaldyBaldyOverThere_Text_0, MSGBOX_AUTOCLOSE
# 324 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 325 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_ExpertBelt::
# 330 "data/maps/BennisDojo/scripts.pory"
	lock
# 331 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_ITEM_BENNIS_DOJO_EXPERT_BELT
# 332 "data/maps/BennisDojo/scripts.pory"
	finditem ITEM_EXPERT_BELT, 1
# 333 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 334 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_FocusSash::
# 339 "data/maps/BennisDojo/scripts.pory"
	lock
# 340 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_ITEM_BENNIS_DOJO_FOCUS_SASH
# 341 "data/maps/BennisDojo/scripts.pory"
	finditem ITEM_FOCUS_SASH, 1
# 342 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 343 "data/maps/BennisDojo/scripts.pory"
	release
	end


DojoBattleTrigger::
# 348 "data/maps/BennisDojo/scripts.pory"
	lockall
# 349 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 350 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 351 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 352 "data/maps/BennisDojo/scripts.pory"
	delay 10
# 353 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_0, MSGBOX_AUTOCLOSE
# 354 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 355 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove1
# 356 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 357 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 358 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 359 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak1, MSGBOX_AUTOCLOSE
# 360 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 361 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_ASAK, Asak_Outro
# 362 "data/maps/BennisDojo/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_EASY
	goto_if_eq DojoBattleTrigger_2
DojoBattleTrigger_1:
# 365 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_1, MSGBOX_AUTOCLOSE
# 366 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 367 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceup
# 368 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 369 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_2, MSGBOX_AUTOCLOSE
# 370 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 371 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 372 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 373 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniMove1
# 374 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 375 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 376 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 377 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceleft
# 378 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 379 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_3, MSGBOX_DEFAULT
# 380 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 381 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak2, MSGBOX_DEFAULT
# 382 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 383 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_4, MSGBOX_AUTOCLOSE
# 384 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 385 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_PANINI, Panini_Outro
# 386 "data/maps/BennisDojo/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_EASY
	goto_if_eq DojoBattleTrigger_5
DojoBattleTrigger_4:
# 389 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_5, MSGBOX_DEFAULT
# 390 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 391 "data/maps/BennisDojo/scripts.pory"
	msgbox AsakPaniniLoss, MSGBOX_DEFAULT
# 392 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 393 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_6, MSGBOX_AUTOCLOSE
# 394 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 395 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 396 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 397 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 398 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceup
# 399 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 400 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 401 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 402 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, faceup
# 403 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 404 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisMove1
# 405 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 406 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove2
# 407 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 408 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak3, MSGBOX_AUTOCLOSE
# 409 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 410 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, facedown
# 411 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 412 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak3_5, MSGBOX_DEFAULT
# 413 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 414 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_7, MSGBOX_AUTOCLOSE
# 416 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 417 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove3
# 418 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 419 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 420 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 421 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak4, MSGBOX_AUTOCLOSE
# 422 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 423 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 424 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 425 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, faceright
# 426 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 427 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_8, MSGBOX_AUTOCLOSE
# 428 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 1
# 429 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 430 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 431 "data/maps/BennisDojo/scripts.pory"
	goto BennisBattleStart
	end

DojoBattleTrigger_2:
# 363 "data/maps/BennisDojo/scripts.pory"
	special HealPlayerParty
	goto DojoBattleTrigger_1

DojoBattleTrigger_5:
# 387 "data/maps/BennisDojo/scripts.pory"
	special HealPlayerParty
	goto DojoBattleTrigger_4


Dojo_EarlierAnswerNO::
# 436 "data/maps/BennisDojo/scripts.pory"
	lockall
# 437 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 438 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 439 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 440 "data/maps/BennisDojo/scripts.pory"
	delay 10
# 441 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove1
# 442 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 443 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 444 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 445 "data/maps/BennisDojo/scripts.pory"
	msgbox Dojo_EarlierAnswerNO_Text_0, MSGBOX_AUTOCLOSE
# 446 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniMove1
# 447 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 448 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 449 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 450 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_3, MSGBOX_AUTOCLOSE
# 451 "data/maps/BennisDojo/scripts.pory"
	delay 20
# 452 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisMove1
# 453 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 454 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 455 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 456 "data/maps/BennisDojo/scripts.pory"
	goto BennisBattleStart
	end


BennisBattleStart::
# 461 "data/maps/BennisDojo/scripts.pory"
	lockall
# 462 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisBattleStart_Text_0, MSGBOX_YESNO
# 463 "data/maps/BennisDojo/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BennisBattleStart_2
# 470 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisIfNo, MSGBOX_AUTOCLOSE
# 471 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 472 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisLeave
# 473 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 474 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniLeave
# 475 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 476 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakLeave
# 477 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 478 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerLeaves
# 479 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 480 "data/maps/BennisDojo/scripts.pory"
	warp MAP_DEWFORD_TOWN, 8, 18
# 481 "data/maps/BennisDojo/scripts.pory"
	waitstate
BennisBattleStart_1:
# 483 "data/maps/BennisDojo/scripts.pory"
	releaseall
	end

BennisBattleStart_2:
# 464 "data/maps/BennisDojo/scripts.pory"
	msgbox Bennis_Intro, MSGBOX_AUTOCLOSE
# 465 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BENNIS_1, Bennis_Outro
# 466 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 467 "data/maps/BennisDojo/scripts.pory"
	goto BennisEnd
	goto BennisBattleStart_1


BennisEnd::
# 488 "data/maps/BennisDojo/scripts.pory"
	lockall
# 489 "data/maps/BennisDojo/scripts.pory"
	msgbox Bennis2, MSGBOX_DEFAULT
# 490 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 491 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisEnd_Text_0, MSGBOX_AUTOCLOSE
# 492 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 493 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 494 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 495 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak5, MSGBOX_AUTOCLOSE
# 496 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 497 "data/maps/BennisDojo/scripts.pory"
	fadeoutbgm 0
# 498 "data/maps/BennisDojo/scripts.pory"
	delay 16
# 499 "data/maps/BennisDojo/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 500 "data/maps/BennisDojo/scripts.pory"
	playse SE_FLEE
# 501 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_BENNIS_DOJO_1
# 502 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 2
# 503 "data/maps/BennisDojo/scripts.pory"
	removeobject 1
# 504 "data/maps/BennisDojo/scripts.pory"
	removeobject 2
# 505 "data/maps/BennisDojo/scripts.pory"
	removeobject 3
# 506 "data/maps/BennisDojo/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 507 "data/maps/BennisDojo/scripts.pory"
	delay 24
# 508 "data/maps/BennisDojo/scripts.pory"
	fadeinbgm 0
# 509 "data/maps/BennisDojo/scripts.pory"
	releaseall
	end


# 513 "data/maps/BennisDojo/scripts.pory"
exclaim:
# 514 "data/maps/BennisDojo/scripts.pory"
	emote_exclamation_mark
	step_end

# 517 "data/maps/BennisDojo/scripts.pory"
AsakMove1:
# 518 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 518 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 518 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 518 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 519 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 520 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 534 "data/maps/BennisDojo/scripts.pory"
PaniniMove1:
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
# 535 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 535 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 536 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 542 "data/maps/BennisDojo/scripts.pory"
BennisMove1:
# 543 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 543 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 543 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 543 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 543 "data/maps/BennisDojo/scripts.pory"
	walk_down
	step_end

# 578 "data/maps/BennisDojo/scripts.pory"
faceup:
# 579 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_up
	step_end

# 582 "data/maps/BennisDojo/scripts.pory"
faceleft:
# 583 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_left
	step_end

# 586 "data/maps/BennisDojo/scripts.pory"
faceright:
# 587 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_right
	step_end

# 589 "data/maps/BennisDojo/scripts.pory"
facedown:
# 590 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_down
	step_end

# 593 "data/maps/BennisDojo/scripts.pory"
PlayerLeaves:
# 594 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 594 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 594 "data/maps/BennisDojo/scripts.pory"
	walk_down
	step_end

# 597 "data/maps/BennisDojo/scripts.pory"
AsakMove2:
# 598 "data/maps/BennisDojo/scripts.pory"
	walk_fast_up
# 598 "data/maps/BennisDojo/scripts.pory"
	walk_fast_up
# 599 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
	step_end

# 602 "data/maps/BennisDojo/scripts.pory"
AsakMove3:
# 603 "data/maps/BennisDojo/scripts.pory"
	walk_fast_right
# 604 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 604 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 605 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 608 "data/maps/BennisDojo/scripts.pory"
AsakLeave:
# 609 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 610 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 610 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 610 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 610 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 611 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_down
	step_end

# 614 "data/maps/BennisDojo/scripts.pory"
PaniniLeave:
# 615 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 615 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 615 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 615 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 615 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 615 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 615 "data/maps/BennisDojo/scripts.pory"
	walk_up
	step_end

# 618 "data/maps/BennisDojo/scripts.pory"
BennisLeave:
# 619 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 619 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 619 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 619 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 619 "data/maps/BennisDojo/scripts.pory"
	walk_up
	step_end

# 622 "data/maps/BennisDojo/scripts.pory"
BennisDojo_Movement_AsakReturns:
# 623 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 624 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 624 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 624 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 624 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 624 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 624 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 624 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 624 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 624 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 624 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 625 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_left
	step_end

# 628 "data/maps/BennisDojo/scripts.pory"
BennisDojo_Movement_AsakReturnsEast:
# 629 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 629 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 629 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 629 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 629 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 629 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 629 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 629 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 629 "data/maps/BennisDojo/scripts.pory"
	walk_up
	step_end

# 632 "data/maps/BennisDojo/scripts.pory"
BennisDojo_Movement_AsakReturnsOriginalSpot:
# 633 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 633 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 633 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 633 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 633 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 633 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 633 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 633 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 633 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 633 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 634 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 634 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 634 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 634 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 635 "data/maps/BennisDojo/scripts.pory"
	face_down
	step_end

# 638 "data/maps/BennisDojo/scripts.pory"
BennisDojo_Movement_AsakReturnsOriginalSpotEast:
# 639 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 639 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 639 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 639 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 639 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 639 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 639 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 639 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 639 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 640 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 640 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 640 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 640 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 640 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 641 "data/maps/BennisDojo/scripts.pory"
	face_down
	step_end

BennisDojo_EventScript_Bertho_Text_0:
# 49 "data/maps/BennisDojo/scripts.pory"
	.string "You have to beat me first!$"

BennisDojo_EventScript_Bertho_Text_1:
# 49 "data/maps/BennisDojo/scripts.pory"
	.string "I would've won if I was balder…$"

BennisDojo_EventScript_Bertho_Text_2:
# 50 "data/maps/BennisDojo/scripts.pory"
	.string "You got to beat all of us in order\n before you can challenge MASTER BENNIS.$"

BennisDojo_EventScript_Benson_Text_0:
# 58 "data/maps/BennisDojo/scripts.pory"
	.string "You have to beat me next!$"

BennisDojo_EventScript_Benson_Text_1:
# 58 "data/maps/BennisDojo/scripts.pory"
	.string "People and their stupid hair…$"

BennisDojo_EventScript_Benson_Text_2:
# 59 "data/maps/BennisDojo/scripts.pory"
	.string "Just PANINI is left.\n Then you can battle MASTER BENNIS!$"

BennisDojo_EventScript_Panini_Text_0:
# 66 "data/maps/BennisDojo/scripts.pory"
	.string "Panini! Panini nini pani!$"

BennisDojo_EventScript_Panini_Text_1:
# 66 "data/maps/BennisDojo/scripts.pory"
	.string "Panini! Panini panini.$"

BennisDojo_EventScript_Panini_Text_2:
# 67 "data/maps/BennisDojo/scripts.pory"
	.string "Panini!$"

BennisDojo_EventScript_Bennis_Text_0:
# 74 "data/maps/BennisDojo/scripts.pory"
	.string "Hm.\n Those were some good vibrations.\p You're a strong TRAINER, {PLAYER}.\n You're welcome to train here anytime.$"

BennisDojo_EventScript_Asak_Text_0:
# 82 "data/maps/BennisDojo/scripts.pory"
	.string "{PLAYER}, please give LADY ASAKURA my\n  regards the next time you see her.$"

BennisDojo_EventScript_BennisFinalBattle_Text_0:
# 101 "data/maps/BennisDojo/scripts.pory"
	.string "{PLAYER}. I'm glad you showed up for\n a proper challenge of my dojo.\p You've turned into a fine TRAINER.\n I won't hold back this time.\p Let's get some good vibrations\n from this place!$"

BennisDojo_EventScript_BennisFinalBattle_Text_1:
# 108 "data/maps/BennisDojo/scripts.pory"
	.string "Everyone's so mean to me…$"

BennisDojo_EventScript_BennisFinalBattle_Text_2:
# 110 "data/maps/BennisDojo/scripts.pory"
	.string "Hm.\n That was a good battle.\p Thanks again for what you did during\n the ritual.\p You're welcome to train here anytime.$"

BennisDojo_EventScript_AsakReturn_Text_0:
# 135 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: MASTER BENNIS!\n I'm back.\p MASTER BENNIS: Oho.\n ASAK. Welcome back.$"

BennisDojo_EventScript_AsakReturn_Text_1:
# 145 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: {PLAYER}?!\n What are you doing here?$"

BennisDojo_EventScript_AsakReturn_Text_2:
# 149 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm. We battled.\n {PLAYER} had a wonderful victory.\p ASAK: I see… As expected.\n They also beat my brother.$"

BennisDojo_EventScript_AsakReturn_Text_3:
# 156 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Oho. You beat\n BRUNO? That's impressive.\p ASAK: Well, it feels good to be back.\n Any longer there and the old hag\l would've made me help look for a\l successor.\p But who knows? Maybe {PLAYER} can take\n on the role once they're done with\l their travels.\p Well, time to get back to business\n as usual!$"

BennisDojo_EventScript_AsakReturn_Text_4:
# 174 "data/maps/BennisDojo/scripts.pory"
	.string "Hm.\n Well, it was a good battle.\l You're welcome to train here anytime.$"

BennisDojo_EventScript_AsakReturnEast_Text_0:
# 200 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: {PLAYER}?!\n What are you doing here?\p MASTER BENNIS: Hm. We battled.\n {PLAYER} had a wonderful victory.\p ASAK: I see… As expected.\n They also beat my brother.$"

BennisDojo_EventScript_AsakReturnEast_Text_1:
# 210 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Oho. You beat\n BRUNO? That's impressive.$"

BennisDojo_EventScript_AsakReturnEast_Text_2:
# 217 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Well, it feels good to be back.\n Any longer there and the old hag\l would've made me help look for a\l successor.\p But who knows? Maybe {PLAYER} can take\n on the role once they're done with\l their travels.\p Well, time to get back to business\n as usual!$"

BennisDojo_EventScript_AsakReturnNorth_Text_0:
# 265 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: {PLAYER}?!\n What are you doing here?!$"

BennisDojo_EventScript_AsakReturnNorth_Text_1:
# 270 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm. We battled.\n {PLAYER} had a wonderful victory.\p ASAK: I see… As expected.\n They also beat my brother.\p MASTER BENNIS: Oho. BRUNO?\n That's impressive.\p ASAK: Well, it feels good to be back.\n Any longer there and the old hag\l would've made me help look for a\l successor.\p But who knows? Maybe {PLAYER} can take\n on the role once they're done with\l their travels.\p Well, time to get back to business\n as usual!$"

BennisDojo_EventScript_NoCheating_Text_0:
# 309 "data/maps/BennisDojo/scripts.pory"
	.string "What are you doing?\n You have to fight us in order.$"

BennisDojo_EventScript_NoCheatingPanini_Text_0:
# 315 "data/maps/BennisDojo/scripts.pory"
	.string "Panini?\n Papanini panini.$"

BennisDojo_EventScript_BaldyBaldyOverThere_Text_0:
# 322 "data/maps/BennisDojo/scripts.pory"
	.string "Baldy, baldy, over there!\n What's it like to have no hair?$"

DojoBattleTrigger_Text_0:
# 353 "data/maps/BennisDojo/scripts.pory"
	.string "Hey!$"

DojoBattleTrigger_Text_1:
# 365 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Impossible…$"

DojoBattleTrigger_Text_2:
# 369 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI!$"

DojoBattleTrigger_Text_3:
# 379 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Panini?$"

DojoBattleTrigger_Text_4:
# 383 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Panini!$"

DojoBattleTrigger_Text_5:
# 389 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: P-Panini…$"

DojoBattleTrigger_Text_6:
# 393 "data/maps/BennisDojo/scripts.pory"
	.string "???: What's all this noise?$"

DojoBattleTrigger_Text_7:
# 414 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm.\n  I'll take you on.$"

DojoBattleTrigger_Text_8:
# 427 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Pani!$"

Dojo_EarlierAnswerNO_Text_0:
# 445 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Back again?!$"

BennisBattleStart_Text_0:
# 462 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Are you ready now?$"

BennisEnd_Text_0:
# 491 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: P-Panini?!$"

Asak1::
# 523 "data/maps/BennisDojo/scripts.pory"
	.string "Who are you? Another goofball TRAINER?\n Didn't you see the sign?\p How rude of you to barge into our dojo\n when MASTER BENNIS is meditating.\p I guess I'll have to teach you a lesson!$"

Asak_Outro::
# 530 "data/maps/BennisDojo/scripts.pory"
	.string "I lost my focus…$"

Panini_Outro::
# 532 "data/maps/BennisDojo/scripts.pory"
	.string "Panini?!$"

Asak2::
# 539 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Show this hooligan what happens\n when you challenge our dojo!$"

AsakPaniniLoss::
# 546 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: WHAT?! Even though I'VE never\n even beaten Panini…$"

Asak3::
# 550 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: MASTER BENNIS! I'm sorry for\n disturbing you.\p This TRAINER was intruding on\n our dojo.$"

Asak3_5::
# 555 "data/maps/BennisDojo/scripts.pory"
	.string "We tried to get rid of them, but\n I'm ashamed to say we were no match.$"

Asak4::
# 558 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Ha! It's over for you now.\n MASTER BENNIS has NEVER lost!$"

BennisIfNo::
# 561 "data/maps/BennisDojo/scripts.pory"
	.string "Hm.\n Don't keep me waiting too long.$"

Bennis_Intro::
# 564 "data/maps/BennisDojo/scripts.pory"
	.string "Oho. I'm gettin' good vibrations from\n this place.$"

Bennis_Outro::
# 569 "data/maps/BennisDojo/scripts.pory"
	.string "Everyone's so mean to me…$"

Bennis2::
# 571 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm… Beefy.$"

Asak5::
# 573 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: This can't be…\n Even MASTER BENNIS…\p ASAK: W-We won't forget this\n humiliation!$"
