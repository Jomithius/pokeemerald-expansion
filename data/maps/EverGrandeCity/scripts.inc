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
    clearflag FLAG_SYS_DYNAMIC_LEVELS
# 8 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 9 "data/maps/EverGrandeCity/scripts.pory"
	end
# 10 "data/maps/EverGrandeCity/scripts.pory"

# 11 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_VictoryRoadSign::
# 12 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
# 13 "data/maps/EverGrandeCity/scripts.pory"
	end
# 14 "data/maps/EverGrandeCity/scripts.pory"

# 15 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_CitySign::
# 16 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
# 17 "data/maps/EverGrandeCity/scripts.pory"
	end
# 18 "data/maps/EverGrandeCity/scripts.pory"

# 19 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_PokemonLeagueSign::
# 20 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
# 21 "data/maps/EverGrandeCity/scripts.pory"
	end
# 22 "data/maps/EverGrandeCity/scripts.pory"

# 23 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_SetVisitedEverGrande::
# 24 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 25 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 26 "data/maps/EverGrandeCity/scripts.pory"
	end
# 27 "data/maps/EverGrandeCity/scripts.pory"

# 28 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringVictoryRoad:
# 29 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING VICTORY ROAD$"
# 30 "data/maps/EverGrandeCity/scripts.pory"

# 31 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringPokemonLeague:
# 32 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING POKéMON LEAGUE\n"
# 33 "data/maps/EverGrandeCity/scripts.pory"
	.string "CENTER GATE$"
# 34 "data/maps/EverGrandeCity/scripts.pory"

# 35 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_CitySign:
# 36 "data/maps/EverGrandeCity/scripts.pory"
	.string "EVER GRANDE CITY\p"
# 37 "data/maps/EverGrandeCity/scripts.pory"
	.string "“The paradise of flowers, the sea,\n"
# 38 "data/maps/EverGrandeCity/scripts.pory"
	.string "and POKéMON.”$"

EverGrandeCity_OnResume::
# 43 "data/maps/EverGrandeCity/scripts.pory"
	call_if_defeated TRAINER_JOMITHIUS_4, EverGrandeCity_RemoveRivalPokemon
	end


EverGrandeCity_RemoveRivalPokemon::
# 48 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 6
# 49 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 7
	return


EverGrandeCity_EventScript_BennisTrigger::
# 54 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 55 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_VICTORY_ROAD
# 56 "data/maps/EverGrandeCity/scripts.pory"
	addobject 3
# 57 "data/maps/EverGrandeCity/scripts.pory"
	addobject 2
# 58 "data/maps/EverGrandeCity/scripts.pory"
	addobject 1
# 59 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_NONE, FALSE
# 60 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_BennisTrigger_Text_0, MSGBOX_AUTOCLOSE
# 62 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 63 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_BENNIS_DOJO, TRUE
# 64 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 65 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 3, EverGrandeCity_Movement_BennisFollower
# 66 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 67 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, EverGrandeCity_Movement_BennisFollower
# 68 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 69 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, EverGrandeCity_Movement_BennisFollower
# 70 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 1
# 71 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak1, MSGBOX_AUTOCLOSE
# 72 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 73 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 74 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 2
# 75 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak2, MSGBOX_AUTOCLOSE
# 76 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 77 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 78 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 2
# 79 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 80 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 1
# 81 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Bennis1, MSGBOX_AUTOCLOSE
# 82 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 83 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BENNIS_3, EverGrandeCity_BennisDefeat
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
	savebgm MUS_DUMMY
# 98 "data/maps/EverGrandeCity/scripts.pory"
	fadedefaultbgm
# 99 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_BennisTriggerRight::
# 104 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 105 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_VICTORY_ROAD
# 106 "data/maps/EverGrandeCity/scripts.pory"
	addobject 3
# 107 "data/maps/EverGrandeCity/scripts.pory"
	addobject 2
# 108 "data/maps/EverGrandeCity/scripts.pory"
	addobject 1
# 109 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_NONE, FALSE
# 110 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_BennisTrigger_Text_0, MSGBOX_AUTOCLOSE
# 112 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 113 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_BENNIS_DOJO, TRUE
# 114 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 115 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 3, EverGrandeCity_Movement_BennisFollower
# 116 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 117 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, EverGrandeCity_Movement_BennisFollower
# 118 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 119 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, EverGrandeCity_Movement_BennisFollower
# 120 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 1
# 121 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak1, MSGBOX_AUTOCLOSE
# 122 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 123 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 124 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 2
# 125 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak2, MSGBOX_AUTOCLOSE
# 126 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 127 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 128 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 2
# 129 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, EverGrandeCity_Movement_BennisRight
# 130 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 1
# 131 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Bennis1, MSGBOX_AUTOCLOSE
# 132 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 133 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BENNIS_3, EverGrandeCity_BennisDefeat
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
	savebgm MUS_DUMMY
# 149 "data/maps/EverGrandeCity/scripts.pory"
	fadedefaultbgm
# 150 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


# 154 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Movement_BennisFollower:
# 155 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 155 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 155 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 155 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 155 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
	step_end

