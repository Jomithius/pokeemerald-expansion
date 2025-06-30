NewMoonIsland_House2_MapScripts::
# 2 "data/maps/NewMoonIsland_House2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewMoonIsland_House2_OnLoad
	.byte 0


NewMoonIsland_House2_OnLoad::
# 6 "data/maps/NewMoonIsland_House2/scripts.pory"
	setflag FLAG_TEMP_E
# 7 "data/maps/NewMoonIsland_House2/scripts.pory"
	call_if_set FLAG_RECEIVED_GIMMIGHOUL_COINS_HOUSE_2, NewMoonIsland_House2_HideGimmighoulCoins
# 8 "data/maps/NewMoonIsland_House2/scripts.pory"
	call_if_eq VAR_NEWMOON_ISLAND_STATE, 4, NewMoonIsland_House2_HideTrapChest
	end


NewMoonIsland_House2_HideGimmighoulCoins::
# 14 "data/maps/NewMoonIsland_House2/scripts.pory"
	setmetatile 14, 2, METATILE_LegendOfZeldaHouse_FloorTileTop, FALSE
	return


NewMoonIsland_House2_HideTrapChest::
# 19 "data/maps/NewMoonIsland_House2/scripts.pory"
	setmetatile 13, 2, METATILE_LegendOfZeldaHouse_FloorTileTop, FALSE
	return


NewMoonIsland_House2_EventScript_TriggerTrap::
# 24 "data/maps/NewMoonIsland_House2/scripts.pory"
	lockall
# 25 "data/maps/NewMoonIsland_House2/scripts.pory"
	playbgm MUS_NONE, TRUE
# 26 "data/maps/NewMoonIsland_House2/scripts.pory"
	setweather WEATHER_FOG_DIAGONAL
# 27 "data/maps/NewMoonIsland_House2/scripts.pory"
	doweather
# 28 "data/maps/NewMoonIsland_House2/scripts.pory"
	special WaitWeather
# 29 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 9
# 30 "data/maps/NewMoonIsland_House2/scripts.pory"
	goto_if_ge VAR_RAT_CAVE_STATE 11, NewMoonIsland_House2_EventScript_SpawnChanneler
# 31 "data/maps/NewMoonIsland_House2/scripts.pory"
	addobject 5
# 32 "data/maps/NewMoonIsland_House2/scripts.pory"
	addobject 6
# 33 "data/maps/NewMoonIsland_House2/scripts.pory"
	addobject 7
# 34 "data/maps/NewMoonIsland_House2/scripts.pory"
	clearflag FLAG_HIDE_RATDUARDO_NEWMOON_ISLAND
# 35 "data/maps/NewMoonIsland_House2/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 3
# 36 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_TriggerTrap_Text_0, MSGBOX_AUTOCLOSE
# 38 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 39 "data/maps/NewMoonIsland_House2/scripts.pory"
	releaseall
	end


NewMoonIsland_House2_EventScript_SpawnChanneler::
# 44 "data/maps/NewMoonIsland_House2/scripts.pory"
	lockall
# 45 "data/maps/NewMoonIsland_House2/scripts.pory"
	addobject 10
# 46 "data/maps/NewMoonIsland_House2/scripts.pory"
	addobject 11
# 47 "data/maps/NewMoonIsland_House2/scripts.pory"
	addobject 12
# 48 "data/maps/NewMoonIsland_House2/scripts.pory"
	clearflag FLAG_HIDE_CHANNELER_NEWMOON_ISLAND
# 49 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_TriggerTrap_Text_0, MSGBOX_AUTOCLOSE
# 51 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 52 "data/maps/NewMoonIsland_House2/scripts.pory"
	releaseall
	end


NewMoonIsland_House2_EventScript_GimmighoulCoin::
# 57 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 58 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_GimmighoulCoin_Text_0, MSGBOX_AUTOCLOSE
# 60 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 61 "data/maps/NewMoonIsland_House2/scripts.pory"
	checkitemspace ITEM_GIMMIGHOUL_COIN
# 62 "data/maps/NewMoonIsland_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq NewMoonIsland_House2_EventScript_GimmighoulCoin_2
# 72 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_GimmighoulCoin_Text_1, MSGBOX_AUTOCLOSE
# 73 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
NewMoonIsland_House2_EventScript_GimmighoulCoin_1:
# 75 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end

NewMoonIsland_House2_EventScript_GimmighoulCoin_2:
# 63 "data/maps/NewMoonIsland_House2/scripts.pory"
	finditem ITEM_GIMMIGHOUL_COIN
# 64 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 65 "data/maps/NewMoonIsland_House2/scripts.pory"
	closemessage
# 66 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 67 "data/maps/NewMoonIsland_House2/scripts.pory"
	call NewMoonIsland_House2_HideGimmighoulCoins
# 68 "data/maps/NewMoonIsland_House2/scripts.pory"
	special DrawWholeMapView
# 69 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto NewMoonIsland_House2_EventScript_GimmighoulCoin_1


NewMoonIsland_House2_EventScript_Ratduardo::
# 80 "data/maps/NewMoonIsland_House2/scripts.pory"
	lockall
# 81 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 82 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 83 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 8
# 84 "data/maps/NewMoonIsland_House2/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 85 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 16
# 86 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 87 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 24
# 88 "data/maps/NewMoonIsland_House2/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 89 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 30
# 90 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 91 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_Ratduardo_Text_0, MSGBOX_AUTOCLOSE
# 92 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 93 "data/maps/NewMoonIsland_House2/scripts.pory"
	trainerbattle_no_intro TRAINER_RATDUARDO_NEWMOON_ISLAND, NewMoonIsland_House2_Text_RatduardoDefeat
