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


Route135_CheckEnterFromLab::
# 15 "data/maps/Route135/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 16 "data/maps/Route135/scripts.pory"
	call_if_le VAR_TEMP_0, 8, Route135_EnteredFromLab
	return


Route135_EnteredFromLab::
# 22 "data/maps/Route135/scripts.pory"
	savebgm MUS_ETERNA_CITY_NIGHT
	return


Route135_TryUpdateMusic::
# 28 "data/maps/Route135/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 29 "data/maps/Route135/scripts.pory"
	goto_if_eq VAR_RESULT, DIR_EAST, Route135_UpdateMusicLushAcreage
# 30 "data/maps/Route135/scripts.pory"
	goto_if_eq VAR_RESULT, DIR_NORTH, Route135_UpdateMusicLushAcreage
# 31 "data/maps/Route135/scripts.pory"
	goto_if_eq VAR_RESULT, DIR_WEST, Route135_UpdateDefaultMusic
# 32 "data/maps/Route135/scripts.pory"
	goto_if_eq VAR_RESULT, DIR_SOUTH, Route135_UpdateDefaultMusic
	end


Route135_UpdateMusicLushAcreage::
# 37 "data/maps/Route135/scripts.pory"
	fadenewbgm MUS_ETERNA_CITY_NIGHT
# 38 "data/maps/Route135/scripts.pory"
	savebgm MUS_ETERNA_CITY_NIGHT
	end


Route135_UpdateDefaultMusic::
# 43 "data/maps/Route135/scripts.pory"
	fadedefaultbgm
# 44 "data/maps/Route135/scripts.pory"
	savebgm MUS_ROWANS_LAB
	end


Route135_EventScript_Danny::
# 49 "data/maps/Route135/scripts.pory"
	trainerbattle_single TRAINER_DANNY, Route135_EventScript_Danny_Text_0, Route135_EventScript_Danny_Text_1
# 50 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Danny_Text_1, MSGBOX_NPC
	end


Route135_EventScript_Danuel::
# 55 "data/maps/Route135/scripts.pory"
	trainerbattle_single TRAINER_DANUEL, Route135_EventScript_Danuel_Text_0, Route135_EventScript_Danuel_Text_1
# 56 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Danuel_Text_2, MSGBOX_NPC
	end


Route135_EventScript_Pibbles::
# 63 "data/maps/Route135/scripts.pory"
	trainerbattle_single TRAINER_PIBBLES, Route135_EventScript_Pibbles_Text_0, Route135_EventScript_Pibbles_Text_1
# 64 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Pibbles_Text_2, MSGBOX_NPC
	end


Route135_EventScript_Billiam::
# 70 "data/maps/Route135/scripts.pory"
	trainerbattle_single TRAINER_BILLIAM, Route135_EventScript_Billiam_Text_0, Route135_EventScript_Billiam_Text_1
# 71 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Billiam_Text_2, MSGBOX_NPC
	end


Route135_EventScript_Denjamin::
# 79 "data/maps/Route135/scripts.pory"
	trainerbattle_single TRAINER_DENJAMIN, Route135_EventScript_Denjamin_Text_0, Route135_EventScript_Denjamin_Text_1
# 80 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Denjamin_Text_2, MSGBOX_NPC
	end


Route135_EventScript_Whitney::
# 86 "data/maps/Route135/scripts.pory"
	goto_if_not_defeated TRAINER_WHITNEY, Route135_EventScript_WhitneyBattle
# 87 "data/maps/Route135/scripts.pory"
	goto_if_unset FLAG_RECEIVED_MILTANKITE, Route135_EventScript_GiveMiltankite
# 88 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Whitney_Text_0, MSGBOX_NPC
	end


Route135_EventScript_WhitneyBattle::
# 95 "data/maps/Route135/scripts.pory"
	lock
# 96 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WhitneyBattle_Text_0, MSGBOX_AUTOCLOSE
# 99 "data/maps/Route135/scripts.pory"
	waitmessage
