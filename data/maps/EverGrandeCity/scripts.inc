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
    setflag FLAG_HIDE_RIVAL_POKEMON_EVERGRANDE_CITY
# 10 "data/maps/EverGrandeCity/scripts.pory"
    setflag FLAG_HIDE_BENNIS_VICTORY_ROAD
# 11 "data/maps/EverGrandeCity/scripts.pory"
	end
# 12 "data/maps/EverGrandeCity/scripts.pory"

# 13 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_VictoryRoadSign::
# 14 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
# 15 "data/maps/EverGrandeCity/scripts.pory"
	end
# 16 "data/maps/EverGrandeCity/scripts.pory"

# 17 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_CitySign::
# 18 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
# 19 "data/maps/EverGrandeCity/scripts.pory"
	end
# 20 "data/maps/EverGrandeCity/scripts.pory"

# 21 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_PokemonLeagueSign::
# 22 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
# 23 "data/maps/EverGrandeCity/scripts.pory"
	end
# 24 "data/maps/EverGrandeCity/scripts.pory"

# 25 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_SetVisitedEverGrande::
# 26 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 27 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 28 "data/maps/EverGrandeCity/scripts.pory"
	end
# 29 "data/maps/EverGrandeCity/scripts.pory"

# 30 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringVictoryRoad:
# 31 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING VICTORY ROAD$"
# 32 "data/maps/EverGrandeCity/scripts.pory"

# 33 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringPokemonLeague:
# 34 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING POKéMON LEAGUE\n"
# 35 "data/maps/EverGrandeCity/scripts.pory"
	.string "CENTER GATE$"
# 36 "data/maps/EverGrandeCity/scripts.pory"

# 37 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_CitySign:
# 38 "data/maps/EverGrandeCity/scripts.pory"
	.string "EVER GRANDE CITY\p"
# 39 "data/maps/EverGrandeCity/scripts.pory"
	.string "“The paradise of flowers, the sea,\n"
# 40 "data/maps/EverGrandeCity/scripts.pory"
	.string "and POKéMON.”$"

EverGrandeCity_OnResume::
# 45 "data/maps/EverGrandeCity/scripts.pory"
	call_if_defeated TRAINER_JOMITHIUS_4, EverGrandeCity_RemoveRivalPokemon
	end


EverGrandeCity_RemoveRivalPokemon::
# 50 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 6
# 51 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 7
	return


EverGrandeCity_EventScript_BennisTrigger::
# 56 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 57 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_VICTORY_ROAD
# 58 "data/maps/EverGrandeCity/scripts.pory"
	addobject 3
# 59 "data/maps/EverGrandeCity/scripts.pory"
	addobject 2
# 60 "data/maps/EverGrandeCity/scripts.pory"
	addobject 1
# 61 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_NONE, FALSE
# 62 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_BennisTrigger_Text_0, MSGBOX_AUTOCLOSE
# 64 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 65 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 66 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 67 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_BENNIS_DOJO, TRUE
# 68 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 69 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 3, EverGrandeCity_Movement_BennisFollower
# 70 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 71 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, EverGrandeCity_Movement_BennisFollower
# 72 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 73 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, EverGrandeCity_Movement_BennisFollower
# 74 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 1
# 75 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak1, MSGBOX_AUTOCLOSE
# 76 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 77 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 78 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 2
# 79 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak2, MSGBOX_AUTOCLOSE
# 80 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 81 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 82 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 2
# 83 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 84 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 1
# 85 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Bennis1, MSGBOX_AUTOCLOSE
# 86 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 87 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BENNIS_3, EverGrandeCity_BennisDefeat
# 88 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak3, MSGBOX_AUTOCLOSE
# 89 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 90 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_NONE, FALSE
# 91 "data/maps/EverGrandeCity/scripts.pory"
	delay 10
# 92 "data/maps/EverGrandeCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 93 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 1
# 94 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 2
# 95 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 3
# 96 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_HIDE_BENNIS_VICTORY_ROAD
# 97 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 4
# 98 "data/maps/EverGrandeCity/scripts.pory"
	playse SE_FLEE
