# 1 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_MapScripts::
# 2 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_DrakesRoom_OnFrame
# 3 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_DrakesRoom_OnLoad
# 4 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_SidneysRoom_OnWarp
# 5 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, EverGrandeCity_DrakesRoom_OnResume
# 6 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_Hall_OnTransition
# 7 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.byte 0
# 8 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 9 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
@ Unused, Drake uses Sidneys identical OnWarp for some reason
# 10 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_OnWarp:
# 11 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_DrakesRoom_EventScript_PlayerTurnNorth
# 12 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.2byte 0
# 13 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 14 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_PlayerTurnNorth::
# 15 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 16 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 17 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 18 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_OnFrame:
# 19 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script_2 VAR_ELITE_4_STATE, 3, EverGrandeCity_DrakesRoom_EventScript_WalkInCloseDoor
# 20 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.2byte 0
# 21 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 22 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_WalkInCloseDoor::
# 23 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	lockall
# 24 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 25 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_ELITE_4_STATE, 4
# 26 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	releaseall
# 27 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 28 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 29 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_OnLoad:
# 30 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_ELITE_4_DRAKE, EverGrandeCity_DrakesRoom_EventScript_ResetAdvanceToNextRoom
# 31 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call_if_eq VAR_ELITE_4_STATE, 4, EverGrandeCity_DrakesRoom_EventScript_CloseDoor
# 32 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 33 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 34 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_ResetAdvanceToNextRoom::
# 35 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
# 36 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	return
# 37 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 38 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_CloseDoor::
# 39 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
# 40 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	return
# 41 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 42 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_OnResume:
# 43 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
    call_if_set FLAG_DEFEATED_DAVE, EverGrandeCity_DrakesRoom_PrepForWarp
# 44 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
    end
# 45 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 46 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_PrepForWarp:
# 47 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	removeobject 2
# 48 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	return
# 49 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 50 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_Drake::
# 51 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	lock
# 52 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	faceplayer
# 53 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto_if_set FLAG_SYS_FINAL_REMATCH, EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle
# 54 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_DRAKE, EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech
# 55 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
    goto_if_set FLAG_RECEIVED_FANTASIA, EverGrandeCity_DrakesRoom_EventScript_Dave
# 56 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 57 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 58 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_DRAKE, EverGrandeCity_DrakesRoom_Text_Defeat
# 59 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto EverGrandeCity_DrakesRoom_EventScript_Defeated
# 60 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 61 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 62 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech::
# 63 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 64 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	release
# 65 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 66 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 67 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_Defeated::
# 68 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_0x8004, FANCOUNTER_DEFEATED_DRAKE
# 69 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special Script_TryGainNewFanFromCounter
# 70 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_DRAKE
# 71 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 72 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 73 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	release
# 74 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 75 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 76 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_Text_IntroSpeech:
# 77 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Oh, hello.\n"
# 78 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "I'm DAVE of the ELITE FOUR.\p"
# 79 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Do me a favor and lose to me, okay?\n"
# 80 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Thank.$"
# 81 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 82 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_Text_Defeat:
# 83 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "I swear to God, dude…$"
# 84 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 85 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_Text_PostBattleSpeech:
# 86 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Oh, well.\n"
# 87 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "The CHAMPION's waiting up ahead.$"

EverGrandeCity_DrakesRoom_EventScript_Dave::
# 92 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 93 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_DaveIntro, MSGBOX_DEFAULT
# 94 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_DRAKE, EverGrandeCity_DrakesRoom_Text_Defeat
# 95 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto EverGrandeCity_DrakesRoom_EventScript_Defeated
	end


EverGrandeCity_DrakesRoom_EventScript_Banette::
# 107 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	lock
# 108 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	faceplayer
# 109 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playmoncry SPECIES_BANETTE, CRY_MODE_ENCOUNTER
# 110 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 24
# 111 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 112 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmovement VAR_LAST_TALKED
# 113 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	release
	end


EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle::
# 118 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 119 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_FANTASIA, EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_2
# 127 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_1, MSGBOX_YESNO
EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_1:
# 131 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 132 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto_if_eq VAR_RESULT, YES, EverGrandeCity_EventScript_DaveSendsPlayerBackToTheBeginning
# 133 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_2, MSGBOX_AUTOCLOSE
# 138 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 139 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	clearflag FLAG_TEMP_E
# 140 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 141 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call EliteFour_EventScript_PlayerGetsInPosition
# 142 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playfirstmoncry
# 143 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmoncry
# 144 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playmoncry SPECIES_BANETTE, CRY_MODE_ENCOUNTER
# 145 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmoncry
# 146 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_3, MSGBOX_AUTOCLOSE
# 148 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 149 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_DRAKE
# 150 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_DEFEATED_DAVE
# 151 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playbgm MUS_NONE, TRUE
# 152 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_DAVE, EverGrandeCity_DrakesRoom_Text_DaveCrashOut
# 153 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 154 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmovement 0
# 155 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	callnative RemoveFollowingPokemon
# 156 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_TEMP_E
# 157 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 158 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_4, MSGBOX_AUTOCLOSE
# 161 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 162 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_RESULT, 3
# 163 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playse SE_ORB
# 164 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special DoOrbEffect
# 165 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 150
# 166 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitstate
# 167 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special FadeOutOrbEffect
# 168 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitstate
# 169 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 150
# 170 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call EverGrandeCity_DrakesRoom_Shake
# 171 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setrespawn HEAL_LOCATION_VOID
# 172 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	warpwhitefade MAP_VOID, 9, 32
# 173 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitstate
# 174 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	release
	end

EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_2:
# 120 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_0, MSGBOX_YESNO
	goto EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_1


EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle2::
# 179 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	lock
# 180 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 181 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_2, MSGBOX_AUTOCLOSE
# 186 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 187 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	clearflag FLAG_TEMP_E
# 188 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 189 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call EliteFour_EventScript_PlayerGetsInPosition
# 190 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playfirstmoncry
# 191 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmoncry
# 192 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playmoncry SPECIES_BANETTE, CRY_MODE_ENCOUNTER
# 193 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmoncry
# 194 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_3, MSGBOX_AUTOCLOSE
# 196 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 197 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_DRAKE
# 198 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_DEFEATED_DAVE
# 199 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playbgm MUS_NONE, TRUE
# 200 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_DAVE, EverGrandeCity_DrakesRoom_Text_DaveCrashOut
# 201 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 202 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmovement 0
# 203 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	callnative RemoveFollowingPokemon
# 204 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_TEMP_E
# 205 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 206 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle2_Text_0, MSGBOX_AUTOCLOSE
# 209 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 210 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_RESULT, 3
# 211 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playse SE_ORB
# 212 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special DoOrbEffect
# 213 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 150
# 214 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitstate
# 215 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special FadeOutOrbEffect
# 216 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitstate
# 217 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 150
# 218 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call EverGrandeCity_DrakesRoom_Shake
# 219 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setrespawn HEAL_LOCATION_VOID
# 220 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	warpwhitefade MAP_VOID, 9, 32
# 221 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitstate
# 222 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	release
	end


EverGrandeCity_EventScript_DaveSendsPlayerBackToTheBeginning::
# 227 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playbgm MUS_NONE, FALSE
# 228 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_EventScript_DaveSendsPlayerBackToTheBeginning_Text_0, MSGBOX_YESNO
# 232 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 233 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle2
# 234 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_EventScript_DaveSendsPlayerBackToTheBeginning_Text_1, MSGBOX_DEFAULT
# 240 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 241 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call_if_eq VAR_LINA_TALKED_TO, 3, EverGrandeCity_EventScript_ResetEugeniaBattle
# 242 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call EverGrandeCity_HallOfFame_EventScript_ResetEliteFour
# 243 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto EventScript_FieldWhiteOut
# 244 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	release
	end


EverGrandeCity_EventScript_ResetEugeniaBattle::
# 249 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_LINA_TALKED_TO, 2
	return


EverGrandeCity_DrakesRoom_Shake::
# 254 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 30
# 255 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_0x8004, 2
# 256 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_0x8005, 6
# 257 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_0x8006, 8
# 258 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_0x8007, 4
# 259 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special ShakeCamera
# 260 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitstate
# 261 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 60
# 262 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special ShakeCamera
# 263 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitstate
# 264 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 60
# 265 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 266 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	fadescreen FADE_TO_WHITE
# 267 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 268 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 20
# 269 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 270 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	fadescreen FADE_TO_WHITE
# 271 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 272 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 10
# 273 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitse
# 274 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playse SE_INTRO_BLAST
# 275 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 20
	return


EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_0:
# 120 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Oh, look who it is.\n Are you going to keep your promise\l to me this time?\p Remember, you said you would lose\n to me if we ever battled.$"

EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_1:
# 127 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Oh, look who it is.\n Are you going to do me a favor\l and lose to me this time?$"

EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_2:
# 133 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "…\p You know, I also heard about what\n you did to that BIKER gang.\p Just so you know… my brother was one\n of the people you helped lock up.$"

EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_3:
# 146 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "I'm going to do everything I can\n to stop you here.$"

EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_4:
# 158 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Bitch.\n I'm really glad I get to do this.\p {COLOR BLUE}{SHADOW LIGHT_BLUE}DAVE starts casting a spell!$"

EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle2_Text_0:
# 206 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Well, you won again. Congrats.\n Here's your prize.\p {COLOR BLUE}{SHADOW LIGHT_BLUE}DAVE starts casting a spell!$"

EverGrandeCity_EventScript_DaveSendsPlayerBackToTheBeginning_Text_0:
# 228 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Oh, wow.\n Uh…\p Really?\n Are you sure?$"

EverGrandeCity_EventScript_DaveSendsPlayerBackToTheBeginning_Text_1:
# 234 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Wow.\n I… didn't expect that.\p Well, um… okay.\n Thanks.\p Here, I'll help you out then.\n I hope you saved.$"

EverGrandeCity_DrakesRoom_Text_DaveIntro::
# 99 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Oh, yes. Hello, {PLAYER}.\n Good job on making it this far.\p Once again, I'm DAVE of the ELITE FOUR.\n Keep your promise and lose to me, okay?$"

EverGrandeCity_DrakesRoom_Text_DaveCrashOut::
# 279 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "I swear to God…\n Fuck you, dude.$"
