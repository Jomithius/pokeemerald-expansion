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
	closemessage
# 92 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_MoomooMilkSalesman::
# 97 "data/maps/Route135/scripts.pory"
	lock
# 98 "data/maps/Route135/scripts.pory"
	faceplayer
# 99 "data/maps/Route135/scripts.pory"
	message Route135_EventScript_MoomooMilkSalesman_Text_0
# 101 "data/maps/Route135/scripts.pory"
	waitmessage
# 102 "data/maps/Route135/scripts.pory"
	pokemart Route135_Pokemart
# 103 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_MoomooMilkSalesman_Text_1, MSGBOX_DEFAULT
# 104 "data/maps/Route135/scripts.pory"
	release
	end


	.align 2
# 108 "data/maps/Route135/scripts.pory"
Route135_Pokemart:
# 109 "data/maps/Route135/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 110 "data/maps/Route135/scripts.pory"
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

Route135_EventScript_FatMan::
# 115 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FatMan_Text_0, MSGBOX_SIGN
	end


Route135_EventScript_Man4::
# 121 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man4_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Man1::
# 126 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man1_Text_0, MSGBOX_NPC
	end


Route135_EventScript_WomanILoveLechonk::
# 131 "data/maps/Route135/scripts.pory"
	lock
# 132 "data/maps/Route135/scripts.pory"
	faceplayer
# 133 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_0, MSGBOX_DEFAULT
# 134 "data/maps/Route135/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route135_EventScript_WomanILoveLechonk_Text_1, Route135_EventScript_WomanILoveLechonk_Text_2
# 135 "data/maps/Route135/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route135_EventScript_WomanILoveLechonk_2
# 140 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_4, MSGBOX_AUTOCLOSE
Route135_EventScript_WomanILoveLechonk_1:
# 143 "data/maps/Route135/scripts.pory"
	waitmessage
# 144 "data/maps/Route135/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 145 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 146 "data/maps/Route135/scripts.pory"
	release
	end

Route135_EventScript_WomanILoveLechonk_2:
# 136 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_3, MSGBOX_AUTOCLOSE
	goto Route135_EventScript_WomanILoveLechonk_1


Route135_EventScript_WomanILoveMiltank::
# 151 "data/maps/Route135/scripts.pory"
	lock
# 152 "data/maps/Route135/scripts.pory"
	faceplayer
# 153 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveMiltank_Text_0, MSGBOX_DEFAULT
# 154 "data/maps/Route135/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route135_EventScript_WomanILoveLechonk_Text_1, Route135_EventScript_WomanILoveMiltank_Text_1
# 155 "data/maps/Route135/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route135_EventScript_WomanILoveMiltank_2
# 160 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveMiltank_Text_2, MSGBOX_AUTOCLOSE
Route135_EventScript_WomanILoveMiltank_1:
# 163 "data/maps/Route135/scripts.pory"
	waitmessage
# 164 "data/maps/Route135/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 165 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 166 "data/maps/Route135/scripts.pory"
	release
	end

Route135_EventScript_WomanILoveMiltank_2:
# 156 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_3, MSGBOX_AUTOCLOSE
	goto Route135_EventScript_WomanILoveMiltank_1


Route135_EventScript_FirstMoo::
# 171 "data/maps/Route135/scripts.pory"
	lockall
# 172 "data/maps/Route135/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceDown
# 173 "data/maps/Route135/scripts.pory"
	waitmovement 26
# 174 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 175 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 176 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_0, MSGBOX_AUTOCLOSE
# 179 "data/maps/Route135/scripts.pory"
	waitmessage
# 180 "data/maps/Route135/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceLeft
# 181 "data/maps/Route135/scripts.pory"
	waitmovement 26
# 182 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 183 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 184 "data/maps/Route135/scripts.pory"
	fadeoutbgm 1
# 185 "data/maps/Route135/scripts.pory"
	delay 60
# 186 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MILTANK, CRY_MODE_ENCOUNTER
# 187 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_1, MSGBOX_AUTOCLOSE
# 188 "data/maps/Route135/scripts.pory"
	waitmoncry
# 189 "data/maps/Route135/scripts.pory"
	waitmessage
# 190 "data/maps/Route135/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceDown
# 191 "data/maps/Route135/scripts.pory"
	waitmovement 26
# 192 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 193 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 194 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_2, MSGBOX_AUTOCLOSE
# 196 "data/maps/Route135/scripts.pory"
	waitmessage
# 197 "data/maps/Route135/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceLeft
# 198 "data/maps/Route135/scripts.pory"
	waitmovement 26
# 199 "data/maps/Route135/scripts.pory"
	setvar VAR_TEMP_7, 1
# 200 "data/maps/Route135/scripts.pory"
	fadeinbgm 1
# 201 "data/maps/Route135/scripts.pory"
	releaseall
	end


Route135_EventScript_Man4DidYouKnow::
# 206 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man4DidYouKnow_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Gentleman::
# 212 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Gentleman_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Lechonk::
# 219 "data/maps/Route135/scripts.pory"
	lock
# 220 "data/maps/Route135/scripts.pory"
	faceplayer
