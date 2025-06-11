# 1 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_MapScripts::
# 2 "data/maps/EverGrandeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
# 3 "data/maps/EverGrandeCity/scripts.pory"
	.byte 0
# 4 "data/maps/EverGrandeCity/scripts.pory"

# 5 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_OnTransition:
# 6 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 7 "data/maps/EverGrandeCity/scripts.pory"
	end
# 8 "data/maps/EverGrandeCity/scripts.pory"

# 9 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_VictoryRoadSign::
# 10 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
# 11 "data/maps/EverGrandeCity/scripts.pory"
	end
# 12 "data/maps/EverGrandeCity/scripts.pory"

# 13 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_CitySign::
# 14 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
# 15 "data/maps/EverGrandeCity/scripts.pory"
	end
# 16 "data/maps/EverGrandeCity/scripts.pory"

# 17 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_PokemonLeagueSign::
# 18 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
# 19 "data/maps/EverGrandeCity/scripts.pory"
	end
# 20 "data/maps/EverGrandeCity/scripts.pory"

# 21 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_SetVisitedEverGrande::
# 22 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 23 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 24 "data/maps/EverGrandeCity/scripts.pory"
	end
# 25 "data/maps/EverGrandeCity/scripts.pory"

# 26 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringVictoryRoad:
# 27 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING VICTORY ROAD$"
# 28 "data/maps/EverGrandeCity/scripts.pory"

# 29 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringPokemonLeague:
# 30 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING POKéMON LEAGUE\n"
# 31 "data/maps/EverGrandeCity/scripts.pory"
	.string "CENTER GATE$"
# 32 "data/maps/EverGrandeCity/scripts.pory"

# 33 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_CitySign:
# 34 "data/maps/EverGrandeCity/scripts.pory"
	.string "EVER GRANDE CITY\p"
# 35 "data/maps/EverGrandeCity/scripts.pory"
	.string "“The paradise of flowers, the sea,\n"
# 36 "data/maps/EverGrandeCity/scripts.pory"
	.string "and POKéMON.”$"

EverGrandeCity_EventScript_BennisTrigger::
# 40 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 41 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_VICTORY_ROAD
# 42 "data/maps/EverGrandeCity/scripts.pory"
	addobject 3
# 43 "data/maps/EverGrandeCity/scripts.pory"
	addobject 2
# 44 "data/maps/EverGrandeCity/scripts.pory"
	addobject 1
# 45 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_NONE, FALSE
# 46 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_BennisTrigger_Text_0, MSGBOX_AUTOCLOSE
# 48 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 49 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_BENNIS_DOJO, TRUE
# 50 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 51 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 3, EverGrandeCity_Movement_BennisFollower
# 52 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 53 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, EverGrandeCity_Movement_BennisFollower
# 54 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 55 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, EverGrandeCity_Movement_BennisFollower
# 56 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 1
# 57 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak1, MSGBOX_AUTOCLOSE
# 58 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 59 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 60 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 2
# 61 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak2, MSGBOX_AUTOCLOSE
# 62 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 63 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 64 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 2
# 65 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 66 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 1
# 67 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Bennis1, MSGBOX_AUTOCLOSE
# 68 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 69 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BENNIS_3, EverGrandeCity_BennisDefeat
# 70 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 71 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak3, MSGBOX_AUTOCLOSE
# 72 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 73 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_NONE, FALSE
# 74 "data/maps/EverGrandeCity/scripts.pory"
	delay 10
# 75 "data/maps/EverGrandeCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 76 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 1
# 77 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 2
# 78 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 3
# 79 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_HIDE_BENNIS_VICTORY_ROAD
# 80 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 4
# 81 "data/maps/EverGrandeCity/scripts.pory"
	playse SE_FLEE
# 82 "data/maps/EverGrandeCity/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 83 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 84 "data/maps/EverGrandeCity/scripts.pory"
	fadedefaultbgm
# 85 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_BennisTriggerRight::
# 90 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 91 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_VICTORY_ROAD
# 92 "data/maps/EverGrandeCity/scripts.pory"
	addobject 3
# 93 "data/maps/EverGrandeCity/scripts.pory"
	addobject 2
# 94 "data/maps/EverGrandeCity/scripts.pory"
	addobject 1
# 95 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_NONE, FALSE
# 96 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_BennisTrigger_Text_0, MSGBOX_AUTOCLOSE
# 98 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 99 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_BENNIS_DOJO, TRUE
# 100 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 101 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 3, EverGrandeCity_Movement_BennisFollower
# 102 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 103 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, EverGrandeCity_Movement_BennisFollower
# 104 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 105 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, EverGrandeCity_Movement_BennisFollower
# 106 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 1
# 107 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak1, MSGBOX_AUTOCLOSE
# 108 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 109 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 110 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 2
# 111 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak2, MSGBOX_AUTOCLOSE
# 112 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 113 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 114 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 2
# 115 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, EverGrandeCity_Movement_BennisRight
# 116 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 1
# 117 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Bennis1, MSGBOX_AUTOCLOSE
# 118 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 119 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BENNIS_3, EverGrandeCity_BennisDefeat
# 120 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 121 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak3, MSGBOX_AUTOCLOSE
# 122 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 123 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_NONE, FALSE
# 124 "data/maps/EverGrandeCity/scripts.pory"
	delay 10
