WachunpelonCity_Sewer_MapScripts::
# 2 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WachunpelonCity_Sewer_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

WachunpelonCity_Sewer_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	map_script_2 VAR_SPEEDWAGON_STATE, 9, WachunpelonCity_Sewer_EventScript_Biker1
	.2byte 0


WachunpelonCity_Sewer_EventScript_Biker1::
# 8 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	lockall
# 9 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 1, WachunpelonCity_Sewer_Movement_Policeman1
# 10 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 20
# 11 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Sewer_Movement_Player1
# 12 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 1
# 13 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_Text_Policeman1, MSGBOX_AUTOCLOSE
# 14 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmessage
# 15 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playse SE_PIN
# 16 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 1, WachunpelonCity_Sewer_Movement_Policeman2
# 17 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 1
# 18 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitse
# 19 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playbgm MUS_NONE, FALSE
# 20 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playse SE_THUNDERSTORM
# 21 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 2, WachunpelonCity_Sewer_Movement_Biker1
# 22 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 2
# 23 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 24 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitse
# 25 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playse SE_PIN
# 26 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 27 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 2
# 28 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitse
# 29 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playse SE_THUNDERSTORM
# 30 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 2, WachunpelonCity_Sewer_Movement_Biker2
# 31 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 2
# 32 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 33 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitse
# 34 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_Text_Policeman2, MSGBOX_AUTOCLOSE
# 35 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmessage
# 36 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 1, WachunpelonCity_Sewer_Movement_Policeman3
# 37 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 24
# 38 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 39 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 1
# 40 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 1
# 41 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 2
# 42 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	fadedefaultbgm
# 43 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_WACHUNPELON_SEWERS
# 44 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 10
# 45 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	releaseall
	end


WachunpelonCity_Sewer_EventScript_Biker2::
# 50 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	lock
# 51 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_EventScript_Biker2_Text_0
# 52 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmessage
# 53 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Sewer_Movement_Player2
# 54 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 0
# 55 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 56 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 12
# 57 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 58 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 0
# 59 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_EventScript_Biker2_Text_1, MSGBOX_AUTOCLOSE
# 61 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceRight
# 62 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 12
# 63 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 64 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 0
# 65 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 11
# 66 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	release
	end


WachunpelonCity_Sewer_EventScript_Battle::
# 71 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	lock
# 72 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_EventScript_Battle_Text_0, MSGBOX_SIGN
	end


WachunpelonCity_Sewer_EventScript_Speedwagon::
# 77 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	lock
# 78 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playbgm MUS_RG_SILPH, FALSE
# 79 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_Text_Speedwagon1, MSGBOX_AUTOCLOSE
# 80 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmessage
# 81 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	trainerbattle_no_intro TRAINER_SPEEDWAGON_3, WachunpelonCity_Sewer_SpeedwagonDefeat
# 82 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	lock
# 83 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 5, Common_Movement_EnterPokeball
# 84 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 5
# 85 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 5
# 86 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 6, Common_Movement_EnterPokeball
# 87 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 6
# 88 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 6
# 89 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 7, Common_Movement_EnterPokeball
# 90 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 7
# 91 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 7
# 92 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 8, Common_Movement_EnterPokeball
# 93 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 8
# 94 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 8
# 95 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playse SE_EXIT
# 96 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 60
# 97 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	clearflag FLAG_HIDE_POLICEMAN_WACHUNPELON_SEWERS
# 98 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	addobject 14
# 99 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	addobject 15
# 100 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	addobject 16
# 101 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 14, WachunpelonCity_Sewer_Movement_Police14
# 102 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 14
# 103 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 13, Common_Movement_WalkInPlaceUp
# 104 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 30
# 105 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceUp
# 106 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 16
# 107 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 15, WachunpelonCity_Sewer_Movement_Police15
# 108 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 30
# 109 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 110 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 3
# 111 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 16, WachunpelonCity_Sewer_Movement_Police16
# 112 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 16
# 113 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 114 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 0
# 115 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 116 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 12
# 117 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_EventScript_Speedwagon_Text_0, MSGBOX_AUTOCLOSE
# 119 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmessage
# 120 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 16, WachunpelonCity_Sewer_Movement_Police16_2
# 121 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 20
# 122 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Sewer_Movement_PlayerStepBack
# 123 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 16
# 124 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 10
# 125 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	fadescreen FADE_TO_BLACK
# 126 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playse SE_EXIT
# 127 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 3
# 128 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 4
# 129 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 13
# 130 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 14
# 131 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 15
# 132 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 16
# 133 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	setflag FLAG_HIDE_POKEMON_WACHUNPELON_SEWERS
# 134 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_WACHUNPELON_SEWERS
# 135 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	setflag FLAG_HIDE_SPEEDWAGON_WACHUNPELON_SEWERS
# 136 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 137 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 12, WachunpelonCity_Sewer_Movement_Police12
# 138 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 12
# 139 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_Text_Policeman3, MSGBOX_AUTOCLOSE
# 140 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmessage
# 141 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	giveitem ITEM_METAL_ALLOY
# 142 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmessage
# 143 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	msgbox WachunpelonCity_Sewer_Text_Policeman4, MSGBOX_AUTOCLOSE
# 144 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmessage
# 145 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement 12, WachunpelonCity_Sewer_Movement_Police12Leave
# 146 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay 20
# 147 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 148 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmovement 12
# 149 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	removeobject 12
# 150 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN2_WACHUNPELON_SEWERS
# 151 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	release
	end


