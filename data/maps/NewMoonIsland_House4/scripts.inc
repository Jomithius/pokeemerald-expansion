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


NewMoonIsland_House4_EventScript_Togedemaru::
# 36 "data/maps/NewMoonIsland_House4/scripts.pory"
	lock
# 37 "data/maps/NewMoonIsland_House4/scripts.pory"
	faceplayer
# 38 "data/maps/NewMoonIsland_House4/scripts.pory"
	fadenewbgm MUS_POKE_MART
# 39 "data/maps/NewMoonIsland_House4/scripts.pory"
	message NewMoonIsland_House4_EventScript_Togedemaru_Text_0
# 41 "data/maps/NewMoonIsland_House4/scripts.pory"
	waitmessage
# 42 "data/maps/NewMoonIsland_House4/scripts.pory"
	pokemart NewMoonIsland_House4_Pokemart
# 43 "data/maps/NewMoonIsland_House4/scripts.pory"
	msgbox NewMoonIsland_House4_EventScript_Togedemaru_Text_1, MSGBOX_DEFAULT
# 44 "data/maps/NewMoonIsland_House4/scripts.pory"
	fadedefaultbgm
# 45 "data/maps/NewMoonIsland_House4/scripts.pory"
	release
	end


	.align 2
# 49 "data/maps/NewMoonIsland_House4/scripts.pory"
NewMoonIsland_House4_Pokemart:
# 50 "data/maps/NewMoonIsland_House4/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 51 "data/maps/NewMoonIsland_House4/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 52 "data/maps/NewMoonIsland_House4/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 53 "data/maps/NewMoonIsland_House4/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 54 "data/maps/NewMoonIsland_House4/scripts.pory"
	.2byte ITEM_MAX_LURE
# 55 "data/maps/NewMoonIsland_House4/scripts.pory"
	.2byte ITEM_ELIXIR
# 56 "data/maps/NewMoonIsland_House4/scripts.pory"
	.2byte ITEM_POKE_BALL
# 57 "data/maps/NewMoonIsland_House4/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 58 "data/maps/NewMoonIsland_House4/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 59 "data/maps/NewMoonIsland_House4/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 60 "data/maps/NewMoonIsland_House4/scripts.pory"
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_NONE

NewMoonIsland_House4_EventScript_Togedemaru_Text_0:
# 39 "data/maps/NewMoonIsland_House4/scripts.pory"
	.string "I got items you couldn't even\n DREAM of!$"

NewMoonIsland_House4_EventScript_Togedemaru_Text_1:
# 43 "data/maps/NewMoonIsland_House4/scripts.pory"
	.string "Thank you…$"

NewMoonIsland_House4_Text_YouLookTired::
# 25 "data/maps/NewMoonIsland_House4/scripts.pory"
	.string "You look tired…\n Take a rest for awhile.$"

NewMoonIsland_House4_Text_RestHereAnytime::
# 30 "data/maps/NewMoonIsland_House4/scripts.pory"
	.string "You can stop by anytime.\n We're stuck here for eternity, after all…$"
