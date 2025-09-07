Route135_MapScripts::
# 2 "data/maps/Route135/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route135_OnTransition
	.byte 0


Route135_OnTransition::
# 6 "data/maps/Route135/scripts.pory"
	setflag FLAG_ENABLED_JAMES_MATCH_CALL
# 7 "data/maps/Route135/scripts.pory"
	setflag FLAG_SYS_DYNAMIC_LEVELS
# 8 "data/maps/Route135/scripts.pory"
	call Route135_CheckEnterFromLab
	end


Route135_CheckEnterFromLab::
# 13 "data/maps/Route135/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 14 "data/maps/Route135/scripts.pory"
	call_if_le VAR_TEMP_0, 28, Route135_EnteredFromLab
	return


Route135_TryUpdateMusic::
# 20 "data/maps/Route135/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 21 "data/maps/Route135/scripts.pory"
	goto_if_eq VAR_RESULT, DIR_EAST, Route135_UpdateMusicLushAcreage
# 22 "data/maps/Route135/scripts.pory"
	goto_if_eq VAR_RESULT, DIR_NORTH, Route135_UpdateMusicLushAcreage
# 23 "data/maps/Route135/scripts.pory"
	goto_if_eq VAR_RESULT, DIR_WEST, Route135_UpdateDefaultMusic
# 24 "data/maps/Route135/scripts.pory"
	goto_if_eq VAR_RESULT, DIR_SOUTH, Route135_UpdateDefaultMusic
	end


Route135_UpdateMusicLushAcreage::
# 29 "data/maps/Route135/scripts.pory"
	fadenewbgm MUS_ETERNA_CITY_NIGHT
# 30 "data/maps/Route135/scripts.pory"
	savebgm MUS_ETERNA_CITY_NIGHT
	end


Route135_UpdateDefaultMusic::
# 35 "data/maps/Route135/scripts.pory"
	fadedefaultbgm
# 36 "data/maps/Route135/scripts.pory"
	savebgm MUS_ROWANS_LAB
	end


Route135_OnlySaveDefaultMusic::
# 41 "data/maps/Route135/scripts.pory"
	savebgm MUS_ROWANS_LAB
	end


Route135_EnteredFromLab::
# 46 "data/maps/Route135/scripts.pory"
	savebgm MUS_ETERNA_CITY_NIGHT
	return


Route135_EventScript_Danny::
# 51 "data/maps/Route135/scripts.pory"
	trainerbattle_single TRAINER_DANNY, Route135_EventScript_Danny_Text_0, Route135_EventScript_Danny_Text_1
# 52 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Danny_Text_2, MSGBOX_NPC
	end


Route135_EventScript_Danuel::
# 57 "data/maps/Route135/scripts.pory"
	trainerbattle_single TRAINER_DANUEL, Route135_EventScript_Danuel_Text_0, Route135_EventScript_Danuel_Text_1
# 58 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Danuel_Text_2, MSGBOX_NPC
	end


Route135_EventScript_Pibbles::
# 64 "data/maps/Route135/scripts.pory"
	trainerbattle_single TRAINER_PIBBLES, Route135_EventScript_Pibbles_Text_0, Route135_EventScript_Pibbles_Text_1
# 65 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Pibbles_Text_2, MSGBOX_NPC
	end


Route135_EventScript_Billiam::
# 71 "data/maps/Route135/scripts.pory"
	trainerbattle_single TRAINER_BILLIAM, Route135_EventScript_Billiam_Text_0, Route135_EventScript_Billiam_Text_1
# 72 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Billiam_Text_2, MSGBOX_NPC
	end


Route135_EventScript_Denjamin::
# 80 "data/maps/Route135/scripts.pory"
	trainerbattle_single TRAINER_DENJAMIN, Route135_EventScript_Denjamin_Text_0, Route135_EventScript_Denjamin_Text_1
# 81 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Denjamin_Text_2, MSGBOX_NPC
	end


Route135_EventScript_Whitney::
# 87 "data/maps/Route135/scripts.pory"
	goto_if_not_defeated TRAINER_WHITNEY, Route135_EventScript_WhitneyBattle
