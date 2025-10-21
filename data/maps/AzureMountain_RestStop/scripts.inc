AzureMountain_RestStop_MapScripts::
# 2 "data/maps/AzureMountain_RestStop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AzureMountain_RestStop_OnTransition
	.byte 0


AzureMountain_RestStop_OnTransition::
# 6 "data/maps/AzureMountain_RestStop/scripts.pory"
	call Common_EventScript_SetPooblesGfx
	end


AzureMountain_RestStop_EventScript_Poobles::
# 11 "data/maps/AzureMountain_RestStop/scripts.pory"
	lock
# 12 "data/maps/AzureMountain_RestStop/scripts.pory"
	faceplayer
# 13 "data/maps/AzureMountain_RestStop/scripts.pory"
	playmoncry SPECIES_DIGLETT_ALOLA, CRY_MODE_ENCOUNTER
# 14 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_Poobles_Text_0, MSGBOX_AUTOCLOSE
# 15 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmoncry
# 16 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmessage
# 17 "data/maps/AzureMountain_RestStop/scripts.pory"
	release
	end


AzureMountain_RestStop_EventScript_Liam::
# 22 "data/maps/AzureMountain_RestStop/scripts.pory"
	lock
# 23 "data/maps/AzureMountain_RestStop/scripts.pory"
	faceplayer
# 24 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_Liam_Text_0, MSGBOX_AUTOCLOSE
# 30 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmessage
# 31 "data/maps/AzureMountain_RestStop/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 32 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmovement 0
# 33 "data/maps/AzureMountain_RestStop/scripts.pory"
	release
	end


AzureMountain_RestStop_EventScript_Cooltrainer::
# 38 "data/maps/AzureMountain_RestStop/scripts.pory"
	lock
# 39 "data/maps/AzureMountain_RestStop/scripts.pory"
	faceplayer
# 40 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_Cooltrainer_Text_0, MSGBOX_AUTOCLOSE
# 44 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmessage
# 45 "data/maps/AzureMountain_RestStop/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 46 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmovement 0
# 47 "data/maps/AzureMountain_RestStop/scripts.pory"
	release
	end


AzureMountain_RestStop_EventScript_Woman3::
# 52 "data/maps/AzureMountain_RestStop/scripts.pory"
	lock
# 53 "data/maps/AzureMountain_RestStop/scripts.pory"
	faceplayer
# 54 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_Woman3_Text_0, MSGBOX_AUTOCLOSE
# 57 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmessage
# 58 "data/maps/AzureMountain_RestStop/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 59 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmovement 0
# 60 "data/maps/AzureMountain_RestStop/scripts.pory"
	release
	end


AzureMountain_RestStop_EventScript_BlackBelt::
# 65 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_BlackBelt_Text_0, MSGBOX_SIGN
	end


AzureMountain_RestStop_EventScript_Girl1::
# 72 "data/maps/AzureMountain_RestStop/scripts.pory"
	lock
# 73 "data/maps/AzureMountain_RestStop/scripts.pory"
	faceplayer
# 74 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_Girl1_Text_0, MSGBOX_AUTOCLOSE
# 79 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmessage
# 80 "data/maps/AzureMountain_RestStop/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 81 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmovement 0
# 82 "data/maps/AzureMountain_RestStop/scripts.pory"
	release
	end


AzureMountain_RestStop_EventScript_Man_4::
# 87 "data/maps/AzureMountain_RestStop/scripts.pory"
	lock
# 88 "data/maps/AzureMountain_RestStop/scripts.pory"
	faceplayer
# 89 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_Man_4_Text_0, MSGBOX_AUTOCLOSE
# 94 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmessage
# 95 "data/maps/AzureMountain_RestStop/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 96 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmovement 0
# 97 "data/maps/AzureMountain_RestStop/scripts.pory"
	release
	end


AzureMountain_RestStop_EventScript_WomanHeal::
# 102 "data/maps/AzureMountain_RestStop/scripts.pory"
	lock
# 103 "data/maps/AzureMountain_RestStop/scripts.pory"
	faceplayer
# 104 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_WomanHeal_Text_0, MSGBOX_AUTOCLOSE
# 106 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmessage
# 107 "data/maps/AzureMountain_RestStop/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 108 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_WomanHeal_Text_1, MSGBOX_AUTOCLOSE
# 109 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmessage
# 110 "data/maps/AzureMountain_RestStop/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 111 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmovement 0
# 112 "data/maps/AzureMountain_RestStop/scripts.pory"
	release
	end


AzureMountain_RestStop_EventScript_Stoutland::
# 117 "data/maps/AzureMountain_RestStop/scripts.pory"
	lock
# 118 "data/maps/AzureMountain_RestStop/scripts.pory"
	faceplayer
# 119 "data/maps/AzureMountain_RestStop/scripts.pory"
	playmoncry SPECIES_STOUTLAND, CRY_MODE_ENCOUNTER
# 120 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmoncry
# 121 "data/maps/AzureMountain_RestStop/scripts.pory"
	release
	end


AzureMountain_RestStop_EventScript_Poobles_Text_0:
# 14 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "POOBLES: POOOOOBS!$"

AzureMountain_RestStop_EventScript_Liam_Text_0:
# 24 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "{PLAYER}! Congratulations on becoming\n the CHAMPION!\p Ever since we heard the news, POOBLES\n and I have been up here training.\p We're gonna be way stronger the next\n time we battle!$"

AzureMountain_RestStop_EventScript_Cooltrainer_Text_0:
# 40 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "Who put all those ice blocks and\n piles of snow on the lake in a such\l a specific layout?\p They ruined the lake!$"

AzureMountain_RestStop_EventScript_Woman3_Text_0:
# 54 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "I wanted to go ice skating on the\n lake with my boyfriend, but there's so\l many ice blocks and piles of snow.$"

AzureMountain_RestStop_EventScript_BlackBelt_Text_0:
# 65 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "UWOOOOH!\p The best way to warm up is\n by activating your muscles!$"

AzureMountain_RestStop_EventScript_Girl1_Text_0:
# 74 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "This year's been crazy!\p We've never had this many\n people come through here before.\p It must be easier to get all the\n way out here now or something.$"

AzureMountain_RestStop_EventScript_Man_4_Text_0:
# 89 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "We've had this rest stop for years.\p I also occasionally go out on rescue\n missions with STOUTLAND.\p Luckily, not too many people get\n stranded on the mountain.$"

AzureMountain_RestStop_EventScript_WomanHeal_Text_0:
# 104 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "You and your POKéMON look tired.\n Come rest for awhile.$"

AzureMountain_RestStop_EventScript_WomanHeal_Text_1:
# 108 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "You can stay as long as you need!$"
