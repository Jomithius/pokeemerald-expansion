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
	setflag FLAG_SYS_BOSS_BATTLE
# 109 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BENNIS_4, BennisDojo_EventScript_BennisFinalBattle_Text_1
# 110 "data/maps/BennisDojo/scripts.pory"
	clearflag FLAG_SYS_BOSS_BATTLE
# 111 "data/maps/BennisDojo/scripts.pory"
	goto_if_set FLAG_SYS_DEFEATED_BRUNO, BennisDojo_EventScript_AsakReturn
# 112 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_BennisFinalBattle_Text_2, MSGBOX_AUTOCLOSE
# 117 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 118 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 6
# 119 "data/maps/BennisDojo/scripts.pory"
	clearflag FLAG_SYS_DYNAMIC_LEVELS
# 120 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_AsakReturn::
# 125 "data/maps/BennisDojo/scripts.pory"
	playse SE_DOOR
# 126 "data/maps/BennisDojo/scripts.pory"
	addobject 11
# 127 "data/maps/BennisDojo/scripts.pory"
	clearflag FLAG_HIDE_ASAK_BENNIS_DOJO
# 128 "data/maps/BennisDojo/scripts.pory"
	waitse
# 129 "data/maps/BennisDojo/scripts.pory"
	checkobjectat 8, 5
# 130 "data/maps/BennisDojo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BennisDojo_EventScript_AsakReturnEast
# 131 "data/maps/BennisDojo/scripts.pory"
	checkobjectat 7, 4
# 132 "data/maps/BennisDojo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BennisDojo_EventScript_AsakReturnNorth
# 133 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturns
# 134 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 135 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 136 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 137 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_0, MSGBOX_DEFAULT
# 141 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 142 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 143 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 144 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 145 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 146 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 147 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_1, MSGBOX_DEFAULT
# 149 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 150 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 151 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_2, MSGBOX_DEFAULT
# 155 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 156 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 157 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 158 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_3, MSGBOX_AUTOCLOSE
# 169 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 170 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsOriginalSpot
# 171 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 172 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 173 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 174 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 175 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 176 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_4, MSGBOX_AUTOCLOSE
# 179 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 180 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 6
# 181 "data/maps/BennisDojo/scripts.pory"
	clearflag FLAG_SYS_DYNAMIC_LEVELS
# 182 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_HIDE_ASAK_BALDESIAN_FOREST_DOJO
# 183 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_AsakReturnEast::
# 188 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsEast
# 189 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 190 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 191 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 192 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 193 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 194 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_0, MSGBOX_DEFAULT
# 198 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 199 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 200 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 201 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 202 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnEast_Text_0, MSGBOX_DEFAULT
# 208 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 209 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 210 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 211 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 212 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnEast_Text_1, MSGBOX_AUTOCLOSE
# 214 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 215 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 216 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 217 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 218 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 219 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnEast_Text_2, MSGBOX_AUTOCLOSE
# 228 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 229 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsOriginalSpotEast
# 230 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 231 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 232 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 233 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 234 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 235 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_4, MSGBOX_AUTOCLOSE
# 238 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 239 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 6
# 240 "data/maps/BennisDojo/scripts.pory"
	clearflag FLAG_SYS_DYNAMIC_LEVELS
# 241 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_HIDE_ASAK_BALDESIAN_FOREST_DOJO
# 242 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_AsakReturnNorth::
# 247 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturns
# 248 "data/maps/BennisDojo/scripts.pory"
	delay 16
# 249 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 250 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 251 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 252 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 253 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 254 "data/maps/BennisDojo/scripts.pory"
	waitmovement 7
# 255 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_0, MSGBOX_DEFAULT
# 259 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 260 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 261 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 262 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 263 "data/maps/BennisDojo/scripts.pory"
	waitse
# 264 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 265 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterUp
# 266 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 267 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnNorth_Text_0, MSGBOX_DEFAULT
# 269 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 270 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 271 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 272 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnNorth_Text_1, MSGBOX_AUTOCLOSE
# 287 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 288 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsOriginalSpot
# 289 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 290 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 291 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 292 "data/maps/BennisDojo/scripts.pory"
	setobjectxyperm 11, 12, 15
# 293 "data/maps/BennisDojo/scripts.pory"
	special DrawWholeMapView
