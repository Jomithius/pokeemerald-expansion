NewMoonIsland_House4_MapScripts::
# 2 "data/maps/NewMoonIsland_House4/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewMoonIsland_House4_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

NewMoonIsland_House4_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/NewMoonIsland_House4/scripts.pory"
	setflag FLAG_TEMP_E
	end


NewMoonIsland_EventScript_Dendenne::
# 9 "data/maps/NewMoonIsland_House4/scripts.pory"
	lock
# 10 "data/maps/NewMoonIsland_House4/scripts.pory"
	faceplayer
# 11 "data/maps/NewMoonIsland_House4/scripts.pory"
	msgbox NewMoonIsland_House4_Text_YouLookTired, MSGBOX_DEFAULT
# 12 "data/maps/NewMoonIsland_House4/scripts.pory"
	waitmessage
# 13 "data/maps/NewMoonIsland_House4/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 14 "data/maps/NewMoonIsland_House4/scripts.pory"
	msgbox NewMoonIsland_House4_Text_RestHereAnytime, MSGBOX_AUTOCLOSE
# 15 "data/maps/NewMoonIsland_House4/scripts.pory"
	waitmessage
# 16 "data/maps/NewMoonIsland_House4/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 17 "data/maps/NewMoonIsland_House4/scripts.pory"
	waitmovement 1
# 18 "data/maps/NewMoonIsland_House4/scripts.pory"
	release
	end


NewMoonIsland_House4_Text_YouLookTired::
# 22 "data/maps/NewMoonIsland_House4/scripts.pory"
	.string "You look tired.\n Take a rest for awhile.$"

NewMoonIsland_House4_Text_RestHereAnytime::
# 27 "data/maps/NewMoonIsland_House4/scripts.pory"
	.string "You can rest here anytime.\n We're stuck here for eternity, after all…$"
