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
	lock
# 87 "data/maps/Route135/scripts.pory"
	goto_if_not_defeated TRAINER_WHITNEY, Route135_EventScript_WhitneyBattle
# 88 "data/maps/Route135/scripts.pory"
	goto_if_unset FLAG_RECEIVED_MILTANKITE, Route135_EventScript_GiveMiltankite
# 89 "data/maps/Route135/scripts.pory"
	faceplayer
# 90 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Whitney_Text_0, MSGBOX_AUTOCLOSE
# 93 "data/maps/Route135/scripts.pory"
	waitmessage
# 94 "data/maps/Route135/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 95 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_WhitneyBattle::
# 101 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WhitneyBattle_Text_0, MSGBOX_AUTOCLOSE
# 104 "data/maps/Route135/scripts.pory"
	waitmessage
# 105 "data/maps/Route135/scripts.pory"
	playse SE_PIN
# 106 "data/maps/Route135/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 107 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 108 "data/maps/Route135/scripts.pory"
	waitse
# 109 "data/maps/Route135/scripts.pory"
	faceplayer
# 110 "data/maps/Route135/scripts.pory"
	playbgm MUS_ENCOUNTER_GIRL, FALSE
# 111 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WhitneyBattle_Text_1, MSGBOX_AUTOCLOSE
# 115 "data/maps/Route135/scripts.pory"
	waitmessage
# 116 "data/maps/Route135/scripts.pory"
	setflag FLAG_SYS_BOSS_BATTLE
# 117 "data/maps/Route135/scripts.pory"
	trainerbattle_no_intro TRAINER_WHITNEY, Route135_EventScript_WhitneyBattle_Text_2
# 118 "data/maps/Route135/scripts.pory"
	clearflag FLAG_SYS_BOSS_BATTLE
# 119 "data/maps/Route135/scripts.pory"
	goto Route135_EventScript_GiveMiltankite
	end


Route135_EventScript_GiveMiltankite::
# 124 "data/maps/Route135/scripts.pory"
	faceplayer
# 125 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_GiveMiltankite_Text_0, MSGBOX_DEFAULT
# 129 "data/maps/Route135/scripts.pory"
	waitmessage
# 130 "data/maps/Route135/scripts.pory"
	checkitemspace ITEM_MILTANKITE
# 131 "data/maps/Route135/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 132 "data/maps/Route135/scripts.pory"
	giveitem ITEM_MILTANKITE
# 133 "data/maps/Route135/scripts.pory"
	setflag FLAG_RECEIVED_MILTANKITE
# 134 "data/maps/Route135/scripts.pory"
	waitmessage
# 135 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_GiveMiltankite_Text_1, MSGBOX_AUTOCLOSE
# 139 "data/maps/Route135/scripts.pory"
	waitmessage
# 140 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_MoomooMilkSalesman::
# 145 "data/maps/Route135/scripts.pory"
	lock
# 146 "data/maps/Route135/scripts.pory"
	faceplayer
# 147 "data/maps/Route135/scripts.pory"
	message Route135_EventScript_MoomooMilkSalesman_Text_0
# 149 "data/maps/Route135/scripts.pory"
	waitmessage
# 150 "data/maps/Route135/scripts.pory"
	pokemart Route135_Pokemart
# 151 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_MoomooMilkSalesman_Text_1, MSGBOX_DEFAULT
# 152 "data/maps/Route135/scripts.pory"
	release
	end


	.align 2
# 156 "data/maps/Route135/scripts.pory"
Route135_Pokemart:
# 157 "data/maps/Route135/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 158 "data/maps/Route135/scripts.pory"
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

Route135_EventScript_FatMan::
# 163 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FatMan_Text_0, MSGBOX_SIGN
	end


Route135_EventScript_Man4::
# 169 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man4_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Man1::
# 174 "data/maps/Route135/scripts.pory"
	lock
# 175 "data/maps/Route135/scripts.pory"
	faceplayer
# 176 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man1_Text_0, MSGBOX_AUTOCLOSE
# 177 "data/maps/Route135/scripts.pory"
	waitmessage
# 178 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_WomanILoveLechonk::
# 183 "data/maps/Route135/scripts.pory"
	lock
# 184 "data/maps/Route135/scripts.pory"
	faceplayer
# 185 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_0, MSGBOX_DEFAULT
# 186 "data/maps/Route135/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route135_EventScript_WomanILoveLechonk_Text_1, Route135_EventScript_WomanILoveLechonk_Text_2
# 187 "data/maps/Route135/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route135_EventScript_WomanILoveLechonk_2
# 192 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_4, MSGBOX_AUTOCLOSE
Route135_EventScript_WomanILoveLechonk_1:
# 195 "data/maps/Route135/scripts.pory"
	waitmessage
# 196 "data/maps/Route135/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 197 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 198 "data/maps/Route135/scripts.pory"
	release
	end

