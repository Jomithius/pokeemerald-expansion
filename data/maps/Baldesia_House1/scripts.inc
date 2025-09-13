Baldesia_House1_MapScripts::
	.byte 0


Baldesia_House1_EventScript_KimonoLady::
# 4 "data/maps/Baldesia_House1/scripts.pory"
	lock
# 5 "data/maps/Baldesia_House1/scripts.pory"
	faceplayer
# 6 "data/maps/Baldesia_House1/scripts.pory"
	msgbox Baldesia_House1_EventScript_KimonoLady_Text_0, MSGBOX_AUTOCLOSE
# 9 "data/maps/Baldesia_House1/scripts.pory"
	waitmessage
# 10 "data/maps/Baldesia_House1/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 11 "data/maps/Baldesia_House1/scripts.pory"
	waitmovement 0
# 12 "data/maps/Baldesia_House1/scripts.pory"
	release
	end


Baldesia_House1_EventScript_OldWoman::
# 17 "data/maps/Baldesia_House1/scripts.pory"
	lock
# 18 "data/maps/Baldesia_House1/scripts.pory"
	faceplayer
# 19 "data/maps/Baldesia_House1/scripts.pory"
	msgbox Baldesia_House1_EventScript_OldWoman_Text_0, MSGBOX_AUTOCLOSE
# 26 "data/maps/Baldesia_House1/scripts.pory"
	waitmessage
# 27 "data/maps/Baldesia_House1/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 28 "data/maps/Baldesia_House1/scripts.pory"
	waitmovement 0
# 29 "data/maps/Baldesia_House1/scripts.pory"
	release
	end


Baldesia_House1_EventScript_OldMan::
# 34 "data/maps/Baldesia_House1/scripts.pory"
	lock
# 35 "data/maps/Baldesia_House1/scripts.pory"
	faceplayer
# 36 "data/maps/Baldesia_House1/scripts.pory"
	msgbox Baldesia_House1_EventScript_OldMan_Text_0, MSGBOX_AUTOCLOSE
# 41 "data/maps/Baldesia_House1/scripts.pory"
	waitmessage
# 42 "data/maps/Baldesia_House1/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 43 "data/maps/Baldesia_House1/scripts.pory"
	waitmovement 0
# 44 "data/maps/Baldesia_House1/scripts.pory"
	release
	end


Baldesia_House1_EventScript_Panini::
# 49 "data/maps/Baldesia_House1/scripts.pory"
	lock
# 50 "data/maps/Baldesia_House1/scripts.pory"
	delay 16
# 51 "data/maps/Baldesia_House1/scripts.pory"
	playse SE_PIN
# 52 "data/maps/Baldesia_House1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 53 "data/maps/Baldesia_House1/scripts.pory"
	waitmovement 3
# 54 "data/maps/Baldesia_House1/scripts.pory"
	waitse
# 55 "data/maps/Baldesia_House1/scripts.pory"
	faceplayer
# 56 "data/maps/Baldesia_House1/scripts.pory"
	msgbox Baldesia_House1_EventScript_Panini_Text_0, MSGBOX_DEFAULT
# 57 "data/maps/Baldesia_House1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Baldesia_House1_EventScript_Panini_Text_1, Baldesia_House1_EventScript_Panini_Text_2
# 58 "data/maps/Baldesia_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Baldesia_House1_EventScript_Panini_2
# 62 "data/maps/Baldesia_House1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Baldesia_House1_EventScript_Panini_3
Baldesia_House1_EventScript_Panini_1:
Baldesia_House1_EventScript_Panini_7:
# 71 "data/maps/Baldesia_House1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Baldesia_House1_EventScript_Panini_8
# 80 "data/maps/Baldesia_House1/scripts.pory"
	delay 16
# 81 "data/maps/Baldesia_House1/scripts.pory"
	playse SE_PIN
# 82 "data/maps/Baldesia_House1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 83 "data/maps/Baldesia_House1/scripts.pory"
	waitmovement 3
# 84 "data/maps/Baldesia_House1/scripts.pory"
	waitse
# 85 "data/maps/Baldesia_House1/scripts.pory"
	msgbox Baldesia_House1_EventScript_Panini_Text_10, MSGBOX_AUTOCLOSE
# 86 "data/maps/Baldesia_House1/scripts.pory"
	waitmessage
# 87 "data/maps/Baldesia_House1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 88 "data/maps/Baldesia_House1/scripts.pory"
	playse SE_FLEE
# 89 "data/maps/Baldesia_House1/scripts.pory"
	removeobject 3
# 90 "data/maps/Baldesia_House1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 91 "data/maps/Baldesia_House1/scripts.pory"
	waitse
# 92 "data/maps/Baldesia_House1/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 93 "data/maps/Baldesia_House1/scripts.pory"
	delay 8
# 94 "data/maps/Baldesia_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 95 "data/maps/Baldesia_House1/scripts.pory"
	waitmovement 2
# 96 "data/maps/Baldesia_House1/scripts.pory"
	msgbox Baldesia_House1_EventScript_Panini_Text_11, MSGBOX_AUTOCLOSE
# 98 "data/maps/Baldesia_House1/scripts.pory"
	waitmessage
# 99 "data/maps/Baldesia_House1/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 100 "data/maps/Baldesia_House1/scripts.pory"
	waitmovement 2
# 101 "data/maps/Baldesia_House1/scripts.pory"
	waitse
# 102 "data/maps/Baldesia_House1/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 3
# 103 "data/maps/Baldesia_House1/scripts.pory"
	release
	end

