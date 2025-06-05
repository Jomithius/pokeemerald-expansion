# 1 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_MapScripts::
# 2 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_GlaciasRoom_OnFrame
# 3 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_GlaciasRoom_OnLoad
# 4 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_GlaciasRoom_OnWarp
# 5 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.byte 0
# 6 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 7 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_OnWarp:
# 8 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_GlaciasRoom_EventScript_PlayerTurnNorth
# 9 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.2byte 0
# 10 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 11 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_PlayerTurnNorth::
# 12 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 13 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 14 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 15 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_OnFrame:
# 16 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script_2 VAR_ELITE_4_STATE, 2, EverGrandeCity_GlaciasRoom_EventScript_WalkInCloseDoor
# 17 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.2byte 0
# 18 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 19 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_WalkInCloseDoor::
# 20 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	lockall
# 21 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 22 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	setvar VAR_ELITE_4_STATE, 3
# 23 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	releaseall
# 24 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 25 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 26 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_OnLoad:
# 27 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_ResetAdvanceToNextRoom
# 28 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call_if_eq VAR_ELITE_4_STATE, 3, EverGrandeCity_GlaciasRoom_EventScript_CloseDoor
# 29 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 30 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 31 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_ResetAdvanceToNextRoom::
# 32 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
# 33 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	return
# 34 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 35 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_CloseDoor::
# 36 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
# 37 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	return
# 38 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 39 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_Glacia::
# 40 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	lock
# 41 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	faceplayer
# 42 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech
# 43 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
    goto_if_set FLAG_RECIEVED_CHOICE_SCARF_XION, EverGrandeCity_GlaciasRoom_EventScript_Xion
# 44 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 45 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 46 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_GLACIA, EverGrandeCity_GlaciasRoom_Text_Defeat
# 47 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto EverGrandeCity_GlaciasRoom_EventScript_Defeated
# 48 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 49 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 50 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech::
# 51 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 52 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	release
# 53 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 54 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 55 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_Defeated::
# 56 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_GLACIA
# 57 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 58 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 59 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	release
# 60 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 61 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 62 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_Text_IntroSpeech:
# 63 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Welcome, my name is XION\n"
# 64 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "of the ELITE FOUR.\p"
# 65 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Are you the TRAINER that MISA\n"
# 66 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "had talked to me about?\p"
# 67 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Not many TRAINERS can usually\n"
# 68 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "make it this far.\p"
# 69 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Let me find out if you're\n"
# 70 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "able to pass me!$"
# 71 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 72 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_Text_Defeat:
# 73 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Wow…\n"
# 74 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "I knew you had potential.$"
# 75 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 76 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech:
# 77 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Go on to the next room.\p"
# 78 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "And there, witness the truly fearsome\n"
# 79 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "side of the POKéMON LEAGUE.$"

EverGrandeCity_GlaciasRoom_EventScript_Xion::
# 83 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 84 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_XionIntroSpeech, MSGBOX_DEFAULT
# 85 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_GLACIA, EverGrandeCity_GlaciasRoom_Text_Defeat
# 86 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto EverGrandeCity_GlaciasRoom_EventScript_Defeated
	end


EverGrandeCity_GlaciasRoom_Text_XionIntroSpeech::
# 90 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Oh, you're that TRAINER I met in\n VERDANTURF! So you made it this far.\l Again, I'm XION of the ELITE FOUR.\p Let me see how strong the TRAINER\n that MISA believed in really is!$"
