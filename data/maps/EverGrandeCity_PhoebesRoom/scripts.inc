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
	goto_if_set FLAG_DEFEATED_LINA, EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech
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
	goto_if_eq EverGrandeCity_PhoebesRoom_EventScript_LinaSecretBoss_1
# 151 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_LinaNo
	end

EverGrandeCity_PhoebesRoom_EventScript_LinaSecretBoss_1:
# 147 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_LinaEevee
	end


EverGrandeCity_PhoebesRoom_EventScript_LinaEevee::
# 157 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_LinaDidYouTakeEevee, MSGBOX_YESNO
# 158 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 159 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_eq VAR_RESULT, YES, EverGrandeCity_PhoebesRoom_EventScript_LinaReally
# 160 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	special IsEeveeInParty
# 161 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_EventScript_LinaEevee_Text_0, MSGBOX_AUTOCLOSE
# 163 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 164 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 165 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 166 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitse
# 167 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 168 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, EverGrandeCity_PhoebesRoom_EventScript_EugeniaEeveeTrue
# 169 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_LinaNo
	end


EverGrandeCity_PhoebesRoom_EventScript_LinaReally::
# 174 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_NONE, FALSE
# 175 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_LinaReally, MSGBOX_DEFAULT
# 176 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 177 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EverGrandeCity_PhoebesRoom_EventScript_LinaReally_Text_0, EverGrandeCity_PhoebesRoom_EventScript_LinaReally_Text_1
# 178 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PhoebesRoom_EventScript_EugeniaBattle
# 179 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	special IsEeveeInParty
# 180 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_EventScript_LinaEevee_Text_0, MSGBOX_AUTOCLOSE
# 182 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 183 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 184 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 185 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitse
# 186 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 187 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, EverGrandeCity_PhoebesRoom_EventScript_EugeniaEeveeTrue
# 188 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_LinaNo
	end


EverGrandeCity_PhoebesRoom_EventScript_EugeniaEeveeTrue::
# 193 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_EXDEATH, FALSE
# 194 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_EugeniaIntro, MSGBOX_DEFAULT
# 195 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 196 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EverGrandeCity_PhoebesRoom_EventScript_EugeniaEeveeTrue_Text_0, EverGrandeCity_PhoebesRoom_EventScript_EugeniaEeveeTrue_Text_1
# 197 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry
# 198 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	closemessage
# 199 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_TEMP_E
# 200 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 201 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle
# 202 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playfirstmoncry
# 203 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 204 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 205 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 206 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_EUGENIA
# 207 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_EUGENIA, EverGrandeCity_PhoebesRoom_Text_EugeniaDefeat
# 208 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_EugeniaDefeated
	end


EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry::
# 213 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_NONE, FALSE
# 214 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_0, MSGBOX_DEFAULT
# 215 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 216 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	checkplayergender
# 217 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_2
# 221 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_1, EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_3
EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_1:
# 223 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, EverGrandeCity_PhoebesRoom_EventScript_EugeniaBadNeedToBePunished
# 224 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_EXDEATH, FALSE
# 225 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_4, MSGBOX_AUTOCLOSE
# 228 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 229 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_TEMP_E
# 230 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 231 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle
# 232 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playfirstmoncry
# 233 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 234 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 235 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 236 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_EUGENIA
# 237 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_EUGENIA, EverGrandeCity_PhoebesRoom_Text_EugeniaDefeat
# 238 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_EugeniaDefeated
	return

EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_2:
# 218 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
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
	return

EverGrandeCity_PhoebesRoom_EventScript_EugeniaBadNeedToBePunished_2:
# 245 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_EventScript_EugeniaBadNeedToBePunished_Text_0, MSGBOX_DEFAULT
# 248 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 249 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EverGrandeCity_PhoebesRoom_EventScript_EugeniaBadNeedToBePunished_Text_1, EverGrandeCity_PhoebesRoom_EventScript_EugeniaBadNeedToBePunished_Text_2
	goto EverGrandeCity_PhoebesRoom_EventScript_EugeniaBadNeedToBePunished_1


