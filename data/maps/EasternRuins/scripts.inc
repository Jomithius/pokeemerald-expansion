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
# 31 "data/maps/EasternRuins/scripts.pory"
	trainerbattle_single TRAINER_CHESTIRD, EasternRuins_EventScript_Chestird_Text_0, EasternRuins_EventScript_Chestird_Text_1
# 32 "data/maps/EasternRuins/scripts.pory"
	msgbox EasternRuins_EventScript_Chestird_Text_2, MSGBOX_NPC
	end


EasternRuins_EventScript_ManiacBlackAugurite::
# 39 "data/maps/EasternRuins/scripts.pory"
	lock
# 40 "data/maps/EasternRuins/scripts.pory"
	faceplayer
# 41 "data/maps/EasternRuins/scripts.pory"
	goto_if_set FLAG_RECEIVED_BLACK_AUGURITE, EasternRuins_EventScript_KleavorHint
# 42 "data/maps/EasternRuins/scripts.pory"
	msgbox EasternRuins_EventScript_ManiacBlackAugurite_Text_0, MSGBOX_DEFAULT
# 46 "data/maps/EasternRuins/scripts.pory"
	waitmessage
# 47 "data/maps/EasternRuins/scripts.pory"
	checkitemspace ITEM_BLACK_AUGURITE
# 48 "data/maps/EasternRuins/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EasternRuins_EventScript_ManiacBlackAugurite_2
# 54 "data/maps/EasternRuins/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
EasternRuins_EventScript_ManiacBlackAugurite_1:
# 56 "data/maps/EasternRuins/scripts.pory"
	msgbox EasternRuins_EventScript_ManiacBlackAugurite_Text_1, MSGBOX_AUTOCLOSE
# 58 "data/maps/EasternRuins/scripts.pory"
	waitmessage
	end

EasternRuins_EventScript_ManiacBlackAugurite_2:
# 49 "data/maps/EasternRuins/scripts.pory"
	giveitem ITEM_BLACK_AUGURITE
# 50 "data/maps/EasternRuins/scripts.pory"
	setflag FLAG_RECEIVED_BLACK_AUGURITE
# 51 "data/maps/EasternRuins/scripts.pory"
	waitmessage
	goto EasternRuins_EventScript_ManiacBlackAugurite_1


EasternRuins_EventScript_KleavorHint::
# 63 "data/maps/EasternRuins/scripts.pory"
	msgbox EasternRuins_EventScript_KleavorHint_Text_0, MSGBOX_NPC
	end


EasternRuins_EventScript_HexManiacMaliciousArmor::
# 69 "data/maps/EasternRuins/scripts.pory"
	lock
# 70 "data/maps/EasternRuins/scripts.pory"
	faceplayer
# 71 "data/maps/EasternRuins/scripts.pory"
	goto_if_set FLAG_RECEIVED_MALICIOUS_ARMOR, EasternRuins_EventScript_HexManiacThanks
# 72 "data/maps/EasternRuins/scripts.pory"
	msgbox EasternRuins_EventScript_HexManiacMaliciousArmor_Text_0, MSGBOX_DEFAULT
# 75 "data/maps/EasternRuins/scripts.pory"
	waitmessage
# 76 "data/maps/EasternRuins/scripts.pory"
	special IsGhostTypeInParty
# 77 "data/maps/EasternRuins/scripts.pory"
	goto_if_ne VAR_RESULT, TRUE, EasternRuins_EventScript_HexManiacShowMeAGhostType
# 78 "data/maps/EasternRuins/scripts.pory"
	msgbox EasternRuins_EventScript_HexManiacMaliciousArmor_Text_1, MSGBOX_DEFAULT
# 81 "data/maps/EasternRuins/scripts.pory"
	checkitemspace ITEM_MALICIOUS_ARMOR
# 82 "data/maps/EasternRuins/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EasternRuins_EventScript_HexManiacMaliciousArmor_2
# 88 "data/maps/EasternRuins/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
EasternRuins_EventScript_HexManiacMaliciousArmor_1:
# 90 "data/maps/EasternRuins/scripts.pory"
	msgbox EasternRuins_EventScript_HexManiacMaliciousArmor_Text_2, MSGBOX_AUTOCLOSE
# 92 "data/maps/EasternRuins/scripts.pory"
	waitmessage
	end

EasternRuins_EventScript_HexManiacMaliciousArmor_2:
# 83 "data/maps/EasternRuins/scripts.pory"
	giveitem ITEM_MALICIOUS_ARMOR
# 84 "data/maps/EasternRuins/scripts.pory"
	setflag FLAG_RECEIVED_MALICIOUS_ARMOR