Baldesia_House1_EventScript_Panini_2:
# 59 "data/maps/Baldesia_House1/scripts.pory"
	msgbox Baldesia_House1_EventScript_Panini_Text_3, MSGBOX_DEFAULT
# 60 "data/maps/Baldesia_House1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Baldesia_House1_EventScript_Panini_Text_4, Baldesia_House1_EventScript_Panini_Text_5
	goto Baldesia_House1_EventScript_Panini_1

Baldesia_House1_EventScript_Panini_3:
# 63 "data/maps/Baldesia_House1/scripts.pory"
	msgbox Baldesia_House1_EventScript_Panini_Text_6, MSGBOX_DEFAULT
# 65 "data/maps/Baldesia_House1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Baldesia_House1_EventScript_Panini_Text_7, Baldesia_House1_EventScript_Panini_Text_8
# 66 "data/maps/Baldesia_House1/scripts.pory"
	msgbox Baldesia_House1_EventScript_Panini_Text_9, MSGBOX_DEFAULT
# 69 "data/maps/Baldesia_House1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Baldesia_House1_EventScript_Panini_Text_4, Baldesia_House1_EventScript_Panini_Text_5
	goto Baldesia_House1_EventScript_Panini_1

Baldesia_House1_EventScript_Panini_8:
# 72 "data/maps/Baldesia_House1/scripts.pory"
	delay 16
# 73 "data/maps/Baldesia_House1/scripts.pory"
	playse SE_BIKE_HOP
# 74 "data/maps/Baldesia_House1/scripts.pory"
	applymovement 3, Common_Movement_QuestionMark
# 75 "data/maps/Baldesia_House1/scripts.pory"
	waitmovement 3
# 76 "data/maps/Baldesia_House1/scripts.pory"
	waitse
# 77 "data/maps/Baldesia_House1/scripts.pory"
	msgbox Baldesia_House1_EventScript_Panini_Text_3, MSGBOX_DEFAULT
# 78 "data/maps/Baldesia_House1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Baldesia_House1_EventScript_Panini_Text_4, Baldesia_House1_EventScript_Panini_Text_5
	goto Baldesia_House1_EventScript_Panini_7


Baldesia_House1_EventScript_Pawmi::
# 108 "data/maps/Baldesia_House1/scripts.pory"
	lock
# 109 "data/maps/Baldesia_House1/scripts.pory"
	faceplayer
# 110 "data/maps/Baldesia_House1/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_ENCOUNTER
# 111 "data/maps/Baldesia_House1/scripts.pory"
	waitmoncry
# 112 "data/maps/Baldesia_House1/scripts.pory"
	release
	end


Baldesia_House1_EventScript_KimonoLady_Text_0:
# 6 "data/maps/Baldesia_House1/scripts.pory"
	.string "My daughter gets to train under\n MASTER BENNIS.\p As a mother, I couldn't be more proud.$"

Baldesia_House1_EventScript_OldWoman_Text_0:
# 19 "data/maps/Baldesia_House1/scripts.pory"
	.string "MASTER BENNIS has been a retainer for\n the Young Lady since she was a child.\p He would even go as far as to shave his\n head so she wouldn't feel insecure\l about being bald.\p Even after all these years, he still\n makes sure he's bald.$"

Baldesia_House1_EventScript_OldMan_Text_0:
# 36 "data/maps/Baldesia_House1/scripts.pory"
	.string "MASTER BENNIS is not only the head\n retainer for the ASAKURA family.\p He's also a wonderful NINJA.\p He's much more capable than he\n may seem.$"

Baldesia_House1_EventScript_Panini_Text_0:
# 56 "data/maps/Baldesia_House1/scripts.pory"
	.string "PANINI: Panini? Panini pani?$"

Baldesia_House1_EventScript_Panini_Text_1:
# 57 "data/maps/Baldesia_House1/scripts.pory"
	.string "I came to get you.$"

Baldesia_House1_EventScript_Panini_Text_2:
# 57 "data/maps/Baldesia_House1/scripts.pory"
	.string "Are you okay?$"

Baldesia_House1_EventScript_Panini_Text_3:
# 59 "data/maps/Baldesia_House1/scripts.pory"
	.string "PANINI: Panini?$"

Baldesia_House1_EventScript_Panini_Text_4:
# 60 "data/maps/Baldesia_House1/scripts.pory"
	.string "MOMO is back.$"

Baldesia_House1_EventScript_Panini_Text_5:
# 60 "data/maps/Baldesia_House1/scripts.pory"
	.string "… What?$"

Baldesia_House1_EventScript_Panini_Text_6:
# 63 "data/maps/Baldesia_House1/scripts.pory"
	.string "PANINI: Panini… Panini.\n Panini pani nini panini.$"

Baldesia_House1_EventScript_Panini_Text_7:
# 65 "data/maps/Baldesia_House1/scripts.pory"
	.string "Don't let him get to you.$"

Baldesia_House1_EventScript_Panini_Text_8:
# 65 "data/maps/Baldesia_House1/scripts.pory"
	.string "I understand.$"

Baldesia_House1_EventScript_Panini_Text_9:
# 66 "data/maps/Baldesia_House1/scripts.pory"
	.string "PANINI: …Panini. Panini pani\n panini.\p Ni? Panini pani?$"

Baldesia_House1_EventScript_Panini_Text_10:
# 85 "data/maps/Baldesia_House1/scripts.pory"
	.string "PANINI: Panini?! Panini!$"

Baldesia_House1_EventScript_Panini_Text_11:
# 96 "data/maps/Baldesia_House1/scripts.pory"
	.string "Oh! There she goes again, leaving like a\n NINJA. They grow up so fast!$"
