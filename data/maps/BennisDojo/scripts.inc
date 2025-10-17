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
	waitse
# 148 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_1, MSGBOX_DEFAULT
# 150 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 151 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 152 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_2, MSGBOX_DEFAULT
# 156 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 157 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 158 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 159 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_3, MSGBOX_AUTOCLOSE
# 170 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 171 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsOriginalSpot
# 172 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 173 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 174 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 175 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 176 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 177 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_4, MSGBOX_AUTOCLOSE
# 180 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 181 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 6
# 182 "data/maps/BennisDojo/scripts.pory"
	clearflag FLAG_SYS_DYNAMIC_LEVELS
# 183 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_HIDE_ASAK_BALDESIAN_FOREST_DOJO
# 184 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_AsakReturnEast::
# 189 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsEast
# 190 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 191 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 192 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 193 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 194 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 195 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_0, MSGBOX_DEFAULT
# 199 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 200 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 201 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 202 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 203 "data/maps/BennisDojo/scripts.pory"
	waitse
# 204 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnEast_Text_0, MSGBOX_DEFAULT
# 210 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 211 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 212 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 213 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 214 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnEast_Text_1, MSGBOX_AUTOCLOSE
# 216 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 217 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 218 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 219 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 220 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 221 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnEast_Text_2, MSGBOX_AUTOCLOSE
# 230 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 231 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsOriginalSpotEast
# 232 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 233 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 234 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 235 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 236 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 237 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_4, MSGBOX_AUTOCLOSE
# 240 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 241 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 6
# 242 "data/maps/BennisDojo/scripts.pory"
	clearflag FLAG_SYS_DYNAMIC_LEVELS
# 243 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_HIDE_ASAK_BALDESIAN_FOREST_DOJO
# 244 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_AsakReturnNorth::
# 249 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturns
# 250 "data/maps/BennisDojo/scripts.pory"
	delay 16
# 251 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 252 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 253 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 254 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 255 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 256 "data/maps/BennisDojo/scripts.pory"
	waitmovement 7
# 257 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_0, MSGBOX_DEFAULT
# 261 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 262 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 263 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 264 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 265 "data/maps/BennisDojo/scripts.pory"
	waitse
# 266 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 267 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterUp
# 268 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 269 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnNorth_Text_0, MSGBOX_DEFAULT
# 271 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 272 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 273 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 274 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturnNorth_Text_1, MSGBOX_AUTOCLOSE
# 289 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 290 "data/maps/BennisDojo/scripts.pory"
	applymovement 11, BennisDojo_Movement_AsakReturnsOriginalSpot
# 291 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 292 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 293 "data/maps/BennisDojo/scripts.pory"
	waitmovement 11
# 294 "data/maps/BennisDojo/scripts.pory"
	setobjectxyperm 11, 12, 15
# 295 "data/maps/BennisDojo/scripts.pory"
	special DrawWholeMapView
# 296 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 297 "data/maps/BennisDojo/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 298 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 299 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 300 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 301 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_AsakReturn_Text_4, MSGBOX_AUTOCLOSE
# 304 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 305 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 6
# 306 "data/maps/BennisDojo/scripts.pory"
	clearflag FLAG_SYS_DYNAMIC_LEVELS
# 307 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_HIDE_ASAK_BALDESIAN_FOREST_DOJO
# 308 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisDojo_EventScript_NoCheating::
# 313 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_NoCheating_Text_0, MSGBOX_NPC
	end


BennisDojo_EventScript_NoCheatingPanini::
# 319 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_NoCheatingPanini_Text_0, MSGBOX_NPC
	end


BennisDojo_EventScript_BaldyBaldyOverThere::
# 325 "data/maps/BennisDojo/scripts.pory"
	lock
# 326 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisDojo_EventScript_BaldyBaldyOverThere_Text_0, MSGBOX_AUTOCLOSE
# 328 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 329 "data/maps/BennisDojo/scripts.pory"
	release
	end