# 85 "data/maps/EasternRuins/scripts.pory"
	waitmessage
	goto EasternRuins_EventScript_HexManiacMaliciousArmor_1


EasternRuins_EventScript_HexManiacShowMeAGhostType::
# 97 "data/maps/EasternRuins/scripts.pory"
	msgbox EasternRuins_EventScript_HexManiacShowMeAGhostType_Text_0, MSGBOX_NPC
	end


EasternRuins_EventScript_HexManiacThanks::
# 103 "data/maps/EasternRuins/scripts.pory"
	msgbox EasternRuins_EventScript_HexManiacThanks_Text_0, MSGBOX_NPC
	end


EasternRuins_EventScript_Kumiko_Text_0:
# 11 "data/maps/EasternRuins/scripts.pory"
	.string "It should be me!\nI should be able to accompany LADY\lASAKURA!$"

EasternRuins_EventScript_Kumiko_Text_1:
# 11 "data/maps/EasternRuins/scripts.pory"
	.string "I won't stand for this!$"

EasternRuins_EventScript_Kumiko_Text_2:
# 12 "data/maps/EasternRuins/scripts.pory"
	.string "Why won't they let me in?!$"

EasternRuins_EventScript_Shiori_Text_0:
# 17 "data/maps/EasternRuins/scripts.pory"
	.string "Fufufu…\nI can feel the power eminating from the land…$"

EasternRuins_EventScript_Shiori_Text_1:
# 17 "data/maps/EasternRuins/scripts.pory"
	.string "Fufufufu…$"

EasternRuins_EventScript_Shiori_Text_2:
# 18 "data/maps/EasternRuins/scripts.pory"
	.string "… These sacred lands…\n There is so much history in these ruins.$"

EasternRuins_EventScript_Yumi_Text_0:
# 24 "data/maps/EasternRuins/scripts.pory"
	.string "Fufufu…\nSoon, JIRACHI will awaken…$"

EasternRuins_EventScript_Yumi_Text_1:
# 24 "data/maps/EasternRuins/scripts.pory"
	.string "Soon…$"

EasternRuins_EventScript_Yumi_Text_2:
# 25 "data/maps/EasternRuins/scripts.pory"
	.string "… We've protected these lands…\n For many generations.$"

EasternRuins_EventScript_Chestird_Text_0:
# 31 "data/maps/EasternRuins/scripts.pory"
	.string "I had to pay a lot of money\nto be able to get here…$"

EasternRuins_EventScript_Chestird_Text_1:
# 31 "data/maps/EasternRuins/scripts.pory"
	.string "I guess money can't help me\nwin battles!$"

EasternRuins_EventScript_Chestird_Text_2:
# 32 "data/maps/EasternRuins/scripts.pory"
	.string "The ruins behind me are intruiging.\n It seems as though they have been\l recently inhabited by POKéMON.$"

EasternRuins_EventScript_ManiacBlackAugurite_Text_0:
# 42 "data/maps/EasternRuins/scripts.pory"
	.string "You're a TRAINER, aren't you?\n I found this weird rock.\p I couldn't find a use for it, but maybe\n you can.$"

EasternRuins_EventScript_ManiacBlackAugurite_Text_1:
# 56 "data/maps/EasternRuins/scripts.pory"
	.string "Maybe a POKéMON can use it\n or something.$"

EasternRuins_EventScript_KleavorHint_Text_0:
# 63 "data/maps/EasternRuins/scripts.pory"
	.string "That weird rock…\n Maybe it's for a POKéMON?$"

EasternRuins_EventScript_HexManiacMaliciousArmor_Text_0:
# 72 "data/maps/EasternRuins/scripts.pory"
	.string "I-I love GHOST TYPE P-POKéMON…\n show me one a-and I'll…\l g-give you a gift…$"

EasternRuins_EventScript_HexManiacMaliciousArmor_Text_1:
# 78 "data/maps/EasternRuins/scripts.pory"
	.string "T-Thanks for s-showing me a\n G-GHOST TYPE P-POKéMON…\p H-Here.$"

EasternRuins_EventScript_HexManiacMaliciousArmor_Text_2:
# 90 "data/maps/EasternRuins/scripts.pory"
	.string "I hope t-that armor suits you\n w-well…$"

EasternRuins_EventScript_HexManiacShowMeAGhostType_Text_0:
# 97 "data/maps/EasternRuins/scripts.pory"
	.string "O-Oh…\n You d-don't have a GHOST T-TYPE?$"

EasternRuins_EventScript_HexManiacThanks_Text_0:
# 103 "data/maps/EasternRuins/scripts.pory"
	.string "T-Thanks for s-showing me a\n G-GHOST TYPE P-POKéMON…\p I hope t-that armor suits you\n w-well…$"