# 294 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 295 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 296 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 297 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 298 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 299 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_4, MSGBOX_AUTOCLOSE
# 302 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 303 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 6
# 304 "data/maps/BennisDojo/scripts.pory"
	clearflag FLAG_SYS_DYNAMIC_LEVELS
# 305 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_HIDE_ASAK_BALDESIAN_FOREST_DOJO
# 306 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_NoCheating::
# 311 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_NoCheating_Text_0, MSGBOX_NPC
	end


BennisDojo_EventScript_NoCheatingPanini::
# 317 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_NoCheatingPanini_Text_0, MSGBOX_NPC
	end


BennisDojo_EventScript_BaldyBaldyOverThere::
# 323 "data/maps/BennisDojo/scripts.pory"
	lock
# 324 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_BaldyBaldyOverThere_Text_0, MSGBOX_AUTOCLOSE
# 326 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 327 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_ExpertBelt::
# 332 "data/maps/BennisDojo/scripts.pory"
	lock
# 333 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_ITEM_BENNIS_DOJO_EXPERT_BELT
# 334 "data/maps/BennisDojo/scripts.pory"
	finditem ITEM_EXPERT_BELT, 1
# 335 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 336 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_FocusSash::
# 341 "data/maps/BennisDojo/scripts.pory"
	lock
# 342 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_ITEM_BENNIS_DOJO_FOCUS_SASH
# 343 "data/maps/BennisDojo/scripts.pory"
	finditem ITEM_FOCUS_SASH, 1
# 344 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 345 "data/maps/BennisDojo/scripts.pory"
	release
	end


DojoBattleTrigger::
# 350 "data/maps/BennisDojo/scripts.pory"
	lockall
# 351 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 352 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 353 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 354 "data/maps/BennisDojo/scripts.pory"
	delay 10
# 355 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_0, MSGBOX_AUTOCLOSE
# 356 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 357 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove1
# 358 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 359 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 360 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 361 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak1, MSGBOX_AUTOCLOSE
# 362 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 363 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_ASAK, Asak_Outro
# 364 "data/maps/BennisDojo/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_EASY
	goto_if_eq DojoBattleTrigger_2
DojoBattleTrigger_1:
# 367 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_1, MSGBOX_AUTOCLOSE
# 368 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 369 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceup
# 370 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 371 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_2, MSGBOX_AUTOCLOSE
# 372 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 373 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 374 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 375 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniMove1
# 376 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 377 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 378 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 379 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceleft
# 380 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 381 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_3, MSGBOX_DEFAULT
# 382 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 383 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak2, MSGBOX_DEFAULT
# 384 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 385 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_4, MSGBOX_AUTOCLOSE
# 386 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 387 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_PANINI, Panini_Outro
# 388 "data/maps/BennisDojo/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_EASY
	goto_if_eq DojoBattleTrigger_5
DojoBattleTrigger_4:
# 391 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_5, MSGBOX_DEFAULT
# 392 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 393 "data/maps/BennisDojo/scripts.pory"
	msgbox AsakPaniniLoss, MSGBOX_DEFAULT
# 394 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 395 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_6, MSGBOX_AUTOCLOSE
# 396 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 397 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 398 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 399 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 400 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceup
# 401 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 402 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 403 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 404 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, faceup
# 405 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 406 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisMove1
# 407 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 408 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove2
# 409 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 410 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak3, MSGBOX_AUTOCLOSE
# 411 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 412 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, facedown
# 413 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 414 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak3_5, MSGBOX_DEFAULT
# 415 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 416 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_7, MSGBOX_AUTOCLOSE
# 418 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 419 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove3
# 420 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 421 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 422 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 423 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak4, MSGBOX_AUTOCLOSE
# 424 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 425 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 426 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 427 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, faceright
# 428 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 429 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_8, MSGBOX_AUTOCLOSE
# 430 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 1
# 431 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 432 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 433 "data/maps/BennisDojo/scripts.pory"
	goto BennisBattleStart
	end

DojoBattleTrigger_2:
# 365 "data/maps/BennisDojo/scripts.pory"
	special HealPlayerParty
	goto DojoBattleTrigger_1

DojoBattleTrigger_5:
# 389 "data/maps/BennisDojo/scripts.pory"
	special HealPlayerParty
	goto DojoBattleTrigger_4


Dojo_EarlierAnswerNO::
# 438 "data/maps/BennisDojo/scripts.pory"
	lockall
