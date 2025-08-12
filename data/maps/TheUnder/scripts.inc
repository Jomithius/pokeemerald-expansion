TheUnder_MapScripts::
# 2 "data/maps/TheUnder/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TheUnder_OnTransition
	.byte 0


TheUnder_OnTransition::
# 6 "data/maps/TheUnder/scripts.pory"
	setflag FLAG_LANDMARK_THE_UNDER
# 7 "data/maps/TheUnder/scripts.pory"
	setflag FLAG_SYS_DYNAMIC_LEVELS
	end


TheUnder_EventScript_Luna::
# 12 "data/maps/TheUnder/scripts.pory"
	lockall
# 13 "data/maps/TheUnder/scripts.pory"
	checkobjectat 13, 45
# 14 "data/maps/TheUnder/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TheUnder_EventScript_Luna_2
# 18 "data/maps/TheUnder/scripts.pory"
	applymovement 7, TheUnder_Movement_Luna
TheUnder_EventScript_Luna_1:
# 20 "data/maps/TheUnder/scripts.pory"
	waitmovement 7
# 21 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Luna_Text_0, MSGBOX_DEFAULT
# 26 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 27 "data/maps/TheUnder/scripts.pory"
	giveitem ITEM_MASTER_BALL, 24
# 28 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 29 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Luna_Text_1, MSGBOX_DEFAULT
# 34 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 35 "data/maps/TheUnder/scripts.pory"
	giveitem ITEM_TERA_ORB
# 36 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 37 "data/maps/TheUnder/scripts.pory"
	giveitem ITEM_TM_TERA_BLAST
# 38 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 39 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Luna_Text_2, MSGBOX_YESNO
# 40 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 41 "data/maps/TheUnder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TheUnder_EventScript_Luna_6
TheUnder_EventScript_Luna_5:
# 45 "data/maps/TheUnder/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 46 "data/maps/TheUnder/scripts.pory"
	waitmovement 7
# 47 "data/maps/TheUnder/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 48 "data/maps/TheUnder/scripts.pory"
	waitmovement 7
# 49 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Luna_Text_3, MSGBOX_AUTOCLOSE
# 51 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 52 "data/maps/TheUnder/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceLeft
# 53 "data/maps/TheUnder/scripts.pory"
	waitmovement 7
# 54 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Luna_Text_4, MSGBOX_AUTOCLOSE
# 60 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 61 "data/maps/TheUnder/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 62 "data/maps/TheUnder/scripts.pory"
	waitmovement 7
# 63 "data/maps/TheUnder/scripts.pory"
	setfieldeffectargument 0, 1
# 64 "data/maps/TheUnder/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 65 "data/maps/TheUnder/scripts.pory"
	delay 15
# 66 "data/maps/TheUnder/scripts.pory"
	removeobject 7
# 67 "data/maps/TheUnder/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 68 "data/maps/TheUnder/scripts.pory"
	setvar VAR_THE_UNDER_STATE, 1
# 69 "data/maps/TheUnder/scripts.pory"
	setflag FLAG_SYS_RECEIVED_TERA_ORB
# 70 "data/maps/TheUnder/scripts.pory"
	setflag FLAG_SYS_TERA_ORB_CHARGED
# 71 "data/maps/TheUnder/scripts.pory"
	clearflag FLAG_HIDE_TERA_SHARD_MERCHANTS
# 72 "data/maps/TheUnder/scripts.pory"
	releaseall
	end

TheUnder_EventScript_Luna_2:
# 15 "data/maps/TheUnder/scripts.pory"
	applymovement 7, TheUnder_Movement_LunaSouth
	goto TheUnder_EventScript_Luna_1

TheUnder_EventScript_Luna_6:
# 42 "data/maps/TheUnder/scripts.pory"
	msgbox Common_Text_ExplainTera, MSGBOX_AUTOCLOSE
# 43 "data/maps/TheUnder/scripts.pory"
	waitmessage
	goto TheUnder_EventScript_Luna_5


TheUnder_EventScript_Sign::
# 77 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


TheUnder_EventScript_Artist::
# 83 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Artist_Text_0, MSGBOX_SIGN
	end


TheUnder_EventScript_Hiker::
# 89 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Hiker_Text_0, MSGBOX_NPC
	end


TheUnder_EventScript_Carson::
# 100 "data/maps/TheUnder/scripts.pory"
	trainerbattle_single TRAINER_CARSON, TheUnder_Text_CarsonIntro, TheUnder_Text_CarsonDefeat
# 101 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_Text_CarsonPostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/TheUnder/scripts.pory"
	waitmessage
	end


