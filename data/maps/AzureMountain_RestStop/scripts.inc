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
	waitmessage
# 9 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmoncry
# 10 "data/maps/AzureMountain_RestStop/scripts.pory"
	release
	end


AzureMountain_RestStop_EventScript_Liam::
# 15 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_Liam_Text_0, MSGBOX_NPC
	end


AzureMountain_RestStop_EventScript_Cooltrainer::
# 25 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_Cooltrainer_Text_0, MSGBOX_NPC
	end


AzureMountain_RestStop_EventScript_Woman3::
# 33 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_Woman3_Text_0, MSGBOX_NPC
	end


AzureMountain_RestStop_EventScript_BlackBelt::
# 40 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_BlackBelt_Text_0, MSGBOX_SIGN
	end


AzureMountain_RestStop_EventScript_Girl1::
# 47 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_Girl1_Text_0, MSGBOX_NPC
	end


AzureMountain_RestStop_EventScript_Man_4::
# 56 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_Man_4_Text_0, MSGBOX_NPC
	end


AzureMountain_RestStop_EventScript_WomanHeal::
# 65 "data/maps/AzureMountain_RestStop/scripts.pory"
	lock
# 66 "data/maps/AzureMountain_RestStop/scripts.pory"
	faceplayer
# 67 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_WomanHeal_Text_0, MSGBOX_AUTOCLOSE
# 69 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmessage
# 70 "data/maps/AzureMountain_RestStop/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 71 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_WomanHeal_Text_1, MSGBOX_AUTOCLOSE
# 72 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmessage
# 73 "data/maps/AzureMountain_RestStop/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 74 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmovement 0
# 75 "data/maps/AzureMountain_RestStop/scripts.pory"
	release
	end


AzureMountain_RestStop_EventScript_Stoutland::
# 80 "data/maps/AzureMountain_RestStop/scripts.pory"
	lock
# 81 "data/maps/AzureMountain_RestStop/scripts.pory"
	faceplayer
# 82 "data/maps/AzureMountain_RestStop/scripts.pory"
	playmoncry SPECIES_STOUTLAND, CRY_MODE_ENCOUNTER
# 83 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmoncry
# 84 "data/maps/AzureMountain_RestStop/scripts.pory"
	release
	end


AzureMountain_RestStop_EventScript_Poobles_Text_0:
# 7 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "POOBLES: POOOOOBS!$"

AzureMountain_RestStop_EventScript_Liam_Text_0:
# 15 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "{PLAYER}!\n Congratulations on becoming CHAMPION.\p Ever since we heard the news, POOBLES\n and I have been up here training.\p We're gonna be way stronger the next\n time we battle!$"

AzureMountain_RestStop_EventScript_Cooltrainer_Text_0:
# 25 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "Who put all those ice blocks and\n piles of snow on the lake in a such\l a specific layout?\p They ruined the lake!$"

AzureMountain_RestStop_EventScript_Woman3_Text_0:
# 33 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "I wanted to go ice skating on the\n lake with my boyfriend, but there's so\l many ice blocks and piles of snow.$"

AzureMountain_RestStop_EventScript_BlackBelt_Text_0:
# 40 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "UWOOOOH!\p The best way to warm up is\n by activating your muscles!$"

AzureMountain_RestStop_EventScript_Girl1_Text_0:
# 47 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "This year's been crazy!\p We've never had this many\n people come through here before.\p It must be easier to get all the\n way out here now or something.$"

AzureMountain_RestStop_EventScript_Man_4_Text_0:
# 56 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "We've had this rest stop for years.\p I also occasionally go out on rescue\n missions with STOUTLAND.\p Luckily, not too many people get\n stranded on the mountain.$"

AzureMountain_RestStop_EventScript_WomanHeal_Text_0:
# 67 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "You and your POKéMON look tired.\n Come rest for awhile.$"

AzureMountain_RestStop_EventScript_WomanHeal_Text_1:
# 71 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "You can stay as long as you need!$"
