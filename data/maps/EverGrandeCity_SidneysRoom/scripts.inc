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
	.byte 0
# 7 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 8 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnTransition:
# 9 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_EVERGRANDE
# 10 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
# 11 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 12 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 13 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnLoad:
# 14 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, EverGrandeCity_SidneysRoom_EventScript_ResetAdvanceToNextRoom
# 15 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call_if_eq VAR_ELITE_4_STATE, 1, EverGrandeCity_SidneysRoom_EventScript_CloseDoor
# 16 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 17 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 18 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_ResetAdvanceToNextRoom::
# 19 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
# 20 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	return
# 21 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 22 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_CloseDoor::
# 23 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
# 24 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	return
# 25 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 26 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnWarp:
# 27 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_SidneysRoom_EventScript_PlayerTurnNorth
# 28 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.2byte 0
# 29 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 30 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_PlayerTurnNorth::
# 31 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 32 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 33 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 34 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnFrame:
# 35 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script_2 VAR_ELITE_4_STATE, 0, EverGrandeCity_SidneysRoom_EventScript_WalkInCloseDoor
# 36 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.2byte 0
# 37 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 38 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_WalkInCloseDoor::
# 39 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	lockall
# 40 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 41 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setvar VAR_ELITE_4_STATE, 1
# 42 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	releaseall
# 43 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 44 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 45 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_Sidney::
# 46 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	lock
# 47 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	faceplayer
# 48 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech
# 49 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	playbgm MUS_MISA_THEME, FALSE
# 50 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 51 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
    playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 52 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_IntroSpeech2, MSGBOX_DEFAULT
# 53 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_SIDNEY, EverGrandeCity_SidneysRoom_Text_Defeat
# 54 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto EverGrandeCity_SidneysRoom_EventScript_Defeated
# 55 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 56 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 57 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech::
# 58 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 59 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	release
# 60 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 61 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 62 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_Defeated::
# 63 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_SIDNEY
# 64 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 65 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 66 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	release
# 67 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 68 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 69 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_Text_IntroSpeech:
# 70 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Oh, {PLAYER}!\n"
# 71 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "It's great to see you again!\p"
# 72 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "You're not surprised, are you?\n"
# 73 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "I did say where I worked, after all!\p"
# 74 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "JAMES probably didn't say anything\n"
# 75 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "either. He doesn't like to brag about me.\p"
# 76 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Speaking of JAMES, I was watching your\n"
# 77 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
    .string "battle earlier.\p"
# 78 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
    .string "As a mother, I'm sad to see my child\n"
# 79 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
    .string "feel down, but I'm glad he's grown.\p"
# 80 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
    .string "Thank you for becoming his friend,\n"
# 81 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
    .string "{PLAYER}. I really mean it.$"
# 82 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 83 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_Text_IntroSpeech2:
# 84 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
    .string "Alright, time for me to be professional!\n"
# 85 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Welcome to the POKéMON LEAGUE!\p"
# 86 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
    .string "I'm MISA of the ELITE FOUR.\n"
# 87 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
    .string "ARE YOU READY TO GET S-MOTHERED?$"
# 88 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 89 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_Text_Defeat:
# 90 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Wow, you did great! I lost!\n"
# 91 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "You've grown so much!$"
# 92 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 93 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_Text_PostBattleSpeech:
# 94 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Well, listen to what this mommy has\n"
# 95 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "to say.\p"
# 96 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "You've got what it takes to go far.\n"
# 97 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Now, go on to the next room and enjoy\l"
# 98 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "your next battle!$"
