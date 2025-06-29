NewMoonIsland_House4_MapScripts::
# 2 "data/maps/NewMoonIsland_House4/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewMoonIsland_House4_OnTransition
# 3 "data/maps/NewMoonIsland_House4/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


NewMoonIsland_House4_OnTransition::
# 7 "data/maps/NewMoonIsland_House4/scripts.pory"
	setflag FLAG_TEMP_E
# 8 "data/maps/NewMoonIsland_House4/scripts.pory"
	setrespawn HEAL_LOCATION_NEW_MOON_ISLAND
	return


NewMoonIsland_House4_EventScript_Dendenne::
# 12 "data/maps/NewMoonIsland_House4/scripts.pory"
	lock
# 13 "data/maps/NewMoonIsland_House4/scripts.pory"
	faceplayer
# 14 "data/maps/NewMoonIsland_House4/scripts.pory"
	msgbox NewMoonIsland_House4_Text_YouLookTired, MSGBOX_DEFAULT
# 15 "data/maps/NewMoonIsland_House4/scripts.pory"
	waitmessage
# 16 "data/maps/NewMoonIsland_House4/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 17 "data/maps/NewMoonIsland_House4/scripts.pory"
	msgbox NewMoonIsland_House4_Text_RestHereAnytime, MSGBOX_AUTOCLOSE
# 18 "data/maps/NewMoonIsland_House4/scripts.pory"
	waitmessage
# 19 "data/maps/NewMoonIsland_House4/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 20 "data/maps/NewMoonIsland_House4/scripts.pory"
	waitmovement 1
# 21 "data/maps/NewMoonIsland_House4/scripts.pory"
	release
	end


NewMoonIsland_House4_Text_YouLookTired::
# 25 "data/maps/NewMoonIsland_House4/scripts.pory"
	.string "You look tired…\n Take a rest for awhile.$"

NewMoonIsland_House4_Text_RestHereAnytime::
# 30 "data/maps/NewMoonIsland_House4/scripts.pory"
	.string "You can stop by anytime.\n We're stuck here for eternity, after all…$"
