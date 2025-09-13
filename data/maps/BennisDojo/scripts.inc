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
	setflag FLAG_HIDE_ASAK_BALDESIAN_FOREST_DOJO
# 178 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_AsakReturnEast::
# 183 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsEast
# 184 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 185 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 186 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 187 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 188 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 189 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_0, MSGBOX_DEFAULT
# 193 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 194 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 195 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 196 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 197 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnEast_Text_0, MSGBOX_DEFAULT
# 203 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 204 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 205 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 206 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 207 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnEast_Text_1, MSGBOX_AUTOCLOSE
# 209 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 210 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 211 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 212 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 213 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 214 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnEast_Text_2, MSGBOX_AUTOCLOSE
# 223 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 224 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsOriginalSpotEast
# 225 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 226 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 227 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 228 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 229 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 230 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_4, MSGBOX_AUTOCLOSE
# 233 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 234 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 6
# 235 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_HIDE_ASAK_BALDESIAN_FOREST_DOJO
# 236 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_AsakReturnNorth::
# 241 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturns
# 242 "data/maps/BennisDojo/scripts.pory"
	delay 16
# 243 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 244 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 245 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 246 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 247 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 248 "data/maps/BennisDojo/scripts.pory"
	waitmovement 7
# 249 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_0, MSGBOX_DEFAULT
# 253 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 254 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 255 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 256 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 257 "data/maps/BennisDojo/scripts.pory"
	waitse
# 258 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 259 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterUp
# 260 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 261 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnNorth_Text_0, MSGBOX_DEFAULT
# 263 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 264 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 265 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 266 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnNorth_Text_1, MSGBOX_AUTOCLOSE
# 281 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 282 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsOriginalSpot
# 283 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 284 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 285 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 286 "data/maps/BennisDojo/scripts.pory"
	setobjectxyperm 11, 12, 15
# 287 "data/maps/BennisDojo/scripts.pory"
	special DrawWholeMapView
# 288 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 289 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 290 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 291 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 292 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 293 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_4, MSGBOX_AUTOCLOSE
# 296 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 297 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 6
# 298 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_HIDE_ASAK_BALDESIAN_FOREST_DOJO
# 299 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_NoCheating::
# 304 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_NoCheating_Text_0, MSGBOX_NPC
	end


BennisDojo_EventScript_NoCheatingPanini::
# 310 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_NoCheatingPanini_Text_0, MSGBOX_NPC
	end


BennisDojo_EventScript_BaldyBaldyOverThere::
# 316 "data/maps/BennisDojo/scripts.pory"
	lock
# 317 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_BaldyBaldyOverThere_Text_0, MSGBOX_AUTOCLOSE
# 319 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 320 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_ExpertBelt::
# 325 "data/maps/BennisDojo/scripts.pory"
	lock
# 326 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_ITEM_BENNIS_DOJO_EXPERT_BELT
# 327 "data/maps/BennisDojo/scripts.pory"
	finditem ITEM_EXPERT_BELT, 1
# 328 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 329 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_FocusSash::
# 334 "data/maps/BennisDojo/scripts.pory"
	lock
# 335 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_ITEM_BENNIS_DOJO_FOCUS_SASH
# 336 "data/maps/BennisDojo/scripts.pory"
	finditem ITEM_FOCUS_SASH, 1
# 337 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 338 "data/maps/BennisDojo/scripts.pory"
	release
	end


DojoBattleTrigger::
# 343 "data/maps/BennisDojo/scripts.pory"
	lockall
# 344 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 345 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 346 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 347 "data/maps/BennisDojo/scripts.pory"
	delay 10
# 348 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_0, MSGBOX_AUTOCLOSE
# 349 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 350 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove1
# 351 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 352 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 353 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 354 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak1, MSGBOX_AUTOCLOSE
# 355 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 356 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_ASAK, Asak_Outro
# 357 "data/maps/BennisDojo/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_EASY
	goto_if_eq DojoBattleTrigger_2
DojoBattleTrigger_1:
# 360 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_1, MSGBOX_AUTOCLOSE
# 361 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 362 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceup
# 363 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 364 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_2, MSGBOX_AUTOCLOSE
# 365 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 366 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 367 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 368 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniMove1
# 369 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 370 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 371 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 372 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceleft
# 373 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 374 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_3, MSGBOX_DEFAULT
# 375 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 376 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak2, MSGBOX_DEFAULT
# 377 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 378 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_4, MSGBOX_AUTOCLOSE
# 379 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 380 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_PANINI, Panini_Outro
# 381 "data/maps/BennisDojo/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_EASY
	goto_if_eq DojoBattleTrigger_5
