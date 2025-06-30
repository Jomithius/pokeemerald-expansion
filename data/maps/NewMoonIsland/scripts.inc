NewMoonIsland_MapScripts::
# 2 "data/maps/NewMoonIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewMoonIsland_OnLoad
	.byte 0


NewMoonIsland_OnLoad::
# 6 "data/maps/NewMoonIsland/scripts.pory"
	setflag FLAG_TEMP_E
# 7 "data/maps/NewMoonIsland/scripts.pory"
	call_if_eq VAR_NEWMOON_ISLAND_STATE, 3, NewMoonIsland_House2_TryResetGhostEvent
	end


NewMoonIsland_House2_TryResetGhostEvent::
# 12 "data/maps/NewMoonIsland/scripts.pory"
	setflag FLAG_HIDE_RATDUARDO_NEWMOON_ISLAND
# 13 "data/maps/NewMoonIsland/scripts.pory"
	setflag FLAG_HIDE_CHANNELER_NEWMOON_ISLAND
# 14 "data/maps/NewMoonIsland/scripts.pory"
	clearflag FLAG_NEWMOON_ISLAND_HOUSE_2_TRAP_TRIGGER
	return


NewMoonIsland_EventScript_Maushold::
# 18 "data/maps/NewMoonIsland/scripts.pory"
	msgbox NewMoonIsland_EventScript_Maushold_Text_0, MSGBOX_NPC
	end


NewMoonIsland_EventScript_Rattata::
# 24 "data/maps/NewMoonIsland/scripts.pory"
	msgbox NewMoonIsland_EventScript_Rattata_Text_0, MSGBOX_NPC
	end


NewMoonIsland_EventScript_Raticate::
# 30 "data/maps/NewMoonIsland/scripts.pory"
	msgbox NewMoonIsland_EventScript_Raticate_Text_0, MSGBOX_NPC
	end


NewMoonIsland_EventScript_Gentleman::
# 36 "data/maps/NewMoonIsland/scripts.pory"
	msgbox NewMoonIsland_EventScript_Gentleman_Text_0, MSGBOX_NPC
	end


NewMoonIsland_EventScript_HexManiac::
# 42 "data/maps/NewMoonIsland/scripts.pory"
	msgbox NewMoonIsland_EventScript_HexManiac_Text_0, MSGBOX_NPC
	end


NewMoonIsland_EventScript_Maniac::
# 47 "data/maps/NewMoonIsland/scripts.pory"
	msgbox NewMoonIsland_EventScript_Maniac_Text_0, MSGBOX_NPC
	end


NewMoonIsland_EventScript_Sign::
# 53 "data/maps/NewMoonIsland/scripts.pory"
	lock
# 54 "data/maps/NewMoonIsland/scripts.pory"
	msgbox NewMoonIsland_Text_Sign, MSGBOX_SIGN
# 55 "data/maps/NewMoonIsland/scripts.pory"
	waitmessage
# 56 "data/maps/NewMoonIsland/scripts.pory"
	release
	end


NewMoonIsland_EventScript_Maushold_Text_0:
# 18 "data/maps/NewMoonIsland/scripts.pory"
	.string "See that house over there?\n It's haunted.$"

NewMoonIsland_EventScript_Rattata_Text_0:
# 24 "data/maps/NewMoonIsland/scripts.pory"
	.string "He hasn't visited recently.\n Where? Where is he?$"

NewMoonIsland_EventScript_Raticate_Text_0:
# 30 "data/maps/NewMoonIsland/scripts.pory"
	.string "Where am I?\n Who am I?$"

NewMoonIsland_EventScript_Gentleman_Text_0:
# 36 "data/maps/NewMoonIsland/scripts.pory"
	.string "{PLAYER}.\n It's too late.$"

NewMoonIsland_EventScript_HexManiac_Text_0:
# 42 "data/maps/NewMoonIsland/scripts.pory"
	.string "What have you done, {PLAYER}?$"

NewMoonIsland_EventScript_Maniac_Text_0:
# 47 "data/maps/NewMoonIsland/scripts.pory"
	.string "He's gone?\n WHERE DID HE GO?$"

NewMoonIsland_Text_Sign::
# 60 "data/maps/NewMoonIsland/scripts.pory"
	.string "It's an old sign.\n  There's something scrawled on it…\p Som…hing so pecu…r shou…\n make off …ith the mot…\p The rest is too worn to read.$"
