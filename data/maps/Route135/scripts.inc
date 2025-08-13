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


Route135_EventScript_Whitney::
# 48 "data/maps/Route135/scripts.pory"
	goto_if_not_defeated TRAINER_WHITNEY, Route135_EventScript_WhitneyBattle
# 49 "data/maps/Route135/scripts.pory"
	goto_if_unset FLAG_RECEIVED_MILTANKITE, Route135_EventScript_GiveMiltankite
# 50 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Whitney_Text_0, MSGBOX_NPC
	end


Route135_EventScript_WhitneyBattle::
# 57 "data/maps/Route135/scripts.pory"
	lock
# 58 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WhitneyBattle_Text_0, MSGBOX_AUTOCLOSE
# 61 "data/maps/Route135/scripts.pory"
	waitmessage
# 62 "data/maps/Route135/scripts.pory"
	playse SE_PIN
# 63 "data/maps/Route135/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 64 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route135/scripts.pory"
	waitse
# 66 "data/maps/Route135/scripts.pory"
	faceplayer
# 67 "data/maps/Route135/scripts.pory"
	playbgm MUS_ENCOUNTER_GIRL, FALSE
# 68 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WhitneyBattle_Text_1, MSGBOX_AUTOCLOSE
# 72 "data/maps/Route135/scripts.pory"
	waitmessage
# 73 "data/maps/Route135/scripts.pory"
	trainerbattle_no_intro TRAINER_WHITNEY, Route135_EventScript_WhitneyBattle_Text_2
# 74 "data/maps/Route135/scripts.pory"
	goto Route135_EventScript_GiveMiltankite
	end


Route135_EventScript_GiveMiltankite::
# 79 "data/maps/Route135/scripts.pory"
	lock
# 80 "data/maps/Route135/scripts.pory"
	faceplayer
# 81 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_GiveMiltankite_Text_0, MSGBOX_DEFAULT
# 85 "data/maps/Route135/scripts.pory"
	waitmessage
# 86 "data/maps/Route135/scripts.pory"
	checkitemspace ITEM_MILTANKITE
# 87 "data/maps/Route135/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 88 "data/maps/Route135/scripts.pory"
	giveitem ITEM_MILTANKITE
# 89 "data/maps/Route135/scripts.pory"
	setflag FLAG_RECEIVED_MILTANKITE
# 90 "data/maps/Route135/scripts.pory"
	waitmessage
# 91 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_GiveMiltankite_Text_1, MSGBOX_AUTOCLOSE
# 95 "data/maps/Route135/scripts.pory"
	waitmessage
# 96 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_MoomooMilkSalesman::
# 101 "data/maps/Route135/scripts.pory"
	lock
# 102 "data/maps/Route135/scripts.pory"
	faceplayer
# 103 "data/maps/Route135/scripts.pory"
	message Route135_EventScript_MoomooMilkSalesman_Text_0
# 105 "data/maps/Route135/scripts.pory"
	waitmessage
# 106 "data/maps/Route135/scripts.pory"
	pokemart Route135_Pokemart
# 107 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_MoomooMilkSalesman_Text_1, MSGBOX_DEFAULT
# 108 "data/maps/Route135/scripts.pory"
	release
	end


	.align 2
# 112 "data/maps/Route135/scripts.pory"
Route135_Pokemart:
# 113 "data/maps/Route135/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 114 "data/maps/Route135/scripts.pory"
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

Route135_EventScript_FatMan::
# 119 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FatMan_Text_0, MSGBOX_SIGN
	end


Route135_EventScript_Man4::
# 125 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man4_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Man1::
# 130 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man1_Text_0, MSGBOX_NPC
	end


Route135_EventScript_WomanILoveLechonk::
# 135 "data/maps/Route135/scripts.pory"
	lock
# 136 "data/maps/Route135/scripts.pory"
	faceplayer
# 137 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_0, MSGBOX_DEFAULT
# 138 "data/maps/Route135/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route135_EventScript_WomanILoveLechonk_Text_1, Route135_EventScript_WomanILoveLechonk_Text_2
# 139 "data/maps/Route135/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route135_EventScript_WomanILoveLechonk_2
# 144 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_4, MSGBOX_AUTOCLOSE
Route135_EventScript_WomanILoveLechonk_1:
# 147 "data/maps/Route135/scripts.pory"
	waitmessage
# 148 "data/maps/Route135/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 149 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 150 "data/maps/Route135/scripts.pory"
	release
	end

Route135_EventScript_WomanILoveLechonk_2:
# 140 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_3, MSGBOX_AUTOCLOSE
	goto Route135_EventScript_WomanILoveLechonk_1


Route135_EventScript_WomanILoveMiltank::
# 155 "data/maps/Route135/scripts.pory"
	lock
