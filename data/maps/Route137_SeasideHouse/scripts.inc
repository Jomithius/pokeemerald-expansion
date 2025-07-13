Route137_SeasideHouse_MapScripts::
	.byte 0


Route137_SeasideHouse_EventScript_GiveCasteliaCone::
# 4 "data/maps/Route137_SeasideHouse/scripts.pory"
	lock
# 5 "data/maps/Route137_SeasideHouse/scripts.pory"
	delay 16
# 6 "data/maps/Route137_SeasideHouse/scripts.pory"
	playse SE_PIN
# 7 "data/maps/Route137_SeasideHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 8 "data/maps/Route137_SeasideHouse/scripts.pory"
	waitmovement 0
# 9 "data/maps/Route137_SeasideHouse/scripts.pory"
	waitse
# 10 "data/maps/Route137_SeasideHouse/scripts.pory"
	faceplayer
# 11 "data/maps/Route137_SeasideHouse/scripts.pory"
	playbgm MUS_MISA_THEME, FALSE
# 12 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox Route137_SeasideHouse_EventScript_GiveCasteliaCone_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/Route137_SeasideHouse/scripts.pory"
	waitmessage
# 25 "data/maps/Route137_SeasideHouse/scripts.pory"
	giveitem ITEM_CASTELIACONE
# 26 "data/maps/Route137_SeasideHouse/scripts.pory"
	waitmessage
# 27 "data/maps/Route137_SeasideHouse/scripts.pory"
	setflag FLAG_RECEIVED_CASTELIACONE
# 28 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox Route137_SeasideHouse_EventScript_GiveCasteliaCone_Text_1, MSGBOX_AUTOCLOSE
# 36 "data/maps/Route137_SeasideHouse/scripts.pory"
	waitmessage
# 37 "data/maps/Route137_SeasideHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 38 "data/maps/Route137_SeasideHouse/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route137_SeasideHouse/scripts.pory"
	fadedefaultbgm
# 40 "data/maps/Route137_SeasideHouse/scripts.pory"
	release
	end


Route137_SeasideHouse_EventScript_Misa::
# 45 "data/maps/Route137_SeasideHouse/scripts.pory"
	lock
# 46 "data/maps/Route137_SeasideHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CASTELIACONE, Route137_SeasideHouse_EventScript_GiveCasteliaCone
# 47 "data/maps/Route137_SeasideHouse/scripts.pory"
	faceplayer
# 48 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox Route137_SeasideHouse_EventScript_GiveCasteliaCone_Text_1, MSGBOX_AUTOCLOSE
# 56 "data/maps/Route137_SeasideHouse/scripts.pory"
	waitmessage
# 57 "data/maps/Route137_SeasideHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 58 "data/maps/Route137_SeasideHouse/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route137_SeasideHouse/scripts.pory"
	release
	end


Route137_SeasideHouse_EventScript_Daca::
# 64 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox Route137_SeasideHouse_EventScript_Daca_Text_0, MSGBOX_SIGN
	end


Route137_SeasideHouse_EventScript_Tuber_M::
# 70 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox Route137_SeasideHouse_EventScript_Tuber_M_Text_0, MSGBOX_NPC
	end


Route137_SeasideHouse_EventScript_Tuber_F::
# 76 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox Route137_SeasideHouse_EventScript_Tuber_F_Text_0, MSGBOX_NPC
	end


Route137_SeasideHouse_EventScript_Woman_4::
# 82 "data/maps/Route137_SeasideHouse/scripts.pory"
	lock
# 83 "data/maps/Route137_SeasideHouse/scripts.pory"
	applymovement 5, Common_Movement_FaceRight
# 84 "data/maps/Route137_SeasideHouse/scripts.pory"
	waitmovement 5
# 85 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox Route137_SeasideHouse_EventScript_Woman_4_Text_0, MSGBOX_DEFAULT
# 87 "data/maps/Route137_SeasideHouse/scripts.pory"
	waitmessage
# 88 "data/maps/Route137_SeasideHouse/scripts.pory"
	faceplayer
# 89 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox Route137_SeasideHouse_EventScript_Woman_4_Text_1, MSGBOX_AUTOCLOSE
# 90 "data/maps/Route137_SeasideHouse/scripts.pory"
	waitmessage
