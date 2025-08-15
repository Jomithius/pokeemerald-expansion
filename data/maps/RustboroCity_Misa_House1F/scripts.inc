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
	applymovement 1, MisaHouse1F_FacePlayer
# 13 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmovement 0
# 14 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	msgbox MisaHouse1F_1, MSGBOX_DEFAULT
# 15 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmessage
# 16 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	giveitem ITEM_RARE_CANDY, 10
# 17 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 18 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	setflag FLAG_RUSTBORO_MISA_HOUSE_RARECANDY
# 19 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	msgbox MisaHouse1F_2, MSGBOX_AUTOCLOSE
# 20 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmessage
# 21 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	release
	end


Misa_House1F_EventScript_Text2::
# 26 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	lock
# 27 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	applymovement 1, MisaHouse1F_FacePlayer
# 28 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmovement 0
# 29 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	msgbox MisaHouse1F_3
# 30 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmessage
# 31 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	release
	end


# 58 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
MisaHouse1F_FacePlayer:
# 59 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	face_player
	step_end

MisaHouse1F_1::
# 35 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "{PLAYER}! I'm glad you stopped by.\n JAMES is upstairs in his room.\l Thanks again for becoming his friend.\l I hope you two can help each other\l out on your journey.\p Have you eaten yet? We already put away\n the leftovers, but I have some candy.$"

MisaHouse1F_2::
# 44 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "I'll be leaving soon too.\n I took time off because I was worried\l about JAMES, but now I'll be heading\l back to work in EVER GRANDE CITY.$"

MisaHouse1F_3::
# 49 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "Did you challenge the GYM yet?\n You're already a wonderful trainer, so\l you should be able to beat them.\l Good luck!$"

MisaHouseCantCarryCandy::
# 54 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "Oh, it looks like you already have some.$"
