NewMoonIsland_MapScripts::
# 2 "data/maps/NewMoonIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewMoonIsland_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

NewMoonIsland_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/NewMoonIsland/scripts.pory"
	setflag FLAG_TEMP_E
	end


NewMoonIsland_EventScript_Maushold::
# 9 "data/maps/NewMoonIsland/scripts.pory"
	msgbox NewMoonIsland_EventScript_Maushold_Text_0, MSGBOX_NPC
	end


NewMoonIsland_EventScript_Rattata::
# 15 "data/maps/NewMoonIsland/scripts.pory"
	msgbox NewMoonIsland_EventScript_Rattata_Text_0, MSGBOX_NPC
	end


NewMoonIsland_EventScript_Raticate::
# 21 "data/maps/NewMoonIsland/scripts.pory"
	msgbox NewMoonIsland_EventScript_Raticate_Text_0, MSGBOX_NPC
	end


NewMoonIsland_EventScript_Gentleman::
# 27 "data/maps/NewMoonIsland/scripts.pory"
	msgbox NewMoonIsland_EventScript_Gentleman_Text_0, MSGBOX_NPC
	end


NewMoonIsland_EventScript_HexManiac::
# 33 "data/maps/NewMoonIsland/scripts.pory"
	msgbox NewMoonIsland_EventScript_HexManiac_Text_0, MSGBOX_NPC
	end


NewMoonIsland_EventScript_Maniac::
# 38 "data/maps/NewMoonIsland/scripts.pory"
	msgbox NewMoonIsland_EventScript_Maniac_Text_0, MSGBOX_NPC
	end


NewMoonIsland_EventScript_Sign::
# 44 "data/maps/NewMoonIsland/scripts.pory"
	lock
# 45 "data/maps/NewMoonIsland/scripts.pory"
	msgbox NewMoonIsland_Text_Sign, MSGBOX_SIGN
# 46 "data/maps/NewMoonIsland/scripts.pory"
	waitmessage
# 47 "data/maps/NewMoonIsland/scripts.pory"
	release
	end


NewMoonIsland_EventScript_Maushold_Text_0:
# 9 "data/maps/NewMoonIsland/scripts.pory"
	.string "See that house over there?\n It's haunted.$"

NewMoonIsland_EventScript_Rattata_Text_0:
# 15 "data/maps/NewMoonIsland/scripts.pory"
	.string "He hasn't visited recently.\n Where? Where is he?$"

NewMoonIsland_EventScript_Raticate_Text_0:
# 21 "data/maps/NewMoonIsland/scripts.pory"
	.string "Where am I?\n Who am I?$"

NewMoonIsland_EventScript_Gentleman_Text_0:
# 27 "data/maps/NewMoonIsland/scripts.pory"
	.string "{PLAYER}.\n It's too late.$"

NewMoonIsland_EventScript_HexManiac_Text_0:
# 33 "data/maps/NewMoonIsland/scripts.pory"
	.string "What have you done, {PLAYER}?$"

NewMoonIsland_EventScript_Maniac_Text_0:
# 38 "data/maps/NewMoonIsland/scripts.pory"
	.string "He's gone?\n WHERE DID HE GO?$"

NewMoonIsland_Text_Sign::
# 51 "data/maps/NewMoonIsland/scripts.pory"
	.string "It's an old sign.\n  There's something scrawled on it…\p Som…hing so pecu…r shou…\n make off …ith the mot…\p The rest is too worn to read.$"
