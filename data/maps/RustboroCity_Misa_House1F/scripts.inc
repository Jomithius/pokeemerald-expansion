RustboroCity_Misa_House1F_MapScripts::
# 2 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RustboroCity_Misa_House1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

RustboroCity_Misa_House1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 2 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	compare VAR_MISA_STATE, 2
	goto_if_eq RustboroCity_Misa_House1F_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 6 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	setflag FLAG_HIDE_MISA_EMO_RUSTBORO_HOUSE
RustboroCity_Misa_House1F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

RustboroCity_Misa_House1F_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 3 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	clearflag FLAG_HIDE_MISA_EMO_RUSTBORO_HOUSE
	goto RustboroCity_Misa_House1F_MapScripts_MAP_SCRIPT_ON_LOAD_1


Rustboro_Misa_Text_EventScript::
# 12 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	lock
# 13 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	goto_if_set FLAG_RUSTBORO_MISA_HOUSE_RARECANDY, Rustboro_Misa_Text_EventScript_1
# 17 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	goto RustboroCity_Misa_House1F_MisaGiveItem
	return

Rustboro_Misa_Text_EventScript_1:
# 14 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	goto Misa_House1F_EventScript_Text2
	return


RustboroCity_Misa_House1F_MisaGiveItem::
# 22 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	lock
# 23 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	applymovement 1, MisaHouse1F_FacePlayer
# 24 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmovement 0
# 25 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	msgbox MisaHouse1F_1, MSGBOX_AUTOCLOSE
# 26 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	call RustboroCity_Misa_House1F_GiveRareCandy
# 27 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmessage
# 28 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	msgbox MisaHouse1F_2, MSGBOX_NPC
# 29 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmessage
# 30 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	release
	end


RustboroCity_Misa_House1F_GiveRareCandy::
	checkitemspace ITEM_RARE_CANDY
# 0 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	compare VAR_RESULT, 99
	goto_if_ge RustboroCity_Misa_House1F_GiveRareCandy_2
# 41 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	giveitem ITEM_RARE_CANDY, 10
# 42 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	setflag FLAG_RUSTBORO_MISA_HOUSE_RARECANDY
	return

RustboroCity_Misa_House1F_GiveRareCandy_2:
# 36 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	msgbox MisaHouseCantCarryCandy, MSGBOX_AUTOCLOSE
# 37 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmessage
	end


Misa_House1F_EventScript_Text2::
# 48 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	lock
# 49 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	applymovement 1, MisaHouse1F_FacePlayer
# 50 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmovement 0
# 51 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	msgbox MisaHouse1F_3
# 52 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	waitmessage
# 53 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	release
	end


# 80 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
MisaHouse1F_FacePlayer:
# 81 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	face_player
	step_end

MisaHouse1F_1::
# 57 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "MISA: {PLAYER}! I'm glad you stopped by.\n JAMES is upstairs in his room.\l Thanks again for becoming his friend.\l I hope you two can help each other\l out on your journey.\p Have you eaten yet? We already put away\n the leftovers, but I have some candy.$"

MisaHouse1F_2::
# 66 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "I'll be leaving soon too.\n I took time off because I was worried\l about JAMES, but now I'll be heading\l back to work in EVER GRANDE CITY.$"

MisaHouse1F_3::
# 71 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "MISA: Did you challenge the GYM yet?\n You're already a wonderful trainer, so\l you should be able to beat them.\l Good luck!$"

MisaHouseCantCarryCandy::
# 76 "data/maps/RustboroCity_Misa_House1F/scripts.pory"
	.string "Oh, it looks like you already have some.$"
