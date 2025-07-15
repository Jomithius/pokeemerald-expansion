# 1 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_MapScripts::
# 2 "data/maps/EverGrandeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
# 3 "data/maps/EverGrandeCity/scripts.pory"
    map_script MAP_SCRIPT_ON_RESUME, EverGrandeCity_OnResume
# 4 "data/maps/EverGrandeCity/scripts.pory"
	.byte 0
# 5 "data/maps/EverGrandeCity/scripts.pory"

# 6 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_OnTransition:
# 7 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 8 "data/maps/EverGrandeCity/scripts.pory"
	end
# 9 "data/maps/EverGrandeCity/scripts.pory"

# 10 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_VictoryRoadSign::
# 11 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
# 12 "data/maps/EverGrandeCity/scripts.pory"
	end
# 13 "data/maps/EverGrandeCity/scripts.pory"

# 14 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_CitySign::
# 15 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
# 16 "data/maps/EverGrandeCity/scripts.pory"
	end
# 17 "data/maps/EverGrandeCity/scripts.pory"

# 18 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_PokemonLeagueSign::
# 19 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
# 20 "data/maps/EverGrandeCity/scripts.pory"
	end
# 21 "data/maps/EverGrandeCity/scripts.pory"

# 22 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_SetVisitedEverGrande::
# 23 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 24 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 25 "data/maps/EverGrandeCity/scripts.pory"
	end
# 26 "data/maps/EverGrandeCity/scripts.pory"

# 27 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringVictoryRoad:
# 28 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING VICTORY ROAD$"
# 29 "data/maps/EverGrandeCity/scripts.pory"

# 30 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringPokemonLeague:
# 31 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING POKéMON LEAGUE\n"
# 32 "data/maps/EverGrandeCity/scripts.pory"
	.string "CENTER GATE$"
# 33 "data/maps/EverGrandeCity/scripts.pory"

# 34 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_CitySign:
# 35 "data/maps/EverGrandeCity/scripts.pory"
	.string "EVER GRANDE CITY\p"
# 36 "data/maps/EverGrandeCity/scripts.pory"
	.string "“The paradise of flowers, the sea,\n"
# 37 "data/maps/EverGrandeCity/scripts.pory"
	.string "and POKéMON.”$"

EverGrandeCity_OnResume::
# 42 "data/maps/EverGrandeCity/scripts.pory"
	call_if_defeated TRAINER_JOMITHIUS_4, EverGrandeCity_RemoveRivalPokemon
	end


EverGrandeCity_RemoveRivalPokemon::
# 47 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 6
# 48 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 7
	return


EverGrandeCity_EventScript_BennisTrigger::
# 53 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 54 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_VICTORY_ROAD
# 55 "data/maps/EverGrandeCity/scripts.pory"
	addobject 3
# 56 "data/maps/EverGrandeCity/scripts.pory"
	addobject 2
# 57 "data/maps/EverGrandeCity/scripts.pory"
	addobject 1
# 58 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_NONE, FALSE
# 59 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_BennisTrigger_Text_0, MSGBOX_AUTOCLOSE
# 61 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 62 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_BENNIS_DOJO, TRUE
# 63 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 64 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 3, EverGrandeCity_Movement_BennisFollower
# 65 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 66 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, EverGrandeCity_Movement_BennisFollower
# 67 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 68 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, EverGrandeCity_Movement_BennisFollower
# 69 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 1
# 70 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak1, MSGBOX_AUTOCLOSE
# 71 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 72 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 73 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 2
# 74 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak2, MSGBOX_AUTOCLOSE
# 75 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 76 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 77 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 2
# 78 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 79 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 1
# 80 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Bennis1, MSGBOX_AUTOCLOSE
# 81 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 82 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BENNIS_3, EverGrandeCity_BennisDefeat
# 83 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 84 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak3, MSGBOX_AUTOCLOSE
# 85 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 86 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_NONE, FALSE
# 87 "data/maps/EverGrandeCity/scripts.pory"
	delay 10
# 88 "data/maps/EverGrandeCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 89 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 1
# 90 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 2
# 91 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 3
# 92 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_HIDE_BENNIS_VICTORY_ROAD
# 93 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 4
# 94 "data/maps/EverGrandeCity/scripts.pory"
	playse SE_FLEE
# 95 "data/maps/EverGrandeCity/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 96 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 97 "data/maps/EverGrandeCity/scripts.pory"
	fadedefaultbgm
# 98 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_BennisTriggerRight::
# 103 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 104 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_VICTORY_ROAD
# 105 "data/maps/EverGrandeCity/scripts.pory"
	addobject 3
# 106 "data/maps/EverGrandeCity/scripts.pory"
	addobject 2
# 107 "data/maps/EverGrandeCity/scripts.pory"
	addobject 1