DojoBattleTrigger::
# 334 "data/maps/BennisDojo/scripts.pory"
	lockall
# 335 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 336 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 337 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 338 "data/maps/BennisDojo/scripts.pory"
	waitse
# 339 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterLeft
# 340 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 341 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_0, MSGBOX_AUTOCLOSE
# 342 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 343 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove1
# 344 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 345 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 346 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 347 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak1, MSGBOX_AUTOCLOSE
# 348 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 349 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_ASAK, Asak_Outro
# 350 "data/maps/BennisDojo/scripts.pory"
	goto_if_unset FLAG_SYS_HARD_MODE, DojoBattleTrigger_2
DojoBattleTrigger_1:
# 353 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_1, MSGBOX_AUTOCLOSE
# 354 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 355 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceup
# 356 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 357 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_2, MSGBOX_AUTOCLOSE
# 358 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 359 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 360 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 361 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniMove1
# 362 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 363 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 364 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 365 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceleft
# 366 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 367 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_3, MSGBOX_DEFAULT
# 368 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 369 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak2, MSGBOX_DEFAULT
# 370 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 371 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_4, MSGBOX_AUTOCLOSE
# 372 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 373 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_PANINI, Panini_Outro
# 374 "data/maps/BennisDojo/scripts.pory"
	goto_if_unset FLAG_SYS_HARD_MODE, DojoBattleTrigger_5
DojoBattleTrigger_4:
# 377 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_5, MSGBOX_DEFAULT
# 378 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 379 "data/maps/BennisDojo/scripts.pory"
	msgbox AsakPaniniLoss, MSGBOX_DEFAULT
# 380 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 381 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_6, MSGBOX_AUTOCLOSE
# 382 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 383 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 384 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 385 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 386 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceup
# 387 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 388 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 389 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 390 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, faceup
# 391 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 392 "data/maps/BennisDojo/scripts.pory"
	waitse
# 393 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisMove1
# 394 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 395 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove2
# 396 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 397 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak3, MSGBOX_AUTOCLOSE
# 398 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 399 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, facedown
# 400 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 401 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak3_5, MSGBOX_DEFAULT
# 402 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 403 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_7, MSGBOX_AUTOCLOSE
# 405 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 406 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove3
# 407 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 408 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 409 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 410 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak4, MSGBOX_AUTOCLOSE
# 411 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 412 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 413 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 414 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, faceright
# 415 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 416 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_8, MSGBOX_AUTOCLOSE
# 417 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 1
# 418 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 419 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 420 "data/maps/BennisDojo/scripts.pory"
	goto BennisBattleStart
	end

DojoBattleTrigger_2:
# 351 "data/maps/BennisDojo/scripts.pory"
	special HealPlayerParty
	goto DojoBattleTrigger_1

DojoBattleTrigger_5:
# 375 "data/maps/BennisDojo/scripts.pory"
	special HealPlayerParty
	goto DojoBattleTrigger_4


Dojo_EarlierAnswerNO::
# 425 "data/maps/BennisDojo/scripts.pory"
	lockall
# 426 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 427 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 428 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 429 "data/maps/BennisDojo/scripts.pory"
	waitse
# 430 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove1
# 431 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 432 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 433 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 434 "data/maps/BennisDojo/scripts.pory"
	msgbox Dojo_EarlierAnswerNO_Text_0, MSGBOX_AUTOCLOSE
# 435 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniMove1
# 436 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 437 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 438 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 439 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_3, MSGBOX_AUTOCLOSE
# 440 "data/maps/BennisDojo/scripts.pory"
	delay 20
# 441 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisMove1
# 442 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 443 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 444 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 445 "data/maps/BennisDojo/scripts.pory"
	goto BennisBattleStart
	end


BennisBattleStart::
# 450 "data/maps/BennisDojo/scripts.pory"
	lockall
