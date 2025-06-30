NewMoonIsland_DarkraiLair_MapScripts::
# 2 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewMoonIsland_DarkraiLair_MapScripts_MAP_SCRIPT_ON_LOAD
# 6 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NewMoonIsland_DarkraiLair_TryRemoveDarkrai
	.byte 0

NewMoonIsland_DarkraiLair_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	setflag FLAG_TEMP_E
	end


NewMoonIsland_DarkraiLair_TryRemoveDarkrai::
# 10 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 11 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Common_EventScript_NopReturn
# 12 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_NopReturn
# 13 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, Common_EventScript_NopReturn
# 14 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	removeobject VAR_LAST_TALKED
	end


NewMoonIsland_DarkraiLair_EventScript_Darkrai::
# 19 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	lock
# 20 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	faceplayer
# 21 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	playmoncry SPECIES_DARKRAI, CRY_MODE_ENCOUNTER
# 22 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	delay 40
# 23 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	waitmoncry
# 24 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	setwildbattle SPECIES_DARKRAI, 75, ITEM_COVERT_CLOAK
# 25 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 26 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	waitstate
# 27 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 28 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq NewMoonIsland_DarkraiLair_EventScript_Darkrai_2
# 28 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq NewMoonIsland_DarkraiLair_EventScript_Darkrai_2
NewMoonIsland_DarkraiLair_EventScript_Darkrai_1:
# 31 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	msgbox NewMoonIsland_DarkraiLair_Text_PostDarkrai, MSGBOX_AUTOCLOSE
# 32 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	waitmessage
# 33 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 34 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	delay 60
# 35 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 36 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	delay 90
# 37 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 38 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	delay 60
# 39 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 40 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	delay 90
# 41 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 42 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	call_if_eq VAR_RAT_CAVE_STATE, 8, NewMoonIsland_DarkraiLair_TryUpdateRatCaveState
# 43 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 5
# 44 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 6
# 45 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	delay 90
# 46 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	warpsilent MAP_THE_UNDER_HOUSE, 11, 2
# 47 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	waitstate
# 48 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	release
	end

NewMoonIsland_DarkraiLair_EventScript_Darkrai_2:
# 29 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	goto Common_EventScript_NopReturn
	goto NewMoonIsland_DarkraiLair_EventScript_Darkrai_1


NewMoonIsland_DarkraiLair_TryUpdateRatCaveState::
# 54 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	clearflag FLAG_HIDE_RATDUARDO_THE_UNDER_HOUSE
# 55 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 13
	return


NewMoonIsland_DarkraiLair_Text_PostDarkrai::
# 59 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	.string "…A voice called out from somehere…\p ???: DARKRAI…\n Your power is strong.\p Though you don't will it, you make\n people and POKEMON around you see\l terrible nightmares…\p That is why you came here…\n NEWMOON ISLAND…\p There should be none that can be\n drawn into your nightmares…\p If anyone were to fall into a nightmare,\n FULLMOON ISLAND would be their only…\p …\n …$"
