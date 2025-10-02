NewMoonIsland_House2_MapScripts::
# 2 "data/maps/NewMoonIsland_House2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewMoonIsland_House2_OnTransition
# 3 "data/maps/NewMoonIsland_House2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewMoonIsland_House2_OnLoad
	.byte 0


NewMoonIsland_House2_OnTransition::
# 7 "data/maps/NewMoonIsland_House2/scripts.pory"
	setflag FLAG_TEMP_E
	end


NewMoonIsland_House2_OnLoad::
# 12 "data/maps/NewMoonIsland_House2/scripts.pory"
	call_if_set FLAG_RECEIVED_SACRED_BLADE, NewMoonIsland_House2_HideGimmighoulCoins
# 13 "data/maps/NewMoonIsland_House2/scripts.pory"
	call_if_eq VAR_NEWMOON_ISLAND_STATE, 4, NewMoonIsland_House2_HideTrapChest
	end


NewMoonIsland_House2_HideGimmighoulCoins::
# 19 "data/maps/NewMoonIsland_House2/scripts.pory"
	setmetatile 14, 2, METATILE_LegendOfZeldaHouse_FloorTileTop, FALSE
	return


NewMoonIsland_House2_HideTrapChest::
# 24 "data/maps/NewMoonIsland_House2/scripts.pory"
	setmetatile 13, 2, METATILE_LegendOfZeldaHouse_FloorTileTop, FALSE
	return


NewMoonIsland_House2_EventScript_TriggerTrap::
# 29 "data/maps/NewMoonIsland_House2/scripts.pory"
	lockall
# 30 "data/maps/NewMoonIsland_House2/scripts.pory"
	playbgm MUS_NONE, TRUE
# 31 "data/maps/NewMoonIsland_House2/scripts.pory"
	setweather WEATHER_FOG_DIAGONAL
# 32 "data/maps/NewMoonIsland_House2/scripts.pory"
	doweather
# 33 "data/maps/NewMoonIsland_House2/scripts.pory"
	special WaitWeather
# 34 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 9
# 35 "data/maps/NewMoonIsland_House2/scripts.pory"
	goto_if_ge VAR_RAT_CAVE_STATE 9, NewMoonIsland_House2_EventScript_SpawnChanneler
# 36 "data/maps/NewMoonIsland_House2/scripts.pory"
	addobject 5
# 37 "data/maps/NewMoonIsland_House2/scripts.pory"
	addobject 6
# 38 "data/maps/NewMoonIsland_House2/scripts.pory"
	addobject 7
# 39 "data/maps/NewMoonIsland_House2/scripts.pory"
	clearflag FLAG_HIDE_RATDUARDO_NEWMOON_ISLAND
# 40 "data/maps/NewMoonIsland_House2/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 3
# 41 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_TriggerTrap_Text_0, MSGBOX_AUTOCLOSE
# 43 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 44 "data/maps/NewMoonIsland_House2/scripts.pory"
	releaseall
	end


NewMoonIsland_House2_EventScript_SpawnChanneler::
# 49 "data/maps/NewMoonIsland_House2/scripts.pory"
	lockall
# 50 "data/maps/NewMoonIsland_House2/scripts.pory"
	addobject 10
# 51 "data/maps/NewMoonIsland_House2/scripts.pory"
	addobject 11
# 52 "data/maps/NewMoonIsland_House2/scripts.pory"
	addobject 12
# 53 "data/maps/NewMoonIsland_House2/scripts.pory"
	clearflag FLAG_HIDE_CHANNELER_NEWMOON_ISLAND
# 54 "data/maps/NewMoonIsland_House2/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 3
# 55 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_TriggerTrap_Text_0, MSGBOX_AUTOCLOSE
# 57 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 58 "data/maps/NewMoonIsland_House2/scripts.pory"
	releaseall
	end


