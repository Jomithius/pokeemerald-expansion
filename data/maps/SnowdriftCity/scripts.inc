SnowdriftCity_MapScripts::
# 2 "data/maps/SnowdriftCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SnowdriftCity_OnTransition
	.byte 0


SnowdriftCity_OnTransition::
# 6 "data/maps/SnowdriftCity/scripts.pory"
	setflag FLAG_SYS_DYNAMIC_LEVELS
	end


SnowdriftCity_EventScript_Hiker::
# 11 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_Hiker_Text_0, MSGBOX_SIGN
	end


SnowdriftCity_EventScript_Man_4::
# 17 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_Man_4_Text_0, MSGBOX_NPC
	end


SnowdriftCity_EventScript_Man::
# 25 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_Man_Text_0, MSGBOX_NPC
	end


SnowdriftCity_EventScript_Sign::
# 31 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


SnowdriftCity_EventScript_SignToAzureMountain::
# 37 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_SignToAzureMountain_Text_0, MSGBOX_SIGN
	end


SnowdriftCity_EventScript_Calyrex::
# 42 "data/maps/SnowdriftCity/scripts.pory"
	lock
# 43 "data/maps/SnowdriftCity/scripts.pory"
	goto_if_set FLAG_SYS_TALKED_TO_CALYREX, SnowdriftCity_EventScript_CheckSpectierOrGlastrier
# 44 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_Calyrex_Text_0, MSGBOX_DEFAULT
# 45 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 46 "data/maps/SnowdriftCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, SnowdriftCity_EventScript_Calyrex_Text_1, SnowdriftCity_EventScript_Calyrex_Text_2
# 47 "data/maps/SnowdriftCity/scripts.pory"
	playse SE_PIN
# 48 "data/maps/SnowdriftCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 49 "data/maps/SnowdriftCity/scripts.pory"
	waitmovement 0
# 50 "data/maps/SnowdriftCity/scripts.pory"
	waitse
# 51 "data/maps/SnowdriftCity/scripts.pory"
	faceplayer
# 52 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_Calyrex_Text_3, MSGBOX_DEFAULT
# 53 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 54 "data/maps/SnowdriftCity/scripts.pory"
	setflag FLAG_SYS_TALKED_TO_CALYREX
# 55 "data/maps/SnowdriftCity/scripts.pory"
	goto SnowdriftCity_EventScript_CheckSpectierOrGlastrier
	end


SnowdriftCity_EventScript_CheckSpectierOrGlastrier::
# 60 "data/maps/SnowdriftCity/scripts.pory"
	lock
# 61 "data/maps/SnowdriftCity/scripts.pory"
	faceplayer
# 62 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_CheckSpectierOrGlastrier_Text_0, MSGBOX_AUTOCLOSE
# 74 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 75 "data/maps/SnowdriftCity/scripts.pory"
	special IsLeadMonSpectrierOrGlastrier
# 76 "data/maps/SnowdriftCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SnowdriftCity_EventScript_ReceiveCalyrex
# 77 "data/maps/SnowdriftCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceDown
# 78 "data/maps/SnowdriftCity/scripts.pory"
	waitmovement 0
# 79 "data/maps/SnowdriftCity/scripts.pory"
	release
	end


SnowdriftCity_EventScript_ReceiveCalyrex::
# 84 "data/maps/SnowdriftCity/scripts.pory"
	lock
# 85 "data/maps/SnowdriftCity/scripts.pory"
	playse SE_PIN
# 86 "data/maps/SnowdriftCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 87 "data/maps/SnowdriftCity/scripts.pory"
	waitmovement 0
# 88 "data/maps/SnowdriftCity/scripts.pory"
	waitse
# 89 "data/maps/SnowdriftCity/scripts.pory"
	fadenewbgm MUS_END
# 90 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_ReceiveCalyrex_Text_0, MSGBOX_DEFAULT
# 97 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 98 "data/maps/SnowdriftCity/scripts.pory"
	giveitem ITEM_REINS_OF_UNITY
# 99 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 100 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_ReceiveCalyrex_Text_1, MSGBOX_AUTOCLOSE
# 103 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 104 "data/maps/SnowdriftCity/scripts.pory"
	givemon SPECIES_CALYREX, 75
# 105 "data/maps/SnowdriftCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq SnowdriftCity_EventScript_ReceiveCalyrex_2
# 115 "data/maps/SnowdriftCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq SnowdriftCity_EventScript_ReceiveCalyrex_3
# 126 "data/maps/SnowdriftCity/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
SnowdriftCity_EventScript_ReceiveCalyrex_1:
# 128 "data/maps/SnowdriftCity/scripts.pory"
	fadedefaultbgm