# 94 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 95 "data/maps/NewMoonIsland_House2/scripts.pory"
	call NewMoonIsland_House2_HideTrapChest
# 96 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 5
# 97 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 6
# 98 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 7
# 99 "data/maps/NewMoonIsland_House2/scripts.pory"
	special DrawWholeMapView
# 100 "data/maps/NewMoonIsland_House2/scripts.pory"
	resetweather
# 101 "data/maps/NewMoonIsland_House2/scripts.pory"
	doweather
# 102 "data/maps/NewMoonIsland_House2/scripts.pory"
	special WaitWeather
# 103 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 104 "data/maps/NewMoonIsland_House2/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 4
# 105 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadedefaultbgm
# 106 "data/maps/NewMoonIsland_House2/scripts.pory"
	releaseall
	end


NewMoonIsland_House2_EventScript_Channeler::
# 111 "data/maps/NewMoonIsland_House2/scripts.pory"
	lockall
# 112 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 113 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 114 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 8
# 115 "data/maps/NewMoonIsland_House2/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 116 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 16
# 117 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 118 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 24
# 119 "data/maps/NewMoonIsland_House2/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 120 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 30
# 121 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 122 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_Ratduardo_Text_0, MSGBOX_AUTOCLOSE
# 123 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 124 "data/maps/NewMoonIsland_House2/scripts.pory"
	trainerbattle_no_intro TRAINER_CHANNELER_NEWMOON_ISLAND, NewMoonIsland_House2_Text_RatduardoDefeat
# 125 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 126 "data/maps/NewMoonIsland_House2/scripts.pory"
	call NewMoonIsland_House2_HideTrapChest
# 127 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 10
# 128 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 11
# 129 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 12
# 130 "data/maps/NewMoonIsland_House2/scripts.pory"
	special DrawWholeMapView
# 131 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 132 "data/maps/NewMoonIsland_House2/scripts.pory"
	resetweather
# 133 "data/maps/NewMoonIsland_House2/scripts.pory"
	doweather
# 134 "data/maps/NewMoonIsland_House2/scripts.pory"
	special WaitWeather
# 135 "data/maps/NewMoonIsland_House2/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 4
# 136 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadedefaultbgm
# 137 "data/maps/NewMoonIsland_House2/scripts.pory"
	releaseall
	end


NewMoonIsland_House2_EventScript_Raticate::
# 147 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 148 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_Raticate_Text_0, MSGBOX_NPC
# 150 "data/maps/NewMoonIsland_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 151 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmovement 0
# 152 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end


NewMoonIsland_House2_EventScript_RaticateAlola::
# 157 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 158 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 159 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_RaticateAlola_Text_0, MSGBOX_YESNO
# 161 "data/maps/NewMoonIsland_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewMoonIsland_House2_EventScript_RaticateAlola_2
# 165 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_RaticateAlola_Text_2, MSGBOX_AUTOCLOSE
NewMoonIsland_House2_EventScript_RaticateAlola_1:
# 167 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 168 "data/maps/NewMoonIsland_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 169 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmovement 0
# 170 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end

NewMoonIsland_House2_EventScript_RaticateAlola_2:
# 162 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_RaticateAlola_Text_1, MSGBOX_AUTOCLOSE
	goto NewMoonIsland_House2_EventScript_RaticateAlola_1


NewMoonIsland_House2_EventScript_RattataAlola::
# 175 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 176 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 177 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_RattataAlola_Text_0, MSGBOX_AUTOCLOSE
# 178 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 179 "data/maps/NewMoonIsland_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 180 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmovement 0
# 181 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end


NewMoonIsland_House2_EventScript_Rattata::
# 186 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 187 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 188 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_Rattata_Text_0, MSGBOX_AUTOCLOSE
# 190 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 191 "data/maps/NewMoonIsland_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 192 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmovement 0
# 193 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end


NewMoonIsland_House2_EventScript_TriggerTrap_Text_0:
# 36 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "{PLAYER}…\n You shouldn't have done that.$"

NewMoonIsland_House2_EventScript_GimmighoulCoin_Text_0:
# 58 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "You check the treasure chest…\n There's a coin!$"

NewMoonIsland_House2_EventScript_GimmighoulCoin_Text_1:
# 72 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "You don't have enough room…$"

NewMoonIsland_House2_EventScript_Ratduardo_Text_0:
# 91 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "…$"

NewMoonIsland_House2_EventScript_Raticate_Text_0:
# 148 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "Just because we're trapped here\n doesn't mean we can't be a family.$"

NewMoonIsland_House2_EventScript_RaticateAlola_Text_0:
# 159 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "What, {PLAYER}?\n Never seen a rat family before?$"

NewMoonIsland_House2_EventScript_RaticateAlola_Text_1:
# 162 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "Guess you're just uncultured.$"

NewMoonIsland_House2_EventScript_RaticateAlola_Text_2:
# 165 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "Then come join us for dinner.$"

NewMoonIsland_House2_EventScript_RattataAlola_Text_0:
# 177 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "My stummy hurt.$"

NewMoonIsland_House2_EventScript_Rattata_Text_0:
# 188 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "How are you so calm with her standing\n right behind you?$"

NewMoonIsland_House2_Text_RatduardoDefeat::
# 141 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "…\n There's no escape…$"