Route135_EventScript_WomanILoveLechonk_2:
# 188 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_3, MSGBOX_AUTOCLOSE
	goto Route135_EventScript_WomanILoveLechonk_1


Route135_EventScript_WomanILoveMiltank::
# 203 "data/maps/Route135/scripts.pory"
	lock
# 204 "data/maps/Route135/scripts.pory"
	faceplayer
# 205 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveMiltank_Text_0, MSGBOX_DEFAULT
# 206 "data/maps/Route135/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route135_EventScript_WomanILoveLechonk_Text_1, Route135_EventScript_WomanILoveMiltank_Text_1
# 207 "data/maps/Route135/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route135_EventScript_WomanILoveMiltank_2
# 212 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveMiltank_Text_2, MSGBOX_AUTOCLOSE
Route135_EventScript_WomanILoveMiltank_1:
# 215 "data/maps/Route135/scripts.pory"
	waitmessage
# 216 "data/maps/Route135/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 217 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 218 "data/maps/Route135/scripts.pory"
	release
	end

Route135_EventScript_WomanILoveMiltank_2:
# 208 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_WomanILoveLechonk_Text_3, MSGBOX_AUTOCLOSE
	goto Route135_EventScript_WomanILoveMiltank_1


Route135_EventScript_FirstMoo::
# 223 "data/maps/Route135/scripts.pory"
	lockall
# 224 "data/maps/Route135/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceDown
# 225 "data/maps/Route135/scripts.pory"
	waitmovement 26
# 226 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 227 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 228 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_0, MSGBOX_AUTOCLOSE
# 231 "data/maps/Route135/scripts.pory"
	waitmessage
# 232 "data/maps/Route135/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceLeft
# 233 "data/maps/Route135/scripts.pory"
	waitmovement 26
# 234 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 235 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 236 "data/maps/Route135/scripts.pory"
	fadeoutbgm 1
# 237 "data/maps/Route135/scripts.pory"
	delay 60
# 238 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MILTANK, CRY_MODE_NORMAL
# 239 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_1, MSGBOX_DEFAULT
# 240 "data/maps/Route135/scripts.pory"
	waitmoncry
# 241 "data/maps/Route135/scripts.pory"
	closemessage
# 242 "data/maps/Route135/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceDown
# 243 "data/maps/Route135/scripts.pory"
	waitmovement 26
# 244 "data/maps/Route135/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 245 "data/maps/Route135/scripts.pory"
	waitmovement 0
# 246 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_FirstMoo_Text_2, MSGBOX_AUTOCLOSE
# 248 "data/maps/Route135/scripts.pory"
	waitmessage
# 249 "data/maps/Route135/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceLeft
# 250 "data/maps/Route135/scripts.pory"
	waitmovement 26
# 251 "data/maps/Route135/scripts.pory"
	setvar VAR_TEMP_7, 1
# 252 "data/maps/Route135/scripts.pory"
	fadeinbgm 1
# 253 "data/maps/Route135/scripts.pory"
	releaseall
	end


Route135_EventScript_Man4DidYouKnow::
# 258 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Man4DidYouKnow_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Gentleman::
# 264 "data/maps/Route135/scripts.pory"
	msgbox Route135_EventScript_Gentleman_Text_0, MSGBOX_NPC
	end


Route135_EventScript_Lechonk::
# 271 "data/maps/Route135/scripts.pory"
	lock
# 272 "data/maps/Route135/scripts.pory"
	faceplayer
# 273 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_LECHONK, CRY_MODE_NORMAL
# 274 "data/maps/Route135/scripts.pory"
	waitmoncry
# 275 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Oinkologne::
# 280 "data/maps/Route135/scripts.pory"
	lock
# 281 "data/maps/Route135/scripts.pory"
	faceplayer
# 282 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_OINKOLOGNE, CRY_MODE_NORMAL
# 283 "data/maps/Route135/scripts.pory"
	waitmoncry
# 284 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Mudbray::
# 289 "data/maps/Route135/scripts.pory"
	lock
# 290 "data/maps/Route135/scripts.pory"
	faceplayer
# 291 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MUDBRAY, CRY_MODE_NORMAL
# 292 "data/maps/Route135/scripts.pory"
	waitmoncry
# 293 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Mudsdale::
# 298 "data/maps/Route135/scripts.pory"
	lock
# 299 "data/maps/Route135/scripts.pory"
	faceplayer
# 300 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MUDSDALE, CRY_MODE_NORMAL
# 301 "data/maps/Route135/scripts.pory"
	waitmoncry
# 302 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Tauros::
# 307 "data/maps/Route135/scripts.pory"
	lock
# 308 "data/maps/Route135/scripts.pory"
	faceplayer
# 309 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_TAUROS, CRY_MODE_NORMAL
# 310 "data/maps/Route135/scripts.pory"
	waitmoncry
# 311 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Miltank::
# 316 "data/maps/Route135/scripts.pory"
	lock
# 317 "data/maps/Route135/scripts.pory"
	faceplayer
