WachunpelonCity_Sewer_MapScripts::
# 2 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WachunpelonCity_Sewer_OnTransition
# 6 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, WachunpelonCity_Sewer_OnResume
# 3 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WachunpelonCity_Sewer_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

WachunpelonCity_Sewer_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	map_script_2 VAR_SPEEDWAGON_STATE, 9, WachunpelonCity_Sewer_EventScript_Biker1
	.2byte 0


WachunpelonCity_Sewer_OnTransition::
# 10 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	call_if_eq VAR_SPEEDWAGON_STATE, 11, WachunpelonCity_Sewer_UpdateMusic
	end


WachunpelonCity_Sewer_UpdateMusic::
# 15 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	savebgm MUS_RG_SILPH
	return


WachunpelonCity_Sewer_OnResume::
# 20 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	call_if_defeated TRAINER_SPEEDWAGON, WachunpelonCity_Sewer_RemovePolicemanAndBikerPokemon
	end


WachunpelonCity_Sewer_RemovePolicemanAndBikerPokemon::
# 25 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 5
# 26 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 6
# 27 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 7
# 28 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 8
	return


WachunpelonCity_Sewer_EventScript_Biker1::
# 33 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	lockall
# 34 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 1, WachunpelonCity_Sewer_Movement_Policeman1
# 35 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 20
# 36 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Sewer_Movement_Player1
# 37 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 1
# 38 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_Text_Policeman1, MSGBOX_AUTOCLOSE
# 39 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmessage
# 40 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playse SE_PIN
# 41 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 1, WachunpelonCity_Sewer_Movement_Policeman2
# 42 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 1
# 43 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitse
# 44 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playbgm MUS_NONE, FALSE
# 45 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playse SE_THUNDERSTORM
# 46 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 2, WachunpelonCity_Sewer_Movement_Biker1
# 47 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 2
# 48 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 49 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitse
# 50 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playse SE_PIN
# 51 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 52 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 2
# 53 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitse
# 54 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playse SE_THUNDERSTORM
# 55 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 2, WachunpelonCity_Sewer_Movement_Biker2
# 56 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 2
# 57 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 58 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitse
# 59 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_Text_Policeman2, MSGBOX_AUTOCLOSE
# 60 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmessage
# 61 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 1, WachunpelonCity_Sewer_Movement_Policeman3
# 62 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 24
# 63 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 64 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 1
# 65 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 1
# 66 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 2
# 67 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	fadedefaultbgm
# 68 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_WACHUNPELON_SEWERS
# 69 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 10
# 70 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	releaseall
	end


WachunpelonCity_Sewer_EventScript_Biker2::
# 75 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	lockall
# 76 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_EventScript_Biker2_Text_0
# 77 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	closemessage
# 78 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Sewer_Movement_Player2
# 79 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 0
# 80 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 81 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 12
# 82 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 83 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 0
# 84 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playbgm MUS_RG_SILPH, FALSE
# 85 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_EventScript_Biker2_Text_1, MSGBOX_AUTOCLOSE
# 87 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceRight
# 88 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 12
# 89 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 90 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 0
# 91 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 11
# 92 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	releaseall
	end


WachunpelonCity_Sewer_EventScript_Battle::
# 97 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	lock
# 98 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_EventScript_Battle_Text_0, MSGBOX_SIGN
	end


WachunpelonCity_Sewer_EventScript_Speedwagon::
# 103 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	lock
# 104 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 105 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_Text_Speedwagon1, MSGBOX_AUTOCLOSE
# 106 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmessage
# 107 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	setflag FLAG_SYS_BOSS_BATTLE
# 108 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	trainerbattle_no_intro TRAINER_SPEEDWAGON_3, WachunpelonCity_Sewer_SpeedwagonDefeat
# 109 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	clearflag FLAG_SYS_BOSS_BATTLE
# 110 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playse SE_EXIT
# 111 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 60
# 112 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	clearflag FLAG_HIDE_POLICEMAN_WACHUNPELON_SEWERS
# 113 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	addobject 14
# 114 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	addobject 15
# 115 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	addobject 16
# 116 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 14, WachunpelonCity_Sewer_Movement_Police14
# 117 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 14
# 118 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 13, Common_Movement_WalkInPlaceUp
# 119 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 30
# 120 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceUp
# 121 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 16
# 122 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 15, WachunpelonCity_Sewer_Movement_Police15
# 123 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 15
# 124 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 125 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 3
# 126 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 16, WachunpelonCity_Sewer_Movement_Police16
# 127 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 16
# 128 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 129 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 0
# 130 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 131 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 12
# 132 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_EventScript_Speedwagon_Text_0, MSGBOX_AUTOCLOSE
# 134 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmessage
# 135 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 16, WachunpelonCity_Sewer_Movement_Police16_2
# 136 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 20
# 137 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Sewer_Movement_PlayerStepBack
# 138 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 10
# 139 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceRight
# 140 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 16
# 141 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 10
# 142 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	fadescreen FADE_TO_BLACK
# 143 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playse SE_EXIT
# 144 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 3
# 145 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 4
# 146 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 13
# 147 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 14
# 148 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 15
# 149 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 16
# 150 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	setflag FLAG_HIDE_POKEMON_WACHUNPELON_SEWERS
# 151 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_WACHUNPELON_SEWERS
# 152 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	setflag FLAG_HIDE_SPEEDWAGON_WACHUNPELON_SEWERS
# 153 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 154 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 12, WachunpelonCity_Sewer_Movement_Police12
# 155 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 12
# 156 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_Text_Policeman3, MSGBOX_DEFAULT
# 157 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmessage
# 158 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	giveitem ITEM_METAL_ALLOY
# 159 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmessage
# 160 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_Text_Policeman4, MSGBOX_AUTOCLOSE
# 161 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmessage
# 162 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 12, WachunpelonCity_Sewer_Movement_Police12Leave
# 163 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 20
# 164 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 165 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 12
# 166 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 60
# 167 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playse SE_EXIT
# 168 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 12
# 169 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	savebgm MUS_DUMMY
# 170 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	fadedefaultbgm
# 171 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN2_WACHUNPELON_SEWERS
# 172 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	addvar VAR_FINAL_REMATCH_STATE, 1
# 173 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	setvar VAR_JIMMY_FINAL_REMATCH_CALL_STEP_COUNTER, 0
# 174 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	release
	end


