SnowdriftCity_MapScripts::
# 2 "data/maps/SnowdriftCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SnowdriftCity_OnTransition
	.byte 0


SnowdriftCity_OnTransition::
# 6 "data/maps/SnowdriftCity/scripts.pory"
	setflag FLAG_SYS_DYNAMIC_LEVELS
# 7 "data/maps/SnowdriftCity/scripts.pory"
	setflag FLAG_LANDMARK_SNOWDRIFT_CITY
# 8 "data/maps/SnowdriftCity/scripts.pory"
	call_if_set FLAG_HIDE_GYM_LEADERS_NORTHERN_HOENN, SnowdriftCity_EventScript_HideLunaAndMickey
	end


SnowdriftCity_EventScript_HideLunaAndMickey::
# 13 "data/maps/SnowdriftCity/scripts.pory"
	removeobject 1
# 14 "data/maps/SnowdriftCity/scripts.pory"
	removeobject 2
	return


SnowdriftCity_EventScript_Hiker::
# 19 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_Hiker_Text_0, MSGBOX_SIGN
	end


SnowdriftCity_EventScript_Man_4::
# 25 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_Man_4_Text_0, MSGBOX_NPC
	end


SnowdriftCity_EventScript_Man::
# 33 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_Man_Text_0, MSGBOX_NPC
	end


SnowdriftCity_EventScript_Sign::
# 39 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


SnowdriftCity_EventScript_SignToAzureMountain::
# 45 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_SignToAzureMountain_Text_0, MSGBOX_SIGN
	end


SnowdriftCity_EventScript_Calyrex::
# 50 "data/maps/SnowdriftCity/scripts.pory"
	lock
# 51 "data/maps/SnowdriftCity/scripts.pory"
	goto_if_set FLAG_SYS_TALKED_TO_CALYREX, SnowdriftCity_EventScript_CheckSpectierOrGlastrier
# 52 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_Calyrex_Text_0, MSGBOX_DEFAULT
# 53 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 54 "data/maps/SnowdriftCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, SnowdriftCity_EventScript_Calyrex_Text_1, SnowdriftCity_EventScript_Calyrex_Text_2
# 55 "data/maps/SnowdriftCity/scripts.pory"
	delay 16
# 56 "data/maps/SnowdriftCity/scripts.pory"
	playse SE_PIN
# 57 "data/maps/SnowdriftCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 58 "data/maps/SnowdriftCity/scripts.pory"
	waitmovement 0
# 59 "data/maps/SnowdriftCity/scripts.pory"
	waitse
# 60 "data/maps/SnowdriftCity/scripts.pory"
	faceplayer
# 61 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_Calyrex_Text_3, MSGBOX_DEFAULT
# 62 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 63 "data/maps/SnowdriftCity/scripts.pory"
	setflag FLAG_SYS_TALKED_TO_CALYREX
# 64 "data/maps/SnowdriftCity/scripts.pory"
	goto SnowdriftCity_EventScript_CheckSpectierOrGlastrier
	end


SnowdriftCity_EventScript_CheckSpectierOrGlastrier::
# 69 "data/maps/SnowdriftCity/scripts.pory"
	lock
# 70 "data/maps/SnowdriftCity/scripts.pory"
	faceplayer
# 71 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_CheckSpectierOrGlastrier_Text_0, MSGBOX_AUTOCLOSE
# 82 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 83 "data/maps/SnowdriftCity/scripts.pory"
	special IsLeadMonSpectrierOrGlastrier
# 84 "data/maps/SnowdriftCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SnowdriftCity_EventScript_ReceiveCalyrex
# 85 "data/maps/SnowdriftCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceDown
# 86 "data/maps/SnowdriftCity/scripts.pory"
	waitmovement 0
# 87 "data/maps/SnowdriftCity/scripts.pory"
	release
	end


SnowdriftCity_EventScript_ReceiveCalyrex::
# 92 "data/maps/SnowdriftCity/scripts.pory"
	lock