# 91 "data/maps/Route137_SeasideHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 92 "data/maps/Route137_SeasideHouse/scripts.pory"
	waitmovement 0
	end


Route137_SeasideHouse_EventScript_Beauty::
# 97 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox Route137_SeasideHouse_EventScript_Beauty_Text_0, MSGBOX_SIGN
	end


Route137_SeasideHouse_EventScript_FatMan::
# 103 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox Route137_SeasideHouse_EventScript_FatMan_Text_0, MSGBOX_NPC
	end


Route137_SeasideHouse_EventScript_Man::
# 108 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox Route137_SeasideHouse_EventScript_Man_Text_0, MSGBOX_NPC
	end


Route137_SeasideHouse_EventScript_Man_4::
# 115 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox Route137_SeasideHouse_EventScript_Man_4_Text_0, MSGBOX_NPC
	end


Route137_SeasideHouse_EventScript_Gentleman::
# 122 "data/maps/Route137_SeasideHouse/scripts.pory"
	msgbox Route137_SeasideHouse_EventScript_Gentleman_Text_0, MSGBOX_NPC
	end


Route137_SeasideHouse_EventScript_GiveCasteliaCone_Text_0:
# 12 "data/maps/Route137_SeasideHouse/scripts.pory"
	.string "Oh, {PLAYER}!\n Or should I say CHAMPION now?!\l It's good to see you again!\p I was visiting JAMES at his new\n job and decided to get a\l CASTELIACONE on the way back.\p I used to go to their first stall\n in CASTELIA CITY when I was a kid.\p I still remember when they\n weren't as famous as they are now!\p Well, I bought two… and regret it.\n Here, take this one before it melts!$"

Route137_SeasideHouse_EventScript_GiveCasteliaCone_Text_1:
# 28 "data/maps/Route137_SeasideHouse/scripts.pory"
	.string "There's a weird legend I heard.\n It goes:\p “Three golems: one ice, one rock, and\n one steel.\l One cold nickname and one cold item\l will awaken the golems' sluggish ruler\l in the once cold cave.”\p Isn't that weird?$"

Route137_SeasideHouse_EventScript_Daca_Text_0:
# 64 "data/maps/Route137_SeasideHouse/scripts.pory"
	.string "Hahaha!\n It's an ice cream party!$"

Route137_SeasideHouse_EventScript_Tuber_M_Text_0:
# 70 "data/maps/Route137_SeasideHouse/scripts.pory"
	.string "I SCREAM FOR ICE CREAM!\n AAAAAAAAAAAAAAAAAAAAAHH!$"

Route137_SeasideHouse_EventScript_Tuber_F_Text_0:
# 76 "data/maps/Route137_SeasideHouse/scripts.pory"
	.string "Ice cream! Ice cream!\n Ice cream! Ice cream!$"

Route137_SeasideHouse_EventScript_Woman_4_Text_0:
# 85 "data/maps/Route137_SeasideHouse/scripts.pory"
	.string "Yes, yes! You'll get ice cream!\n And you! Stop screaming!$"

Route137_SeasideHouse_EventScript_Woman_4_Text_1:
# 89 "data/maps/Route137_SeasideHouse/scripts.pory"
	.string "It's hard being a single mom.$"

Route137_SeasideHouse_EventScript_Beauty_Text_0:
# 97 "data/maps/Route137_SeasideHouse/scripts.pory"
	.string "I know it's bad for my figure…\n But I just love ice cream.$"

Route137_SeasideHouse_EventScript_FatMan_Text_0:
# 103 "data/maps/Route137_SeasideHouse/scripts.pory"
	.string "I come here every day.$"

Route137_SeasideHouse_EventScript_Man_Text_0:
# 108 "data/maps/Route137_SeasideHouse/scripts.pory"
	.string "So this ice cream comes all the\n way from UNOVA, huh…\p I heard the LEAGUE's CEO is from there.$"

Route137_SeasideHouse_EventScript_Man_4_Text_0:
# 115 "data/maps/Route137_SeasideHouse/scripts.pory"
	.string "I live in LUSH ACREAGE.\n The ice cream here uses milk from the\l MILTANKS we raise.$"

Route137_SeasideHouse_EventScript_Gentleman_Text_0:
# 122 "data/maps/Route137_SeasideHouse/scripts.pory"
	.string "I came all the way from UNOVA\n to start expanding my business.\p I'm glad it's going so well here!$"
