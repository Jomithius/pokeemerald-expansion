SnowdriftCity_House1_MapScripts::
	.byte 0


SnowdriftCity_House1_EventScript_KimonoLady::
# 4 "data/maps/SnowdriftCity_House1/scripts.pory"
	msgbox SnowdriftCity_House1_EventScript_KimonoLady_Text_0, MSGBOX_NPC
	end


SnowdriftCity_House1_EventScript_LittleGirl::
# 10 "data/maps/SnowdriftCity_House1/scripts.pory"
	msgbox SnowdriftCity_House1_EventScript_LittleGirl_Text_0, MSGBOX_NPC
	end


SnowdriftCity_House1_EventScript_Girl::
# 15 "data/maps/SnowdriftCity_House1/scripts.pory"
	msgbox SnowdriftCity_House1_EventScript_Girl_Text_0, MSGBOX_NPC
	end


SnowdriftCity_House1_EventScript_BlackBelt::
# 21 "data/maps/SnowdriftCity_House1/scripts.pory"
	lock
# 22 "data/maps/SnowdriftCity_House1/scripts.pory"
	faceplayer
# 23 "data/maps/SnowdriftCity_House1/scripts.pory"
	goto_if_not_defeated TRAINER_LAROLD, SnowdriftCity_House1_EventScript_BlackBeltPrepBattle
# 24 "data/maps/SnowdriftCity_House1/scripts.pory"
	msgbox SnowdriftCity_House1_EventScript_BlackBelt_Text_0
# 27 "data/maps/SnowdriftCity_House1/scripts.pory"
	waitmessage
# 28 "data/maps/SnowdriftCity_House1/scripts.pory"
	release
	end


SnowdriftCity_House1_EventScript_BlackBeltPrepBattle::
# 33 "data/maps/SnowdriftCity_House1/scripts.pory"
	lock
# 34 "data/maps/SnowdriftCity_House1/scripts.pory"
	msgbox SnowdriftCity_House1_EventScript_BlackBeltPrepBattle_Text_0, MSGBOX_DEFAULT
# 36 "data/maps/SnowdriftCity_House1/scripts.pory"
	waitmessage
# 37 "data/maps/SnowdriftCity_House1/scripts.pory"
	goto_if_set FLAG_SYS_DEFEATED_BRUNO, SnowdriftCity_House1_EventScript_BlackBeltPrepBattle_2
SnowdriftCity_House1_EventScript_BlackBeltPrepBattle_1:
# 59 "data/maps/SnowdriftCity_House1/scripts.pory"
	closemessage
# 60 "data/maps/SnowdriftCity_House1/scripts.pory"
	release
	end

SnowdriftCity_House1_EventScript_BlackBeltPrepBattle_2:
# 38 "data/maps/SnowdriftCity_House1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, SnowdriftCity_House1_EventScript_BlackBeltPrepBattle_Text_1, SnowdriftCity_House1_EventScript_BlackBeltPrepBattle_Text_2
# 39 "data/maps/SnowdriftCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SnowdriftCity_House1_EventScript_BlackBeltPrepBattle_4
# 55 "data/maps/SnowdriftCity_House1/scripts.pory"
	msgbox SnowdriftCity_House1_EventScript_BlackBeltPrepBattle_Text_7, MSGBOX_AUTOCLOSE
# 56 "data/maps/SnowdriftCity_House1/scripts.pory"
	waitmessage
	goto SnowdriftCity_House1_EventScript_BlackBeltPrepBattle_1

SnowdriftCity_House1_EventScript_BlackBeltPrepBattle_4:
# 40 "data/maps/SnowdriftCity_House1/scripts.pory"
	msgbox SnowdriftCity_House1_EventScript_BlackBeltPrepBattle_Text_3, MSGBOX_DEFAULT
# 43 "data/maps/SnowdriftCity_House1/scripts.pory"
	waitmessage
# 44 "data/maps/SnowdriftCity_House1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, SnowdriftCity_House1_EventScript_BlackBeltPrepBattle_Text_4, SnowdriftCity_House1_EventScript_BlackBeltPrepBattle_Text_5
# 45 "data/maps/SnowdriftCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SnowdriftCity_House1_EventScript_BlackBeltPrepBattle_7
# 49 "data/maps/SnowdriftCity_House1/scripts.pory"
	msgbox SnowdriftCity_House1_EventScript_BlackBeltPrepBattle_Text_6, MSGBOX_AUTOCLOSE
# 51 "data/maps/SnowdriftCity_House1/scripts.pory"
	waitmessage
	goto SnowdriftCity_House1_EventScript_BlackBeltPrepBattle_1

SnowdriftCity_House1_EventScript_BlackBeltPrepBattle_7:
# 46 "data/maps/SnowdriftCity_House1/scripts.pory"
	goto SnowdriftCity_House1_EventScript_BlackBeltBattle
	goto SnowdriftCity_House1_EventScript_BlackBeltPrepBattle_1


SnowdriftCity_House1_EventScript_BlackBeltBattle::
# 65 "data/maps/SnowdriftCity_House1/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 66 "data/maps/SnowdriftCity_House1/scripts.pory"
	msgbox SnowdriftCity_House1_EventScript_BlackBeltBattle_Text_0, MSGBOX_AUTOCLOSE
# 67 "data/maps/SnowdriftCity_House1/scripts.pory"
	waitmessage
# 68 "data/maps/SnowdriftCity_House1/scripts.pory"
	trainerbattle_no_intro TRAINER_LAROLD, SnowdriftCity_House1_Text_LaroldLoss
