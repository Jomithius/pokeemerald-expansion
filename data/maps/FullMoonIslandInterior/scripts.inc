FullMoonIslandInterior_MapScripts::
# 5 "data/maps/FullMoonIslandInterior/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FullMoonIslandInterior_TryRemoveCresselia
# 6 "data/maps/FullMoonIslandInterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FullMoonIsland_OnTransition
# 4 "data/maps/FullMoonIslandInterior/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FullMoonIslandInterior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FullMoonIslandInterior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/FullMoonIslandInterior/scripts.pory"
	map_script_2 VAR_RAT_CAVE_STATE, 10, FullMoonIslandInterior_EventScript_RatduardoBattle
	.2byte 0


FullMoonIsland_OnTransition::
# 10 "data/maps/FullMoonIslandInterior/scripts.pory"
	call_if_defeated TRAINER_RATDUARDO_FULLMOON_ISLAND, FullMoonIslandInterior_RemoveRatduardoPokemon
	end


FullMoonIslandInterior_TryRemoveCresselia::
# 15 "data/maps/FullMoonIslandInterior/scripts.pory"
	call_if_defeated TRAINER_RATDUARDO_FULLMOON_ISLAND, FullMoonIslandInterior_RemoveRatduardoPokemon
# 16 "data/maps/FullMoonIslandInterior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 17 "data/maps/FullMoonIslandInterior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Common_EventScript_NopReturn
# 18 "data/maps/FullMoonIslandInterior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_NopReturn
# 19 "data/maps/FullMoonIslandInterior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, Common_EventScript_NopReturn
# 20 "data/maps/FullMoonIslandInterior/scripts.pory"
	compare VAR_LAST_TALKED, 1
	goto_if_eq FullMoonIslandInterior_TryRemoveCresselia_2
FullMoonIslandInterior_TryRemoveCresselia_1:
	end

FullMoonIslandInterior_TryRemoveCresselia_2:
# 21 "data/maps/FullMoonIslandInterior/scripts.pory"
	removeobject 1
	goto FullMoonIslandInterior_TryRemoveCresselia_1


FullMoonIslandInterior_RemoveRatduardoPokemon::
# 27 "data/maps/FullMoonIslandInterior/scripts.pory"
	removeobject 3
# 28 "data/maps/FullMoonIslandInterior/scripts.pory"
	removeobject 4
	return


FullMoonIslandInterior_EventScript_RatduardoBattle::
# 33 "data/maps/FullMoonIslandInterior/scripts.pory"
	lockall
# 34 "data/maps/FullMoonIslandInterior/scripts.pory"
	checkobjectat 8, 17
# 35 "data/maps/FullMoonIslandInterior/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FullMoonIslandInterior_EventScript_RatduardoBattle_2
# 39 "data/maps/FullMoonIslandInterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp6
FullMoonIslandInterior_EventScript_RatduardoBattle_1:
# 41 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitmovement 0
# 42 "data/maps/FullMoonIslandInterior/scripts.pory"
	delay 30
# 43 "data/maps/FullMoonIslandInterior/scripts.pory"
	playse SE_PIN
# 44 "data/maps/FullMoonIslandInterior/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 45 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitmovement 2
# 46 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitse
# 47 "data/maps/FullMoonIslandInterior/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 48 "data/maps/FullMoonIslandInterior/scripts.pory"
	delay 8
# 49 "data/maps/FullMoonIslandInterior/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 50 "data/maps/FullMoonIslandInterior/scripts.pory"
	delay 8
# 51 "data/maps/FullMoonIslandInterior/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 52 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitmovement 4
# 53 "data/maps/FullMoonIslandInterior/scripts.pory"
	playbgm MUS_OLD_CHATEAU, FALSE
# 54 "data/maps/FullMoonIslandInterior/scripts.pory"
	msgbox FullMoonIslandInterior_Text_Ratduardo, MSGBOX_AUTOCLOSE
# 55 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitmessage
# 56 "data/maps/FullMoonIslandInterior/scripts.pory"
	setflag FLAG_SYS_BOSS_BATTLE