# 439 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 440 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 441 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 442 "data/maps/BennisDojo/scripts.pory"
	delay 10
# 443 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove1
# 444 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 445 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 446 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 447 "data/maps/BennisDojo/scripts.pory"
	msgbox Dojo_EarlierAnswerNO_Text_0, MSGBOX_AUTOCLOSE
# 448 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniMove1
# 449 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 450 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 451 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 452 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_3, MSGBOX_AUTOCLOSE
# 453 "data/maps/BennisDojo/scripts.pory"
	delay 20
# 454 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisMove1
# 455 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 456 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 457 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 458 "data/maps/BennisDojo/scripts.pory"
	goto BennisBattleStart
	end


BennisBattleStart::
# 463 "data/maps/BennisDojo/scripts.pory"
	lockall
# 464 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisBattleStart_Text_0, MSGBOX_YESNO
# 465 "data/maps/BennisDojo/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BennisBattleStart_2
# 472 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisIfNo, MSGBOX_AUTOCLOSE
# 473 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 474 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisLeave
# 475 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 476 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniLeave
# 477 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 478 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakLeave
# 479 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 480 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerLeaves
# 481 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 482 "data/maps/BennisDojo/scripts.pory"
	warp MAP_DEWFORD_TOWN, 8, 18
# 483 "data/maps/BennisDojo/scripts.pory"
	waitstate
BennisBattleStart_1:
# 485 "data/maps/BennisDojo/scripts.pory"
	releaseall
	end

BennisBattleStart_2:
# 466 "data/maps/BennisDojo/scripts.pory"
	msgbox Bennis_Intro, MSGBOX_AUTOCLOSE
# 467 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BENNIS_1, Bennis_Outro
# 468 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 469 "data/maps/BennisDojo/scripts.pory"
	goto BennisEnd
	goto BennisBattleStart_1


BennisEnd::
# 490 "data/maps/BennisDojo/scripts.pory"
	lockall
# 491 "data/maps/BennisDojo/scripts.pory"
	msgbox Bennis2, MSGBOX_DEFAULT
# 492 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 493 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisEnd_Text_0, MSGBOX_AUTOCLOSE
# 494 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 495 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 496 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 497 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak5, MSGBOX_AUTOCLOSE
# 498 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 499 "data/maps/BennisDojo/scripts.pory"
	fadeoutbgm 0
# 500 "data/maps/BennisDojo/scripts.pory"
	delay 16
# 501 "data/maps/BennisDojo/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 502 "data/maps/BennisDojo/scripts.pory"
	playse SE_FLEE
# 503 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_BENNIS_DOJO_1
# 504 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 2
# 505 "data/maps/BennisDojo/scripts.pory"
	removeobject 1
# 506 "data/maps/BennisDojo/scripts.pory"
	removeobject 2
# 507 "data/maps/BennisDojo/scripts.pory"
	removeobject 3
# 508 "data/maps/BennisDojo/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 509 "data/maps/BennisDojo/scripts.pory"
	delay 24
# 510 "data/maps/BennisDojo/scripts.pory"
	fadeinbgm 0
# 511 "data/maps/BennisDojo/scripts.pory"
	releaseall
	end


# 515 "data/maps/BennisDojo/scripts.pory"
exclaim:
# 516 "data/maps/BennisDojo/scripts.pory"
	emote_exclamation_mark
	step_end

# 519 "data/maps/BennisDojo/scripts.pory"
AsakMove1:
# 520 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 520 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 520 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 520 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 521 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 522 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 536 "data/maps/BennisDojo/scripts.pory"
PaniniMove1:
# 537 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 537 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 537 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 537 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 537 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 537 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 537 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 538 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 544 "data/maps/BennisDojo/scripts.pory"
BennisMove1:
# 545 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 545 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 545 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 545 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 545 "data/maps/BennisDojo/scripts.pory"
	walk_down
	step_end

# 580 "data/maps/BennisDojo/scripts.pory"
faceup:
# 581 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_up
	step_end

# 584 "data/maps/BennisDojo/scripts.pory"
faceleft:
# 585 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_left
	step_end

# 588 "data/maps/BennisDojo/scripts.pory"
faceright:
# 589 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_right
	step_end

# 591 "data/maps/BennisDojo/scripts.pory"
facedown:
# 592 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_down
	step_end

