LavaridgeTown_House2_MapScripts::
	.byte 0


LavaridgeTown_House2_OldLady::
# 4 "data/maps/LavaridgeTown_House2/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_House2_OldLady_2
# 8 "data/maps/LavaridgeTown_House2/scripts.pory"
	msgbox LavaridgeTown_House2_Text_Lady2, MSGBOX_NPC
LavaridgeTown_House2_OldLady_1:
# 10 "data/maps/LavaridgeTown_House2/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 11 "data/maps/LavaridgeTown_House2/scripts.pory"
	waitmovement 1
	end

LavaridgeTown_House2_OldLady_2:
# 5 "data/maps/LavaridgeTown_House2/scripts.pory"
	msgbox LavaridgeTown_EventScript_Text_Lady1, MSGBOX_NPC
	goto LavaridgeTown_House2_OldLady_1


LavaridgeTown_House2_Lina::
# 30 "data/maps/LavaridgeTown_House2/scripts.pory"
	lock
# 31 "data/maps/LavaridgeTown_House2/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 32 "data/maps/LavaridgeTown_House2/scripts.pory"
	waitmovement 2
# 33 "data/maps/LavaridgeTown_House2/scripts.pory"
	msgbox LavaridgeTown_House2_Text_Lina, MSGBOX_YESNO
# 34 "data/maps/LavaridgeTown_House2/scripts.pory"
	waitmessage
# 35 "data/maps/LavaridgeTown_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LavaridgeTown_House2_Lina_2
# 44 "data/maps/LavaridgeTown_House2/scripts.pory"
	msgbox LavaridgeTown_House2_LinaThenLeave, MSGBOX_NPC
LavaridgeTown_House2_Lina_1:
# 46 "data/maps/LavaridgeTown_House2/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 47 "data/maps/LavaridgeTown_House2/scripts.pory"
	waitmovement 2
# 48 "data/maps/LavaridgeTown_House2/scripts.pory"
	setvar VAR_LINA_TALKED_TO, 1
	end

LavaridgeTown_House2_Lina_2:
# 36 "data/maps/LavaridgeTown_House2/scripts.pory"
	goto_if_set FLAG_LINA_HOUSE_EEVEE, LavaridgeTown_House2_Lina_5
# 40 "data/maps/LavaridgeTown_House2/scripts.pory"
	msgbox LavaridgeTown_House2_Text_LinaThatsWeird, MSGBOX_NPC
	goto LavaridgeTown_House2_Lina_1

LavaridgeTown_House2_Lina_5:
# 37 "data/maps/LavaridgeTown_House2/scripts.pory"
	msgbox LavaridgeTown_House2_Text_LinaEeveeStolen, MSGBOX_NPC
	goto LavaridgeTown_House2_Lina_1


LavaridgeTown_House2_Text_Lady2::
# 15 "data/maps/LavaridgeTown_House2/scripts.pory"
	.string "Fufu.\n She acts like she doesn't care, but\l she travels all the way from SLATEPORT\l CITY just to visit us all the time.\p Maybe she just loves her\n sister's cooking that much.$"

LavaridgeTown_EventScript_Text_Lady1::
# 24 "data/maps/LavaridgeTown_House2/scripts.pory"
	.string "Fufu. \n My daughters are so great.$"

LavaridgeTown_House2_Text_Lina::
# 52 "data/maps/LavaridgeTown_House2/scripts.pory"
	.string "Do you always just go around\n entering random people's houses?$"

LavaridgeTown_House2_Text_LinaEeveeStolen::
# 57 "data/maps/LavaridgeTown_House2/scripts.pory"
	.string "You know that's weird, right?\n You're probably the reason that\l my EEVEE went missing too.\p Shoo!$"

LavaridgeTown_House2_Text_LinaThatsWeird::
# 64 "data/maps/LavaridgeTown_House2/scripts.pory"
	.string "You know that's weird, right?\n Shoo!$"

LavaridgeTown_House2_LinaThenLeave::
# 69 "data/maps/LavaridgeTown_House2/scripts.pory"
	.string "Then why did you barge in here?\n Hmph!$"
