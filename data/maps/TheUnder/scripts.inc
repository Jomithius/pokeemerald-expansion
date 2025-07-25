TheUnder_MapScripts::
# 2 "data/maps/TheUnder/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TheUnder_OnTransition
	.byte 0


TheUnder_OnTransition::
# 6 "data/maps/TheUnder/scripts.pory"
	setflag FLAG_SYS_DYNAMIC_LEVELS
	end


TheUnder_EventScript_Luna::
# 11 "data/maps/TheUnder/scripts.pory"
	lockall
# 12 "data/maps/TheUnder/scripts.pory"
	checkobjectat 13, 45
# 13 "data/maps/TheUnder/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TheUnder_EventScript_Luna_2
# 17 "data/maps/TheUnder/scripts.pory"
	applymovement 7, TheUnder_Movement_Luna
TheUnder_EventScript_Luna_1:
# 19 "data/maps/TheUnder/scripts.pory"
	waitmovement 7
# 20 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Luna_Text_0, MSGBOX_DEFAULT
# 25 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 26 "data/maps/TheUnder/scripts.pory"
	giveitem ITEM_MASTER_BALL, 24
# 27 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 28 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Luna_Text_1, MSGBOX_DEFAULT
# 33 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 34 "data/maps/TheUnder/scripts.pory"
	giveitem ITEM_TERA_ORB
# 35 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 36 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Luna_Text_2, MSGBOX_YESNO
# 37 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 38 "data/maps/TheUnder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TheUnder_EventScript_Luna_6
TheUnder_EventScript_Luna_5:
# 42 "data/maps/TheUnder/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 43 "data/maps/TheUnder/scripts.pory"
	waitmovement 7
# 44 "data/maps/TheUnder/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 45 "data/maps/TheUnder/scripts.pory"
	waitmovement 7
# 46 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Luna_Text_3, MSGBOX_AUTOCLOSE
# 48 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 49 "data/maps/TheUnder/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceLeft
# 50 "data/maps/TheUnder/scripts.pory"
	waitmovement 7
# 51 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Luna_Text_4, MSGBOX_AUTOCLOSE
# 57 "data/maps/TheUnder/scripts.pory"
	waitmessage
# 58 "data/maps/TheUnder/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 59 "data/maps/TheUnder/scripts.pory"
	waitmovement 7
# 60 "data/maps/TheUnder/scripts.pory"
	setfieldeffectargument 0, 1
# 61 "data/maps/TheUnder/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 62 "data/maps/TheUnder/scripts.pory"
	delay 15
# 63 "data/maps/TheUnder/scripts.pory"
	removeobject 7
# 64 "data/maps/TheUnder/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 65 "data/maps/TheUnder/scripts.pory"
	setvar VAR_THE_UNDER_STATE, 1
# 66 "data/maps/TheUnder/scripts.pory"
	setflag FLAG_SYS_RECEIVED_TERA_ORB
# 67 "data/maps/TheUnder/scripts.pory"
	setflag FLAG_SYS_TERA_ORB_CHARGED
# 68 "data/maps/TheUnder/scripts.pory"
	clearflag FLAG_HIDE_TERA_SHARD_MERCHANTS
# 69 "data/maps/TheUnder/scripts.pory"
	releaseall
	end

TheUnder_EventScript_Luna_2:
# 14 "data/maps/TheUnder/scripts.pory"
	applymovement 7, TheUnder_Movement_LunaSouth
	goto TheUnder_EventScript_Luna_1

TheUnder_EventScript_Luna_6:
# 39 "data/maps/TheUnder/scripts.pory"
	msgbox Common_Text_ExplainTera, MSGBOX_AUTOCLOSE
# 40 "data/maps/TheUnder/scripts.pory"
	waitmessage
	goto TheUnder_EventScript_Luna_5


TheUnder_EventScript_Sign::
# 74 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


TheUnder_EventScript_Artist::
# 79 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Artist_Text_0, MSGBOX_SIGN
	end


TheUnder_EventScript_Hiker::
# 85 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Hiker_Text_0, MSGBOX_NPC
	end


