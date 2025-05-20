RustboroCity_Misa_House1F_MapScripts::
# 2 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RustboroCity_Misa_House1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

RustboroCity_Misa_House1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 2 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	compare VAR_MISA_STATE, 2
	goto_if_eq RustboroCity_Misa_House1F_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 6 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	setflag FLAG_HIDE_MISA_EMO_RUSTBORO_HOUSE
	return

RustboroCity_Misa_House1F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 3 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	clearflag FLAG_HIDE_MISA_EMO_RUSTBORO_HOUSE
	return


Rustboro_Misa_Text_EventScript::
# 11 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	lock
# 12 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	goto_if_set FLAG_RUSTBORO_MISA_HOUSE_RARECANDY, Rustboro_Misa_Text_EventScript_1
# 16 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	call RustboroCity_Misa_House1F_MisaGiveItem
	return

Rustboro_Misa_Text_EventScript_1:
# 13 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	call Misa_House1F_EventScript_Text2
	return


RustboroCity_Misa_House1F_MisaGiveItem::
# 21 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	lock
# 22 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	applymovement 1, MisaHouse1F_FacePlayer
# 23 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmovement 0
# 24 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	msgbox MisaHouse1F_1, MSGBOX_AUTOCLOSE
# 25 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	call RustboroCity_Misa_House1F_GiveRareCandy
# 26 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmessage
# 27 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	setflag FLAG_RUSTBORO_MISA_HOUSE_RARECANDY
# 28 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	msgbox MisaHouse1F_2, MSGBOX_NPC
# 29 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmessage
# 30 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	release
	return


RustboroCity_Misa_House1F_GiveRareCandy::
	checkitemspace ITEM_RARE_CANDY
# 0 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	compare VAR_RESULT, 99
	goto_if_ge RustboroCity_Misa_House1F_GiveRareCandy_1
# 40 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	giveitem ITEM_RARE_CANDY, 10
	return

RustboroCity_Misa_House1F_GiveRareCandy_1:
# 35 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	msgbox MisaHouseCantCarryCandy, MSGBOX_AUTOCLOSE
# 36 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmessage
	end


Misa_House1F_EventScript_Text2::
# 47 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	lock
# 48 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	applymovement 1, MisaHouse1F_FacePlayer
# 49 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmovement 0
# 50 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	msgbox MisaHouse1F_3
# 51 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmessage
# 52 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	release
	return


# 78 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
MisaHouse1F_FacePlayer:
# 79 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	face_player
	step_end

MisaHouse1F_1::
# 55 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "MISA: {PLAYER}! Thanks for stopping by.\n JAMES is upstairs in his room.\l Thanks again for becoming his friend.\n I hope you two can help eachother\l out on your journey.\l Have you eaten yet? We already put away\n the leftovers, but I have some candy.$"

MisaHouse1F_2::
# 64 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "MISA: I'll be leaving soon too.\n I took time off because I was worried\l about JAMES, but now I'll be heading\l back to work in EVERGRANDE CITY.$"

MisaHouse1F_3::
# 69 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "MISA: Did you challenge the GYM yet?\n You're already a wonderful trainer, so\l you should be able to beat them.\l Good luck!$"

MisaHouseCantCarryCandy::
# 74 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "Oh, it looks like you already have some.$"
