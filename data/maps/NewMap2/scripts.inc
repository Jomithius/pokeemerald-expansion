NewMap2_MapScripts::
	.byte 0


Route137_EventScript_Woman_4::
# 4 "data/maps/NewMap2/scripts.pory"
	lock
# 5 "data/maps/NewMap2/scripts.pory"
	faceplayer
# 6 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Woman_4_Text_0, MSGBOX_AUTOCLOSE
# 9 "data/maps/NewMap2/scripts.pory"
	waitmessage
# 10 "data/maps/NewMap2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 11 "data/maps/NewMap2/scripts.pory"
	waitmovement 0
# 12 "data/maps/NewMap2/scripts.pory"
	release
	end


Route137_EventScript_Woman_1::
# 17 "data/maps/NewMap2/scripts.pory"
	lock
# 18 "data/maps/NewMap2/scripts.pory"
	faceplayer
# 19 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Woman_1_Text_0, MSGBOX_AUTOCLOSE
# 20 "data/maps/NewMap2/scripts.pory"
	waitmessage
# 21 "data/maps/NewMap2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 22 "data/maps/NewMap2/scripts.pory"
	waitmovement 0
# 23 "data/maps/NewMap2/scripts.pory"
	release
	end


Route137_EventScript_Tuber_F::
# 28 "data/maps/NewMap2/scripts.pory"
	lock
# 29 "data/maps/NewMap2/scripts.pory"
	faceplayer
# 30 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Tuber_F_Text_0, MSGBOX_AUTOCLOSE
# 32 "data/maps/NewMap2/scripts.pory"
	waitmessage
# 33 "data/maps/NewMap2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 34 "data/maps/NewMap2/scripts.pory"
	waitmovement 0
# 35 "data/maps/NewMap2/scripts.pory"
	release
	end


Route137_EventScript_Pokefan_M::
# 40 "data/maps/NewMap2/scripts.pory"
	lock
# 41 "data/maps/NewMap2/scripts.pory"
	faceplayer
# 42 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Pokefan_M_Text_0, MSGBOX_AUTOCLOSE
# 43 "data/maps/NewMap2/scripts.pory"
	waitmessage
# 44 "data/maps/NewMap2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 45 "data/maps/NewMap2/scripts.pory"
	waitmovement 0
# 46 "data/maps/NewMap2/scripts.pory"
	release
	end


Route137_EventScript_Tuber_F_2::
# 51 "data/maps/NewMap2/scripts.pory"
	lock
# 52 "data/maps/NewMap2/scripts.pory"
	faceplayer
# 53 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Tuber_F_2_Text_0, MSGBOX_AUTOCLOSE
# 55 "data/maps/NewMap2/scripts.pory"
	waitmessage
# 56 "data/maps/NewMap2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 57 "data/maps/NewMap2/scripts.pory"
	waitmovement 0
# 58 "data/maps/NewMap2/scripts.pory"
	release
	end


Route137_EventScript_Joey::
# 63 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Joey_Text_0, MSGBOX_SIGN
	end


Route137_EventScript_Beauty::
# 70 "data/maps/NewMap2/scripts.pory"
	lock
# 71 "data/maps/NewMap2/scripts.pory"
	faceplayer
# 72 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Beauty_Text_0, MSGBOX_AUTOCLOSE
# 75 "data/maps/NewMap2/scripts.pory"
	waitmessage
# 76 "data/maps/NewMap2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 77 "data/maps/NewMap2/scripts.pory"
	waitmovement 0
# 78 "data/maps/NewMap2/scripts.pory"
	release
	end


Route137_EventScript_Sailor1::
# 83 "data/maps/NewMap2/scripts.pory"
	lock
# 84 "data/maps/NewMap2/scripts.pory"
	faceplayer
# 85 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Sailor1_Text_0, MSGBOX_AUTOCLOSE
# 90 "data/maps/NewMap2/scripts.pory"
	waitmessage
# 91 "data/maps/NewMap2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 92 "data/maps/NewMap2/scripts.pory"
	waitmovement 0
# 93 "data/maps/NewMap2/scripts.pory"
	release
	end


Route137_EventScript_Sailor2::
# 98 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Sailor2_Text_0, MSGBOX_SIGN
	end


Route137_EventScript_Sign::
# 105 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Route137_EventScript_Woman_4_Text_0:
# 6 "data/maps/NewMap2/scripts.pory"
	.string "My husband used to be an athlete.\n Every time we come to the beach he\l has to show off how well he can swim.$"

Route137_EventScript_Woman_1_Text_0:
# 19 "data/maps/NewMap2/scripts.pory"
	.string "Sunbathing is way better than swimming!$"

Route137_EventScript_Tuber_F_Text_0:
# 30 "data/maps/NewMap2/scripts.pory"
	.string "When I grow up, I wanna be a swimmer\n too!$"

Route137_EventScript_Pokefan_M_Text_0:
# 42 "data/maps/NewMap2/scripts.pory"
	.string "My children and I love coming to the beach.$"

Route137_EventScript_Tuber_F_2_Text_0:
# 53 "data/maps/NewMap2/scripts.pory"
	.string "All my dumb brother does is swim!\n I want to build a sand castle!$"

Route137_EventScript_Joey_Text_0:
# 63 "data/maps/NewMap2/scripts.pory"
	.string "Ahaha… Yeeeeaaaah…\p ……………………\p They're too relaxed to notice you.$"

Route137_EventScript_Beauty_Text_0:
# 72 "data/maps/NewMap2/scripts.pory"
	.string "That guy next to me just keeps going\n “Yeeeaaaaheheeaaahhh…”\p Is he okay?$"

Route137_EventScript_Sailor1_Text_0:
# 85 "data/maps/NewMap2/scripts.pory"
	.string "Huh?\n … … … …\p How did we get this ship in here with\n all these rocks?\p … You ask too many questions.$"

Route137_EventScript_Sailor2_Text_0:
# 98 "data/maps/NewMap2/scripts.pory"
	.string "Hm…\p That cave wasn't there the\n last time I was here…$"

Route137_EventScript_Sign_Text_0:
# 105 "data/maps/NewMap2/scripts.pory"
	.string "CASTELIA QUEEN\p “Come taste UNOVA's world famous\n dessert!”$"
