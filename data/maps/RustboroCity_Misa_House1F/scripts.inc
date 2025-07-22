RustboroCity_Misa_House1F_MapScripts::
	.byte 0


Rustboro_Misa_Text_EventScript::
# 4 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	lock
# 5 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	goto_if_set FLAG_RUSTBORO_MISA_HOUSE_RARECANDY, Rustboro_Misa_Text_EventScript_1
# 9 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	goto RustboroCity_Misa_House1F_MisaGiveItem
	return

Rustboro_Misa_Text_EventScript_1:
# 6 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	goto Misa_House1F_EventScript_Text2
	return


RustboroCity_Misa_House1F_MisaGiveItem::
# 14 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	lock
# 15 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	applymovement 1, MisaHouse1F_FacePlayer
# 16 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmovement 0
# 17 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	msgbox MisaHouse1F_1, MSGBOX_AUTOCLOSE
# 18 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	call RustboroCity_Misa_House1F_GiveRareCandy
# 19 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmessage
# 20 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	msgbox MisaHouse1F_2, MSGBOX_NPC
# 21 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmessage
# 22 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	release
	end


RustboroCity_Misa_House1F_GiveRareCandy::
	checkitemspace ITEM_RARE_CANDY
# 0 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	compare VAR_RESULT, 99
	goto_if_ge RustboroCity_Misa_House1F_GiveRareCandy_2
# 33 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	giveitem ITEM_RARE_CANDY, 10
# 34 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	setflag FLAG_RUSTBORO_MISA_HOUSE_RARECANDY
	return

RustboroCity_Misa_House1F_GiveRareCandy_2:
# 28 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	msgbox MisaHouseCantCarryCandy, MSGBOX_AUTOCLOSE
# 29 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmessage
	end


Misa_House1F_EventScript_Text2::
# 40 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	lock
# 41 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	applymovement 1, MisaHouse1F_FacePlayer
# 42 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmovement 0
# 43 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	msgbox MisaHouse1F_3
# 44 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmessage
# 45 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	release
	end


# 72 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
MisaHouse1F_FacePlayer:
# 73 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	face_player
	step_end

MisaHouse1F_1::
# 49 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "{PLAYER}! I'm glad you stopped by.\n JAMES is upstairs in his room.\l Thanks again for becoming his friend.\l I hope you two can help each other\l out on your journey.\p Have you eaten yet? We already put away\n the leftovers, but I have some candy.$"

MisaHouse1F_2::
# 58 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "I'll be leaving soon too.\n I took time off because I was worried\l about JAMES, but now I'll be heading\l back to work in EVER GRANDE CITY.$"

MisaHouse1F_3::
# 63 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "Did you challenge the GYM yet?\n You're already a wonderful trainer, so\l you should be able to beat them.\l Good luck!$"

MisaHouseCantCarryCandy::
# 68 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "Oh, it looks like you already have some.$"
