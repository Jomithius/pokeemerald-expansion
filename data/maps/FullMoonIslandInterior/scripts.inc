FullMoonIslandInterior_MapScripts::
# 3 "data/maps/FullMoonIslandInterior/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FullMoonIslandInterior_TryRemoveCresselia
# 2 "data/maps/FullMoonIslandInterior/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FullMoonIslandInterior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FullMoonIslandInterior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 2 "data/maps/FullMoonIslandInterior/scripts.pory"
	map_script_2 VAR_RAT_CAVE_STATE, 10, FullMoonIslandInterior_EventScript_RatduardoBattle
	.2byte 0


FullMoonIslandInterior_TryRemoveCresselia::
# 7 "data/maps/FullMoonIslandInterior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 8 "data/maps/FullMoonIslandInterior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Common_EventScript_NopReturn
# 9 "data/maps/FullMoonIslandInterior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_NopReturn
# 10 "data/maps/FullMoonIslandInterior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, Common_EventScript_NopReturn
# 11 "data/maps/FullMoonIslandInterior/scripts.pory"
	call_if_set FLAG_TEMP_5, FullMoonIslandInterior_RemoveRatduardoPokemon
# 12 "data/maps/FullMoonIslandInterior/scripts.pory"
	removeobject VAR_LAST_TALKED
	end


FullMoonIslandInterior_RemoveRatduardoPokemon::
# 17 "data/maps/FullMoonIslandInterior/scripts.pory"
	removeobject 3
# 18 "data/maps/FullMoonIslandInterior/scripts.pory"
	removeobject 4
	return


FullMoonIslandInterior_EventScript_RatduardoBattle::
# 23 "data/maps/FullMoonIslandInterior/scripts.pory"
	lockall
# 24 "data/maps/FullMoonIslandInterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp6
# 25 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitmovement 0
# 26 "data/maps/FullMoonIslandInterior/scripts.pory"
	delay 30
# 27 "data/maps/FullMoonIslandInterior/scripts.pory"
	playse SE_PIN
# 28 "data/maps/FullMoonIslandInterior/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 29 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitmovement 2
# 30 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitse
# 31 "data/maps/FullMoonIslandInterior/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 32 "data/maps/FullMoonIslandInterior/scripts.pory"
	delay 8
# 33 "data/maps/FullMoonIslandInterior/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 34 "data/maps/FullMoonIslandInterior/scripts.pory"
	delay 8
# 35 "data/maps/FullMoonIslandInterior/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 36 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitmovement 4
# 37 "data/maps/FullMoonIslandInterior/scripts.pory"
	playbgm MUS_OLD_CHATEAU, FALSE
# 38 "data/maps/FullMoonIslandInterior/scripts.pory"
	msgbox FullMoonIslandInterior_Text_Ratduardo, MSGBOX_AUTOCLOSE
# 39 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitmessage
# 40 "data/maps/FullMoonIslandInterior/scripts.pory"
	setflag FLAG_TEMP_5
# 41 "data/maps/FullMoonIslandInterior/scripts.pory"
	trainerbattle_no_intro TRAINER_RATDUARDO_FULLMOON_ISLAND, FullMoonIslandInterior_Text_RatduardoDefeat
# 42 "data/maps/FullMoonIslandInterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 43 "data/maps/FullMoonIslandInterior/scripts.pory"
	removeobject 2
# 44 "data/maps/FullMoonIslandInterior/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 45 "data/maps/FullMoonIslandInterior/scripts.pory"
	applymovement 1, Common_Movement_WalkDown2
# 46 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitmovement 1
# 47 "data/maps/FullMoonIslandInterior/scripts.pory"
	msgbox FullMoonIslandInterior_Text_CresseliaMyThanks, MSGBOX_YESNO
# 48 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitmessage
# 49 "data/maps/FullMoonIslandInterior/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FullMoonIslandInterior_EventScript_CresseliaJoinsParty
# 50 "data/maps/FullMoonIslandInterior/scripts.pory"
	msgbox FullMoonIslandInterior_Text_CresseliaIfYouChangeYourMind, MSGBOX_AUTOCLOSE
# 51 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitmessage
# 52 "data/maps/FullMoonIslandInterior/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 11
# 53 "data/maps/FullMoonIslandInterior/scripts.pory"
	release
	end


FullMoonIslandInterior_EventScript_CresseliaJoinsParty::
# 58 "data/maps/FullMoonIslandInterior/scripts.pory"
	msgbox FullMoonIslandInterior_EventScript_CresseliaJoinsParty_Text_0, MSGBOX_AUTOCLOSE
# 60 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitmessage
# 61 "data/maps/FullMoonIslandInterior/scripts.pory"
	givemon SPECIES_CRESSELIA, 75
# 62 "data/maps/FullMoonIslandInterior/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq FullMoonIslandInterior_EventScript_CresseliaJoinsParty_2
# 73 "data/maps/FullMoonIslandInterior/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq FullMoonIslandInterior_EventScript_CresseliaJoinsParty_3
# 85 "data/maps/FullMoonIslandInterior/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
FullMoonIslandInterior_EventScript_CresseliaJoinsParty_1:
# 87 "data/maps/FullMoonIslandInterior/scripts.pory"
	release
	end

FullMoonIslandInterior_EventScript_CresseliaJoinsParty_2:
# 63 "data/maps/FullMoonIslandInterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 64 "data/maps/FullMoonIslandInterior/scripts.pory"
	removeobject 1
