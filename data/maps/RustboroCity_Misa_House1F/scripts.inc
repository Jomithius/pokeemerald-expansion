RustboroCity_Misa_House1F_MapScripts::
	.byte 0


RustboroCity_Misa_House1F_EventScript_Misa::
# 4 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	lock
# 5 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	goto_if_unset FLAG_RUSTBORO_MISA_HOUSE_RARECANDY, RustboroCity_Misa_House1F_MisaGiveItem
# 6 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	goto Misa_House1F_EventScript_Text2
	end


RustboroCity_Misa_House1F_MisaGiveItem::
# 11 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	lock
# 12 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	faceplayer
# 13 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	msgbox MisaHouse1F_1, MSGBOX_DEFAULT
# 14 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmessage
# 15 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	giveitem ITEM_RARE_CANDY, 5
# 16 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 17 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	setflag FLAG_RUSTBORO_MISA_HOUSE_RARECANDY
# 18 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	msgbox RustboroCity_Misa_House1F_Text_ExplainCandies, MSGBOX_DEFAULT
# 19 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmessage
# 20 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	msgbox MisaHouse1F_2, MSGBOX_AUTOCLOSE
# 21 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmessage
# 22 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	release
	end


Misa_House1F_EventScript_Text2::
# 27 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	lock
# 28 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	faceplayer
# 29 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	msgbox MisaHouse1F_3, MSGBOX_AUTOCLOSE
# 30 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmessage
# 31 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	release
	end


MisaHouse1F_1::
# 35 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "{PLAYER}!\n I'm glad you stopped by.\p JAMES is upstairs in his room.\n Thanks again for becoming his friend.\p I hope you two can help each other\n out on your journey.\p Have you eaten yet? I already put away\n the leftovers, but I have some candy.$"

MisaHouse1F_2::
# 45 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "I'll be leaving soon too.\p I took time off because I was worried\n about JAMES, but now I'll be heading\l back to work in EVER GRANDE CITY.$"

MisaHouse1F_3::
# 50 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "Did you challenge the GYM yet?\p You're already a wonderful TRAINER, so\n you should be able to beat them.\p Good luck!$"

MisaHouseCantCarryCandy::
# 55 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "Oh, it looks like you already have some.$"

RustboroCity_Misa_House1F_Text_ExplainCandies::
# 59 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "Don't eat them all at once!\p {COLOR BLUE}{SHADOW LIGHT_BLUE} Unlike EXP. CANDIES, RARE CANDIES can\n be used to go over the level cap but\l are extremely limited.\p It's recommended to only use them if\n needed.$"