TheUnder_EventScript_Maximillian::
# 107 "data/maps/TheUnder/scripts.pory"
	trainerbattle_single TRAINER_MAXIMILLIAN, TheUnder_EventScript_Maximillian_Text_0, TheUnder_EventScript_Maximillian_Text_1
# 108 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Maximillian_Text_2, MSGBOX_NPC
	end


TheUnder_EventScript_Samothy::
# 114 "data/maps/TheUnder/scripts.pory"
	trainerbattle_single TRAINER_SAMOTHY, TheUnder_EventScript_Samothy_Text_0, TheUnder_EventScript_Samothy_Text_1
# 115 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Samothy_Text_2, MSGBOX_NPC
	end


TheUnder_EventScript_Trevor::
# 121 "data/maps/TheUnder/scripts.pory"
	trainerbattle_single TRAINER_TREVOR, TheUnder_EventScript_Trevor_Text_0, TheUnder_EventScript_Trevor_Text_1
# 122 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Trevor_Text_2, MSGBOX_NPC
	end


TheUnder_EventScript_Woman::
# 131 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Woman_Text_0, MSGBOX_NPC
	end


TheUnder_EventScript_Jason::
# 140 "data/maps/TheUnder/scripts.pory"
	trainerbattle_single TRAINER_JASON, TheUnder_EventScript_Jason_Text_0, TheUnder_EventScript_Jason_Text_1
# 141 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Jason_Text_1, MSGBOX_NPC
	end


# 194 "data/maps/TheUnder/scripts.pory"
TheUnder_Movement_Luna:
# 195 "data/maps/TheUnder/scripts.pory"
	walk_left
# 195 "data/maps/TheUnder/scripts.pory"
	walk_left
# 195 "data/maps/TheUnder/scripts.pory"
	walk_left
# 195 "data/maps/TheUnder/scripts.pory"
	walk_left
# 195 "data/maps/TheUnder/scripts.pory"
	walk_left
# 195 "data/maps/TheUnder/scripts.pory"
	walk_left
# 195 "data/maps/TheUnder/scripts.pory"
	walk_left
# 195 "data/maps/TheUnder/scripts.pory"
	walk_left
# 195 "data/maps/TheUnder/scripts.pory"
	walk_left
	step_end

# 198 "data/maps/TheUnder/scripts.pory"
TheUnder_Movement_LunaSouth:
# 199 "data/maps/TheUnder/scripts.pory"
	walk_down
# 200 "data/maps/TheUnder/scripts.pory"
	walk_left
# 200 "data/maps/TheUnder/scripts.pory"
	walk_left
# 200 "data/maps/TheUnder/scripts.pory"
	walk_left
# 200 "data/maps/TheUnder/scripts.pory"
	walk_left
# 200 "data/maps/TheUnder/scripts.pory"
	walk_left
# 200 "data/maps/TheUnder/scripts.pory"
	walk_left
# 200 "data/maps/TheUnder/scripts.pory"
	walk_left
# 200 "data/maps/TheUnder/scripts.pory"
	walk_left
# 200 "data/maps/TheUnder/scripts.pory"
	walk_left
	step_end

TheUnder_EventScript_Luna_Text_0:
# 21 "data/maps/TheUnder/scripts.pory"
	.string "LUNA: {PLAYER}. You made it.\p JIMMY wanted me to meet you out here.\n He has a message for you:\p Grinding is cringe, so here.\n Take these.$"

TheUnder_EventScript_Luna_Text_1:
# 29 "data/maps/TheUnder/scripts.pory"
	.string "He wanted me to give you this too.\n Crystals of this stuff was found in\l the new caves around here.\p Scientists turned it into a way to make\n your POKéMON stronger or something.$"

TheUnder_EventScript_Luna_Text_2:
# 39 "data/maps/TheUnder/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Do you want an explanation of TERA?$"

TheUnder_EventScript_Luna_Text_3:
# 49 "data/maps/TheUnder/scripts.pory"
	.string "So that rat bastard dug all the way out\n here, huh…$"

TheUnder_EventScript_Luna_Text_4:
# 54 "data/maps/TheUnder/scripts.pory"
	.string "Well, the first place I would go is the\n lab on ROUTE 135 to the west.\p There's some interesting stuff going on\n over there.\p Anyways, mucho texto. I'll be ready for\n our rematch once you're done here.$"

TheUnder_EventScript_Sign_Text_0:
# 77 "data/maps/TheUnder/scripts.pory"
	.string "{RIGHT_ARROW} POKéMON CENTER\p {UP_ARROW}{LEFT_ARROW} ROUTE 135 & LUSH ACREAGE$"

