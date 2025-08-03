# 1 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_MapScripts::
# 2 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_SidneysRoom_OnLoad
# 3 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_SidneysRoom_OnWarp
# 4 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_SidneysRoom_OnTransition
# 5 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_SidneysRoom_OnFrame
# 6 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, EverGrandeCity_SidneysRoom_OnResume
# 7 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.byte 0
# 8 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 9 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnTransition:
# 10 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_EVERGRANDE
# 11 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
# 12 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_TEMP_E
# 13 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 14 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 15 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnLoad:
# 16 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, EverGrandeCity_SidneysRoom_EventScript_ResetAdvanceToNextRoom
# 17 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call_if_eq VAR_ELITE_4_STATE, 1, EverGrandeCity_SidneysRoom_EventScript_CloseDoor
# 18 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 19 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 20 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnResume:
# 21 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_MISA, EverGrandeCity_RemoveEliteFourPokemon
# 22 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 23 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 24 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_RemoveEliteFourPokemon::
# 25 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	removeobject 2
# 26 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	return
# 27 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 28 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_ResetAdvanceToNextRoom::
# 29 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
# 30 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	return
# 31 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 32 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_CloseDoor::
# 33 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
# 34 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	return
# 35 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 36 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnWarp:
# 37 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_SidneysRoom_EventScript_PlayerTurnNorth
# 38 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.2byte 0
# 39 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 40 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_PlayerTurnNorth::
# 41 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 42 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 43 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 44 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnFrame:
# 45 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script_2 VAR_ELITE_4_STATE, 0, EverGrandeCity_SidneysRoom_EventScript_WalkInCloseDoor
# 46 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.2byte 0
# 47 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 48 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_WalkInCloseDoor::
# 49 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	lockall
# 50 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 51 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setvar VAR_ELITE_4_STATE, 1
# 52 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	releaseall
# 53 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 54 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 55 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_Sidney::
# 56 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	lock
# 57 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	faceplayer
# 58 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_MISA, EverGrandeCity_SidneysRoom_EventScript_MisaPostBattleSpeech
# 59 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto_if_set FLAG_SYS_FINAL_REMATCH, EverGrandeCity_SidneysRoom_EventScript_Misa
# 60 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech
# 61 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	playbgm MUS_MISA_THEME, FALSE
# 62 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 63 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
    playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 64 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_IntroSpeech2, MSGBOX_DEFAULT
# 65 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_SIDNEY, EverGrandeCity_SidneysRoom_Text_Defeat
# 66 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto EverGrandeCity_SidneysRoom_EventScript_Defeated
# 67 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 68 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 69 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech::
# 70 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 71 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	release
# 72 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 73 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 74 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_Defeated::
# 75 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_SIDNEY
# 76 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 77 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 78 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	release
# 79 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 80 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 81 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_Text_IntroSpeech:
# 82 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Oh, {PLAYER}!\n"
# 83 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "It's great to see you again!\p"
# 84 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "You're not surprised, are you?\n"
# 85 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "I did say where I worked, after all!\p"
# 86 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "JAMES probably didn't say anything.\n"
# 87 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "He doesn't like to brag about me.\p"
# 88 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Speaking of JAMES, I was watching your\n"
# 89 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
    .string "battle earlier.\p"
# 90 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
    .string "As a mother, I'm sad to see my child\n"
# 91 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
    .string "feel down… But I'm glad he's grown.\p"
# 92 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
    .string "Thank you for becoming his friend,\n"
# 93 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
    .string "{PLAYER}. I really mean it.$"
# 94 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 95 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_Text_IntroSpeech2:
# 96 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
    .string "Alright, time for me to be professional!\n"
# 97 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Welcome to the POKéMON LEAGUE!\p"
# 98 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
    .string "I'm MISA of the ELITE FOUR.\n"
# 99 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
    .string "ARE YOU READY TO GET S-MOTHERED?$"