# 93 "data/maps/SnowdriftCity/scripts.pory"
	playse SE_PIN
# 94 "data/maps/SnowdriftCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 95 "data/maps/SnowdriftCity/scripts.pory"
	waitmovement 0
# 96 "data/maps/SnowdriftCity/scripts.pory"
	waitse
# 97 "data/maps/SnowdriftCity/scripts.pory"
	fadenewbgm MUS_END
# 98 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_ReceiveCalyrex_Text_0, MSGBOX_DEFAULT
# 105 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 106 "data/maps/SnowdriftCity/scripts.pory"
	giveitem ITEM_REINS_OF_UNITY
# 107 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 108 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_ReceiveCalyrex_Text_1, MSGBOX_AUTOCLOSE
# 111 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 112 "data/maps/SnowdriftCity/scripts.pory"
	givemon SPECIES_CALYREX, 75
# 113 "data/maps/SnowdriftCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq SnowdriftCity_EventScript_ReceiveCalyrex_2
# 122 "data/maps/SnowdriftCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq SnowdriftCity_EventScript_ReceiveCalyrex_3
# 132 "data/maps/SnowdriftCity/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
SnowdriftCity_EventScript_ReceiveCalyrex_1:
# 134 "data/maps/SnowdriftCity/scripts.pory"
	savebgm MUS_DUMMY
# 135 "data/maps/SnowdriftCity/scripts.pory"
	fadedefaultbgm
# 136 "data/maps/SnowdriftCity/scripts.pory"
	release
	end

SnowdriftCity_EventScript_ReceiveCalyrex_2:
# 114 "data/maps/SnowdriftCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 115 "data/maps/SnowdriftCity/scripts.pory"
	removeobject 9
# 116 "data/maps/SnowdriftCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 117 "data/maps/SnowdriftCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 118 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_ReceiveCalyrex_Text_2, MSGBOX_DEFAULT
# 119 "data/maps/SnowdriftCity/scripts.pory"
	waitfanfare
# 120 "data/maps/SnowdriftCity/scripts.pory"
	setflag FLAG_DEFEATED_CALYREX
	goto SnowdriftCity_EventScript_ReceiveCalyrex_1

SnowdriftCity_EventScript_ReceiveCalyrex_3:
# 123 "data/maps/SnowdriftCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 124 "data/maps/SnowdriftCity/scripts.pory"
	removeobject 9
# 125 "data/maps/SnowdriftCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 126 "data/maps/SnowdriftCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 127 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_ReceiveCalyrex_Text_3, MSGBOX_DEFAULT
# 128 "data/maps/SnowdriftCity/scripts.pory"
	waitfanfare
# 129 "data/maps/SnowdriftCity/scripts.pory"
	setflag FLAG_DEFEATED_CALYREX
	goto SnowdriftCity_EventScript_ReceiveCalyrex_1


SnowdriftCity_Eventscript_Luna::
# 141 "data/maps/SnowdriftCity/scripts.pory"
	lock
# 142 "data/maps/SnowdriftCity/scripts.pory"
	faceplayer
# 143 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_Eventscript_Luna_Text_0, MSGBOX_AUTOCLOSE
# 149 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 150 "data/maps/SnowdriftCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 151 "data/maps/SnowdriftCity/scripts.pory"
	waitmovement 0
# 152 "data/maps/SnowdriftCity/scripts.pory"
	release
	end


SnowdriftCity_Eventscript_Mickey::
# 157 "data/maps/SnowdriftCity/scripts.pory"
	lock
# 158 "data/maps/SnowdriftCity/scripts.pory"
	faceplayer
# 159 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_Eventscript_Mickey_Text_0, MSGBOX_AUTOCLOSE
# 165 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 166 "data/maps/SnowdriftCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 167 "data/maps/SnowdriftCity/scripts.pory"
	waitmovement 0
# 168 "data/maps/SnowdriftCity/scripts.pory"
	release
	end