# 595 "data/maps/BennisDojo/scripts.pory"
PlayerLeaves:
# 596 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 596 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 596 "data/maps/BennisDojo/scripts.pory"
	walk_down
	step_end

# 599 "data/maps/BennisDojo/scripts.pory"
AsakMove2:
# 600 "data/maps/BennisDojo/scripts.pory"
	walk_fast_up
# 600 "data/maps/BennisDojo/scripts.pory"
	walk_fast_up
# 601 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
	step_end

# 604 "data/maps/BennisDojo/scripts.pory"
AsakMove3:
# 605 "data/maps/BennisDojo/scripts.pory"
	walk_fast_right
# 606 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 606 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 607 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 610 "data/maps/BennisDojo/scripts.pory"
AsakLeave:
# 611 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 612 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 612 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 612 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 612 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 613 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_down
	step_end

# 616 "data/maps/BennisDojo/scripts.pory"
PaniniLeave:
# 617 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 617 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 617 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 617 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 617 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 617 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 617 "data/maps/BennisDojo/scripts.pory"
	walk_up
	step_end

# 620 "data/maps/BennisDojo/scripts.pory"
BennisLeave:
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
BennisDojo_Movement_AsakReturns:
# 625 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 626 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 626 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 626 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 626 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 626 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 626 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 626 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 626 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 626 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 626 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 627 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_left
	step_end

# 630 "data/maps/BennisDojo/scripts.pory"
BennisDojo_Movement_AsakReturnsEast:
# 631 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 631 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 631 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 631 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 631 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 631 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 631 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 631 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 631 "data/maps/BennisDojo/scripts.pory"
	walk_up
	step_end

# 634 "data/maps/BennisDojo/scripts.pory"
BennisDojo_Movement_AsakReturnsOriginalSpot:
# 635 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 635 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 635 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 635 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 635 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 635 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 635 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 635 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 635 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 635 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 636 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 636 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 636 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 636 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 637 "data/maps/BennisDojo/scripts.pory"
	face_down
	step_end

# 640 "data/maps/BennisDojo/scripts.pory"
BennisDojo_Movement_AsakReturnsOriginalSpotEast:
# 641 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 641 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 641 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 641 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 641 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 641 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 641 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 641 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 641 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 642 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 642 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 642 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 642 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 642 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 643 "data/maps/BennisDojo/scripts.pory"
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
# 109 "data/maps/BennisDojo/scripts.pory"
	.string "Everyone's so mean to me…$"

BennisDojo_EventScript_BennisFinalBattle_Text_2:
# 112 "data/maps/BennisDojo/scripts.pory"
	.string "Hm.\n That was a good battle.\p Thanks again for what you did during\n the ritual.\p You're welcome to train here anytime.$"

BennisDojo_EventScript_AsakReturn_Text_0:
# 137 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: MASTER BENNIS!\n I'm back.\p MASTER BENNIS: Oho.\n ASAK. Welcome back.$"

BennisDojo_EventScript_AsakReturn_Text_1:
# 147 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: {PLAYER}?!\n What are you doing here?$"

BennisDojo_EventScript_AsakReturn_Text_2:
# 151 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm. We battled.\n {PLAYER} had a wonderful victory.\p ASAK: I see… As expected.\n They also beat my brother.$"

BennisDojo_EventScript_AsakReturn_Text_3:
# 158 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Oho. You beat\n BRUNO? That's impressive.\p ASAK: Well, it feels good to be back.\n Any longer there and the old hag\l would've made me help look for a\l successor.\p But who knows? Maybe {PLAYER} can take\n on the role once they're done with\l their travels.\p Well, time to get back to business\n as usual!$"

BennisDojo_EventScript_AsakReturn_Text_4:
# 176 "data/maps/BennisDojo/scripts.pory"
	.string "Hm.\n Well, it was a good battle.\l You're welcome to train here anytime.$"

BennisDojo_EventScript_AsakReturnEast_Text_0:
# 202 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: {PLAYER}?!\n What are you doing here?\p MASTER BENNIS: Hm. We battled.\n {PLAYER} had a wonderful victory.\p ASAK: I see… As expected.\n They also beat my brother.$"

BennisDojo_EventScript_AsakReturnEast_Text_1:
# 212 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Oho. You beat\n BRUNO? That's impressive.$"

