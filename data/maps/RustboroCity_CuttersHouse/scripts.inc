# 1 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_MapScripts::
# 2 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.byte 0
# 3 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 4 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_Cutter::
# 5 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	lock
# 6 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	faceplayer
# 7 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_CUT, RustboroCity_CuttersHouse_EventScript_ExplainCut
# 8 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse, MSGBOX_DEFAULT
# 9 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	giveitem ITEM_HM_CUT
# 10 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 11 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
# 12 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
# 13 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 14 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 15 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_ExplainCut::
# 16 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
# 17 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
# 18 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 19 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 20 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_Lass::
# 21 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees, MSGBOX_NPC
# 22 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 23 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 24 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse:
# 25 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "That determined expression…\n"
# 26 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "That limber way you move…\l"
# 27 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "And your well-trained POKéMON…\p"
# 28 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "You're obviously a skilled TRAINER!\p"
# 29 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "No, wait, don't say a word.\n"
# 30 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "I can tell just by looking at you.\p"
# 31 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "I'm sure that you can put this\n"
# 32 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "HIDDEN MACHINE to good use.\p"
# 33 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "No need to be modest or shy.\n"
# 34 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Go on, take it!$"
# 35 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 36 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_Text_ExplainCut:
# 37 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "That HIDDEN MACHINE, or HM for\n"
# 38 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "short, is CUT.\p"
# 39 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "An HM move is one that can be used\n"
# 40 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "by POKéMON outside of battle.\p"
# 41 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Any POKéMON can use CUT to chop\n"
# 42 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "down thin trees if the TRAINER\l"
# 43 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "has earned the STONE BADGE.\p"
# 44 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "You don't even have to teach\n"
# 45 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "it to your POKéMON!$"
# 46 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 47 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees:
# 48 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "When they were expanding the city of\n"
# 49 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "RUSTBORO, my dad helped out.\p"
# 50 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "He made his POKéMON use CUT to clear\n"
# 51 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "the land of trees.$"

RustboroCity_CuttersHouse_EventScript_IncinerateTutor::
# 56 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	lock
# 57 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	faceplayer
# 58 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_EventScript_IncinerateTutor_Text_0, MSGBOX_YESNO
# 64 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	waitmessage
# 65 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_IncinerateDeclined
# 66 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_EventScript_IncinerateTutor_Text_1, MSGBOX_DEFAULT
# 67 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_INCINERATE
# 68 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 69 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_IncinerateDeclined
# 70 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	goto MoveTutor_EventScript_IncinerateTaught
	end


MoveTutor_EventScript_IncinerateDeclined::
# 75 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox MoveTutor_EventScript_IncinerateDeclined_Text_0, MSGBOX_AUTOCLOSE
# 78 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	waitmessage
# 79 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
	end


MoveTutor_EventScript_IncinerateTaught::
# 84 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox MoveTutor_EventScript_IncinerateTaught_Text_0, MSGBOX_AUTOCLOSE
# 86 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	waitmessage
# 87 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
	end


RustboroCity_CuttersHouse_EventScript_IncinerateTutor_Text_0:
# 58 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "We don't only CUT down to trees\n to maintain the forest.\p We also do controlled burns using\n POKéMON that can use INCINERATE.\p If you want, I can teach your POKéMON\n how to INCINERATE trees too.$"

RustboroCity_CuttersHouse_EventScript_IncinerateTutor_Text_1:
# 66 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Which POKéMON do you want to\nteach INCINERATE to?$"

MoveTutor_EventScript_IncinerateDeclined_Text_0:
# 75 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Okay!\p Come back if you want to learn\n about controlled burns.$"

MoveTutor_EventScript_IncinerateTaught_Text_0:
# 84 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Come back if you want to learn\n more about controlled burns!$"