# 186 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Movement_BennisRight:
# 187 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 188 "data/maps/EverGrandeCity/scripts.pory"
	walk_right
# 189 "data/maps/EverGrandeCity/scripts.pory"
	face_down
	step_end

EverGrandeCity_EventScript_Nurse::
# 193 "data/maps/EverGrandeCity/scripts.pory"
	lock
# 194 "data/maps/EverGrandeCity/scripts.pory"
	faceplayer
# 195 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_unset FLAG_HIDE_RIVAL_EVERGRANDE_CITY, EverGrandeCity_EventScript_Nurse_2
# 199 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Nurse, MSGBOX_AUTOCLOSE
EverGrandeCity_EventScript_Nurse_1:
# 201 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 202 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 203 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Nurse2, MSGBOX_AUTOCLOSE
# 204 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 205 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 4, Common_Movement_FaceOriginalDirection
# 206 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 4
# 207 "data/maps/EverGrandeCity/scripts.pory"
	release
	end

EverGrandeCity_EventScript_Nurse_2:
# 196 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_NurseWarnJames, MSGBOX_AUTOCLOSE
	goto EverGrandeCity_EventScript_Nurse_1


EverGrandeCity_EventTrigger_JamesLeft::
# 229 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 230 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 231 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_James
	return


EverGrandeCity_EventTrigger_JamesRight::
# 235 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 236 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 237 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_James
	return


EverGrandeCity_EventScript_James::
# 241 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 242 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 243 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_NONE, TRUE
# 244 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_James_Text_0, MSGBOX_AUTOCLOSE
# 245 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 246 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 247 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 5
# 248 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_James1, MSGBOX_AUTOCLOSE
# 249 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 250 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 5, Common_Movement_WalkDown
# 251 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 5
# 252 "data/maps/EverGrandeCity/scripts.pory"
	delay 10
# 253 "data/maps/EverGrandeCity/scripts.pory"
	playse SE_BALL_OPEN
# 254 "data/maps/EverGrandeCity/scripts.pory"
	fadescreen FADE_TO_WHITE
# 255 "data/maps/EverGrandeCity/scripts.pory"
	addobject 6
# 256 "data/maps/EverGrandeCity/scripts.pory"
	addobject 7
# 257 "data/maps/EverGrandeCity/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 258 "data/maps/EverGrandeCity/scripts.pory"
	playmoncry SPECIES_TYPHLOSION_HISUI, CRY_MODE_ENCOUNTER
# 259 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 260 "data/maps/EverGrandeCity/scripts.pory"
	playmoncry SPECIES_GRIMMSNARL, CRY_MODE_ENCOUNTER
# 261 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 262 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_James2, MSGBOX_AUTOCLOSE
# 263 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 264 "data/maps/EverGrandeCity/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EverGrandeCity_EventScript_James_2
# 268 "data/maps/EverGrandeCity/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq EverGrandeCity_EventScript_James_3
# 273 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 274 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_WalkUp
EverGrandeCity_EventScript_James_1:
# 276 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 277 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EvergrandeCity_Movement_PlayerRightTrigger
# 278 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 279 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_JOMITHIUS_4, EvergrandeCity_JamesDefeat
# 280 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 5, Common_Movement_WalkUp
# 281 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 5
# 282 "data/maps/EverGrandeCity/scripts.pory"
	delay 30
# 283 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_THE_DAY_WILL_COME, FALSE
# 284 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_James_Text_1, MSGBOX_DEFAULT
# 287 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 288 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 289 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 5
# 290 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_James3, MSGBOX_AUTOCLOSE
# 291 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 292 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 5, Common_Movement_WalkDown
# 293 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 5
# 294 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_James4, MSGBOX_DEFAULT
# 295 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 296 "data/maps/EverGrandeCity/scripts.pory"
	giveitem ITEM_MEGA_RING
# 297 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 298 "data/maps/EverGrandeCity/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 99
# 299 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 300 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_James5, MSGBOX_AUTOCLOSE
# 301 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 302 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 5, Common_Movement_WalkLeft
# 303 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 5
# 304 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_James6, MSGBOX_AUTOCLOSE
# 305 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 306 "data/maps/EverGrandeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 307 "data/maps/EverGrandeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 308 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 309 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 5
# 310 "data/maps/EverGrandeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 311 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_HIDE_RIVAL_EVERGRANDE_CITY
# 312 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_HIDE_RIVAL_POKEMON_EVERGRANDE_CITY
# 313 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_JAMES_RUSTBORO_CITY
# 314 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_DEFEATED_JAMES_EVERGRANDE
# 315 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_ENABLED_JOMITHIUS_MATCH_CALL
# 316 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_ENABLED_JAMES_MATCH_CALL
# 317 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_MISA_STATE, 10
# 318 "data/maps/EverGrandeCity/scripts.pory"
	savebgm MUS_DUMMY
# 319 "data/maps/EverGrandeCity/scripts.pory"
	fadedefaultbgm
# 320 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end

