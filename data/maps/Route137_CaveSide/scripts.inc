Route137_CaveSide_MapScripts::
# 2 "data/maps/Route137_CaveSide/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route137_CaveSide_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route137_CaveSide_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 2 "data/maps/Route137_CaveSide/scripts.pory"
	map_script_2 VAR_RAT_CAVE_STATE, 8, Route137_CaveSide_EventScript_GoToFullMoonIsland
	.2byte 0


Route137_CaveSide_EventScript_GoToFullMoonIsland::
# 7 "data/maps/Route137_CaveSide/scripts.pory"
	lockall
# 8 "data/maps/Route137_CaveSide/scripts.pory"
	fadenewbgm MUS_ETERNA_FOREST
# 9 "data/maps/Route137_CaveSide/scripts.pory"
	msgbox Route137_CaveSide_Text_Cresselia, MSGBOX_AUTOCLOSE
# 10 "data/maps/Route137_CaveSide/scripts.pory"
	waitmessage
# 11 "data/maps/Route137_CaveSide/scripts.pory"
	fadedefaultbgm
# 12 "data/maps/Route137_CaveSide/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 9
# 13 "data/maps/Route137_CaveSide/scripts.pory"
	releaseall
	end


Route137_CaveSide_Text_Cresselia::
# 17 "data/maps/Route137_CaveSide/scripts.pory"
	.string "…A voice called out from somehere…\p ???: Please, stranger, you must help me!\n A strange man has come to my island!\l From where you are, head east!\p Following the currents will bring you\n to the island I'm on!\p I'm not sure how much longer I can\n defend myself…$"