# 99 "data/maps/EverGrandeCity/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 100 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 101 "data/maps/EverGrandeCity/scripts.pory"
	savebgm MUS_DUMMY
# 102 "data/maps/EverGrandeCity/scripts.pory"
	fadedefaultbgm
# 103 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_BennisTriggerRight::
# 108 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 109 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_VICTORY_ROAD
# 110 "data/maps/EverGrandeCity/scripts.pory"
	addobject 3
# 111 "data/maps/EverGrandeCity/scripts.pory"
	addobject 2
# 112 "data/maps/EverGrandeCity/scripts.pory"
	addobject 1
# 113 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_NONE, FALSE
# 114 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_BennisTrigger_Text_0, MSGBOX_AUTOCLOSE
# 116 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 117 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 118 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 119 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_BENNIS_DOJO, TRUE
# 120 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 121 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 3, EverGrandeCity_Movement_BennisFollower
# 122 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 123 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, EverGrandeCity_Movement_BennisFollower
# 124 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 125 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, EverGrandeCity_Movement_BennisFollower
# 126 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 1
# 127 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak1, MSGBOX_AUTOCLOSE
# 128 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 129 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 130 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 2
# 131 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak2, MSGBOX_AUTOCLOSE
# 132 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 133 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 134 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 2
# 135 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, EverGrandeCity_Movement_BennisRight
# 136 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 1
# 137 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Bennis1, MSGBOX_AUTOCLOSE
# 138 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 139 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BENNIS_3, EverGrandeCity_BennisDefeat
# 140 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak3, MSGBOX_AUTOCLOSE
# 141 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 142 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_NONE, FALSE
# 143 "data/maps/EverGrandeCity/scripts.pory"
	delay 10
# 144 "data/maps/EverGrandeCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 145 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 1
# 146 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 2
# 147 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 3
# 148 "data/maps/EverGrandeCity/scripts.pory"
	playse SE_FLEE
# 149 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_HIDE_BENNIS_VICTORY_ROAD
# 150 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 4
# 151 "data/maps/EverGrandeCity/scripts.pory"
	playse SE_FLEE
# 152 "data/maps/EverGrandeCity/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 153 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 154 "data/maps/EverGrandeCity/scripts.pory"
	savebgm MUS_DUMMY
# 155 "data/maps/EverGrandeCity/scripts.pory"
	fadedefaultbgm
# 156 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


# 160 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Movement_BennisFollower:
# 161 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 161 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 161 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 161 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 161 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
	step_end

# 192 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Movement_BennisRight:
# 193 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 194 "data/maps/EverGrandeCity/scripts.pory"
	walk_right
# 195 "data/maps/EverGrandeCity/scripts.pory"
	face_down
	step_end

EverGrandeCity_EventScript_Nurse::
# 199 "data/maps/EverGrandeCity/scripts.pory"
	lock
# 200 "data/maps/EverGrandeCity/scripts.pory"
	faceplayer
# 201 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Nurse, MSGBOX_AUTOCLOSE
# 202 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 203 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 204 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Nurse2, MSGBOX_AUTOCLOSE
# 205 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 206 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 4, Common_Movement_FaceOriginalDirection
# 207 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 4
# 208 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventTrigger_JamesLeft::
# 230 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 231 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 232 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_James
	end


EverGrandeCity_EventTrigger_JamesRight::
# 237 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 238 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 239 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_James
	end


EverGrandeCity_EventScript_James::
# 244 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 245 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 246 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_NONE, TRUE
# 247 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_James_Text_0, MSGBOX_AUTOCLOSE
# 248 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 249 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 250 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 251 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 252 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 5
# 253 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_James1, MSGBOX_AUTOCLOSE
# 254 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 255 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 5, Common_Movement_WalkDown
# 256 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 5
# 257 "data/maps/EverGrandeCity/scripts.pory"
	delay 10
# 258 "data/maps/EverGrandeCity/scripts.pory"
	playse SE_BALL_OPEN
# 259 "data/maps/EverGrandeCity/scripts.pory"
	fadescreen FADE_TO_WHITE
# 260 "data/maps/EverGrandeCity/scripts.pory"
	addobject 6
# 261 "data/maps/EverGrandeCity/scripts.pory"
	addobject 7
