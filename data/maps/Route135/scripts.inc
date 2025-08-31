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
	goto_if_le VAR_TEMP_0, 8, Route135_EnteredFromLab
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


Route135_EnteredFromLab::
# 41 "data/maps/Route135/scripts.pory"
	savebgm MUS_ETERNA_CITY_NIGHT
	end


Route135_EventScript_Danny::
# 46 "data/maps/Route135/scripts.pory"
	trainerbattle_single TRAINER_DANNY, Route135_EventScript_Danny_Text_0, Route135_EventScript_Danny_Text_1
# 47 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Danny_Text_2, MSGBOX_NPC
	end


Route135_EventScript_Danuel::
# 52 "data/maps/Route135/scripts.pory"
	trainerbattle_single TRAINER_DANUEL, Route135_EventScript_Danuel_Text_0, Route135_EventScript_Danuel_Text_1
# 53 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Danuel_Text_2, MSGBOX_NPC
	end


Route135_EventScript_Pibbles::
# 59 "data/maps/Route135/scripts.pory"
	trainerbattle_single TRAINER_PIBBLES, Route135_EventScript_Pibbles_Text_0, Route135_EventScript_Pibbles_Text_1
# 60 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Pibbles_Text_2, MSGBOX_NPC
	end


Route135_EventScript_Billiam::
# 66 "data/maps/Route135/scripts.pory"
	trainerbattle_single TRAINER_BILLIAM, Route135_EventScript_Billiam_Text_0, Route135_EventScript_Billiam_Text_1
# 67 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Billiam_Text_2, MSGBOX_NPC
	end


Route135_EventScript_Denjamin::
# 75 "data/maps/Route135/scripts.pory"
	trainerbattle_single TRAINER_DENJAMIN, Route135_EventScript_Denjamin_Text_0, Route135_EventScript_Denjamin_Text_1
# 76 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Denjamin_Text_2, MSGBOX_NPC
	end


Route135_EventScript_Whitney::
# 82 "data/maps/Route135/scripts.pory"
	goto_if_not_defeated TRAINER_WHITNEY, Route135_EventScript_WhitneyBattle
# 83 "data/maps/Route135/scripts.pory"
	goto_if_unset FLAG_RECEIVED_MILTANKITE, Route135_EventScript_GiveMiltankite
# 84 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Whitney_Text_0, MSGBOX_NPC
	end


Route135_EventScript_WhitneyBattle::
# 91 "data/maps/Route135/scripts.pory"
	lock
# 92 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WhitneyBattle_Text_0, MSGBOX_AUTOCLOSE
# 95 "data/maps/Route135/scripts.pory"
	waitmessage
# 96 "data/maps/Route135/scripts.pory"
	playse SE_PIN
# 97 "data/maps/Route135/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 98 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 99 "data/maps/Route135/scripts.pory"
	waitse
# 100 "data/maps/Route135/scripts.pory"
	faceplayer
# 101 "data/maps/Route135/scripts.pory"
	playbgm MUS_ENCOUNTER_GIRL, FALSE
# 102 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WhitneyBattle_Text_1, MSGBOX_AUTOCLOSE
# 106 "data/maps/Route135/scripts.pory"
	waitmessage
# 107 "data/maps/Route135/scripts.pory"
	trainerbattle_no_intro TRAINER_WHITNEY, Route135_EventScript_WhitneyBattle_Text_2
# 108 "data/maps/Route135/scripts.pory"
	goto Route135_EventScript_GiveMiltankite
	end


Route135_EventScript_GiveMiltankite::
# 113 "data/maps/Route135/scripts.pory"
	lock
# 114 "data/maps/Route135/scripts.pory"
	faceplayer
# 115 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_GiveMiltankite_Text_0, MSGBOX_DEFAULT
# 119 "data/maps/Route135/scripts.pory"
	waitmessage
# 120 "data/maps/Route135/scripts.pory"
	checkitemspace ITEM_MILTANKITE
# 121 "data/maps/Route135/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 122 "data/maps/Route135/scripts.pory"
	giveitem ITEM_MILTANKITE
# 123 "data/maps/Route135/scripts.pory"
	setflag FLAG_RECEIVED_MILTANKITE
# 124 "data/maps/Route135/scripts.pory"
	waitmessage
# 125 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_GiveMiltankite_Text_1, MSGBOX_AUTOCLOSE
# 129 "data/maps/Route135/scripts.pory"
	waitmessage
# 130 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_MoomooMilkSalesman::
# 135 "data/maps/Route135/scripts.pory"
	lock
# 136 "data/maps/Route135/scripts.pory"
	faceplayer