NewMoonIsland_House2_EventScript_SacredBlade::
# 63 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 64 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_SacredBlade_Text_0, MSGBOX_DEFAULT
# 66 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 67 "data/maps/NewMoonIsland_House2/scripts.pory"
	checkitemspace ITEM_SACRED_BLADE
# 68 "data/maps/NewMoonIsland_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq NewMoonIsland_House2_EventScript_SacredBlade_2
# 80 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_SacredBlade_Text_1, MSGBOX_AUTOCLOSE
# 81 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
NewMoonIsland_House2_EventScript_SacredBlade_1:
# 83 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end

NewMoonIsland_House2_EventScript_SacredBlade_2:
# 69 "data/maps/NewMoonIsland_House2/scripts.pory"
	finditem ITEM_SACRED_BLADE
# 70 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 71 "data/maps/NewMoonIsland_House2/scripts.pory"
	closemessage
# 72 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 73 "data/maps/NewMoonIsland_House2/scripts.pory"
	call NewMoonIsland_House2_HideGimmighoulCoins
# 74 "data/maps/NewMoonIsland_House2/scripts.pory"
	special DrawWholeMapView
# 75 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 76 "data/maps/NewMoonIsland_House2/scripts.pory"
	setflag FLAG_RECEIVED_SACRED_BLADE
# 77 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto NewMoonIsland_House2_EventScript_SacredBlade_1


NewMoonIsland_House2_EventScript_Ratduardo::
# 88 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 89 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 90 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 91 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 8
# 92 "data/maps/NewMoonIsland_House2/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 93 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 16
# 94 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 95 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 24
# 96 "data/maps/NewMoonIsland_House2/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 97 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 30
# 98 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 99 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_Ratduardo_Text_0, MSGBOX_AUTOCLOSE
# 100 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 101 "data/maps/NewMoonIsland_House2/scripts.pory"
	setflag FLAG_SYS_BOSS_BATTLE
# 102 "data/maps/NewMoonIsland_House2/scripts.pory"
	trainerbattle_no_intro TRAINER_RATDUARDO_NEWMOON_ISLAND, NewMoonIsland_House2_Text_RatduardoDefeat
# 103 "data/maps/NewMoonIsland_House2/scripts.pory"
	clearflag FLAG_SYS_BOSS_BATTLE
# 104 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 105 "data/maps/NewMoonIsland_House2/scripts.pory"
	call NewMoonIsland_House2_HideTrapChest
# 106 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 5
# 107 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 6
# 108 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 7
# 109 "data/maps/NewMoonIsland_House2/scripts.pory"
	special DrawWholeMapView
# 110 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 111 "data/maps/NewMoonIsland_House2/scripts.pory"
	resetweather
# 112 "data/maps/NewMoonIsland_House2/scripts.pory"
	doweather
# 113 "data/maps/NewMoonIsland_House2/scripts.pory"
	special WaitWeather
# 114 "data/maps/NewMoonIsland_House2/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 4
# 115 "data/maps/NewMoonIsland_House2/scripts.pory"
	clearflag FLAG_HIDE_CHANNELER_NEWMOON_ISLAND_PLAZA
# 116 "data/maps/NewMoonIsland_House2/scripts.pory"
	setflag FLAG_HIDE_RATDUARDO_FULLMOON
# 117 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadedefaultbgm
# 118 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end


NewMoonIsland_House2_EventScript_Channeler::
# 123 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 124 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 125 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 126 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 8
# 127 "data/maps/NewMoonIsland_House2/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 128 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 16
# 129 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 130 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 24
# 131 "data/maps/NewMoonIsland_House2/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 132 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 30
# 133 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 134 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_Ratduardo_Text_0, MSGBOX_AUTOCLOSE
# 135 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 136 "data/maps/NewMoonIsland_House2/scripts.pory"
	setflag FLAG_SYS_BOSS_BATTLE
# 137 "data/maps/NewMoonIsland_House2/scripts.pory"
	trainerbattle_no_intro TRAINER_CHANNELER_NEWMOON_ISLAND, NewMoonIsland_House2_Text_RatduardoDefeat