TheUnder_EventScript_Carson::
# 96 "data/maps/TheUnder/scripts.pory"
	trainerbattle_single TRAINER_CARSON, TheUnder_Text_CarsonIntro, TheUnder_Text_CarsonDefeat
# 97 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_Text_CarsonPostBattle, MSGBOX_AUTOCLOSE
# 98 "data/maps/TheUnder/scripts.pory"
	waitmessage
	end


TheUnder_EventScript_Maximillian::
# 103 "data/maps/TheUnder/scripts.pory"
	trainerbattle_single TRAINER_MAXIMILLIAN, TheUnder_EventScript_Maximillian_Text_0, TheUnder_EventScript_Maximillian_Text_1
# 104 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Maximillian_Text_2, MSGBOX_NPC
	end


TheUnder_EventScript_Samothy::
# 110 "data/maps/TheUnder/scripts.pory"
	trainerbattle_single TRAINER_SAMOTHY, TheUnder_EventScript_Samothy_Text_0, TheUnder_EventScript_Samothy_Text_1
# 111 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Samothy_Text_2, MSGBOX_NPC
	end


TheUnder_EventScript_Trevor::
# 117 "data/maps/TheUnder/scripts.pory"
	trainerbattle_single TRAINER_TREVOR, TheUnder_EventScript_Trevor_Text_0, TheUnder_EventScript_Trevor_Text_1
# 118 "data/maps/TheUnder/scripts.pory"
	msgbox TheUnder_EventScript_Trevor_Text_1, MSGBOX_NPC
	end


# 171 "data/maps/TheUnder/scripts.pory"
TheUnder_Movement_Luna:
# 172 "data/maps/TheUnder/scripts.pory"
	walk_left
# 172 "data/maps/TheUnder/scripts.pory"
	walk_left
# 172 "data/maps/TheUnder/scripts.pory"
	walk_left
# 172 "data/maps/TheUnder/scripts.pory"
	walk_left
# 172 "data/maps/TheUnder/scripts.pory"
	walk_left
# 172 "data/maps/TheUnder/scripts.pory"
	walk_left
# 172 "data/maps/TheUnder/scripts.pory"
	walk_left
# 172 "data/maps/TheUnder/scripts.pory"
	walk_left
# 172 "data/maps/TheUnder/scripts.pory"
	walk_left
	step_end

# 175 "data/maps/TheUnder/scripts.pory"
TheUnder_Movement_LunaSouth:
# 176 "data/maps/TheUnder/scripts.pory"
	walk_down
# 177 "data/maps/TheUnder/scripts.pory"
	walk_left
# 177 "data/maps/TheUnder/scripts.pory"
	walk_left
# 177 "data/maps/TheUnder/scripts.pory"
	walk_left
# 177 "data/maps/TheUnder/scripts.pory"
	walk_left
# 177 "data/maps/TheUnder/scripts.pory"
	walk_left
# 177 "data/maps/TheUnder/scripts.pory"
	walk_left
# 177 "data/maps/TheUnder/scripts.pory"
	walk_left
# 177 "data/maps/TheUnder/scripts.pory"
	walk_left
# 177 "data/maps/TheUnder/scripts.pory"
	walk_left
	step_end

TheUnder_EventScript_Luna_Text_0:
# 20 "data/maps/TheUnder/scripts.pory"
	.string "LUNA: {PLAYER}. You made it.\p JIMMY wanted me to meet you out here.\n He has a message for you:\p Grinding is cringe, so here.\n Take these.$"

TheUnder_EventScript_Luna_Text_1:
# 28 "data/maps/TheUnder/scripts.pory"
	.string "He wanted me to give you this too.\n Crystals of this stuff was found in\l the new caves around here.\p Scientists turned it into a way to make\n your POKéMON stronger or something.$"

TheUnder_EventScript_Luna_Text_2:
# 36 "data/maps/TheUnder/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Do you want an explanation of TERA?$"

TheUnder_EventScript_Luna_Text_3:
# 46 "data/maps/TheUnder/scripts.pory"
	.string "So that rat bastard dug all the way out\n here, huh…$"

