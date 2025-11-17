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
    call Common_EventScript_OutOfCenterPartyHeal
# 71 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 72 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 73 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
# 74 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 75 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 76 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_IntroSpeech:
# 77 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Huh?\p"
# 78 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Oh… A challenger? Hmph!\n"
# 79 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I was just getting to the good part.\p"
# 80 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Okay, let's get this over with\n"
# 81 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "so I can get back to my book!$"
# 82 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 83 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_Defeat:
# 84 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "… Fight's over?\n"
# 85 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Now I can get back to reading.$"
# 86 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 87 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech:
# 88 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Why are you still here?\n"
# 89 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Go on to the next room! Hmph!$"

EverGrandeCity_PhoebesRoom_EventScript_Lina::
# 93 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lock
# 94 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_EUGENIA, EverGrandeCity_PhoebesRoom_EventScript_EugeniaPostBattleSpeech
# 95 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_LINA, EverGrandeCity_PhoebesRoom_EventScript_LinaPostBattleSpeech
# 96 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech
# 97 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 16
# 98 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playse SE_PIN
# 99 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 100 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 1
# 101 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 20
# 102 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	faceplayer
# 103 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	compare VAR_LINA_TALKED_TO, 2
	goto_if_eq EverGrandeCity_PhoebesRoom_EventScript_Lina_2
# 110 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_SYS_FINAL_REMATCH, EverGrandeCity_PhoebesRoom_EventScript_LinaFinalBattle
# 111 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 112 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_PHOEBE, EverGrandeCity_PhoebesRoom_Text_Defeat
# 113 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_Defeated
EverGrandeCity_PhoebesRoom_EventScript_Lina_1:
	end

EverGrandeCity_PhoebesRoom_EventScript_Lina_2:
# 104 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_SYS_FINAL_REMATCH, EverGrandeCity_PhoebesRoom_EventScript_LinaSecretBoss
# 105 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_IntroSpeechVar2, MSGBOX_DEFAULT
# 106 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_PHOEBE, EverGrandeCity_PhoebesRoom_Text_Defeat
# 107 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_Defeated
	goto EverGrandeCity_PhoebesRoom_EventScript_Lina_1


EverGrandeCity_PhoebesRoom_EventScript_LinaFinalBattle::
# 119 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 120 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 121 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_IntroSpeechVar2, MSGBOX_AUTOCLOSE
# 122 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 123 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_TEMP_E
# 124 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call EliteFour_EventScript_PlayerGetsInPosition
# 125 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playfirstmoncry
# 126 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 127 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playmoncry SPECIES_LUXRAY, CRY_MODE_ENCOUNTER
# 128 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 129 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_PHOEBE
# 130 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_LINA
# 131 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_LINA, EverGrandeCity_PhoebesRoom_Text_Defeat
# 132 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 133 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 134 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	callnative RemoveFollowingPokemon
# 135 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_TEMP_E
# 136 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 137 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 138 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 139 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech
	end


EverGrandeCity_PhoebesRoom_EventScript_LinaSecretBoss::
# 144 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_LinaStillGoingIntoHouses, MSGBOX_YESNO
# 145 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 146 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EverGrandeCity_PhoebesRoom_EventScript_LinaSecretBoss_2
# 150 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_LinaNo
EverGrandeCity_PhoebesRoom_EventScript_LinaSecretBoss_1:
	end

EverGrandeCity_PhoebesRoom_EventScript_LinaSecretBoss_2:
# 147 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_LinaEevee
	goto EverGrandeCity_PhoebesRoom_EventScript_LinaSecretBoss_1


EverGrandeCity_PhoebesRoom_EventScript_LinaEevee::
# 156 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_LinaDidYouTakeEevee, MSGBOX_YESNO
# 157 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 158 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_eq VAR_RESULT, YES, EverGrandeCity_PhoebesRoom_EventScript_LinaReally
# 159 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	special IsEeveeInParty
# 160 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_EventScript_LinaEevee_Text_0, MSGBOX_AUTOCLOSE
# 162 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 163 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 164 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 165 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitse
# 166 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 167 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, EverGrandeCity_PhoebesRoom_EventScript_EugeniaEeveeTrue
# 168 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_LinaNo
	end


