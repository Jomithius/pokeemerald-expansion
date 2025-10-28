# 1 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_MapScripts::
# 2 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_GlaciasRoom_OnFrame
# 3 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_GlaciasRoom_OnLoad
# 4 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_GlaciasRoom_OnWarp
# 5 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, EverGrandeCity_GlaciasRoom_OnResume
# 6 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_Hall_OnTransition
# 7 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.byte 0
# 8 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 9 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_OnWarp:
# 10 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_GlaciasRoom_EventScript_PlayerTurnNorth
# 11 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.2byte 0
# 12 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 13 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_PlayerTurnNorth::
# 14 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 15 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 16 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 17 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_OnFrame:
# 18 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script_2 VAR_ELITE_4_STATE, 2, EverGrandeCity_GlaciasRoom_EventScript_WalkInCloseDoor
# 19 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.2byte 0
# 20 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 21 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_WalkInCloseDoor::
# 22 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	lockall
# 23 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 24 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	setvar VAR_ELITE_4_STATE, 3
# 25 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	releaseall
# 26 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 27 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 28 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_OnLoad:
# 29 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_ResetAdvanceToNextRoom
# 30 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call_if_eq VAR_ELITE_4_STATE, 3, EverGrandeCity_GlaciasRoom_EventScript_CloseDoor
# 31 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 32 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 33 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_ResetAdvanceToNextRoom::
# 34 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
# 35 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	return
# 36 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 37 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_CloseDoor::
# 38 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
# 39 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	return
# 40 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 41 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_OnResume:
# 42 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_XION, EverGrandeCity_RemoveEliteFourPokemon
# 43 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 44 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 45 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_Glacia::
# 46 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	lock
# 47 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	faceplayer
# 48 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_XION, EverGrandeCity_GlaciasRoom_EventScript_XionPostBattleSpeech
# 49 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto_if_set FLAG_SYS_FINAL_REMATCH, EverGrandeCity_GlaciasRoom_EventScript_XionFinalRematch
# 50 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech
# 51 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
    goto_if_set FLAG_RECEIVED_CHOICE_SCARF_XION, EverGrandeCity_GlaciasRoom_EventScript_Xion
# 52 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 53 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 54 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_GLACIA, EverGrandeCity_GlaciasRoom_Text_Defeat
# 55 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto EverGrandeCity_GlaciasRoom_EventScript_Defeated
# 56 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 57 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 58 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech::
# 59 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 60 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	release
# 61 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 62 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 63 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_Defeated::
# 64 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_GLACIA
# 65 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 66 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 67 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 68 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	release
# 69 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 70 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 71 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_Text_IntroSpeech:
# 72 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Welcome! I'm XION\n"
# 73 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "of the ELITE FOUR.\p"
# 74 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Are you the TRAINER that MISA\n"
# 75 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "had talked about?\p"
# 76 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Not many TRAINERS can usually\n"
# 77 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "make it this far.\p"
# 78 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Let me find out if you're\n"
# 79 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "able to pass me!$"
# 80 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 81 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_Text_Defeat:
# 82 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Wow…\n"
# 83 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "I knew you had potential.$"
# 84 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 85 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech:
# 86 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Go on to the next room.\p"
# 87 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "And there, witness the truly fearsome\n"
# 88 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "side of the POKéMON LEAGUE.$"

EverGrandeCity_GlaciasRoom_EventScript_Xion::
# 92 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 93 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_XionIntroSpeech, MSGBOX_DEFAULT
# 94 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_GLACIA, EverGrandeCity_GlaciasRoom_Text_Defeat
# 95 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto EverGrandeCity_GlaciasRoom_EventScript_Defeated
	end


EverGrandeCity_GlaciasRoom_EventScript_Leafeon::
# 108 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	lock
# 109 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	faceplayer
# 110 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	playmoncry SPECIES_LEAFEON, CRY_MODE_ENCOUNTER
# 111 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	waitmoncry
# 112 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 113 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	waitmovement 2
# 114 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	release
	end


EverGrandeCity_GlaciasRoom_EventScript_XionFinalRematch::
# 120 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	lock
# 121 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 122 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 123 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	clearflag FLAG_TEMP_E
# 124 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_EventScript_XionFinalRematch_Text_0, MSGBOX_AUTOCLOSE
# 128 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	waitmessage
# 129 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call EliteFour_EventScript_PlayerGetsInPosition
# 130 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	playfirstmoncry
# 131 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	waitmoncry
# 132 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	playmoncry SPECIES_LEAFEON, CRY_MODE_ENCOUNTER
# 133 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	waitmoncry
# 134 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_EventScript_XionFinalRematch_Text_1, MSGBOX_AUTOCLOSE
# 135 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	waitmessage
# 136 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_GLACIA
# 137 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	setflag FLAG_DEFEATED_XION
# 138 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_XION, EverGrandeCity_GlaciasRoom_Text_Defeat
# 139 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 140 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	waitmovement 0
# 141 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	callnative RemoveFollowingPokemon
# 142 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	setflag FLAG_TEMP_E
# 143 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 144 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 145 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 146 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto EverGrandeCity_GlaciasRoom_EventScript_XionPostBattleSpeech
	end


EverGrandeCity_GlaciasRoom_EventScript_XionPostBattleSpeech::
# 151 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_EventScript_XionPostBattleSpeech_Text_0, MSGBOX_DEFAULT
# 157 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	release
	end


EverGrandeCity_GlaciasRoom_EventScript_XionFinalRematch_Text_0:
# 124 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "{PLAYER}!\n You look well. I'm glad.\p It seems like your travels have\n caused you to get even stronger!$"

EverGrandeCity_GlaciasRoom_EventScript_XionFinalRematch_Text_1:
# 134 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Let's see if you can match my freak!$"

EverGrandeCity_GlaciasRoom_EventScript_XionPostBattleSpeech_Text_0:
# 151 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "I'm impressed, {PLAYER}!\n You really beat me.\p Be careful on your next battle.\p DAVE was pretty mad when he lost\n to you last time.\p He might be planning something.$"

EverGrandeCity_GlaciasRoom_Text_XionIntroSpeech::
# 99 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Oh, you're that TRAINER I met in\n VERDANTURF! So you made it this far.\l Again, I'm XION of the ELITE FOUR.\p Let me see how strong you've\n gotten since then!$"
