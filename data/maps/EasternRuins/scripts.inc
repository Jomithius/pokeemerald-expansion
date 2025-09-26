EasternRuins_MapScripts::
# 2 "data/maps/EasternRuins/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EasternRuins_OnTransition
	.byte 0


EasternRuins_OnTransition::
# 6 "data/maps/EasternRuins/scripts.pory"
	setflag FLAG_SYS_DYNAMIC_LEVELS
	end


EasternRuins_EventScript_Kumiko::
# 11 "data/maps/EasternRuins/scripts.pory"
	trainerbattle_single TRAINER_KUMIKO, EasternRuins_EventScript_Kumiko_Text_0, EasternRuins_EventScript_Kumiko_Text_1
# 12 "data/maps/EasternRuins/scripts.pory"
	msgbox EasternRuins_EventScript_Kumiko_Text_2, MSGBOX_NPC
	end


EasternRuins_EventScript_Shiori::
# 17 "data/maps/EasternRuins/scripts.pory"
	trainerbattle_single TRAINER_SHIORI, EasternRuins_EventScript_Shiori_Text_0, EasternRuins_EventScript_Shiori_Text_1
# 18 "data/maps/EasternRuins/scripts.pory"
	msgbox EasternRuins_EventScript_Shiori_Text_2, MSGBOX_NPC
	end


EasternRuins_EventScript_Yumi::
# 24 "data/maps/EasternRuins/scripts.pory"
	trainerbattle_single TRAINER_YUMI, EasternRuins_EventScript_Yumi_Text_0, EasternRuins_EventScript_Yumi_Text_1
# 25 "data/maps/EasternRuins/scripts.pory"
	msgbox EasternRuins_EventScript_Yumi_Text_2, MSGBOX_NPC
	end


EasternRuins_EventScript_Chestird::
# 35 "data/maps/EasternRuins/scripts.pory"
	trainerbattle_single TRAINER_CHESTIRD, EasternRuins_EventScript_Chestird_Text_0, EasternRuins_EventScript_Chestird_Text_1
# 36 "data/maps/EasternRuins/scripts.pory"
	msgbox EasternRuins_EventScript_Chestird_Text_2, MSGBOX_NPC
	end


EasternRuins_EventScript_ManiacBlackAugurite::
# 43 "data/maps/EasternRuins/scripts.pory"
	lock
# 44 "data/maps/EasternRuins/scripts.pory"
	faceplayer
# 45 "data/maps/EasternRuins/scripts.pory"
	goto_if_set FLAG_RECEIVED_BLACK_AUGURITE, EasternRuins_EventScript_KleavorHint
# 46 "data/maps/EasternRuins/scripts.pory"
	msgbox EasternRuins_EventScript_ManiacBlackAugurite_Text_0, MSGBOX_DEFAULT
# 50 "data/maps/EasternRuins/scripts.pory"
	waitmessage
# 51 "data/maps/EasternRuins/scripts.pory"
	checkitemspace ITEM_BLACK_AUGURITE
# 52 "data/maps/EasternRuins/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EasternRuins_EventScript_ManiacBlackAugurite_2
# 58 "data/maps/EasternRuins/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
EasternRuins_EventScript_ManiacBlackAugurite_1:
# 60 "data/maps/EasternRuins/scripts.pory"
	msgbox EasternRuins_EventScript_ManiacBlackAugurite_Text_1, MSGBOX_AUTOCLOSE
# 62 "data/maps/EasternRuins/scripts.pory"
	waitmessage
	end

EasternRuins_EventScript_ManiacBlackAugurite_2:
# 53 "data/maps/EasternRuins/scripts.pory"
	giveitem ITEM_BLACK_AUGURITE
# 54 "data/maps/EasternRuins/scripts.pory"
	setflag FLAG_RECEIVED_BLACK_AUGURITE
# 55 "data/maps/EasternRuins/scripts.pory"
	waitmessage
	goto EasternRuins_EventScript_ManiacBlackAugurite_1


EasternRuins_EventScript_KleavorHint::
# 67 "data/maps/EasternRuins/scripts.pory"
	msgbox EasternRuins_EventScript_KleavorHint_Text_0, MSGBOX_NPC
	end


EasternRuins_EventScript_HexManiacMaliciousArmor::
# 73 "data/maps/EasternRuins/scripts.pory"
	lock
# 74 "data/maps/EasternRuins/scripts.pory"
	faceplayer
# 75 "data/maps/EasternRuins/scripts.pory"
	goto_if_set FLAG_RECEIVED_MALICIOUS_ARMOR, EasternRuins_EventScript_HexManiacThanks
# 76 "data/maps/EasternRuins/scripts.pory"
	msgbox EasternRuins_EventScript_HexManiacMaliciousArmor_Text_0, MSGBOX_DEFAULT
# 79 "data/maps/EasternRuins/scripts.pory"
	waitmessage
# 80 "data/maps/EasternRuins/scripts.pory"
	special IsGhostTypeInParty
# 81 "data/maps/EasternRuins/scripts.pory"
	goto_if_ne VAR_RESULT, TRUE, EasternRuins_EventScript_HexManiacShowMeAGhostType
# 82 "data/maps/EasternRuins/scripts.pory"
	playse SE_PIN
# 83 "data/maps/EasternRuins/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 84 "data/maps/EasternRuins/scripts.pory"
	waitmovement 0
# 85 "data/maps/EasternRuins/scripts.pory"
	waitse
# 86 "data/maps/EasternRuins/scripts.pory"
	msgbox EasternRuins_EventScript_HexManiacMaliciousArmor_Text_1, MSGBOX_DEFAULT