# 108 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_NONE, FALSE
# 109 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_BennisTrigger_Text_0, MSGBOX_AUTOCLOSE
# 111 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 112 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_BENNIS_DOJO, TRUE
# 113 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 114 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 3, EverGrandeCity_Movement_BennisFollower
# 115 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 116 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, EverGrandeCity_Movement_BennisFollower
# 117 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 118 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, EverGrandeCity_Movement_BennisFollower
# 119 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 1
# 120 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak1, MSGBOX_AUTOCLOSE
# 121 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 122 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 123 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 2
# 124 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak2, MSGBOX_AUTOCLOSE
# 125 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 126 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 127 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 2
# 128 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, EverGrandeCity_Movement_BennisRight
# 129 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 1
# 130 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Bennis1, MSGBOX_AUTOCLOSE
# 131 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 132 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BENNIS_3, EverGrandeCity_BennisDefeat
# 133 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 134 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak3, MSGBOX_AUTOCLOSE
# 135 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 136 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_NONE, FALSE
# 137 "data/maps/EverGrandeCity/scripts.pory"
	delay 10
# 138 "data/maps/EverGrandeCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 139 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 1
# 140 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 2
# 141 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 3
# 142 "data/maps/EverGrandeCity/scripts.pory"
	playse SE_FLEE
# 143 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_HIDE_BENNIS_VICTORY_ROAD
# 144 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 4
# 145 "data/maps/EverGrandeCity/scripts.pory"
	playse SE_FLEE
# 146 "data/maps/EverGrandeCity/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 147 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 148 "data/maps/EverGrandeCity/scripts.pory"
	fadedefaultbgm
# 149 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


# 153 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Movement_BennisFollower:
# 154 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 154 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 154 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 154 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 154 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
	step_end

# 185 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Movement_BennisRight:
# 186 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 187 "data/maps/EverGrandeCity/scripts.pory"
	walk_right
# 188 "data/maps/EverGrandeCity/scripts.pory"
	face_down
	step_end

EverGrandeCity_EventScript_Nurse::
# 192 "data/maps/EverGrandeCity/scripts.pory"
	lock
# 193 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 4, Common_Movement_FacePlayer
# 194 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 4
# 195 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Nurse, MSGBOX_AUTOCLOSE
# 196 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 197 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 198 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Nurse2, MSGBOX_AUTOCLOSE
# 199 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 200 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 4, Common_Movement_FaceOriginalDirection
# 201 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 4
# 202 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventTrigger_JamesLeft::
# 216 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 217 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_James
	return


EverGrandeCity_EventTrigger_JamesRight::
# 221 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 222 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_James
	return


EverGrandeCity_EventScript_James::
# 226 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 227 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 228 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_NONE, TRUE
# 229 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_James_Text_0, MSGBOX_AUTOCLOSE
# 230 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 231 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 232 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 5
# 233 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_James1, MSGBOX_AUTOCLOSE
# 234 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 235 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 5, Common_Movement_WalkDown
# 236 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 5
# 237 "data/maps/EverGrandeCity/scripts.pory"
	delay 10
# 238 "data/maps/EverGrandeCity/scripts.pory"
	playse SE_BALL_OPEN
# 239 "data/maps/EverGrandeCity/scripts.pory"
	fadescreen FADE_TO_WHITE
# 240 "data/maps/EverGrandeCity/scripts.pory"
	addobject 6
# 241 "data/maps/EverGrandeCity/scripts.pory"
	addobject 7
# 242 "data/maps/EverGrandeCity/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 243 "data/maps/EverGrandeCity/scripts.pory"
	playmoncry SPECIES_TYPHLOSION_HISUI, CRY_MODE_ENCOUNTER
# 244 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 245 "data/maps/EverGrandeCity/scripts.pory"
	playmoncry SPECIES_GRIMMSNARL, CRY_MODE_ENCOUNTER
# 246 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 247 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_James2, MSGBOX_AUTOCLOSE
# 248 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 249 "data/maps/EverGrandeCity/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EverGrandeCity_EventScript_James_2
# 253 "data/maps/EverGrandeCity/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq EverGrandeCity_EventScript_James_3
# 258 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 259 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_WalkUp
EverGrandeCity_EventScript_James_1:
# 261 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 262 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EvergrandeCity_Movement_PlayerRightTrigger
# 263 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 264 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_JOMITHIUS_4, EvergrandeCity_JamesDefeat
# 265 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 5, Common_Movement_WalkUp
# 266 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 5
# 267 "data/maps/EverGrandeCity/scripts.pory"
	delay 30
# 268 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_CREDITS, FALSE
# 269 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_James3, MSGBOX_AUTOCLOSE
# 270 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 271 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 5, Common_Movement_WalkDown
# 272 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 5
# 273 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_James4, MSGBOX_AUTOCLOSE
# 274 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 275 "data/maps/EverGrandeCity/scripts.pory"
	giveitem ITEM_MEGA_RING
# 276 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 277 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_James5, MSGBOX_AUTOCLOSE
# 278 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 279 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 5, Common_Movement_WalkLeft
# 280 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 5
# 281 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_James6, MSGBOX_AUTOCLOSE
# 282 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 283 "data/maps/EverGrandeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 284 "data/maps/EverGrandeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 285 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 286 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 5
# 287 "data/maps/EverGrandeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 288 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_HIDE_RIVAL_EVERGRANDE_CITY
# 289 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_HIDE_RIVAL_POKEMON_EVERGRANDE_CITY
# 290 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_JAMES_RUSTBORO_CITY
# 291 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_DEFEATED_JAMES_EVERGRANDE
# 292 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_MISA_STATE, 10
# 293 "data/maps/EverGrandeCity/scripts.pory"
	fadedefaultbgm
