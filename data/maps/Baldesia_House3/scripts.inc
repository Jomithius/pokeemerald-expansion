Baldesia_House3_MapScripts::
	.byte 0


Baldesia_House3_EventScript_BlackBelt::
# 4 "data/maps/Baldesia_House3/scripts.pory"
	msgbox Baldesia_House3_EventScript_BlackBelt_Text_0, MSGBOX_NPC
	end


Baldesia_House3_EventScript_Girl::
# 12 "data/maps/Baldesia_House3/scripts.pory"
	msgbox Baldesia_House3_EventScript_Girl_Text_0, MSGBOX_NPC
	end


Baldesia_House3_EventScript_KimonoLady::
# 19 "data/maps/Baldesia_House3/scripts.pory"
	goto_if_set FLAG_HIDE_PECHARUNT_BALDESIAN_RUINS, Baldesia_House3_EventScript_KimonoLady_2
# 25 "data/maps/Baldesia_House3/scripts.pory"
	msgbox Baldesia_House3_EventScript_KimonoLady_Text_1, MSGBOX_NPC
Baldesia_House3_EventScript_KimonoLady_1:
	end

Baldesia_House3_EventScript_KimonoLady_2:
# 20 "data/maps/Baldesia_House3/scripts.pory"
	msgbox Baldesia_House3_EventScript_KimonoLady_Text_0, MSGBOX_NPC
	goto Baldesia_House3_EventScript_KimonoLady_1


Baldesia_House3_EventScript_LittleGirl::
# 34 "data/maps/Baldesia_House3/scripts.pory"
	msgbox Baldesia_House3_EventScript_LittleGirl_Text_0, MSGBOX_NPC
	end


Baldesia_House3_EventScript_BlackBelt_Text_0:
# 4 "data/maps/Baldesia_House3/scripts.pory"
	.string "I trained at BRUNO's dojo for about\n two years.\p The regimen was brutal, but it made me\n much stronger!$"

Baldesia_House3_EventScript_Girl_Text_0:
# 12 "data/maps/Baldesia_House3/scripts.pory"
	.string "Soon I'm going to go train at\n BRUNO's dojo.\p I'm nervous!$"

Baldesia_House3_EventScript_KimonoLady_Text_0:
# 20 "data/maps/Baldesia_House3/scripts.pory"
	.string "There's a rumor that the ritual\n was ruined by a group of POKéMON!\p Do you think that's really true?$"

Baldesia_House3_EventScript_KimonoLady_Text_1:
# 25 "data/maps/Baldesia_House3/scripts.pory"
	.string "I heard that JIRACHI is going to\n awaken soon.\p If only I were a CHANNELER so I could\n enter the holy grounds…$"

Baldesia_House3_EventScript_LittleGirl_Text_0:
# 34 "data/maps/Baldesia_House3/scripts.pory"
	.string "I wanna grow up and train in\n martial arts too!$"