# 137 "data/maps/Route135/scripts.pory"
	message Route135_EventScript_MoomooMilkSalesman_Text_0
# 139 "data/maps/Route135/scripts.pory"
	waitmessage
# 140 "data/maps/Route135/scripts.pory"
	pokemart Route135_Pokemart
# 141 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_MoomooMilkSalesman_Text_1, MSGBOX_DEFAULT
# 142 "data/maps/Route135/scripts.pory"
	release
	end


	.align 2
# 146 "data/maps/Route135/scripts.pory"
Route135_Pokemart:
# 147 "data/maps/Route135/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 148 "data/maps/Route135/scripts.pory"
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

Route135_EventScript_FatMan::
# 153 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FatMan_Text_0, MSGBOX_SIGN
	end


Route135_EventScript_Man4::
# 159 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man4_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Man1::
# 164 "data/maps/Route135/scripts.pory"
	lock
# 165 "data/maps/Route135/scripts.pory"
	faceplayer
# 166 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man1_Text_0, MSGBOX_AUTOCLOSE
# 167 "data/maps/Route135/scripts.pory"
	waitmessage
# 168 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_WomanILoveLechonk::
# 173 "data/maps/Route135/scripts.pory"
	lock
# 174 "data/maps/Route135/scripts.pory"
	faceplayer
# 175 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_0, MSGBOX_DEFAULT
# 176 "data/maps/Route135/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route135_EventScript_WomanILoveLechonk_Text_1, Route135_EventScript_WomanILoveLechonk_Text_2
# 177 "data/maps/Route135/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route135_EventScript_WomanILoveLechonk_2
# 182 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_4, MSGBOX_AUTOCLOSE
Route135_EventScript_WomanILoveLechonk_1:
# 185 "data/maps/Route135/scripts.pory"
	waitmessage
# 186 "data/maps/Route135/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 187 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 188 "data/maps/Route135/scripts.pory"
	release
	end

Route135_EventScript_WomanILoveLechonk_2:
# 178 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_3, MSGBOX_AUTOCLOSE
	goto Route135_EventScript_WomanILoveLechonk_1


Route135_EventScript_WomanILoveMiltank::
# 193 "data/maps/Route135/scripts.pory"
	lock
# 194 "data/maps/Route135/scripts.pory"
	faceplayer
# 195 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveMiltank_Text_0, MSGBOX_DEFAULT
# 196 "data/maps/Route135/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route135_EventScript_WomanILoveLechonk_Text_1, Route135_EventScript_WomanILoveMiltank_Text_1
# 197 "data/maps/Route135/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route135_EventScript_WomanILoveMiltank_2
# 202 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveMiltank_Text_2, MSGBOX_AUTOCLOSE
Route135_EventScript_WomanILoveMiltank_1:
# 205 "data/maps/Route135/scripts.pory"
	waitmessage
# 206 "data/maps/Route135/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 207 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 208 "data/maps/Route135/scripts.pory"
	release
	end

Route135_EventScript_WomanILoveMiltank_2:
# 198 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_3, MSGBOX_AUTOCLOSE
	goto Route135_EventScript_WomanILoveMiltank_1


Route135_EventScript_FirstMoo::
# 213 "data/maps/Route135/scripts.pory"
	lockall
# 214 "data/maps/Route135/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceDown
# 215 "data/maps/Route135/scripts.pory"
	waitmovement 26
# 216 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 217 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 218 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_0, MSGBOX_AUTOCLOSE
# 221 "data/maps/Route135/scripts.pory"
	waitmessage
# 222 "data/maps/Route135/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceLeft
# 223 "data/maps/Route135/scripts.pory"
	waitmovement 26
# 224 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 225 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 226 "data/maps/Route135/scripts.pory"
	fadeoutbgm 1
# 227 "data/maps/Route135/scripts.pory"
	delay 60
# 228 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MILTANK, CRY_MODE_NORMAL
# 229 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_1, MSGBOX_AUTOCLOSE
# 230 "data/maps/Route135/scripts.pory"
	waitmoncry
# 231 "data/maps/Route135/scripts.pory"
	waitmessage
# 232 "data/maps/Route135/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceDown
# 233 "data/maps/Route135/scripts.pory"
	waitmovement 26
# 234 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 235 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 236 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_2, MSGBOX_AUTOCLOSE
# 238 "data/maps/Route135/scripts.pory"
	waitmessage
# 239 "data/maps/Route135/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceLeft
# 240 "data/maps/Route135/scripts.pory"
	waitmovement 26
# 241 "data/maps/Route135/scripts.pory"
	setvar VAR_TEMP_7, 1
# 242 "data/maps/Route135/scripts.pory"
	fadeinbgm 1