EverGrandeCity_PhoebesRoom_EventScript_LinaReally::
# 173 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_NONE, FALSE
# 174 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_LinaReally, MSGBOX_DEFAULT
# 175 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 176 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EverGrandeCity_PhoebesRoom_EventScript_LinaReally_Text_0, EverGrandeCity_PhoebesRoom_EventScript_LinaReally_Text_1
# 177 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PhoebesRoom_EventScript_EugeniaBattle
# 178 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	special IsEeveeInParty
# 179 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_EventScript_LinaEevee_Text_0, MSGBOX_AUTOCLOSE
# 181 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 182 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 183 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 184 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitse
# 185 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 186 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, EverGrandeCity_PhoebesRoom_EventScript_EugeniaEeveeTrue
# 187 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_LinaNo
	end


EverGrandeCity_PhoebesRoom_EventScript_EugeniaEeveeTrue::
# 192 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_EXDEATH, FALSE
# 193 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_EugeniaIntro, MSGBOX_DEFAULT
# 194 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 195 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EverGrandeCity_PhoebesRoom_EventScript_EugeniaEeveeTrue_Text_0, EverGrandeCity_PhoebesRoom_EventScript_EugeniaEeveeTrue_Text_1
# 196 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry
# 197 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	closemessage
# 198 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_TEMP_E
# 199 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 200 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle
# 201 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playfirstmoncry
# 202 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 203 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 204 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 205 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_EUGENIA
# 206 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_EUGENIA, EverGrandeCity_PhoebesRoom_Text_EugeniaDefeat
# 207 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_EugeniaDefeated
	end


EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry::
# 212 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_NONE, FALSE
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
	goto_if_eq VAR_RESULT, 1, EverGrandeCity_PhoebesRoom_EventScript_EugeniaBadNeedToBePunished
# 223 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_EXDEATH, FALSE
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
	end

EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_2:
# 217 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_1, EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_2
	goto EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_1


EverGrandeCity_PhoebesRoom_EventScript_EugeniaBadNeedToBePunished::
# 242 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	checkplayergender
# 243 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_EXDEATH, FALSE
# 244 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_PhoebesRoom_EventScript_EugeniaBadNeedToBePunished_2
# 252 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_EventScript_EugeniaBadNeedToBePunished_Text_3, MSGBOX_DEFAULT
# 255 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 256 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EverGrandeCity_PhoebesRoom_EventScript_EugeniaBadNeedToBePunished_Text_1, EverGrandeCity_PhoebesRoom_EventScript_EugeniaBadNeedToBePunished_Text_4
EverGrandeCity_PhoebesRoom_EventScript_EugeniaBadNeedToBePunished_1:
# 258 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, EverGrandeCity_PhoebesRoom_EventScript_LinaNo
# 259 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_4, MSGBOX_AUTOCLOSE
# 262 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 263 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_TEMP_E
# 264 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 265 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle
# 266 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playfirstmoncry
# 267 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 268 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 269 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 270 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_EUGENIA
# 271 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_EUGENIA, EverGrandeCity_PhoebesRoom_Text_EugeniaDefeat
# 272 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_EugeniaDefeated
	end

EverGrandeCity_PhoebesRoom_EventScript_EugeniaBadNeedToBePunished_2:
# 245 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_EventScript_EugeniaBadNeedToBePunished_Text_0, MSGBOX_DEFAULT
# 248 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 249 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EverGrandeCity_PhoebesRoom_EventScript_EugeniaBadNeedToBePunished_Text_1, EverGrandeCity_PhoebesRoom_EventScript_EugeniaBadNeedToBePunished_Text_2
	goto EverGrandeCity_PhoebesRoom_EventScript_EugeniaBadNeedToBePunished_1


EverGrandeCity_PhoebesRoom_EventScript_EugeniaBattle::
# 277 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_EXDEATH, FALSE
# 278 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_EugeniaIntro, MSGBOX_AUTOCLOSE
# 279 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 280 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_TEMP_E
# 281 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 282 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle
# 283 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playfirstmoncry
# 284 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 285 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 286 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 287 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_EUGENIA
# 288 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_EUGENIA, EverGrandeCity_PhoebesRoom_Text_EugeniaDefeat
# 289 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_EugeniaDefeated
	end


