SnowdriftCity_MapScripts::
# 5 "data/maps/SnowdriftCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SnowdriftCity_OnTransition
	.byte 0


SnowdriftCity_OnTransition::
# 9 "data/maps/SnowdriftCity/scripts.pory"
	setflag FLAG_SYS_DYNAMIC_LEVELS
# 10 "data/maps/SnowdriftCity/scripts.pory"
	setflag FLAG_VISITED_SNOWDRIFT_CITY
# 11 "data/maps/SnowdriftCity/scripts.pory"
	call_if_ge VAR_FINAL_REMATCH_STATE, 6, SnowdriftCity_EventScript_HideLunaAndMickey
	end


SnowdriftCity_EventScript_HideLunaAndMickey::
# 16 "data/maps/SnowdriftCity/scripts.pory"
	removeobject 1
# 17 "data/maps/SnowdriftCity/scripts.pory"
	removeobject 2
# 18 "data/maps/SnowdriftCity/scripts.pory"
	setflag FLAG_HIDE_LUNA_MICKEY_SNOWDRIFT_CITY
# 19 "data/maps/SnowdriftCity/scripts.pory"
	clearflag FLAG_HIDE_OLD_MAN_SNOWDRIFT
	return


SnowdriftCity_EventScript_Hiker::
# 24 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_Hiker_Text_0, MSGBOX_SIGN
	end


SnowdriftCity_EventScript_Man_4::
# 30 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_Man_4_Text_0, MSGBOX_NPC
	end


SnowdriftCity_EventScript_Man::
# 38 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_Man_Text_0, MSGBOX_NPC
	end


SnowdriftCity_EventScript_Sign::
# 44 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


SnowdriftCity_EventScript_SignToAzureMountain::
# 50 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_SignToAzureMountain_Text_0, MSGBOX_SIGN
	end


SnowdriftCity_EventScript_Calyrex::
# 55 "data/maps/SnowdriftCity/scripts.pory"
	lock
# 56 "data/maps/SnowdriftCity/scripts.pory"
	goto_if_set FLAG_SYS_TALKED_TO_CALYREX, SnowdriftCity_EventScript_CheckSpectierOrGlastrier
# 57 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_Calyrex_Text_0, MSGBOX_DEFAULT
# 58 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 59 "data/maps/SnowdriftCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, SnowdriftCity_EventScript_Calyrex_Text_1, SnowdriftCity_EventScript_Calyrex_Text_2
# 60 "data/maps/SnowdriftCity/scripts.pory"
	delay 16
# 61 "data/maps/SnowdriftCity/scripts.pory"
	playse SE_PIN
# 62 "data/maps/SnowdriftCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 63 "data/maps/SnowdriftCity/scripts.pory"
	waitmovement 0
# 64 "data/maps/SnowdriftCity/scripts.pory"
	waitse
# 65 "data/maps/SnowdriftCity/scripts.pory"
	faceplayer
# 66 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_Calyrex_Text_3, MSGBOX_DEFAULT
# 67 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 68 "data/maps/SnowdriftCity/scripts.pory"
	setflag FLAG_SYS_TALKED_TO_CALYREX
# 69 "data/maps/SnowdriftCity/scripts.pory"
	goto SnowdriftCity_EventScript_CheckSpectierOrGlastrier
	end


SnowdriftCity_EventScript_CheckSpectierOrGlastrier::
# 74 "data/maps/SnowdriftCity/scripts.pory"
	lock
# 75 "data/maps/SnowdriftCity/scripts.pory"
	faceplayer
# 76 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_CheckSpectierOrGlastrier_Text_0, MSGBOX_AUTOCLOSE
# 87 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 88 "data/maps/SnowdriftCity/scripts.pory"
	special IsLeadMonSpectrierOrGlastrier
# 89 "data/maps/SnowdriftCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SnowdriftCity_EventScript_ReceiveCalyrex
# 90 "data/maps/SnowdriftCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceDown
# 91 "data/maps/SnowdriftCity/scripts.pory"
	waitmovement 0
# 92 "data/maps/SnowdriftCity/scripts.pory"
	release
	end


SnowdriftCity_EventScript_ReceiveCalyrex::
# 97 "data/maps/SnowdriftCity/scripts.pory"
	lock
# 98 "data/maps/SnowdriftCity/scripts.pory"
	playse SE_PIN
# 99 "data/maps/SnowdriftCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 100 "data/maps/SnowdriftCity/scripts.pory"
	waitmovement 0
# 101 "data/maps/SnowdriftCity/scripts.pory"
	waitse
# 102 "data/maps/SnowdriftCity/scripts.pory"
	fadenewbgm MUS_END
# 103 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_ReceiveCalyrex_Text_0, MSGBOX_DEFAULT
# 110 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 111 "data/maps/SnowdriftCity/scripts.pory"
	giveitem ITEM_REINS_OF_UNITY