# 69 "data/maps/SnowdriftCity_House1/scripts.pory"
	playse SE_PIN
# 70 "data/maps/SnowdriftCity_House1/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 71 "data/maps/SnowdriftCity_House1/scripts.pory"
	waitmovement 4
# 72 "data/maps/SnowdriftCity_House1/scripts.pory"
	waitse
# 73 "data/maps/SnowdriftCity_House1/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 74 "data/maps/SnowdriftCity_House1/scripts.pory"
	waitmovement 4
# 75 "data/maps/SnowdriftCity_House1/scripts.pory"
	msgbox SnowdriftCity_House1_EventScript_BlackBeltBattle_Text_1, MSGBOX_DEFAULT
# 77 "data/maps/SnowdriftCity_House1/scripts.pory"
	waitmessage
# 78 "data/maps/SnowdriftCity_House1/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 79 "data/maps/SnowdriftCity_House1/scripts.pory"
	waitmovement 1
# 80 "data/maps/SnowdriftCity_House1/scripts.pory"
	msgbox SnowdriftCity_House1_EventScript_BlackBeltBattle_Text_2, MSGBOX_DEFAULT
# 81 "data/maps/SnowdriftCity_House1/scripts.pory"
	waitmessage
# 82 "data/maps/SnowdriftCity_House1/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 83 "data/maps/SnowdriftCity_House1/scripts.pory"
	waitmovement 1
# 84 "data/maps/SnowdriftCity_House1/scripts.pory"
	delay 8
# 85 "data/maps/SnowdriftCity_House1/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 86 "data/maps/SnowdriftCity_House1/scripts.pory"
	waitmovement 4
# 87 "data/maps/SnowdriftCity_House1/scripts.pory"
	msgbox SnowdriftCity_House1_EventScript_BlackBelt_Text_0, MSGBOX_AUTOCLOSE
# 90 "data/maps/SnowdriftCity_House1/scripts.pory"
	waitmessage
# 91 "data/maps/SnowdriftCity_House1/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 92 "data/maps/SnowdriftCity_House1/scripts.pory"
	waitmovement 1
# 93 "data/maps/SnowdriftCity_House1/scripts.pory"
	release
	end


SnowdriftCity_House1_EventScript_KimonoLady_Text_0:
# 4 "data/maps/SnowdriftCity_House1/scripts.pory"
	.string "My meathead of a husband only thinks\n about training and battling.$"

SnowdriftCity_House1_EventScript_LittleGirl_Text_0:
# 10 "data/maps/SnowdriftCity_House1/scripts.pory"
	.string "I wanna train at BRUNO's dojo!$"

SnowdriftCity_House1_EventScript_Girl_Text_0:
# 15 "data/maps/SnowdriftCity_House1/scripts.pory"
	.string "I train in martial arts, but I\n really like CONTESTS more.$"

SnowdriftCity_House1_EventScript_BlackBelt_Text_0:
# 24 "data/maps/SnowdriftCity_House1/scripts.pory"
	.string "Sorry for doubting you!\n I never thought BRUNO would lose.\p You're the real deal!$"

SnowdriftCity_House1_EventScript_BlackBeltPrepBattle_Text_0:
# 34 "data/maps/SnowdriftCity_House1/scripts.pory"
	.string "I grew up training with BRUNO.\n I've never seen him lose a fight.$"

SnowdriftCity_House1_EventScript_BlackBeltPrepBattle_Text_1:
# 38 "data/maps/SnowdriftCity_House1/scripts.pory"
	.string "I beat him.$"

SnowdriftCity_House1_EventScript_BlackBeltPrepBattle_Text_2:
# 38 "data/maps/SnowdriftCity_House1/scripts.pory"
	.string "Yeah. He was strong.$"

SnowdriftCity_House1_EventScript_BlackBeltPrepBattle_Text_3:
# 40 "data/maps/SnowdriftCity_House1/scripts.pory"
	.string "What?!\n There's no way you did.\p Quit lying.$"

SnowdriftCity_House1_EventScript_BlackBeltPrepBattle_Text_4:
# 44 "data/maps/SnowdriftCity_House1/scripts.pory"
	.string "Want me to prove it?$"

SnowdriftCity_House1_EventScript_BlackBeltPrepBattle_Text_5:
# 44 "data/maps/SnowdriftCity_House1/scripts.pory"
	.string "Yeah, you're right.$"

SnowdriftCity_House1_EventScript_BlackBeltPrepBattle_Text_6:
# 49 "data/maps/SnowdriftCity_House1/scripts.pory"
	.string "That's what I thought.\n There's no way he could lose.$"

SnowdriftCity_House1_EventScript_BlackBeltPrepBattle_Text_7:
# 55 "data/maps/SnowdriftCity_House1/scripts.pory"
	.string "Yeah. He really is.$"

SnowdriftCity_House1_EventScript_BlackBeltBattle_Text_0:
# 66 "data/maps/SnowdriftCity_House1/scripts.pory"
	.string "Yeah, I do!$"

SnowdriftCity_House1_EventScript_BlackBeltBattle_Text_1:
# 75 "data/maps/SnowdriftCity_House1/scripts.pory"
	.string "Hey! What did I tell you about\n battling indoors?!$"

SnowdriftCity_House1_EventScript_BlackBeltBattle_Text_2:
# 80 "data/maps/SnowdriftCity_House1/scripts.pory"
	.string "LAROLD: Hahaha!\nSorry, honey!$"

SnowdriftCity_House1_Text_LaroldLoss::
# 97 "data/maps/SnowdriftCity_House1/scripts.pory"
	.string "I guess you weren't lying!$"