EverGrandeCity_PhoebesRoom_EventScript_LinaNo::
# 294 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 295 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_LinaNo, MSGBOX_AUTOCLOSE
# 296 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 297 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_TEMP_E
# 298 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 299 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call EliteFour_EventScript_PlayerGetsInPosition
# 300 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playfirstmoncry
# 301 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 302 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playmoncry SPECIES_LUXRAY, CRY_MODE_ENCOUNTER
# 303 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 304 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_PHOEBE
# 305 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_LINA
# 306 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_LINA, EverGrandeCity_PhoebesRoom_Text_Defeat
# 307 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 308 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 309 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	callnative RemoveFollowingPokemon
# 310 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_TEMP_E
# 311 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 312 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 313 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 314 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech
	end


EverGrandeCity_PhoebesRoom_EventScript_EugeniaDefeated::
# 319 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_PHOEBE
# 320 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setvar VAR_LINA_TALKED_TO, 3
# 321 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 322 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 323 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	callnative RemoveFollowingPokemon
# 324 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_TEMP_E
# 325 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 326 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 327 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 328 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_EugeniaPostBattleSpeech, MSGBOX_DEFAULT
# 329 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
	end


EverGrandeCity_PhoebesRoom_EventScript_LinaPostBattleSpeech::
# 334 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	faceplayer
# 335 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 336 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
	end


EverGrandeCity_PhoebesRoom_EventScript_EugeniaPostBattleSpeech::
# 341 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, EverGrandeCity_PhoebesRoom_Movement_FaceAwayPlayer
# 342 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 343 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_EugeniaPostBattleSpeech, MSGBOX_DEFAULT
# 344 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
	end


EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle::
# 349 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement 2, Common_Movement_EnterPokeball
# 350 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 2
# 351 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	removeobject 2
# 352 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 353 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	switch VAR_RESULT
# 354 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	case DIR_NORTH, EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_3
# 358 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	case DIR_SOUTH, EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_4
# 364 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	case DIR_WEST, EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_5
# 371 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_SidneysRoom_Movement_PlayerGetsInPositionNorth
# 372 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_1:
# 374 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_TEMP_E
# 375 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	callnative UpdateFollowingPokemon
# 376 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playse SE_BALL_OPEN
# 377 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadescreen FADE_TO_WHITE
# 378 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitse
# 379 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExitPokeball
# 380 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 381 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BaldesianForestDojo_Movement_FollowerBesidePlayer
# 382 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 383 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 384 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_Text_0, MSGBOX_AUTOCLOSE
# 386 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 387 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playse SE_BALL_OPEN
# 388 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadescreen FADE_TO_WHITE
# 389 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitse
# 391 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	addobject LOCALID_RAYQUAZA
# 392 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 393 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 30
# 394 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playse SE_PIN
# 395 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExclamationMark
# 396 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 397 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 398 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitse
# 399 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 30
# 400 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_PhoebesRoom_Movement_PlayerStepBack
# 401 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 8
# 402 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EverGrandeCity_PhoebesRoom_Movement_PlayerStepBack
# 403 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement LOCALID_RAYQUAZA, EverGrandeCity_Movement_EliteFourPokemonGetsInPosition
# 404 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement LOCALID_RAYQUAZA
# 405 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 30
# 406 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 407 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 8
# 408 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_WalkInPlaceRight
# 409 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 410 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 60
# 411 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 412 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 8
# 413 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_WalkInPlaceUp
# 414 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 415 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EverGrandeCity_Movement_PlayerPokemonGetsInPosition
# 416 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 417 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 30
	return

EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_3:
# 355 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_SidneysRoom_Movement_PlayerGetsInPositionNorth
# 356 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
	goto EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_1

EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_4:
# 359 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_SidneysRoom_Movement_PlayerGetsInPositionSouth
# 360 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 8
# 361 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceDown
# 362 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_1

EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_5:
# 365 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_SidneysRoom_Movement_PlayerGetsInPositionWest
# 366 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 8
# 367 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceDown
# 368 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_1


