# 1 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_MapScripts::
# 2 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_PhoebesRoom_OnLoad
# 3 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_PhoebesRoom_OnWarp
# 4 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_PhoebesRoom_OnFrame
# 5 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.byte 0
# 6 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 7 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnWarp:
# 8 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_PhoebesRoom_EventScript_PlayerTurnNorth
# 9 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.2byte 0
# 10 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 11 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_PlayerTurnNorth::
# 12 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 13 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 14 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 15 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnFrame:
# 16 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script_2 VAR_ELITE_4_STATE, 1, EverGrandeCity_PhoebesRoom_EventScript_WalkInCloseDoor
# 17 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.2byte 0
# 18 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 19 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_WalkInCloseDoor::
# 20 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lockall
# 21 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 22 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setvar VAR_ELITE_4_STATE, 2
# 23 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	releaseall
# 24 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 25 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 26 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnLoad:
# 27 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_EventScript_ResetAdvanceToNextRoom
# 28 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call_if_eq VAR_ELITE_4_STATE, 2, EverGrandeCity_PhoebesRoom_EventScript_CloseDoor
# 29 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 30 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 31 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_ResetAdvanceToNextRoom::
# 32 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
# 33 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	return
# 34 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 35 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_CloseDoor::
# 36 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
# 37 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	return
# 38 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 39 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_Phoebe::
# 40 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lock
# 41 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	faceplayer
# 42 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech
# 43 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 44 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 45 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_PHOEBE, EverGrandeCity_PhoebesRoom_Text_Defeat
# 46 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_Defeated
# 47 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 48 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 49 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech::
# 50 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 51 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
# 52 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 53 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 54 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_Defeated::
# 55 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_PHOEBE
# 56 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 57 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 58 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
# 59 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 60 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 61 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_IntroSpeech:
# 62 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Huh?\p"
# 63 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Oh... A challenger? Hmph!\n"
# 64 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I was just getting to the good part.\p"
# 65 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Okay, let's get this over with\n"
# 66 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "so I can get back to my book!$"
# 67 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 68 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_Defeat:
# 69 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "... Fight's over?\n"
# 70 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Now I can get back to reading.$"
# 71 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 72 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech:
# 73 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Why are you still here?\n"
# 74 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Go on to the next room! Hmph!$"

EverGrandeCity_PhoebesRoom_EventScript_Lina::
# 78 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lock
# 79 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_EUGENIA, EverGrandeCity_PhoebesRoom_EventScript_EugeniaPostBattleSpeech
# 80 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech
# 81 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playse SE_PIN
# 82 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 83 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 1
# 84 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 20
# 85 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	faceplayer
# 86 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	compare VAR_LINA_TALKED_TO, 2
	goto_if_eq EverGrandeCity_PhoebesRoom_EventScript_Lina_1
# 94 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 95 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_PHOEBE, EverGrandeCity_PhoebesRoom_Text_Defeat
# 96 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_Defeated
	end

EverGrandeCity_PhoebesRoom_EventScript_Lina_1:
# 87 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_ELITE_FOUR_FINAL_BATTLE, EverGrandeCity_PhoebesRoom_EventScript_LinaSecretBoss
# 88 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_IntroSpeechVar2, MSGBOX_DEFAULT
# 89 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_PHOEBE, EverGrandeCity_PhoebesRoom_Text_Defeat
# 90 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_Defeated
	end


EverGrandeCity_PhoebesRoom_EventScript_LinaSecretBoss::
# 102 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_LinaStillGoingIntoHouses, MSGBOX_YESNO
# 103 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EverGrandeCity_PhoebesRoom_EventScript_LinaSecretBoss_1
# 108 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_LinaNo
	end

EverGrandeCity_PhoebesRoom_EventScript_LinaSecretBoss_1:
# 104 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_LinaEevee
	end


EverGrandeCity_PhoebesRoom_EventScript_LinaEevee::
# 114 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_LinaDidYouTakeEevee, MSGBOX_YESNO
# 115 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EverGrandeCity_PhoebesRoom_EventScript_LinaEevee_1
# 120 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_LinaNo
	end

EverGrandeCity_PhoebesRoom_EventScript_LinaEevee_1:
# 116 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_LinaReally
	end


EverGrandeCity_PhoebesRoom_EventScript_LinaReally::
# 126 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_NONE, FALSE
# 127 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_LinaReally, MSGBOX_YESNO
# 128 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EverGrandeCity_PhoebesRoom_EventScript_LinaReally_1
# 136 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_LinaNo
	end

EverGrandeCity_PhoebesRoom_EventScript_LinaReally_1:
# 129 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 130 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_EugeniaIntro, MSGBOX_DEFAULT
# 131 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_EUGENIA, EverGrandeCity_PhoebesRoom_Text_EugeniaDefeat
# 132 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_EugeniaDefeated
	end


EverGrandeCity_PhoebesRoom_EventScript_LinaNo::
# 142 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_LinaNo, MSGBOX_DEFAULT
# 143 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_PHOEBE, EverGrandeCity_PhoebesRoom_Text_Defeat
# 144 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_Defeated
	end


EverGrandeCity_PhoebesRoom_EventScript_EugeniaDefeated::
# 149 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_PHOEBE
# 150 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_EUGENIA
# 151 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setvar VAR_LINA_TALKED_TO, 3
# 152 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 153 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_EugeniaPostBattleSpeech, MSGBOX_DEFAULT
# 154 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
	end


EverGrandeCity_PhoebesRoom_EventScript_EugeniaPostBattleSpeech::
# 159 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_EugeniaPostBattleSpeech, MSGBOX_DEFAULT
# 160 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
	end


EverGrandeCity_PhoebesRoom_EventScript_Luxray::
# 216 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lock
# 217 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	faceplayer
# 218 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playmoncry SPECIES_LUXRAY, CRY_MODE_ENCOUNTER
# 219 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 24
# 220 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 221 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
	end


EverGrandeCity_PhoebesRoom_Text_IntroSpeechVar2::
# 165 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Wha-\n Oh, it's you again.\p Let's get this over with so I can\n go back to reading. Hmph!$"

EverGrandeCity_PhoebesRoom_Text_LinaStillGoingIntoHouses::
# 172 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Wha-!\n You again?!\l Right when I was getting to the good part!\p I thought I locked the door this time, but\n you would probably break in either way.\p Are you still going into random peoples'\n houses?$"

EverGrandeCity_PhoebesRoom_Text_LinaDidYouTakeEevee::
# 182 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Hmph! Of course you are.\p They still haven't found my EEVEE,\n by the way...\p So be honest. Was it you who took it?$"

EverGrandeCity_PhoebesRoom_Text_LinaReally::
# 189 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "... Really?$"

EverGrandeCity_PhoebesRoom_Text_EugeniaIntro::
# 193 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "You little-\p What the fuck is wrong with you?!\n I'm going to crush you, you dirty thief!$"

EverGrandeCity_PhoebesRoom_Text_EugeniaDefeat::
# 199 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string ">.>\n Hmph!$"

EverGrandeCity_PhoebesRoom_Text_EugeniaPostBattleSpeech::
# 204 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Get out of my sight!\n Hmph!$"

EverGrandeCity_PhoebesRoom_Text_LinaNo::
# 209 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Hmph. Oh, well.\p Let's get this over with so I\n can get back to my book.$"
