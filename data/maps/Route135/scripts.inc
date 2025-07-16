Route135_MapScripts::
# 2 "data/maps/Route135/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route135_OnTransition
	.byte 0


Route135_OnTransition::
# 6 "data/maps/Route135/scripts.pory"
	setflag FLAG_ENABLED_JAMES_MATCH_CALL
	end


Route135_EventScript_FatMan::
# 11 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FatMan_Text_0, MSGBOX_SIGN
	end


Route135_EventScript_Man4::
# 17 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man4_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Man1::
# 22 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man1_Text_0, MSGBOX_NPC
	end


Route135_EventScript_WomanILoveLechonk::
# 27 "data/maps/Route135/scripts.pory"
	lock
# 28 "data/maps/Route135/scripts.pory"
	faceplayer
# 29 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_0, MSGBOX_DEFAULT
# 30 "data/maps/Route135/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route135_EventScript_WomanILoveLechonk_Text_1, Route135_EventScript_WomanILoveLechonk_Text_2
# 31 "data/maps/Route135/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route135_EventScript_WomanILoveLechonk_2
# 36 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_4, MSGBOX_AUTOCLOSE
Route135_EventScript_WomanILoveLechonk_1:
# 39 "data/maps/Route135/scripts.pory"
	waitmessage
# 40 "data/maps/Route135/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 41 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route135/scripts.pory"
	release
	end

Route135_EventScript_WomanILoveLechonk_2:
# 32 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_3, MSGBOX_AUTOCLOSE
	goto Route135_EventScript_WomanILoveLechonk_1


Route135_EventScript_WomanILoveMiltank::
# 47 "data/maps/Route135/scripts.pory"
	lock
# 48 "data/maps/Route135/scripts.pory"
	faceplayer
# 49 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveMiltank_Text_0, MSGBOX_DEFAULT
# 50 "data/maps/Route135/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route135_EventScript_WomanILoveLechonk_Text_1, Route135_EventScript_WomanILoveMiltank_Text_1
# 51 "data/maps/Route135/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route135_EventScript_WomanILoveMiltank_2
# 56 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveMiltank_Text_2, MSGBOX_AUTOCLOSE
Route135_EventScript_WomanILoveMiltank_1:
# 59 "data/maps/Route135/scripts.pory"
	waitmessage
# 60 "data/maps/Route135/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 61 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 62 "data/maps/Route135/scripts.pory"
	release
	end

Route135_EventScript_WomanILoveMiltank_2:
# 52 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_3, MSGBOX_AUTOCLOSE
	goto Route135_EventScript_WomanILoveMiltank_1


Route135_EventScript_FirstMoo::
# 67 "data/maps/Route135/scripts.pory"
	lockall
# 68 "data/maps/Route135/scripts.pory"
	applymovement 27, Common_Movement_WalkInPlaceDown
# 69 "data/maps/Route135/scripts.pory"
	waitmovement 27
# 70 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 71 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_0, MSGBOX_AUTOCLOSE
# 75 "data/maps/Route135/scripts.pory"
	waitmessage
# 76 "data/maps/Route135/scripts.pory"
	applymovement 27, Common_Movement_WalkInPlaceLeft
# 77 "data/maps/Route135/scripts.pory"
	waitmovement 27
# 78 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 79 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route135/scripts.pory"
	fadeoutbgm 1
# 81 "data/maps/Route135/scripts.pory"
	delay 60
# 82 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MILTANK, CRY_MODE_ENCOUNTER
# 83 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_1, MSGBOX_AUTOCLOSE
# 84 "data/maps/Route135/scripts.pory"
	waitmoncry
# 85 "data/maps/Route135/scripts.pory"
	waitmessage
# 86 "data/maps/Route135/scripts.pory"
	applymovement 27, Common_Movement_WalkInPlaceDown
# 87 "data/maps/Route135/scripts.pory"
	waitmovement 27
# 88 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 89 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_2, MSGBOX_AUTOCLOSE
# 92 "data/maps/Route135/scripts.pory"
	waitmessage
# 93 "data/maps/Route135/scripts.pory"
	applymovement 27, Common_Movement_WalkInPlaceLeft
# 94 "data/maps/Route135/scripts.pory"
	waitmovement 27
# 95 "data/maps/Route135/scripts.pory"
	setvar VAR_TEMP_7, 1
# 96 "data/maps/Route135/scripts.pory"
	fadeinbgm 1
# 97 "data/maps/Route135/scripts.pory"
	releaseall
	end


Route135_EventScript_Man4DidYouKnow::
# 102 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man4DidYouKnow_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Gentleman::
# 108 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Gentleman_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Lechonk::
# 115 "data/maps/Route135/scripts.pory"
	lock
# 116 "data/maps/Route135/scripts.pory"
	faceplayer
