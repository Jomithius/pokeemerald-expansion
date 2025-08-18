NewMoonIsland_House2_MapScripts::
# 2 "data/maps/NewMoonIsland_House2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewMoonIsland_House2_OnLoad
	.byte 0


NewMoonIsland_House2_OnLoad::
# 6 "data/maps/NewMoonIsland_House2/scripts.pory"
	setflag FLAG_TEMP_E
# 7 "data/maps/NewMoonIsland_House2/scripts.pory"
	call_if_set FLAG_RECEIVED_SACRED_BLADE, NewMoonIsland_House2_HideGimmighoulCoins
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
	goto_if_ge VAR_RAT_CAVE_STATE 9, NewMoonIsland_House2_EventScript_SpawnChanneler
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
	setvar VAR_NEWMOON_ISLAND_STATE, 3
# 50 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_TriggerTrap_Text_0, MSGBOX_AUTOCLOSE
# 52 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 53 "data/maps/NewMoonIsland_House2/scripts.pory"
	releaseall
	end


NewMoonIsland_House2_EventScript_SacredBlade::
# 58 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 59 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_SacredBlade_Text_0, MSGBOX_DEFAULT
# 61 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 62 "data/maps/NewMoonIsland_House2/scripts.pory"
	checkitemspace ITEM_SACRED_BLADE
# 63 "data/maps/NewMoonIsland_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq NewMoonIsland_House2_EventScript_SacredBlade_2
# 75 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_SacredBlade_Text_1, MSGBOX_AUTOCLOSE
# 76 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
NewMoonIsland_House2_EventScript_SacredBlade_1:
# 78 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end

NewMoonIsland_House2_EventScript_SacredBlade_2:
# 64 "data/maps/NewMoonIsland_House2/scripts.pory"
	finditem ITEM_SACRED_BLADE
# 65 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 66 "data/maps/NewMoonIsland_House2/scripts.pory"
	closemessage
# 67 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 68 "data/maps/NewMoonIsland_House2/scripts.pory"
	call NewMoonIsland_House2_HideGimmighoulCoins
# 69 "data/maps/NewMoonIsland_House2/scripts.pory"
	special DrawWholeMapView
# 70 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 71 "data/maps/NewMoonIsland_House2/scripts.pory"
	setflag FLAG_RECEIVED_SACRED_BLADE
# 72 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto NewMoonIsland_House2_EventScript_SacredBlade_1


NewMoonIsland_House2_EventScript_Ratduardo::
# 83 "data/maps/NewMoonIsland_House2/scripts.pory"
	lockall
# 84 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 85 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 86 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 8
# 87 "data/maps/NewMoonIsland_House2/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 88 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 16
# 89 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 90 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 24
# 91 "data/maps/NewMoonIsland_House2/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 92 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 30
# 93 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 94 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_Ratduardo_Text_0, MSGBOX_AUTOCLOSE
# 95 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 96 "data/maps/NewMoonIsland_House2/scripts.pory"
	trainerbattle_no_intro TRAINER_RATDUARDO_NEWMOON_ISLAND, NewMoonIsland_House2_Text_RatduardoDefeat
# 97 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 98 "data/maps/NewMoonIsland_House2/scripts.pory"
	call NewMoonIsland_House2_HideTrapChest
# 99 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 5
# 100 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 6
# 101 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 7
# 102 "data/maps/NewMoonIsland_House2/scripts.pory"
	special DrawWholeMapView
# 103 "data/maps/NewMoonIsland_House2/scripts.pory"
	resetweather
# 104 "data/maps/NewMoonIsland_House2/scripts.pory"
	doweather
# 105 "data/maps/NewMoonIsland_House2/scripts.pory"
	special WaitWeather
# 106 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 107 "data/maps/NewMoonIsland_House2/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 4
# 108 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadedefaultbgm
# 109 "data/maps/NewMoonIsland_House2/scripts.pory"
	releaseall
	end


NewMoonIsland_House2_EventScript_Channeler::
# 114 "data/maps/NewMoonIsland_House2/scripts.pory"
	lockall
