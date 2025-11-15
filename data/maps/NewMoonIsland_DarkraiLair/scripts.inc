NewMoonIsland_DarkraiLair_MapScripts::
# 2 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewMoonIsland_DarkraiLair_OnTransition
# 3 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NewMoonIsland_DarkraiLair_TryRemoveDarkrai
	.byte 0


NewMoonIsland_DarkraiLair_OnTransition::
# 7 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	setflag FLAG_TEMP_E
	end


NewMoonIsland_DarkraiLair_TryRemoveDarkrai::
# 12 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, NewMoonIsland_DarkraiLair_TryRemoveDarkrai_2
NewMoonIsland_DarkraiLair_TryRemoveDarkrai_1:
	end

NewMoonIsland_DarkraiLair_TryRemoveDarkrai_2:
# 13 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 14 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Common_EventScript_NopReturn
# 15 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_NopReturn
# 16 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, Common_EventScript_NopReturn
# 17 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	removeobject VAR_LAST_TALKED
# 18 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	goto NewMoonIsland_DarkraiLair_TryRemoveDarkrai_1


NewMoonIsland_DarkraiLair_EventScript_Darkrai::
# 24 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	lock
# 25 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	faceplayer
# 26 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	playmoncry SPECIES_DARKRAI, CRY_MODE_ENCOUNTER
# 27 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	waitmoncry
# 28 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 29 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	setwildbattle SPECIES_DARKRAI, 75, ITEM_COVERT_CLOAK
# 30 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 31 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	waitstate
# 32 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 33 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq NewMoonIsland_DarkraiLair_EventScript_Darkrai_2
# 33 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq NewMoonIsland_DarkraiLair_EventScript_Darkrai_2
# 38 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	msgbox NewMoonIsland_DarkraiLair_Text_PostDarkrai, MSGBOX_AUTOCLOSE
# 39 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	waitmessage
# 40 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 41 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	delay 60
# 42 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 43 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	delay 90
# 44 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 45 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	delay 60
# 46 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 47 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	delay 90
# 48 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 49 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 5
# 50 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 6
# 51 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	delay 90
# 52 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	setrespawn HEAL_LOCATION_THE_UNDER
# 53 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 54 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	goto_if_eq VAR_RAT_CAVE_STATE, 8, NewMoonIsland_DarkraiLair_TryUpdateRatCaveState
# 55 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	warpsilent MAP_THE_UNDER_HOUSE, 11, 2
# 56 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	waitstate
# 57 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	release
	end

NewMoonIsland_DarkraiLair_EventScript_Darkrai_2:
# 34 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 35 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	goto NewMoonIsland_DarkraiLair_EventScript_NopReturn
	end


NewMoonIsland_DarkraiLair_TryUpdateRatCaveState::
# 63 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	clearflag FLAG_HIDE_RATDUARDO_THE_UNDER_HOUSE
# 64 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 13
# 65 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 6
# 66 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	addvar VAR_FINAL_REMATCH_STATE, 1
# 67 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	setvar VAR_JIMMY_FINAL_REMATCH_CALL_STEP_COUNTER, 0
# 68 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	warpsilent MAP_THE_UNDER_HOUSE, 11, 2
# 69 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	waitstate
	end


NewMoonIsland_DarkraiLair_EventScript_NopReturn::
# 74 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	release
	end


NewMoonIsland_DarkraiLair_Text_PostDarkrai::
# 78 "data/maps/NewMoonIsland_DarkraiLair/scripts.pory"
	.string "…A voice called out from somehere…\p ???: DARKRAI…\n Your power is strong.\p Though you don't will it, you make\n people and POKEMON around you see\l terrible nightmares…\p That is why you came here…\n NEWMOON ISLAND…\p There should be none that can be\n drawn into your nightmares…\p If anyone were to fall into a nightmare,\n FULLMOON ISLAND would be their only…\p …\n …$"