TheUnder_EventScript_Luna_Text_4:
# 51 "data/maps/TheUnder/scripts.pory"
	.string "Well, the first place I would go is the\n lab on ROUTE 135 to the east.\p There's some interesting stuff going on\n over there.\p Anyways, mucho texto. I'll be ready for\n our rematch once you're done here.$"

TheUnder_EventScript_Sign_Text_0:
# 74 "data/maps/TheUnder/scripts.pory"
	.string "{RIGHT_ARROW} POKéMON CENTER$"

TheUnder_EventScript_Artist_Text_0:
# 79 "data/maps/TheUnder/scripts.pory"
	.string "Such beauty…\n I must capture nature's splendors!$"

TheUnder_EventScript_Hiker_Text_0:
# 85 "data/maps/TheUnder/scripts.pory"
	.string "We're in a huge valley under\n the cliffside north of FALLARBOR.\p Before the new caves, it was hard\n to get out here if you couldn't\l afford to fly or go by ship.\p But now that I'm here, I can say the\n hike was definitely worth it!$"

TheUnder_EventScript_Maximillian_Text_0:
# 103 "data/maps/TheUnder/scripts.pory"
	.string "It was a long trip to get here!$"

TheUnder_EventScript_Maximillian_Text_1:
# 103 "data/maps/TheUnder/scripts.pory"
	.string "It was still worth it!$"

TheUnder_EventScript_Maximillian_Text_2:
# 104 "data/maps/TheUnder/scripts.pory"
	.string "Before it was almost impossible to\n get out here by foot.$"

TheUnder_EventScript_Samothy_Text_0:
# 110 "data/maps/TheUnder/scripts.pory"
	.string "Hey! Catch out this catch!$"

TheUnder_EventScript_Samothy_Text_1:
# 110 "data/maps/TheUnder/scripts.pory"
	.string "I should switch spots.$"

TheUnder_EventScript_Samothy_Text_2:
# 111 "data/maps/TheUnder/scripts.pory"
	.string "There's a lot of weird POKéMON\n out here.$"

TheUnder_EventScript_Trevor_Text_0:
# 117 "data/maps/TheUnder/scripts.pory"
	.string "Look at this cool POKéMON!$"

TheUnder_EventScript_Trevor_Text_1:
# 117 "data/maps/TheUnder/scripts.pory"
	.string "I've never seen a POKéMON like that!$"

TheUnder_Text_CarsonIntro::
# 122 "data/maps/TheUnder/scripts.pory"
	.string "There's some RATICATE blocking the\n path in the tunnel!\p I tried battling them, but for some\n reason my POKéMON were scared.$"

TheUnder_Text_CarsonDefeat::
# 129 "data/maps/TheUnder/scripts.pory"
	.string "Huh… Why weren't they scared now?$"

TheUnder_Text_CarsonPostBattle::
# 133 "data/maps/TheUnder/scripts.pory"
	.string "If only I could figure out why my\n POKéMON are so scared of those\l RATICATE…$"

Common_Text_ExplainTera::
# 139 "data/maps/TheUnder/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}TERASTALLIZATION is a battle mechanic\n that allows you to change your\l POKéMON's TYPE temporarily during a\l battle.\p Similar to MEGA EVOLUTION, the TYPE\n the POKéMON TERASTALLIZED into will\l last until the end of the battle, or\l until the POKéMON faints.\p Only one POKéMON can TERA during a\n battle, and two gimmicks can't be\l used on the same POKéMON.\p To TERASTALLIZE, press START before\n selecting your move.\p While TERASTALLIZED, POKéMON receive\n  STAB (Same Type Attack Bonus) on\l moves matching their TERA TYPE,\l in addition to moves matching their\l  original TYPES.\p A POKéMON's TERA TYPE can be viewed\n in the summary screen.\p It will default to an existing TYPE\n the POKéMON has. Such as:\p A mono TYPE will have that TYPE as\n its TERA, while a DUAL TYPE could\l have either TYPE as the TERA.\p TERA SHARDS are required to change\n a POKéMON's TERA TYPE.\p They can be bought from new vendors\n in POKé MARTS.$"
