Route135_MapScripts::
	.byte 0


Route135_EventScript_FatMan::
# 4 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FatMan_Text_0, MSGBOX_SIGN
	end


Route135_EventScript_Man4::
# 10 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man4_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Man1::
# 15 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man1_Text_0, MSGBOX_NPC
	end


Route135_EventScript_WomanILoveLechonk::
# 20 "data/maps/Route135/scripts.pory"
	lock
# 21 "data/maps/Route135/scripts.pory"
	faceplayer
# 22 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_0, MSGBOX_DEFAULT
# 23 "data/maps/Route135/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route135_EventScript_WomanILoveLechonk_Text_1, Route135_EventScript_WomanILoveLechonk_Text_2
# 24 "data/maps/Route135/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route135_EventScript_WomanILoveLechonk_2
# 29 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_4, MSGBOX_AUTOCLOSE
Route135_EventScript_WomanILoveLechonk_1:
# 32 "data/maps/Route135/scripts.pory"
	waitmessage
# 33 "data/maps/Route135/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 34 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 35 "data/maps/Route135/scripts.pory"
	release
	end

Route135_EventScript_WomanILoveLechonk_2:
# 25 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_3, MSGBOX_AUTOCLOSE
	goto Route135_EventScript_WomanILoveLechonk_1


Route135_EventScript_WomanILoveMiltank::
# 40 "data/maps/Route135/scripts.pory"
	lock
# 41 "data/maps/Route135/scripts.pory"
	faceplayer
# 42 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveMiltank_Text_0, MSGBOX_DEFAULT
# 43 "data/maps/Route135/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route135_EventScript_WomanILoveLechonk_Text_1, Route135_EventScript_WomanILoveMiltank_Text_1
# 44 "data/maps/Route135/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route135_EventScript_WomanILoveMiltank_2
# 49 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveMiltank_Text_2, MSGBOX_AUTOCLOSE
Route135_EventScript_WomanILoveMiltank_1:
# 52 "data/maps/Route135/scripts.pory"
	waitmessage
# 53 "data/maps/Route135/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 54 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route135/scripts.pory"
	release
	end

Route135_EventScript_WomanILoveMiltank_2:
# 45 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_3, MSGBOX_AUTOCLOSE
	goto Route135_EventScript_WomanILoveMiltank_1


Route135_EventScript_FirstMoo::
# 60 "data/maps/Route135/scripts.pory"
	lockall
# 61 "data/maps/Route135/scripts.pory"
	applymovement 27, Common_Movement_WalkInPlaceDown
# 62 "data/maps/Route135/scripts.pory"
	waitmovement 27
# 63 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 64 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_0, MSGBOX_AUTOCLOSE
# 68 "data/maps/Route135/scripts.pory"
	waitmessage
# 69 "data/maps/Route135/scripts.pory"
	applymovement 27, Common_Movement_WalkInPlaceLeft
# 70 "data/maps/Route135/scripts.pory"
	waitmovement 27
# 71 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 72 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route135/scripts.pory"
	fadeoutbgm 1
# 74 "data/maps/Route135/scripts.pory"
	delay 60
# 75 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MILTANK, CRY_MODE_ENCOUNTER
# 76 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_1, MSGBOX_AUTOCLOSE
# 77 "data/maps/Route135/scripts.pory"
	waitmoncry
# 78 "data/maps/Route135/scripts.pory"
	waitmessage
# 79 "data/maps/Route135/scripts.pory"
	applymovement 27, Common_Movement_WalkInPlaceDown
# 80 "data/maps/Route135/scripts.pory"
	waitmovement 27
# 81 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 82 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 83 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_2, MSGBOX_AUTOCLOSE
# 85 "data/maps/Route135/scripts.pory"
	waitmessage
# 86 "data/maps/Route135/scripts.pory"
	applymovement 27, Common_Movement_WalkInPlaceLeft
# 87 "data/maps/Route135/scripts.pory"
	waitmovement 27
# 88 "data/maps/Route135/scripts.pory"
	setvar VAR_TEMP_7, 1
# 89 "data/maps/Route135/scripts.pory"
	fadeinbgm 1
# 90 "data/maps/Route135/scripts.pory"
	releaseall
	end


Route135_EventScript_Man4DidYouKnow::
# 95 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man4DidYouKnow_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Gentleman::
# 101 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Gentleman_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Lechonk::
# 108 "data/maps/Route135/scripts.pory"
	lock
# 109 "data/maps/Route135/scripts.pory"
	faceplayer
# 110 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_LECHONK, CRY_MODE_ENCOUNTER
# 111 "data/maps/Route135/scripts.pory"
	waitmoncry