# 57 "data/maps/FullMoonIslandInterior/scripts.pory"
	trainerbattle_no_intro TRAINER_RATDUARDO_FULLMOON_ISLAND, FullMoonIslandInterior_Text_RatduardoDefeat
# 58 "data/maps/FullMoonIslandInterior/scripts.pory"
	clearflag FLAG_SYS_BOSS_BATTLE
# 59 "data/maps/FullMoonIslandInterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 60 "data/maps/FullMoonIslandInterior/scripts.pory"
	removeobject 2
# 61 "data/maps/FullMoonIslandInterior/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 62 "data/maps/FullMoonIslandInterior/scripts.pory"
	applymovement 1, Common_Movement_WalkDown2
# 63 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitmovement 1
# 64 "data/maps/FullMoonIslandInterior/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 11
# 65 "data/maps/FullMoonIslandInterior/scripts.pory"
	addvar VAR_FINAL_REMATCH_STATE, 1
# 66 "data/maps/FullMoonIslandInterior/scripts.pory"
	setvar VAR_JIMMY_FINAL_REMATCH_CALL_STEP_COUNTER, 0
# 67 "data/maps/FullMoonIslandInterior/scripts.pory"
	msgbox FullMoonIslandInterior_Text_CresseliaMyThanks, MSGBOX_YESNO
# 68 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitmessage
# 69 "data/maps/FullMoonIslandInterior/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FullMoonIslandInterior_EventScript_CresseliaJoinsParty
# 70 "data/maps/FullMoonIslandInterior/scripts.pory"
	msgbox FullMoonIslandInterior_Text_CresseliaIfYouChangeYourMind, MSGBOX_AUTOCLOSE
# 71 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitmessage
# 72 "data/maps/FullMoonIslandInterior/scripts.pory"
	releaseall
	end

FullMoonIslandInterior_EventScript_RatduardoBattle_2:
# 36 "data/maps/FullMoonIslandInterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FullMoonIslandInterior_Movement_PlayerApproachRatduardoRightEntrance
	goto FullMoonIslandInterior_EventScript_RatduardoBattle_1


FullMoonIslandInterior_EventScript_CresseliaJoinsParty::
# 77 "data/maps/FullMoonIslandInterior/scripts.pory"
	msgbox FullMoonIslandInterior_EventScript_CresseliaJoinsParty_Text_0, MSGBOX_AUTOCLOSE
# 79 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitmessage
# 80 "data/maps/FullMoonIslandInterior/scripts.pory"
	givemon SPECIES_CRESSELIA, 75, ITEM_NONE, ITEM_POKE_BALL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 81 "data/maps/FullMoonIslandInterior/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq FullMoonIslandInterior_EventScript_CresseliaJoinsParty_2
# 91 "data/maps/FullMoonIslandInterior/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq FullMoonIslandInterior_EventScript_CresseliaJoinsParty_3
# 102 "data/maps/FullMoonIslandInterior/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
FullMoonIslandInterior_EventScript_CresseliaJoinsParty_1:
# 104 "data/maps/FullMoonIslandInterior/scripts.pory"
	closemessage
# 105 "data/maps/FullMoonIslandInterior/scripts.pory"
	releaseall
	end

FullMoonIslandInterior_EventScript_CresseliaJoinsParty_2:
# 82 "data/maps/FullMoonIslandInterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 83 "data/maps/FullMoonIslandInterior/scripts.pory"
	removeobject 1
# 84 "data/maps/FullMoonIslandInterior/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 85 "data/maps/FullMoonIslandInterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 86 "data/maps/FullMoonIslandInterior/scripts.pory"
	msgbox FullMoonIslandInterior_EventScript_CresseliaJoinsParty_Text_1, MSGBOX_DEFAULT
# 87 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitfanfare
# 88 "data/maps/FullMoonIslandInterior/scripts.pory"
	setflag FLAG_DEFEATED_CRESSELIA
# 89 "data/maps/FullMoonIslandInterior/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 12
	goto FullMoonIslandInterior_EventScript_CresseliaJoinsParty_1

