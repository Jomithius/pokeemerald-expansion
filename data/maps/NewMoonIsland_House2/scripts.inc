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
	lock
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
	setflag FLAG_SYS_BOSS_BATTLE
# 97 "data/maps/NewMoonIsland_House2/scripts.pory"
	trainerbattle_no_intro TRAINER_RATDUARDO_NEWMOON_ISLAND, NewMoonIsland_House2_Text_RatduardoDefeat
# 98 "data/maps/NewMoonIsland_House2/scripts.pory"
	clearflag FLAG_SYS_BOSS_BATTLE
# 99 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 100 "data/maps/NewMoonIsland_House2/scripts.pory"
	call NewMoonIsland_House2_HideTrapChest
# 101 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 5
# 102 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 6
# 103 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 7
# 104 "data/maps/NewMoonIsland_House2/scripts.pory"
	special DrawWholeMapView
# 105 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 106 "data/maps/NewMoonIsland_House2/scripts.pory"
	resetweather
# 107 "data/maps/NewMoonIsland_House2/scripts.pory"
	doweather
# 108 "data/maps/NewMoonIsland_House2/scripts.pory"
	special WaitWeather
# 109 "data/maps/NewMoonIsland_House2/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 4
# 110 "data/maps/NewMoonIsland_House2/scripts.pory"
	clearflag FLAG_HIDE_CHANNELER_NEWMOON_ISLAND_PLAZA
# 111 "data/maps/NewMoonIsland_House2/scripts.pory"
	setflag FLAG_HIDE_RATDUARDO_FULLMOON
# 112 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadedefaultbgm
# 113 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end


NewMoonIsland_House2_EventScript_Channeler::
# 118 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 119 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 120 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 121 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 8
# 122 "data/maps/NewMoonIsland_House2/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 123 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 16
# 124 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 125 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 24
# 126 "data/maps/NewMoonIsland_House2/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 127 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 30
# 128 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 129 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_Ratduardo_Text_0, MSGBOX_AUTOCLOSE
# 130 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 131 "data/maps/NewMoonIsland_House2/scripts.pory"
	setflag FLAG_SYS_BOSS_BATTLE
# 132 "data/maps/NewMoonIsland_House2/scripts.pory"
	trainerbattle_no_intro TRAINER_CHANNELER_NEWMOON_ISLAND, NewMoonIsland_House2_Text_RatduardoDefeat
# 133 "data/maps/NewMoonIsland_House2/scripts.pory"
	clearflag FLAG_SYS_BOSS_BATTLE
# 134 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 135 "data/maps/NewMoonIsland_House2/scripts.pory"
	call NewMoonIsland_House2_HideTrapChest
# 136 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 10
# 137 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 11
# 138 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 12
# 139 "data/maps/NewMoonIsland_House2/scripts.pory"
	special DrawWholeMapView
# 140 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 141 "data/maps/NewMoonIsland_House2/scripts.pory"
	resetweather
# 142 "data/maps/NewMoonIsland_House2/scripts.pory"
	doweather
# 143 "data/maps/NewMoonIsland_House2/scripts.pory"
	special WaitWeather
# 144 "data/maps/NewMoonIsland_House2/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 4
# 145 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadedefaultbgm
# 146 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end


NewMoonIsland_House2_EventScript_Raticate::
# 156 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 157 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_Raticate_Text_0, MSGBOX_NPC
# 159 "data/maps/NewMoonIsland_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 160 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmovement 0
# 161 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end


NewMoonIsland_House2_EventScript_RaticateAlola::
# 166 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 167 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 168 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_RaticateAlola_Text_0, MSGBOX_YESNO
# 170 "data/maps/NewMoonIsland_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewMoonIsland_House2_EventScript_RaticateAlola_2
# 174 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_RaticateAlola_Text_2, MSGBOX_AUTOCLOSE
NewMoonIsland_House2_EventScript_RaticateAlola_1:
# 176 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 177 "data/maps/NewMoonIsland_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 178 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmovement 0
# 179 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end

NewMoonIsland_House2_EventScript_RaticateAlola_2:
# 171 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_RaticateAlola_Text_1, MSGBOX_AUTOCLOSE
	goto NewMoonIsland_House2_EventScript_RaticateAlola_1


NewMoonIsland_House2_EventScript_RattataAlola::
# 184 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 185 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 186 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_RattataAlola_Text_0, MSGBOX_AUTOCLOSE
# 187 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 188 "data/maps/NewMoonIsland_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 189 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmovement 0
# 190 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end


NewMoonIsland_House2_EventScript_Rattata::
# 195 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 196 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 197 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_Rattata_Text_0, MSGBOX_AUTOCLOSE
# 199 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 200 "data/maps/NewMoonIsland_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 201 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmovement 0
# 202 "data/maps/NewMoonIsland_House2/scripts.pory"
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
# 157 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "Just because we're trapped here\n doesn't mean we can't be a family.$"

NewMoonIsland_House2_EventScript_RaticateAlola_Text_0:
# 168 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "What, {PLAYER}?\n Never seen a rat family before?$"

NewMoonIsland_House2_EventScript_RaticateAlola_Text_1:
# 171 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "Guess you're just uncultured.$"

NewMoonIsland_House2_EventScript_RaticateAlola_Text_2:
# 174 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "Then come join us for dinner.$"

NewMoonIsland_House2_EventScript_RattataAlola_Text_0:
# 186 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "My stummy hurt.$"

NewMoonIsland_House2_EventScript_Rattata_Text_0:
# 197 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "How are you so calm with her standing\n right behind you?$"

NewMoonIsland_House2_Text_RatduardoDefeat::
# 150 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "…\n There's no escape…$"