DojoBattleTrigger_4:
# 384 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_5, MSGBOX_DEFAULT
# 385 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 386 "data/maps/BennisDojo/scripts.pory"
	msgbox AsakPaniniLoss, MSGBOX_DEFAULT
# 387 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 388 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_6, MSGBOX_AUTOCLOSE
# 389 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 390 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 391 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 392 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 393 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceup
# 394 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 395 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 396 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 397 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, faceup
# 398 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 399 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisMove1
# 400 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 401 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove2
# 402 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 403 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak3, MSGBOX_AUTOCLOSE
# 404 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 405 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, facedown
# 406 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 407 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak3_5, MSGBOX_DEFAULT
# 408 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 409 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_7, MSGBOX_AUTOCLOSE
# 411 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 412 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove3
# 413 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 414 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 415 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 416 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak4, MSGBOX_AUTOCLOSE
# 417 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 418 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 419 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 420 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, faceright
# 421 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 422 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_8, MSGBOX_AUTOCLOSE
# 423 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 1
# 424 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 425 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 426 "data/maps/BennisDojo/scripts.pory"
	goto BennisBattleStart
	end

DojoBattleTrigger_2:
# 358 "data/maps/BennisDojo/scripts.pory"
	special HealPlayerParty
	goto DojoBattleTrigger_1

DojoBattleTrigger_5:
# 382 "data/maps/BennisDojo/scripts.pory"
	special HealPlayerParty
	goto DojoBattleTrigger_4


Dojo_EarlierAnswerNO::
# 431 "data/maps/BennisDojo/scripts.pory"
	lockall
# 432 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 433 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 434 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 435 "data/maps/BennisDojo/scripts.pory"
	delay 10
# 436 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove1
# 437 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 438 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 439 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 440 "data/maps/BennisDojo/scripts.pory"
	msgbox Dojo_EarlierAnswerNO_Text_0, MSGBOX_AUTOCLOSE
# 441 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniMove1
# 442 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 443 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 444 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 445 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_3, MSGBOX_AUTOCLOSE
# 446 "data/maps/BennisDojo/scripts.pory"
	delay 20
# 447 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisMove1
# 448 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 449 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 450 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 451 "data/maps/BennisDojo/scripts.pory"
	goto BennisBattleStart
	end


BennisBattleStart::
# 456 "data/maps/BennisDojo/scripts.pory"
	lockall
# 457 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisBattleStart_Text_0, MSGBOX_YESNO
# 458 "data/maps/BennisDojo/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BennisBattleStart_2
# 465 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisIfNo, MSGBOX_AUTOCLOSE
# 466 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 467 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisLeave
# 468 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 469 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniLeave
# 470 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 471 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakLeave
# 472 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 473 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerLeaves
# 474 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 475 "data/maps/BennisDojo/scripts.pory"
	warp MAP_DEWFORD_TOWN, 8, 18
# 476 "data/maps/BennisDojo/scripts.pory"
	waitstate
BennisBattleStart_1:
# 478 "data/maps/BennisDojo/scripts.pory"
	releaseall
	end

BennisBattleStart_2:
# 459 "data/maps/BennisDojo/scripts.pory"
	msgbox Bennis_Intro, MSGBOX_AUTOCLOSE
# 460 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BENNIS_1, Bennis_Outro
# 461 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 462 "data/maps/BennisDojo/scripts.pory"
	goto BennisEnd
	goto BennisBattleStart_1


BennisEnd::
# 483 "data/maps/BennisDojo/scripts.pory"
	lockall
# 484 "data/maps/BennisDojo/scripts.pory"
	msgbox Bennis2, MSGBOX_DEFAULT
# 485 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 486 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisEnd_Text_0, MSGBOX_AUTOCLOSE
# 487 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 488 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 489 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 490 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak5, MSGBOX_AUTOCLOSE
# 491 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 492 "data/maps/BennisDojo/scripts.pory"
	fadeoutbgm 0
# 493 "data/maps/BennisDojo/scripts.pory"
	delay 16
# 494 "data/maps/BennisDojo/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 495 "data/maps/BennisDojo/scripts.pory"
	playse SE_FLEE
