# 1 "data/maps/FallarborTown/scripts.pory"
FallarborTown_MapScripts::
# 2 "data/maps/FallarborTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
# 3 "data/maps/FallarborTown/scripts.pory"
	.byte 0
# 4 "data/maps/FallarborTown/scripts.pory"

# 5 "data/maps/FallarborTown/scripts.pory"
FallarborTown_OnTransition:
# 6 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_VISITED_FALLARBOR_TOWN
# 7 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 8 "data/maps/FallarborTown/scripts.pory"
	clearflag FLAG_CONTEST_SKETCH_CREATED
# 9 "data/maps/FallarborTown/scripts.pory"
	clearflag FLAG_SYS_DYNAMIC_LEVELS
# 10 "data/maps/FallarborTown/scripts.pory"
	end
# 11 "data/maps/FallarborTown/scripts.pory"

# 12 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertM::
# 13 "data/maps/FallarborTown/scripts.pory"
	lock
# 14 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 15 "data/maps/FallarborTown/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertMNormal
# 16 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
# 17 "data/maps/FallarborTown/scripts.pory"
	release
# 18 "data/maps/FallarborTown/scripts.pory"
	end
# 19 "data/maps/FallarborTown/scripts.pory"

# 20 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertMNormal::
# 21 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
# 22 "data/maps/FallarborTown/scripts.pory"
	release
# 23 "data/maps/FallarborTown/scripts.pory"
	end
# 24 "data/maps/FallarborTown/scripts.pory"

# 25 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Girl::
# 26 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
# 27 "data/maps/FallarborTown/scripts.pory"
	end
# 28 "data/maps/FallarborTown/scripts.pory"

# 29 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Gentleman::
# 30 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
# 31 "data/maps/FallarborTown/scripts.pory"
	end
# 32 "data/maps/FallarborTown/scripts.pory"

# 33 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Azurill::
# 34 "data/maps/FallarborTown/scripts.pory"
	lock
# 35 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 36 "data/maps/FallarborTown/scripts.pory"
	waitse
# 37 "data/maps/FallarborTown/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 38 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
# 39 "data/maps/FallarborTown/scripts.pory"
	waitmoncry
# 40 "data/maps/FallarborTown/scripts.pory"
	release
# 41 "data/maps/FallarborTown/scripts.pory"
	end
# 42 "data/maps/FallarborTown/scripts.pory"

# 43 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_BattleTentSign::
# 44 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
# 45 "data/maps/FallarborTown/scripts.pory"
	end
# 46 "data/maps/FallarborTown/scripts.pory"

# 47 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_TownSign::
# 48 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
# 49 "data/maps/FallarborTown/scripts.pory"
	end
# 50 "data/maps/FallarborTown/scripts.pory"

# 51 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_MoveTutorSign::
# 52 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
# 53 "data/maps/FallarborTown/scripts.pory"
	end
# 54 "data/maps/FallarborTown/scripts.pory"

# 55 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_ShadyCharactersCozmosHome:
# 56 "data/maps/FallarborTown/scripts.pory"
	.string "Something's happening,\n"
# 57 "data/maps/FallarborTown/scripts.pory"
	.string "and I don't like it!\p"
# 58 "data/maps/FallarborTown/scripts.pory"
	.string "I've seen shady characters wandering\n"
# 59 "data/maps/FallarborTown/scripts.pory"
	.string "in and out of PROF. COZMO's home…$"
# 60 "data/maps/FallarborTown/scripts.pory"

# 61 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_RegionKnownForMeteors:
# 62 "data/maps/FallarborTown/scripts.pory"
	.string "This region's been known for meteors\n"
# 63 "data/maps/FallarborTown/scripts.pory"
	.string "since the olden days.\p"
# 64 "data/maps/FallarborTown/scripts.pory"
	.string "They say METEOR FALLS was gouged out\n"
# 65 "data/maps/FallarborTown/scripts.pory"
	.string "by a falling meteorite long ago.$"