# 88 "data/maps/Route135/scripts.pory"
	goto_if_unset FLAG_RECEIVED_MILTANKITE, Route135_EventScript_GiveMiltankite
# 89 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Whitney_Text_0, MSGBOX_NPC
	end


Route135_EventScript_WhitneyBattle::
# 96 "data/maps/Route135/scripts.pory"
	lock
# 97 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WhitneyBattle_Text_0, MSGBOX_AUTOCLOSE
# 100 "data/maps/Route135/scripts.pory"
	waitmessage
# 101 "data/maps/Route135/scripts.pory"
	playse SE_PIN
# 102 "data/maps/Route135/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 103 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 104 "data/maps/Route135/scripts.pory"
	waitse
# 105 "data/maps/Route135/scripts.pory"
	faceplayer
# 106 "data/maps/Route135/scripts.pory"
	playbgm MUS_ENCOUNTER_GIRL, FALSE
# 107 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WhitneyBattle_Text_1, MSGBOX_AUTOCLOSE
# 111 "data/maps/Route135/scripts.pory"
	waitmessage
# 112 "data/maps/Route135/scripts.pory"
	trainerbattle_no_intro TRAINER_WHITNEY, Route135_EventScript_WhitneyBattle_Text_2
# 113 "data/maps/Route135/scripts.pory"
	goto Route135_EventScript_GiveMiltankite
	end


Route135_EventScript_GiveMiltankite::
# 118 "data/maps/Route135/scripts.pory"
	lock
# 119 "data/maps/Route135/scripts.pory"
	faceplayer
# 120 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_GiveMiltankite_Text_0, MSGBOX_DEFAULT
# 124 "data/maps/Route135/scripts.pory"
	waitmessage
# 125 "data/maps/Route135/scripts.pory"
	checkitemspace ITEM_MILTANKITE
# 126 "data/maps/Route135/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 127 "data/maps/Route135/scripts.pory"
	giveitem ITEM_MILTANKITE
# 128 "data/maps/Route135/scripts.pory"
	setflag FLAG_RECEIVED_MILTANKITE
# 129 "data/maps/Route135/scripts.pory"
	waitmessage
# 130 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_GiveMiltankite_Text_1, MSGBOX_AUTOCLOSE
# 134 "data/maps/Route135/scripts.pory"
	waitmessage
# 135 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_MoomooMilkSalesman::
# 140 "data/maps/Route135/scripts.pory"
	lock
# 141 "data/maps/Route135/scripts.pory"
	faceplayer
# 142 "data/maps/Route135/scripts.pory"
	message Route135_EventScript_MoomooMilkSalesman_Text_0
# 144 "data/maps/Route135/scripts.pory"
	waitmessage
# 145 "data/maps/Route135/scripts.pory"
	pokemart Route135_Pokemart
# 146 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_MoomooMilkSalesman_Text_1, MSGBOX_DEFAULT
# 147 "data/maps/Route135/scripts.pory"
	release
	end


	.align 2
# 151 "data/maps/Route135/scripts.pory"
Route135_Pokemart:
# 152 "data/maps/Route135/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 153 "data/maps/Route135/scripts.pory"
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

Route135_EventScript_FatMan::
# 158 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FatMan_Text_0, MSGBOX_SIGN
	end


Route135_EventScript_Man4::
# 164 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man4_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Man1::
# 169 "data/maps/Route135/scripts.pory"
	lock
# 170 "data/maps/Route135/scripts.pory"
	faceplayer
# 171 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man1_Text_0, MSGBOX_AUTOCLOSE
# 172 "data/maps/Route135/scripts.pory"
	waitmessage
# 173 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_WomanILoveLechonk::
# 178 "data/maps/Route135/scripts.pory"
	lock
# 179 "data/maps/Route135/scripts.pory"
	faceplayer
# 180 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_0, MSGBOX_DEFAULT
# 181 "data/maps/Route135/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route135_EventScript_WomanILoveLechonk_Text_1, Route135_EventScript_WomanILoveLechonk_Text_2
# 182 "data/maps/Route135/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route135_EventScript_WomanILoveLechonk_2
# 187 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_4, MSGBOX_AUTOCLOSE
Route135_EventScript_WomanILoveLechonk_1:
# 190 "data/maps/Route135/scripts.pory"
	waitmessage
