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
	call_if_set FLAG_NEWMOON_ISLAND_HOUSE_2_RATDUARDO_TRIGGER, NewMoonIsland_House2_HideChannelerChest
	end


NewMoonIsland_House2_HideGimmighoulCoins::
# 14 "data/maps/NewMoonIsland_House2/scripts.pory"
	setmetatile 14, 2, METATILE_LegendOfZeldaHouse_FloorTileTop, FALSE
	return


NewMoonIsland_House2_HideChannelerChest::
# 19 "data/maps/NewMoonIsland_House2/scripts.pory"
	setmetatile 13, 2, METATILE_LegendOfZeldaHouse_FloorTileTop, FALSE
	return


NewMoonIsland_House2_EventScript_TriggerChanneler::
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
	animateflash 8
# 30 "data/maps/NewMoonIsland_House2/scripts.pory"
	setflashlevel 7
# 31 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 9
# 32 "data/maps/NewMoonIsland_House2/scripts.pory"
	addobject 5
# 33 "data/maps/NewMoonIsland_House2/scripts.pory"
	addobject 6
# 34 "data/maps/NewMoonIsland_House2/scripts.pory"
	addobject 7
# 35 "data/maps/NewMoonIsland_House2/scripts.pory"
	clearflag FLAG_HIDE_RATDUARDO_NEWMOON_ISLAND
# 36 "data/maps/NewMoonIsland_House2/scripts.pory"
	releaseall
	end


NewMoonIsland_House2_EventScript_GimmighoulCoin::
# 41 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 42 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_GimmighoulCoin_Text_0, MSGBOX_AUTOCLOSE
# 44 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 45 "data/maps/NewMoonIsland_House2/scripts.pory"
	checkitemspace ITEM_GIMMIGHOUL_COIN
# 46 "data/maps/NewMoonIsland_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq NewMoonIsland_House2_EventScript_GimmighoulCoin_2
# 56 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_GimmighoulCoin_Text_1, MSGBOX_AUTOCLOSE
# 57 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
NewMoonIsland_House2_EventScript_GimmighoulCoin_1:
# 59 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end

NewMoonIsland_House2_EventScript_GimmighoulCoin_2:
# 47 "data/maps/NewMoonIsland_House2/scripts.pory"
	finditem ITEM_GIMMIGHOUL_COIN
# 48 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 49 "data/maps/NewMoonIsland_House2/scripts.pory"
	closemessage
# 50 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 51 "data/maps/NewMoonIsland_House2/scripts.pory"
	call NewMoonIsland_House2_HideGimmighoulCoins
# 52 "data/maps/NewMoonIsland_House2/scripts.pory"
	special DrawWholeMapView
# 53 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto NewMoonIsland_House2_EventScript_GimmighoulCoin_1


NewMoonIsland_House2_EventScript_Channeler::
# 64 "data/maps/NewMoonIsland_House2/scripts.pory"
	lockall
# 65 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 66 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 67 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 8
# 68 "data/maps/NewMoonIsland_House2/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 69 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 16
# 70 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 71 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 24
# 72 "data/maps/NewMoonIsland_House2/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 73 "data/maps/NewMoonIsland_House2/scripts.pory"
	delay 30
# 74 "data/maps/NewMoonIsland_House2/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND_HOUSE2
# 75 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_Channeler_Text_0, MSGBOX_AUTOCLOSE
# 76 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 77 "data/maps/NewMoonIsland_House2/scripts.pory"
	trainerbattle_no_intro TRAINER_RATDUARDO_NEWMOON_ISLAND, NewMoonIsland_House2_Text_ChannelerDefeat
# 78 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 79 "data/maps/NewMoonIsland_House2/scripts.pory"
	call NewMoonIsland_House2_HideChannelerChest
# 80 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 5
# 81 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 6
# 82 "data/maps/NewMoonIsland_House2/scripts.pory"
	removeobject 7
# 83 "data/maps/NewMoonIsland_House2/scripts.pory"
	resetweather