EverGrandeCity_PhoebesRoom_EventScript_Luxray::
# 478 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lock
# 479 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	faceplayer
# 480 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playmoncry SPECIES_LUXRAY, CRY_MODE_ENCOUNTER
# 481 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 482 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 483 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 2
# 484 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
	end


# 488 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Movement_PlayerStepBack:
# 489 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lock_facing_direction
# 490 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	walk_fast_down
# 491 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 494 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Movement_FaceAwayPlayer:
# 495 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	face_away_player
	step_end

EverGrandeCity_PhoebesRoom_EventScript_LinaEevee_Text_0:
# 160 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I don't believe you…\n Let me check your POKéMON.$"

EverGrandeCity_PhoebesRoom_EventScript_LinaReally_Text_0:
# 176 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Yup. I'd do it again too.$"

EverGrandeCity_PhoebesRoom_EventScript_LinaReally_Text_1:
# 176 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "No. I was just kidding!$"

EverGrandeCity_PhoebesRoom_EventScript_EugeniaEeveeTrue_Text_0:
# 195 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "……………$"

EverGrandeCity_PhoebesRoom_EventScript_EugeniaEeveeTrue_Text_1:
# 195 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I'm sorry! I won't do it again!$"

EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_0:
# 213 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Are you really sorry?$"

EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_1:
# 217 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Yeah, I'm “soooo” sorry!$"

EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_2:
# 217 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Yes! I was a bad boy!$"

EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_3:
# 220 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Yes! I was a bad girl!$"

EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_4:
# 224 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Hmph!\n You're a terrible person.\p No more second chances!$"

EverGrandeCity_PhoebesRoom_EventScript_EugeniaBadNeedToBePunished_Text_0:
# 245 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Hmph!\n Well, bad boys need to be punished.\p You shouldn't have stolen my EEVEE!$"

EverGrandeCity_PhoebesRoom_EventScript_EugeniaBadNeedToBePunished_Text_1:
# 249 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "You know what? I take it back.$"

EverGrandeCity_PhoebesRoom_EventScript_EugeniaBadNeedToBePunished_Text_2:
# 249 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Okay, okay! I'm a good boy!$"

EverGrandeCity_PhoebesRoom_EventScript_EugeniaBadNeedToBePunished_Text_3:
# 252 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Hmph!\n Well, bad girls need to be punished.\p You shouldn't have stolen my EEVEE!$"

EverGrandeCity_PhoebesRoom_EventScript_EugeniaBadNeedToBePunished_Text_4:
# 256 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Okay, okay! I'm a good girl!$"

EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_Text_0:
# 384 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Hmph! I'm going to do everything I\n can to make you pay!$"

EverGrandeCity_PhoebesRoom_Text_IntroSpeechVar2::
# 422 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Wha-!\n Oh, it's you again.\p Let's get this over with so I can\n go back to reading. Hmph!$"

EverGrandeCity_PhoebesRoom_Text_LinaStillGoingIntoHouses::
# 429 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Wha-!\n You again?!\p Right when I was getting to\n the good part!\p I thought I locked the door this time…\n but you'd probably break in either way.\p Are you still going into random peoples'\n houses?$"

EverGrandeCity_PhoebesRoom_Text_LinaDidYouTakeEevee::
# 440 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Hmph! Of course you are.\p They still haven't found my EEVEE,\n by the way…\p So be honest.\n Was it you?$"

EverGrandeCity_PhoebesRoom_Text_LinaReally::
# 448 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "…\p Really?$"

EverGrandeCity_PhoebesRoom_Text_EugeniaIntro::
# 453 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "You little-\n What the fuck is wrong with you?!\l Didn't your mother raise you better?!\p You should know it's wrong to steal!\n I'm going to crush you, you dirty thief!$"

EverGrandeCity_PhoebesRoom_Text_EugeniaDefeat::
# 461 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string ">.>\n Hmph!$"

EverGrandeCity_PhoebesRoom_Text_EugeniaPostBattleSpeech::
# 466 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Get out of my sight!\n Hmph!$"

EverGrandeCity_PhoebesRoom_Text_LinaNo::
# 471 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Hmph. Oh well.\p Let's get this over with so I\n can get back to my book.$"