# 117 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_LECHONK, CRY_MODE_ENCOUNTER
# 118 "data/maps/Route135/scripts.pory"
	waitmoncry
# 119 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Oinkologne::
# 124 "data/maps/Route135/scripts.pory"
	lock
# 125 "data/maps/Route135/scripts.pory"
	faceplayer
# 126 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_OINKOLOGNE, CRY_MODE_ENCOUNTER
# 127 "data/maps/Route135/scripts.pory"
	waitmoncry
# 128 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Mudbray::
# 133 "data/maps/Route135/scripts.pory"
	lock
# 134 "data/maps/Route135/scripts.pory"
	faceplayer
# 135 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MUDBRAY, CRY_MODE_ENCOUNTER
# 136 "data/maps/Route135/scripts.pory"
	waitmoncry
# 137 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Mudsdale::
# 142 "data/maps/Route135/scripts.pory"
	lock
# 143 "data/maps/Route135/scripts.pory"
	faceplayer
# 144 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MUDSDALE, CRY_MODE_ENCOUNTER
# 145 "data/maps/Route135/scripts.pory"
	waitmoncry
# 146 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Tauros::
# 151 "data/maps/Route135/scripts.pory"
	lock
# 152 "data/maps/Route135/scripts.pory"
	faceplayer
# 153 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_TAUROS, CRY_MODE_ENCOUNTER
# 154 "data/maps/Route135/scripts.pory"
	waitmoncry
# 155 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Miltank::
# 160 "data/maps/Route135/scripts.pory"
	lock
# 161 "data/maps/Route135/scripts.pory"
	faceplayer
# 162 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MILTANK, CRY_MODE_ENCOUNTER
# 163 "data/maps/Route135/scripts.pory"
	waitmoncry
# 164 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Sign::
# 169 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Route135_EventScript_FatMan_Text_0:
# 11 "data/maps/Route135/scripts.pory"
	.string "Oh man…\n Look at all that tasty cabbage…$"

Route135_EventScript_Man4_Text_0:
# 17 "data/maps/Route135/scripts.pory"
	.string "It ain't much, but it's honest work.$"

Route135_EventScript_Man1_Text_0:
# 22 "data/maps/Route135/scripts.pory"
	.string "I lost my gosh darn hat!$"

Route135_EventScript_WomanILoveLechonk_Text_0:
# 29 "data/maps/Route135/scripts.pory"
	.string "I just love LECHONK!$"

Route135_EventScript_WomanILoveLechonk_Text_1:
# 30 "data/maps/Route135/scripts.pory"
	.string "Me too!$"

Route135_EventScript_WomanILoveLechonk_Text_2:
# 30 "data/maps/Route135/scripts.pory"
	.string "Yup. They make good bacon.$"

Route135_EventScript_WomanILoveLechonk_Text_3:
# 32 "data/maps/Route135/scripts.pory"
	.string "Right?!\n They're stinky, but sooo cute!$"

Route135_EventScript_WomanILoveLechonk_Text_4:
# 36 "data/maps/Route135/scripts.pory"
	.string "What's WRONG with you?!\n I'm vegan, you PIG!$"

Route135_EventScript_WomanILoveMiltank_Text_0:
# 49 "data/maps/Route135/scripts.pory"
	.string "I just love MILTANK!$"

Route135_EventScript_WomanILoveMiltank_Text_1:
# 50 "data/maps/Route135/scripts.pory"
	.string "Yup. They make good burgers.$"

Route135_EventScript_WomanILoveMiltank_Text_2:
# 56 "data/maps/Route135/scripts.pory"
	.string "What's WRONG with you?!\n I'm vegan, you COW!$"

Route135_EventScript_FirstMoo_Text_0:
# 72 "data/maps/Route135/scripts.pory"
	.string "You're just in time!\n That MILTANK found it's moo!\p Listen!$"

Route135_EventScript_FirstMoo_Text_1:
# 83 "data/maps/Route135/scripts.pory"
	.string "MILTANK: Moooooo!$"

Route135_EventScript_FirstMoo_Text_2:
# 90 "data/maps/Route135/scripts.pory"
	.string "Isn't it beautiful?\n Gosh, I love nature.$"

Route135_EventScript_Man4DidYouKnow_Text_0:
# 102 "data/maps/Route135/scripts.pory"
	.string "Did you know?\n Some TAUROS have different types.$"

Route135_EventScript_Gentleman_Text_0:
# 108 "data/maps/Route135/scripts.pory"
	.string "That PROF. at the lab…\n He's researching some gotdang strange\l things, I'll tell you what.$"

Route135_EventScript_Sign_Text_0:
# 169 "data/maps/Route135/scripts.pory"
	.string "LUSH ACREAGE\p “The land of resplendent wonders!”$"