# 100 "data/maps/Route135/scripts.pory"
	playse SE_PIN
# 101 "data/maps/Route135/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 102 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 103 "data/maps/Route135/scripts.pory"
	waitse
# 104 "data/maps/Route135/scripts.pory"
	faceplayer
# 105 "data/maps/Route135/scripts.pory"
	playbgm MUS_ENCOUNTER_GIRL, FALSE
# 106 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WhitneyBattle_Text_1, MSGBOX_AUTOCLOSE
# 110 "data/maps/Route135/scripts.pory"
	waitmessage
# 111 "data/maps/Route135/scripts.pory"
	setflag FLAG_SYS_BOSS_BATTLE
# 112 "data/maps/Route135/scripts.pory"
	trainerbattle_no_intro TRAINER_WHITNEY, Route135_EventScript_WhitneyBattle_Text_2
# 113 "data/maps/Route135/scripts.pory"
	clearflag FLAG_SYS_BOSS_BATTLE
# 114 "data/maps/Route135/scripts.pory"
	goto Route135_EventScript_GiveMiltankite
	end


Route135_EventScript_GiveMiltankite::
# 119 "data/maps/Route135/scripts.pory"
	lock
# 120 "data/maps/Route135/scripts.pory"
	faceplayer
# 121 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_GiveMiltankite_Text_0, MSGBOX_DEFAULT
# 125 "data/maps/Route135/scripts.pory"
	waitmessage
# 126 "data/maps/Route135/scripts.pory"
	checkitemspace ITEM_MILTANKITE
# 127 "data/maps/Route135/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 128 "data/maps/Route135/scripts.pory"
	giveitem ITEM_MILTANKITE
# 129 "data/maps/Route135/scripts.pory"
	setflag FLAG_RECEIVED_MILTANKITE
# 130 "data/maps/Route135/scripts.pory"
	waitmessage
# 131 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_GiveMiltankite_Text_1, MSGBOX_AUTOCLOSE
# 135 "data/maps/Route135/scripts.pory"
	waitmessage
# 136 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_MoomooMilkSalesman::
# 141 "data/maps/Route135/scripts.pory"
	lock
# 142 "data/maps/Route135/scripts.pory"
	faceplayer
# 143 "data/maps/Route135/scripts.pory"
	message Route135_EventScript_MoomooMilkSalesman_Text_0
# 145 "data/maps/Route135/scripts.pory"
	waitmessage
# 146 "data/maps/Route135/scripts.pory"
	pokemart Route135_Pokemart
# 147 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_MoomooMilkSalesman_Text_1, MSGBOX_DEFAULT
# 148 "data/maps/Route135/scripts.pory"
	release
	end


	.align 2
# 152 "data/maps/Route135/scripts.pory"
Route135_Pokemart:
# 153 "data/maps/Route135/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 154 "data/maps/Route135/scripts.pory"
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

Route135_EventScript_FatMan::
# 159 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FatMan_Text_0, MSGBOX_SIGN
	end


Route135_EventScript_Man4::
# 165 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man4_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Man1::
# 170 "data/maps/Route135/scripts.pory"
	lock
# 171 "data/maps/Route135/scripts.pory"
	faceplayer
# 172 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man1_Text_0, MSGBOX_AUTOCLOSE
# 173 "data/maps/Route135/scripts.pory"
	waitmessage
# 174 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_WomanILoveLechonk::
# 179 "data/maps/Route135/scripts.pory"
	lock
# 180 "data/maps/Route135/scripts.pory"
	faceplayer
# 181 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_0, MSGBOX_DEFAULT
# 182 "data/maps/Route135/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route135_EventScript_WomanILoveLechonk_Text_1, Route135_EventScript_WomanILoveLechonk_Text_2
# 183 "data/maps/Route135/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route135_EventScript_WomanILoveLechonk_2
# 188 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_4, MSGBOX_AUTOCLOSE
Route135_EventScript_WomanILoveLechonk_1:
# 191 "data/maps/Route135/scripts.pory"
	waitmessage
