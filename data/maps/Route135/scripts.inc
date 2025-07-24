Route135_MapScripts::
# 2 "data/maps/Route135/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route135_OnTransition
	.byte 0


Route135_OnTransition::
# 6 "data/maps/Route135/scripts.pory"
	setflag FLAG_ENABLED_JAMES_MATCH_CALL
# 7 "data/maps/Route135/scripts.pory"
	setflag FLAG_SYS_DYNAMIC_LEVELS
	end


Route135_EventScript_Danny::
# 12 "data/maps/Route135/scripts.pory"
	trainerbattle_single TRAINER_DANNY, Route135_EventScript_Danny_Text_0, Route135_EventScript_Danny_Text_1
# 13 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Danny_Text_2, MSGBOX_NPC
	end


Route135_EventScript_Danuel::
# 18 "data/maps/Route135/scripts.pory"
	trainerbattle_single TRAINER_DANUEL, Route135_EventScript_Danuel_Text_0, Route135_EventScript_Danuel_Text_1
# 19 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Danuel_Text_2, MSGBOX_NPC
	end


Route135_EventScript_Pibbles::
# 25 "data/maps/Route135/scripts.pory"
	trainerbattle_single TRAINER_PIBBLES, Route135_EventScript_Pibbles_Text_0, Route135_EventScript_Pibbles_Text_1
# 26 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Pibbles_Text_2, MSGBOX_NPC
	end


Route135_EventScript_Billiam::
# 32 "data/maps/Route135/scripts.pory"
	trainerbattle_single TRAINER_BILLIAM, Route135_EventScript_Billiam_Text_0, Route135_EventScript_Billiam_Text_1
# 33 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Billiam_Text_2, MSGBOX_NPC
	end


Route135_EventScript_Denjamin::
# 41 "data/maps/Route135/scripts.pory"
	trainerbattle_single TRAINER_DENJAMIN, Route135_EventScript_Denjamin_Text_0, Route135_EventScript_Denjamin_Text_1
# 42 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Denjamin_Text_2, MSGBOX_NPC
	end


Route135_EventScript_Pamuel::
# 48 "data/maps/Route135/scripts.pory"
	trainerbattle_single TRAINER_PAMUEL, Route135_EventScript_Pamuel_Text_0, Route135_EventScript_Pamuel_Text_1
# 49 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Pamuel_Text_2, MSGBOX_NPC
	end


Route135_EventScript_FatMan::
# 55 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FatMan_Text_0, MSGBOX_SIGN
	end


Route135_EventScript_Man4::
# 61 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man4_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Man1::
# 66 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man1_Text_0, MSGBOX_NPC
	end


Route135_EventScript_WomanILoveLechonk::
# 71 "data/maps/Route135/scripts.pory"
	lock
# 72 "data/maps/Route135/scripts.pory"
	faceplayer
# 73 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_0, MSGBOX_DEFAULT
# 74 "data/maps/Route135/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route135_EventScript_WomanILoveLechonk_Text_1, Route135_EventScript_WomanILoveLechonk_Text_2
# 75 "data/maps/Route135/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route135_EventScript_WomanILoveLechonk_2
# 80 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_4, MSGBOX_AUTOCLOSE
Route135_EventScript_WomanILoveLechonk_1:
# 83 "data/maps/Route135/scripts.pory"
	waitmessage
# 84 "data/maps/Route135/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 85 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route135/scripts.pory"
	release
	end

Route135_EventScript_WomanILoveLechonk_2:
# 76 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_3, MSGBOX_AUTOCLOSE
	goto Route135_EventScript_WomanILoveLechonk_1


Route135_EventScript_WomanILoveMiltank::
# 91 "data/maps/Route135/scripts.pory"
	lock
# 92 "data/maps/Route135/scripts.pory"
	faceplayer
# 93 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveMiltank_Text_0, MSGBOX_DEFAULT
# 94 "data/maps/Route135/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route135_EventScript_WomanILoveLechonk_Text_1, Route135_EventScript_WomanILoveMiltank_Text_1
# 95 "data/maps/Route135/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route135_EventScript_WomanILoveMiltank_2
# 100 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveMiltank_Text_2, MSGBOX_AUTOCLOSE
Route135_EventScript_WomanILoveMiltank_1:
# 103 "data/maps/Route135/scripts.pory"
	waitmessage
# 104 "data/maps/Route135/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 105 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 106 "data/maps/Route135/scripts.pory"
	release
	end

Route135_EventScript_WomanILoveMiltank_2:
# 96 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_3, MSGBOX_AUTOCLOSE
	goto Route135_EventScript_WomanILoveMiltank_1


Route135_EventScript_FirstMoo::
# 111 "data/maps/Route135/scripts.pory"
	lockall
# 112 "data/maps/Route135/scripts.pory"
	applymovement 27, Common_Movement_WalkInPlaceDown