# 191 "data/maps/Route135/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 192 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 193 "data/maps/Route135/scripts.pory"
	release
	end

Route135_EventScript_WomanILoveLechonk_2:
# 183 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_3, MSGBOX_AUTOCLOSE
	goto Route135_EventScript_WomanILoveLechonk_1


Route135_EventScript_WomanILoveMiltank::
# 198 "data/maps/Route135/scripts.pory"
	lock
# 199 "data/maps/Route135/scripts.pory"
	faceplayer
# 200 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveMiltank_Text_0, MSGBOX_DEFAULT
# 201 "data/maps/Route135/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route135_EventScript_WomanILoveLechonk_Text_1, Route135_EventScript_WomanILoveMiltank_Text_1
# 202 "data/maps/Route135/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route135_EventScript_WomanILoveMiltank_2
# 207 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveMiltank_Text_2, MSGBOX_AUTOCLOSE
Route135_EventScript_WomanILoveMiltank_1:
# 210 "data/maps/Route135/scripts.pory"
	waitmessage
# 211 "data/maps/Route135/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 212 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 213 "data/maps/Route135/scripts.pory"
	release
	end

Route135_EventScript_WomanILoveMiltank_2:
# 203 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_3, MSGBOX_AUTOCLOSE
	goto Route135_EventScript_WomanILoveMiltank_1


Route135_EventScript_FirstMoo::
# 218 "data/maps/Route135/scripts.pory"
	lockall
# 219 "data/maps/Route135/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceDown
# 220 "data/maps/Route135/scripts.pory"
	waitmovement 26
# 221 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 222 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 223 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_0, MSGBOX_AUTOCLOSE
# 226 "data/maps/Route135/scripts.pory"
	waitmessage
# 227 "data/maps/Route135/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceLeft
# 228 "data/maps/Route135/scripts.pory"
	waitmovement 26
# 229 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 230 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 231 "data/maps/Route135/scripts.pory"
	fadeoutbgm 1
# 232 "data/maps/Route135/scripts.pory"
	delay 60
# 233 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MILTANK, CRY_MODE_NORMAL
# 234 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_1, MSGBOX_AUTOCLOSE
# 235 "data/maps/Route135/scripts.pory"
	waitmoncry
# 236 "data/maps/Route135/scripts.pory"
	waitmessage
# 237 "data/maps/Route135/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceDown
# 238 "data/maps/Route135/scripts.pory"
	waitmovement 26
# 239 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 240 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 241 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_2, MSGBOX_AUTOCLOSE
# 243 "data/maps/Route135/scripts.pory"
	waitmessage
# 244 "data/maps/Route135/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceLeft
# 245 "data/maps/Route135/scripts.pory"
	waitmovement 26
# 246 "data/maps/Route135/scripts.pory"
	setvar VAR_TEMP_7, 1
# 247 "data/maps/Route135/scripts.pory"
	fadeinbgm 1
# 248 "data/maps/Route135/scripts.pory"
	releaseall
	end


Route135_EventScript_Man4DidYouKnow::
# 253 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man4DidYouKnow_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Gentleman::
# 259 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Gentleman_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Lechonk::
# 266 "data/maps/Route135/scripts.pory"
	lock
# 267 "data/maps/Route135/scripts.pory"
	faceplayer
# 268 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_LECHONK, CRY_MODE_NORMAL
# 269 "data/maps/Route135/scripts.pory"
	waitmoncry
# 270 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Oinkologne::
# 275 "data/maps/Route135/scripts.pory"
	lock
# 276 "data/maps/Route135/scripts.pory"
	faceplayer
# 277 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_OINKOLOGNE, CRY_MODE_NORMAL
# 278 "data/maps/Route135/scripts.pory"
	waitmoncry
# 279 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Mudbray::
# 284 "data/maps/Route135/scripts.pory"
	lock
# 285 "data/maps/Route135/scripts.pory"
	faceplayer