# 66 "data/maps/FallarborTown/scripts.pory"

# 67 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MyPreciousAzurill:
# 68 "data/maps/FallarborTown/scripts.pory"
	.string "See! Take a look!\n"
# 69 "data/maps/FallarborTown/scripts.pory"
	.string "This is my precious AZURILL!\p"
# 70 "data/maps/FallarborTown/scripts.pory"
	.string "It's slick and smooth and plushy, too!$"
# 71 "data/maps/FallarborTown/scripts.pory"

# 72 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_Azurill:
# 73 "data/maps/FallarborTown/scripts.pory"
	.string "AZURILL: Rooreelooo.$"
# 74 "data/maps/FallarborTown/scripts.pory"

# 75 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_HaveYouChallengedFlannery:
# 76 "data/maps/FallarborTown/scripts.pory"
	.string "Have you already challenged\n"
# 77 "data/maps/FallarborTown/scripts.pory"
	.string "the LEADER of LAVARIDGE GYM?\p"
# 78 "data/maps/FallarborTown/scripts.pory"
	.string "The girl's cooking is famous.\n"
# 79 "data/maps/FallarborTown/scripts.pory"
	.string "It wouldn't surprise me to see her open\l"
# 80 "data/maps/FallarborTown/scripts.pory"
	.string "a restaurant in the future instead of\l"
# 81 "data/maps/FallarborTown/scripts.pory"
	.string "of a GYM!$"
# 82 "data/maps/FallarborTown/scripts.pory"

# 83 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_BattleTentSign:
# 84 "data/maps/FallarborTown/scripts.pory"
	.string "BATTLE TENT FALLARBOR SITE\n"
# 85 "data/maps/FallarborTown/scripts.pory"
	.string "“May the Greatest Teams Gather!”$"
# 86 "data/maps/FallarborTown/scripts.pory"

# 87 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_TownSign:
# 88 "data/maps/FallarborTown/scripts.pory"
	.string "FALLARBOR TOWN\n"
# 89 "data/maps/FallarborTown/scripts.pory"
	.string "“A farm community with small gardens.”$"
# 90 "data/maps/FallarborTown/scripts.pory"

# 91 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MoveTutorSign:
# 92 "data/maps/FallarborTown/scripts.pory"
	.string "MOVE TUTOR'S HOUSE\n"
# 93 "data/maps/FallarborTown/scripts.pory"
	.string "“New moves taught to POKéMON.”$"

FallarborTown_EventScript_RatCaveShake::
# 98 "data/maps/FallarborTown/scripts.pory"
	lockall
# 99 "data/maps/FallarborTown/scripts.pory"
	playbgm MUS_NONE, FALSE
# 100 "data/maps/FallarborTown/scripts.pory"
	delay 40
# 101 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_0x8004, 2
# 102 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_0x8005, 6
# 103 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_0x8006, 8
# 104 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_0x8007, 4
# 105 "data/maps/FallarborTown/scripts.pory"
	special ShakeCamera
# 106 "data/maps/FallarborTown/scripts.pory"
	waitstate
# 107 "data/maps/FallarborTown/scripts.pory"
	delay 60
# 108 "data/maps/FallarborTown/scripts.pory"
	special ShakeCamera
# 109 "data/maps/FallarborTown/scripts.pory"
	waitstate
# 110 "data/maps/FallarborTown/scripts.pory"
	delay 60
# 111 "data/maps/FallarborTown/scripts.pory"
	fadedefaultbgm
# 112 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 5
# 113 "data/maps/FallarborTown/scripts.pory"
	releaseall
	end


FallarborTown_EventScript_Man::
# 118 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_Man, MSGBOX_NPC
	end


FallarborTown_Text_Man::
# 122 "data/maps/FallarborTown/scripts.pory"
	.string "First nightmares and tremors,\n then RATTATA infestations..\p What's happening to this town?$"