# 221 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_LECHONK, CRY_MODE_ENCOUNTER
# 222 "data/maps/Route135/scripts.pory"
	waitmoncry
# 223 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Oinkologne::
# 228 "data/maps/Route135/scripts.pory"
	lock
# 229 "data/maps/Route135/scripts.pory"
	faceplayer
# 230 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_OINKOLOGNE, CRY_MODE_ENCOUNTER
# 231 "data/maps/Route135/scripts.pory"
	waitmoncry
# 232 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Mudbray::
# 237 "data/maps/Route135/scripts.pory"
	lock
# 238 "data/maps/Route135/scripts.pory"
	faceplayer
# 239 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MUDBRAY, CRY_MODE_ENCOUNTER
# 240 "data/maps/Route135/scripts.pory"
	waitmoncry
# 241 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Mudsdale::
# 246 "data/maps/Route135/scripts.pory"
	lock
# 247 "data/maps/Route135/scripts.pory"
	faceplayer
# 248 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MUDSDALE, CRY_MODE_ENCOUNTER
# 249 "data/maps/Route135/scripts.pory"
	waitmoncry
# 250 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Tauros::
# 255 "data/maps/Route135/scripts.pory"
	lock
# 256 "data/maps/Route135/scripts.pory"
	faceplayer
# 257 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_TAUROS, CRY_MODE_ENCOUNTER
# 258 "data/maps/Route135/scripts.pory"
	waitmoncry
# 259 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Miltank::
# 264 "data/maps/Route135/scripts.pory"
	lock
# 265 "data/maps/Route135/scripts.pory"
	faceplayer
# 266 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MILTANK, CRY_MODE_ENCOUNTER
# 267 "data/maps/Route135/scripts.pory"
	waitmoncry
# 268 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Sign::
# 273 "data/maps/Route135/scripts.pory"
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

Route135_EventScript_MoomooMilkSalesman_Text_0:
# 99 "data/maps/Route135/scripts.pory"
	.string "Welcome, partner!\n Take a gander at my wares.$"

Route135_EventScript_MoomooMilkSalesman_Text_1:
# 103 "data/maps/Route135/scripts.pory"
	.string "Pleasure doin' business!$"

Route135_EventScript_FatMan_Text_0:
# 115 "data/maps/Route135/scripts.pory"
	.string "Oh man…\n Look at all that tasty cabbage…$"

Route135_EventScript_Man4_Text_0:
# 121 "data/maps/Route135/scripts.pory"
	.string "It ain't much, but it's honest work.$"

Route135_EventScript_Man1_Text_0:
# 126 "data/maps/Route135/scripts.pory"
	.string "I lost my gosh darn hat!$"

Route135_EventScript_WomanILoveLechonk_Text_0:
# 133 "data/maps/Route135/scripts.pory"
	.string "I just love LECHONK!$"

Route135_EventScript_WomanILoveLechonk_Text_1:
# 134 "data/maps/Route135/scripts.pory"
	.string "Me too!$"

Route135_EventScript_WomanILoveLechonk_Text_2:
# 134 "data/maps/Route135/scripts.pory"
	.string "Yup. They make good bacon.$"

Route135_EventScript_WomanILoveLechonk_Text_3:
# 136 "data/maps/Route135/scripts.pory"
	.string "Right?!\n They're stinky, but sooo cute!$"

Route135_EventScript_WomanILoveLechonk_Text_4:
# 140 "data/maps/Route135/scripts.pory"
	.string "What's WRONG with you?!\n I'm vegan, you PIG!$"

Route135_EventScript_WomanILoveMiltank_Text_0:
# 153 "data/maps/Route135/scripts.pory"
	.string "I just love MILTANK!$"

Route135_EventScript_WomanILoveMiltank_Text_1:
# 154 "data/maps/Route135/scripts.pory"
	.string "Yup. They make good burgers.$"

Route135_EventScript_WomanILoveMiltank_Text_2:
# 160 "data/maps/Route135/scripts.pory"
	.string "What's WRONG with you?!\n I'm vegan, you COW!$"

Route135_EventScript_FirstMoo_Text_0:
# 176 "data/maps/Route135/scripts.pory"
	.string "You're just in time!\n That MILTANK found it's moo!\p Listen!$"

Route135_EventScript_FirstMoo_Text_1:
# 187 "data/maps/Route135/scripts.pory"
	.string "MILTANK: Moooooo!$"

Route135_EventScript_FirstMoo_Text_2:
# 194 "data/maps/Route135/scripts.pory"
	.string "Isn't it beautiful?\n Gosh, I love nature.$"

Route135_EventScript_Man4DidYouKnow_Text_0:
# 206 "data/maps/Route135/scripts.pory"
	.string "Did you know?\n Some TAUROS have different types.$"

Route135_EventScript_Gentleman_Text_0:
# 212 "data/maps/Route135/scripts.pory"
	.string "That PROF. at the lab…\n He's researching some gotdang strange\l things, I'll tell you what.$"

Route135_EventScript_Sign_Text_0:
# 273 "data/maps/Route135/scripts.pory"
	.string "LUSH ACREAGE\p “The land of resplendent wonders!”$"