# 262 "data/maps/EverGrandeCity/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 263 "data/maps/EverGrandeCity/scripts.pory"
	playmoncry SPECIES_TYPHLOSION_HISUI, CRY_MODE_ENCOUNTER
# 264 "data/maps/EverGrandeCity/scripts.pory"
	waitmoncry
# 265 "data/maps/EverGrandeCity/scripts.pory"
	playmoncry SPECIES_GRIMMSNARL, CRY_MODE_ENCOUNTER
# 266 "data/maps/EverGrandeCity/scripts.pory"
	waitmoncry
# 267 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_James2, MSGBOX_AUTOCLOSE
# 268 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 269 "data/maps/EverGrandeCity/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EverGrandeCity_EventScript_James_2
# 273 "data/maps/EverGrandeCity/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq EverGrandeCity_EventScript_James_3
# 278 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 279 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_WalkUp
EverGrandeCity_EventScript_James_1:
# 281 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 282 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EvergrandeCity_Movement_PlayerRightTrigger
# 283 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 284 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_JOMITHIUS_4, EvergrandeCity_JamesDefeat
# 285 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 5, Common_Movement_WalkUp
# 286 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 5
# 287 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_THE_DAY_WILL_COME, FALSE
# 288 "data/maps/EverGrandeCity/scripts.pory"
	delay 30
# 289 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_James_Text_1, MSGBOX_DEFAULT
# 292 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 293 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 294 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 5
# 295 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_James3, MSGBOX_AUTOCLOSE
# 296 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 297 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 5, Common_Movement_WalkDown
# 298 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 5
# 299 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_James4, MSGBOX_DEFAULT
# 300 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 301 "data/maps/EverGrandeCity/scripts.pory"
	giveitem ITEM_MEGA_RING
# 302 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 303 "data/maps/EverGrandeCity/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 99
# 304 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 305 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_James5, MSGBOX_AUTOCLOSE
# 306 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 307 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 5, Common_Movement_WalkLeft
# 308 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 5
# 309 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_James6, MSGBOX_AUTOCLOSE
# 310 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 311 "data/maps/EverGrandeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 312 "data/maps/EverGrandeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 313 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 314 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 5
# 315 "data/maps/EverGrandeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 316 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_HIDE_RIVAL_EVERGRANDE_CITY
# 317 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_HIDE_RIVAL_POKEMON_EVERGRANDE_CITY
# 318 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_JAMES_RUSTBORO_CITY
# 319 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_DEFEATED_JAMES_EVERGRANDE
# 320 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_ENABLED_JOMITHIUS_MATCH_CALL
# 321 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_ENABLED_JAMES_MATCH_CALL
# 322 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_MISA_STATE, 10
# 323 "data/maps/EverGrandeCity/scripts.pory"
	savebgm MUS_DUMMY
# 324 "data/maps/EverGrandeCity/scripts.pory"
	fadedefaultbgm
# 325 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end

EverGrandeCity_EventScript_James_2:
# 270 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergrandeCity_Movement_PlayerLeftTrigger
# 271 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EvergrandeCity_Movement_PlayerLeftTrigger
	goto EverGrandeCity_EventScript_James_1

EverGrandeCity_EventScript_James_3:
# 274 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergrandeCity_Movement_PlayerRightTrigger
# 275 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EvergrandeCity_Movement_PlayerRightTrigger
	goto EverGrandeCity_EventScript_James_1


# 375 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Movement_EnterPokeball:
# 376 "data/maps/EverGrandeCity/scripts.pory"
	enter_pokeball
	step_end

# 379 "data/maps/EverGrandeCity/scripts.pory"
EvergrandeCity_Movement_PlayerLeftTrigger:
# 380 "data/maps/EverGrandeCity/scripts.pory"
	walk_right
# 381 "data/maps/EverGrandeCity/scripts.pory"
	walk_up
	step_end

# 384 "data/maps/EverGrandeCity/scripts.pory"
EvergrandeCity_Movement_PlayerRightTrigger:
# 385 "data/maps/EverGrandeCity/scripts.pory"
	walk_left
# 386 "data/maps/EverGrandeCity/scripts.pory"
	walk_up
	step_end