# 496 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_BENNIS_DOJO_1
# 497 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 2
# 498 "data/maps/BennisDojo/scripts.pory"
	removeobject 1
# 499 "data/maps/BennisDojo/scripts.pory"
	removeobject 2
# 500 "data/maps/BennisDojo/scripts.pory"
	removeobject 3
# 501 "data/maps/BennisDojo/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 502 "data/maps/BennisDojo/scripts.pory"
	delay 24
# 503 "data/maps/BennisDojo/scripts.pory"
	fadeinbgm 0
# 504 "data/maps/BennisDojo/scripts.pory"
	releaseall
	end


# 508 "data/maps/BennisDojo/scripts.pory"
exclaim:
# 509 "data/maps/BennisDojo/scripts.pory"
	emote_exclamation_mark
	step_end

# 512 "data/maps/BennisDojo/scripts.pory"
AsakMove1:
# 513 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 513 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 513 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 513 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 514 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 515 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 529 "data/maps/BennisDojo/scripts.pory"
PaniniMove1:
# 530 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 530 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 530 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 530 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 530 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 530 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 530 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 531 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 537 "data/maps/BennisDojo/scripts.pory"
BennisMove1:
# 538 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 538 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 538 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 538 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 538 "data/maps/BennisDojo/scripts.pory"
	walk_down
	step_end

# 573 "data/maps/BennisDojo/scripts.pory"
faceup:
# 574 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_up
	step_end

# 577 "data/maps/BennisDojo/scripts.pory"
faceleft:
# 578 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_left
	step_end

# 581 "data/maps/BennisDojo/scripts.pory"
faceright:
# 582 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_right
	step_end

# 584 "data/maps/BennisDojo/scripts.pory"
facedown:
# 585 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_down
	step_end

# 588 "data/maps/BennisDojo/scripts.pory"
PlayerLeaves:
# 589 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 589 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 589 "data/maps/BennisDojo/scripts.pory"
	walk_down
	step_end

# 592 "data/maps/BennisDojo/scripts.pory"
AsakMove2:
# 593 "data/maps/BennisDojo/scripts.pory"
	walk_fast_up
# 593 "data/maps/BennisDojo/scripts.pory"
	walk_fast_up
# 594 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
	step_end

# 597 "data/maps/BennisDojo/scripts.pory"
AsakMove3:
# 598 "data/maps/BennisDojo/scripts.pory"
	walk_fast_right
# 599 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 599 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 600 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 603 "data/maps/BennisDojo/scripts.pory"
AsakLeave:
# 604 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 605 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 605 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 605 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 605 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 606 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_down
	step_end

# 609 "data/maps/BennisDojo/scripts.pory"
PaniniLeave:
# 610 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 610 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 610 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 610 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 610 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 610 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 610 "data/maps/BennisDojo/scripts.pory"
	walk_up
	step_end

# 613 "data/maps/BennisDojo/scripts.pory"
BennisLeave:
# 614 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 614 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 614 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 614 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 614 "data/maps/BennisDojo/scripts.pory"
	walk_up
	step_end

# 617 "data/maps/BennisDojo/scripts.pory"
BennisDojo_Movement_AsakReturns:
# 618 "data/maps/BennisDojo/scripts.pory"
	walk_right
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
# 620 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_left
	step_end

# 623 "data/maps/BennisDojo/scripts.pory"
BennisDojo_Movement_AsakReturnsEast:
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
	step_end

# 627 "data/maps/BennisDojo/scripts.pory"
BennisDojo_Movement_AsakReturnsOriginalSpot:
# 628 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 628 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 628 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 628 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 628 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 628 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 628 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 628 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 628 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 628 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 629 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 629 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 629 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 629 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 630 "data/maps/BennisDojo/scripts.pory"
	face_down
	step_end

# 633 "data/maps/BennisDojo/scripts.pory"
BennisDojo_Movement_AsakReturnsOriginalSpotEast:
# 634 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 634 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 634 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 634 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 634 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 634 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 634 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 634 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 634 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 635 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 635 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 635 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 635 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 635 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 636 "data/maps/BennisDojo/scripts.pory"
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
# 197 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: {PLAYER}?!\n What are you doing here?\p MASTER BENNIS: Hm. We battled.\n {PLAYER} had a wonderful victory.\p ASAK: I see… As expected.\n They also beat my brother.$"

BennisDojo_EventScript_AsakReturnEast_Text_1:
# 207 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Oho. You beat\n BRUNO? That's impressive.$"