WachunpelonCity_Sewer_EventScript_Arcanine::
# 156 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	lock
# 157 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playmoncry SPECIES_ARCANINE, CRY_MODE_ENCOUNTER
# 158 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmoncry
# 159 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	release
	end


WachunpelonCity_Sewer_EventScript_Mabosstiff::
# 164 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	lock
# 165 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playmoncry SPECIES_MABOSSTIFF, CRY_MODE_ENCOUNTER
# 166 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmoncry
# 167 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	release
	end


WachunpelonCity_Sewer_EventScript_Sneasel::
# 172 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	lock
# 173 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playmoncry SPECIES_SNEASEL, CRY_MODE_ENCOUNTER
# 174 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmoncry
# 175 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	release
	end


WachunpelonCity_Sewer_EventScript_Kleavor::
# 180 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	lock
# 181 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	playmoncry SPECIES_KLEAVOR, CRY_MODE_ENCOUNTER
# 182 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	waitmoncry
# 183 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	release
	end


# 223 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Policeman1:
# 224 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 224 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 224 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 225 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_down
# 226 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay_16
# 227 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_in_place_left
# 228 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay_16
# 229 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_up
# 230 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	delay_16
# 231 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_in_place_right
	step_end

# 234 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Player1:
# 235 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_down
# 236 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 236 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 236 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
	step_end

# 239 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Biker1:
# 240 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 240 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 240 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 240 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
	step_end

# 243 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Policeman2:
# 244 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	emote_exclamation_mark
# 245 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_in_place_fast_left
	step_end

# 249 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Biker2:
# 250 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_left
# 251 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 251 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 251 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 251 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 251 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 251 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 251 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
	step_end

# 254 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Policeman3:
# 255 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_left
# 255 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_left
# 255 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_left
# 255 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_left
# 256 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 256 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 256 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 256 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 256 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 256 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 256 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 256 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
	step_end

# 259 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Police12:
# 260 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 260 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 260 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 260 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 260 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 261 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_down
# 261 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_down
	step_end

# 264 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Police12Leave:
# 265 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 265 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 265 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 265 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 265 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 266 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_up
# 266 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_up
# 267 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 267 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 267 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
# 267 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_left
	step_end

# 270 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Player2:
# 271 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 271 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 271 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 271 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_down
# 272 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 272 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 272 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 272 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 272 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 272 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 272 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 272 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
	step_end

# 275 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Police14:
# 276 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 276 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 276 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 276 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 276 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 276 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 276 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 276 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 276 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 276 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 277 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_in_place_fast_down
	step_end

# 280 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Police15:
# 281 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 281 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 281 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 281 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 281 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 281 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 281 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 281 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 281 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 281 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_fast_right
# 282 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_in_place_fast_up
	step_end

# 285 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Police16:
# 286 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 286 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 286 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 286 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 286 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 286 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 286 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
	step_end

# 290 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_Police16_2:
# 291 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_down
# 292 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 292 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 292 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 292 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 292 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
# 292 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_right
	step_end

# 295 "data/maps/WachunpelonCity_Sewer/scripts.pory"
WachunpelonCity_Sewer_Movement_PlayerStepBack:
# 296 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_down
# 297 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	walk_in_place_up
	step_end

WachunpelonCity_Sewer_EventScript_Biker2_Text_0:
# 51 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "Over here!$"

WachunpelonCity_Sewer_EventScript_Biker2_Text_1:
# 59 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "I can handle these two!\n Take care of the boss for me!$"

WachunpelonCity_Sewer_EventScript_Battle_Text_0:
# 72 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "He's focused on the battle.$"

WachunpelonCity_Sewer_EventScript_Speedwagon_Text_0:
# 117 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "Good work.\n We'll take it from here.$"

WachunpelonCity_Sewer_Text_Policeman1::
# 187 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "I don't see anybody…\n But they have to be down here.\l Let's go further-$"

WachunpelonCity_Sewer_Text_Policeman2::
# 193 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "…How did they even get their bikes\n down here?\p Wait! You're under arrest!$"

WachunpelonCity_Sewer_Text_Speedwagon1::
# 199 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "YOU AGAIN!\p They're all locked up now because of\n YOU!\p This time I'll make sure you can't\n chase us anymore!$"

WachunpelonCity_Sewer_SpeedwagonDefeat::
# 207 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "I just wanted to speed my wagon…$"

WachunpelonCity_Sewer_Text_Policeman3::
# 211 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "Thanks again for helping us clear\n up this case.\p Here, take this. I think the boss was\n going to use it to upgrade his bike.$"

WachunpelonCity_Sewer_Text_Policeman4::
# 218 "data/maps/WachunpelonCity_Sewer/scripts.pory"
	.string "Well, I should head back to MAUVILLE\n CITY now. Take care.$"