# 115 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 116 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 117 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 8
# 118 "data/maps/NewMoonIsland_House2/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 119 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 16
# 120 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 121 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 24
# 122 "data/maps/NewMoonIsland_House2/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 123 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 30
# 124 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 125 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_Ratduardo_Text_0, MSGBOX_AUTOCLOSE
# 126 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 127 "data/maps/NewMoonIsland_House2/scripts.pory"
	trainerbattle_no_intro TRAINER_CHANNELER_NEWMOON_ISLAND, NewMoonIsland_House2_Text_RatduardoDefeat
# 128 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 129 "data/maps/NewMoonIsland_House2/scripts.pory"
	call NewMoonIsland_House2_HideTrapChest
# 130 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 10
# 131 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 11
# 132 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 12
# 133 "data/maps/NewMoonIsland_House2/scripts.pory"
	special DrawWholeMapView
# 134 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 135 "data/maps/NewMoonIsland_House2/scripts.pory"
	resetweather
# 136 "data/maps/NewMoonIsland_House2/scripts.pory"
	doweather
# 137 "data/maps/NewMoonIsland_House2/scripts.pory"
	special WaitWeather
# 138 "data/maps/NewMoonIsland_House2/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 4
# 139 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadedefaultbgm
# 140 "data/maps/NewMoonIsland_House2/scripts.pory"
	releaseall
	end


NewMoonIsland_House2_EventScript_Raticate::
# 150 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 151 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_Raticate_Text_0, MSGBOX_NPC
# 153 "data/maps/NewMoonIsland_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 154 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmovement 0
# 155 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end


NewMoonIsland_House2_EventScript_RaticateAlola::
# 160 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 161 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 162 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_RaticateAlola_Text_0, MSGBOX_YESNO
# 164 "data/maps/NewMoonIsland_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewMoonIsland_House2_EventScript_RaticateAlola_2
# 168 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_RaticateAlola_Text_2, MSGBOX_AUTOCLOSE
NewMoonIsland_House2_EventScript_RaticateAlola_1:
# 170 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 171 "data/maps/NewMoonIsland_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 172 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmovement 0
# 173 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end

NewMoonIsland_House2_EventScript_RaticateAlola_2:
# 165 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_RaticateAlola_Text_1, MSGBOX_AUTOCLOSE
	goto NewMoonIsland_House2_EventScript_RaticateAlola_1


NewMoonIsland_House2_EventScript_RattataAlola::
# 178 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 179 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 180 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_RattataAlola_Text_0, MSGBOX_AUTOCLOSE
# 181 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 182 "data/maps/NewMoonIsland_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 183 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmovement 0
# 184 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end


NewMoonIsland_House2_EventScript_Rattata::
# 189 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 190 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 191 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_Rattata_Text_0, MSGBOX_AUTOCLOSE
# 193 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 194 "data/maps/NewMoonIsland_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 195 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmovement 0
# 196 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end


NewMoonIsland_House2_EventScript_TriggerTrap_Text_0:
# 36 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "{PLAYER}…\n You shouldn't have done that.$"

NewMoonIsland_House2_EventScript_SacredBlade_Text_0:
# 59 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "You check the treasure chest…\n There's a sword!$"

NewMoonIsland_House2_EventScript_SacredBlade_Text_1:
# 75 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "You don't have enough room…$"

NewMoonIsland_House2_EventScript_Ratduardo_Text_0:
# 94 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "…$"

NewMoonIsland_House2_EventScript_Raticate_Text_0:
# 151 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "Just because we're trapped here\n doesn't mean we can't be a family.$"

NewMoonIsland_House2_EventScript_RaticateAlola_Text_0:
# 162 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "What, {PLAYER}?\n Never seen a rat family before?$"

NewMoonIsland_House2_EventScript_RaticateAlola_Text_1:
# 165 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "Guess you're just uncultured.$"

NewMoonIsland_House2_EventScript_RaticateAlola_Text_2:
# 168 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "Then come join us for dinner.$"

NewMoonIsland_House2_EventScript_RattataAlola_Text_0:
# 180 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "My stummy hurt.$"

NewMoonIsland_House2_EventScript_Rattata_Text_0:
# 191 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "How are you so calm with her standing\n right behind you?$"

NewMoonIsland_House2_Text_RatduardoDefeat::
# 144 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "…\n There's no escape…$"