WachunpelonCity_Sewer_EventScript_Arcanine::
# 179 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	lock
# 180 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playmoncry SPECIES_ARCANINE, CRY_MODE_ENCOUNTER
# 181 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmoncry
# 182 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	release
	end


WachunpelonCity_Sewer_EventScript_Mabosstiff::
# 187 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	lock
# 188 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playmoncry SPECIES_MABOSSTIFF, CRY_MODE_ENCOUNTER
# 189 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmoncry
# 190 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	release
	end


WachunpelonCity_Sewer_EventScript_Sneasel::
# 195 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	lock
# 196 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playmoncry SPECIES_SNEASEL, CRY_MODE_ENCOUNTER
# 197 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmoncry
# 198 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	release
	end


WachunpelonCity_Sewer_EventScript_Kleavor::
# 203 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	lock
# 204 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playmoncry SPECIES_KLEAVOR, CRY_MODE_ENCOUNTER
# 205 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmoncry
# 206 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	release
	end


# 246 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Policeman1:
# 247 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 247 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 247 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 248 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_down
# 249 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay_16
# 250 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_in_place_left
# 251 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay_16
# 252 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_up
# 253 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay_16
# 254 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_in_place_right
	step_end

# 257 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Player1:
# 258 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_down
# 259 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 259 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 259 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
	step_end

# 262 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Biker1:
# 263 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 263 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 263 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 263 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
	step_end

# 266 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Policeman2:
# 267 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	emote_exclamation_mark
# 268 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_in_place_fast_left
	step_end

# 272 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Biker2:
# 273 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_left
# 274 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 274 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 274 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 274 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 274 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 274 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 274 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
	step_end

# 277 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Policeman3:
# 278 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_left
# 278 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_left
# 278 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_left
# 278 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_left
# 279 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 279 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 279 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 279 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 279 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 279 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 279 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 279 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
	step_end

# 282 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Police12:
# 283 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 283 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 283 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 283 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 283 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 284 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_down
# 284 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_down
	step_end

# 287 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Police12Leave:
# 288 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 288 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 288 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 288 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 288 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 289 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_up
# 289 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_up
# 290 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 290 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 290 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 290 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
	step_end

# 293 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Player2:
# 294 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 294 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 294 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 294 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 295 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 295 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 295 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 295 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 295 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 295 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 295 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 295 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
	step_end

# 298 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Police14:
# 299 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 299 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 299 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 299 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 299 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 299 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 299 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 299 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 299 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 299 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 300 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_in_place_fast_down
	step_end

# 303 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Police15:
# 304 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 304 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 304 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 304 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 304 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 304 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 304 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 304 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 304 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 304 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 305 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_in_place_fast_up
	step_end

# 308 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Police16:
# 309 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 309 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 309 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 309 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 309 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 309 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 309 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
	step_end

# 313 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Police16_2:
# 314 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_down
# 315 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 315 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 315 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 315 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 315 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 315 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
	step_end

# 318 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_PlayerStepBack:
# 319 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_down
# 320 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_in_place_up
	step_end

WachunpelonCity_Sewer_EventScript_Biker2_Text_0:
# 76 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "Over here!$"

WachunpelonCity_Sewer_EventScript_Biker2_Text_1:
# 85 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "I can handle these two!\n Take care of the boss for me!$"

WachunpelonCity_Sewer_EventScript_Battle_Text_0:
# 98 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "He's focused on the battle.$"

WachunpelonCity_Sewer_EventScript_Speedwagon_Text_0:
# 132 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "Good work.\n We'll take it from here.$"

WachunpelonCity_Sewer_Text_Policeman1::
# 210 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "I don't see anybody…\n But they have to be down here.\l Let's go further-$"

WachunpelonCity_Sewer_Text_Policeman2::
# 216 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "… How did they even get their bikes\n down here?\p I'll go on ahead!$"

WachunpelonCity_Sewer_Text_Speedwagon1::
# 222 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "YOU AGAIN!\p They're all locked up now because of\n YOU!\p This time I'll make sure you can't\n chase us anymore!$"

WachunpelonCity_Sewer_SpeedwagonDefeat::
# 230 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "I just wanted to speed my wagon…$"

WachunpelonCity_Sewer_Text_Policeman3::
# 234 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "Thanks again for helping us clear\n up this case.\p Here, take this. I think the boss was\n going to use it to upgrade his bike.$"

WachunpelonCity_Sewer_Text_Policeman4::
# 241 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "Well, I should head back to MAUVILLE\n now. Take care.$"