# 192 "data/maps/Route135/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 193 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 194 "data/maps/Route135/scripts.pory"
	release
	end

Route135_EventScript_WomanILoveLechonk_2:
# 184 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_3, MSGBOX_AUTOCLOSE
	goto Route135_EventScript_WomanILoveLechonk_1


Route135_EventScript_WomanILoveMiltank::
# 199 "data/maps/Route135/scripts.pory"
	lock
# 200 "data/maps/Route135/scripts.pory"
	faceplayer
# 201 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveMiltank_Text_0, MSGBOX_DEFAULT
# 202 "data/maps/Route135/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route135_EventScript_WomanILoveLechonk_Text_1, Route135_EventScript_WomanILoveMiltank_Text_1
# 203 "data/maps/Route135/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route135_EventScript_WomanILoveMiltank_2
# 208 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveMiltank_Text_2, MSGBOX_AUTOCLOSE
Route135_EventScript_WomanILoveMiltank_1:
# 211 "data/maps/Route135/scripts.pory"
	waitmessage
# 212 "data/maps/Route135/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 213 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 214 "data/maps/Route135/scripts.pory"
	release
	end

Route135_EventScript_WomanILoveMiltank_2:
# 204 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_3, MSGBOX_AUTOCLOSE
	goto Route135_EventScript_WomanILoveMiltank_1


Route135_EventScript_FirstMoo::
# 219 "data/maps/Route135/scripts.pory"
	lockall
# 220 "data/maps/Route135/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceDown
# 221 "data/maps/Route135/scripts.pory"
	waitmovement 26
# 222 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 223 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 224 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_0, MSGBOX_AUTOCLOSE
# 227 "data/maps/Route135/scripts.pory"
	waitmessage
# 228 "data/maps/Route135/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceLeft
# 229 "data/maps/Route135/scripts.pory"
	waitmovement 26
# 230 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 231 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 232 "data/maps/Route135/scripts.pory"
	fadeoutbgm 1
# 233 "data/maps/Route135/scripts.pory"
	delay 60
# 234 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MILTANK, CRY_MODE_NORMAL
# 235 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_1, MSGBOX_AUTOCLOSE
# 236 "data/maps/Route135/scripts.pory"
	waitmoncry
# 237 "data/maps/Route135/scripts.pory"
	waitmessage
# 238 "data/maps/Route135/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceDown
# 239 "data/maps/Route135/scripts.pory"
	waitmovement 26
# 240 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 241 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 242 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_2, MSGBOX_AUTOCLOSE
# 244 "data/maps/Route135/scripts.pory"
	waitmessage
# 245 "data/maps/Route135/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceLeft
# 246 "data/maps/Route135/scripts.pory"
	waitmovement 26
# 247 "data/maps/Route135/scripts.pory"
	setvar VAR_TEMP_7, 1
# 248 "data/maps/Route135/scripts.pory"
	fadeinbgm 1
# 249 "data/maps/Route135/scripts.pory"
	releaseall
	end


Route135_EventScript_Man4DidYouKnow::
# 254 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man4DidYouKnow_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Gentleman::
# 260 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Gentleman_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Lechonk::
# 267 "data/maps/Route135/scripts.pory"
	lock
# 268 "data/maps/Route135/scripts.pory"
	faceplayer
# 269 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_LECHONK, CRY_MODE_NORMAL
# 270 "data/maps/Route135/scripts.pory"
	waitmoncry
# 271 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Oinkologne::
# 276 "data/maps/Route135/scripts.pory"
	lock
# 277 "data/maps/Route135/scripts.pory"
	faceplayer
# 278 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_OINKOLOGNE, CRY_MODE_NORMAL
# 279 "data/maps/Route135/scripts.pory"
	waitmoncry
# 280 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Mudbray::
# 285 "data/maps/Route135/scripts.pory"
	lock
# 286 "data/maps/Route135/scripts.pory"
	faceplayer
# 287 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MUDBRAY, CRY_MODE_NORMAL
# 288 "data/maps/Route135/scripts.pory"
	waitmoncry
