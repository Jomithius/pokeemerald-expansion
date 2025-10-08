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
# 140 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 141 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	clearflag FLAG_TEMP_E
# 142 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 143 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call EliteFour_EventScript_PlayerGetsInPosition
# 144 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playfirstmoncry
# 145 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmoncry
# 146 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playmoncry SPECIES_BANETTE, CRY_MODE_ENCOUNTER
# 147 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmoncry
# 148 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_3, MSGBOX_AUTOCLOSE
# 150 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 151 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_DRAKE
# 152 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_DEFEATED_DAVE
# 153 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playbgm MUS_NONE, TRUE
# 154 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_DAVE, EverGrandeCity_DrakesRoom_Text_DaveCrashOut
# 155 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 156 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmovement 0
# 157 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	callnative RemoveFollowingPokemon
# 158 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_TEMP_E
# 159 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 160 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special HealPlayerParty
# 161 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	callnative UpdateFollowingPokemon
# 162 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_4, MSGBOX_AUTOCLOSE
# 165 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 166 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_RESULT, 3
# 167 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playse SE_ORB
# 168 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special DoOrbEffect
# 169 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 150
# 170 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitstate
# 171 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special FadeOutOrbEffect
# 172 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitstate
# 174 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call EverGrandeCity_DrakesRoom_Shake
# 175 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setrespawn HEAL_LOCATION_VOID
# 176 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	warpwhitefade MAP_VOID, 9, 32
# 177 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitstate
# 178 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	release
	end

EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_2:
# 121 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_0, MSGBOX_YESNO
	goto EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_1


EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle2::
# 183 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	lock
# 184 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 185 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_2, MSGBOX_AUTOCLOSE
# 191 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 192 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	clearflag FLAG_TEMP_E
# 193 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 194 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call EliteFour_EventScript_PlayerGetsInPosition
# 195 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playfirstmoncry
# 196 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmoncry
# 197 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playmoncry SPECIES_BANETTE, CRY_MODE_ENCOUNTER
# 198 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmoncry
# 199 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_3, MSGBOX_AUTOCLOSE
# 201 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 202 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_DRAKE
# 203 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_DEFEATED_DAVE
# 204 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playbgm MUS_NONE, TRUE
# 205 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_DAVE, EverGrandeCity_DrakesRoom_Text_DaveCrashOut
# 206 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 207 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmovement 0
# 208 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	callnative RemoveFollowingPokemon
# 209 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_TEMP_E
# 210 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 211 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special HealPlayerParty
# 212 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	callnative UpdateFollowingPokemon
# 213 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_4, MSGBOX_AUTOCLOSE
# 216 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 217 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_RESULT, 3
# 218 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playse SE_ORB
# 219 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special DoOrbEffect
# 220 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 150
# 221 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitstate
# 222 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special FadeOutOrbEffect
# 223 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitstate
# 225 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call EverGrandeCity_DrakesRoom_Shake
# 226 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setrespawn HEAL_LOCATION_VOID
# 227 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	warpwhitefade MAP_VOID, 9, 32
# 228 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitstate
# 229 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	release
	end


EverGrandeCity_EventScript_DaveSendsPlayerBackToTheBeginning::
# 234 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playbgm MUS_NONE, FALSE
# 235 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_EventScript_DaveSendsPlayerBackToTheBeginning_Text_0, MSGBOX_YESNO
# 239 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 240 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle2
# 241 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_EventScript_DaveSendsPlayerBackToTheBeginning_Text_1, MSGBOX_DEFAULT
# 247 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitmessage
# 248 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call_if_eq VAR_LINA_TALKED_TO, 3, EverGrandeCity_EventScript_ResetEugeniaBattle
# 249 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call EverGrandeCity_HallOfFame_EventScript_ResetEliteFour
# 250 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto EventScript_FieldWhiteOut
# 251 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	release
	end


EverGrandeCity_EventScript_ResetEugeniaBattle::
# 256 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_LINA_TALKED_TO, 2
	return


EverGrandeCity_DrakesRoom_Shake::
# 261 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 30
# 262 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_0x8004, 2
# 263 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_0x8005, 6
# 264 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_0x8006, 8
# 265 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_0x8007, 4
# 266 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special ShakeCamera
# 267 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitstate
# 268 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 60
# 269 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special ShakeCamera
# 270 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitstate
# 271 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 60
# 272 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 273 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	fadescreen FADE_TO_WHITE
# 274 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 275 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 20
# 276 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 277 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	fadescreen FADE_TO_WHITE
# 278 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 279 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	delay 10
# 280 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	waitse
# 281 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playse SE_INTRO_BLAST
# 282 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
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
	.string "…\p You know, I also heard about what\n you did to that BIKER gang.\p Just so you know… my brother was one\n of the people you helped lock up.\p …$"

EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_3:
# 148 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "I'm going to do everything I can\n to make sure you lose, okay?$"

EverGrandeCity_DrakesRoom_EventScript_DaveFinalBattle_Text_4:
# 162 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Well, you won again. Congrats!\n Here's your prize.\p {COLOR BLUE}{SHADOW LIGHT_BLUE}DAVE starts casting a spell!$"

EverGrandeCity_EventScript_DaveSendsPlayerBackToTheBeginning_Text_0:
# 235 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Oh, wow.\n Uh…\p Really?\n Are you sure?$"

EverGrandeCity_EventScript_DaveSendsPlayerBackToTheBeginning_Text_1:
# 241 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Wow.\n I… didn't expect that.\p Well, um… okay.\n Thanks.\p Here, I'll help you out then.\n I hope you saved.$"

EverGrandeCity_DrakesRoom_Text_DaveIntro::
# 100 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Oh, yes. Hello, {PLAYER}.\n Good job on making it this far.\p Once again, I'm DAVE of the ELITE FOUR.\n Keep your promise and lose to me, okay?$"

EverGrandeCity_DrakesRoom_Text_DaveCrashOut::
# 286 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "I swear to God…\n Fuck you, dude.$"
