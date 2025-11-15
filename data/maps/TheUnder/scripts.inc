TheUnder_MapScripts::
# 2 "data/maps/TheUnder/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TheUnder_OnTransition
	.byte 0


TheUnder_OnTransition::
# 6 "data/maps/TheUnder/scripts.pory"
	setflag FLAG_VISITED_THE_UNDER
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
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 22 "data/maps/TheUnder/scripts.pory"
	waitmovement 0
# 23 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Luna_Text_0, MSGBOX_DEFAULT
# 28 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 29 "data/maps/TheUnder/scripts.pory"
	giveitem ITEM_MASTER_BALL, 24
# 30 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 31 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Luna_Text_1, MSGBOX_DEFAULT
# 36 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 37 "data/maps/TheUnder/scripts.pory"
	giveitem ITEM_TERA_ORB
# 38 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 39 "data/maps/TheUnder/scripts.pory"
	giveitem ITEM_TM_TERA_BLAST
# 40 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 41 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Luna_Text_2, MSGBOX_YESNO
# 42 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 43 "data/maps/TheUnder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TheUnder_EventScript_Luna_6
TheUnder_EventScript_Luna_5:
# 47 "data/maps/TheUnder/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 48 "data/maps/TheUnder/scripts.pory"
	waitmovement 7
# 49 "data/maps/TheUnder/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 50 "data/maps/TheUnder/scripts.pory"
	waitmovement 7
# 51 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Luna_Text_3, MSGBOX_AUTOCLOSE
# 53 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 54 "data/maps/TheUnder/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceLeft
# 55 "data/maps/TheUnder/scripts.pory"
	waitmovement 7
# 56 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Luna_Text_4, MSGBOX_AUTOCLOSE
# 62 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 63 "data/maps/TheUnder/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 64 "data/maps/TheUnder/scripts.pory"
	waitmovement 7
# 65 "data/maps/TheUnder/scripts.pory"
	setfieldeffectargument 0, 1
# 66 "data/maps/TheUnder/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 67 "data/maps/TheUnder/scripts.pory"
	delay 15
# 68 "data/maps/TheUnder/scripts.pory"
	removeobject 7
# 69 "data/maps/TheUnder/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 70 "data/maps/TheUnder/scripts.pory"
	setvar VAR_THE_UNDER_STATE, 1
# 71 "data/maps/TheUnder/scripts.pory"
	setflag FLAG_SYS_RECEIVED_TERA_ORB
# 72 "data/maps/TheUnder/scripts.pory"
	setflag FLAG_SYS_TERA_ORB_CHARGED
# 73 "data/maps/TheUnder/scripts.pory"
	clearflag FLAG_HIDE_TERA_SHARD_MERCHANTS
# 74 "data/maps/TheUnder/scripts.pory"
	releaseall
	end

TheUnder_EventScript_Luna_2:
# 15 "data/maps/TheUnder/scripts.pory"
	applymovement 7, TheUnder_Movement_LunaSouth
	goto TheUnder_EventScript_Luna_1

TheUnder_EventScript_Luna_6:
# 44 "data/maps/TheUnder/scripts.pory"
	msgbox Common_Text_ExplainTera, MSGBOX_AUTOCLOSE
# 45 "data/maps/TheUnder/scripts.pory"
	waitmessage
	goto TheUnder_EventScript_Luna_5


TheUnder_EventScript_Sign::
# 79 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


TheUnder_EventScript_Artist::
# 85 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Artist_Text_0, MSGBOX_SIGN
	end


TheUnder_EventScript_Hiker::
# 91 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Hiker_Text_0, MSGBOX_NPC
	end


TheUnder_EventScript_Carson::
# 102 "data/maps/TheUnder/scripts.pory"
	trainerbattle_single TRAINER_CARSON, TheUnder_Text_CarsonIntro, TheUnder_Text_CarsonDefeat
# 103 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_Text_CarsonPostBattle, MSGBOX_NPC
	end


TheUnder_EventScript_Maximillian::
# 108 "data/maps/TheUnder/scripts.pory"
	trainerbattle_single TRAINER_MAXIMILLIAN, TheUnder_EventScript_Maximillian_Text_0, TheUnder_EventScript_Maximillian_Text_1
# 109 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Maximillian_Text_2, MSGBOX_NPC
	end


TheUnder_EventScript_Samothy::
# 115 "data/maps/TheUnder/scripts.pory"
	trainerbattle_single TRAINER_SAMOTHY, TheUnder_EventScript_Samothy_Text_0, TheUnder_EventScript_Samothy_Text_1
