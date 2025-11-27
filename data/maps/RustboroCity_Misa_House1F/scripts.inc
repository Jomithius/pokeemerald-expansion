RustboroCity_Misa_House1F_MapScripts::
	.byte 0


RustboroCity_Misa_House1F_EventScript_Misa::
# 4 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	lock
# 5 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	goto_if_unset FLAG_RUSTBORO_MISA_HOUSE_RARECANDY, RustboroCity_Misa_House1F_MisaGiveItem
# 6 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	goto Misa_House1F_EventScript_Text2
# 7 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	release
	end


RustboroCity_Misa_House1F_MisaGiveItem::
# 12 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	lock
# 13 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	faceplayer
# 14 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	msgbox MisaHouse1F_1, MSGBOX_DEFAULT
# 15 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmessage
# 16 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	giveitem ITEM_RARE_CANDY, 5
# 17 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 18 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	setflag FLAG_RUSTBORO_MISA_HOUSE_RARECANDY
# 19 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	msgbox RustboroCity_Misa_House1F_Text_ExplainCandies, MSGBOX_DEFAULT
# 20 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmessage
# 21 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	msgbox MisaHouse1F_2, MSGBOX_AUTOCLOSE
# 22 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmessage
# 23 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 24 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmovement 0
# 25 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	release
	end


Misa_House1F_EventScript_Text2::
# 30 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	lock
# 31 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	faceplayer
# 32 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	msgbox MisaHouse1F_3, MSGBOX_AUTOCLOSE
# 33 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmessage
# 34 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 35 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmovement 0
# 36 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	release
	end


Misa_House1f_EventScript_PostGameMisa::
# 41 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	lock
# 42 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	faceplayer
# 43 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	msgbox Misa_House1f_EventScript_PostGameMisa_Text_0, MSGBOX_AUTOCLOSE
# 54 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmessage
# 55 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 56 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmovement 0
# 57 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	release
	end


Misa_House1f_EventScript_PostGameMisa_Text_0:
# 43 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "Oh, {PLAYER}!\n Or should I say CHAMPION now?!\l Congratulations!\p I'm spending some time at home\n before heading out to visit\l JAMES at his new job.\l That reminds me!\p You're probably going to meet with\n JIMMY too, right?\p I'm sure you'll like the\n surprise he has for you!$"

MisaHouse1F_1::
# 62 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "{PLAYER}!\n I'm glad you stopped by.\p JAMES is upstairs in his room.\n Thanks again for becoming his friend.\p I hope you two can help each other\n out on your journey.\p Have you eaten yet? I already put away\n the leftovers, but I have some candy.$"

MisaHouse1F_2::
# 72 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "MISA: I'll be leaving soon too.\p I took time off because I was worried\n about JAMES, but now I'll be heading\l back to work in EVER GRANDE CITY.$"

MisaHouse1F_3::
# 77 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "Did you challenge the GYM yet?\p You're already a wonderful TRAINER, so\n you should be able to beat them.\p If you don't feel confident yet, you\n can study up at the TRAINER SCHOOL.\p Good luck!$"

MisaHouseCantCarryCandy::
# 84 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "Oh, it looks like you already have some.$"

RustboroCity_Misa_House1F_Text_ExplainCandies::
# 88 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "Don't eat them all at once!\p {COLOR BLUE}{SHADOW LIGHT_BLUE}Unlike EXP. CANDIES, RARE CANDIES can\n be used to go over the level cap but\l are extremely limited.\p It's recommended to only use them if\n needed.$"
