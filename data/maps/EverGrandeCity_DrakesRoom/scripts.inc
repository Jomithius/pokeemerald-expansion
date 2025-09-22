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
	call Common_EventScript_OutOfCenterPartyHeal
# 72 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 73 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 74 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	release
# 75 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 76 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 77 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_Text_IntroSpeech:
# 78 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Oh. Yes, hello.\n"
# 79 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "I'm DAVE of the ELITE FOUR.\p"
# 80 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Do me a favor and lose to me, okay?\n"
# 81 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Thank.$"
# 82 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 83 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_Text_Defeat:
# 84 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "I swear to God, dude…$"
# 85 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 86 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_Text_PostBattleSpeech:
# 87 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Oh well.\n"
# 88 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "The CHAMPION's waiting up ahead.$"

EverGrandeCity_DrakesRoom_EventScript_Dave::
# 93 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 94 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_DaveIntro, MSGBOX_DEFAULT
# 95 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_DRAKE, EverGrandeCity_DrakesRoom_Text_Defeat
# 96 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto EverGrandeCity_DrakesRoom_EventScript_Defeated
	end


EverGrandeCity_DrakesRoom_EventScript_Banette::
# 108 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	lock
# 109 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	faceplayer
# 110 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playmoncry SPECIES_BANETTE, CRY_MODE_ENCOUNTER
# 111 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 24
# 112 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 113 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmovement VAR_LAST_TALKED
# 114 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	release
	end


EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle::
# 119 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 120 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_FANTASIA, EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_2
# 128 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_1, MSGBOX_YESNO
EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_1:
# 132 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 133 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto_if_eq VAR_RESULT, YES, EverGrandeCity_EventScript_DaveSendsPlayerBackToTheBeginning
# 134 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_2, MSGBOX_AUTOCLOSE
# 141 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 142 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	clearflag FLAG_TEMP_E
# 143 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 144 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call EliteFour_EventScript_PlayerGetsInPosition
# 145 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playfirstmoncry
# 146 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmoncry
# 147 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playmoncry SPECIES_BANETTE, CRY_MODE_ENCOUNTER
# 148 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmoncry
# 149 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_3, MSGBOX_AUTOCLOSE
# 151 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 152 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_DRAKE
# 153 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_DEFEATED_DAVE
# 154 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playbgm MUS_NONE, TRUE
# 155 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_DAVE, EverGrandeCity_DrakesRoom_Text_DaveCrashOut
# 156 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 157 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmovement 0
# 158 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	callnative RemoveFollowingPokemon
# 159 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_TEMP_E
# 160 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 161 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special HealPlayerParty
# 162 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	callnative UpdateFollowingPokemon
# 163 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_4, MSGBOX_AUTOCLOSE
# 166 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 167 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_RESULT, 3
# 168 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playse SE_ORB
# 169 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special DoOrbEffect
# 170 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 150
# 171 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitstate
# 172 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special FadeOutOrbEffect
# 173 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitstate
# 175 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call EverGrandeCity_DrakesRoom_Shake
# 176 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setrespawn HEAL_LOCATION_VOID
# 177 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	warpwhitefade MAP_VOID, 9, 32
# 178 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitstate
# 179 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	release
	end

EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_2:
# 121 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_0, MSGBOX_YESNO
	goto EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_1


EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle2::
# 184 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	lock
# 185 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 186 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_2, MSGBOX_AUTOCLOSE
# 193 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 194 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	clearflag FLAG_TEMP_E
# 195 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 196 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call EliteFour_EventScript_PlayerGetsInPosition
# 197 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playfirstmoncry
# 198 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmoncry
# 199 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playmoncry SPECIES_BANETTE, CRY_MODE_ENCOUNTER
# 200 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmoncry
# 201 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_3, MSGBOX_AUTOCLOSE
# 203 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 204 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_DRAKE
# 205 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_DEFEATED_DAVE
# 206 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playbgm MUS_NONE, TRUE
# 207 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_DAVE, EverGrandeCity_DrakesRoom_Text_DaveCrashOut
# 208 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 209 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmovement 0
# 210 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	callnative RemoveFollowingPokemon
# 211 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_TEMP_E
# 212 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 213 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special HealPlayerParty
# 214 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	callnative UpdateFollowingPokemon
# 215 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_4, MSGBOX_AUTOCLOSE
# 218 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 219 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_RESULT, 3
# 220 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playse SE_ORB
# 221 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special DoOrbEffect
# 222 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 150
# 223 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitstate
# 224 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special FadeOutOrbEffect
# 225 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitstate
# 227 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call EverGrandeCity_DrakesRoom_Shake
# 228 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setrespawn HEAL_LOCATION_VOID
# 229 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	warpwhitefade MAP_VOID, 9, 32
# 230 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitstate
# 231 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	release
	end


EverGrandeCity_EventScript_DaveSendsPlayerBackToTheBeginning::
# 236 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playbgm MUS_NONE, FALSE
# 237 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_EventScript_DaveSendsPlayerBackToTheBeginning_Text_0, MSGBOX_YESNO
# 241 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 242 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle2
# 243 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_EventScript_DaveSendsPlayerBackToTheBeginning_Text_1, MSGBOX_DEFAULT
# 249 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 250 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call_if_eq VAR_LINA_TALKED_TO, 3, EverGrandeCity_EventScript_ResetEugeniaBattle
# 251 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call EverGrandeCity_HallOfFame_EventScript_ResetEliteFour
# 252 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto EventScript_FieldWhiteOut
# 253 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	release
	end


EverGrandeCity_EventScript_ResetEugeniaBattle::
# 258 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_LINA_TALKED_TO, 2
	return


EverGrandeCity_DrakesRoom_Shake::
# 263 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 30
# 264 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_0x8004, 2
# 265 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_0x8005, 6
# 266 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_0x8006, 8
# 267 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_0x8007, 4
# 268 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special ShakeCamera
# 269 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitstate
# 270 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 60
# 271 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special ShakeCamera
# 272 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitstate
# 273 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 60
# 274 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 275 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	fadescreen FADE_TO_WHITE
# 276 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 277 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 20
# 278 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 279 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	fadescreen FADE_TO_WHITE
# 280 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 281 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 10
# 282 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitse
# 283 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playse SE_INTRO_BLAST
# 284 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 20
	return


EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_0:
# 121 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Oh, look who it is.\p Are you going to keep your promise\n to me this time?\p Remember, you said you would lose\n to me if we ever battled.$"

EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_1:
# 128 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Oh, look who it is.\p Are you going to do me a favor\n and lose to me this time?$"

EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_2:
# 134 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "…\p You know, I also heard about what\n you did to that BIKER gang.\p Just so you know… my brother was one\n of the people you helped lock up.\p …\n I have nothing else to say to you.$"

EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_3:
# 149 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "I'm going to do everything I can\n to make sure you lose, okay?$"

EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_4:
# 163 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Well, you won again. Congrats.\n Here's your prize.\p {COLOR BLUE}{SHADOW LIGHT_BLUE}DAVE starts casting a spell!$"

EverGrandeCity_EventScript_DaveSendsPlayerBackToTheBeginning_Text_0:
# 237 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Oh, wow.\n Uh…\p Really?\n Are you sure?$"

EverGrandeCity_EventScript_DaveSendsPlayerBackToTheBeginning_Text_1:
# 243 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Wow.\n I… didn't expect that.\p Well, um… okay.\n Thanks.\p Here, I'll help you out then.\n I hope you saved.$"

EverGrandeCity_DrakesRoom_Text_DaveIntro::
# 100 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Oh, yes. Hello, {PLAYER}.\n Good job on making it this far.\p Once again, I'm DAVE of the ELITE FOUR.\n Keep your promise and lose to me, okay?$"

EverGrandeCity_DrakesRoom_Text_DaveCrashOut::
# 288 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "I swear to God…\n Fuck you, dude.$"
