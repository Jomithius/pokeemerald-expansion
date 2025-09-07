WachunpelonCity_Sewer_MapScripts::
# 2 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WachunpelonCity_Sewer_OnTransition
# 3 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WachunpelonCity_Sewer_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

WachunpelonCity_Sewer_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	map_script_2 VAR_SPEEDWAGON_STATE, 9, WachunpelonCity_Sewer_EventScript_Biker1
	.2byte 0


WachunpelonCity_Sewer_OnTransition::
# 9 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	call_if_eq VAR_SPEEDWAGON_STATE, 11, WachunpelonCity_Sewer_UpdateMusic
	end


WachunpelonCity_Sewer_UpdateMusic::
# 14 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	savebgm MUS_RG_SILPH
	return


WachunpelonCity_Sewer_EventScript_Biker1::
# 19 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	lockall
# 20 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 1, WachunpelonCity_Sewer_Movement_Policeman1
# 21 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 20
# 22 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Sewer_Movement_Player1
# 23 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 1
# 24 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_Text_Policeman1, MSGBOX_AUTOCLOSE
# 25 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmessage
# 26 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playse SE_PIN
# 27 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 1, WachunpelonCity_Sewer_Movement_Policeman2
# 28 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 1
# 29 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitse
# 30 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playbgm MUS_NONE, FALSE
# 31 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playse SE_THUNDERSTORM
# 32 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 2, WachunpelonCity_Sewer_Movement_Biker1
# 33 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 2
# 34 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 35 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitse
# 36 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playse SE_PIN
# 37 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 38 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 2
# 39 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitse
# 40 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playse SE_THUNDERSTORM
# 41 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 2, WachunpelonCity_Sewer_Movement_Biker2
# 42 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 2
# 43 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 44 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitse
# 45 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_Text_Policeman2, MSGBOX_AUTOCLOSE
# 46 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmessage
# 47 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 1, WachunpelonCity_Sewer_Movement_Policeman3
# 48 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 24
# 49 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 50 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 1
# 51 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 1
# 52 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 2
# 53 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	fadedefaultbgm
# 54 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_WACHUNPELON_SEWERS
# 55 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 10
# 56 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	releaseall
	end


WachunpelonCity_Sewer_EventScript_Biker2::
# 61 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	lockall
# 62 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_EventScript_Biker2_Text_0
# 63 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	closemessage
# 64 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Sewer_Movement_Player2
# 65 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 0
# 66 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 67 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 12
# 68 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 69 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 0
# 70 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playbgm MUS_RG_SILPH, FALSE
# 71 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_EventScript_Biker2_Text_1, MSGBOX_AUTOCLOSE
# 73 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceRight
# 74 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 12
# 75 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 76 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 0
# 77 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 11
# 78 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	releaseall
	end


WachunpelonCity_Sewer_EventScript_Battle::
# 83 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	lock
# 84 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_EventScript_Battle_Text_0, MSGBOX_SIGN
	end


WachunpelonCity_Sewer_EventScript_Speedwagon::
# 89 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	lock
# 90 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 91 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_Text_Speedwagon1, MSGBOX_AUTOCLOSE
# 92 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmessage
# 93 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	trainerbattle_no_intro TRAINER_SPEEDWAGON_3, WachunpelonCity_Sewer_SpeedwagonDefeat
# 94 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	lock
# 95 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 5, Common_Movement_EnterPokeball
# 96 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 5
# 97 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 5
# 98 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 6, Common_Movement_EnterPokeball
# 99 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 6
# 100 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 6
# 101 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 7, Common_Movement_EnterPokeball
# 102 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 7
# 103 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 7
# 104 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 8, Common_Movement_EnterPokeball
# 105 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 8
# 106 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 8
# 107 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playse SE_EXIT
# 108 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 60
# 109 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	clearflag FLAG_HIDE_POLICEMAN_WACHUNPELON_SEWERS
# 110 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	addobject 14
# 111 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	addobject 15
# 112 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	addobject 16
# 113 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 14, WachunpelonCity_Sewer_Movement_Police14
# 114 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 14
# 115 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 13, Common_Movement_WalkInPlaceUp
# 116 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 30
# 117 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceUp
# 118 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 16
# 119 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 15, WachunpelonCity_Sewer_Movement_Police15
# 120 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 15
# 121 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 122 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 3
# 123 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 16, WachunpelonCity_Sewer_Movement_Police16
# 124 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 16
# 125 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 126 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 0
# 127 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 128 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 12
# 129 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_EventScript_Speedwagon_Text_0, MSGBOX_AUTOCLOSE
# 131 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmessage
# 132 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 16, WachunpelonCity_Sewer_Movement_Police16_2
# 133 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 20
# 134 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Sewer_Movement_PlayerStepBack
# 135 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 10
# 136 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceRight
# 137 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 16
# 138 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 10
# 139 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	fadescreen FADE_TO_BLACK
# 140 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playse SE_EXIT
# 141 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 3
# 142 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 4
# 143 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 13
# 144 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 14
# 145 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 15
# 146 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 16
# 147 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	setflag FLAG_HIDE_POKEMON_WACHUNPELON_SEWERS
# 148 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_WACHUNPELON_SEWERS
# 149 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	setflag FLAG_HIDE_SPEEDWAGON_WACHUNPELON_SEWERS
# 150 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 151 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 12, WachunpelonCity_Sewer_Movement_Police12
# 152 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 12
# 153 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_Text_Policeman3, MSGBOX_DEFAULT
# 154 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmessage
# 155 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	giveitem ITEM_METAL_ALLOY
# 156 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmessage
# 157 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_Text_Policeman4, MSGBOX_AUTOCLOSE
# 158 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmessage
# 159 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 12, WachunpelonCity_Sewer_Movement_Police12Leave
# 160 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 20
# 161 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 162 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 12
# 163 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 60
# 164 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playse SE_EXIT
# 165 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 12
# 166 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	savebgm MUS_DUMMY
# 167 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	fadedefaultbgm
# 168 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN2_WACHUNPELON_SEWERS
# 169 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	addvar VAR_FINAL_REMATCH_STATE, 1
# 170 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	setvar VAR_JIMMY_FINAL_REMATCH_CALL_STEP_COUNTER, 0
# 171 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	release
	end


