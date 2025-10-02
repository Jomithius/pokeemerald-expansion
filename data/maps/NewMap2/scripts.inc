NewMap2_MapScripts::
	.byte 0


Route137_EventScript_Tadina::
# 4 "data/maps/NewMap2/scripts.pory"
	trainerbattle_single TRAINER_TADINA, Route137_EventScript_Tadina_Text_0, Route137_EventScript_Tadina_Text_1
# 5 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Tadina_Text_2, MSGBOX_NPC
	end


Route137_EventScript_Elvina::
# 10 "data/maps/NewMap2/scripts.pory"
	trainerbattle_single TRAINER_ELVINA, Route137_EventScript_Elvina_Text_0, Route137_EventScript_Elvina_Text_1
# 11 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Elvina_Text_0, MSGBOX_NPC
	end


Route137_EventScript_Lena::
# 16 "data/maps/NewMap2/scripts.pory"
	trainerbattle_single TRAINER_LENA, Route137_EventScript_Lena_Text_0, Route137_EventScript_Lena_Text_1
# 17 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Lena_Text_2, MSGBOX_NPC
	end


Route137_EventScript_Charles::
# 23 "data/maps/NewMap2/scripts.pory"
	trainerbattle_single TRAINER_CHARLES, Route137_EventScript_Charles_Text_0, Route137_EventScript_Charles_Text_1
# 24 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Charles_Text_1, MSGBOX_NPC
	end


Route137_EventScript_Charleson::
# 29 "data/maps/NewMap2/scripts.pory"
	trainerbattle_single TRAINER_CHARLESON, Route137_EventScript_Charleson_Text_0, Route137_EventScript_Charleson_Text_1
# 30 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Charleson_Text_2, MSGBOX_NPC
	end


Route137_EventScript_Jameson::
# 37 "data/maps/NewMap2/scripts.pory"
	trainerbattle_single TRAINER_JAMESON, Route137_EventScript_Jameson_Text_0, Route137_EventScript_Jameson_Text_1
# 38 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Jameson_Text_1, MSGBOX_NPC
	end


Route137_EventScript_Daveson::
# 43 "data/maps/NewMap2/scripts.pory"
	trainerbattle_single TRAINER_DAVESON, Route137_EventScript_Daveson_Text_0, Route137_EventScript_Daveson_Text_1
# 44 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Daveson_Text_2, MSGBOX_NPC
	end


Route137_EventScript_Hiyoshi::
# 51 "data/maps/NewMap2/scripts.pory"
	trainerbattle_single TRAINER_HIYOSHI, Route137_EventScript_Hiyoshi_Text_0, Route137_EventScript_Hiyoshi_Text_1
# 52 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Hiyoshi_Text_2, MSGBOX_NPC
	end


Route137_EventScript_Von::
# 57 "data/maps/NewMap2/scripts.pory"
	trainerbattle_single TRAINER_VON, Route137_EventScript_Von_Text_0, Route137_EventScript_Von_Text_1
# 58 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Von_Text_2, MSGBOX_NPC
	end


Route137_EventScript_Woman_4::
# 64 "data/maps/NewMap2/scripts.pory"
	lock
# 65 "data/maps/NewMap2/scripts.pory"
	faceplayer
# 66 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Woman_4_Text_0, MSGBOX_AUTOCLOSE
# 69 "data/maps/NewMap2/scripts.pory"
	waitmessage
# 70 "data/maps/NewMap2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 71 "data/maps/NewMap2/scripts.pory"
	waitmovement 0
# 72 "data/maps/NewMap2/scripts.pory"
	release
	end


Route137_EventScript_Woman_1::
# 77 "data/maps/NewMap2/scripts.pory"
	lock
# 78 "data/maps/NewMap2/scripts.pory"
	faceplayer
# 79 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Woman_1_Text_0, MSGBOX_AUTOCLOSE
# 80 "data/maps/NewMap2/scripts.pory"
	waitmessage
# 81 "data/maps/NewMap2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 82 "data/maps/NewMap2/scripts.pory"
	waitmovement 0
# 83 "data/maps/NewMap2/scripts.pory"
	release
	end


Route137_EventScript_Tuber_F::
# 88 "data/maps/NewMap2/scripts.pory"
	lock
# 89 "data/maps/NewMap2/scripts.pory"
	faceplayer
# 90 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Tuber_F_Text_0, MSGBOX_AUTOCLOSE
# 92 "data/maps/NewMap2/scripts.pory"
	waitmessage
