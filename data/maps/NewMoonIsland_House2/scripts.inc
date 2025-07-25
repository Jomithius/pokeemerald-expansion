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


NewMoonIsland_House2_EventScript_SacredBlade::
# 57 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 58 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_SacredBlade_Text_0, MSGBOX_AUTOCLOSE
# 60 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 61 "data/maps/NewMoonIsland_House2/scripts.pory"
	checkitemspace ITEM_SACRED_BLADE
# 62 "data/maps/NewMoonIsland_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq NewMoonIsland_House2_EventScript_SacredBlade_2
# 74 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_SacredBlade_Text_1, MSGBOX_AUTOCLOSE
# 75 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
NewMoonIsland_House2_EventScript_SacredBlade_1:
# 77 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end

NewMoonIsland_House2_EventScript_SacredBlade_2:
# 63 "data/maps/NewMoonIsland_House2/scripts.pory"
	finditem ITEM_SACRED_BLADE
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
# 70 "data/maps/NewMoonIsland_House2/scripts.pory"
	setflag FLAG_RECEIVED_SACRED_BLADE
# 71 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto NewMoonIsland_House2_EventScript_SacredBlade_1


NewMoonIsland_House2_EventScript_Ratduardo::
# 82 "data/maps/NewMoonIsland_House2/scripts.pory"
	lockall
# 83 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 84 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 85 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 8
# 86 "data/maps/NewMoonIsland_House2/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 87 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 16
# 88 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 89 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 24
# 90 "data/maps/NewMoonIsland_House2/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 91 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 30
# 92 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 93 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_Ratduardo_Text_0, MSGBOX_AUTOCLOSE
# 94 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 95 "data/maps/NewMoonIsland_House2/scripts.pory"
	trainerbattle_no_intro TRAINER_RATDUARDO_NEWMOON_ISLAND, NewMoonIsland_House2_Text_RatduardoDefeat
# 96 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 97 "data/maps/NewMoonIsland_House2/scripts.pory"
	call NewMoonIsland_House2_HideTrapChest
# 98 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 5
# 99 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 6
# 100 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 7
# 101 "data/maps/NewMoonIsland_House2/scripts.pory"
	special DrawWholeMapView
# 102 "data/maps/NewMoonIsland_House2/scripts.pory"
	resetweather
# 103 "data/maps/NewMoonIsland_House2/scripts.pory"
	doweather
# 104 "data/maps/NewMoonIsland_House2/scripts.pory"
	special WaitWeather
# 105 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 106 "data/maps/NewMoonIsland_House2/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 4
# 107 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadedefaultbgm
# 108 "data/maps/NewMoonIsland_House2/scripts.pory"
	releaseall
	end


NewMoonIsland_House2_EventScript_Channeler::
# 113 "data/maps/NewMoonIsland_House2/scripts.pory"
	lockall
# 114 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 115 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 116 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 8
# 117 "data/maps/NewMoonIsland_House2/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 118 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 16
# 119 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 120 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 24
# 121 "data/maps/NewMoonIsland_House2/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 122 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 30
# 123 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 124 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_Ratduardo_Text_0, MSGBOX_AUTOCLOSE
# 125 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 126 "data/maps/NewMoonIsland_House2/scripts.pory"
	trainerbattle_no_intro TRAINER_CHANNELER_NEWMOON_ISLAND, NewMoonIsland_House2_Text_RatduardoDefeat
# 127 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 128 "data/maps/NewMoonIsland_House2/scripts.pory"
	call NewMoonIsland_House2_HideTrapChest
# 129 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 10
# 130 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 11
# 131 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 12
# 132 "data/maps/NewMoonIsland_House2/scripts.pory"
	special DrawWholeMapView
# 133 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 134 "data/maps/NewMoonIsland_House2/scripts.pory"
	resetweather
# 135 "data/maps/NewMoonIsland_House2/scripts.pory"
	doweather
# 136 "data/maps/NewMoonIsland_House2/scripts.pory"
	special WaitWeather
# 137 "data/maps/NewMoonIsland_House2/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 4
# 138 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadedefaultbgm
# 139 "data/maps/NewMoonIsland_House2/scripts.pory"
	releaseall
	end


NewMoonIsland_House2_EventScript_Raticate::
# 149 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 150 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_Raticate_Text_0, MSGBOX_NPC
# 152 "data/maps/NewMoonIsland_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 153 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmovement 0
# 154 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end


NewMoonIsland_House2_EventScript_RaticateAlola::
# 159 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 160 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 161 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_RaticateAlola_Text_0, MSGBOX_YESNO
# 163 "data/maps/NewMoonIsland_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewMoonIsland_House2_EventScript_RaticateAlola_2
# 167 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_RaticateAlola_Text_2, MSGBOX_AUTOCLOSE
NewMoonIsland_House2_EventScript_RaticateAlola_1:
# 169 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 170 "data/maps/NewMoonIsland_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 171 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmovement 0
# 172 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end

NewMoonIsland_House2_EventScript_RaticateAlola_2:
# 164 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_RaticateAlola_Text_1, MSGBOX_AUTOCLOSE
	goto NewMoonIsland_House2_EventScript_RaticateAlola_1


NewMoonIsland_House2_EventScript_RattataAlola::
# 177 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 178 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 179 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_RattataAlola_Text_0, MSGBOX_AUTOCLOSE
# 180 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 181 "data/maps/NewMoonIsland_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 182 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmovement 0
# 183 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end


NewMoonIsland_House2_EventScript_Rattata::
# 188 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 189 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 190 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_Rattata_Text_0, MSGBOX_AUTOCLOSE
# 192 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 193 "data/maps/NewMoonIsland_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 194 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmovement 0
# 195 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end


NewMoonIsland_House2_EventScript_TriggerTrap_Text_0:
# 36 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "{PLAYER}…\n You shouldn't have done that.$"

NewMoonIsland_House2_EventScript_SacredBlade_Text_0:
# 58 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "You check the treasure chest…\n There's a sword!$"

NewMoonIsland_House2_EventScript_SacredBlade_Text_1:
# 74 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "You don't have enough room…$"

NewMoonIsland_House2_EventScript_Ratduardo_Text_0:
# 93 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "…$"

NewMoonIsland_House2_EventScript_Raticate_Text_0:
# 150 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "Just because we're trapped here\n doesn't mean we can't be a family.$"

NewMoonIsland_House2_EventScript_RaticateAlola_Text_0:
# 161 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "What, {PLAYER}?\n Never seen a rat family before?$"

NewMoonIsland_House2_EventScript_RaticateAlola_Text_1:
# 164 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "Guess you're just uncultured.$"

NewMoonIsland_House2_EventScript_RaticateAlola_Text_2:
# 167 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "Then come join us for dinner.$"

NewMoonIsland_House2_EventScript_RattataAlola_Text_0:
# 179 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "My stummy hurt.$"

NewMoonIsland_House2_EventScript_Rattata_Text_0:
# 190 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "How are you so calm with her standing\n right behind you?$"

NewMoonIsland_House2_Text_RatduardoDefeat::
# 143 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "…\n There's no escape…$"