# 129 "data/maps/SnowdriftCity/scripts.pory"
	release
	end

SnowdriftCity_EventScript_ReceiveCalyrex_2:
# 106 "data/maps/SnowdriftCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 107 "data/maps/SnowdriftCity/scripts.pory"
	removeobject 9
# 108 "data/maps/SnowdriftCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 109 "data/maps/SnowdriftCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 110 "data/maps/SnowdriftCity/scripts.pory"
	waitfanfare
# 111 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_ReceiveCalyrex_Text_2, MSGBOX_AUTOCLOSE
# 112 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 113 "data/maps/SnowdriftCity/scripts.pory"
	setflag FLAG_DEFEATED_CALYREX
	goto SnowdriftCity_EventScript_ReceiveCalyrex_1

SnowdriftCity_EventScript_ReceiveCalyrex_3:
# 116 "data/maps/SnowdriftCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 117 "data/maps/SnowdriftCity/scripts.pory"
	removeobject 9
# 118 "data/maps/SnowdriftCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 119 "data/maps/SnowdriftCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 120 "data/maps/SnowdriftCity/scripts.pory"
	waitfanfare
# 121 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_ReceiveCalyrex_Text_3, MSGBOX_AUTOCLOSE
# 122 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 123 "data/maps/SnowdriftCity/scripts.pory"
	setflag FLAG_DEFEATED_CALYREX
	goto SnowdriftCity_EventScript_ReceiveCalyrex_1


SnowdriftCity_EventScript_Hiker_Text_0:
# 11 "data/maps/SnowdriftCity/scripts.pory"
	.string "Huff… Huff…\n I… I made it!$"

SnowdriftCity_EventScript_Man_4_Text_0:
# 17 "data/maps/SnowdriftCity/scripts.pory"
	.string "There's a legend that a POKéMON\n living deep in the mountain is\l the source of the geothermal energy.\p I wonder if that's really true.$"

SnowdriftCity_EventScript_Man_Text_0:
# 25 "data/maps/SnowdriftCity/scripts.pory"
	.string "Who would've thought there would\n be hot springs up here?$"

SnowdriftCity_EventScript_Sign_Text_0:
# 31 "data/maps/SnowdriftCity/scripts.pory"
	.string "SNOWDRIFT CITY\p “A warm rest at HOENN's highest peak!”$"

SnowdriftCity_EventScript_SignToAzureMountain_Text_0:
# 37 "data/maps/SnowdriftCity/scripts.pory"
	.string "{LEFT_ARROW} AZURE MOUNTAIN$"

SnowdriftCity_EventScript_Calyrex_Text_0:
# 44 "data/maps/SnowdriftCity/scripts.pory"
	.string "…$"

SnowdriftCity_EventScript_Calyrex_Text_1:
# 46 "data/maps/SnowdriftCity/scripts.pory"
	.string "Uh… Hello?$"

SnowdriftCity_EventScript_Calyrex_Text_2:
# 46 "data/maps/SnowdriftCity/scripts.pory"
	.string "Are you okay?$"

SnowdriftCity_EventScript_Calyrex_Text_3:
# 52 "data/maps/SnowdriftCity/scripts.pory"
	.string "You can hear me?!$"

SnowdriftCity_EventScript_CheckSpectierOrGlastrier_Text_0:
# 62 "data/maps/SnowdriftCity/scripts.pory"
	.string "My name is CALYREX.\n Long ago, I was a ruler of a land far,\l far away from this place.\p Since my fall from grace, I've spent\n my days searching for my trusted\l partners: SPECTRIER and GLASTRIER.\l Still, my search has been in vain.\p Please, adventurer.\p If you come across either of my\n old partners, could you bring\l them here?\p I'll give you a reward if you do.$"

SnowdriftCity_EventScript_ReceiveCalyrex_Text_0:
# 90 "data/maps/SnowdriftCity/scripts.pory"
	.string "Old friend…\n It's good to see you again.\p Thank you, brave one.\n May I ask for your name?\p … … … …\p {PLAYER}.\n  As promised, I will give you a reward.$"

SnowdriftCity_EventScript_ReceiveCalyrex_Text_1:
# 100 "data/maps/SnowdriftCity/scripts.pory"
	.string "Also… I humbly ask you.\p Allow this fallen king to once again\n fight alongside his old friend.$"

SnowdriftCity_EventScript_ReceiveCalyrex_Text_2:
# 111 "data/maps/SnowdriftCity/scripts.pory"
	.string "CALYREX joined the party!$"

SnowdriftCity_EventScript_ReceiveCalyrex_Text_3:
# 121 "data/maps/SnowdriftCity/scripts.pory"
	.string "CALYREX was sent to the PC!$"