# 116 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Samothy_Text_2, MSGBOX_NPC
	end


TheUnder_EventScript_Jason::
# 122 "data/maps/TheUnder/scripts.pory"
	trainerbattle_single TRAINER_JASON, TheUnder_EventScript_Jason_Text_0, TheUnder_EventScript_Jason_Text_1
# 123 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Jason_Text_2, MSGBOX_NPC
	end


TheUnder_EventScript_Woman::
# 132 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Woman_Text_0, MSGBOX_NPC
	end


TheUnder_EventScript_Trevor::
# 139 "data/maps/TheUnder/scripts.pory"
	trainerbattle_single TRAINER_TREVOR, TheUnder_EventScript_Trevor_Text_0, TheUnder_EventScript_Trevor_Text_1
# 140 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Trevor_Text_2, MSGBOX_NPC
	end


# 197 "data/maps/TheUnder/scripts.pory"
TheUnder_Movement_Luna:
# 198 "data/maps/TheUnder/scripts.pory"
	walk_left
# 198 "data/maps/TheUnder/scripts.pory"
	walk_left
# 198 "data/maps/TheUnder/scripts.pory"
	walk_left
# 198 "data/maps/TheUnder/scripts.pory"
	walk_left
# 198 "data/maps/TheUnder/scripts.pory"
	walk_left
# 198 "data/maps/TheUnder/scripts.pory"
	walk_left
# 198 "data/maps/TheUnder/scripts.pory"
	walk_left
# 198 "data/maps/TheUnder/scripts.pory"
	walk_left
# 198 "data/maps/TheUnder/scripts.pory"
	walk_left
	step_end

# 201 "data/maps/TheUnder/scripts.pory"
TheUnder_Movement_LunaSouth:
# 202 "data/maps/TheUnder/scripts.pory"
	walk_down
# 203 "data/maps/TheUnder/scripts.pory"
	walk_left
# 203 "data/maps/TheUnder/scripts.pory"
	walk_left
# 203 "data/maps/TheUnder/scripts.pory"
	walk_left
# 203 "data/maps/TheUnder/scripts.pory"
	walk_left
# 203 "data/maps/TheUnder/scripts.pory"
	walk_left
# 203 "data/maps/TheUnder/scripts.pory"
	walk_left
# 203 "data/maps/TheUnder/scripts.pory"
	walk_left
# 203 "data/maps/TheUnder/scripts.pory"
	walk_left
# 203 "data/maps/TheUnder/scripts.pory"
	walk_left
	step_end

TheUnder_EventScript_Luna_Text_0:
# 23 "data/maps/TheUnder/scripts.pory"
	.string "LUNA: {PLAYER}. You made it.\p JIMMY wanted me to meet you out here.\n He has a message for you:\p “Grinding is cringe, so here.\n Take these.”$"

TheUnder_EventScript_Luna_Text_1:
# 31 "data/maps/TheUnder/scripts.pory"
	.string "LUNA: He wanted me to give you this too.\p Crystals of this stuff was found in\n the new caves around here.\p Scientists turned it into a way to make\n your POKéMON stronger or something.$"

TheUnder_EventScript_Luna_Text_2:
# 41 "data/maps/TheUnder/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Do you want an explanation of TERA?$"

TheUnder_EventScript_Luna_Text_3:
# 51 "data/maps/TheUnder/scripts.pory"
	.string "LUNA: So that rat bastard dug all the\n way out here, huh…$"

TheUnder_EventScript_Luna_Text_4:
# 56 "data/maps/TheUnder/scripts.pory"
	.string "Well, the first place I would go is the\n lab on ROUTE 135 to the west.\p There's some interesting stuff going on\n over there.\p Anyways, mucho texto. I'll be ready for\n our rematch once you're done here.$"

TheUnder_EventScript_Sign_Text_0:
# 79 "data/maps/TheUnder/scripts.pory"
	.string "{RIGHT_ARROW} POKéMON CENTER\p {UP_ARROW}{LEFT_ARROW} ROUTE 135 & LUSH ACREAGE$"

TheUnder_EventScript_Artist_Text_0:
# 85 "data/maps/TheUnder/scripts.pory"
	.string "Such beauty…\n I must capture nature's splendors!$"