BennisDojo_EventScript_AsakReturnEast_Text_2:
# 219 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Well, it feels good to be back.\n Any longer there and the old hag\l would've made me help look for a\l successor.\p But who knows? Maybe {PLAYER} can take\n on the role once they're done with\l their travels.\p Well, time to get back to business\n as usual!$"

BennisDojo_EventScript_AsakReturnNorth_Text_0:
# 267 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: {PLAYER}?!\n What are you doing here?!$"

BennisDojo_EventScript_AsakReturnNorth_Text_1:
# 272 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm. We battled.\n {PLAYER} had a wonderful victory.\p ASAK: I see… As expected.\n They also beat my brother.\p MASTER BENNIS: Oho. BRUNO?\n That's impressive.\p ASAK: Well, it feels good to be back.\n Any longer there and the old hag\l would've made me help look for a\l successor.\p But who knows? Maybe {PLAYER} can take\n on the role once they're done with\l their travels.\p Well, time to get back to business\n as usual!$"

BennisDojo_EventScript_NoCheating_Text_0:
# 311 "data/maps/BennisDojo/scripts.pory"
	.string "What are you doing?\n You have to fight us in order.$"

BennisDojo_EventScript_NoCheatingPanini_Text_0:
# 317 "data/maps/BennisDojo/scripts.pory"
	.string "Panini?\n Papanini panini.$"

BennisDojo_EventScript_BaldyBaldyOverThere_Text_0:
# 324 "data/maps/BennisDojo/scripts.pory"
	.string "Baldy, baldy, over there!\n What's it like to have no hair?$"

DojoBattleTrigger_Text_0:
# 355 "data/maps/BennisDojo/scripts.pory"
	.string "Hey!$"

DojoBattleTrigger_Text_1:
# 367 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Impossible…$"

DojoBattleTrigger_Text_2:
# 371 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI!$"

DojoBattleTrigger_Text_3:
# 381 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Panini?$"

DojoBattleTrigger_Text_4:
# 385 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Panini!$"

DojoBattleTrigger_Text_5:
# 391 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: P-Panini…$"

DojoBattleTrigger_Text_6:
# 395 "data/maps/BennisDojo/scripts.pory"
	.string "???: What's all this noise?$"

DojoBattleTrigger_Text_7:
# 416 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm.\n  I'll take you on.$"

DojoBattleTrigger_Text_8:
# 429 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Pani!$"

Dojo_EarlierAnswerNO_Text_0:
# 447 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Back again?!$"

BennisBattleStart_Text_0:
# 464 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Are you ready now?$"

BennisEnd_Text_0:
# 493 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: P-Panini?!$"

Asak1::
# 525 "data/maps/BennisDojo/scripts.pory"
	.string "Who are you? Another goofball TRAINER?\n Didn't you see the sign?\p How rude of you to barge into our dojo\n when MASTER BENNIS is meditating.\p I guess I'll have to teach you a lesson!$"

Asak_Outro::
# 532 "data/maps/BennisDojo/scripts.pory"
	.string "I lost my focus…$"

Panini_Outro::
# 534 "data/maps/BennisDojo/scripts.pory"
	.string "Panini?!$"

Asak2::
# 541 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Show this hooligan what happens\n when you challenge our dojo!$"

AsakPaniniLoss::
# 548 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: WHAT?! Even though I'VE never\n even beaten Panini…$"

Asak3::
# 552 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: MASTER BENNIS! I'm sorry for\n disturbing you.\p This TRAINER was intruding on\n our dojo.$"

Asak3_5::
# 557 "data/maps/BennisDojo/scripts.pory"
	.string "We tried to get rid of them, but\n I'm ashamed to say we were no match.$"

Asak4::
# 560 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Ha! It's over for you now.\n MASTER BENNIS has NEVER lost!$"

BennisIfNo::
# 563 "data/maps/BennisDojo/scripts.pory"
	.string "Hm.\n Don't keep me waiting too long.$"

Bennis_Intro::
# 566 "data/maps/BennisDojo/scripts.pory"
	.string "Oho. I'm gettin' good vibrations from\n this place.$"

Bennis_Outro::
# 571 "data/maps/BennisDojo/scripts.pory"
	.string "Everyone's so mean to me…$"

Bennis2::
# 573 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm… Beefy.$"

Asak5::
# 575 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: This can't be…\n Even MASTER BENNIS…\p ASAK: W-We won't forget this\n humiliation!$"