EverGrandeCity_PhoebesRoom_EventScript_EugeniaBattle::
# 276 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_EXDEATH, FALSE
# 277 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_EugeniaIntro, MSGBOX_AUTOCLOSE
# 278 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 279 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_TEMP_E
# 280 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 281 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle
# 282 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playfirstmoncry
# 283 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 284 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 285 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 286 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_EUGENIA
# 287 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_EUGENIA, EverGrandeCity_PhoebesRoom_Text_EugeniaDefeat
# 288 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_EugeniaDefeated
	end


EverGrandeCity_PhoebesRoom_EventScript_LinaNo::
# 293 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 294 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_LinaNo, MSGBOX_AUTOCLOSE
# 295 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 296 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_TEMP_E
# 297 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 298 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call EliteFour_EventScript_PlayerGetsInPosition
# 299 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playfirstmoncry
# 300 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 301 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playmoncry SPECIES_LUXRAY, CRY_MODE_ENCOUNTER
# 302 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmoncry
# 303 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_PHOEBE
# 304 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_LINA
# 305 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_LINA, EverGrandeCity_PhoebesRoom_Text_Defeat
# 306 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 307 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 308 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	callnative RemoveFollowingPokemon
# 309 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_TEMP_E
# 310 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 311 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 312 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 313 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech
	end


EverGrandeCity_PhoebesRoom_EventScript_EugeniaDefeated::
# 318 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_PHOEBE
# 319 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setvar VAR_LINA_TALKED_TO, 3
# 320 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 321 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 322 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	callnative RemoveFollowingPokemon
# 323 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_TEMP_E
# 324 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 325 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 326 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 327 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_EugeniaPostBattleSpeech, MSGBOX_DEFAULT
# 328 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
	end


EverGrandeCity_PhoebesRoom_EventScript_EugeniaPostBattleSpeech::
# 333 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, EverGrandeCity_PhoebesRoom_Movement_FaceAwayPlayer
# 334 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 335 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_EugeniaPostBattleSpeech, MSGBOX_DEFAULT
# 336 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
	end


EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle::
# 341 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement 2, Common_Movement_EnterPokeball
# 342 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 2
# 343 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	removeobject 2
# 344 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 345 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	switch VAR_RESULT
# 346 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	case DIR_NORTH, EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_3
# 350 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	case DIR_SOUTH, EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_4
# 356 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	case DIR_WEST, EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_5
# 363 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_SidneysRoom_Movement_PlayerGetsInPositionNorth
# 364 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_1:
# 366 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_TEMP_E
# 367 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	callnative UpdateFollowingPokemon
# 368 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playse SE_BALL_OPEN
# 369 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadescreen FADE_TO_WHITE
# 370 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitse
# 371 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExitPokeball
# 372 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 373 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BaldesianForestDojo_Movement_FollowerBesidePlayer
# 374 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 375 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 376 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_Text_0, MSGBOX_AUTOCLOSE
# 378 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmessage
# 379 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playse SE_BALL_OPEN
# 380 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadescreen FADE_TO_WHITE
# 381 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitse
# 382 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	clearflag FLAG_HIDE_RAYQUAZA_PHOEBES_ROOM
# 383 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	addobject LOCALID_RAYQUAZA
# 384 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 385 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 30
# 386 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playse SE_PIN
# 387 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExclamationMark
# 388 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 389 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 390 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitse
# 391 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 30
# 392 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_PhoebesRoom_Movement_PlayerStepBack
# 393 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 8
# 394 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EverGrandeCity_PhoebesRoom_Movement_PlayerStepBack
# 395 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement LOCALID_RAYQUAZA, EverGrandeCity_Movement_EliteFourPokemonGetsInPosition
# 396 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement LOCALID_RAYQUAZA
# 397 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 30
# 398 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 399 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 8
# 400 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_WalkInPlaceRight
# 401 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 402 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 60
# 403 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 404 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 8
# 405 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_WalkInPlaceUp
# 406 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 407 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EverGrandeCity_Movement_PlayerPokemonGetsInPosition
# 408 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 409 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 30
	return

EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_3:
# 347 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_SidneysRoom_Movement_PlayerGetsInPositionNorth
# 348 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
	goto EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_1

EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_4:
# 351 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_SidneysRoom_Movement_PlayerGetsInPositionSouth
# 352 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 8
# 353 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceDown
# 354 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_1

EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_5:
# 357 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_SidneysRoom_Movement_PlayerGetsInPositionWest
# 358 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 8
# 359 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceDown
# 360 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto EliteFour_EventScript_PlayerGetsInPositionEugeniaBattle_1


EverGrandeCity_PhoebesRoom_EventScript_Luxray::
# 470 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lock
# 471 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	faceplayer
# 472 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playmoncry SPECIES_LUXRAY, CRY_MODE_ENCOUNTER
# 473 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	delay 24
# 474 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 475 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 2
# 476 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
	end


# 480 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Movement_PlayerStepBack:
# 481 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lock_facing_direction
# 482 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	walk_fast_down
# 483 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	unlock_facing_direction
	step_end

# 486 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Movement_FaceAwayPlayer:
# 487 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	face_away_player
	step_end

EverGrandeCity_PhoebesRoom_EventScript_LinaEevee_Text_0:
# 161 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I don't believe you…\n Let me check your POKéMON.$"

EverGrandeCity_PhoebesRoom_EventScript_LinaReally_Text_0:
# 177 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Yup. I'd do it again too.$"

EverGrandeCity_PhoebesRoom_EventScript_LinaReally_Text_1:
# 177 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "No. I was just kidding!$"

EverGrandeCity_PhoebesRoom_EventScript_EugeniaEeveeTrue_Text_0:
# 196 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "……………$"

EverGrandeCity_PhoebesRoom_EventScript_EugeniaEeveeTrue_Text_1:
# 196 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I'm sorry! I won't do it again!$"

EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_0:
# 214 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Are you really sorry?$"

EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_1:
# 218 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Yeah, I'm “soooo” sorry!$"

EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_2:
# 218 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Yes! I was a bad boy!$"

EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_3:
# 221 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Yes! I was a bad girl!$"

EverGrandeCity_PhoebesRoom_EventScript_EugeniaAreYouReallySorry_Text_4:
# 225 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
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
# 376 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Hmph! I'm going to do everything I\n can to make you pay!$"

EverGrandeCity_PhoebesRoom_Text_IntroSpeechVar2::
# 414 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Wha-!\n Oh, it's you again.\p Let's get this over with so I can\n go back to reading. Hmph!$"

EverGrandeCity_PhoebesRoom_Text_LinaStillGoingIntoHouses::
# 421 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Wha-!\n You again?!\p Right when I was getting to\n the good part!\p I thought I locked the door this time…\n but you'd probably break in either way.\p Are you still going into random peoples'\n houses?$"

EverGrandeCity_PhoebesRoom_Text_LinaDidYouTakeEevee::
# 432 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Hmph! Of course you are.\p They still haven't found my EEVEE,\n by the way…\p So be honest.\n Was it you?$"

EverGrandeCity_PhoebesRoom_Text_LinaReally::
# 440 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "…\p Really?$"

EverGrandeCity_PhoebesRoom_Text_EugeniaIntro::
# 445 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "You little-\n What the fuck is wrong with you?!\l Didn't your mother raise you better?!\p You should know it's wrong to steal!\n I'm going to crush you, you dirty thief!$"

EverGrandeCity_PhoebesRoom_Text_EugeniaDefeat::
# 453 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string ">.>\n Hmph!$"

EverGrandeCity_PhoebesRoom_Text_EugeniaPostBattleSpeech::
# 458 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Get out of my sight!\n Hmph!$"

EverGrandeCity_PhoebesRoom_Text_LinaNo::
# 463 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Hmph. Oh well.\p Let's get this over with so I\n can get back to my book.$"