# 84 "data/maps/NewMoonIsland_House2/scripts.pory"
	doweather
# 85 "data/maps/NewMoonIsland_House2/scripts.pory"
	special DrawWholeMapView
# 86 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
# 87 "data/maps/NewMoonIsland_House2/scripts.pory"
	animateflash 0
# 88 "data/maps/NewMoonIsland_House2/scripts.pory"
	setflashlevel 0
# 89 "data/maps/NewMoonIsland_House2/scripts.pory"
	fadedefaultbgm
# 90 "data/maps/NewMoonIsland_House2/scripts.pory"
	releaseall
	end


NewMoonIsland_House2_EventScript_Raticate::
# 99 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 100 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_Raticate_Text_0, MSGBOX_NPC
# 102 "data/maps/NewMoonIsland_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 103 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmovement 0
# 104 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end


NewMoonIsland_House2_EventScript_RaticateAlola::
# 109 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 110 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 111 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_RaticateAlola_Text_0, MSGBOX_YESNO
# 113 "data/maps/NewMoonIsland_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewMoonIsland_House2_EventScript_RaticateAlola_2
# 117 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_RaticateAlola_Text_2, MSGBOX_AUTOCLOSE
NewMoonIsland_House2_EventScript_RaticateAlola_1:
# 119 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 120 "data/maps/NewMoonIsland_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 121 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmovement 0
# 122 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end

NewMoonIsland_House2_EventScript_RaticateAlola_2:
# 114 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_RaticateAlola_Text_1, MSGBOX_AUTOCLOSE
	goto NewMoonIsland_House2_EventScript_RaticateAlola_1


NewMoonIsland_House2_EventScript_RattataAlola::
# 127 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 128 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 129 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_RattataAlola_Text_0, MSGBOX_AUTOCLOSE
# 130 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 131 "data/maps/NewMoonIsland_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 132 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmovement 0
# 133 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end


NewMoonIsland_House2_EventScript_Rattata::
# 138 "data/maps/NewMoonIsland_House2/scripts.pory"
	lock
# 139 "data/maps/NewMoonIsland_House2/scripts.pory"
	faceplayer
# 140 "data/maps/NewMoonIsland_House2/scripts.pory"
	msgbox NewMoonIsland_House2_EventScript_Rattata_Text_0, MSGBOX_AUTOCLOSE
# 142 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmessage
# 143 "data/maps/NewMoonIsland_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 144 "data/maps/NewMoonIsland_House2/scripts.pory"
	waitmovement 0
# 145 "data/maps/NewMoonIsland_House2/scripts.pory"
	release
	end


NewMoonIsland_House2_EventScript_GimmighoulCoin_Text_0:
# 42 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "You check the treasure chest…\n There's a coin!$"

NewMoonIsland_House2_EventScript_GimmighoulCoin_Text_1:
# 56 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "You don't have enough room…$"

NewMoonIsland_House2_EventScript_Channeler_Text_0:
# 75 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "{PLAYER}…$"

NewMoonIsland_House2_EventScript_Raticate_Text_0:
# 100 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "Just because we're trapped here\n doesn't mean we can't be a family.$"

NewMoonIsland_House2_EventScript_RaticateAlola_Text_0:
# 111 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "What, {PLAYER}?\n Never seen a rat family before?$"

NewMoonIsland_House2_EventScript_RaticateAlola_Text_1:
# 114 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "Guess you're just uncultured.$"

NewMoonIsland_House2_EventScript_RaticateAlola_Text_2:
# 117 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "Then come join us for dinner.$"

NewMoonIsland_House2_EventScript_RattataAlola_Text_0:
# 129 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "My stummy hurt.$"

NewMoonIsland_House2_EventScript_Rattata_Text_0:
# 140 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "How are you so calm with her standing\n right behind you?$"

NewMoonIsland_House2_Text_ChannelerDefeat::
# 94 "data/maps/NewMoonIsland_House2/scripts.pory"
	.string "{PLAYER}…$"
