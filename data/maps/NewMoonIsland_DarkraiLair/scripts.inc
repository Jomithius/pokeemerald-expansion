NewMoonIsland_DarkraiLair_MapScripts::
# 2 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewMoonIsland_DarkraiLair_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

NewMoonIsland_DarkraiLair_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	setflag FLAG_TEMP_E
	end


NewMoonIsland_DarkraiLair_EventScript_Darkrai::
# 9 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	lock
# 10 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	faceplayer
# 11 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	playmoncry SPECIES_DARKRAI, CRY_MODE_ENCOUNTER
# 12 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	delay 40
# 13 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	waitmoncry
# 14 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	setwildbattle SPECIES_DARKRAI, 75, ITEM_COVERT_CLOAK
# 15 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 16 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	waitstate
# 17 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 18 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq NewMoonIsland_DarkraiLair_EventScript_Darkrai_2
# 18 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq NewMoonIsland_DarkraiLair_EventScript_Darkrai_2
# 23 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq NewMoonIsland_DarkraiLair_EventScript_Darkrai_3
# 23 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq NewMoonIsland_DarkraiLair_EventScript_Darkrai_3
NewMoonIsland_DarkraiLair_EventScript_Darkrai_1:
# 26 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	msgbox NewMoonIsland_DarkraiLair_EventScript_Darkrai_Text_0, MSGBOX_AUTOCLOSE
# 27 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	waitmessage
# 28 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	msgbox NewMoonIsland_DarkraiLair_Text_PostDarkrai, MSGBOX_AUTOCLOSE
# 29 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	waitmessage
# 30 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 3
# 31 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	delay 60
# 32 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 33 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	delay 90
# 34 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 3
# 35 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	delay 60
# 36 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 37 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	delay 90
# 38 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 39 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	call_if_eq VAR_RAT_CAVE_STATE, 8, NewMoonIsland_DarkraiLair_TryUpdateRatCaveState
# 40 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	addvar VAR_NEWMOON_ISLAND_STATE, 1
# 41 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 6
# 42 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	delay 90
# 43 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	warpsilent MAP_THE_UNDER_HOUSE, 11, 2
# 44 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	waitstate
# 45 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	release
	end

NewMoonIsland_DarkraiLair_EventScript_Darkrai_2:
# 19 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	fadescreen FADE_TO_BLACK
# 20 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	removeobject VAR_LAST_TALKED
# 21 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto NewMoonIsland_DarkraiLair_EventScript_Darkrai_1

NewMoonIsland_DarkraiLair_EventScript_Darkrai_3:
# 24 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	goto Common_EventScript_NopReturn
	goto NewMoonIsland_DarkraiLair_EventScript_Darkrai_1


NewMoonIsland_DarkraiLair_TryUpdateRatCaveState::
# 51 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	clearflag FLAG_HIDE_RATDUARDO_THE_UNDER_HOUSE
# 52 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 10
	return


NewMoonIsland_DarkraiLair_EventScript_Darkrai_Text_0:
# 26 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	.string "…A voice called out from somehere…$"

NewMoonIsland_DarkraiLair_Text_PostDarkrai::
# 56 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	.string "???: DARKRAI…\n Your power is strong.\p Though you don't will it, you make\n people and POKEMON around you see\l terrible nightmares…\p That is why you came here…\n NEWMOON ISLAND…\p There should be none that can be\n drawn into your nightmare…\p If anyone were to fall into a nightmare,\n FULLMOON ISLAND would be their only…\p …\n …$"
