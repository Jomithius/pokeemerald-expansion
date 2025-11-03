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


Route135_House1_EventScript_Woman::
# 32 "data/maps/Route135_House1/scripts.pory"
	lock
# 33 "data/maps/Route135_House1/scripts.pory"
	faceplayer
# 34 "data/maps/Route135_House1/scripts.pory"
	msgbox Route135_House1_EventScript_Woman_Text_0, MSGBOX_AUTOCLOSE
# 38 "data/maps/Route135_House1/scripts.pory"
	waitmessage
# 39 "data/maps/Route135_House1/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 40 "data/maps/Route135_House1/scripts.pory"
	msgbox Route135_House1_EventScript_Woman_Text_1, MSGBOX_AUTOCLOSE
# 42 "data/maps/Route135_House1/scripts.pory"
	waitmessage
# 43 "data/maps/Route135_House1/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 44 "data/maps/Route135_House1/scripts.pory"
	waitmovement 0
	end


Route135_House1_EventScript_OldMan_Text_0:
# 6 "data/maps/Route135_House1/scripts.pory"
	.string "There was a couple that used to live in\n these parts that would go adventurin'.\p One day, they didn't come back.\n They had a son, too.\p I wonder what happened to him.$"

Route135_House1_EventScript_OldWoman_Text_0:
# 20 "data/maps/Route135_House1/scripts.pory"
	.string "There's an old story that says people\n in this area used to get cursed with\l terrible nightmares.\p Huh? No, it's not real!\n Just another urban myth! Hahaha!$"

Route135_House1_EventScript_Woman_Text_0:
# 34 "data/maps/Route135_House1/scripts.pory"
	.string "Aw, you look mighty tired.\p How 'bout you and your POKéMON\n rest up for a bit?\p We were just fixin' to make dinner.$"

Route135_House1_EventScript_Woman_Text_1:
# 40 "data/maps/Route135_House1/scripts.pory"
	.string "You're welcome to stop by\n by anytime, love!$"