# 112 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 113 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_ReceiveCalyrex_Text_1, MSGBOX_AUTOCLOSE
# 116 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 117 "data/maps/SnowdriftCity/scripts.pory"
	givemon SPECIES_CALYREX, 75, ITEM_NONE, ITEM_POKE_BALL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 118 "data/maps/SnowdriftCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq SnowdriftCity_EventScript_ReceiveCalyrex_2
# 127 "data/maps/SnowdriftCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq SnowdriftCity_EventScript_ReceiveCalyrex_3
# 137 "data/maps/SnowdriftCity/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
SnowdriftCity_EventScript_ReceiveCalyrex_1:
# 139 "data/maps/SnowdriftCity/scripts.pory"
	savebgm MUS_DUMMY
# 140 "data/maps/SnowdriftCity/scripts.pory"
	fadedefaultbgm
# 141 "data/maps/SnowdriftCity/scripts.pory"
	release
	end

SnowdriftCity_EventScript_ReceiveCalyrex_2:
# 119 "data/maps/SnowdriftCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 120 "data/maps/SnowdriftCity/scripts.pory"
	removeobject 9
# 121 "data/maps/SnowdriftCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 122 "data/maps/SnowdriftCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 123 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_ReceiveCalyrex_Text_2, MSGBOX_DEFAULT
# 124 "data/maps/SnowdriftCity/scripts.pory"
	waitfanfare
# 125 "data/maps/SnowdriftCity/scripts.pory"
	setflag FLAG_DEFEATED_CALYREX
	goto SnowdriftCity_EventScript_ReceiveCalyrex_1

SnowdriftCity_EventScript_ReceiveCalyrex_3:
# 128 "data/maps/SnowdriftCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 129 "data/maps/SnowdriftCity/scripts.pory"
	removeobject 9
# 130 "data/maps/SnowdriftCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 131 "data/maps/SnowdriftCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 132 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_ReceiveCalyrex_Text_3, MSGBOX_DEFAULT
# 133 "data/maps/SnowdriftCity/scripts.pory"
	waitfanfare
# 134 "data/maps/SnowdriftCity/scripts.pory"
	setflag FLAG_DEFEATED_CALYREX
	goto SnowdriftCity_EventScript_ReceiveCalyrex_1


SnowdriftCity_Eventscript_Luna::
# 146 "data/maps/SnowdriftCity/scripts.pory"
	lock
# 147 "data/maps/SnowdriftCity/scripts.pory"
	faceplayer
# 148 "data/maps/SnowdriftCity/scripts.pory"
	goto_if_eq VAR_FINAL_REMATCH_STATE, 6, SnowdriftCity_EventScript_LunaAndMickeyLeave
# 149 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_Eventscript_Luna_Text_0, MSGBOX_AUTOCLOSE
# 155 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 156 "data/maps/SnowdriftCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 157 "data/maps/SnowdriftCity/scripts.pory"
	waitmovement 0
# 158 "data/maps/SnowdriftCity/scripts.pory"
	release
	end


SnowdriftCity_Eventscript_Mickey::
# 163 "data/maps/SnowdriftCity/scripts.pory"
	lock
# 164 "data/maps/SnowdriftCity/scripts.pory"
	faceplayer
# 165 "data/maps/SnowdriftCity/scripts.pory"
	goto_if_eq VAR_FINAL_REMATCH_STATE, 6, SnowdriftCity_EventScript_LunaAndMickeyLeave
# 166 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_Eventscript_Mickey_Text_0, MSGBOX_AUTOCLOSE
# 172 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 173 "data/maps/SnowdriftCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 174 "data/maps/SnowdriftCity/scripts.pory"
	waitmovement 0
# 175 "data/maps/SnowdriftCity/scripts.pory"
	release
	end


SnowdriftCity_EventScript_LunaAndMickeyLeave::
# 180 "data/maps/SnowdriftCity/scripts.pory"
	compare VAR_LAST_TALKED, 2
	goto_if_eq SnowdriftCity_EventScript_LunaAndMickeyLeave_2
# 188 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_LunaAndMickeyLeave_Text_1, MSGBOX_AUTOCLOSE
SnowdriftCity_EventScript_LunaAndMickeyLeave_1:
# 193 "data/maps/SnowdriftCity/scripts.pory"
	waitmessage
# 194 "data/maps/SnowdriftCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 195 "data/maps/SnowdriftCity/scripts.pory"
	removeobject 1
# 196 "data/maps/SnowdriftCity/scripts.pory"
	removeobject 2
# 197 "data/maps/SnowdriftCity/scripts.pory"
	setflag FLAG_HIDE_LUNA_MICKEY_SNOWDRIFT_CITY
# 198 "data/maps/SnowdriftCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 199 "data/maps/SnowdriftCity/scripts.pory"
	release
	end