# 113 "data/maps/Route135/scripts.pory"
	waitmovement 27
# 114 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 115 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 116 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_0, MSGBOX_AUTOCLOSE
# 119 "data/maps/Route135/scripts.pory"
	waitmessage
# 120 "data/maps/Route135/scripts.pory"
	applymovement 27, Common_Movement_WalkInPlaceLeft
# 121 "data/maps/Route135/scripts.pory"
	waitmovement 27
# 122 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 123 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 124 "data/maps/Route135/scripts.pory"
	fadeoutbgm 1
# 125 "data/maps/Route135/scripts.pory"
	delay 60
# 126 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MILTANK, CRY_MODE_ENCOUNTER
# 127 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_1, MSGBOX_AUTOCLOSE
# 128 "data/maps/Route135/scripts.pory"
	waitmoncry
# 129 "data/maps/Route135/scripts.pory"
	waitmessage
# 130 "data/maps/Route135/scripts.pory"
	applymovement 27, Common_Movement_WalkInPlaceDown
# 131 "data/maps/Route135/scripts.pory"
	waitmovement 27
# 132 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 133 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 134 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_2, MSGBOX_AUTOCLOSE
# 136 "data/maps/Route135/scripts.pory"
	waitmessage
# 137 "data/maps/Route135/scripts.pory"
	applymovement 27, Common_Movement_WalkInPlaceLeft
# 138 "data/maps/Route135/scripts.pory"
	waitmovement 27
# 139 "data/maps/Route135/scripts.pory"
	setvar VAR_TEMP_7, 1
# 140 "data/maps/Route135/scripts.pory"
	fadeinbgm 1
# 141 "data/maps/Route135/scripts.pory"
	releaseall
	end


Route135_EventScript_Man4DidYouKnow::
# 146 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man4DidYouKnow_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Gentleman::
# 152 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Gentleman_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Lechonk::
# 159 "data/maps/Route135/scripts.pory"
	lock
# 160 "data/maps/Route135/scripts.pory"
	faceplayer
# 161 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_LECHONK, CRY_MODE_ENCOUNTER
# 162 "data/maps/Route135/scripts.pory"
	waitmoncry
# 163 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Oinkologne::
# 168 "data/maps/Route135/scripts.pory"
	lock
# 169 "data/maps/Route135/scripts.pory"
	faceplayer
# 170 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_OINKOLOGNE, CRY_MODE_ENCOUNTER
# 171 "data/maps/Route135/scripts.pory"
	waitmoncry
# 172 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Mudbray::
# 177 "data/maps/Route135/scripts.pory"
	lock
# 178 "data/maps/Route135/scripts.pory"
	faceplayer
# 179 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MUDBRAY, CRY_MODE_ENCOUNTER
# 180 "data/maps/Route135/scripts.pory"
	waitmoncry
# 181 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Mudsdale::
# 186 "data/maps/Route135/scripts.pory"
	lock
# 187 "data/maps/Route135/scripts.pory"
	faceplayer
# 188 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MUDSDALE, CRY_MODE_ENCOUNTER
# 189 "data/maps/Route135/scripts.pory"
	waitmoncry
# 190 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Tauros::
# 195 "data/maps/Route135/scripts.pory"
	lock
# 196 "data/maps/Route135/scripts.pory"
	faceplayer
# 197 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_TAUROS, CRY_MODE_ENCOUNTER
# 198 "data/maps/Route135/scripts.pory"
	waitmoncry
# 199 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Miltank::
# 204 "data/maps/Route135/scripts.pory"
	lock
# 205 "data/maps/Route135/scripts.pory"
	faceplayer
# 206 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MILTANK, CRY_MODE_ENCOUNTER
# 207 "data/maps/Route135/scripts.pory"
	waitmoncry
# 208 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Sign::
# 213 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Route135_EventScript_Danny_Text_0:
# 12 "data/maps/Route135/scripts.pory"
	.string "Hey!\nDoesn't this POKéMON sound weird?$"

Route135_EventScript_Danny_Text_1:
# 12 "data/maps/Route135/scripts.pory"
	.string "I've never heard a POKéMON like that!$"

Route135_EventScript_Danny_Text_2:
# 13 "data/maps/Route135/scripts.pory"
	.string "I've heard seen a POKéMON like that!$"

Route135_EventScript_Danuel_Text_0:
# 18 "data/maps/Route135/scripts.pory"
	.string "Hey!\nThis is my fishing spot!$"

Route135_EventScript_Danuel_Text_1:
# 18 "data/maps/Route135/scripts.pory"
	.string "I guess you can fish here too.$"

Route135_EventScript_Danuel_Text_2:
# 19 "data/maps/Route135/scripts.pory"
	.string "I've lived here all my life.\n Most of the residents here are vegan.$"

Route135_EventScript_Pibbles_Text_0:
# 25 "data/maps/Route135/scripts.pory"
	.string "I love nature!$"