FullMoonIslandInterior_EventScript_CresseliaJoinsParty_3:
# 92 "data/maps/FullMoonIslandInterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 93 "data/maps/FullMoonIslandInterior/scripts.pory"
	removeobject 1
# 94 "data/maps/FullMoonIslandInterior/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 95 "data/maps/FullMoonIslandInterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 96 "data/maps/FullMoonIslandInterior/scripts.pory"
	msgbox FullMoonIslandInterior_EventScript_CresseliaJoinsParty_Text_2, MSGBOX_DEFAULT
# 97 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitfanfare
# 98 "data/maps/FullMoonIslandInterior/scripts.pory"
	setflag FLAG_DEFEATED_CRESSELIA
# 99 "data/maps/FullMoonIslandInterior/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 12
	goto FullMoonIslandInterior_EventScript_CresseliaJoinsParty_1


FullMoonIslandInterior_EventScript_CresseliaChangeMind::
# 109 "data/maps/FullMoonIslandInterior/scripts.pory"
	lock
# 110 "data/maps/FullMoonIslandInterior/scripts.pory"
	msgbox FullMoonIslandInterior_EventScript_CresseliaChangeMind_Text_0, MSGBOX_YESNO
# 112 "data/maps/FullMoonIslandInterior/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FullMoonIslandInterior_EventScript_CresseliaJoinsParty2
# 113 "data/maps/FullMoonIslandInterior/scripts.pory"
	msgbox FullMoonIslandInterior_Text_CresseliaIfYouChangeYourMind, MSGBOX_AUTOCLOSE
# 114 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitmessage
# 115 "data/maps/FullMoonIslandInterior/scripts.pory"
	release
	end


FullMoonIslandInterior_EventScript_CresseliaJoinsParty2::
# 120 "data/maps/FullMoonIslandInterior/scripts.pory"
	msgbox FullMoonIslandInterior_EventScript_CresseliaJoinsParty_Text_0, MSGBOX_AUTOCLOSE
# 122 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitmessage
# 123 "data/maps/FullMoonIslandInterior/scripts.pory"
	givemon SPECIES_CRESSELIA, 75, ITEM_NONE, ITEM_POKE_BALL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 124 "data/maps/FullMoonIslandInterior/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq FullMoonIslandInterior_EventScript_CresseliaJoinsParty2_2
# 134 "data/maps/FullMoonIslandInterior/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq FullMoonIslandInterior_EventScript_CresseliaJoinsParty2_3
# 145 "data/maps/FullMoonIslandInterior/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
FullMoonIslandInterior_EventScript_CresseliaJoinsParty2_1:
# 147 "data/maps/FullMoonIslandInterior/scripts.pory"
	closemessage
# 148 "data/maps/FullMoonIslandInterior/scripts.pory"
	release
	end

FullMoonIslandInterior_EventScript_CresseliaJoinsParty2_2:
# 125 "data/maps/FullMoonIslandInterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 126 "data/maps/FullMoonIslandInterior/scripts.pory"
	removeobject 1
# 127 "data/maps/FullMoonIslandInterior/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 128 "data/maps/FullMoonIslandInterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 129 "data/maps/FullMoonIslandInterior/scripts.pory"
	msgbox FullMoonIslandInterior_EventScript_CresseliaJoinsParty_Text_1, MSGBOX_DEFAULT
# 130 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitfanfare
# 131 "data/maps/FullMoonIslandInterior/scripts.pory"
	setflag FLAG_DEFEATED_CRESSELIA
# 132 "data/maps/FullMoonIslandInterior/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 12
	goto FullMoonIslandInterior_EventScript_CresseliaJoinsParty2_1

FullMoonIslandInterior_EventScript_CresseliaJoinsParty2_3:
# 135 "data/maps/FullMoonIslandInterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 136 "data/maps/FullMoonIslandInterior/scripts.pory"
	removeobject 1
# 137 "data/maps/FullMoonIslandInterior/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 138 "data/maps/FullMoonIslandInterior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 139 "data/maps/FullMoonIslandInterior/scripts.pory"
	msgbox FullMoonIslandInterior_EventScript_CresseliaJoinsParty_Text_2, MSGBOX_DEFAULT