# 93 "data/maps/NewMap2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 94 "data/maps/NewMap2/scripts.pory"
	waitmovement 0
# 95 "data/maps/NewMap2/scripts.pory"
	release
	end


Route137_EventScript_Pokefan_M::
# 100 "data/maps/NewMap2/scripts.pory"
	lock
# 101 "data/maps/NewMap2/scripts.pory"
	faceplayer
# 102 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Pokefan_M_Text_0, MSGBOX_AUTOCLOSE
# 104 "data/maps/NewMap2/scripts.pory"
	waitmessage
# 105 "data/maps/NewMap2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 106 "data/maps/NewMap2/scripts.pory"
	waitmovement 0
# 107 "data/maps/NewMap2/scripts.pory"
	release
	end


Route137_EventScript_Tuber_F_2::
# 112 "data/maps/NewMap2/scripts.pory"
	lock
# 113 "data/maps/NewMap2/scripts.pory"
	faceplayer
# 114 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Tuber_F_2_Text_0, MSGBOX_AUTOCLOSE
# 116 "data/maps/NewMap2/scripts.pory"
	waitmessage
# 117 "data/maps/NewMap2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 118 "data/maps/NewMap2/scripts.pory"
	waitmovement 0
# 119 "data/maps/NewMap2/scripts.pory"
	release
	end


Route137_EventScript_Joey::
# 124 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Joey_Text_0, MSGBOX_SIGN
	end


Route137_EventScript_Steve::
# 131 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Steve_Text_0, MSGBOX_SIGN
	end


Route137_EventScript_Beauty::
# 139 "data/maps/NewMap2/scripts.pory"
	lock
# 140 "data/maps/NewMap2/scripts.pory"
	faceplayer
# 141 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Beauty_Text_0, MSGBOX_AUTOCLOSE
# 144 "data/maps/NewMap2/scripts.pory"
	waitmessage
# 145 "data/maps/NewMap2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 146 "data/maps/NewMap2/scripts.pory"
	waitmovement 0
# 147 "data/maps/NewMap2/scripts.pory"
	release
	end


Route137_EventScript_Sailor1::
# 152 "data/maps/NewMap2/scripts.pory"
	lock
# 153 "data/maps/NewMap2/scripts.pory"
	faceplayer
# 154 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Sailor1_Text_0, MSGBOX_AUTOCLOSE
# 159 "data/maps/NewMap2/scripts.pory"
	waitmessage
# 160 "data/maps/NewMap2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 161 "data/maps/NewMap2/scripts.pory"
	waitmovement 0
# 162 "data/maps/NewMap2/scripts.pory"
	release
	end


Route137_EventScript_Sailor2::
# 167 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Sailor2_Text_0, MSGBOX_SIGN
	end


Route137_EventScript_Sign::
# 174 "data/maps/NewMap2/scripts.pory"
	msgbox Route137_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Route137_EventScript_Tadina_Text_0:
# 4 "data/maps/NewMap2/scripts.pory"
	.string "This is a great vacation!$"

Route137_EventScript_Tadina_Text_1:
# 4 "data/maps/NewMap2/scripts.pory"
	.string "You just ruined it.$"

Route137_EventScript_Tadina_Text_2:
# 5 "data/maps/NewMap2/scripts.pory"
	.string "I haven't gone on vacation in years!$"

Route137_EventScript_Elvina_Text_0:
# 10 "data/maps/NewMap2/scripts.pory"
	.string "Hey!\nYou're in my way!$"

Route137_EventScript_Elvina_Text_1:
# 10 "data/maps/NewMap2/scripts.pory"
	.string "Just get out of my way!$"

Route137_EventScript_Lena_Text_0:
# 16 "data/maps/NewMap2/scripts.pory"
	.string "You have GOT to try the ice cream\nat the shop!$"

Route137_EventScript_Lena_Text_1:
# 16 "data/maps/NewMap2/scripts.pory"
	.string "It's so good!$"

Route137_EventScript_Lena_Text_2:
# 17 "data/maps/NewMap2/scripts.pory"
	.string "I heard the owner came all the way\n from UNOVA to open up a shop here.$"

Route137_EventScript_Charles_Text_0:
# 23 "data/maps/NewMap2/scripts.pory"
	.string "I love swimming!$"

Route137_EventScript_Charles_Text_1:
# 23 "data/maps/NewMap2/scripts.pory"
	.string "I hate sand castles!$"

Route137_EventScript_Charleson_Text_0:
# 29 "data/maps/NewMap2/scripts.pory"
	.string "Huff, huff…\nLook how well I can swim!$"