TheUnder_EventScript_Artist_Text_0:
# 83 "data/maps/TheUnder/scripts.pory"
	.string "Such beauty…\n I must capture nature's splendors!$"

TheUnder_EventScript_Hiker_Text_0:
# 89 "data/maps/TheUnder/scripts.pory"
	.string "We're in a huge valley under\n the cliffside north of FALLARBOR.\p Before the new caves, it was hard\n to get out here if you couldn't\l afford to fly or go by ship.\p But now that I'm here, I can say the\n hike was definitely worth it!$"

TheUnder_EventScript_Maximillian_Text_0:
# 107 "data/maps/TheUnder/scripts.pory"
	.string "It was a long trip to get here!$"

TheUnder_EventScript_Maximillian_Text_1:
# 107 "data/maps/TheUnder/scripts.pory"
	.string "It was still worth it!$"

TheUnder_EventScript_Maximillian_Text_2:
# 108 "data/maps/TheUnder/scripts.pory"
	.string "Before it was almost impossible to\n get out here by foot.$"

TheUnder_EventScript_Samothy_Text_0:
# 114 "data/maps/TheUnder/scripts.pory"
	.string "Hey! Catch out this catch!$"

TheUnder_EventScript_Samothy_Text_1:
# 114 "data/maps/TheUnder/scripts.pory"
	.string "I should switch spots.$"

TheUnder_EventScript_Samothy_Text_2:
# 115 "data/maps/TheUnder/scripts.pory"
	.string "There's a lot of weird POKéMON\n out here.$"

TheUnder_EventScript_Trevor_Text_0:
# 121 "data/maps/TheUnder/scripts.pory"
	.string "They can have the ground.\nI own the sky!$"

TheUnder_EventScript_Trevor_Text_1:
# 121 "data/maps/TheUnder/scripts.pory"
	.string "Mayday!\n Crashing and burning over here!$"

TheUnder_EventScript_Trevor_Text_2:
# 122 "data/maps/TheUnder/scripts.pory"
	.string "I work for SNOWDRIFT CITY's\n CORVIKNIGHT service.\p We bring people up and down the\n mountain, but we have to be careful\l of the TINKATON.$"

TheUnder_EventScript_Woman_Text_0:
# 131 "data/maps/TheUnder/scripts.pory"
	.string "I love coming here during my days off.\n The sound of the waterfall relaxes me.\p If you have a chance, you should stop\n by LUSH ACREAGE and try our famous\l MOOMOO MILK!$"

TheUnder_EventScript_Jason_Text_0:
# 140 "data/maps/TheUnder/scripts.pory"
	.string "Look at this cool POKéMON!$"

TheUnder_EventScript_Jason_Text_1:
# 140 "data/maps/TheUnder/scripts.pory"
	.string "I've never seen a POKéMON like that!$"

TheUnder_Text_CarsonIntro::
# 145 "data/maps/TheUnder/scripts.pory"
	.string "There's some RATICATE blocking the\n path in the tunnel!\p I tried battling them, but for some\n reason my POKéMON were scared.$"

TheUnder_Text_CarsonDefeat::
# 152 "data/maps/TheUnder/scripts.pory"
	.string "Huh… Why weren't they scared now?$"

TheUnder_Text_CarsonPostBattle::
# 156 "data/maps/TheUnder/scripts.pory"
	.string "If only I could figure out why my\n POKéMON are so scared of those\l RATICATE…$"

Common_Text_ExplainTera::
# 162 "data/maps/TheUnder/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}TERASTALLIZATION is a battle mechanic\n that allows you to change your\l POKéMON's TYPE temporarily during a\l battle.\p Similar to MEGA EVOLUTION, the TYPE\n the POKéMON TERASTALLIZED into will\l last until the end of the battle, or\l until the POKéMON faints.\p Only one POKéMON can TERA during a\n battle, and two gimmicks can't be\l used on the same POKéMON.\p To TERASTALLIZE, press START before\n selecting your move.\p While TERASTALLIZED, POKéMON receive\n  STAB (Same Type Attack Bonus) on\l moves matching their TERA TYPE,\l in addition to moves matching their\l  original TYPES.\p A POKéMON's TERA TYPE can be viewed\n in the summary screen.\p It will default to an existing TYPE\n the POKéMON has. Such as:\p A mono TYPE will have that TYPE as\n its TERA, while a DUAL TYPE could\l have either TYPE as the TERA.\p TERA SHARDS are required to change\n a POKéMON's TERA TYPE.\p They can be bought from new vendors\n in POKé MARTS.$"
