SnowdriftCity_MapScripts::
	.byte 0


SnowdriftCity_EventScript_Hiker::
# 4 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_Hiker_Text_0, MSGBOX_SIGN
	end


SnowdriftCity_EventScript_Man_4::
# 10 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_Man_4_Text_0, MSGBOX_NPC
	end


SnowdriftCity_EventScript_Man::
# 16 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_Man_Text_0, MSGBOX_NPC
	end


SnowdriftCity_EventScript_Sign::
# 22 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


SnowdriftCity_EventScript_SignToAzureMountain::
# 28 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_SignToAzureMountain_Text_0, MSGBOX_SIGN
	end


SnowdriftCity_EventScript_Calyrex::
# 33 "data/maps/SnowdriftCity/scripts.pory"
	lock
# 34 "data/maps/SnowdriftCity/scripts.pory"
	goto_if_set FLAG_SYS_TALKED_TO_CALYREX, SnowdriftCity_EventScript_CheckSpectierOrGlastrier
# 35 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_Calyrex_Text_0, MSGBOX_DEFAULT
# 36 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 37 "data/maps/SnowdriftCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, SnowdriftCity_EventScript_Calyrex_Text_1, SnowdriftCity_EventScript_Calyrex_Text_2
# 38 "data/maps/SnowdriftCity/scripts.pory"
	playse SE_PIN
# 39 "data/maps/SnowdriftCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 40 "data/maps/SnowdriftCity/scripts.pory"
	waitmovement 0
# 41 "data/maps/SnowdriftCity/scripts.pory"
	waitse
# 42 "data/maps/SnowdriftCity/scripts.pory"
	faceplayer
# 43 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_Calyrex_Text_3, MSGBOX_DEFAULT
# 44 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 45 "data/maps/SnowdriftCity/scripts.pory"
	setflag FLAG_SYS_TALKED_TO_CALYREX
# 46 "data/maps/SnowdriftCity/scripts.pory"
	goto SnowdriftCity_EventScript_CheckSpectierOrGlastrier
	end


SnowdriftCity_EventScript_CheckSpectierOrGlastrier::
# 51 "data/maps/SnowdriftCity/scripts.pory"
	lock
# 52 "data/maps/SnowdriftCity/scripts.pory"
	faceplayer
# 53 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_CheckSpectierOrGlastrier_Text_0, MSGBOX_AUTOCLOSE
# 65 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 66 "data/maps/SnowdriftCity/scripts.pory"
	special IsLeadMonSpectrierOrGlastrier
# 67 "data/maps/SnowdriftCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SnowdriftCity_EventScript_ReceiveCalyrex
# 68 "data/maps/SnowdriftCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceDown
# 69 "data/maps/SnowdriftCity/scripts.pory"
	waitmovement 0
# 70 "data/maps/SnowdriftCity/scripts.pory"
	release
	end


SnowdriftCity_EventScript_ReceiveCalyrex::
# 75 "data/maps/SnowdriftCity/scripts.pory"
	lock
# 76 "data/maps/SnowdriftCity/scripts.pory"
	playse SE_PIN
# 77 "data/maps/SnowdriftCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 78 "data/maps/SnowdriftCity/scripts.pory"
	waitmovement 0
# 79 "data/maps/SnowdriftCity/scripts.pory"
	waitse
# 80 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_ReceiveCalyrex_Text_0, MSGBOX_DEFAULT
# 87 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 88 "data/maps/SnowdriftCity/scripts.pory"
	giveitem ITEM_REINS_OF_UNITY
# 89 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 90 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_ReceiveCalyrex_Text_1, MSGBOX_AUTOCLOSE
# 93 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 94 "data/maps/SnowdriftCity/scripts.pory"
	givemon SPECIES_CALYREX, 75
# 95 "data/maps/SnowdriftCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq SnowdriftCity_EventScript_ReceiveCalyrex_2
# 105 "data/maps/SnowdriftCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq SnowdriftCity_EventScript_ReceiveCalyrex_3
# 116 "data/maps/SnowdriftCity/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
SnowdriftCity_EventScript_ReceiveCalyrex_1:
# 118 "data/maps/SnowdriftCity/scripts.pory"
	release
	end

