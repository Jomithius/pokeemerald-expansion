Route137_SeasideHouse_MapScripts::
	.byte 0


Route137_SeasideHouse_EventScript_CasteliaconeSalesman::
# 4 "data/maps/Route137_SeasideHouse/scripts.pory"
	lock
# 5 "data/maps/Route137_SeasideHouse/scripts.pory"
	faceplayer
# 6 "data/maps/Route137_SeasideHouse/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/Route137_SeasideHouse/scripts.pory"
	waitmessage
# 8 "data/maps/Route137_SeasideHouse/scripts.pory"
	pokemart Route137_SeasideHouse_Pokemart
# 9 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 10 "data/maps/Route137_SeasideHouse/scripts.pory"
	release
	end


	.align 2
# 14 "data/maps/Route137_SeasideHouse/scripts.pory"
Route137_SeasideHouse_Pokemart:
# 15 "data/maps/Route137_SeasideHouse/scripts.pory"
	.2byte ITEM_CASTELIACONE
# 16 "data/maps/Route137_SeasideHouse/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 17 "data/maps/Route137_SeasideHouse/scripts.pory"
	.2byte ITEM_SODA_POP
# 18 "data/maps/Route137_SeasideHouse/scripts.pory"
	.2byte ITEM_LEMONADE
# 19 "data/maps/Route137_SeasideHouse/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_NONE

Route137_SeasideHouse_EventScript_GiveCasteliaCone::
# 23 "data/maps/Route137_SeasideHouse/scripts.pory"
	lock
# 24 "data/maps/Route137_SeasideHouse/scripts.pory"
	delay 16
# 25 "data/maps/Route137_SeasideHouse/scripts.pory"
	playse SE_PIN
# 26 "data/maps/Route137_SeasideHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 27 "data/maps/Route137_SeasideHouse/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route137_SeasideHouse/scripts.pory"
	waitse
# 29 "data/maps/Route137_SeasideHouse/scripts.pory"
	faceplayer
# 30 "data/maps/Route137_SeasideHouse/scripts.pory"
	playbgm MUS_MISA_THEME, FALSE
# 31 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox Route137_SeasideHouse_EventScript_GiveCasteliaCone_Text_0, MSGBOX_DEFAULT
# 43 "data/maps/Route137_SeasideHouse/scripts.pory"
	waitmessage
# 44 "data/maps/Route137_SeasideHouse/scripts.pory"
	giveitem ITEM_CASTELIACONE
# 45 "data/maps/Route137_SeasideHouse/scripts.pory"
	waitmessage
# 46 "data/maps/Route137_SeasideHouse/scripts.pory"
	setflag FLAG_RECEIVED_CASTELIACONE
# 47 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox Route137_SeasideHouse_EventScript_GiveCasteliaCone_Text_1, MSGBOX_AUTOCLOSE
# 55 "data/maps/Route137_SeasideHouse/scripts.pory"
	waitmessage
# 56 "data/maps/Route137_SeasideHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 57 "data/maps/Route137_SeasideHouse/scripts.pory"
	waitmovement 0
# 58 "data/maps/Route137_SeasideHouse/scripts.pory"
	fadedefaultbgm
# 59 "data/maps/Route137_SeasideHouse/scripts.pory"
	release
	end


Route137_SeasideHouse_EventScript_Misa::
# 64 "data/maps/Route137_SeasideHouse/scripts.pory"
	lock
# 65 "data/maps/Route137_SeasideHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CASTELIACONE, Route137_SeasideHouse_EventScript_GiveCasteliaCone
# 66 "data/maps/Route137_SeasideHouse/scripts.pory"
	faceplayer
# 67 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox Route137_SeasideHouse_EventScript_GiveCasteliaCone_Text_1, MSGBOX_AUTOCLOSE
# 75 "data/maps/Route137_SeasideHouse/scripts.pory"
	waitmessage
# 76 "data/maps/Route137_SeasideHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 77 "data/maps/Route137_SeasideHouse/scripts.pory"
	waitmovement 0
# 78 "data/maps/Route137_SeasideHouse/scripts.pory"
	release
	end


Route137_SeasideHouse_EventScript_Daca::
# 83 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox Route137_SeasideHouse_EventScript_Daca_Text_0, MSGBOX_NPC
	end


Route137_SeasideHouse_EventScript_Tuber_M::
# 89 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox Route137_SeasideHouse_EventScript_Tuber_M_Text_0, MSGBOX_NPC
	end


Route137_SeasideHouse_EventScript_Tuber_F::
# 95 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox Route137_SeasideHouse_EventScript_Tuber_F_Text_0, MSGBOX_NPC
	end


Route137_SeasideHouse_EventScript_Woman_4::
# 101 "data/maps/Route137_SeasideHouse/scripts.pory"
	lock
# 102 "data/maps/Route137_SeasideHouse/scripts.pory"
	applymovement 5, Common_Movement_FaceRight