# 286 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MUDBRAY, CRY_MODE_NORMAL
# 287 "data/maps/Route135/scripts.pory"
	waitmoncry
# 288 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Mudsdale::
# 293 "data/maps/Route135/scripts.pory"
	lock
# 294 "data/maps/Route135/scripts.pory"
	faceplayer
# 295 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MUDSDALE, CRY_MODE_NORMAL
# 296 "data/maps/Route135/scripts.pory"
	waitmoncry
# 297 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Tauros::
# 302 "data/maps/Route135/scripts.pory"
	lock
# 303 "data/maps/Route135/scripts.pory"
	faceplayer
# 304 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_TAUROS, CRY_MODE_NORMAL
# 305 "data/maps/Route135/scripts.pory"
	waitmoncry
# 306 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Miltank::
# 311 "data/maps/Route135/scripts.pory"
	lock
# 312 "data/maps/Route135/scripts.pory"
	faceplayer
# 313 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MILTANK, CRY_MODE_NORMAL
# 314 "data/maps/Route135/scripts.pory"
	waitmoncry
# 315 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Sign::
# 320 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Route135_EventScript_Danny_Text_0:
# 51 "data/maps/Route135/scripts.pory"
	.string "Hey!\nDoesn't this POKéMON sound weird?$"

Route135_EventScript_Danny_Text_1:
# 51 "data/maps/Route135/scripts.pory"
	.string "I've never heard a POKéMON like that!$"

Route135_EventScript_Danny_Text_2:
# 52 "data/maps/Route135/scripts.pory"
	.string "I've heard seen a POKéMON like that!$"

Route135_EventScript_Danuel_Text_0:
# 57 "data/maps/Route135/scripts.pory"
	.string "Hey!\nThis is my fishing spot!$"

Route135_EventScript_Danuel_Text_1:
# 57 "data/maps/Route135/scripts.pory"
	.string "I guess you can fish here too.$"

Route135_EventScript_Danuel_Text_2:
# 58 "data/maps/Route135/scripts.pory"
	.string "I've lived here all my life.\n Most of the residents here are vegan.$"

Route135_EventScript_Pibbles_Text_0:
# 64 "data/maps/Route135/scripts.pory"
	.string "I love nature!$"

Route135_EventScript_Pibbles_Text_1:
# 64 "data/maps/Route135/scripts.pory"
	.string "I don't love battling.$"

Route135_EventScript_Pibbles_Text_2:
# 65 "data/maps/Route135/scripts.pory"
	.string "I love how rural it is out here.\n Nature is so beautiful.$"

Route135_EventScript_Billiam_Text_0:
# 71 "data/maps/Route135/scripts.pory"
	.string "It's my job to train POKéMON out here!$"

Route135_EventScript_Billiam_Text_1:
# 71 "data/maps/Route135/scripts.pory"
	.string "Thanks for helping!$"

Route135_EventScript_Billiam_Text_2:
# 72 "data/maps/Route135/scripts.pory"
	.string "I was lucky enough to get a job\n at the ranch.\p Oh, sorry.\n Do you even know what a job is?$"

Route135_EventScript_Denjamin_Text_0:
# 80 "data/maps/Route135/scripts.pory"
	.string "I'm on break right now.\nLet's kill time with a battle!$"

Route135_EventScript_Denjamin_Text_1:
# 80 "data/maps/Route135/scripts.pory"
	.string "I don't want to get back to work.$"

Route135_EventScript_Denjamin_Text_2:
# 81 "data/maps/Route135/scripts.pory"
	.string "It's hard work out here, but the\n pay is surprisingly good.$"

Route135_EventScript_Whitney_Text_0:
# 89 "data/maps/Route135/scripts.pory"
	.string "I'm so bored!\p I want to go back to GOLDENROD\n CITY already!$"

Route135_EventScript_WhitneyBattle_Text_0:
# 97 "data/maps/Route135/scripts.pory"
	.string "Gosh, it's so boring out here!\n Why did we have to visit our family\l out in HOENN's countryside…$"

Route135_EventScript_WhitneyBattle_Text_1:
# 107 "data/maps/Route135/scripts.pory"
	.string "Huh? Who are you?\n A TRAINER?\p Perfect timing!\n Help me have some fun with a battle!$"