# 156 "data/maps/Route135/scripts.pory"
	faceplayer
# 157 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveMiltank_Text_0, MSGBOX_DEFAULT
# 158 "data/maps/Route135/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route135_EventScript_WomanILoveLechonk_Text_1, Route135_EventScript_WomanILoveMiltank_Text_1
# 159 "data/maps/Route135/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route135_EventScript_WomanILoveMiltank_2
# 164 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveMiltank_Text_2, MSGBOX_AUTOCLOSE
Route135_EventScript_WomanILoveMiltank_1:
# 167 "data/maps/Route135/scripts.pory"
	waitmessage
# 168 "data/maps/Route135/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 169 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 170 "data/maps/Route135/scripts.pory"
	release
	end

Route135_EventScript_WomanILoveMiltank_2:
# 160 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_3, MSGBOX_AUTOCLOSE
	goto Route135_EventScript_WomanILoveMiltank_1


Route135_EventScript_FirstMoo::
# 175 "data/maps/Route135/scripts.pory"
	lockall
# 176 "data/maps/Route135/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceDown
# 177 "data/maps/Route135/scripts.pory"
	waitmovement 26
# 178 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 179 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 180 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_0, MSGBOX_AUTOCLOSE
# 183 "data/maps/Route135/scripts.pory"
	waitmessage
# 184 "data/maps/Route135/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceLeft
# 185 "data/maps/Route135/scripts.pory"
	waitmovement 26
# 186 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 187 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 188 "data/maps/Route135/scripts.pory"
	fadeoutbgm 1
# 189 "data/maps/Route135/scripts.pory"
	delay 60
# 190 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MILTANK, CRY_MODE_ENCOUNTER
# 191 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_1, MSGBOX_AUTOCLOSE
# 192 "data/maps/Route135/scripts.pory"
	waitmoncry
# 193 "data/maps/Route135/scripts.pory"
	waitmessage
# 194 "data/maps/Route135/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceDown
# 195 "data/maps/Route135/scripts.pory"
	waitmovement 26
# 196 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 197 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 198 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_2, MSGBOX_AUTOCLOSE
# 200 "data/maps/Route135/scripts.pory"
	waitmessage
# 201 "data/maps/Route135/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceLeft
# 202 "data/maps/Route135/scripts.pory"
	waitmovement 26
# 203 "data/maps/Route135/scripts.pory"
	setvar VAR_TEMP_7, 1
# 204 "data/maps/Route135/scripts.pory"
	fadeinbgm 1
# 205 "data/maps/Route135/scripts.pory"
	releaseall
	end


Route135_EventScript_Man4DidYouKnow::
# 210 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man4DidYouKnow_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Gentleman::
# 216 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Gentleman_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Lechonk::
# 223 "data/maps/Route135/scripts.pory"
	lock
# 224 "data/maps/Route135/scripts.pory"
	faceplayer
# 225 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_LECHONK, CRY_MODE_ENCOUNTER
# 226 "data/maps/Route135/scripts.pory"
	waitmoncry
# 227 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Oinkologne::
# 232 "data/maps/Route135/scripts.pory"
	lock
# 233 "data/maps/Route135/scripts.pory"
	faceplayer
# 234 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_OINKOLOGNE, CRY_MODE_ENCOUNTER
# 235 "data/maps/Route135/scripts.pory"
	waitmoncry
# 236 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Mudbray::
# 241 "data/maps/Route135/scripts.pory"
	lock
# 242 "data/maps/Route135/scripts.pory"
	faceplayer
# 243 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MUDBRAY, CRY_MODE_ENCOUNTER
# 244 "data/maps/Route135/scripts.pory"
	waitmoncry
# 245 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Mudsdale::
# 250 "data/maps/Route135/scripts.pory"
	lock
# 251 "data/maps/Route135/scripts.pory"
	faceplayer
# 252 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MUDSDALE, CRY_MODE_ENCOUNTER
# 253 "data/maps/Route135/scripts.pory"
	waitmoncry
# 254 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Tauros::
# 259 "data/maps/Route135/scripts.pory"
	lock
# 260 "data/maps/Route135/scripts.pory"
	faceplayer
# 261 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_TAUROS, CRY_MODE_ENCOUNTER
# 262 "data/maps/Route135/scripts.pory"
	waitmoncry
# 263 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Miltank::
# 268 "data/maps/Route135/scripts.pory"
	lock
# 269 "data/maps/Route135/scripts.pory"
	faceplayer
# 270 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MILTANK, CRY_MODE_ENCOUNTER
# 271 "data/maps/Route135/scripts.pory"
	waitmoncry
# 272 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Sign::
# 277 "data/maps/Route135/scripts.pory"
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

