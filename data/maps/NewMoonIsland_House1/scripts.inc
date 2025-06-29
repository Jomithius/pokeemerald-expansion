NewMoonIsland_House1_MapScripts::
# 2 "data/maps/NewMoonIsland_House1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewMoonIsland_House1_OnLoad
	.byte 0


NewMoonIsland_House1_OnLoad::
# 6 "data/maps/NewMoonIsland_House1/scripts.pory"
	setflag FLAG_TEMP_E
# 7 "data/maps/NewMoonIsland_House1/scripts.pory"
	call_if_set FLAG_DEFEATED_GIMMIGHOUL, NewMoonIsland_House1_EventScript_RemoveGimmighoul
# 8 "data/maps/NewMoonIsland_House1/scripts.pory"
	call_if_set FLAG_RECEIVED_GIMMIGHOUL_COINS_HOUSE_1, NewMoonIsland_House1_EventScript_RemoveGimmighoulCoins
	end


NewMoonIsland_House1_EventScript_Gimmighoul::
# 13 "data/maps/NewMoonIsland_House1/scripts.pory"
	lock
# 14 "data/maps/NewMoonIsland_House1/scripts.pory"
	msgbox NewMoonIsland_House1_EventScript_Gimmighoul_Text_0, MSGBOX_AUTOCLOSE
# 16 "data/maps/NewMoonIsland_House1/scripts.pory"
	waitmessage
# 17 "data/maps/NewMoonIsland_House1/scripts.pory"
	playmoncry SPECIES_GIMMIGHOUL, CRY_MODE_ENCOUNTER
# 18 "data/maps/NewMoonIsland_House1/scripts.pory"
	waitmoncry
# 19 "data/maps/NewMoonIsland_House1/scripts.pory"
	setwildbattle SPECIES_GIMMIGHOUL, 75, ITEM_GIMMIGHOUL_COIN
# 20 "data/maps/NewMoonIsland_House1/scripts.pory"
	dowildbattle
# 21 "data/maps/NewMoonIsland_House1/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 22 "data/maps/NewMoonIsland_House1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq NewMoonIsland_House1_EventScript_Gimmighoul_2
# 22 "data/maps/NewMoonIsland_House1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq NewMoonIsland_House1_EventScript_Gimmighoul_2
# 29 "data/maps/NewMoonIsland_House1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq NewMoonIsland_House1_EventScript_Gimmighoul_3
# 29 "data/maps/NewMoonIsland_House1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq NewMoonIsland_House1_EventScript_Gimmighoul_3
NewMoonIsland_House1_EventScript_Gimmighoul_1:
# 32 "data/maps/NewMoonIsland_House1/scripts.pory"
	release
	end

NewMoonIsland_House1_EventScript_Gimmighoul_2:
# 23 "data/maps/NewMoonIsland_House1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 24 "data/maps/NewMoonIsland_House1/scripts.pory"
	removeobject VAR_LAST_TALKED
# 25 "data/maps/NewMoonIsland_House1/scripts.pory"
	call NewMoonIsland_House1_EventScript_RemoveGimmighoul
# 26 "data/maps/NewMoonIsland_House1/scripts.pory"
	special DrawWholeMapView
# 27 "data/maps/NewMoonIsland_House1/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto NewMoonIsland_House1_EventScript_Gimmighoul_1

NewMoonIsland_House1_EventScript_Gimmighoul_3:
# 30 "data/maps/NewMoonIsland_House1/scripts.pory"
	goto Common_EventScript_NopReturn
	goto NewMoonIsland_House1_EventScript_Gimmighoul_1


NewMoonIsland_House1_EventScript_GimmighoulCoins::
# 37 "data/maps/NewMoonIsland_House1/scripts.pory"
	lock
# 38 "data/maps/NewMoonIsland_House1/scripts.pory"
	msgbox NewMoonIsland_House1_EventScript_GimmighoulCoins_Text_0, MSGBOX_AUTOCLOSE
# 40 "data/maps/NewMoonIsland_House1/scripts.pory"
	waitmessage
# 41 "data/maps/NewMoonIsland_House1/scripts.pory"
	checkitemspace ITEM_GIMMIGHOUL_COIN, 997
# 42 "data/maps/NewMoonIsland_House1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq NewMoonIsland_House1_EventScript_GimmighoulCoins_2
# 52 "data/maps/NewMoonIsland_House1/scripts.pory"
	msgbox NewMoonIsland_House1_EventScript_GimmighoulCoins_Text_1, MSGBOX_AUTOCLOSE
# 53 "data/maps/NewMoonIsland_House1/scripts.pory"
	waitmessage
NewMoonIsland_House1_EventScript_GimmighoulCoins_1:
# 55 "data/maps/NewMoonIsland_House1/scripts.pory"
	release
	end

NewMoonIsland_House1_EventScript_GimmighoulCoins_2:
# 43 "data/maps/NewMoonIsland_House1/scripts.pory"
	finditem ITEM_GIMMIGHOUL_COIN, 997
# 44 "data/maps/NewMoonIsland_House1/scripts.pory"
	waitmessage
# 45 "data/maps/NewMoonIsland_House1/scripts.pory"
	closemessage
# 46 "data/maps/NewMoonIsland_House1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 47 "data/maps/NewMoonIsland_House1/scripts.pory"
	call NewMoonIsland_House1_EventScript_RemoveGimmighoulCoins
# 48 "data/maps/NewMoonIsland_House1/scripts.pory"
	special DrawWholeMapView
# 49 "data/maps/NewMoonIsland_House1/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto NewMoonIsland_House1_EventScript_GimmighoulCoins_1


NewMoonIsland_House1_EventScript_RemoveGimmighoul::
# 60 "data/maps/NewMoonIsland_House1/scripts.pory"
	setmetatile 4, 3, METATILE_LegendOfZeldaHouse_FloorTile, FALSE
	return


NewMoonIsland_House1_EventScript_RemoveGimmighoulCoins::
# 65 "data/maps/NewMoonIsland_House1/scripts.pory"
	setmetatile 5, 3, METATILE_LegendOfZeldaHouse_FloorTile, FALSE
	return


NewMoonIsland_House1_EventScript_Gimmighoul_Text_0:
# 14 "data/maps/NewMoonIsland_House1/scripts.pory"
	.string "You check the treasure chest…\n Wait… It's a POKéMON!$"

NewMoonIsland_House1_EventScript_GimmighoulCoins_Text_0:
# 38 "data/maps/NewMoonIsland_House1/scripts.pory"
	.string "You check the treasure chest…\n There's a bunch of coins!$"

NewMoonIsland_House1_EventScript_GimmighoulCoins_Text_1:
# 52 "data/maps/NewMoonIsland_House1/scripts.pory"
	.string "You don't have enough room…$"