# 451 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisBattleStart_Text_0, MSGBOX_YESNO
# 452 "data/maps/BennisDojo/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BennisBattleStart_2
# 459 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisIfNo, MSGBOX_AUTOCLOSE
# 460 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 461 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisLeave
# 462 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 463 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniLeave
# 464 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 465 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakLeave
# 466 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 467 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerLeaves
# 468 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 469 "data/maps/BennisDojo/scripts.pory"
	warp MAP_DEWFORD_TOWN, 8, 18
# 470 "data/maps/BennisDojo/scripts.pory"
	waitstate
BennisBattleStart_1:
# 472 "data/maps/BennisDojo/scripts.pory"
	releaseall
	end

BennisBattleStart_2:
# 453 "data/maps/BennisDojo/scripts.pory"
	msgbox Bennis_Intro, MSGBOX_AUTOCLOSE
# 454 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BENNIS_1, Bennis_Outro
# 455 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 456 "data/maps/BennisDojo/scripts.pory"
	goto BennisEnd
	goto BennisBattleStart_1


BennisEnd::
# 477 "data/maps/BennisDojo/scripts.pory"
	lockall
# 478 "data/maps/BennisDojo/scripts.pory"
	msgbox Bennis2, MSGBOX_DEFAULT
# 479 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 480 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisEnd_Text_0, MSGBOX_AUTOCLOSE
# 481 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 482 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 483 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 484 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak5, MSGBOX_AUTOCLOSE
# 485 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 486 "data/maps/BennisDojo/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 487 "data/maps/BennisDojo/scripts.pory"
	delay 8
# 488 "data/maps/BennisDojo/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 489 "data/maps/BennisDojo/scripts.pory"
	playse SE_FLEE
# 490 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_BENNIS_DOJO_1
# 491 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 2
# 492 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_SLATEPORT_GYM_STATE, 0
# 493 "data/maps/BennisDojo/scripts.pory"
	removeobject 1
# 494 "data/maps/BennisDojo/scripts.pory"
	removeobject 2
# 495 "data/maps/BennisDojo/scripts.pory"
	removeobject 3
# 496 "data/maps/BennisDojo/scripts.pory"
	waitse
# 497 "data/maps/BennisDojo/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 498 "data/maps/BennisDojo/scripts.pory"
	delay 24
# 499 "data/maps/BennisDojo/scripts.pory"
	fadedefaultbgm
# 500 "data/maps/BennisDojo/scripts.pory"
	releaseall
	end


# 504 "data/maps/BennisDojo/scripts.pory"
exclaim:
# 505 "data/maps/BennisDojo/scripts.pory"
	emote_exclamation_mark
	step_end

# 508 "data/maps/BennisDojo/scripts.pory"
AsakMove1:
# 509 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 509 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 509 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 509 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 510 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 511 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 525 "data/maps/BennisDojo/scripts.pory"
PaniniMove1:
# 526 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 526 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 526 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 526 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 526 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 526 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 526 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 527 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 533 "data/maps/BennisDojo/scripts.pory"
BennisMove1:
# 534 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 534 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 534 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 534 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 534 "data/maps/BennisDojo/scripts.pory"
	walk_down
	step_end

# 569 "data/maps/BennisDojo/scripts.pory"
faceup:
# 570 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_up
	step_end

# 573 "data/maps/BennisDojo/scripts.pory"
faceleft:
# 574 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_left
	step_end

# 577 "data/maps/BennisDojo/scripts.pory"
faceright:
# 578 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_right
	step_end

# 580 "data/maps/BennisDojo/scripts.pory"
facedown:
# 581 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_down
	step_end

# 584 "data/maps/BennisDojo/scripts.pory"
PlayerLeaves:
# 585 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 585 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 585 "data/maps/BennisDojo/scripts.pory"
	walk_down
	step_end

# 588 "data/maps/BennisDojo/scripts.pory"
AsakMove2:
# 589 "data/maps/BennisDojo/scripts.pory"
	walk_fast_up