# 125 "data/maps/EverGrandeCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 126 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 1
# 127 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 2
# 128 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 3
# 129 "data/maps/EverGrandeCity/scripts.pory"
	playse SE_FLEE
# 130 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_HIDE_BENNIS_VICTORY_ROAD
# 131 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 4
# 132 "data/maps/EverGrandeCity/scripts.pory"
	playse SE_FLEE
# 133 "data/maps/EverGrandeCity/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 134 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 135 "data/maps/EverGrandeCity/scripts.pory"
	fadedefaultbgm
# 136 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


# 140 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Movement_BennisFollower:
# 141 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 141 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 141 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 141 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 141 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
	step_end

# 172 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Movement_BennisRight:
# 173 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 174 "data/maps/EverGrandeCity/scripts.pory"
	walk_right
# 175 "data/maps/EverGrandeCity/scripts.pory"
	face_down
	step_end

EverGrandeCity_EventScript_Nurse::
# 179 "data/maps/EverGrandeCity/scripts.pory"
	lock
# 180 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 4, Common_Movement_FacePlayer
# 181 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 4
# 182 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Nurse, MSGBOX_AUTOCLOSE
# 183 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 184 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 185 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Nurse2, MSGBOX_AUTOCLOSE
# 186 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 187 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 4, Common_Movement_FaceOriginalDirection
# 188 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 4
# 189 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventTrigger_JamesLeft::
# 203 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 204 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_James
	return


EverGrandeCity_EventTrigger_JamesRight::
# 208 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 209 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_James
	return


EverGrandeCity_EventScript_James::
# 213 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 214 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_NONE, TRUE
# 215 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_James_Text_0, MSGBOX_AUTOCLOSE
# 216 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 217 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 218 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 5
# 219 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_James1, MSGBOX_AUTOCLOSE
# 220 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 221 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 5, Common_Movement_WalkDown
# 222 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 5
# 223 "data/maps/EverGrandeCity/scripts.pory"
	delay 10
# 224 "data/maps/EverGrandeCity/scripts.pory"
	playse SE_BALL_OPEN
# 225 "data/maps/EverGrandeCity/scripts.pory"
	fadescreen FADE_TO_WHITE
# 226 "data/maps/EverGrandeCity/scripts.pory"
	addobject 6
# 227 "data/maps/EverGrandeCity/scripts.pory"
	addobject 7
# 228 "data/maps/EverGrandeCity/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 229 "data/maps/EverGrandeCity/scripts.pory"
	playmoncry SPECIES_TYPHLOSION_HISUI, CRY_MODE_ENCOUNTER
# 230 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 231 "data/maps/EverGrandeCity/scripts.pory"
	playmoncry SPECIES_GRIMMSNARL, CRY_MODE_ENCOUNTER
# 232 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 233 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_James2, MSGBOX_AUTOCLOSE
# 234 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 235 "data/maps/EverGrandeCity/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EverGrandeCity_EventScript_James_2
# 238 "data/maps/EverGrandeCity/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq EverGrandeCity_EventScript_James_3
# 242 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
EverGrandeCity_EventScript_James_1:
# 244 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 245 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_JOMITHIUS_4, EvergrandeCity_JamesDefeat
# 246 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 247 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 6, EverGrandeCity_Movement_EnterPokeball
# 248 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 6
# 249 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 6
# 250 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 7, EverGrandeCity_Movement_EnterPokeball
# 251 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 7
# 252 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 7
# 253 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 5, Common_Movement_WalkUp
# 254 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 5
# 255 "data/maps/EverGrandeCity/scripts.pory"
	delay 30
# 256 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_CREDITS, FALSE
# 257 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_James3, MSGBOX_AUTOCLOSE
# 258 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 259 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 5, Common_Movement_WalkDown
# 260 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 5
# 261 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_James4, MSGBOX_AUTOCLOSE
# 262 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 263 "data/maps/EverGrandeCity/scripts.pory"
	giveitem ITEM_MEGA_RING
# 264 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 265 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_James5, MSGBOX_AUTOCLOSE
# 266 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 267 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 5, Common_Movement_WalkLeft
# 268 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 5
# 269 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_James6, MSGBOX_AUTOCLOSE
# 270 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 271 "data/maps/EverGrandeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 272 "data/maps/EverGrandeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 273 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 274 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 5
# 275 "data/maps/EverGrandeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 276 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_HIDE_RIVAL_EVERGRANDE_CITY
# 277 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_HIDE_RIVAL_POKEMON_EVERGRANDE_CITY
# 278 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_JAMES_RUSTBORO_CITY
# 279 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_MISA_STATE, 10
# 280 "data/maps/EverGrandeCity/scripts.pory"
	fadedefaultbgm
