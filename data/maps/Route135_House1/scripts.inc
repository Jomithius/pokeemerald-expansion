Route135_House1_MapScripts::
	.byte 0


Route135_House1_EventScript_OldMan::
# 4 "data/maps/Route135_House1/scripts.pory"
	lock
# 5 "data/maps/Route135_House1/scripts.pory"
	faceplayer
# 6 "data/maps/Route135_House1/scripts.pory"
	msgbox Route135_House1_EventScript_OldMan_Text_0, MSGBOX_AUTOCLOSE
# 11 "data/maps/Route135_House1/scripts.pory"
	waitmessage
# 12 "data/maps/Route135_House1/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 13 "data/maps/Route135_House1/scripts.pory"
	waitmovement 0
	end


Route135_House1_EventScript_OldWoman::
# 18 "data/maps/Route135_House1/scripts.pory"
	lock
# 19 "data/maps/Route135_House1/scripts.pory"
	faceplayer
# 20 "data/maps/Route135_House1/scripts.pory"
	msgbox Route135_House1_EventScript_OldWoman_Text_0, MSGBOX_AUTOCLOSE
# 25 "data/maps/Route135_House1/scripts.pory"
	waitmessage
# 26 "data/maps/Route135_House1/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 27 "data/maps/Route135_House1/scripts.pory"
	waitmovement 0
	end


Route135_House1_EventScript_OldMan_Text_0:
# 6 "data/maps/Route135_House1/scripts.pory"
	.string "There was a couple that used to live in\n these parts that would go adventurin'.\p One day, they didn't come back.\n They had a son, too.\p I wonder what happened to him.$"

Route135_House1_EventScript_OldWoman_Text_0:
# 20 "data/maps/Route135_House1/scripts.pory"
	.string "There's an old story that says people\n in this area used to get cursed with\l terrible nightmares.\p Huh? No, it's not real!\n Just another urban myth! Hahaha!$"
