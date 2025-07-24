Route138_MapScripts::
	.byte 0


Route138_EventScript_Camper::
# 4 "data/maps/Route138/scripts.pory"
	msgbox Route138_EventScript_Camper_Text_0, MSGBOX_NPC
	end


Route138_EventScript_Pamela::
# 11 "data/maps/Route138/scripts.pory"
	trainerbattle_single TRAINER_PAMELA, Route138_EventScript_Pamela_Text_0, Route138_EventScript_Pamela_Text_1
# 12 "data/maps/Route138/scripts.pory"
	msgbox Route138_EventScript_Pamela_Text_2, MSGBOX_NPC
	end


Route138_EventScript_Pamson::
# 17 "data/maps/Route138/scripts.pory"
	trainerbattle_single TRAINER_PAMSON, Route138_EventScript_Pamson_Text_0, Route138_EventScript_Pamson_Text_1
# 18 "data/maps/Route138/scripts.pory"
	msgbox Route138_EventScript_Pamson_Text_2, MSGBOX_NPC
	end


Route138_EventScript_Suzu::
# 24 "data/maps/Route138/scripts.pory"
	trainerbattle_single TRAINER_SUZU, Route138_EventScript_Suzu_Text_0, Route138_EventScript_Suzu_Text_1
# 25 "data/maps/Route138/scripts.pory"
	msgbox Route138_EventScript_Suzu_Text_2, MSGBOX_NPC
	end


Route138_EventScript_Hitomi::
# 31 "data/maps/Route138/scripts.pory"
	trainerbattle_single TRAINER_HITOMI, Route138_EventScript_Hitomi_Text_0, Route138_EventScript_Hitomi_Text_1
# 32 "data/maps/Route138/scripts.pory"
	msgbox Route138_EventScript_Hitomi_Text_2, MSGBOX_NPC
	end


Route138_EventScript_Kazuki::
# 39 "data/maps/Route138/scripts.pory"
	trainerbattle_single TRAINER_KAZUKI, Route138_EventScript_Kazuki_Text_0, Route138_EventScript_Kazuki_Text_0
# 40 "data/maps/Route138/scripts.pory"
	msgbox Route138_EventScript_Kazuki_Text_0, MSGBOX_NPC
	end


Route138_EventScript_Camper_Text_0:
# 4 "data/maps/Route138/scripts.pory"
	.string "There's a village up ahead.\p When I tried to enter, they wouldn't\n let me in!$"

Route138_EventScript_Pamela_Text_0:
# 11 "data/maps/Route138/scripts.pory"
	.string "I swam here all the way from\nWACHUNPELON!$"

Route138_EventScript_Pamela_Text_1:
# 11 "data/maps/Route138/scripts.pory"
	.string "I don't want to swim\nall the way back.$"

Route138_EventScript_Pamela_Text_2:
# 12 "data/maps/Route138/scripts.pory"
	.string "It's gonna be a long swim back.$"

Route138_EventScript_Pamson_Text_0:
# 17 "data/maps/Route138/scripts.pory"
	.string "Check it out!\pOne of my FINIZEN evolved,\nbut it still looks the same!$"

Route138_EventScript_Pamson_Text_1:
# 17 "data/maps/Route138/scripts.pory"
	.string "Nothing changed at all!$"

Route138_EventScript_Pamson_Text_2:
# 18 "data/maps/Route138/scripts.pory"
	.string "One of my FINIZEN evolved,\n but it still looks the same!$"

Route138_EventScript_Suzu_Text_0:
# 24 "data/maps/Route138/scripts.pory"
	.string "I train in the unseen fist style!$"

Route138_EventScript_Suzu_Text_1:
# 24 "data/maps/Route138/scripts.pory"
	.string "My fist is still seen…$"

Route138_EventScript_Suzu_Text_2:
# 25 "data/maps/Route138/scripts.pory"
	.string "I won't beat BRUNO or MOMO\n at this rate!$"

Route138_EventScript_Hitomi_Text_0:
# 31 "data/maps/Route138/scripts.pory"
	.string "Oh, hello. I've never seen you before.$"

Route138_EventScript_Hitomi_Text_1:
# 31 "data/maps/Route138/scripts.pory"
	.string "Thank you for the battle.$"

Route138_EventScript_Hitomi_Text_2:
# 32 "data/maps/Route138/scripts.pory"
	.string "Are you trying to enter BALDESIA?\p It might be hard for you since\n you're not a resident.$"

Route138_EventScript_Kazuki_Text_0:
# 39 "data/maps/Route138/scripts.pory"
	.string "Osu!$"
