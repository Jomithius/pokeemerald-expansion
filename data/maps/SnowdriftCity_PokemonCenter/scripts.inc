SnowdriftCity_PokemonCenter_MapScripts::
# 2 "data/maps/SnowdriftCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SnowdriftCity_PokemonCenter_OnTransition
# 3 "data/maps/SnowdriftCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


SnowdriftCity_PokemonCenter_OnTransition::
# 7 "data/maps/SnowdriftCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_SNOWDRIFT_CITY
	end


SnowdriftCity_PokemonCenter_Nurse::
# 12 "data/maps/SnowdriftCity_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 13 "data/maps/SnowdriftCity_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/SnowdriftCity_PokemonCenter/scripts.pory"
	waitmessage
# 15 "data/maps/SnowdriftCity_PokemonCenter/scripts.pory"
	waitbuttonpress
# 16 "data/maps/SnowdriftCity_PokemonCenter/scripts.pory"
	release
	end


SnowdriftCity_PokemonCenter_EventScript_BirdKeeper::
# 21 "data/maps/SnowdriftCity_PokemonCenter/scripts.pory"
	msgbox SnowdriftCity_PokemonCenter_EventScript_BirdKeeper_Text_0, MSGBOX_NPC
	end


SnowdriftCity_PokemonCenter_EventScript_OldMan::
# 31 "data/maps/SnowdriftCity_PokemonCenter/scripts.pory"
	msgbox SnowdriftCity_PokemonCenter_EventScript_OldMan_Text_0, MSGBOX_NPC
	end


SnowdriftCity_PokemonCenter_EventScript_OldWoman::
# 37 "data/maps/SnowdriftCity_PokemonCenter/scripts.pory"
	msgbox SnowdriftCity_PokemonCenter_EventScript_OldWoman_Text_0, MSGBOX_NPC
	end


SnowdriftCity_PokemonCenter_EventScript_BirdKeeper_Text_0:
# 21 "data/maps/SnowdriftCity_PokemonCenter/scripts.pory"
	.string "There's a CORVIKNIGHT service to\n transport people up here.\p It's really difficult to navigate\n around the mountain, though.\p Get too close, and TINKATON might\n try knocking you out of the sky.$"

SnowdriftCity_PokemonCenter_EventScript_OldMan_Text_0:
# 31 "data/maps/SnowdriftCity_PokemonCenter/scripts.pory"
	.string "I love the hot springs.\n Risking the flight here was worth it!$"

SnowdriftCity_PokemonCenter_EventScript_OldWoman_Text_0:
# 37 "data/maps/SnowdriftCity_PokemonCenter/scripts.pory"
	.string "We used the CORVIKNIGHT service\n to get here.\p I'm worried about the flight back down.$"
