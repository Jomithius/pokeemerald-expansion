TheUnder_MapScripts::
	.byte 0


TheUnder_EventScript_Luna::
# 4 "data/maps/TheUnder/scripts.pory"
	lockall
# 5 "data/maps/TheUnder/scripts.pory"
	checkobjectat 13, 45
# 6 "data/maps/TheUnder/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TheUnder_EventScript_Luna_2
# 10 "data/maps/TheUnder/scripts.pory"
	applymovement 7, TheUnder_Movement_Luna
TheUnder_EventScript_Luna_1:
# 12 "data/maps/TheUnder/scripts.pory"
	waitmovement 7
# 13 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Luna_Text_0, MSGBOX_DEFAULT
# 18 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 19 "data/maps/TheUnder/scripts.pory"
	giveitem ITEM_MASTER_BALL, 24
# 20 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 21 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Luna_Text_1, MSGBOX_DEFAULT
# 26 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 27 "data/maps/TheUnder/scripts.pory"
	giveitem ITEM_TERA_ORB
# 28 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 29 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Luna_Text_2, MSGBOX_YESNO
# 30 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 31 "data/maps/TheUnder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TheUnder_EventScript_Luna_6
TheUnder_EventScript_Luna_5:
# 35 "data/maps/TheUnder/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 36 "data/maps/TheUnder/scripts.pory"
	waitmovement 7
# 37 "data/maps/TheUnder/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 38 "data/maps/TheUnder/scripts.pory"
	waitmovement 7
# 39 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Luna_Text_3, MSGBOX_AUTOCLOSE
# 41 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 42 "data/maps/TheUnder/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceLeft
# 43 "data/maps/TheUnder/scripts.pory"
	waitmovement 7
# 44 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Luna_Text_4, MSGBOX_AUTOCLOSE
# 50 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 51 "data/maps/TheUnder/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 52 "data/maps/TheUnder/scripts.pory"
	waitmovement 7
# 53 "data/maps/TheUnder/scripts.pory"
	setfieldeffectargument 0, 1
# 54 "data/maps/TheUnder/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 55 "data/maps/TheUnder/scripts.pory"
	delay 15
# 56 "data/maps/TheUnder/scripts.pory"
	removeobject 7
# 57 "data/maps/TheUnder/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 58 "data/maps/TheUnder/scripts.pory"
	setvar VAR_THE_UNDER_STATE, 1
# 59 "data/maps/TheUnder/scripts.pory"
	setflag FLAG_SYS_RECEIVED_TERA_ORB
# 60 "data/maps/TheUnder/scripts.pory"
	setflag FLAG_SYS_TERA_ORB_CHARGED
# 61 "data/maps/TheUnder/scripts.pory"
	releaseall
	end

TheUnder_EventScript_Luna_2:
# 7 "data/maps/TheUnder/scripts.pory"
	applymovement 7, TheUnder_Movement_LunaSouth
	goto TheUnder_EventScript_Luna_1

TheUnder_EventScript_Luna_6:
# 32 "data/maps/TheUnder/scripts.pory"
	msgbox Common_Text_ExplainTera, MSGBOX_AUTOCLOSE
# 33 "data/maps/TheUnder/scripts.pory"
	waitmessage
	goto TheUnder_EventScript_Luna_5


TheUnder_EventScript_Sign::
# 66 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


TheUnder_EventScript_Artist::
# 71 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Artist_Text_0, MSGBOX_SIGN
	end


TheUnder_EventScript_Hiker::
# 77 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Hiker_Text_0, MSGBOX_NPC
	end


TheUnder_EventScript_Carson::
# 83 "data/maps/TheUnder/scripts.pory"
	trainerbattle_single TRAINER_CARSON, TheUnder_Text_CarsonIntro, TheUnder_Text_CarsonDefeat
# 84 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_Text_CarsonPostBattle, MSGBOX_AUTOCLOSE
# 85 "data/maps/TheUnder/scripts.pory"
	waitmessage
	end


# 138 "data/maps/TheUnder/scripts.pory"
TheUnder_Movement_Luna:
# 139 "data/maps/TheUnder/scripts.pory"
	walk_left
# 139 "data/maps/TheUnder/scripts.pory"
	walk_left
# 139 "data/maps/TheUnder/scripts.pory"
	walk_left
# 139 "data/maps/TheUnder/scripts.pory"
	walk_left
# 139 "data/maps/TheUnder/scripts.pory"
	walk_left
# 139 "data/maps/TheUnder/scripts.pory"
	walk_left
# 139 "data/maps/TheUnder/scripts.pory"
	walk_left
