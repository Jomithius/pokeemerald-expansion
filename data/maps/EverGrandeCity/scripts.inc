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

EverGrandeCity_EventScript_Trigger::
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
	msgbox EverGrandeCity_EventScript_Trigger_Text_0, MSGBOX_AUTOCLOSE
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
	msgbox EverGrandeCity_EventScript_Trigger_Text_1, MSGBOX_AUTOCLOSE
# 60 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 61 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 62 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 2
# 63 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak2, MSGBOX_AUTOCLOSE
# 64 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 65 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 66 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 2
# 67 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 68 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 1
# 69 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Bennis1, MSGBOX_AUTOCLOSE
# 70 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 71 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BENNIS_3, EverGrandeCity_BennisDefeat
# 72 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 73 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_Trigger_Text_2, MSGBOX_AUTOCLOSE
# 75 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 76 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_Trigger_Text_3, MSGBOX_AUTOCLOSE
# 77 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_Trigger_Text_4, MSGBOX_AUTOCLOSE
# 78 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 79 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak3, MSGBOX_AUTOCLOSE
# 80 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 81 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_NONE, FALSE
# 82 "data/maps/EverGrandeCity/scripts.pory"
	delay 10
# 83 "data/maps/EverGrandeCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 84 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 1
# 85 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 2
# 86 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 3
# 87 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_HIDE_BENNIS_VICTORY_ROAD
# 88 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 4
# 89 "data/maps/EverGrandeCity/scripts.pory"
	playse SE_FLEE
# 90 "data/maps/EverGrandeCity/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 91 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 92 "data/maps/EverGrandeCity/scripts.pory"
	fadedefaultbgm
# 93 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_TriggerRight::
# 98 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 99 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_VICTORY_ROAD
# 100 "data/maps/EverGrandeCity/scripts.pory"
	addobject 3
# 101 "data/maps/EverGrandeCity/scripts.pory"
	addobject 2
# 102 "data/maps/EverGrandeCity/scripts.pory"
	addobject 1
# 103 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_NONE, FALSE
# 104 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_Trigger_Text_0, MSGBOX_AUTOCLOSE
# 106 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 107 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_BENNIS_DOJO, TRUE
# 108 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 109 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 3, EverGrandeCity_Movement_BennisFollower
# 110 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 111 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, EverGrandeCity_Movement_BennisFollower
# 112 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 113 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, EverGrandeCity_Movement_BennisFollower
# 114 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 1
# 115 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak1, MSGBOX_AUTOCLOSE
# 116 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 117 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_Trigger_Text_1, MSGBOX_AUTOCLOSE
# 118 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 119 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 120 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 2
# 121 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak2, MSGBOX_AUTOCLOSE
# 122 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 123 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 124 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 2
# 125 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, EverGrandeCity_Movement_BennisRight
# 126 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 1
# 127 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Bennis1, MSGBOX_AUTOCLOSE
# 128 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 129 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BENNIS_3, EverGrandeCity_BennisDefeat
# 130 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 131 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_Trigger_Text_2, MSGBOX_AUTOCLOSE
# 133 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 134 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_Trigger_Text_3, MSGBOX_AUTOCLOSE
# 135 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_Trigger_Text_4, MSGBOX_AUTOCLOSE
# 136 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 137 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Asak3, MSGBOX_AUTOCLOSE
# 138 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 139 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_NONE, FALSE
# 140 "data/maps/EverGrandeCity/scripts.pory"
	delay 10
# 141 "data/maps/EverGrandeCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 142 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 1
# 143 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 2
# 144 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 3
# 145 "data/maps/EverGrandeCity/scripts.pory"
	playse SE_FLEE
# 146 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_HIDE_BENNIS_VICTORY_ROAD
# 147 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 4
# 148 "data/maps/EverGrandeCity/scripts.pory"
	playse SE_FLEE
# 149 "data/maps/EverGrandeCity/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 150 "data/maps/EverGrandeCity/scripts.pory"
	delay 20