Route135_EventScript_WhitneyBattle_Text_2:
# 112 "data/maps/Route135/scripts.pory"
	.string "That was fun!$"

Route135_EventScript_GiveMiltankite_Text_0:
# 120 "data/maps/Route135/scripts.pory"
	.string "That was a lot of fun!\n Did my MILTANK surprise you? Hehe!\p Here. I have an extra stone you can\n have as thanks for entertaining me!$"

Route135_EventScript_GiveMiltankite_Text_1:
# 130 "data/maps/Route135/scripts.pory"
	.string "I hope I can go back to GOLDENROD\n CITY soon.\p I want to go shopping at the DEPT.\n STORE!$"

Route135_EventScript_MoomooMilkSalesman_Text_0:
# 142 "data/maps/Route135/scripts.pory"
	.string "Welcome, partner!\n Take a gander at my wares.$"

Route135_EventScript_MoomooMilkSalesman_Text_1:
# 146 "data/maps/Route135/scripts.pory"
	.string "Pleasure doin' business!$"

Route135_EventScript_FatMan_Text_0:
# 158 "data/maps/Route135/scripts.pory"
	.string "Oh man…\n Look at all that tasty cabbage…$"

Route135_EventScript_Man4_Text_0:
# 164 "data/maps/Route135/scripts.pory"
	.string "It ain't much, but it's honest work.$"

Route135_EventScript_Man1_Text_0:
# 171 "data/maps/Route135/scripts.pory"
	.string "I lost my gosh darn hat!$"

Route135_EventScript_WomanILoveLechonk_Text_0:
# 180 "data/maps/Route135/scripts.pory"
	.string "I just love LECHONK!$"

Route135_EventScript_WomanILoveLechonk_Text_1:
# 181 "data/maps/Route135/scripts.pory"
	.string "Me too!$"

Route135_EventScript_WomanILoveLechonk_Text_2:
# 181 "data/maps/Route135/scripts.pory"
	.string "Yup. They make good bacon.$"

Route135_EventScript_WomanILoveLechonk_Text_3:
# 183 "data/maps/Route135/scripts.pory"
	.string "Right?!\n They're stinky, but sooo cute!$"

Route135_EventScript_WomanILoveLechonk_Text_4:
# 187 "data/maps/Route135/scripts.pory"
	.string "What's WRONG with you?!\n I'm vegan, you PIG!$"

Route135_EventScript_WomanILoveMiltank_Text_0:
# 200 "data/maps/Route135/scripts.pory"
	.string "I just love MILTANK!$"

Route135_EventScript_WomanILoveMiltank_Text_1:
# 201 "data/maps/Route135/scripts.pory"
	.string "Yup. They make good burgers.$"

Route135_EventScript_WomanILoveMiltank_Text_2:
# 207 "data/maps/Route135/scripts.pory"
	.string "What's WRONG with you?!\n I'm vegan, you COW!$"

Route135_EventScript_FirstMoo_Text_0:
# 223 "data/maps/Route135/scripts.pory"
	.string "You're just in time!\n That MILTANK found it's moo!\p Listen!$"

Route135_EventScript_FirstMoo_Text_1:
# 234 "data/maps/Route135/scripts.pory"
	.string "MILTANK: Moooooo!$"

Route135_EventScript_FirstMoo_Text_2:
# 241 "data/maps/Route135/scripts.pory"
	.string "Isn't it beautiful?\n Gosh, I love nature.$"

Route135_EventScript_Man4DidYouKnow_Text_0:
# 253 "data/maps/Route135/scripts.pory"
	.string "Did you know?\n Some TAUROS have different types.$"

Route135_EventScript_Gentleman_Text_0:
# 259 "data/maps/Route135/scripts.pory"
	.string "That PROF. at the lab…\n He's researching some gotdang strange\l things, I'll tell you what.$"

Route135_EventScript_Sign_Text_0:
# 320 "data/maps/Route135/scripts.pory"
	.string "LUSH ACREAGE\p “The land of resplendent wonders!”$"