# 289 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Mudsdale::
# 294 "data/maps/Route135/scripts.pory"
	lock
# 295 "data/maps/Route135/scripts.pory"
	faceplayer
# 296 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MUDSDALE, CRY_MODE_NORMAL
# 297 "data/maps/Route135/scripts.pory"
	waitmoncry
# 298 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Tauros::
# 303 "data/maps/Route135/scripts.pory"
	lock
# 304 "data/maps/Route135/scripts.pory"
	faceplayer
# 305 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_TAUROS, CRY_MODE_NORMAL
# 306 "data/maps/Route135/scripts.pory"
	waitmoncry
# 307 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Miltank::
# 312 "data/maps/Route135/scripts.pory"
	lock
# 313 "data/maps/Route135/scripts.pory"
	faceplayer
# 314 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MILTANK, CRY_MODE_NORMAL
# 315 "data/maps/Route135/scripts.pory"
	waitmoncry
# 316 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Sign::
# 321 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Route135_EventScript_Danny_Text_0:
# 49 "data/maps/Route135/scripts.pory"
	.string "Hey!\nDoesn't this POKéMON sound weird?$"

Route135_EventScript_Danny_Text_1:
# 49 "data/maps/Route135/scripts.pory"
	.string "I've never heard a POKéMON make\na sound like that!$"

Route135_EventScript_Danuel_Text_0:
# 55 "data/maps/Route135/scripts.pory"
	.string "Hey!\nThis is my fishing spot!$"

Route135_EventScript_Danuel_Text_1:
# 55 "data/maps/Route135/scripts.pory"
	.string "I guess you can fish here too.$"

Route135_EventScript_Danuel_Text_2:
# 56 "data/maps/Route135/scripts.pory"
	.string "This spot is great!\p It feels like there's rarer POKéMON\n right here!$"

Route135_EventScript_Pibbles_Text_0:
# 63 "data/maps/Route135/scripts.pory"
	.string "I love nature!$"

Route135_EventScript_Pibbles_Text_1:
# 63 "data/maps/Route135/scripts.pory"
	.string "I don't love battling.$"

Route135_EventScript_Pibbles_Text_2:
# 64 "data/maps/Route135/scripts.pory"
	.string "I love how rural it is out here.\n Nature is so beautiful.$"

Route135_EventScript_Billiam_Text_0:
# 70 "data/maps/Route135/scripts.pory"
	.string "It's my job to train POKéMON out here!$"

Route135_EventScript_Billiam_Text_1:
# 70 "data/maps/Route135/scripts.pory"
	.string "Thanks for helping!$"

Route135_EventScript_Billiam_Text_2:
# 71 "data/maps/Route135/scripts.pory"
	.string "I was lucky enough to get a job\n at the ranch.\p Oh, sorry.\n Do you even know what a job is?$"

Route135_EventScript_Denjamin_Text_0:
# 79 "data/maps/Route135/scripts.pory"
	.string "I'm on break right now.\nLet's kill time with a battle!$"

Route135_EventScript_Denjamin_Text_1:
# 79 "data/maps/Route135/scripts.pory"
	.string "I don't want to get back to work.$"

Route135_EventScript_Denjamin_Text_2:
# 80 "data/maps/Route135/scripts.pory"
	.string "It's hard work out here, but the\n pay is surprisingly good.$"

Route135_EventScript_Whitney_Text_0:
# 88 "data/maps/Route135/scripts.pory"
	.string "I'm so bored!\p I want to go back to GOLDENROD\n CITY already!$"

Route135_EventScript_WhitneyBattle_Text_0:
# 96 "data/maps/Route135/scripts.pory"
	.string "Gosh, it's so boring out here!\n Why did we have to visit our family\l out in HOENN's countryside…$"

Route135_EventScript_WhitneyBattle_Text_1:
# 106 "data/maps/Route135/scripts.pory"
	.string "Huh? Who are you?\n A TRAINER?\p Perfect timing!\n Help me have some fun with a battle!$"

