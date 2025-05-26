# 1 "data/maps/VerdanturfTown/scripts.pory"
.set LOCALID_TWIN, 2
# 2 "data/maps/VerdanturfTown/scripts.pory"

# 3 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_MapScripts::
# 4 "data/maps/VerdanturfTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_OnTransition
# 5 "data/maps/VerdanturfTown/scripts.pory"
	.byte 0
# 6 "data/maps/VerdanturfTown/scripts.pory"

# 7 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_OnTransition:
# 8 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_VISITED_VERDANTURF_TOWN
# 9 "data/maps/VerdanturfTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 10 "data/maps/VerdanturfTown/scripts.pory"
	end
# 11 "data/maps/VerdanturfTown/scripts.pory"

# 12 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Twin::
# 13 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 14 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 15 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_TwinTunnelOpen
# 16 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManTryingToDigTunnel, MSGBOX_DEFAULT
# 17 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 18 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 19 "data/maps/VerdanturfTown/scripts.pory"
	release
# 20 "data/maps/VerdanturfTown/scripts.pory"
	end
# 21 "data/maps/VerdanturfTown/scripts.pory"

# 22 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_TwinTunnelOpen::
# 23 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManDugTunnelForLove, MSGBOX_DEFAULT
# 24 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 25 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 26 "data/maps/VerdanturfTown/scripts.pory"
	release
# 27 "data/maps/VerdanturfTown/scripts.pory"
	end
# 28 "data/maps/VerdanturfTown/scripts.pory"

# 29 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Man::
# 30 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_AirCleanHere, MSGBOX_NPC
# 31 "data/maps/VerdanturfTown/scripts.pory"
	end
# 32 "data/maps/VerdanturfTown/scripts.pory"

# 33 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Camper::
# 34 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_MakeBattleTentDebut, MSGBOX_NPC
# 35 "data/maps/VerdanturfTown/scripts.pory"
	end
# 36 "data/maps/VerdanturfTown/scripts.pory"

# 37 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Boy::
# 38 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 39 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 40 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_BoyTunnelOpen
# 41 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_GuyTryingToBustThroughCave, MSGBOX_DEFAULT
# 42 "data/maps/VerdanturfTown/scripts.pory"
	release
# 43 "data/maps/VerdanturfTown/scripts.pory"
	end
# 44 "data/maps/VerdanturfTown/scripts.pory"

# 45 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_BoyTunnelOpen::
# 46 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_EasyToGetToRustboroNow, MSGBOX_DEFAULT
# 47 "data/maps/VerdanturfTown/scripts.pory"
	release
# 48 "data/maps/VerdanturfTown/scripts.pory"
	end
# 49 "data/maps/VerdanturfTown/scripts.pory"

# 50 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_TownSign::
# 51 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_TownSign, MSGBOX_SIGN
# 52 "data/maps/VerdanturfTown/scripts.pory"
	end
# 53 "data/maps/VerdanturfTown/scripts.pory"

# 54 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_WandasHouseSign::
# 55 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_WandasHouse, MSGBOX_SIGN
# 56 "data/maps/VerdanturfTown/scripts.pory"
	end
# 57 "data/maps/VerdanturfTown/scripts.pory"

# 58 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_BattleTentSign::
# 59 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_BattleTentSign, MSGBOX_SIGN
# 60 "data/maps/VerdanturfTown/scripts.pory"
	end
# 61 "data/maps/VerdanturfTown/scripts.pory"

# 62 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_RusturfTunnelSign::
# 63 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_RusturfTunnelSign, MSGBOX_SIGN
# 64 "data/maps/VerdanturfTown/scripts.pory"
	end
# 65 "data/maps/VerdanturfTown/scripts.pory"

# 66 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_ManTryingToDigTunnel:
# 67 "data/maps/VerdanturfTown/scripts.pory"
	.string "My papa told me.\p"
# 68 "data/maps/VerdanturfTown/scripts.pory"
	.string "He says this tunnel is full of\n"
# 69 "data/maps/VerdanturfTown/scripts.pory"
	.string "timid POKéMON.\p"
# 70 "data/maps/VerdanturfTown/scripts.pory"
	.string "They get all scared of loud noise and\n"
# 71 "data/maps/VerdanturfTown/scripts.pory"
	.string "make a big uproar.\p"
# 72 "data/maps/VerdanturfTown/scripts.pory"
	.string "So they had to stop the big tunnel\n"
# 73 "data/maps/VerdanturfTown/scripts.pory"
	.string "project.\p"
# 74 "data/maps/VerdanturfTown/scripts.pory"
	.string "But there's one man. He's trying to dig\n"
# 75 "data/maps/VerdanturfTown/scripts.pory"
	.string "the tunnel by himself!$"
# 76 "data/maps/VerdanturfTown/scripts.pory"