# 138 "data/maps/NewMoonIsland_House2/scripts.pory"
	clearflag FLAG_SYS_BOSS_BATTLE
# 139 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 140 "data/maps/NewMoonIsland_House2/scripts.pory"
	call NewMoonIsland_House2_HideTrapChest
# 141 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 10
# 142 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 11
# 143 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 12
# 144 "data/maps/NewMoonIsland_House2/scripts.pory"
	special DrawWholeMapView
# 145 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 146 "data/maps/NewMoonIsland_House2/scripts.pory"
	resetweather
# 147 "data/maps/NewMoonIsland_House2/scripts.pory"
	doweather
# 148 "data/maps/NewMoonIsland_House2/scripts.pory"
	special WaitWeather
# 149 "data/maps/NewMoonIsland_House2/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 4
# 150 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadedefaultbgm
# 151 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end


NewMoonIsland_House2_EventScript_Raticate::
# 161 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 162 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_Raticate_Text_0, MSGBOX_NPC
# 164 "data/maps/NewMoonIsland_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 165 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmovement 0
# 166 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end


NewMoonIsland_House2_EventScript_RaticateAlola::
# 171 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 172 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 173 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_RaticateAlola_Text_0, MSGBOX_YESNO
# 175 "data/maps/NewMoonIsland_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewMoonIsland_House2_EventScript_RaticateAlola_2
# 179 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_RaticateAlola_Text_2, MSGBOX_AUTOCLOSE
NewMoonIsland_House2_EventScript_RaticateAlola_1:
# 181 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 182 "data/maps/NewMoonIsland_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 183 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmovement 0
# 184 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end

NewMoonIsland_House2_EventScript_RaticateAlola_2:
# 176 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_RaticateAlola_Text_1, MSGBOX_AUTOCLOSE
	goto NewMoonIsland_House2_EventScript_RaticateAlola_1


NewMoonIsland_House2_EventScript_RattataAlola::
# 189 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 190 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 191 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_RattataAlola_Text_0, MSGBOX_AUTOCLOSE
# 192 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 193 "data/maps/NewMoonIsland_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 194 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmovement 0
# 195 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end


NewMoonIsland_House2_EventScript_Rattata::
# 200 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 201 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 202 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_Rattata_Text_0, MSGBOX_AUTOCLOSE
# 204 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 205 "data/maps/NewMoonIsland_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 206 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmovement 0
# 207 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end


NewMoonIsland_House2_EventScript_TriggerTrap_Text_0:
# 41 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "{PLAYER}…\n You shouldn't have done that.$"

NewMoonIsland_House2_EventScript_SacredBlade_Text_0:
# 64 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "You check the treasure chest…\n There's a sword!$"

NewMoonIsland_House2_EventScript_SacredBlade_Text_1:
# 80 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "You don't have enough room…$"

NewMoonIsland_House2_EventScript_Ratduardo_Text_0:
# 99 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "…$"

NewMoonIsland_House2_EventScript_Raticate_Text_0:
# 162 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "Just because we're trapped here\n doesn't mean we can't be a family.$"

NewMoonIsland_House2_EventScript_RaticateAlola_Text_0:
# 173 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "What, {PLAYER}?\n Never seen a rat family before?$"

NewMoonIsland_House2_EventScript_RaticateAlola_Text_1:
# 176 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "Guess you're just uncultured.$"

NewMoonIsland_House2_EventScript_RaticateAlola_Text_2:
# 179 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "Then come join us for dinner.$"

NewMoonIsland_House2_EventScript_RattataAlola_Text_0:
# 191 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "My stummy hurt.$"

NewMoonIsland_House2_EventScript_Rattata_Text_0:
# 202 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "How are you so calm with her standing\n right behind you?$"

NewMoonIsland_House2_Text_RatduardoDefeat::
# 155 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "…\n There's no escape…$"