# 294 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end

EverGrandeCity_EventScript_James_2:
# 250 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergrandeCity_Movement_PlayerLeftTrigger
# 251 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EvergrandeCity_Movement_PlayerLeftTrigger
	goto EverGrandeCity_EventScript_James_1

EverGrandeCity_EventScript_James_3:
# 254 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergrandeCity_Movement_PlayerRightTrigger
# 255 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EvergrandeCity_Movement_PlayerRightTrigger
	goto EverGrandeCity_EventScript_James_1


# 347 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Movement_EnterPokeball:
# 348 "data/maps/EverGrandeCity/scripts.pory"
	enter_pokeball
	step_end

# 351 "data/maps/EverGrandeCity/scripts.pory"
EvergrandeCity_Movement_PlayerLeftTrigger:
# 352 "data/maps/EverGrandeCity/scripts.pory"
	walk_right
# 353 "data/maps/EverGrandeCity/scripts.pory"
	walk_up
	step_end

# 356 "data/maps/EverGrandeCity/scripts.pory"
EvergrandeCity_Movement_PlayerRightTrigger:
# 357 "data/maps/EverGrandeCity/scripts.pory"
	walk_left
# 358 "data/maps/EverGrandeCity/scripts.pory"
	walk_up
	step_end

EverGrandeCity_EventScript_BennisTrigger_Text_0:
# 59 "data/maps/EverGrandeCity/scripts.pory"
	.string "Baldy baldy over there, what's it like\n to have no hair?$"

EverGrandeCity_EventScript_James_Text_0:
# 229 "data/maps/EverGrandeCity/scripts.pory"
	.string "???: I've been waiting for you.$"

EverGrandeCity_Text_Asak1::
# 157 "data/maps/EverGrandeCity/scripts.pory"
	.string "ASAK: This time for sure!\n MASTER BENNIS will finally regain his\l honor!\p PANINI: Panini!$"

EverGrandeCity_Text_Asak2::
# 164 "data/maps/EverGrandeCity/scripts.pory"
	.string "ASAK: Now, MASTER BENNIS!$"

EverGrandeCity_Text_Bennis1::
# 168 "data/maps/EverGrandeCity/scripts.pory"
	.string "MASTER BENNIS: Oho. I'm gettin' good\n vibrations from this place.$"

EverGrandeCity_BennisDefeat::
# 173 "data/maps/EverGrandeCity/scripts.pory"
	.string "Everyone's so mean to me…$"

EverGrandeCity_Text_Asak3::
# 177 "data/maps/EverGrandeCity/scripts.pory"
	.string "MASTER BENNIS: Hm.\n Still beefy.\p PANINI: P-Panini…\p ASAK: Kuh… W-We won't…\n ……$"

EverGrandeCity_Text_Nurse::
# 206 "data/maps/EverGrandeCity/scripts.pory"
	.string "You and your POKéMON look tired.\n Please, take a quick break.$"

EverGrandeCity_Text_Nurse2::
# 211 "data/maps/EverGrandeCity/scripts.pory"
	.string "Please come again.$"

EverGrandeCity_Text_James1::
# 298 "data/maps/EverGrandeCity/scripts.pory"
	.string "A lot changed from the last time\n we met.\p I heard what happened in SOOTOPOLIS.\n That must have been crazy.\p At that time I was here.\n Working on myself.\p We overcame a lot during our training,\n but there's still one thing I haven't\l done:\p Defeat you.$"

EverGrandeCity_Text_James2::
# 311 "data/maps/EverGrandeCity/scripts.pory"
	.string "One last time.$"

EvergrandeCity_JamesDefeat::
# 315 "data/maps/EverGrandeCity/scripts.pory"
	.string "…\n I guess it still wasn't enough.$"

EverGrandeCity_Text_James3::
# 320 "data/maps/EverGrandeCity/scripts.pory"
	.string "JAMES: …\n It feels like I was somehow always\l destined to lose to you, {PLAYER}.\p Even so, I'm glad my mom had me\n go on this journey.\p I won't challenge the ELITE FOUR yet.\n But I know you're going to.$"

EverGrandeCity_Text_James4::
# 329 "data/maps/EverGrandeCity/scripts.pory"
	.string "Here, take this.$"

EverGrandeCity_Text_James5::
# 333 "data/maps/EverGrandeCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}To use MEGA EVOLUTION in battle, press\n START before selecting your move.\p {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}JAMES: The ELITE FOUR are strong.\n Be careful.\p {COLOR BLUE}{SHADOW LIGHT_BLUE}The level cap for the ELITE FOUR\n is 75.$"

EverGrandeCity_Text_James6::
# 342 "data/maps/EverGrandeCity/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Well, I'm gonna go back home for now.\n See ya, {PLAYER}.$"