SnowdriftCity_EventScript_ReceiveCalyrex_2:
# 96 "data/maps/SnowdriftCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 97 "data/maps/SnowdriftCity/scripts.pory"
	removeobject 9
# 98 "data/maps/SnowdriftCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 99 "data/maps/SnowdriftCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 100 "data/maps/SnowdriftCity/scripts.pory"
	waitfanfare
# 101 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_ReceiveCalyrex_Text_2, MSGBOX_AUTOCLOSE
# 102 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 103 "data/maps/SnowdriftCity/scripts.pory"
	setflag FLAG_DEFEATED_CALYREX
	goto SnowdriftCity_EventScript_ReceiveCalyrex_1

SnowdriftCity_EventScript_ReceiveCalyrex_3:
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
	msgbox SnowdriftCity_EventScript_ReceiveCalyrex_Text_3, MSGBOX_AUTOCLOSE
# 112 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 113 "data/maps/SnowdriftCity/scripts.pory"
	setflag FLAG_DEFEATED_CALYREX
	goto SnowdriftCity_EventScript_ReceiveCalyrex_1


SnowdriftCity_EventScript_Hiker_Text_0:
# 4 "data/maps/SnowdriftCity/scripts.pory"
	.string "Huff… Huff…\n I… I made it!$"

SnowdriftCity_EventScript_Man_4_Text_0:
# 10 "data/maps/SnowdriftCity/scripts.pory"
	.string "Wow.\n It's warmer than I thought up here.$"

SnowdriftCity_EventScript_Man_Text_0:
# 16 "data/maps/SnowdriftCity/scripts.pory"
	.string "Who would've thought there would\n be hot springs up here?$"

SnowdriftCity_EventScript_Sign_Text_0:
# 22 "data/maps/SnowdriftCity/scripts.pory"
	.string "SNOWDRIFT CITY\p “A warm rest at HOENN's highest peak!”$"

SnowdriftCity_EventScript_SignToAzureMountain_Text_0:
# 28 "data/maps/SnowdriftCity/scripts.pory"
	.string "{LEFT_ARROW} AZURE MOUNTAIN$"

SnowdriftCity_EventScript_Calyrex_Text_0:
# 35 "data/maps/SnowdriftCity/scripts.pory"
	.string "…$"

SnowdriftCity_EventScript_Calyrex_Text_1:
# 37 "data/maps/SnowdriftCity/scripts.pory"
	.string "Uh… Hello?$"

SnowdriftCity_EventScript_Calyrex_Text_2:
# 37 "data/maps/SnowdriftCity/scripts.pory"
	.string "Are you okay?$"

SnowdriftCity_EventScript_Calyrex_Text_3:
# 43 "data/maps/SnowdriftCity/scripts.pory"
	.string "You can hear me?!$"

SnowdriftCity_EventScript_CheckSpectierOrGlastrier_Text_0:
# 53 "data/maps/SnowdriftCity/scripts.pory"
	.string "My name is CALYREX.\n Long ago, I was a ruler of a land\l far away from this place.\p Since my fall from grace, I've spent\n my days searching for my trusted\l partners: SPECTRIER and GLASTRIER.\l Still, my search has been in vain.\p Please, adventurer.\p If you come across either of my\n old partners, could you bring\l them here?\p I'll give you a reward if you do.$"

SnowdriftCity_EventScript_ReceiveCalyrex_Text_0:
# 80 "data/maps/SnowdriftCity/scripts.pory"
	.string "Old friend…\n It's good to see you again.\p Thank you, brave one.\n May I ask for your name?\p … … … …\p {PLAYER}.\n  As promised, I will give you a reward.$"

SnowdriftCity_EventScript_ReceiveCalyrex_Text_1:
# 90 "data/maps/SnowdriftCity/scripts.pory"
	.string "Also… I humbly ask you.\n Allow this fallen king to once again\n fight alongside his old friend.$"

SnowdriftCity_EventScript_ReceiveCalyrex_Text_2:
# 101 "data/maps/SnowdriftCity/scripts.pory"
	.string "CALYREX joined the party!$"

SnowdriftCity_EventScript_ReceiveCalyrex_Text_3:
# 111 "data/maps/SnowdriftCity/scripts.pory"
	.string "CALYREX was sent to the PC!$"