EverGrandeCity_EventScript_StrongTrainerWaits::
# 390 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 391 "data/maps/EverGrandeCity/scripts.pory"
	playse SE_PIN
# 392 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 393 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 4
# 394 "data/maps/EverGrandeCity/scripts.pory"
	waitse
# 395 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 396 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 4
# 397 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 398 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 399 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_StrongTrainerWaits_Text_0, MSGBOX_AUTOCLOSE
# 402 "data/maps/EverGrandeCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 403 "data/maps/EverGrandeCity/scripts.pory"
	switch VAR_TEMP_1
# 404 "data/maps/EverGrandeCity/scripts.pory"
	case 28, EverGrandeCity_EventScript_StrongTrainerWaits_3
# 406 "data/maps/EverGrandeCity/scripts.pory"
	case 29, EverGrandeCity_EventScript_StrongTrainerWaits_4
# 408 "data/maps/EverGrandeCity/scripts.pory"
	case 30, EverGrandeCity_EventScript_StrongTrainerWaits_5
# 411 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
EverGrandeCity_EventScript_StrongTrainerWaits_1:
# 413 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 414 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 415 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 4
# 416 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 417 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_StrongTrainerWaits_Text_1, MSGBOX_AUTOCLOSE
# 429 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 430 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_EVER_GRANDE_CITY_STATE, 1
# 431 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_BALDESIA_MAIN_HOUSE
# 432 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_ARIA_BALDESIA_MAIN_HOUSE
# 433 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_HIDE_PANINI_ARIA_MAIN_HOUSE
# 434 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_HIDE_OLD_MAN_SNOWDRIFT
# 435 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end

EverGrandeCity_EventScript_StrongTrainerWaits_3:
# 405 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_Movement_PlayerToNurse28
	goto EverGrandeCity_EventScript_StrongTrainerWaits_1

EverGrandeCity_EventScript_StrongTrainerWaits_4:
# 407 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_Movement_PlayerToNurse29
	goto EverGrandeCity_EventScript_StrongTrainerWaits_1

EverGrandeCity_EventScript_StrongTrainerWaits_5:
# 409 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_Movement_PlayerToNurse30
	goto EverGrandeCity_EventScript_StrongTrainerWaits_1


# 439 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Movement_PlayerToNurse28:
# 440 "data/maps/EverGrandeCity/scripts.pory"
	walk_right
# 440 "data/maps/EverGrandeCity/scripts.pory"
	walk_right
# 440 "data/maps/EverGrandeCity/scripts.pory"
	walk_right
# 441 "data/maps/EverGrandeCity/scripts.pory"
	walk_in_place_up
	step_end

# 444 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Movement_PlayerToNurse29:
# 445 "data/maps/EverGrandeCity/scripts.pory"
	walk_right
# 445 "data/maps/EverGrandeCity/scripts.pory"
	walk_right
# 445 "data/maps/EverGrandeCity/scripts.pory"
	walk_right
# 446 "data/maps/EverGrandeCity/scripts.pory"
	walk_up
	step_end

# 449 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Movement_PlayerToNurse30:
# 450 "data/maps/EverGrandeCity/scripts.pory"
	walk_right
# 450 "data/maps/EverGrandeCity/scripts.pory"
	walk_right
# 450 "data/maps/EverGrandeCity/scripts.pory"
	walk_right
# 451 "data/maps/EverGrandeCity/scripts.pory"
	walk_up
# 451 "data/maps/EverGrandeCity/scripts.pory"
	walk_up
	step_end

EverGrandeCity_EventScript_BennisTrigger_Text_0:
# 62 "data/maps/EverGrandeCity/scripts.pory"
	.string "Baldy baldy over there, what's it like\n to have no hair?$"

EverGrandeCity_EventScript_James_Text_0:
# 247 "data/maps/EverGrandeCity/scripts.pory"
	.string "???: I've been waiting for you.$"

EverGrandeCity_EventScript_James_Text_1:
# 289 "data/maps/EverGrandeCity/scripts.pory"
	.string "JAMES: …\p It feels like… I was always\n destined to lose to you, {PLAYER}.$"