Route137_EventScript_Charleson_Text_1:
# 29 "data/maps/NewMap2/scripts.pory"
	.string "Gah! I got a cramp!$"

Route137_EventScript_Charleson_Text_2:
# 30 "data/maps/NewMap2/scripts.pory"
	.string "Huff, huff…\n Look how well I can swim!\p Is my wife watching?!$"

Route137_EventScript_Jameson_Text_0:
# 37 "data/maps/NewMap2/scripts.pory"
	.string "SWIM! SWIM! SWIM!$"

Route137_EventScript_Jameson_Text_1:
# 37 "data/maps/NewMap2/scripts.pory"
	.string "I'LL KEEP SWIMMING!$"

Route137_EventScript_Daveson_Text_0:
# 43 "data/maps/NewMap2/scripts.pory"
	.string "Hey!\nLook what I caught at a spot out east!$"

Route137_EventScript_Daveson_Text_1:
# 43 "data/maps/NewMap2/scripts.pory"
	.string "What a catch!$"

Route137_EventScript_Daveson_Text_2:
# 44 "data/maps/NewMap2/scripts.pory"
	.string "Out to the east there's a village\n that's hard to get into.\p But the culture there is really cool.$"

Route137_EventScript_Hiyoshi_Text_0:
# 51 "data/maps/NewMap2/scripts.pory"
	.string "This is my secret training spot!$"

Route137_EventScript_Hiyoshi_Text_1:
# 51 "data/maps/NewMap2/scripts.pory"
	.string "I need more training.$"

Route137_EventScript_Hiyoshi_Text_2:
# 52 "data/maps/NewMap2/scripts.pory"
	.string "I'm training to finally beat BRUNO!$"

Route137_EventScript_Von_Text_0:
# 57 "data/maps/NewMap2/scripts.pory"
	.string "Oh?\nWhat have we here?$"

Route137_EventScript_Von_Text_1:
# 57 "data/maps/NewMap2/scripts.pory"
	.string "Oh.\nHere what we have.$"

Route137_EventScript_Von_Text_2:
# 58 "data/maps/NewMap2/scripts.pory"
	.string "Even though I look like this,\n I love the beach.$"

Route137_EventScript_Woman_4_Text_0:
# 66 "data/maps/NewMap2/scripts.pory"
	.string "My husband used to be an athlete.\p Every time we come to the beach, he\n has to show off how well he can swim.$"

Route137_EventScript_Woman_1_Text_0:
# 79 "data/maps/NewMap2/scripts.pory"
	.string "Sunbathing is way better than swimming!$"

Route137_EventScript_Tuber_F_Text_0:
# 90 "data/maps/NewMap2/scripts.pory"
	.string "When I grow up, I wanna be a swimmer\n too!$"

Route137_EventScript_Pokefan_M_Text_0:
# 102 "data/maps/NewMap2/scripts.pory"
	.string "My children and I love coming to the\n beach.$"

Route137_EventScript_Tuber_F_2_Text_0:
# 114 "data/maps/NewMap2/scripts.pory"
	.string "All my dumb brother does is swim!\n I want to build a sand castle!$"

Route137_EventScript_Joey_Text_0:
# 124 "data/maps/NewMap2/scripts.pory"
	.string "Ahaha… Yeeheheaaaaaah…\p ……………………\p They're too relaxed to notice you.$"

Route137_EventScript_Steve_Text_0:
# 131 "data/maps/NewMap2/scripts.pory"
	.string "Yeheheaah!\n This is a sick vacation!\p ……………………\p They're too relaxed to notice you.$"

Route137_EventScript_Beauty_Text_0:
# 141 "data/maps/NewMap2/scripts.pory"
	.string "Those guys next to me just keep saying\n “Yeeeaaaaheheeaaahhh…”\p Are they okay?$"

Route137_EventScript_Sailor1_Text_0:
# 154 "data/maps/NewMap2/scripts.pory"
	.string "Huh?\n … … … …\p How did we get this ship in here with\n all these rocks?\p … You ask too many questions.$"

Route137_EventScript_Sailor2_Text_0:
# 167 "data/maps/NewMap2/scripts.pory"
	.string "Hm…\p That cave wasn't there the\n last time I was here…$"

Route137_EventScript_Sign_Text_0:
# 174 "data/maps/NewMap2/scripts.pory"
	.string "CASTELIA QUEEN\p “Come taste UNOVA's world-famous\n dessert!”$"