# 140 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitfanfare
# 141 "data/maps/FullMoonIslandInterior/scripts.pory"
	setflag FLAG_DEFEATED_CRESSELIA
# 142 "data/maps/FullMoonIslandInterior/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 12
	goto FullMoonIslandInterior_EventScript_CresseliaJoinsParty2_1


FullMoonIslandInterior_EventScript_Cresselia::
# 153 "data/maps/FullMoonIslandInterior/scripts.pory"
	lock
# 154 "data/maps/FullMoonIslandInterior/scripts.pory"
	faceplayer
# 155 "data/maps/FullMoonIslandInterior/scripts.pory"
	goto_if_eq VAR_RAT_CAVE_STATE, 11, FullMoonIslandInterior_EventScript_CresseliaChangeMind
# 156 "data/maps/FullMoonIslandInterior/scripts.pory"
	playmoncry SPECIES_CRESSELIA, CRY_MODE_ENCOUNTER
# 157 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitmoncry
# 158 "data/maps/FullMoonIslandInterior/scripts.pory"
	setwildbattle SPECIES_CRESSELIA, 75
# 159 "data/maps/FullMoonIslandInterior/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 160 "data/maps/FullMoonIslandInterior/scripts.pory"
	waitstate
# 161 "data/maps/FullMoonIslandInterior/scripts.pory"
	release
	end


# 191 "data/maps/FullMoonIslandInterior/scripts.pory"
FullMoonIslandInterior_Movement_PlayerApproachRatduardoRightEntrance:
# 192 "data/maps/FullMoonIslandInterior/scripts.pory"
	walk_up
# 192 "data/maps/FullMoonIslandInterior/scripts.pory"
	walk_up
# 192 "data/maps/FullMoonIslandInterior/scripts.pory"
	walk_up
# 192 "data/maps/FullMoonIslandInterior/scripts.pory"
	walk_up
# 192 "data/maps/FullMoonIslandInterior/scripts.pory"
	walk_up
# 193 "data/maps/FullMoonIslandInterior/scripts.pory"
	walk_left
# 194 "data/maps/FullMoonIslandInterior/scripts.pory"
	walk_up
	step_end

FullMoonIslandInterior_EventScript_CresseliaJoinsParty_Text_0:
# 77 "data/maps/FullMoonIslandInterior/scripts.pory"
	.string "Thank you.\n I'll be in your care.$"

FullMoonIslandInterior_EventScript_CresseliaJoinsParty_Text_1:
# 86 "data/maps/FullMoonIslandInterior/scripts.pory"
	.string "CRESSELIA joined the party!$"

FullMoonIslandInterior_EventScript_CresseliaJoinsParty_Text_2:
# 96 "data/maps/FullMoonIslandInterior/scripts.pory"
	.string "CRESSELIA was sent to the PC!$"

FullMoonIslandInterior_EventScript_CresseliaChangeMind_Text_0:
# 110 "data/maps/FullMoonIslandInterior/scripts.pory"
	.string "Hello again, {PLAYER}.\n Have you reconsidered my offer?$"

FullMoonIslandInterior_Text_Ratduardo::
# 165 "data/maps/FullMoonIslandInterior/scripts.pory"
	.string "… Again… You…\n Always… in my way…\p Please…!$"

FullMoonIslandInterior_Text_RatduardoDefeat::
# 170 "data/maps/FullMoonIslandInterior/scripts.pory"
	.string "…\n There's no escape for me…$"

FullMoonIslandInterior_Text_CresseliaMyThanks::
# 175 "data/maps/FullMoonIslandInterior/scripts.pory"
	.string "Thank you for coming to my aid.\n You have a very pure heart.\l May I ask for your name?\p … … … …\p I see. {PLAYER}, I really\n cannot thank you enough.\p It would be an honor to join a\n TRAINER like you on your journey.$"

FullMoonIslandInterior_Text_CresseliaIfYouChangeYourMind::
# 186 "data/maps/FullMoonIslandInterior/scripts.pory"
	.string "I see.\n I'll be here if you ever change your mind.$"
