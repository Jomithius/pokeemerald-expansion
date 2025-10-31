NewMoonIsland_MapScripts::
# 2 "data/maps/NewMoonIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewMoonIsland_OnTransition
	.byte 0


NewMoonIsland_OnTransition::
# 6 "data/maps/NewMoonIsland/scripts.pory"
	setflag FLAG_TEMP_E
# 7 "data/maps/NewMoonIsland/scripts.pory"
	setflag FLAG_SYS_DYNAMIC_LEVELS
# 8 "data/maps/NewMoonIsland/scripts.pory"
	call_if_eq VAR_NEWMOON_ISLAND_STATE, 3, NewMoonIsland_House2_TryResetGhostEvent
	end


NewMoonIsland_House2_TryResetGhostEvent::
# 13 "data/maps/NewMoonIsland/scripts.pory"
	setflag FLAG_HIDE_RATDUARDO_NEWMOON_ISLAND
# 14 "data/maps/NewMoonIsland/scripts.pory"
	setflag FLAG_HIDE_CHANNELER_NEWMOON_ISLAND
# 15 "data/maps/NewMoonIsland/scripts.pory"
	clearflag FLAG_NEWMOON_ISLAND_HOUSE_2_TRAP_TRIGGER
	return


NewMoonIsland_EventScript_Maushold::
# 20 "data/maps/NewMoonIsland/scripts.pory"
	msgbox NewMoonIsland_EventScript_Maushold_Text_0, MSGBOX_NPC
	end


NewMoonIsland_EventScript_Rattata::
# 26 "data/maps/NewMoonIsland/scripts.pory"
	msgbox NewMoonIsland_EventScript_Rattata_Text_0, MSGBOX_NPC
	end


NewMoonIsland_EventScript_Raticate::
# 32 "data/maps/NewMoonIsland/scripts.pory"
	msgbox NewMoonIsland_EventScript_Raticate_Text_0, MSGBOX_NPC
	end


NewMoonIsland_EventScript_Gentleman::
# 38 "data/maps/NewMoonIsland/scripts.pory"
	msgbox NewMoonIsland_EventScript_Gentleman_Text_0, MSGBOX_NPC
	end


NewMoonIsland_EventScript_HexManiac::
# 44 "data/maps/NewMoonIsland/scripts.pory"
	msgbox NewMoonIsland_EventScript_HexManiac_Text_0, MSGBOX_NPC
	end


NewMoonIsland_EventScript_Maniac::
# 49 "data/maps/NewMoonIsland/scripts.pory"
	msgbox NewMoonIsland_EventScript_Maniac_Text_0, MSGBOX_NPC
	end


NewMoonIsland_EventScript_GhostBattle::
# 55 "data/maps/NewMoonIsland/scripts.pory"
	lock
# 56 "data/maps/NewMoonIsland/scripts.pory"
	faceplayer
# 57 "data/maps/NewMoonIsland/scripts.pory"
	playbgm MUS_NONE, TRUE
# 58 "data/maps/NewMoonIsland/scripts.pory"
	msgbox NewMoonIsland_EventScript_GhostBattle_Text_0, MSGBOX_AUTOCLOSE
# 60 "data/maps/NewMoonIsland/scripts.pory"
	waitmessage
# 61 "data/maps/NewMoonIsland/scripts.pory"
	setflag FLAG_SYS_BOSS_BATTLE
# 62 "data/maps/NewMoonIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_CHANNELER_NEWMOON_ISLAND, NewMoonIsland_House2_Text_RatduardoDefeat
# 63 "data/maps/NewMoonIsland/scripts.pory"
	clearflag FLAG_SYS_BOSS_BATTLE
# 64 "data/maps/NewMoonIsland/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND
# 65 "data/maps/NewMoonIsland/scripts.pory"
	delay 8
# 66 "data/maps/NewMoonIsland/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND
# 67 "data/maps/NewMoonIsland/scripts.pory"
	delay 16
# 68 "data/maps/NewMoonIsland/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND
# 69 "data/maps/NewMoonIsland/scripts.pory"
	delay 24
# 70 "data/maps/NewMoonIsland/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND
# 71 "data/maps/NewMoonIsland/scripts.pory"
	delay 30
# 72 "data/maps/NewMoonIsland/scripts.pory"
	showobjectat VAR_LAST_TALKED, MAP_NEW_MOON_ISLAND
# 73 "data/maps/NewMoonIsland/scripts.pory"
	delay 24
# 74 "data/maps/NewMoonIsland/scripts.pory"
	removeobject 8
# 75 "data/maps/NewMoonIsland/scripts.pory"
	savebgm MUS_DUMMY
# 76 "data/maps/NewMoonIsland/scripts.pory"
	fadedefaultbgm
# 77 "data/maps/NewMoonIsland/scripts.pory"
	release
	end


NewMoonIsland_EventScript_Sign::
# 82 "data/maps/NewMoonIsland/scripts.pory"
	lock
# 83 "data/maps/NewMoonIsland/scripts.pory"
	msgbox NewMoonIsland_Text_Sign, MSGBOX_SIGN
# 84 "data/maps/NewMoonIsland/scripts.pory"
	waitmessage
# 85 "data/maps/NewMoonIsland/scripts.pory"
	release
	end


NewMoonIsland_EventScript_Maushold_Text_0:
# 20 "data/maps/NewMoonIsland/scripts.pory"
	.string "See that house over there?\n It's haunted.$"

NewMoonIsland_EventScript_Rattata_Text_0:
# 26 "data/maps/NewMoonIsland/scripts.pory"
	.string "He hasn't visited recently.\n Where? WHERE IS HE?$"

NewMoonIsland_EventScript_Raticate_Text_0:
# 32 "data/maps/NewMoonIsland/scripts.pory"
	.string "Where am I?\n Who am I?$"

NewMoonIsland_EventScript_Gentleman_Text_0:
# 38 "data/maps/NewMoonIsland/scripts.pory"
	.string "{PLAYER}.\n It's too late.$"

NewMoonIsland_EventScript_HexManiac_Text_0:
# 44 "data/maps/NewMoonIsland/scripts.pory"
	.string "What have you done, {PLAYER}?$"

NewMoonIsland_EventScript_Maniac_Text_0:
# 49 "data/maps/NewMoonIsland/scripts.pory"
	.string "He's gone? He's gone.\n WHERE DID HE GO?$"

NewMoonIsland_EventScript_GhostBattle_Text_0:
# 58 "data/maps/NewMoonIsland/scripts.pory"
	.string "{PLAYER}.\n There's no escape.$"

NewMoonIsland_Text_Sign::
# 89 "data/maps/NewMoonIsland/scripts.pory"
	.string "It's an old sign.\n There's something scrawled on it…\p Som…hing so pecu…r shou…\n make off …ith the mot…\p The rest is too worn to read.$"