# 243 "data/maps/Route135/scripts.pory"
	releaseall
	end


Route135_EventScript_Man4DidYouKnow::
# 248 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man4DidYouKnow_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Gentleman::
# 254 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Gentleman_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Lechonk::
# 261 "data/maps/Route135/scripts.pory"
	lock
# 262 "data/maps/Route135/scripts.pory"
	faceplayer
# 263 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_LECHONK, CRY_MODE_NORMAL
# 264 "data/maps/Route135/scripts.pory"
	waitmoncry
# 265 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Oinkologne::
# 270 "data/maps/Route135/scripts.pory"
	lock
# 271 "data/maps/Route135/scripts.pory"
	faceplayer
# 272 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_OINKOLOGNE, CRY_MODE_NORMAL
# 273 "data/maps/Route135/scripts.pory"
	waitmoncry
# 274 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Mudbray::
# 279 "data/maps/Route135/scripts.pory"
	lock
# 280 "data/maps/Route135/scripts.pory"
	faceplayer
# 281 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MUDBRAY, CRY_MODE_NORMAL
# 282 "data/maps/Route135/scripts.pory"
	waitmoncry
# 283 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Mudsdale::
# 288 "data/maps/Route135/scripts.pory"
	lock
# 289 "data/maps/Route135/scripts.pory"
	faceplayer
# 290 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MUDSDALE, CRY_MODE_NORMAL
# 291 "data/maps/Route135/scripts.pory"
	waitmoncry
# 292 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Tauros::
# 297 "data/maps/Route135/scripts.pory"
	lock
# 298 "data/maps/Route135/scripts.pory"
	faceplayer
# 299 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_TAUROS, CRY_MODE_NORMAL
# 300 "data/maps/Route135/scripts.pory"
	waitmoncry
# 301 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Miltank::
# 306 "data/maps/Route135/scripts.pory"
	lock
# 307 "data/maps/Route135/scripts.pory"
	faceplayer
# 308 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MILTANK, CRY_MODE_NORMAL
# 309 "data/maps/Route135/scripts.pory"
	waitmoncry
# 310 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Sign::
# 315 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Route135_EventScript_Danny_Text_0:
# 46 "data/maps/Route135/scripts.pory"
	.string "Hey!\nDoesn't this POKéMON sound weird?$"

Route135_EventScript_Danny_Text_1:
# 46 "data/maps/Route135/scripts.pory"
	.string "I've never heard a POKéMON like that!$"

Route135_EventScript_Danny_Text_2:
# 47 "data/maps/Route135/scripts.pory"
	.string "I've heard seen a POKéMON like that!$"

Route135_EventScript_Danuel_Text_0:
# 52 "data/maps/Route135/scripts.pory"
	.string "Hey!\nThis is my fishing spot!$"

Route135_EventScript_Danuel_Text_1:
# 52 "data/maps/Route135/scripts.pory"
	.string "I guess you can fish here too.$"

Route135_EventScript_Danuel_Text_2:
# 53 "data/maps/Route135/scripts.pory"
	.string "I've lived here all my life.\n Most of the residents here are vegan.$"

Route135_EventScript_Pibbles_Text_0:
# 59 "data/maps/Route135/scripts.pory"
	.string "I love nature!$"

Route135_EventScript_Pibbles_Text_1:
# 59 "data/maps/Route135/scripts.pory"
	.string "I don't love battling.$"

Route135_EventScript_Pibbles_Text_2:
# 60 "data/maps/Route135/scripts.pory"
	.string "I love how rural it is out here.\n Nature is so beautiful.$"

Route135_EventScript_Billiam_Text_0:
# 66 "data/maps/Route135/scripts.pory"
	.string "It's my job to train POKéMON out here!$"

Route135_EventScript_Billiam_Text_1:
# 66 "data/maps/Route135/scripts.pory"
	.string "Thanks for helping!$"

Route135_EventScript_Billiam_Text_2:
# 67 "data/maps/Route135/scripts.pory"
	.string "I was lucky enough to get a job\n at the ranch.\p Oh, sorry.\n Do you even know what a job is?$"

Route135_EventScript_Denjamin_Text_0:
# 75 "data/maps/Route135/scripts.pory"
	.string "I'm on break right now.\nLet's kill time with a battle!$"

Route135_EventScript_Denjamin_Text_1:
# 75 "data/maps/Route135/scripts.pory"
	.string "I don't want to get back to work.$"

Route135_EventScript_Denjamin_Text_2:
# 76 "data/maps/Route135/scripts.pory"
	.string "It's hard work out here, but the\n pay is surprisingly good.$"