EverGrandeCity_EventScript_StrongTrainerWaits_Text_0:
# 399 "data/maps/EverGrandeCity/scripts.pory"
	.string "NURSE: Oh! Congratulations!\n You've made it through VICTORY ROAD!\p Please, allow me to heal your POKéMON.$"

EverGrandeCity_EventScript_StrongTrainerWaits_Text_1:
# 417 "data/maps/EverGrandeCity/scripts.pory"
	.string "NURSE: It's been a while since I've\n seen a new TRAINER.\p May I know your name?\n … … … … … …\p Ah, {PLAYER}?!\n JAMES has told me about you!\l He's been working so hard lately.\p It almost feels like I've only been\n taking care of his POKéMON!\p {COLOR BLUE}{SHADOW LIGHT_BLUE}A shortcut has now opened up on\n VICTORY ROAD 1F.\p The current level cap is 65.$"

EverGrandeCity_Text_Asak1::
# 164 "data/maps/EverGrandeCity/scripts.pory"
	.string "ASAK: This time for sure!\n MASTER BENNIS will finally regain his\l honor!\p PANINI: Panini!$"

EverGrandeCity_Text_Asak2::
# 171 "data/maps/EverGrandeCity/scripts.pory"
	.string "ASAK: Now, MASTER BENNIS!$"

EverGrandeCity_Text_Bennis1::
# 175 "data/maps/EverGrandeCity/scripts.pory"
	.string "MASTER BENNIS: Oho. I'm gettin' good\n vibrations from this place.$"

EverGrandeCity_BennisDefeat::
# 180 "data/maps/EverGrandeCity/scripts.pory"
	.string "Everyone's so mean to me…$"

EverGrandeCity_Text_Asak3::
# 184 "data/maps/EverGrandeCity/scripts.pory"
	.string "MASTER BENNIS: Hm.\n Still beefy.\p PANINI: P-Panini…\p ASAK: Kuh… W-We won't…\n ……$"

EverGrandeCity_Text_NurseWarnJames::
# 212 "data/maps/EverGrandeCity/scripts.pory"
	.string "Oh! You're the second TRAINER\n  I've met today.\p Congratulations on making it through\n VICTORY ROAD.\p Please, take a quick break.$"

EverGrandeCity_Text_Nurse::
# 220 "data/maps/EverGrandeCity/scripts.pory"
	.string "You and your POKéMON look tired.\n Please, take a quick break.$"

EverGrandeCity_Text_Nurse2::
# 225 "data/maps/EverGrandeCity/scripts.pory"
	.string "Please come again.$"

EverGrandeCity_Text_James1::
# 329 "data/maps/EverGrandeCity/scripts.pory"
	.string "A lot changed from the last time\n we met.\p I heard what happened in SOOTOPOLIS.\n That must have been crazy.\p At that time I was here.\n Working on myself.\p We overcame a lot during our training,\n but there's still one thing I haven't\l done:\p Defeat you.$"

EverGrandeCity_Text_James2::
# 342 "data/maps/EverGrandeCity/scripts.pory"
	.string "One last time.$"

EvergrandeCity_JamesDefeat::
# 346 "data/maps/EverGrandeCity/scripts.pory"
	.string "…\n I guess it still wasn't enough.$"

EverGrandeCity_Text_James3::
# 351 "data/maps/EverGrandeCity/scripts.pory"
	.string "Even so, I'm glad my mom had me\n go on this journey.\p I won't challenge the ELITE FOUR yet.\n But I know you're going to.$"

EverGrandeCity_Text_James4::
# 357 "data/maps/EverGrandeCity/scripts.pory"
	.string "Here, take this.$"

EverGrandeCity_Text_James5::
# 361 "data/maps/EverGrandeCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}To use MEGA EVOLUTION in battle, press\n START before selecting your move.\p {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}JAMES: The ELITE FOUR are strong.\n Be careful.\p {COLOR BLUE}{SHADOW LIGHT_BLUE}The level cap for the ELITE FOUR\n is 75.$"

EverGrandeCity_Text_James6::
# 370 "data/maps/EverGrandeCity/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}JAMES: I'm gonna go back home for now.\n See ya, {PLAYER}.$"