# 151 "data/maps/EverGrandeCity/scripts.pory"
	fadedefaultbgm
# 152 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


# 156 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Movement_BennisFollower:
# 157 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 157 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 157 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 157 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 157 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
	step_end

# 184 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Movement_BennisRight:
# 185 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 186 "data/maps/EverGrandeCity/scripts.pory"
	walk_right
# 187 "data/maps/EverGrandeCity/scripts.pory"
	face_down
	step_end

EverGrandeCity_EventScript_Nurse::
# 191 "data/maps/EverGrandeCity/scripts.pory"
	lock
# 192 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 4, Common_Movement_FacePlayer
# 193 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 4
# 194 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Nurse, MSGBOX_AUTOCLOSE
# 195 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 196 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 197 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Nurse2, MSGBOX_AUTOCLOSE
# 198 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 4, Common_Movement_FaceOriginalDirection
# 199 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 4
# 200 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 201 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_James::
# 215 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 216 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_NONE, FALSE
# 217 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_James_Text_0, MSGBOX_AUTOCLOSE
# 218 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 219 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 5, Common_Movement_WalkDown
# 220 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 5
# 221 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_James1, MSGBOX_AUTOCLOSE
# 222 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
	return


# 230 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Movement_EnterPokeball:
# 231 "data/maps/EverGrandeCity/scripts.pory"
	enter_pokeball
	step_end

EverGrandeCity_EventScript_Trigger_Text_0:
# 46 "data/maps/EverGrandeCity/scripts.pory"
	.string "Baldy baldy over there, what's it like\n to have no hair?$"

EverGrandeCity_EventScript_Trigger_Text_1:
# 59 "data/maps/EverGrandeCity/scripts.pory"
	.string "PANINI: Panini!$"

EverGrandeCity_EventScript_Trigger_Text_2:
# 73 "data/maps/EverGrandeCity/scripts.pory"
	.string "MASTER BENNIS: Hm.\n Still beefy.$"

EverGrandeCity_EventScript_Trigger_Text_3:
# 76 "data/maps/EverGrandeCity/scripts.pory"
	.string "ASAK: No way...$"

EverGrandeCity_EventScript_Trigger_Text_4:
# 77 "data/maps/EverGrandeCity/scripts.pory"
	.string "PANINI: P-Panini...$"

EverGrandeCity_EventScript_James_Text_0:
# 217 "data/maps/EverGrandeCity/scripts.pory"
	.string "I've been waiting for you.$"

EverGrandeCity_Text_Asak1::
# 160 "data/maps/EverGrandeCity/scripts.pory"
	.string "ASAK: This time for sure!\n MASTER BENNIS will finally regain\l his honor.$"

EverGrandeCity_Text_Asak2::
# 166 "data/maps/EverGrandeCity/scripts.pory"
	.string "ASAK: Now, MASTER BENNIS!$"

EverGrandeCity_Text_Bennis1::
# 170 "data/maps/EverGrandeCity/scripts.pory"
	.string "MASTER BENNIS: Oho. I'm gettin' good\n vibrations from this place.$"

EverGrandeCity_BennisDefeat::
# 175 "data/maps/EverGrandeCity/scripts.pory"
	.string "Everyone's so mean to me...$"

EverGrandeCity_Text_Asak3::
# 179 "data/maps/EverGrandeCity/scripts.pory"
	.string "ASAK: Kuh.... W-We won't...\n ... Forget...$"

EverGrandeCity_Text_Nurse::
# 205 "data/maps/EverGrandeCity/scripts.pory"
	.string "You and your POKéMON look tired.\n Please, take a quick break.$"

EverGrandeCity_Text_Nurse2::
# 210 "data/maps/EverGrandeCity/scripts.pory"
	.string "Please come again.$"

EverGrandeCity_Text_James1::
# 226 "data/maps/EverGrandeCity/scripts.pory"
	.string "$"