# 139 "data/maps/TheUnder/scripts.pory"
	walk_left
# 139 "data/maps/TheUnder/scripts.pory"
	walk_left
	step_end

# 142 "data/maps/TheUnder/scripts.pory"
TheUnder_Movement_LunaSouth:
# 143 "data/maps/TheUnder/scripts.pory"
	walk_down
# 144 "data/maps/TheUnder/scripts.pory"
	walk_left
# 144 "data/maps/TheUnder/scripts.pory"
	walk_left
# 144 "data/maps/TheUnder/scripts.pory"
	walk_left
# 144 "data/maps/TheUnder/scripts.pory"
	walk_left
# 144 "data/maps/TheUnder/scripts.pory"
	walk_left
# 144 "data/maps/TheUnder/scripts.pory"
	walk_left
# 144 "data/maps/TheUnder/scripts.pory"
	walk_left
# 144 "data/maps/TheUnder/scripts.pory"
	walk_left
# 144 "data/maps/TheUnder/scripts.pory"
	walk_left
	step_end

TheUnder_EventScript_Luna_Text_0:
# 13 "data/maps/TheUnder/scripts.pory"
	.string "LUNA: {PLAYER}. You made it.\p JIMMY wanted me to meet you out here.\n He has a message for you:\p Grinding is cringe, so here.\n Take these.$"

TheUnder_EventScript_Luna_Text_1:
# 21 "data/maps/TheUnder/scripts.pory"
	.string "He wanted me to give you this too.\n Crystals of this stuff was found in\l the new caves around here.\p Scientists turned it into a way to make\n your POKéMON stronger or something.$"

TheUnder_EventScript_Luna_Text_2:
# 29 "data/maps/TheUnder/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Do you want an explanation of TERA?$"

TheUnder_EventScript_Luna_Text_3:
# 39 "data/maps/TheUnder/scripts.pory"
	.string "So that rat bastard dug all the way out\n here, huh…$"

TheUnder_EventScript_Luna_Text_4:
# 44 "data/maps/TheUnder/scripts.pory"
	.string "Well, the first place I would go is the\n lab on ROUTE 135 to the east.\p There's some interesting stuff going on\n over there.\p Anyways, mucho texto. I'll be ready for\n our rematch once you're done here.$"

TheUnder_EventScript_Sign_Text_0:
# 66 "data/maps/TheUnder/scripts.pory"
	.string "{RIGHT_ARROW} POKéMON CENTER$"

TheUnder_EventScript_Artist_Text_0:
# 71 "data/maps/TheUnder/scripts.pory"
	.string "Such beauty…\n I must capture nature's splendors!$"

TheUnder_EventScript_Hiker_Text_0:
# 77 "data/maps/TheUnder/scripts.pory"
	.string "It was a long hike, but it was\n definitely worth it!$"

TheUnder_Text_CarsonIntro::
# 89 "data/maps/TheUnder/scripts.pory"
	.string "There's some RATICATE blocking the\n path in the tunnel!\p I tried battling them, but for some\n reason my POKéMON were scared.$"

TheUnder_Text_CarsonDefeat::
# 96 "data/maps/TheUnder/scripts.pory"
	.string "Huh… Why weren't they scared now?$"

TheUnder_Text_CarsonPostBattle::
# 100 "data/maps/TheUnder/scripts.pory"
	.string "If only I could figure out why my\n POKéMON are so scared of those\l RATICATE…$"

Common_Text_ExplainTera::
# 106 "data/maps/TheUnder/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}TERASTALLIZATION is a battle mechanic\n that allows you to change your\l POKéMON's TYPE temporarily during a\l battle.\p Similar to MEGA EVOLUTION, the TYPE\n the POKéMON TERASTALLIZED into will\l last until the end of the battle, or\l until the POKéMON faints.\p Only one POKéMON can TERA during a\n battle, and two gimmicks can't be\l used on the same POKéMON.\p To TERASTALLIZE, press START before\n selecting your move.\p While TERASTALLIZED, POKéMON receive\n  STAB (Same Type Attack Bonus) on\l moves matching their TERA TYPE,\l in addition to moves matching their\l  original TYPES.\p A POKéMON's TERA TYPE can be viewed\n in the summary screen.\p It will default to an existing TYPE\n the POKéMON has. Such as:\p A mono TYPE will have that TYPE as\n its TERA, while a DUAL TYPE could\l have either TYPE as the TERA.\p TERA SHARDS are required to change\n a POKéMON's TERA TYPE.\p They can be bought from vendors in\n NORTHERN HOENN.$"