# 281 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end

EverGrandeCity_EventScript_James_2:
# 236 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergrandeCity_Movement_PlayerLeftTrigger
	goto EverGrandeCity_EventScript_James_1

EverGrandeCity_EventScript_James_3:
# 239 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvergrandeCity_Movement_PlayerRightTrigger
	goto EverGrandeCity_EventScript_James_1


# 334 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Movement_EnterPokeball:
# 335 "data/maps/EverGrandeCity/scripts.pory"
	enter_pokeball
	step_end

# 338 "data/maps/EverGrandeCity/scripts.pory"
EvergrandeCity_Movement_PlayerLeftTrigger:
# 339 "data/maps/EverGrandeCity/scripts.pory"
	walk_right
# 340 "data/maps/EverGrandeCity/scripts.pory"
	walk_up
	step_end

# 343 "data/maps/EverGrandeCity/scripts.pory"
EvergrandeCity_Movement_PlayerRightTrigger:
# 344 "data/maps/EverGrandeCity/scripts.pory"
	walk_left
# 345 "data/maps/EverGrandeCity/scripts.pory"
	walk_up
	step_end

EverGrandeCity_EventScript_BennisTrigger_Text_0:
# 46 "data/maps/EverGrandeCity/scripts.pory"
	.string "Baldy baldy over there, what's it like\n to have no hair?$"

EverGrandeCity_EventScript_James_Text_0:
# 215 "data/maps/EverGrandeCity/scripts.pory"
	.string "???: I've been waiting for you.$"

EverGrandeCity_Text_Asak1::
# 144 "data/maps/EverGrandeCity/scripts.pory"
	.string "ASAK: This time for sure!\n MASTER BENNIS will finally regain his\l honor!\p PANINI: Panini!$"

EverGrandeCity_Text_Asak2::
# 151 "data/maps/EverGrandeCity/scripts.pory"
	.string "ASAK: Now, MASTER BENNIS!$"

EverGrandeCity_Text_Bennis1::
# 155 "data/maps/EverGrandeCity/scripts.pory"
	.string "MASTER BENNIS: Oho. I'm gettin' good\n vibrations from this place.$"

EverGrandeCity_BennisDefeat::
# 160 "data/maps/EverGrandeCity/scripts.pory"
	.string "Everyone's so mean to me...$"

EverGrandeCity_Text_Asak3::
# 164 "data/maps/EverGrandeCity/scripts.pory"
	.string "MASTER BENNIS: Hm.\n Still beefy.\p PANINI: P-Panini...\p ASAK: Kuh.... W-We won't...\n ... Forget...$"

EverGrandeCity_Text_Nurse::
# 193 "data/maps/EverGrandeCity/scripts.pory"
	.string "You and your POKéMON look tired.\n Please, take a quick break.$"

EverGrandeCity_Text_Nurse2::
# 198 "data/maps/EverGrandeCity/scripts.pory"
	.string "Please come again.$"

EverGrandeCity_Text_James1::
# 285 "data/maps/EverGrandeCity/scripts.pory"
	.string "A lot changed from the last time\n we met.\p I heard what happened in SOOTOPOLIS.\n That must have been crazy.\p At that time I was here.\n Working on myself.\p We overcame a lot during our training,\n but there's still one thing I haven't\l done:\p Defeat you.$"

EverGrandeCity_Text_James2::
# 298 "data/maps/EverGrandeCity/scripts.pory"
	.string "One last time.$"

EvergrandeCity_JamesDefeat::
# 302 "data/maps/EverGrandeCity/scripts.pory"
	.string "...\n I guess it still wasn't enough.$"

EverGrandeCity_Text_James3::
# 307 "data/maps/EverGrandeCity/scripts.pory"
	.string "JAMES: ...\n It feels like I was somehow always\l destined to lose you, {PLAYER}.\p Even so, I'm glad my mom had me\n go on this journey.\p I won't challenge the ELITE FOUR yet.\n But I know you're going to.$"

EverGrandeCity_Text_James4::
# 316 "data/maps/EverGrandeCity/scripts.pory"
	.string "Here, take this.$"

EverGrandeCity_Text_James5::
# 320 "data/maps/EverGrandeCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}To use MEGA EVOLUTION in battle,\n press START before selecting your move.\p {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}JAMES: The ELITE FOUR are strong.\n Be careful.\p {COLOR BLUE}{SHADOW LIGHT_BLUE}The level cap for the ELITE FOUR\n is 75.$"

EverGrandeCity_Text_James6::
# 329 "data/maps/EverGrandeCity/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Well, I'm gonna go back home for now.\n See ya, {PLAYER}.$"