# 589 "data/maps/BennisDojo/scripts.pory"
	walk_fast_up
# 590 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
	step_end

# 593 "data/maps/BennisDojo/scripts.pory"
AsakMove3:
# 594 "data/maps/BennisDojo/scripts.pory"
	walk_fast_right
# 595 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 595 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 596 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 599 "data/maps/BennisDojo/scripts.pory"
AsakLeave:
# 600 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 601 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 601 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 601 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 601 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 602 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_down
	step_end

# 605 "data/maps/BennisDojo/scripts.pory"
PaniniLeave:
# 606 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 606 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 606 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 606 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 606 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 606 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 606 "data/maps/BennisDojo/scripts.pory"
	walk_up
	step_end

# 609 "data/maps/BennisDojo/scripts.pory"
BennisLeave:
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
BennisDojo_Movement_AsakReturns:
# 614 "data/maps/BennisDojo/scripts.pory"
	walk_right
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
# 615 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 615 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 615 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 616 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_left
	step_end

# 619 "data/maps/BennisDojo/scripts.pory"
BennisDojo_Movement_AsakReturnsEast:
# 620 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 620 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 620 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 620 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 620 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 620 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 620 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 620 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 620 "data/maps/BennisDojo/scripts.pory"
	walk_up
	step_end

# 623 "data/maps/BennisDojo/scripts.pory"
BennisDojo_Movement_AsakReturnsOriginalSpot:
# 624 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 624 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 624 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 624 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 624 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 624 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 624 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 624 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 624 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 624 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 625 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 625 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 625 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 625 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 626 "data/maps/BennisDojo/scripts.pory"
	face_down
	step_end

# 629 "data/maps/BennisDojo/scripts.pory"
BennisDojo_Movement_AsakReturnsOriginalSpotEast:
# 630 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 630 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 630 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 630 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 630 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 630 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 630 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 630 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 630 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 631 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 631 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 631 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 631 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 631 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 632 "data/maps/BennisDojo/scripts.pory"
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
	.string "{PLAYER}, please give LADY MOMO my\n  regards the next time you see her.$"

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
# 148 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: {PLAYER}?!\n What are you doing here?$"

BennisDojo_EventScript_AsakReturn_Text_2:
# 152 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm. We battled.\n {PLAYER} had a wonderful victory.\p ASAK: I see… As expected.\n They also beat my brother.$"

BennisDojo_EventScript_AsakReturn_Text_3:
# 159 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Oho. You beat\n BRUNO? That's impressive.\p ASAK: Well, it feels good to be back.\n Any longer there and the old hag\l would've made me help look for a\l successor.\p But who knows? Maybe {PLAYER} can take\n on the role once they're done with\l their travels.\p Well, time to get back to business\n as usual!$"

BennisDojo_EventScript_AsakReturn_Text_4:
# 177 "data/maps/BennisDojo/scripts.pory"
	.string "Hm.\n Well, it was a good battle.\l You're welcome to train here anytime.$"

BennisDojo_EventScript_AsakReturnEast_Text_0:
# 204 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: {PLAYER}?!\n What are you doing here?\p MASTER BENNIS: Hm. We battled.\n {PLAYER} had a wonderful victory.\p ASAK: I see… As expected.\n They also beat my brother.$"

BennisDojo_EventScript_AsakReturnEast_Text_1:
# 214 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Oho. You beat\n BRUNO? That's impressive.$"

BennisDojo_EventScript_AsakReturnEast_Text_2:
# 221 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Well, it feels good to be back.\n Any longer there and the old hag\l would've made me help look for a\l successor.\p But who knows? Maybe {PLAYER} can take\n on the role once they're done with\l their travels.\p Well, time to get back to business\n as usual!$"

BennisDojo_EventScript_AsakReturnNorth_Text_0:
# 269 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: {PLAYER}?!\n What are you doing here?!$"

