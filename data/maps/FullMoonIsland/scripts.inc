FullMoonIsland_MapScripts::
	.byte 0


FullMoonIsland_EventScript_CresseliaHelp::
# 4 "data/maps/FullMoonIsland/scripts.pory"
	lockall
# 5 "data/maps/FullMoonIsland/scripts.pory"
	msgbox FullMoonIsland_EventScript_CresseliaHelp_Text_0, MSGBOX_AUTOCLOSE
# 6 "data/maps/FullMoonIsland/scripts.pory"
	waitmessage
# 7 "data/maps/FullMoonIsland/scripts.pory"
	releaseall
# 8 "data/maps/FullMoonIsland/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 10
# 9 "data/maps/FullMoonIsland/scripts.pory"
	clearflag FLAG_HIDE_RATDUARDO_FULLMOON
	end


FullMoonIsland_EventScript_CresseliaHelp_Text_0:
# 5 "data/maps/FullMoonIsland/scripts.pory"
	.string "???: Please!\n You must hurry!$"