# 77 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_ManDugTunnelForLove:
# 78 "data/maps/VerdanturfTown/scripts.pory"
	.string "There was a man who dug a tunnel for\n"
# 79 "data/maps/VerdanturfTown/scripts.pory"
	.string "a lady he loved.\p"
# 80 "data/maps/VerdanturfTown/scripts.pory"
	.string "I don't really get it, but hey!$"
# 81 "data/maps/VerdanturfTown/scripts.pory"

# 82 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_AirCleanHere:
# 83 "data/maps/VerdanturfTown/scripts.pory"
	.string "The way the winds blow, volcanic ash\n"
# 84 "data/maps/VerdanturfTown/scripts.pory"
	.string "is never blown in this direction.\p"
# 85 "data/maps/VerdanturfTown/scripts.pory"
	.string "The air is clean and delicious here.\n"
# 86 "data/maps/VerdanturfTown/scripts.pory"
	.string "Living here should do wonders for even\l"
# 87 "data/maps/VerdanturfTown/scripts.pory"
	.string "frail and sickly people.$"
# 88 "data/maps/VerdanturfTown/scripts.pory"

# 89 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_MakeBattleTentDebut:
# 90 "data/maps/VerdanturfTown/scripts.pory"
	.string "My POKéMON and I, we've been riding\n"
# 91 "data/maps/VerdanturfTown/scripts.pory"
	.string "a hot winning streak.\p"
# 92 "data/maps/VerdanturfTown/scripts.pory"
	.string "So I decided to make my BATTLE TENT\n"
# 93 "data/maps/VerdanturfTown/scripts.pory"
	.string "debut in this town.$"
# 94 "data/maps/VerdanturfTown/scripts.pory"

# 95 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_GuyTryingToBustThroughCave:
# 96 "data/maps/VerdanturfTown/scripts.pory"
	.string "Did you see the cave next to the\n"
# 97 "data/maps/VerdanturfTown/scripts.pory"
	.string "POKéMON MART?\p"
# 98 "data/maps/VerdanturfTown/scripts.pory"
	.string "There's a guy in there who's trying to\n"
# 99 "data/maps/VerdanturfTown/scripts.pory"
	.string "bust up boulders so he can bust out\l"
# 100 "data/maps/VerdanturfTown/scripts.pory"
	.string "through to the other side.\p"
# 101 "data/maps/VerdanturfTown/scripts.pory"
	.string "It'd be great if we could go through…\n"
# 102 "data/maps/VerdanturfTown/scripts.pory"
	.string "It'll make it easy to visit RUSTBORO.$"
# 103 "data/maps/VerdanturfTown/scripts.pory"

# 104 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_EasyToGetToRustboroNow:
# 105 "data/maps/VerdanturfTown/scripts.pory"
	.string "That cave next to the POKéMON MART\n"
# 106 "data/maps/VerdanturfTown/scripts.pory"
	.string "is now a tunnel to the other side.\p"
# 107 "data/maps/VerdanturfTown/scripts.pory"
	.string "It's great--it's easy to go shop for\n"
# 108 "data/maps/VerdanturfTown/scripts.pory"
	.string "new DEVON products in RUSTBORO now.$"
# 109 "data/maps/VerdanturfTown/scripts.pory"

# 110 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_TownSign:
# 111 "data/maps/VerdanturfTown/scripts.pory"
	.string "VERDANTURF TOWN\p"
# 112 "data/maps/VerdanturfTown/scripts.pory"
	.string "“The windswept highlands with the\n"
# 113 "data/maps/VerdanturfTown/scripts.pory"
	.string "sweet fragrance of grass.”$"
# 114 "data/maps/VerdanturfTown/scripts.pory"

# 115 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_WandasHouse:
# 116 "data/maps/VerdanturfTown/scripts.pory"
	.string "WANDA'S HOUSE$"
# 117 "data/maps/VerdanturfTown/scripts.pory"

# 118 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_BattleTentSign:
# 119 "data/maps/VerdanturfTown/scripts.pory"
	.string "BATTLE TENT VERDANTURF SITE\n"
# 120 "data/maps/VerdanturfTown/scripts.pory"
	.string "“Feast Your Eyes on Battles!”$"
# 121 "data/maps/VerdanturfTown/scripts.pory"

# 122 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_RusturfTunnelSign:
# 123 "data/maps/VerdanturfTown/scripts.pory"
	.string "RUSTURF TUNNEL\n"
# 124 "data/maps/VerdanturfTown/scripts.pory"
	.string "“Linking RUSTBORO and VERDANTURF\p"
# 125 "data/maps/VerdanturfTown/scripts.pory"
	.string "“The tunnel project has been\n"
# 126 "data/maps/VerdanturfTown/scripts.pory"
	.string "canceled.”$"

VerdanturfTown_EventScript_SaveBikerMusic::
# 132 "data/maps/VerdanturfTown/scripts.pory"
	playbgm MUS_RG_SILPH, TRUE
	return