# 100 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 101 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_Text_Defeat:
# 102 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Wow, you did great! I lost!\n"
# 103 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "You've grown so much!$"
# 104 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 105 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_Text_PostBattleSpeech:
# 106 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Well, listen to what this mommy has\n"
# 107 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "to say.\p"
# 108 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "You've got what it takes to go far.\n"
# 109 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Now, go on to the next room and enjoy\l"
# 110 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "your battle!$"

EverGrandeCity_SidneysRoom_EventScript_Togekiss::
# 115 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	lock
# 116 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	faceplayer
# 117 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	playmoncry SPECIES_TOGEKISS, CRY_MODE_ENCOUNTER
# 118 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	delay 24
# 119 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 120 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	release
	end


EverGrandeCity_SidneysRoom_EventScript_Misa::
# 125 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	lock
# 126 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 127 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	playbgm MUS_MISA_THEME, FALSE
# 128 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_CASTELIACONE, EverGrandeCity_SidneysRoom_EventScript_Misa_2
# 148 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_EventScript_Misa_Text_5, MSGBOX_DEFAULT
EverGrandeCity_SidneysRoom_EventScript_Misa_1:
# 154 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	waitmessage
# 155 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 156 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_EventScript_Misa_Text_6, MSGBOX_AUTOCLOSE
# 160 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	waitmessage
# 161 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call EliteFour_EventScript_PlayerGetsInPosition
# 162 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	playfirstmoncry
# 163 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	waitmoncry
# 164 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	playmoncry SPECIES_TOGEKISS, CRY_MODE_ENCOUNTER
# 165 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	waitmoncry
# 166 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_EventScript_Misa_Text_7, MSGBOX_AUTOCLOSE
# 167 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	waitmessage
# 168 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_SIDNEY
# 169 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_DEFEATED_MISA
# 170 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_MISA_2, EverGrandeCity_SidneysRoom_EventScript_Misa_Text_8
# 171 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_TEMP_E
# 172 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 173 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	waitmovement 0
# 174 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	callnative RemoveFollowingPokemon
# 175 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_TEMP_E
# 176 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 177 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 178 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto EverGrandeCity_SidneysRoom_EventScript_MisaPostBattleSpeech
	end

EverGrandeCity_SidneysRoom_EventScript_Misa_2:
# 129 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_EventScript_Misa_Text_0, MSGBOX_DEFAULT
# 133 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	waitmessage
# 134 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EverGrandeCity_SidneysRoom_EventScript_Misa_Text_1, EverGrandeCity_SidneysRoom_EventScript_Misa_Text_2
# 135 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq EverGrandeCity_SidneysRoom_EventScript_Misa_5
# 141 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_EventScript_Misa_Text_4, MSGBOX_DEFAULT
	goto EverGrandeCity_SidneysRoom_EventScript_Misa_1

EverGrandeCity_SidneysRoom_EventScript_Misa_5:
# 136 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_EventScript_Misa_Text_3, MSGBOX_DEFAULT
	goto EverGrandeCity_SidneysRoom_EventScript_Misa_1


EverGrandeCity_SidneysRoom_EventScript_MisaPostBattleSpeech::
# 183 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_EventScript_MisaPostBattleSpeech_Text_0, MSGBOX_DEFAULT
# 188 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	release
	end


EliteFour_EventScript_PlayerGetsInPosition::
# 193 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 194 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	switch VAR_RESULT
# 195 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	case DIR_NORTH, EliteFour_EventScript_PlayerGetsInPosition_3
# 199 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	case DIR_SOUTH, EliteFour_EventScript_PlayerGetsInPosition_4
# 205 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	case DIR_WEST, EliteFour_EventScript_PlayerGetsInPosition_5
# 212 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_SidneysRoom_Movement_PlayerGetsInPositionNorth
# 213 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	waitmovement 0
EliteFour_EventScript_PlayerGetsInPosition_1:
# 215 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	clearflag FLAG_TEMP_E
# 216 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	callnative UpdateFollowingPokemon
# 217 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	playse SE_BALL_OPEN
# 218 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	fadescreen FADE_TO_WHITE
# 220 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExitPokeball
# 221 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	waitmovement 0
# 222 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BaldesianForestDojo_Movement_FollowerBesidePlayer
# 223 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	waitmovement 0
# 224 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 225 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	applymovement 2, EverGrandeCity_Movement_EliteFourPokemonGetsInPosition
# 226 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	delay 8
# 227 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EverGrandeCity_Movement_PlayerPokemonGetsInPosition
# 228 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	waitmovement 0
# 229 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	delay 30
	return

