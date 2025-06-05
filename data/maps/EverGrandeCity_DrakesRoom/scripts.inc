# 1 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_MapScripts::
# 2 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_DrakesRoom_OnFrame
# 3 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_DrakesRoom_OnLoad
# 4 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_SidneysRoom_OnWarp
# 5 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.byte 0
# 6 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 7 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
@ Unused, Drake uses Sidneys identical OnWarp for some reason
# 8 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_OnWarp:
# 9 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_DrakesRoom_EventScript_PlayerTurnNorth
# 10 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.2byte 0
# 11 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 12 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_PlayerTurnNorth::
# 13 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 14 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 15 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 16 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_OnFrame:
# 17 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script_2 VAR_ELITE_4_STATE, 3, EverGrandeCity_DrakesRoom_EventScript_WalkInCloseDoor
# 18 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.2byte 0
# 19 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 20 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_WalkInCloseDoor::
# 21 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	lockall
# 22 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 23 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_ELITE_4_STATE, 4
# 24 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	releaseall
# 25 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 26 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 27 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_OnLoad:
# 28 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_ELITE_4_DRAKE, EverGrandeCity_DrakesRoom_EventScript_ResetAdvanceToNextRoom
# 29 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call_if_eq VAR_ELITE_4_STATE, 4, EverGrandeCity_DrakesRoom_EventScript_CloseDoor
# 30 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 31 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 32 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_ResetAdvanceToNextRoom::
# 33 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
# 34 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	return
# 35 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 36 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_CloseDoor::
# 37 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
# 38 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	return
# 39 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 40 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_Drake::
# 41 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	lock
# 42 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	faceplayer
# 43 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_DRAKE, EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech
# 44 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
    goto_if_set FLAG_RECIEVED_FANTASIA, EverGrandeCity_DrakesRoom_EventScript_Dave
# 45 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 46 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 47 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_DRAKE, EverGrandeCity_DrakesRoom_Text_Defeat
# 48 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto EverGrandeCity_DrakesRoom_EventScript_Defeated
# 49 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 50 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 51 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech::
# 52 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 53 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	release
# 54 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 55 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 56 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_Defeated::
# 57 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_0x8004, FANCOUNTER_DEFEATED_DRAKE
# 58 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special Script_TryGainNewFanFromCounter
# 59 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_DRAKE
# 60 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 61 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 62 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	release
# 63 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 64 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 65 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_Text_IntroSpeech:
# 66 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Oh, hello.\n"
# 67 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "I'm DAVE of the ELITE FOUR.\p"
# 68 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Do me a favor and lose to me, okay?\n"
# 69 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Thank.$"
# 70 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 71 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_Text_Defeat:
# 72 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "I swear to god dude...$"
# 73 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 74 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_Text_PostBattleSpeech:
# 75 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Oh, well.\n"
# 76 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "The CHAMPION's waiting up ahead.$"

EverGrandeCity_DrakesRoom_EventScript_Dave::
# 81 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 82 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_DaveIntro, MSGBOX_DEFAULT
# 83 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_DRAKE, EverGrandeCity_DrakesRoom_Text_Defeat
# 84 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto EverGrandeCity_DrakesRoom_EventScript_Defeated
	end


EverGrandeCity_DrakesRoom_Text_DaveIntro::
# 88 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Oh, hello again.\n Good job on making it this far.\p Once again, I'm DAVE of the ELITE FOUR.\n Keep your promise and lose to me, okay?$"
