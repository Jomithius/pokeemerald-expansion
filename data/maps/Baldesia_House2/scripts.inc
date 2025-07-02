Baldesia_House2_MapScripts::
	.byte 0


Baldesia_House2_EventScript_OldWoman::
# 4 "data/maps/Baldesia_House2/scripts.pory"
	msgbox Baldesia_House2_EventScript_OldWoman_Text_0, MSGBOX_NPC
	end


Baldesia_House2_EventScript_OldMan::
# 13 "data/maps/Baldesia_House2/scripts.pory"
	msgbox Baldesia_House2_EventScript_OldMan_Text_0, MSGBOX_NPC
	end


Baldesia_House2_EventScript_Blissey::
# 20 "data/maps/Baldesia_House2/scripts.pory"
	lock
# 21 "data/maps/Baldesia_House2/scripts.pory"
	faceplayer
# 22 "data/maps/Baldesia_House2/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_ENCOUNTER
# 23 "data/maps/Baldesia_House2/scripts.pory"
	waitmoncry
# 24 "data/maps/Baldesia_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 25 "data/maps/Baldesia_House2/scripts.pory"
	waitmovement 0
# 26 "data/maps/Baldesia_House2/scripts.pory"
	release
	end


Baldesia_House2_EventScript_OldWoman_Text_0:
# 4 "data/maps/Baldesia_House2/scripts.pory"
	.string "Every time JIRACHI is going to awaken,\n the Young Lady of the ASAKURA\l household is required to make the\l pilgrimage to the altar to perform a\l very sacred ritual.$"

Baldesia_House2_EventScript_OldMan_Text_0:
# 13 "data/maps/Baldesia_House2/scripts.pory"
	.string "It's said every 1000 years JIRACHI\n awakens to grant one wish.\p It's going to awaken again soon.$"