Route135_EventScript_WhitneyBattle_Text_2:
# 112 "data/maps/Route135/scripts.pory"
	.string "That was fun!$"

Route135_EventScript_GiveMiltankite_Text_0:
# 121 "data/maps/Route135/scripts.pory"
	.string "That was a lot of fun!\n Did my MILTANK surprise you? Hehe!\p Here. I have an extra stone you can\n have as thanks for entertaining me!$"

Route135_EventScript_GiveMiltankite_Text_1:
# 131 "data/maps/Route135/scripts.pory"
	.string "I hope I can go back to GOLDENROD\n CITY soon.\p I want to go shopping at the DEPT.\n STORE!$"

Route135_EventScript_MoomooMilkSalesman_Text_0:
# 143 "data/maps/Route135/scripts.pory"
	.string "Welcome, partner!\n Take a gander at my wares.$"

Route135_EventScript_MoomooMilkSalesman_Text_1:
# 147 "data/maps/Route135/scripts.pory"
	.string "Pleasure doin' business!$"

Route135_EventScript_FatMan_Text_0:
# 159 "data/maps/Route135/scripts.pory"
	.string "Oh man…\n Look at all that tasty cabbage…$"

Route135_EventScript_Man4_Text_0:
# 165 "data/maps/Route135/scripts.pory"
	.string "It ain't much, but it's honest work.$"

Route135_EventScript_Man1_Text_0:
# 172 "data/maps/Route135/scripts.pory"
	.string "I lost my gosh darn hat!$"

Route135_EventScript_WomanILoveLechonk_Text_0:
# 181 "data/maps/Route135/scripts.pory"
	.string "I just love LECHONK!$"

Route135_EventScript_WomanILoveLechonk_Text_1:
# 182 "data/maps/Route135/scripts.pory"
	.string "Me too!$"

Route135_EventScript_WomanILoveLechonk_Text_2:
# 182 "data/maps/Route135/scripts.pory"
	.string "Yup. They make good bacon.$"

Route135_EventScript_WomanILoveLechonk_Text_3:
# 184 "data/maps/Route135/scripts.pory"
	.string "Right?!\n They're stinky, but sooo cute!$"

Route135_EventScript_WomanILoveLechonk_Text_4:
# 188 "data/maps/Route135/scripts.pory"
	.string "What's WRONG with you?!\n I'm vegan, you PIG!$"

Route135_EventScript_WomanILoveMiltank_Text_0:
# 201 "data/maps/Route135/scripts.pory"
	.string "I just love MILTANK!$"

Route135_EventScript_WomanILoveMiltank_Text_1:
# 202 "data/maps/Route135/scripts.pory"
	.string "Yup. They make good burgers.$"

Route135_EventScript_WomanILoveMiltank_Text_2:
# 208 "data/maps/Route135/scripts.pory"
	.string "What's WRONG with you?!\n I'm vegan, you COW!$"

Route135_EventScript_FirstMoo_Text_0:
# 224 "data/maps/Route135/scripts.pory"
	.string "You're just in time!\n That MILTANK found it's moo!\p Listen!$"

Route135_EventScript_FirstMoo_Text_1:
# 235 "data/maps/Route135/scripts.pory"
	.string "MILTANK: Moooooo!$"

Route135_EventScript_FirstMoo_Text_2:
# 242 "data/maps/Route135/scripts.pory"
	.string "Isn't it beautiful?\n Gosh, I love nature.$"

Route135_EventScript_Man4DidYouKnow_Text_0:
# 254 "data/maps/Route135/scripts.pory"
	.string "Did you know?\n Some TAUROS have different types.$"

Route135_EventScript_Gentleman_Text_0:
# 260 "data/maps/Route135/scripts.pory"
	.string "That PROF. at the lab…\n He's researching some gotdang strange\l things, I'll tell you what.$"

Route135_EventScript_Sign_Text_0:
# 321 "data/maps/Route135/scripts.pory"
	.string "LUSH ACREAGE\p “The land of resplendent wonders!”$"