# 103 "data/maps/Route137_SeasideHouse/scripts.pory"
	waitmovement 5
# 104 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox Route137_SeasideHouse_EventScript_Woman_4_Text_0, MSGBOX_DEFAULT
# 106 "data/maps/Route137_SeasideHouse/scripts.pory"
	waitmessage
# 107 "data/maps/Route137_SeasideHouse/scripts.pory"
	faceplayer
# 108 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox Route137_SeasideHouse_EventScript_Woman_4_Text_1, MSGBOX_AUTOCLOSE
# 109 "data/maps/Route137_SeasideHouse/scripts.pory"
	waitmessage
# 110 "data/maps/Route137_SeasideHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 111 "data/maps/Route137_SeasideHouse/scripts.pory"
	waitmovement 0
	end


Route137_SeasideHouse_EventScript_Beauty::
# 116 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox Route137_SeasideHouse_EventScript_Beauty_Text_0, MSGBOX_SIGN
	end


Route137_SeasideHouse_EventScript_FatMan::
# 122 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox Route137_SeasideHouse_EventScript_FatMan_Text_0, MSGBOX_NPC
	end


Route137_SeasideHouse_EventScript_Man::
# 127 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox Route137_SeasideHouse_EventScript_Man_Text_0, MSGBOX_NPC
	end


Route137_SeasideHouse_EventScript_Man_4::
# 134 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox Route137_SeasideHouse_EventScript_Man_4_Text_0, MSGBOX_NPC
	end


Route137_SeasideHouse_EventScript_Gentleman::
# 141 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox Route137_SeasideHouse_EventScript_Gentleman_Text_0, MSGBOX_NPC
	end


Route137_SeasideHouse_EventScript_GiveCasteliaCone_Text_0:
# 31 "data/maps/Route137_SeasideHouse/scripts.pory"
	.string "Oh, {PLAYER}!\n Or should I say CHAMPION now?!\l It's good to see you again!\p I was visiting JAMES at his new\n job and decided to get a\l CASTELIACONE on the way back.\p I used to go to their first stall\n in CASTELIA CITY when I was a kid.\p I still remember when they\n weren't as famous as they are now!\p Well, I bought two… and regret it.\n Here, take this one before it melts!$"

Route137_SeasideHouse_EventScript_GiveCasteliaCone_Text_1:
# 47 "data/maps/Route137_SeasideHouse/scripts.pory"
	.string "There's a weird legend I heard.\n It goes:\p “Three golems: one ice, one rock, and\n one steel.\l One cold nickname and one cold item\l will awaken the golems' sluggish ruler\l in the once cold cave.”\p Isn't that weird?$"

Route137_SeasideHouse_EventScript_Daca_Text_0:
# 83 "data/maps/Route137_SeasideHouse/scripts.pory"
	.string "Hahaha!\n It's an ice cream party!$"

Route137_SeasideHouse_EventScript_Tuber_M_Text_0:
# 89 "data/maps/Route137_SeasideHouse/scripts.pory"
	.string "I SCREAM FOR ICE CREAM!\n AAAAAAAAAAAAAAAAAAAAAHH!$"

Route137_SeasideHouse_EventScript_Tuber_F_Text_0:
# 95 "data/maps/Route137_SeasideHouse/scripts.pory"
	.string "Ice cream! Ice cream!\n Ice cream! Ice cream!$"

Route137_SeasideHouse_EventScript_Woman_4_Text_0:
# 104 "data/maps/Route137_SeasideHouse/scripts.pory"
	.string "Yes, yes! You'll get ice cream!\n And you! Stop screaming!$"

Route137_SeasideHouse_EventScript_Woman_4_Text_1:
# 108 "data/maps/Route137_SeasideHouse/scripts.pory"
	.string "It's hard being a single mom.$"

Route137_SeasideHouse_EventScript_Beauty_Text_0:
# 116 "data/maps/Route137_SeasideHouse/scripts.pory"
	.string "I know it's bad for my figure…\n But I just love ice cream.$"

Route137_SeasideHouse_EventScript_FatMan_Text_0:
# 122 "data/maps/Route137_SeasideHouse/scripts.pory"
	.string "I come here every day.$"

Route137_SeasideHouse_EventScript_Man_Text_0:
# 127 "data/maps/Route137_SeasideHouse/scripts.pory"
	.string "So this ice cream comes all the\n way from UNOVA, huh…\p I heard the LEAGUE's CEO is from there.$"

Route137_SeasideHouse_EventScript_Man_4_Text_0:
# 134 "data/maps/Route137_SeasideHouse/scripts.pory"
	.string "I live in LUSH ACREAGE.\n The ice cream here uses milk from the\l MILTANKS we raise.$"

Route137_SeasideHouse_EventScript_Gentleman_Text_0:
# 141 "data/maps/Route137_SeasideHouse/scripts.pory"
	.string "I came all the way from UNOVA\n to start expanding my business.\p I'm glad it's going so well here!$"