SnowdriftCity_EventScript_LunaAndMickeyLeave_2:
# 181 "data/maps/SnowdriftCity/scripts.pory"
	msgbox SnowdriftCity_EventScript_LunaAndMickeyLeave_Text_0, MSGBOX_AUTOCLOSE
	goto SnowdriftCity_EventScript_LunaAndMickeyLeave_1


SnowdriftCity_EventScript_Hiker_Text_0:
# 24 "data/maps/SnowdriftCity/scripts.pory"
	.string "Huff… Huff…\n I… I made it!$"

SnowdriftCity_EventScript_Man_4_Text_0:
# 30 "data/maps/SnowdriftCity/scripts.pory"
	.string "There's a legend that a POKéMON\n living deep in the mountain is\l the source of the geothermal energy.\p I wonder if that's really true.$"

SnowdriftCity_EventScript_Man_Text_0:
# 38 "data/maps/SnowdriftCity/scripts.pory"
	.string "Who would've thought there would\n be hot springs up here?$"

SnowdriftCity_EventScript_Sign_Text_0:
# 44 "data/maps/SnowdriftCity/scripts.pory"
	.string "SNOWDRIFT CITY\p “A warm rest at HOENN's highest peak!”$"

SnowdriftCity_EventScript_SignToAzureMountain_Text_0:
# 50 "data/maps/SnowdriftCity/scripts.pory"
	.string "{LEFT_ARROW} AZURE MOUNTAIN$"

SnowdriftCity_EventScript_Calyrex_Text_0:
# 57 "data/maps/SnowdriftCity/scripts.pory"
	.string "…$"

SnowdriftCity_EventScript_Calyrex_Text_1:
# 59 "data/maps/SnowdriftCity/scripts.pory"
	.string "Uh… Hello?$"

SnowdriftCity_EventScript_Calyrex_Text_2:
# 59 "data/maps/SnowdriftCity/scripts.pory"
	.string "Are you okay?$"

SnowdriftCity_EventScript_Calyrex_Text_3:
# 66 "data/maps/SnowdriftCity/scripts.pory"
	.string "You can hear me?!$"

SnowdriftCity_EventScript_CheckSpectierOrGlastrier_Text_0:
# 76 "data/maps/SnowdriftCity/scripts.pory"
	.string "My name is CALYREX.\p Long ago, I was a ruler of a land far,\n far away from this place.\p Since my fall from grace, I've spent\n my days searching for my trusted\l partners: SPECTRIER and GLASTRIER.\l Still, my search has been in vain.\l Please, adventurer.\p If you come across either of my old\n partners, could you bring them here?\p I'll reward you if you do.$"

SnowdriftCity_EventScript_ReceiveCalyrex_Text_0:
# 103 "data/maps/SnowdriftCity/scripts.pory"
	.string "Old friend…\n It's good to see you again.\p Thank you, brave one.\n May I ask for your name?\p … … … …\p {PLAYER}.\n  As promised, I will give you a reward.$"

SnowdriftCity_EventScript_ReceiveCalyrex_Text_1:
# 113 "data/maps/SnowdriftCity/scripts.pory"
	.string "Also… I humbly ask you.\p Allow this fallen king to once again\n fight alongside his old friend.$"

SnowdriftCity_EventScript_ReceiveCalyrex_Text_2:
# 123 "data/maps/SnowdriftCity/scripts.pory"
	.string "CALYREX joined the party!$"

SnowdriftCity_EventScript_ReceiveCalyrex_Text_3:
# 132 "data/maps/SnowdriftCity/scripts.pory"
	.string "CALYREX was sent to the PC!$"

SnowdriftCity_Eventscript_Luna_Text_0:
# 149 "data/maps/SnowdriftCity/scripts.pory"
	.string "Oh, it's {PLAYER}!\n Hm?\p How am I not cold like this?\n Don't worry about it.\p But… it would be nice if the sand\n beds were a little bit bigger.$"

SnowdriftCity_Eventscript_Mickey_Text_0:
# 166 "data/maps/SnowdriftCity/scripts.pory"
	.string "Hey, {PLAYER}…\p LUNA invited me on this trip but\n didn't tell me he FANTASIA'd again…\l He didn't even update his POKéNAV.\p I would've made an excuse to not go if\n I knew he was gonna look like that…$"

SnowdriftCity_EventScript_LunaAndMickeyLeave_Text_0:
# 181 "data/maps/SnowdriftCity/scripts.pory"
	.string "{PLAYER}!\p I just got the message from JIMMY.\n I'll wait for you back at the GYM.\p It's time to let the dogs out!\n Awoooohoooo!$"

SnowdriftCity_EventScript_LunaAndMickeyLeave_Text_1:
# 188 "data/maps/SnowdriftCity/scripts.pory"
	.string "{PLAYER}.\n I just heard from JIMMY.\p I'll be waiting for you back at\n the GYM.$"