EliteFour_EventScript_PlayerGetsInPosition_3:
# 196 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_SidneysRoom_Movement_PlayerGetsInPositionNorth
# 197 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	waitmovement 0
	goto EliteFour_EventScript_PlayerGetsInPosition_1

EliteFour_EventScript_PlayerGetsInPosition_4:
# 200 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_SidneysRoom_Movement_PlayerGetsInPositionSouth
# 201 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	delay 8
# 202 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceDown
# 203 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto EliteFour_EventScript_PlayerGetsInPosition_1

EliteFour_EventScript_PlayerGetsInPosition_5:
# 206 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_SidneysRoom_Movement_PlayerGetsInPositionWest
# 207 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	delay 8
# 208 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceDown
# 209 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto EliteFour_EventScript_PlayerGetsInPosition_1


# 233 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_Movement_PlayerGetsInPositionNorth:
# 234 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	walk_down
# 234 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	walk_down
# 235 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	walk_in_place_up
	step_end

# 238 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_Movement_PlayerGetsInPositionSouth:
# 239 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	walk_right
# 240 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	walk_down
# 240 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	walk_down
# 240 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	walk_down
# 240 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	walk_down
# 241 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	walk_left
# 242 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	walk_in_place_up
	step_end

# 245 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_Movement_PlayerGetsInPositionWest:
# 246 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	walk_down
# 246 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	walk_down
# 246 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	walk_down
# 247 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	walk_left
# 248 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	walk_in_place_up
	step_end

# 251 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_Movement_EliteFourPokemonGetsInPosition:
# 252 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	walk_down
# 253 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	walk_right
# 254 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	walk_in_place_down
	step_end

# 257 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_Movement_PlayerPokemonGetsInPosition:
# 258 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	walk_up
# 259 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	walk_right
# 260 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	walk_in_place_up
	step_end

EverGrandeCity_SidneysRoom_EventScript_Misa_Text_0:
# 129 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "{PLAYER}!\n It's good to see you again!\p Did you happen to find anything out\n with that legend I told you about?$"

EverGrandeCity_SidneysRoom_EventScript_Misa_Text_1:
# 134 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Yeah! Thanks for the info.$"

EverGrandeCity_SidneysRoom_EventScript_Misa_Text_2:
# 134 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "No…$"

EverGrandeCity_SidneysRoom_EventScript_Misa_Text_3:
# 136 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Oh, I'm glad it worked out!\p I'm so happy you and JAMES have had\n fun exploring this region.$"

EverGrandeCity_SidneysRoom_EventScript_Misa_Text_4:
# 141 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Oh… Well maybe it was just\n an urban legend.\p Either way, I'm glad you and JAMES have\n had fun exploring this region.$"

EverGrandeCity_SidneysRoom_EventScript_Misa_Text_5:
# 148 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "{PLAYER}!\n It's good to see you again!\p You look like more mature now.\n I'm glad you and JAMES have had fun\l exploring this region.$"

EverGrandeCity_SidneysRoom_EventScript_Misa_Text_6:
# 156 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Anyways, let me stop getting\n off topic.\p I'm excited to see how much stronger\n you've gotten!$"

EverGrandeCity_SidneysRoom_EventScript_Misa_Text_7:
# 166 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "I won't be holding back this time!$"

EverGrandeCity_SidneysRoom_EventScript_Misa_Text_8:
# 170 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Nice job, {PLAYER}!$"

EverGrandeCity_SidneysRoom_EventScript_MisaPostBattleSpeech_Text_0:
# 183 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Wow, {PLAYER}.\p You've really grown a lot since the last\n time!\p This mommy is proud of you! I know\n you'll do great on your next battle!$"