WachunpelonCity_Sewer_EventScript_Arcanine::
# 176 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	lock
# 177 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playmoncry SPECIES_ARCANINE, CRY_MODE_ENCOUNTER
# 178 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmoncry
# 179 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	release
	end


WachunpelonCity_Sewer_EventScript_Mabosstiff::
# 184 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	lock
# 185 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playmoncry SPECIES_MABOSSTIFF, CRY_MODE_ENCOUNTER
# 186 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmoncry
# 187 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	release
	end


WachunpelonCity_Sewer_EventScript_Sneasel::
# 192 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	lock
# 193 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playmoncry SPECIES_SNEASEL, CRY_MODE_ENCOUNTER
# 194 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmoncry
# 195 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	release
	end


WachunpelonCity_Sewer_EventScript_Kleavor::
# 200 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	lock
# 201 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playmoncry SPECIES_KLEAVOR, CRY_MODE_ENCOUNTER
# 202 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmoncry
# 203 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	release
	end


# 243 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Policeman1:
# 244 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 244 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 244 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 245 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_down
# 246 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay_16
# 247 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_in_place_left
# 248 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay_16
# 249 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_up
# 250 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay_16
# 251 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_in_place_right
	step_end

# 254 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Player1:
# 255 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_down
# 256 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 256 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 256 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
	step_end

# 259 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Biker1:
# 260 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 260 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 260 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 260 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
	step_end

# 263 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Policeman2:
# 264 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	emote_exclamation_mark
# 265 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_in_place_fast_left
	step_end

# 269 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Biker2:
# 270 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_left
# 271 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 271 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 271 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 271 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 271 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 271 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 271 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
	step_end

# 274 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Policeman3:
# 275 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_left
# 275 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_left
# 275 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_left
# 275 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_left
# 276 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 276 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 276 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 276 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 276 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 276 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 276 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 276 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
	step_end

# 279 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Police12:
# 280 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 280 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 280 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 280 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 280 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 281 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_down
# 281 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_down
	step_end

# 284 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Police12Leave:
# 285 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 285 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 285 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 285 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 285 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 286 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_up
# 286 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_up
# 287 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 287 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 287 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 287 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
	step_end

# 290 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Player2:
# 291 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 291 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 291 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 291 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 292 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 292 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 292 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 292 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 292 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 292 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 292 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 292 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
	step_end

# 295 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Police14:
# 296 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 296 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 296 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 296 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 296 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 296 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 296 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 296 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 296 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 296 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 297 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_in_place_fast_down
	step_end

# 300 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Police15:
# 301 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 301 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 301 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 301 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 301 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 301 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 301 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 301 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 301 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 301 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 302 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_in_place_fast_up
	step_end

# 305 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Police16:
# 306 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 306 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 306 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 306 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 306 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 306 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 306 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
	step_end

# 310 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Police16_2:
# 311 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_down
# 312 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 312 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 312 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 312 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 312 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 312 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
	step_end

# 315 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_PlayerStepBack:
# 316 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_down
# 317 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_in_place_up
	step_end

WachunpelonCity_Sewer_EventScript_Biker2_Text_0:
# 62 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "Over here!$"

WachunpelonCity_Sewer_EventScript_Biker2_Text_1:
# 71 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "I can handle these two!\n Take care of the boss for me!$"

WachunpelonCity_Sewer_EventScript_Battle_Text_0:
# 84 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "He's focused on the battle.$"

WachunpelonCity_Sewer_EventScript_Speedwagon_Text_0:
# 129 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "Good work.\n We'll take it from here.$"

WachunpelonCity_Sewer_Text_Policeman1::
# 207 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "I don't see anybody…\n But they have to be down here.\l Let's go further-$"

WachunpelonCity_Sewer_Text_Policeman2::
# 213 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "… How did they even get their bikes\n down here?\p I'll go on ahead!$"

WachunpelonCity_Sewer_Text_Speedwagon1::
# 219 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "YOU AGAIN!\p They're all locked up now because of\n YOU!\p This time I'll make sure you can't\n chase us anymore!$"

WachunpelonCity_Sewer_SpeedwagonDefeat::
# 227 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "I just wanted to speed my wagon…$"

WachunpelonCity_Sewer_Text_Policeman3::
# 231 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "Thanks again for helping us clear\n up this case.\p Here, take this. I think the boss was\n going to use it to upgrade his bike.$"

WachunpelonCity_Sewer_Text_Policeman4::
# 238 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "Well, I should head back to MAUVILLE\n now. Take care.$"