BennisDojo_EventScript_AsakReturnEast_Text_2:
# 214 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Well, it feels good to be back.\n Any longer there and the old hag\l would've made me help look for a\l successor.\p But who knows? Maybe {PLAYER} can take\n on the role once they're done with\l their travels.\p Well, time to get back to business\n as usual!$"

BennisDojo_EventScript_AsakReturnNorth_Text_0:
# 261 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: {PLAYER}?!\n What are you doing here?!$"

BennisDojo_EventScript_AsakReturnNorth_Text_1:
# 266 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm. We battled.\n {PLAYER} had a wonderful victory.\p ASAK: I see… As expected.\n They also beat my brother.\p MASTER BENNIS: Oho. BRUNO?\n That's impressive.\p ASAK: Well, it feels good to be back.\n Any longer there and the old hag\l would've made me help look for a\l successor.\p But who knows? Maybe {PLAYER} can take\n on the role once they're done with\l their travels.\p Well, time to get back to business\n as usual!$"

BennisDojo_EventScript_NoCheating_Text_0:
# 304 "data/maps/BennisDojo/scripts.pory"
	.string "What are you doing?\n You have to fight us in order.$"

BennisDojo_EventScript_NoCheatingPanini_Text_0:
# 310 "data/maps/BennisDojo/scripts.pory"
	.string "Panini?\n Papanini panini.$"

BennisDojo_EventScript_BaldyBaldyOverThere_Text_0:
# 317 "data/maps/BennisDojo/scripts.pory"
	.string "Baldy, baldy, over there!\n What's it like to have no hair?$"

DojoBattleTrigger_Text_0:
# 348 "data/maps/BennisDojo/scripts.pory"
	.string "Hey!$"

DojoBattleTrigger_Text_1:
# 360 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Impossible…$"

DojoBattleTrigger_Text_2:
# 364 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI!$"

DojoBattleTrigger_Text_3:
# 374 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Panini?$"

DojoBattleTrigger_Text_4:
# 378 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Panini!$"

DojoBattleTrigger_Text_5:
# 384 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: P-Panini…$"

DojoBattleTrigger_Text_6:
# 388 "data/maps/BennisDojo/scripts.pory"
	.string "???: What's all this noise?$"

DojoBattleTrigger_Text_7:
# 409 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm.\n  I'll take you on.$"

DojoBattleTrigger_Text_8:
# 422 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Pani!$"

Dojo_EarlierAnswerNO_Text_0:
# 440 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Back again?!$"

BennisBattleStart_Text_0:
# 457 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Are you ready now?$"

BennisEnd_Text_0:
# 486 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: P-Panini?!$"

Asak1::
# 518 "data/maps/BennisDojo/scripts.pory"
	.string "Who are you? Another goofball TRAINER?\n Didn't you see the sign?\p How rude of you to barge into our dojo\n when MASTER BENNIS is meditating.\p I guess I'll have to teach you a lesson!$"

Asak_Outro::
# 525 "data/maps/BennisDojo/scripts.pory"
	.string "I lost my focus…$"

Panini_Outro::
# 527 "data/maps/BennisDojo/scripts.pory"
	.string "Panini?!$"

Asak2::
# 534 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Show this hooligan what happens\n when you challenge our dojo!$"

AsakPaniniLoss::
# 541 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: WHAT?! Even though I'VE never\n even beaten Panini…$"

Asak3::
# 545 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: MASTER BENNIS! I'm sorry for\n disturbing you.\p This TRAINER was intruding on\n our dojo.$"

Asak3_5::
# 550 "data/maps/BennisDojo/scripts.pory"
	.string "We tried to get rid of them, but\n I'm ashamed to say we were no match.$"

Asak4::
# 553 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Ha! It's over for you now.\n MASTER BENNIS has NEVER lost!$"

BennisIfNo::
# 556 "data/maps/BennisDojo/scripts.pory"
	.string "Hm.\n Don't keep me waiting too long.$"

Bennis_Intro::
# 559 "data/maps/BennisDojo/scripts.pory"
	.string "Oho. I'm gettin' good vibrations from\n this place.$"

Bennis_Outro::
# 564 "data/maps/BennisDojo/scripts.pory"
	.string "Everyone's so mean to me…$"

Bennis2::
# 566 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm.. Beefy.$"

Asak5::
# 568 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: This can't be…\n Even MASTER BENNIS…\p ASAK: W-We won't forget this\n humiliation!$"