# 112 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Oinkologne::
# 117 "data/maps/Route135/scripts.pory"
	lock
# 118 "data/maps/Route135/scripts.pory"
	faceplayer
# 119 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_OINKOLOGNE, CRY_MODE_ENCOUNTER
# 120 "data/maps/Route135/scripts.pory"
	waitmoncry
# 121 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Mudbray::
# 126 "data/maps/Route135/scripts.pory"
	lock
# 127 "data/maps/Route135/scripts.pory"
	faceplayer
# 128 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MUDBRAY, CRY_MODE_ENCOUNTER
# 129 "data/maps/Route135/scripts.pory"
	waitmoncry
# 130 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Mudsdale::
# 135 "data/maps/Route135/scripts.pory"
	lock
# 136 "data/maps/Route135/scripts.pory"
	faceplayer
# 137 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MUDSDALE, CRY_MODE_ENCOUNTER
# 138 "data/maps/Route135/scripts.pory"
	waitmoncry
# 139 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Tauros::
# 144 "data/maps/Route135/scripts.pory"
	lock
# 145 "data/maps/Route135/scripts.pory"
	faceplayer
# 146 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_TAUROS, CRY_MODE_ENCOUNTER
# 147 "data/maps/Route135/scripts.pory"
	waitmoncry
# 148 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Miltank::
# 153 "data/maps/Route135/scripts.pory"
	lock
# 154 "data/maps/Route135/scripts.pory"
	faceplayer
# 155 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MILTANK, CRY_MODE_ENCOUNTER
# 156 "data/maps/Route135/scripts.pory"
	waitmoncry
# 157 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Sign::
# 162 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Route135_EventScript_FatMan_Text_0:
# 4 "data/maps/Route135/scripts.pory"
	.string "Oh man…\n Look at all that tasty cabbage…$"

Route135_EventScript_Man4_Text_0:
# 10 "data/maps/Route135/scripts.pory"
	.string "It ain't much, but it's honest work.$"

Route135_EventScript_Man1_Text_0:
# 15 "data/maps/Route135/scripts.pory"
	.string "I lost my gosh darn hat!$"

Route135_EventScript_WomanILoveLechonk_Text_0:
# 22 "data/maps/Route135/scripts.pory"
	.string "I just love LECHONK!$"

Route135_EventScript_WomanILoveLechonk_Text_1:
# 23 "data/maps/Route135/scripts.pory"
	.string "Me too!$"

Route135_EventScript_WomanILoveLechonk_Text_2:
# 23 "data/maps/Route135/scripts.pory"
	.string "Yup. They make good bacon.$"

Route135_EventScript_WomanILoveLechonk_Text_3:
# 25 "data/maps/Route135/scripts.pory"
	.string "Right?!\n They're stinky, but sooo cute!$"

Route135_EventScript_WomanILoveLechonk_Text_4:
# 29 "data/maps/Route135/scripts.pory"
	.string "What's WRONG with you?!\n I'm vegan, you PIG!$"

Route135_EventScript_WomanILoveMiltank_Text_0:
# 42 "data/maps/Route135/scripts.pory"
	.string "I just love MILTANK!$"

Route135_EventScript_WomanILoveMiltank_Text_1:
# 43 "data/maps/Route135/scripts.pory"
	.string "Yup. They make good burgers.$"

Route135_EventScript_WomanILoveMiltank_Text_2:
# 49 "data/maps/Route135/scripts.pory"
	.string "What's WRONG with you?!\n I'm vegan, you COW!$"

Route135_EventScript_FirstMoo_Text_0:
# 65 "data/maps/Route135/scripts.pory"
	.string "You're just in time!\n That MILTANK found it's moo!\p Listen!$"

Route135_EventScript_FirstMoo_Text_1:
# 76 "data/maps/Route135/scripts.pory"
	.string "MILTANK: Moooooo!$"

Route135_EventScript_FirstMoo_Text_2:
# 83 "data/maps/Route135/scripts.pory"
	.string "Isn't it beautiful?\n Gosh, I love nature.$"

Route135_EventScript_Man4DidYouKnow_Text_0:
# 95 "data/maps/Route135/scripts.pory"
	.string "Did you know?\n Some TAUROS have different types.$"

Route135_EventScript_Gentleman_Text_0:
# 101 "data/maps/Route135/scripts.pory"
	.string "That PROF. at the lab…\n He's researching some gotdang strange\l things, I'll tell you what.$"

Route135_EventScript_Sign_Text_0:
# 162 "data/maps/Route135/scripts.pory"
	.string "LUSH ACREAGE\p “The land of resplendent wonders!”$"