# 89 "data/maps/EasternRuins/scripts.pory"
	checkitemspace ITEM_MALICIOUS_ARMOR
# 90 "data/maps/EasternRuins/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 91 "data/maps/EasternRuins/scripts.pory"
	giveitem ITEM_MALICIOUS_ARMOR
# 92 "data/maps/EasternRuins/scripts.pory"
	setflag FLAG_RECEIVED_MALICIOUS_ARMOR
# 93 "data/maps/EasternRuins/scripts.pory"
	waitmessage
# 94 "data/maps/EasternRuins/scripts.pory"
	msgbox EasternRuins_EventScript_HexManiacMaliciousArmor_Text_2, MSGBOX_AUTOCLOSE
# 96 "data/maps/EasternRuins/scripts.pory"
	waitmessage
	end


EasternRuins_EventScript_HexManiacShowMeAGhostType::
# 101 "data/maps/EasternRuins/scripts.pory"
	msgbox EasternRuins_EventScript_HexManiacShowMeAGhostType_Text_0, MSGBOX_NPC
	end


EasternRuins_EventScript_HexManiacThanks::
# 107 "data/maps/EasternRuins/scripts.pory"
	msgbox EasternRuins_EventScript_HexManiacThanks_Text_0, MSGBOX_NPC
	end


EasternRuins_EventScript_Kumiko_Text_0:
# 11 "data/maps/EasternRuins/scripts.pory"
	.string "It should be me!\pI should be the one to accompany\nthe BALD MAIDEN!$"

EasternRuins_EventScript_Kumiko_Text_1:
# 11 "data/maps/EasternRuins/scripts.pory"
	.string "I won't stand for this!$"

EasternRuins_EventScript_Kumiko_Text_2:
# 12 "data/maps/EasternRuins/scripts.pory"
	.string "Why won't they let me in?!$"

EasternRuins_EventScript_Shiori_Text_0:
# 17 "data/maps/EasternRuins/scripts.pory"
	.string "Fufufu…\pI can feel the power eminating\nfrom the land…$"

EasternRuins_EventScript_Shiori_Text_1:
# 17 "data/maps/EasternRuins/scripts.pory"
	.string "Fufufufu…$"

EasternRuins_EventScript_Shiori_Text_2:
# 18 "data/maps/EasternRuins/scripts.pory"
	.string "These sacred lands…\n There is so much history in these ruins.$"

EasternRuins_EventScript_Yumi_Text_0:
# 24 "data/maps/EasternRuins/scripts.pory"
	.string "Fufufu…\nSoon, JIRACHI will awaken…$"

EasternRuins_EventScript_Yumi_Text_1:
# 24 "data/maps/EasternRuins/scripts.pory"
	.string "Soon…$"

EasternRuins_EventScript_Yumi_Text_2:
# 25 "data/maps/EasternRuins/scripts.pory"
	.string "… There's an old tale of a MOCHI\n making POKéMON and his LOYAL THREE\l killing a TRAINER and stealing three sacred masks from him…\p That TRAINER's POKéMON was then said\n to be chasing after them for revenge…$"

EasternRuins_EventScript_Chestird_Text_0:
# 35 "data/maps/EasternRuins/scripts.pory"
	.string "I had to pay a lot of money\nto be able to get here…$"

EasternRuins_EventScript_Chestird_Text_1:
# 35 "data/maps/EasternRuins/scripts.pory"
	.string "I guess money can't help me\nwin battles!$"

EasternRuins_EventScript_Chestird_Text_2:
# 36 "data/maps/EasternRuins/scripts.pory"
	.string "The ruins behind me are intruiging.\n It seems as though they have been\l recently inhabited by POKéMON.$"

EasternRuins_EventScript_ManiacBlackAugurite_Text_0:
# 46 "data/maps/EasternRuins/scripts.pory"
	.string "You're a TRAINER, aren't you?\n I found this weird rock.\p I couldn't find a use for it, but maybe\n you can.$"

EasternRuins_EventScript_ManiacBlackAugurite_Text_1:
# 60 "data/maps/EasternRuins/scripts.pory"
	.string "Maybe a POKéMON can use it\n or something.$"

EasternRuins_EventScript_KleavorHint_Text_0:
# 67 "data/maps/EasternRuins/scripts.pory"
	.string "That weird rock…\n Maybe it's for a POKéMON?$"

EasternRuins_EventScript_HexManiacMaliciousArmor_Text_0:
# 76 "data/maps/EasternRuins/scripts.pory"
	.string "I-I love GHOST-type P-POKéMON…\p Show me one a-and I'll…\n g-give you a gift…$"

EasternRuins_EventScript_HexManiacMaliciousArmor_Text_1:
# 86 "data/maps/EasternRuins/scripts.pory"
	.string "T-Thanks for s-showing me a\n G-GHOST-type P-POKéMON…\p H-Here.$"

EasternRuins_EventScript_HexManiacMaliciousArmor_Text_2:
# 94 "data/maps/EasternRuins/scripts.pory"
	.string "I hope t-that armor suits you\n w-well…$"

EasternRuins_EventScript_HexManiacShowMeAGhostType_Text_0:
# 101 "data/maps/EasternRuins/scripts.pory"
	.string "O-Oh…\n You d-don't have a GHOST T-type?$"

EasternRuins_EventScript_HexManiacThanks_Text_0:
# 107 "data/maps/EasternRuins/scripts.pory"
	.string "T-Thanks for s-showing me a\n G-GHOST-type P-POKéMON…\p I hope t-that armor suits you\n w-well…$"
