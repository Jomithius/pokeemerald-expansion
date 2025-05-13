PetalburgCity_Luna_Upstairs_MapScripts::
	.byte 0


Luna_House_EventScript_Cup::
# 4 "data/maps/PetalburgCity_Luna_Upstairs/scripts.pory"
	lock
# 5 "data/maps/PetalburgCity_Luna_Upstairs/scripts.pory"
	msgbox Luna_House_EventScript_Cup_Text_0
# 10 "data/maps/PetalburgCity_Luna_Upstairs/scripts.pory"
	waitmessage
# 11 "data/maps/PetalburgCity_Luna_Upstairs/scripts.pory"
	release
	end


Luna_House_EventScript_TV::
# 16 "data/maps/PetalburgCity_Luna_Upstairs/scripts.pory"
	lockall
# 17 "data/maps/PetalburgCity_Luna_Upstairs/scripts.pory"
	msgbox Luna_House_EventScript_TV_Text_0
# 19 "data/maps/PetalburgCity_Luna_Upstairs/scripts.pory"
	waitmessage
# 20 "data/maps/PetalburgCity_Luna_Upstairs/scripts.pory"
	releaseall
	end


Luna_House_EventScript_Cup_Text_0:
# 5 "data/maps/PetalburgCity_Luna_Upstairs/scripts.pory"
	.string "A letter is placed next to the \n drink: \p Legend states that any who drink this \n mysterious liquid before lying down \p will awaken a new man or woman.$"

Luna_House_EventScript_TV_Text_0:
# 17 "data/maps/PetalburgCity_Luna_Upstairs/scripts.pory"
	.string "There's a stream playing on the TV. \p It's a popular Vtuber.$"