SnowdriftCity_EventScript_Hiker_Text_0:
# 19 "data/maps/SnowdriftCity/scripts.pory"
	.string "Huff… Huff…\n I… I made it!$"

SnowdriftCity_EventScript_Man_4_Text_0:
# 25 "data/maps/SnowdriftCity/scripts.pory"
	.string "There's a legend that a POKéMON\n living deep in the mountain is\l the source of the geothermal energy.\p I wonder if that's really true.$"

SnowdriftCity_EventScript_Man_Text_0:
# 33 "data/maps/SnowdriftCity/scripts.pory"
	.string "Who would've thought there would\n be hot springs up here?$"

SnowdriftCity_EventScript_Sign_Text_0:
# 39 "data/maps/SnowdriftCity/scripts.pory"
	.string "SNOWDRIFT CITY\p “A warm rest at HOENN's highest peak!”$"

SnowdriftCity_EventScript_SignToAzureMountain_Text_0:
# 45 "data/maps/SnowdriftCity/scripts.pory"
	.string "{LEFT_ARROW} AZURE MOUNTAIN$"

SnowdriftCity_EventScript_Calyrex_Text_0:
# 52 "data/maps/SnowdriftCity/scripts.pory"
	.string "…$"

SnowdriftCity_EventScript_Calyrex_Text_1:
# 54 "data/maps/SnowdriftCity/scripts.pory"
	.string "Uh… Hello?$"

SnowdriftCity_EventScript_Calyrex_Text_2:
# 54 "data/maps/SnowdriftCity/scripts.pory"
	.string "Are you okay?$"

SnowdriftCity_EventScript_Calyrex_Text_3:
# 61 "data/maps/SnowdriftCity/scripts.pory"
	.string "You can hear me?!$"

SnowdriftCity_EventScript_CheckSpectierOrGlastrier_Text_0:
# 71 "data/maps/SnowdriftCity/scripts.pory"
	.string "My name is CALYREX.\p Long ago, I was a ruler of a land far,\n far away from this place.\p Since my fall from grace, I've spent\n my days searching for my trusted\l partners: SPECTRIER and GLASTRIER.\l Still, my search has been in vain.\l Please, adventurer.\p If you come across either of my old\n partners, could you bring them here?\p I'll reward you if you do.$"

SnowdriftCity_EventScript_ReceiveCalyrex_Text_0:
# 98 "data/maps/SnowdriftCity/scripts.pory"
	.string "Old friend…\n It's good to see you again.\p Thank you, brave one.\n May I ask for your name?\p … … … …\p {PLAYER}.\n  As promised, I will give you a reward.$"

SnowdriftCity_EventScript_ReceiveCalyrex_Text_1:
# 108 "data/maps/SnowdriftCity/scripts.pory"
	.string "Also… I humbly ask you.\p Allow this fallen king to once again\n fight alongside his old friend.$"

SnowdriftCity_EventScript_ReceiveCalyrex_Text_2:
# 118 "data/maps/SnowdriftCity/scripts.pory"
	.string "CALYREX joined the party!$"

SnowdriftCity_EventScript_ReceiveCalyrex_Text_3:
# 127 "data/maps/SnowdriftCity/scripts.pory"
	.string "CALYREX was sent to the PC!$"

SnowdriftCity_Eventscript_Luna_Text_0:
# 143 "data/maps/SnowdriftCity/scripts.pory"
	.string "Oh, it's {PLAYER}!\n Hm?\p How am I not cold like this?\n Don't worry about it.\p But… it would be nice if the sand\n beds were a little bit bigger.$"

SnowdriftCity_Eventscript_Mickey_Text_0:
# 159 "data/maps/SnowdriftCity/scripts.pory"
	.string "Hey, {PLAYER}…\p LUNA invited me on this trip but\n didn't tell me he FANTASIA'd again…\l He didn't even update his POKéNAV.\p I would've made an excuse to not go if\n I knew he was gonna look like that…$"