Route135_EventScript_Whitney_Text_0:
# 84 "data/maps/Route135/scripts.pory"
	.string "I'm so bored!\p I want to go back to GOLDENROD\n CITY already!$"

Route135_EventScript_WhitneyBattle_Text_0:
# 92 "data/maps/Route135/scripts.pory"
	.string "Gosh, it's so boring out here!\n Why did we have to visit our family\l out in HOENN's countryside…$"

Route135_EventScript_WhitneyBattle_Text_1:
# 102 "data/maps/Route135/scripts.pory"
	.string "Huh? Who are you?\n A TRAINER?\p Perfect timing!\n Help me have some fun with a battle!$"

Route135_EventScript_WhitneyBattle_Text_2:
# 107 "data/maps/Route135/scripts.pory"
	.string "That was fun!$"

Route135_EventScript_GiveMiltankite_Text_0:
# 115 "data/maps/Route135/scripts.pory"
	.string "That was a lot of fun!\n Did my MILTANK surprise you? Hehe!\p Here. I have an extra stone you can\n have as thanks for entertaining me!$"

Route135_EventScript_GiveMiltankite_Text_1:
# 125 "data/maps/Route135/scripts.pory"
	.string "I hope I can go back to GOLDENROD\n CITY soon.\p I want to go shopping at the DEPT.\n STORE!$"

Route135_EventScript_MoomooMilkSalesman_Text_0:
# 137 "data/maps/Route135/scripts.pory"
	.string "Welcome, partner!\n Take a gander at my wares.$"

Route135_EventScript_MoomooMilkSalesman_Text_1:
# 141 "data/maps/Route135/scripts.pory"
	.string "Pleasure doin' business!$"

Route135_EventScript_FatMan_Text_0:
# 153 "data/maps/Route135/scripts.pory"
	.string "Oh man…\n Look at all that tasty cabbage…$"

Route135_EventScript_Man4_Text_0:
# 159 "data/maps/Route135/scripts.pory"
	.string "It ain't much, but it's honest work.$"

Route135_EventScript_Man1_Text_0:
# 166 "data/maps/Route135/scripts.pory"
	.string "I lost my gosh darn hat!$"

Route135_EventScript_WomanILoveLechonk_Text_0:
# 175 "data/maps/Route135/scripts.pory"
	.string "I just love LECHONK!$"

Route135_EventScript_WomanILoveLechonk_Text_1:
# 176 "data/maps/Route135/scripts.pory"
	.string "Me too!$"

Route135_EventScript_WomanILoveLechonk_Text_2:
# 176 "data/maps/Route135/scripts.pory"
	.string "Yup. They make good bacon.$"

Route135_EventScript_WomanILoveLechonk_Text_3:
# 178 "data/maps/Route135/scripts.pory"
	.string "Right?!\n They're stinky, but sooo cute!$"

Route135_EventScript_WomanILoveLechonk_Text_4:
# 182 "data/maps/Route135/scripts.pory"
	.string "What's WRONG with you?!\n I'm vegan, you PIG!$"

Route135_EventScript_WomanILoveMiltank_Text_0:
# 195 "data/maps/Route135/scripts.pory"
	.string "I just love MILTANK!$"

Route135_EventScript_WomanILoveMiltank_Text_1:
# 196 "data/maps/Route135/scripts.pory"
	.string "Yup. They make good burgers.$"

Route135_EventScript_WomanILoveMiltank_Text_2:
# 202 "data/maps/Route135/scripts.pory"
	.string "What's WRONG with you?!\n I'm vegan, you COW!$"

Route135_EventScript_FirstMoo_Text_0:
# 218 "data/maps/Route135/scripts.pory"
	.string "You're just in time!\n That MILTANK found it's moo!\p Listen!$"

Route135_EventScript_FirstMoo_Text_1:
# 229 "data/maps/Route135/scripts.pory"
	.string "MILTANK: Moooooo!$"

Route135_EventScript_FirstMoo_Text_2:
# 236 "data/maps/Route135/scripts.pory"
	.string "Isn't it beautiful?\n Gosh, I love nature.$"

Route135_EventScript_Man4DidYouKnow_Text_0:
# 248 "data/maps/Route135/scripts.pory"
	.string "Did you know?\n Some TAUROS have different types.$"

Route135_EventScript_Gentleman_Text_0:
# 254 "data/maps/Route135/scripts.pory"
	.string "That PROF. at the lab…\n He's researching some gotdang strange\l things, I'll tell you what.$"

Route135_EventScript_Sign_Text_0:
# 315 "data/maps/Route135/scripts.pory"
	.string "LUSH ACREAGE\p “The land of resplendent wonders!”$"