TheUnder_EventScript_Hiker_Text_0:
# 91 "data/maps/TheUnder/scripts.pory"
	.string "We're in a huge valley under\n the cliffside north of FALLARBOR.\p Before the new caves, it was hard\n to get out here if you couldn't\l afford to fly or go by ship.\p But now that I'm here, I can say the\n hike was definitely worth it!$"

TheUnder_EventScript_Maximillian_Text_0:
# 108 "data/maps/TheUnder/scripts.pory"
	.string "It took a long time to\nget here!$"

TheUnder_EventScript_Maximillian_Text_1:
# 108 "data/maps/TheUnder/scripts.pory"
	.string "It was still worth it!$"

TheUnder_EventScript_Maximillian_Text_2:
# 109 "data/maps/TheUnder/scripts.pory"
	.string "It used to be nearly impossible to\n get out here on foot.$"

TheUnder_EventScript_Samothy_Text_0:
# 115 "data/maps/TheUnder/scripts.pory"
	.string "Hey!\nCheck out this catch!$"

TheUnder_EventScript_Samothy_Text_1:
# 115 "data/maps/TheUnder/scripts.pory"
	.string "I should switch spots.$"

TheUnder_EventScript_Samothy_Text_2:
# 116 "data/maps/TheUnder/scripts.pory"
	.string "There's a lot of weird POKéMON\n out here.$"

TheUnder_EventScript_Jason_Text_0:
# 122 "data/maps/TheUnder/scripts.pory"
	.string "They can have the ground.\nI own the sky!$"

TheUnder_EventScript_Jason_Text_1:
# 122 "data/maps/TheUnder/scripts.pory"
	.string "Mayday!\nCrashing and burning over here!$"

TheUnder_EventScript_Jason_Text_2:
# 123 "data/maps/TheUnder/scripts.pory"
	.string "I work for SNOWDRIFT CITY's\n CORVIKNIGHT service.\p We bring people up and down the\n mountain, but we have to be careful\l of the TINKATON.$"

TheUnder_EventScript_Woman_Text_0:
# 132 "data/maps/TheUnder/scripts.pory"
	.string "If you have a chance, you should stop\n by LUSH ACREAGE and try our famous\l MOOMOO MILK!$"

TheUnder_EventScript_Trevor_Text_0:
# 139 "data/maps/TheUnder/scripts.pory"
	.string "Look at this cool POKéMON!$"

TheUnder_EventScript_Trevor_Text_1:
# 139 "data/maps/TheUnder/scripts.pory"
	.string "I've never seen a POKéMON like that!$"

TheUnder_EventScript_Trevor_Text_2:
# 140 "data/maps/TheUnder/scripts.pory"
	.string "There's so many great catches\n out here!$"

TheUnder_Text_CarsonIntro::
# 145 "data/maps/TheUnder/scripts.pory"
	.string "There's some RATICATE blocking the\n path in the tunnel!\p I tried battling them, but for some\n reason my POKéMON were scared.$"

TheUnder_Text_CarsonDefeat::
# 152 "data/maps/TheUnder/scripts.pory"
	.string "…Hunh?\nWhy weren't they scared now?$"

TheUnder_Text_CarsonPostBattle::
# 156 "data/maps/TheUnder/scripts.pory"
	.string "If only I could figure out why my\n POKéMON are so scared of those\l RATICATE…\p It seemed like my DONPHAN and\n COPPERAJAH were the most scared…\p Hunh? …I don't get it.\n It really perplexes me…$"

Common_Text_ExplainTera::
# 166 "data/maps/TheUnder/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}TERASTALLIZATION is a battle mechanic\n that allows you to change your\l POKéMON's type temporarily during a\l battle.\p Similar to MEGA EVOLUTION, the type\n the POKéMON TERASTALLIZED into will\l last until the end of the battle, or\l until the POKéMON faints.\p Only one POKéMON can TERA during a\n battle, and two gimmicks can't be\l used on the same POKéMON.\p To TERASTALLIZE, press START before\n selecting your move.\p While TERASTALLIZED, POKéMON receive\n STAB (Same Type Attack Bonus) on\l moves matching their TERA-type,\l in addition to moves matching their\l original types.\p A POKéMON's TERA-type can be viewed\n in the summary screen.\p It will default to an existing type\n the POKéMON has.\p After using TERA, the TERA ORB needs to\n be recharged at a POKéMON CENTER.\p TERA SHARDS are required to change\n a POKéMON's TERA-type.\p They can be bought from new vendors\n in POKé MARTS.$"
