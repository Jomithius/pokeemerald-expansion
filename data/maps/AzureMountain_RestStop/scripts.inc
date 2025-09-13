AzureMountain_RestStop_MapScripts::
	.byte 0


AzureMountain_RestStop_EventScript_Poobles::
# 4 "data/maps/AzureMountain_RestStop/scripts.pory"
	lock
# 5 "data/maps/AzureMountain_RestStop/scripts.pory"
	faceplayer
# 6 "data/maps/AzureMountain_RestStop/scripts.pory"
	playmoncry SPECIES_DIGLETT_ALOLA, CRY_MODE_ENCOUNTER
# 7 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_Poobles_Text_0, MSGBOX_AUTOCLOSE
# 8 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmoncry
# 9 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmessage
# 10 "data/maps/AzureMountain_RestStop/scripts.pory"
	release
	end


AzureMountain_RestStop_EventScript_Liam::
# 15 "data/maps/AzureMountain_RestStop/scripts.pory"
	lock
# 16 "data/maps/AzureMountain_RestStop/scripts.pory"
	faceplayer
# 17 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_Liam_Text_0, MSGBOX_AUTOCLOSE
# 23 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmessage
# 24 "data/maps/AzureMountain_RestStop/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 25 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmovement 0
# 26 "data/maps/AzureMountain_RestStop/scripts.pory"
	release
	end


AzureMountain_RestStop_EventScript_Cooltrainer::
# 31 "data/maps/AzureMountain_RestStop/scripts.pory"
	lock
# 32 "data/maps/AzureMountain_RestStop/scripts.pory"
	faceplayer
# 33 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_Cooltrainer_Text_0, MSGBOX_AUTOCLOSE
# 37 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmessage
# 38 "data/maps/AzureMountain_RestStop/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 39 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmovement 0
# 40 "data/maps/AzureMountain_RestStop/scripts.pory"
	release
	end


AzureMountain_RestStop_EventScript_Woman3::
# 45 "data/maps/AzureMountain_RestStop/scripts.pory"
	lock
# 46 "data/maps/AzureMountain_RestStop/scripts.pory"
	faceplayer
# 47 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_Woman3_Text_0, MSGBOX_AUTOCLOSE
# 50 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmessage
# 51 "data/maps/AzureMountain_RestStop/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 52 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmovement 0
# 53 "data/maps/AzureMountain_RestStop/scripts.pory"
	release
	end


AzureMountain_RestStop_EventScript_BlackBelt::
# 58 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_BlackBelt_Text_0, MSGBOX_SIGN
	end


AzureMountain_RestStop_EventScript_Girl1::
# 65 "data/maps/AzureMountain_RestStop/scripts.pory"
	lock
# 66 "data/maps/AzureMountain_RestStop/scripts.pory"
	faceplayer
# 67 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_Girl1_Text_0, MSGBOX_AUTOCLOSE
# 72 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmessage
# 73 "data/maps/AzureMountain_RestStop/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 74 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmovement 0
# 75 "data/maps/AzureMountain_RestStop/scripts.pory"
	release
	end


AzureMountain_RestStop_EventScript_Man_4::
# 80 "data/maps/AzureMountain_RestStop/scripts.pory"
	lock
# 81 "data/maps/AzureMountain_RestStop/scripts.pory"
	faceplayer
# 82 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_Man_4_Text_0, MSGBOX_AUTOCLOSE
# 87 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmessage
# 88 "data/maps/AzureMountain_RestStop/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 89 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmovement 0
# 90 "data/maps/AzureMountain_RestStop/scripts.pory"
	release
	end


AzureMountain_RestStop_EventScript_WomanHeal::
# 95 "data/maps/AzureMountain_RestStop/scripts.pory"
	lock
# 96 "data/maps/AzureMountain_RestStop/scripts.pory"
	faceplayer
# 97 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_WomanHeal_Text_0, MSGBOX_AUTOCLOSE
# 99 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmessage
# 100 "data/maps/AzureMountain_RestStop/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 101 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_WomanHeal_Text_1, MSGBOX_AUTOCLOSE
# 102 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmessage
# 103 "data/maps/AzureMountain_RestStop/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 104 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmovement 0
# 105 "data/maps/AzureMountain_RestStop/scripts.pory"
	release
	end


AzureMountain_RestStop_EventScript_Stoutland::
# 110 "data/maps/AzureMountain_RestStop/scripts.pory"
	lock
# 111 "data/maps/AzureMountain_RestStop/scripts.pory"
	faceplayer
# 112 "data/maps/AzureMountain_RestStop/scripts.pory"
	playmoncry SPECIES_STOUTLAND, CRY_MODE_ENCOUNTER
# 113 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmoncry
# 114 "data/maps/AzureMountain_RestStop/scripts.pory"
	release
	end


AzureMountain_RestStop_EventScript_Poobles_Text_0:
# 7 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "POOBLES: POOOOOBS!$"

AzureMountain_RestStop_EventScript_Liam_Text_0:
# 17 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "{PLAYER}! Congratulations\n on becoming the CHAMPION.\p Ever since we heard the news, POOBLES\n and I have been up here training.\p We're gonna be way stronger the next\n time we battle!$"

AzureMountain_RestStop_EventScript_Cooltrainer_Text_0:
# 33 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "Who put all those ice blocks and\n piles of snow on the lake in a such\l a specific layout?\p They ruined the lake!$"

AzureMountain_RestStop_EventScript_Woman3_Text_0:
# 47 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "I wanted to go ice skating on the\n lake with my boyfriend, but there's so\l many ice blocks and piles of snow.$"

AzureMountain_RestStop_EventScript_BlackBelt_Text_0:
# 58 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "UWOOOOH!\p The best way to warm up is\n by activating your muscles!$"

AzureMountain_RestStop_EventScript_Girl1_Text_0:
# 67 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "This year's been crazy!\p We've never had this many\n people come through here before.\p It must be easier to get all the\n way out here now or something.$"

AzureMountain_RestStop_EventScript_Man_4_Text_0:
# 82 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "We've had this rest stop for years.\p I also occasionally go out on rescue\n missions with STOUTLAND.\p Luckily, not too many people get\n stranded on the mountain.$"

AzureMountain_RestStop_EventScript_WomanHeal_Text_0:
# 97 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "You and your POKéMON look tired.\n Come rest for awhile.$"

AzureMountain_RestStop_EventScript_WomanHeal_Text_1:
# 101 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "You can stay as long as you need!$"
