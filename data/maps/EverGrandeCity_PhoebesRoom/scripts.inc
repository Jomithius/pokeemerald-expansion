# 1 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
.set LOCALID_RAYQUAZA, 3
# 2 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 3 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_MapScripts::
# 4 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_PhoebesRoom_OnLoad
# 5 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_PhoebesRoom_OnWarp
# 6 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_PhoebesRoom_OnFrame
# 7 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
    map_script MAP_SCRIPT_ON_RESUME, EverGrandeCity_PhoebesRoom_OnResume
# 8 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_Hall_OnTransition
# 9 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.byte 0
# 10 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 11 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnWarp:
# 12 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_PhoebesRoom_EventScript_PlayerTurnNorth
# 13 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.2byte 0
# 14 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 15 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_PlayerTurnNorth::
# 16 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 17 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 18 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 19 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnFrame:
# 20 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script_2 VAR_ELITE_4_STATE, 1, EverGrandeCity_PhoebesRoom_EventScript_WalkInCloseDoor
# 21 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.2byte 0
# 22 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 23 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_WalkInCloseDoor::
# 24 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lockall
# 25 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 26 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setvar VAR_ELITE_4_STATE, 2
# 27 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	releaseall
# 28 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 29 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 30 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnLoad:
# 31 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_EventScript_ResetAdvanceToNextRoom
# 32 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call_if_eq VAR_ELITE_4_STATE, 2, EverGrandeCity_PhoebesRoom_EventScript_CloseDoor
# 33 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 34 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 35 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_ResetAdvanceToNextRoom::
# 36 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
# 37 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	return
# 38 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 39 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_CloseDoor::
# 40 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
# 41 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	return
# 42 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 43 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnResume:
# 44 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
    call_if_set FLAG_DEFEATED_LINA, EverGrandeCity_RemoveEliteFourPokemon
# 45 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
    call_if_set FLAG_DEFEATED_EUGENIA, EverGrandeCity_RemoveRayquaza
# 46 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
    end
# 47 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 48 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_RemoveRayquaza:
# 49 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
    removeobject LOCALID_RAYQUAZA
# 50 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
    removeobject 2
# 51 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
    return
# 52 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 53 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_Phoebe::
# 54 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lock
# 55 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	faceplayer
# 56 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech
# 57 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 58 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 59 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_PHOEBE, EverGrandeCity_PhoebesRoom_Text_Defeat
# 60 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_Defeated
# 61 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 62 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 63 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech::
# 64 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 65 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
# 66 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 67 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 68 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_Defeated::
# 69 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_PHOEBE
# 70 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 71 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 72 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
# 73 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 74 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 75 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_IntroSpeech:
# 76 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Huh?\p"
# 77 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Oh… A challenger? Hmph!\n"
# 78 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I was just getting to the good part.\p"
# 79 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Okay, let's get this over with\n"
# 80 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "so I can get back to my book!$"
# 81 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 82 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_Defeat:
# 83 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "… Fight's over?\n"
# 84 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Now I can get back to reading.$"
# 85 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 86 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech:
# 87 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Why are you still here?\n"
# 88 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Go on to the next room! Hmph!$"

EverGrandeCity_PhoebesRoom_EventScript_Lina::
# 92 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lock
# 93 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_EUGENIA, EverGrandeCity_PhoebesRoom_EventScript_EugeniaPostBattleSpeech
# 94 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_LINA, EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech
# 95 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech
# 96 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 16
# 97 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playse SE_PIN
# 98 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 99 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 1
# 100 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 20
# 101 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	faceplayer
# 102 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	compare VAR_LINA_TALKED_TO, 2
	goto_if_eq EverGrandeCity_PhoebesRoom_EventScript_Lina_2
# 109 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_SYS_FINAL_REMATCH, EverGrandeCity_PhoebesRoom_EventScript_LinaFinalBattle
# 110 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 111 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_PHOEBE, EverGrandeCity_PhoebesRoom_Text_Defeat
# 112 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_Defeated
EverGrandeCity_PhoebesRoom_EventScript_Lina_1:
	end