# 65 "data/maps/FullMoonIslandInterior/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 66 "data/maps/FullMoonIslandInterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 67 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitfanfare
# 68 "data/maps/FullMoonIslandInterior/scripts.pory"
	msgbox FullMoonIslandInterior_EventScript_CresseliaJoinsParty_Text_1, MSGBOX_AUTOCLOSE
# 69 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitmessage
# 70 "data/maps/FullMoonIslandInterior/scripts.pory"
	setflag FLAG_DEFEATED_CRESSELIA
# 71 "data/maps/FullMoonIslandInterior/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 12
	goto FullMoonIslandInterior_EventScript_CresseliaJoinsParty_1

FullMoonIslandInterior_EventScript_CresseliaJoinsParty_3:
# 74 "data/maps/FullMoonIslandInterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 75 "data/maps/FullMoonIslandInterior/scripts.pory"
	removeobject 1
# 76 "data/maps/FullMoonIslandInterior/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 77 "data/maps/FullMoonIslandInterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 78 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitfanfare
# 79 "data/maps/FullMoonIslandInterior/scripts.pory"
	msgbox FullMoonIslandInterior_EventScript_CresseliaJoinsParty_Text_2, MSGBOX_AUTOCLOSE
# 80 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitmessage
# 81 "data/maps/FullMoonIslandInterior/scripts.pory"
	setflag FLAG_DEFEATED_CRESSELIA
# 82 "data/maps/FullMoonIslandInterior/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 12
	goto FullMoonIslandInterior_EventScript_CresseliaJoinsParty_1


FullMoonIslandInterior_EventScript_CresseliaChangeMind::
# 92 "data/maps/FullMoonIslandInterior/scripts.pory"
	lock
# 93 "data/maps/FullMoonIslandInterior/scripts.pory"
	msgbox FullMoonIslandInterior_EventScript_CresseliaChangeMind_Text_0, MSGBOX_YESNO
# 95 "data/maps/FullMoonIslandInterior/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FullMoonIslandInterior_EventScript_CresseliaJoinsParty
# 96 "data/maps/FullMoonIslandInterior/scripts.pory"
	msgbox FullMoonIslandInterior_Text_CresseliaIfYouChangeYourMind, MSGBOX_AUTOCLOSE
# 97 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitmessage
# 98 "data/maps/FullMoonIslandInterior/scripts.pory"
	release
	end


FullMoonIslandInterior_EventScript_Cresselia::
# 103 "data/maps/FullMoonIslandInterior/scripts.pory"
	lock
# 104 "data/maps/FullMoonIslandInterior/scripts.pory"
	faceplayer
# 105 "data/maps/FullMoonIslandInterior/scripts.pory"
	goto_if_eq VAR_RAT_CAVE_STATE, 11, FullMoonIslandInterior_EventScript_CresseliaChangeMind
# 106 "data/maps/FullMoonIslandInterior/scripts.pory"
	playmoncry SPECIES_CRESSELIA, CRY_MODE_ENCOUNTER
# 107 "data/maps/FullMoonIslandInterior/scripts.pory"
	delay 40
# 108 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitmoncry
# 109 "data/maps/FullMoonIslandInterior/scripts.pory"
	setwildbattle SPECIES_CRESSELIA, 75
# 110 "data/maps/FullMoonIslandInterior/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 111 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitstate
# 112 "data/maps/FullMoonIslandInterior/scripts.pory"
	release
	end


FullMoonIslandInterior_EventScript_CresseliaJoinsParty_Text_0:
# 58 "data/maps/FullMoonIslandInterior/scripts.pory"
	.string "Thank you, {PLAYER}.\n I'll be in your care.$"

FullMoonIslandInterior_EventScript_CresseliaJoinsParty_Text_1:
# 68 "data/maps/FullMoonIslandInterior/scripts.pory"
	.string "CRESSELIA joined the party!$"

FullMoonIslandInterior_EventScript_CresseliaJoinsParty_Text_2:
# 79 "data/maps/FullMoonIslandInterior/scripts.pory"
	.string "CRESSELIA was sent to the PC!$"

FullMoonIslandInterior_EventScript_CresseliaChangeMind_Text_0:
# 93 "data/maps/FullMoonIslandInterior/scripts.pory"
	.string "{PLAYER}.\n Have you reconsidered my offer?$"

FullMoonIslandInterior_Text_Ratduardo::
# 116 "data/maps/FullMoonIslandInterior/scripts.pory"
	.string "… Again… You…\n Always… in my way…\p No more…!$"

FullMoonIslandInterior_Text_RatduardoDefeat::
# 121 "data/maps/FullMoonIslandInterior/scripts.pory"
	.string "…\n There's no escape for me…$"

FullMoonIslandInterior_Text_CresseliaMyThanks::
# 126 "data/maps/FullMoonIslandInterior/scripts.pory"
	.string "Thank you for coming to my aid.\n You have a very pure heart.\l May I ask for your name?\p … … … …\p I see. {PLAYER},\n I really cannot thank you enough.\p It would be an honor to join a\n TRAINER like you on your journey.$"

FullMoonIslandInterior_Text_CresseliaIfYouChangeYourMind::
# 137 "data/maps/FullMoonIslandInterior/scripts.pory"
	.string "I see.\n I'll be here if you ever change your mind.$"