Route135_EventScript_Pibbles_Text_1:
# 25 "data/maps/Route135/scripts.pory"
	.string "I don't love battling.$"

Route135_EventScript_Pibbles_Text_2:
# 26 "data/maps/Route135/scripts.pory"
	.string "I love how rural it is out here.\n Nature is so beautiful.$"

Route135_EventScript_Billiam_Text_0:
# 32 "data/maps/Route135/scripts.pory"
	.string "It's my job to train POKéMON out here!$"

Route135_EventScript_Billiam_Text_1:
# 32 "data/maps/Route135/scripts.pory"
	.string "Thanks for helping!$"

Route135_EventScript_Billiam_Text_2:
# 33 "data/maps/Route135/scripts.pory"
	.string "I was lucky enough to get a job\n at the ranch.\p Oh, sorry.\n Do you even know what a job is?$"

Route135_EventScript_Denjamin_Text_0:
# 41 "data/maps/Route135/scripts.pory"
	.string "I'm on break right now.\nLet's kill time with a battle!$"

Route135_EventScript_Denjamin_Text_1:
# 41 "data/maps/Route135/scripts.pory"
	.string "I don't want to get back to work.$"

Route135_EventScript_Denjamin_Text_2:
# 42 "data/maps/Route135/scripts.pory"
	.string "It's hard work out here, but the\n pay is surprisingly good.$"

Route135_EventScript_Pamuel_Text_0:
# 48 "data/maps/Route135/scripts.pory"
	.string "Gosh, I'm so bored.\nEntertain me with a battle!$"

Route135_EventScript_Pamuel_Text_1:
# 48 "data/maps/Route135/scripts.pory"
	.string "That was fun!$"

Route135_EventScript_Pamuel_Text_2:
# 49 "data/maps/Route135/scripts.pory"
	.string "I've lived out here all my life.\n I wonder what the city's like.$"

Route135_EventScript_FatMan_Text_0:
# 55 "data/maps/Route135/scripts.pory"
	.string "Oh man…\n Look at all that tasty cabbage…$"

Route135_EventScript_Man4_Text_0:
# 61 "data/maps/Route135/scripts.pory"
	.string "It ain't much, but it's honest work.$"

Route135_EventScript_Man1_Text_0:
# 66 "data/maps/Route135/scripts.pory"
	.string "I lost my gosh darn hat!$"

Route135_EventScript_WomanILoveLechonk_Text_0:
# 73 "data/maps/Route135/scripts.pory"
	.string "I just love LECHONK!$"

Route135_EventScript_WomanILoveLechonk_Text_1:
# 74 "data/maps/Route135/scripts.pory"
	.string "Me too!$"

Route135_EventScript_WomanILoveLechonk_Text_2:
# 74 "data/maps/Route135/scripts.pory"
	.string "Yup. They make good bacon.$"

Route135_EventScript_WomanILoveLechonk_Text_3:
# 76 "data/maps/Route135/scripts.pory"
	.string "Right?!\n They're stinky, but sooo cute!$"

Route135_EventScript_WomanILoveLechonk_Text_4:
# 80 "data/maps/Route135/scripts.pory"
	.string "What's WRONG with you?!\n I'm vegan, you PIG!$"

Route135_EventScript_WomanILoveMiltank_Text_0:
# 93 "data/maps/Route135/scripts.pory"
	.string "I just love MILTANK!$"

Route135_EventScript_WomanILoveMiltank_Text_1:
# 94 "data/maps/Route135/scripts.pory"
	.string "Yup. They make good burgers.$"

Route135_EventScript_WomanILoveMiltank_Text_2:
# 100 "data/maps/Route135/scripts.pory"
	.string "What's WRONG with you?!\n I'm vegan, you COW!$"

Route135_EventScript_FirstMoo_Text_0:
# 116 "data/maps/Route135/scripts.pory"
	.string "You're just in time!\n That MILTANK found it's moo!\p Listen!$"

Route135_EventScript_FirstMoo_Text_1:
# 127 "data/maps/Route135/scripts.pory"
	.string "MILTANK: Moooooo!$"

Route135_EventScript_FirstMoo_Text_2:
# 134 "data/maps/Route135/scripts.pory"
	.string "Isn't it beautiful?\n Gosh, I love nature.$"

Route135_EventScript_Man4DidYouKnow_Text_0:
# 146 "data/maps/Route135/scripts.pory"
	.string "Did you know?\n Some TAUROS have different types.$"

Route135_EventScript_Gentleman_Text_0:
# 152 "data/maps/Route135/scripts.pory"
	.string "That PROF. at the lab…\n He's researching some gotdang strange\l things, I'll tell you what.$"

Route135_EventScript_Sign_Text_0:
# 213 "data/maps/Route135/scripts.pory"
	.string "LUSH ACREAGE\p “The land of resplendent wonders!”$"