EverGrandeCity_PhoebesRoom_EventScript_Lina_2:
# 103 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_SYS_FINAL_REMATCH, EverGrandeCity_PhoebesRoom_EventScript_LinaSecretBoss
# 104 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_IntroSpeechVar2, MSGBOX_DEFAULT
# 105 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_PHOEBE, EverGrandeCity_PhoebesRoom_Text_Defeat
# 106 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_Defeated
	goto EverGrandeCity_PhoebesRoom_EventScript_Lina_1


EverGrandeCity_PhoebesRoom_EventScript_LinaFinalBattle::
# 118 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 119 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 120 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_IntroSpeechVar2, MSGBOX_AUTOCLOSE
# 121 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 122 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_TEMP_E
# 123 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call EliteFour_EventScript_PlayerGetsInPosition
# 124 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playfirstmoncry
# 125 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 126 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playmoncry SPECIES_LUXRAY, CRY_MODE_ENCOUNTER
# 127 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 128 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_PHOEBE
# 129 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_LINA
# 130 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_LINA, EverGrandeCity_PhoebesRoom_Text_Defeat
# 131 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 132 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 133 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	callnative RemoveFollowingPokemon
# 134 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_TEMP_E
# 135 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 136 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 137 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech
	end


EverGrandeCity_PhoebesRoom_EventScript_LinaSecretBoss::
# 142 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_LinaStillGoingIntoHouses, MSGBOX_YESNO
# 143 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 144 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EverGrandeCity_PhoebesRoom_EventScript_LinaSecretBoss_1
# 149 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_LinaNo
	end

EverGrandeCity_PhoebesRoom_EventScript_LinaSecretBoss_1:
# 145 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_LinaEevee
	end


EverGrandeCity_PhoebesRoom_EventScript_LinaEevee::
# 155 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_LinaDidYouTakeEevee, MSGBOX_YESNO
# 156 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 157 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_eq VAR_RESULT, YES, EverGrandeCity_PhoebesRoom_EventScript_LinaReally
# 158 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	special IsEeveeInParty
# 159 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_EventScript_LinaEevee_Text_0, MSGBOX_AUTOCLOSE
# 161 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 162 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 163 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 164 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitse
# 165 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 166 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, EverGrandeCity_PhoebesRoom_EventScript_EugeniaEeveeTrue
# 167 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_LinaNo
	end


EverGrandeCity_PhoebesRoom_EventScript_LinaReally::
# 172 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_NONE, FALSE
# 173 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_LinaReally, MSGBOX_DEFAULT
# 174 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 175 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EverGrandeCity_PhoebesRoom_EventScript_LinaReally_Text_0, EverGrandeCity_PhoebesRoom_EventScript_LinaReally_Text_1
# 176 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PhoebesRoom_EventScript_EugeniaBattle
# 177 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	special IsEeveeInParty
# 178 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_EventScript_LinaEevee_Text_0, MSGBOX_AUTOCLOSE
# 180 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 181 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 182 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 183 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitse
# 184 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 185 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, EverGrandeCity_PhoebesRoom_EventScript_EugeniaEeveeTrue
# 186 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_LinaNo
	end


EverGrandeCity_PhoebesRoom_EventScript_EugeniaEeveeTrue::
# 191 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_EXDEATH, FALSE
# 192 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_EugeniaIntro, MSGBOX_DEFAULT
# 193 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 194 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EverGrandeCity_PhoebesRoom_EventScript_EugeniaEeveeTrue_Text_0, EverGrandeCity_PhoebesRoom_EventScript_EugeniaEeveeTrue_Text_1
# 195 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry
# 196 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	closemessage
# 197 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_TEMP_E
# 198 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 199 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle
# 200 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playfirstmoncry
# 201 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 202 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 203 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 204 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_EUGENIA
# 205 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_EUGENIA, EverGrandeCity_PhoebesRoom_Text_EugeniaDefeat
# 206 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_EugeniaDefeated
	end


EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry::
# 211 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadeoutbgm 0
# 212 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 16
# 213 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_0, MSGBOX_DEFAULT
# 214 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 215 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	checkplayergender
# 216 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_2
# 220 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_1, EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_3
EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_1:
# 222 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, EverGrandeCity_PhoebesRoom_EventScript_LinaNo
# 223 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadeinbgm 0
# 224 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_4, MSGBOX_AUTOCLOSE
# 227 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 228 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_TEMP_E
# 229 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 230 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle
# 231 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playfirstmoncry
# 232 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 233 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 234 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 235 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_EUGENIA
# 236 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_EUGENIA, EverGrandeCity_PhoebesRoom_Text_EugeniaDefeat
# 237 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_EugeniaDefeated
	return

EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_2:
# 217 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_1, EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_2
	goto EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_1


EverGrandeCity_PhoebesRoom_EventScript_EugeniaBattle::
# 241 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_EXDEATH, FALSE
# 242 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_EugeniaIntro, MSGBOX_AUTOCLOSE
# 243 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 244 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_TEMP_E
# 245 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 246 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle
# 247 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playfirstmoncry
# 248 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 249 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 250 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 251 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_EUGENIA
# 252 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_EUGENIA, EverGrandeCity_PhoebesRoom_Text_EugeniaDefeat
# 253 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_EugeniaDefeated
	end


EverGrandeCity_PhoebesRoom_EventScript_LinaNo::
# 258 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 259 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_LinaNo, MSGBOX_AUTOCLOSE
# 260 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 261 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_TEMP_E
# 262 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 263 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call EliteFour_EventScript_PlayerGetsInPosition
# 264 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playfirstmoncry
# 265 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 266 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playmoncry SPECIES_LUXRAY, CRY_MODE_ENCOUNTER
# 267 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 268 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_PHOEBE
# 269 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_LINA
# 270 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_LINA, EverGrandeCity_PhoebesRoom_Text_Defeat
# 271 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 272 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 273 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	callnative RemoveFollowingPokemon
# 274 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_TEMP_E
# 275 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 276 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 277 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech
	end


EverGrandeCity_PhoebesRoom_EventScript_EugeniaDefeated::
# 282 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_PHOEBE
# 283 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setvar VAR_LINA_TALKED_TO, 3
# 284 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 285 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 286 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	callnative RemoveFollowingPokemon
# 287 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_TEMP_E
# 288 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 289 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 290 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_EugeniaPostBattleSpeech, MSGBOX_DEFAULT
# 291 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
	end


EverGrandeCity_PhoebesRoom_EventScript_EugeniaPostBattleSpeech::
# 296 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, EverGrandeCity_PhoebesRoom_Movement_FaceAwayPlayer
# 297 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 298 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_EugeniaPostBattleSpeech, MSGBOX_DEFAULT
# 299 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
	end


EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle::
# 304 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement 2, Common_Movement_EnterPokeball
# 305 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 2
# 306 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	removeobject 2
# 307 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 308 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	switch VAR_RESULT
# 309 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	case DIR_NORTH, EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_3
# 313 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	case DIR_SOUTH, EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_4
# 319 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	case DIR_WEST, EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_5
# 326 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_SidneysRoom_Movement_PlayerGetsInPositionNorth
# 327 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_1:
# 329 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_TEMP_E
# 330 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	callnative UpdateFollowingPokemon
# 331 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playse SE_BALL_OPEN
# 332 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadescreen FADE_TO_WHITE
# 333 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitse
# 334 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExitPokeball
# 335 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 336 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BaldesianForestDojo_Movement_FollowerBesidePlayer
# 337 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 338 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 339 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_Text_0, MSGBOX_AUTOCLOSE
# 341 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 342 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playse SE_BALL_OPEN
# 343 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadescreen FADE_TO_WHITE
# 344 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitse
# 345 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_HIDE_RAYQUAZA_PHOEBES_ROOM
# 346 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	addobject LOCALID_RAYQUAZA
# 347 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 348 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 30
# 349 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playse SE_PIN
# 350 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExclamationMark
# 351 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 352 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 353 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitse
# 354 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 30
# 355 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_PhoebesRoom_Movement_PlayerStepBack
# 356 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 8
# 357 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EverGrandeCity_PhoebesRoom_Movement_PlayerStepBack
# 358 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement LOCALID_RAYQUAZA, EverGrandeCity_Movement_EliteFourPokemonGetsInPosition
# 359 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement LOCALID_RAYQUAZA
# 360 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 30
# 361 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 362 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 8
# 363 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_WalkInPlaceRight
# 364 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 365 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 60
# 366 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 367 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 8
# 368 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_WalkInPlaceUp
# 369 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 370 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EverGrandeCity_Movement_PlayerPokemonGetsInPosition
# 371 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 372 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 30
	return

EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_3:
# 310 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_SidneysRoom_Movement_PlayerGetsInPositionNorth
# 311 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
	goto EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_1

EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_4:
# 314 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_SidneysRoom_Movement_PlayerGetsInPositionSouth
# 315 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 8
# 316 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceDown
# 317 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_1

EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_5:
# 320 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_SidneysRoom_Movement_PlayerGetsInPositionWest
# 321 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 8
# 322 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceDown
# 323 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_1


EverGrandeCity_PhoebesRoom_EventScript_Luxray::
# 433 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lock
# 434 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	faceplayer
# 435 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playmoncry SPECIES_LUXRAY, CRY_MODE_ENCOUNTER
# 436 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 24
# 437 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 438 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
	end


# 442 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Movement_PlayerStepBack:
# 443 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lock_facing_direction
# 444 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	walk_fast_down
# 445 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 448 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Movement_FaceAwayPlayer:
# 449 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	face_away_player
	step_end

EverGrandeCity_PhoebesRoom_EventScript_LinaEevee_Text_0:
# 159 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I don't believe you…\n Let me check your POKéMON.$"

EverGrandeCity_PhoebesRoom_EventScript_LinaReally_Text_0:
# 175 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Yup. I'd do it again too.$"

EverGrandeCity_PhoebesRoom_EventScript_LinaReally_Text_1:
# 175 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "No. I was just kidding!$"

EverGrandeCity_PhoebesRoom_EventScript_EugeniaEeveeTrue_Text_0:
# 194 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "……………$"

EverGrandeCity_PhoebesRoom_EventScript_EugeniaEeveeTrue_Text_1:
# 194 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I'm sorry! I won't do it again!$"

EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_0:
# 213 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Are you really sorry?$"

EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_1:
# 217 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Actually, no. I'm not!$"

EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_2:
# 217 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Yes! I was a bad boy!$"

EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_3:
# 220 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Yes! I was a bad girl!$"

EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_4:
# 224 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Hmph!\n You're a terrible person.\p No more second chances!$"

EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_Text_0:
# 339 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Hmph! I'm going to do everything I\n can to make you pay!$"

EverGrandeCity_PhoebesRoom_Text_IntroSpeechVar2::
# 377 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Wha-!\n Oh, it's you again.\p Let's get this over with so I can\n go back to reading. Hmph!$"

EverGrandeCity_PhoebesRoom_Text_LinaStillGoingIntoHouses::
# 384 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Wha-!\n You again?!\p Right when I was getting to\n the good part!\p I thought I locked the door this time…\n but you'd probably break in either way.\p Are you still going into random peoples'\n houses?$"

EverGrandeCity_PhoebesRoom_Text_LinaDidYouTakeEevee::
# 395 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Hmph! Of course you are.\p They still haven't found my EEVEE,\n by the way…\p So be honest.\n Was it you?$"

EverGrandeCity_PhoebesRoom_Text_LinaReally::
# 403 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "…\p Really?$"

EverGrandeCity_PhoebesRoom_Text_EugeniaIntro::
# 408 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "You little-\n What the fuck is wrong with you?!\l Didn't your mother raise you better?!\p You should know it's wrong to steal!\n I'm going to crush you, you dirty thief!$"

EverGrandeCity_PhoebesRoom_Text_EugeniaDefeat::
# 416 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string ">.>\n Hmph!$"

EverGrandeCity_PhoebesRoom_Text_EugeniaPostBattleSpeech::
# 421 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Get out of my sight!\n Hmph!$"

EverGrandeCity_PhoebesRoom_Text_LinaNo::
# 426 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Hmph. Oh, well.\p Let's get this over with so I\n can get back to my book.$"