BennisDojo_EventScript_AsakReturnNorth_Text_1:
# 274 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm. We battled.\n {PLAYER} had a wonderful victory.\p ASAK: I see… As expected.\n They also beat my brother.\p MASTER BENNIS: Oho. BRUNO?\n That's impressive.\p ASAK: Well, it feels good to be back.\n Any longer there and the old hag\l would've made me help look for a\l successor.\p But who knows? Maybe {PLAYER} can take\n on the role once they're done with\l their travels.\p Well, time to get back to business\n as usual!$"

BennisDojo_EventScript_NoCheating_Text_0:
# 313 "data/maps/BennisDojo/scripts.pory"
	.string "What are you doing?\n You have to fight us in order.$"

BennisDojo_EventScript_NoCheatingPanini_Text_0:
# 319 "data/maps/BennisDojo/scripts.pory"
	.string "Panini?\n Papanini panini.$"

BennisDojo_EventScript_BaldyBaldyOverThere_Text_0:
# 326 "data/maps/BennisDojo/scripts.pory"
	.string "Baldy, baldy, over there!\n What's it like to have no hair?$"

DojoBattleTrigger_Text_0:
# 341 "data/maps/BennisDojo/scripts.pory"
	.string "???: Hey!$"

DojoBattleTrigger_Text_1:
# 353 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Impossible…$"

DojoBattleTrigger_Text_2:
# 357 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI!$"

DojoBattleTrigger_Text_3:
# 367 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Panini?$"

DojoBattleTrigger_Text_4:
# 371 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Panini!$"

DojoBattleTrigger_Text_5:
# 377 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: P-Panini…$"

DojoBattleTrigger_Text_6:
# 381 "data/maps/BennisDojo/scripts.pory"
	.string "???: What's all this noise?$"

DojoBattleTrigger_Text_7:
# 403 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm.\n  I'll take you on.$"

DojoBattleTrigger_Text_8:
# 416 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Pani!$"

Dojo_EarlierAnswerNO_Text_0:
# 434 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Back again?!$"

BennisBattleStart_Text_0:
# 451 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Are you ready now?$"

BennisEnd_Text_0:
# 480 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: P-Panini?!$"

Asak1::
# 514 "data/maps/BennisDojo/scripts.pory"
	.string "Who are you? Another goofball TRAINER?\n Didn't you see the sign?\p How rude of you to barge into our dojo\n when MASTER BENNIS is meditating.\p I guess I'll have to teach you a lesson!$"

Asak_Outro::
# 521 "data/maps/BennisDojo/scripts.pory"
	.string "I lost my focus…$"

Panini_Outro::
# 523 "data/maps/BennisDojo/scripts.pory"
	.string "Panini?!$"

Asak2::
# 530 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Show this hooligan what happens\n when you challenge our dojo!$"

AsakPaniniLoss::
# 537 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: WHAT?! Even though I'VE never\n even beaten Panini…$"

Asak3::
# 541 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: MASTER BENNIS! I'm sorry for\n disturbing you.\p This TRAINER was intruding on\n our dojo.$"

Asak3_5::
# 546 "data/maps/BennisDojo/scripts.pory"
	.string "We tried to get rid of them, but\n I'm ashamed to say we were no match.$"

Asak4::
# 549 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Ha! It's over for you now.\n MASTER BENNIS has NEVER lost!$"

BennisIfNo::
# 552 "data/maps/BennisDojo/scripts.pory"
	.string "Hm.\n Don't keep me waiting too long.$"

Bennis_Intro::
# 555 "data/maps/BennisDojo/scripts.pory"
	.string "Oho. I'm gettin' good vibrations from\n this place.$"

Bennis_Outro::
# 560 "data/maps/BennisDojo/scripts.pory"
	.string "Everyone's so mean to me…$"

Bennis2::
# 562 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm… Beefy.$"

Asak5::
# 564 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: This can't be…\n Even MASTER BENNIS…\p ASAK: W-We won't forget this\n humiliation!$"
