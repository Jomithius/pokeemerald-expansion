AzureMountain_RestStop_MapScripts::
	.byte 0


AzureMountain_RestStop_EventScript_Hiker::
# 4 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_Hiker_Text_0, MSGBOX_NPC
	end


AzureMountain_RestStop_EventScript_Cooltrainer::
# 10 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_Cooltrainer_Text_0, MSGBOX_NPC
	end


AzureMountain_RestStop_EventScript_Woman3::
# 18 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_Woman3_Text_0, MSGBOX_NPC
	end


AzureMountain_RestStop_EventScript_BlackBelt::
# 25 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_BlackBelt_Text_0, MSGBOX_SIGN
	end


AzureMountain_RestStop_EventScript_Girl1::
# 32 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_Girl1_Text_0, MSGBOX_NPC
	end


AzureMountain_RestStop_EventScript_Man_4::
# 41 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_Man_4_Text_0, MSGBOX_NPC
	end


AzureMountain_RestStop_EventScript_WomanHeal::
# 50 "data/maps/AzureMountain_RestStop/scripts.pory"
	lock
# 51 "data/maps/AzureMountain_RestStop/scripts.pory"
	faceplayer
# 52 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_WomanHeal_Text_0, MSGBOX_AUTOCLOSE
# 54 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmessage
# 55 "data/maps/AzureMountain_RestStop/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 56 "data/maps/AzureMountain_RestStop/scripts.pory"
	msgbox AzureMountain_RestStop_EventScript_WomanHeal_Text_1, MSGBOX_AUTOCLOSE
# 57 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmessage
# 58 "data/maps/AzureMountain_RestStop/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 59 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmovement 0
# 60 "data/maps/AzureMountain_RestStop/scripts.pory"
	release
	end


AzureMountain_RestStop_EventScript_Stoutland::
# 65 "data/maps/AzureMountain_RestStop/scripts.pory"
	lock
# 66 "data/maps/AzureMountain_RestStop/scripts.pory"
	faceplayer
# 67 "data/maps/AzureMountain_RestStop/scripts.pory"
	playmoncry SPECIES_STOUTLAND, CRY_MODE_ENCOUNTER
# 68 "data/maps/AzureMountain_RestStop/scripts.pory"
	waitmoncry
# 69 "data/maps/AzureMountain_RestStop/scripts.pory"
	release
	end


AzureMountain_RestStop_EventScript_Hiker_Text_0:
# 4 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "It's so nice of this family to\n let us warm up in here.$"

AzureMountain_RestStop_EventScript_Cooltrainer_Text_0:
# 10 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "Who put all those ice blocks and\n piles of snow on the lake in a such\l a specific layout?\p They ruined the lake!$"

AzureMountain_RestStop_EventScript_Woman3_Text_0:
# 18 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "I wanted to go ice skating on the\n lake with my boyfriend, but there's so\l many ice blocks and piles of snow.$"

AzureMountain_RestStop_EventScript_BlackBelt_Text_0:
# 25 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "UWOOOOH!\p The best way to warm up is\n by activating your muscles!$"

AzureMountain_RestStop_EventScript_Girl1_Text_0:
# 32 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "This year's been crazy!\p We've never had this many\n people come through here before.\p It must be easier to get all the\n way out here now or something.$"

AzureMountain_RestStop_EventScript_Man_4_Text_0:
# 41 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "We've had this rest stop for years.\p I also occasionally go out on rescue\n missions with STOUTLAND.\p Luckily, not too many people get\n stranded on the mountain.$"

AzureMountain_RestStop_EventScript_WomanHeal_Text_0:
# 52 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "You and your POKéMON look tired.\n Come rest for awhile.$"

AzureMountain_RestStop_EventScript_WomanHeal_Text_1:
# 56 "data/maps/AzureMountain_RestStop/scripts.pory"
	.string "You can stay as long as you need!$"