# 318 "data/maps/Route135/scripts.pory"
	playmoncry SPECIES_MILTANK, CRY_MODE_NORMAL
# 319 "data/maps/Route135/scripts.pory"
	waitmoncry
# 320 "data/maps/Route135/scripts.pory"
	release
	end


Route135_EventScript_Sign::
# 325 "data/maps/Route135/scripts.pory"
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
# 90 "data/maps/Route135/scripts.pory"
	.string "I'm so bored!\p I want to go back to GOLDENROD\n CITY already!$"

Route135_EventScript_WhitneyBattle_Text_0:
# 101 "data/maps/Route135/scripts.pory"
	.string "Gosh, it's so boring out here!\p Why did we have to visit our family\n out in HOENN's countryside…$"

Route135_EventScript_WhitneyBattle_Text_1:
# 111 "data/maps/Route135/scripts.pory"
	.string "Huh? Who are you?\n A TRAINER?\p Perfect timing!\n Let's have some fun with a battle!$"

Route135_EventScript_WhitneyBattle_Text_2:
# 117 "data/maps/Route135/scripts.pory"
	.string "That was fun!$"

Route135_EventScript_GiveMiltankite_Text_0:
# 125 "data/maps/Route135/scripts.pory"
	.string "That was a lot of fun!\n Did my MILTANK surprise you? Hehe!\p Here. I have an extra stone you can\n have as thanks for entertaining me!$"

Route135_EventScript_GiveMiltankite_Text_1:
# 135 "data/maps/Route135/scripts.pory"
	.string "I hope I can go back to GOLDENROD\n CITY soon.\p I want to go shopping at the DEPT.\n STORE!$"

Route135_EventScript_MoomooMilkSalesman_Text_0:
# 147 "data/maps/Route135/scripts.pory"
	.string "Welcome, partner!\n Take a gander at my wares.$"

Route135_EventScript_MoomooMilkSalesman_Text_1:
# 151 "data/maps/Route135/scripts.pory"
	.string "Pleasure doin' business!$"

Route135_EventScript_FatMan_Text_0:
# 163 "data/maps/Route135/scripts.pory"
	.string "Oh man…\n Look at all that tasty cabbage…$"

Route135_EventScript_Man4_Text_0:
# 169 "data/maps/Route135/scripts.pory"
	.string "It ain't much, but it's honest work.$"

Route135_EventScript_Man1_Text_0:
# 176 "data/maps/Route135/scripts.pory"
	.string "I lost my gosh darn hat!$"

Route135_EventScript_WomanILoveLechonk_Text_0:
# 185 "data/maps/Route135/scripts.pory"
	.string "I just love LECHONK!$"

Route135_EventScript_WomanILoveLechonk_Text_1:
# 186 "data/maps/Route135/scripts.pory"
	.string "Me too!$"

Route135_EventScript_WomanILoveLechonk_Text_2:
# 186 "data/maps/Route135/scripts.pory"
	.string "Yup. They make good bacon.$"

Route135_EventScript_WomanILoveLechonk_Text_3:
# 188 "data/maps/Route135/scripts.pory"
	.string "Right?!\n They're stinky, but sooo cute!$"

Route135_EventScript_WomanILoveLechonk_Text_4:
# 192 "data/maps/Route135/scripts.pory"
	.string "What's WRONG with you?!\n I'm vegan, you PIG!$"

Route135_EventScript_WomanILoveMiltank_Text_0:
# 205 "data/maps/Route135/scripts.pory"
	.string "I just love MILTANK!$"

Route135_EventScript_WomanILoveMiltank_Text_1:
# 206 "data/maps/Route135/scripts.pory"
	.string "Yup. They make good burgers.$"

Route135_EventScript_WomanILoveMiltank_Text_2:
# 212 "data/maps/Route135/scripts.pory"
	.string "What's WRONG with you?!\n I'm vegan, you COW!$"

Route135_EventScript_FirstMoo_Text_0:
# 228 "data/maps/Route135/scripts.pory"
	.string "You're just in time!\n That MILTANK found its moo!\p Listen!$"

Route135_EventScript_FirstMoo_Text_1:
# 239 "data/maps/Route135/scripts.pory"
	.string "MILTANK: Moooooo!$"

Route135_EventScript_FirstMoo_Text_2:
# 246 "data/maps/Route135/scripts.pory"
	.string "Isn't it beautiful?\n Gosh, I love nature.$"

Route135_EventScript_Man4DidYouKnow_Text_0:
# 258 "data/maps/Route135/scripts.pory"
	.string "Did you know?\n Some TAUROS are different types.$"

Route135_EventScript_Gentleman_Text_0:
# 264 "data/maps/Route135/scripts.pory"
	.string "That PROF. at the lab…\p He's researching some gotdang strange\n things, I'll tell you what.$"

Route135_EventScript_Sign_Text_0:
# 325 "data/maps/Route135/scripts.pory"
	.string "LUSH ACREAGE\p “The ranch of resplendent wonders!”$"