EverGrandeCity_EventScript_James_2:
# 265 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergrandeCity_Movement_PlayerLeftTrigger
# 266 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EvergrandeCity_Movement_PlayerLeftTrigger
	goto EverGrandeCity_EventScript_James_1

EverGrandeCity_EventScript_James_3:
# 269 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergrandeCity_Movement_PlayerRightTrigger
# 270 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EvergrandeCity_Movement_PlayerRightTrigger
	goto EverGrandeCity_EventScript_James_1


# 370 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Movement_EnterPokeball:
# 371 "data/maps/EverGrandeCity/scripts.pory"
	enter_pokeball
	step_end

# 374 "data/maps/EverGrandeCity/scripts.pory"
EvergrandeCity_Movement_PlayerLeftTrigger:
# 375 "data/maps/EverGrandeCity/scripts.pory"
	walk_right
# 376 "data/maps/EverGrandeCity/scripts.pory"
	walk_up
	step_end

# 379 "data/maps/EverGrandeCity/scripts.pory"
EvergrandeCity_Movement_PlayerRightTrigger:
# 380 "data/maps/EverGrandeCity/scripts.pory"
	walk_left
# 381 "data/maps/EverGrandeCity/scripts.pory"
	walk_up
	step_end

EverGrandeCity_EventScript_BennisTrigger_Text_0:
# 60 "data/maps/EverGrandeCity/scripts.pory"
	.string "Baldy baldy over there, what's it like\n to have no hair?$"

EverGrandeCity_EventScript_James_Text_0:
# 244 "data/maps/EverGrandeCity/scripts.pory"
	.string "???: I've been waiting for you.$"

EverGrandeCity_EventScript_James_Text_1:
# 284 "data/maps/EverGrandeCity/scripts.pory"
	.string "JAMES: …\p It feels like… I was always\n destined to lose to you, {PLAYER}.$"

EverGrandeCity_Text_Asak1::
# 158 "data/maps/EverGrandeCity/scripts.pory"
	.string "ASAK: This time for sure!\n MASTER BENNIS will finally regain his\l honor!\p PANINI: Panini!$"

EverGrandeCity_Text_Asak2::
# 165 "data/maps/EverGrandeCity/scripts.pory"
	.string "ASAK: Now, MASTER BENNIS!$"

EverGrandeCity_Text_Bennis1::
# 169 "data/maps/EverGrandeCity/scripts.pory"
	.string "MASTER BENNIS: Oho. I'm gettin' good\n vibrations from this place.$"

EverGrandeCity_BennisDefeat::
# 174 "data/maps/EverGrandeCity/scripts.pory"
	.string "Everyone's so mean to me…$"

EverGrandeCity_Text_Asak3::
# 178 "data/maps/EverGrandeCity/scripts.pory"
	.string "MASTER BENNIS: Hm.\n Still beefy.\p PANINI: P-Panini…\p ASAK: Kuh… W-We won't…\n ……$"

EverGrandeCity_Text_NurseWarnJames::
# 211 "data/maps/EverGrandeCity/scripts.pory"
	.string "Oh! You're the second TRAINER\n  I've met today.\p Congratulations on making it through\n VICTORY ROAD.\p Please, take a quick break.$"

EverGrandeCity_Text_Nurse::
# 219 "data/maps/EverGrandeCity/scripts.pory"
	.string "You and your POKéMON look tired.\n Please, take a quick break.$"

EverGrandeCity_Text_Nurse2::
# 224 "data/maps/EverGrandeCity/scripts.pory"
	.string "Please come again.$"

EverGrandeCity_Text_James1::
# 324 "data/maps/EverGrandeCity/scripts.pory"
	.string "A lot changed from the last time\n we met.\p I heard what happened in SOOTOPOLIS.\n That must have been crazy.\p At that time I was here.\n Working on myself.\p We overcame a lot during our training,\n but there's still one thing I haven't\l done:\p Defeat you.$"

EverGrandeCity_Text_James2::
# 337 "data/maps/EverGrandeCity/scripts.pory"
	.string "One last time.$"

EvergrandeCity_JamesDefeat::
# 341 "data/maps/EverGrandeCity/scripts.pory"
	.string "…\n I guess it still wasn't enough.$"

EverGrandeCity_Text_James3::
# 346 "data/maps/EverGrandeCity/scripts.pory"
	.string "Even so, I'm glad my mom had me\n go on this journey.\p I won't challenge the ELITE FOUR yet.\n But I know you're going to.$"

EverGrandeCity_Text_James4::
# 352 "data/maps/EverGrandeCity/scripts.pory"
	.string "Here, take this.$"

EverGrandeCity_Text_James5::
# 356 "data/maps/EverGrandeCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}To use MEGA EVOLUTION in battle, press\n START before selecting your move.\p {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}JAMES: The ELITE FOUR are strong.\n Be careful.\p {COLOR BLUE}{SHADOW LIGHT_BLUE}The level cap for the ELITE FOUR\n is 75.$"

EverGrandeCity_Text_James6::
# 365 "data/maps/EverGrandeCity/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Well, I'm gonna go back home for now.\n See ya, {PLAYER}.$"