Route135_EventScript_Whitney_Text_0:
# 50 "data/maps/Route135/scripts.pory"
	.string "Gosh, I'm so bored!\p I want to go back to GOLDENROD\n CITY already!$"

Route135_EventScript_WhitneyBattle_Text_0:
# 58 "data/maps/Route135/scripts.pory"
	.string "Gosh, it's so boring out here!\n Why did we have to visit our family\l out in HOENN's countryside…$"

Route135_EventScript_WhitneyBattle_Text_1:
# 68 "data/maps/Route135/scripts.pory"
	.string "Huh? Who are you?\n A TRAINER?\p Perfect timing!\n Help me have some fun with a battle!$"

Route135_EventScript_WhitneyBattle_Text_2:
# 73 "data/maps/Route135/scripts.pory"
	.string "That was fun!$"

Route135_EventScript_GiveMiltankite_Text_0:
# 81 "data/maps/Route135/scripts.pory"
	.string "That was a lot of fun!\n Did my MILTANK surprise you? Hehe!\p Here. I have an extra stone you can\n have as thanks for entertaining me!$"

Route135_EventScript_GiveMiltankite_Text_1:
# 91 "data/maps/Route135/scripts.pory"
	.string "I hope I can go back to GOLDENROD\n CITY soon.\p I want to go shopping at the DEPT.\n STORE!$"

Route135_EventScript_MoomooMilkSalesman_Text_0:
# 103 "data/maps/Route135/scripts.pory"
	.string "Welcome, partner!\n Take a gander at my wares.$"

Route135_EventScript_MoomooMilkSalesman_Text_1:
# 107 "data/maps/Route135/scripts.pory"
	.string "Pleasure doin' business!$"

Route135_EventScript_FatMan_Text_0:
# 119 "data/maps/Route135/scripts.pory"
	.string "Oh man…\n Look at all that tasty cabbage…$"

Route135_EventScript_Man4_Text_0:
# 125 "data/maps/Route135/scripts.pory"
	.string "It ain't much, but it's honest work.$"

Route135_EventScript_Man1_Text_0:
# 130 "data/maps/Route135/scripts.pory"
	.string "I lost my gosh darn hat!$"

Route135_EventScript_WomanILoveLechonk_Text_0:
# 137 "data/maps/Route135/scripts.pory"
	.string "I just love LECHONK!$"

Route135_EventScript_WomanILoveLechonk_Text_1:
# 138 "data/maps/Route135/scripts.pory"
	.string "Me too!$"

Route135_EventScript_WomanILoveLechonk_Text_2:
# 138 "data/maps/Route135/scripts.pory"
	.string "Yup. They make good bacon.$"

Route135_EventScript_WomanILoveLechonk_Text_3:
# 140 "data/maps/Route135/scripts.pory"
	.string "Right?!\n They're stinky, but sooo cute!$"

Route135_EventScript_WomanILoveLechonk_Text_4:
# 144 "data/maps/Route135/scripts.pory"
	.string "What's WRONG with you?!\n I'm vegan, you PIG!$"

Route135_EventScript_WomanILoveMiltank_Text_0:
# 157 "data/maps/Route135/scripts.pory"
	.string "I just love MILTANK!$"

Route135_EventScript_WomanILoveMiltank_Text_1:
# 158 "data/maps/Route135/scripts.pory"
	.string "Yup. They make good burgers.$"

Route135_EventScript_WomanILoveMiltank_Text_2:
# 164 "data/maps/Route135/scripts.pory"
	.string "What's WRONG with you?!\n I'm vegan, you COW!$"

Route135_EventScript_FirstMoo_Text_0:
# 180 "data/maps/Route135/scripts.pory"
	.string "You're just in time!\n That MILTANK found it's moo!\p Listen!$"

Route135_EventScript_FirstMoo_Text_1:
# 191 "data/maps/Route135/scripts.pory"
	.string "MILTANK: Moooooo!$"

Route135_EventScript_FirstMoo_Text_2:
# 198 "data/maps/Route135/scripts.pory"
	.string "Isn't it beautiful?\n Gosh, I love nature.$"

Route135_EventScript_Man4DidYouKnow_Text_0:
# 210 "data/maps/Route135/scripts.pory"
	.string "Did you know?\n Some TAUROS have different types.$"

Route135_EventScript_Gentleman_Text_0:
# 216 "data/maps/Route135/scripts.pory"
	.string "That PROF. at the lab…\n He's researching some gotdang strange\l things, I'll tell you what.$"

Route135_EventScript_Sign_Text_0:
# 277 "data/maps/Route135/scripts.pory"
	.string "LUSH ACREAGE\p “The land of resplendent wonders!”$"
