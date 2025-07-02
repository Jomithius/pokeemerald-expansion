Baldesia_House4_MapScripts::
	.byte 0


Baldesia_House4_EventScript_Ninja::
# 4 "data/maps/Baldesia_House4/scripts.pory"
	lock
# 5 "data/maps/Baldesia_House4/scripts.pory"
	faceplayer
# 6 "data/maps/Baldesia_House4/scripts.pory"
	msgbox Baldesia_House4_EventScript_Ninja_Text_0, MSGBOX_YESNO
# 9 "data/maps/Baldesia_House4/scripts.pory"
	waitmessage
# 10 "data/maps/Baldesia_House4/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Baldesia_House4_EventScript_Ninja_2
# 15 "data/maps/Baldesia_House4/scripts.pory"
	msgbox Baldesia_House4_EventScript_Ninja_Text_2, MSGBOX_AUTOCLOSE
Baldesia_House4_EventScript_Ninja_1:
# 18 "data/maps/Baldesia_House4/scripts.pory"
	waitmessage
# 19 "data/maps/Baldesia_House4/scripts.pory"
	release
	end

Baldesia_House4_EventScript_Ninja_2:
# 11 "data/maps/Baldesia_House4/scripts.pory"
	msgbox Baldesia_House4_EventScript_Ninja_Text_1, MSGBOX_AUTOCLOSE
	goto Baldesia_House4_EventScript_Ninja_1


Baldesia_House4_EventScript_NinjaBoy::
# 24 "data/maps/Baldesia_House4/scripts.pory"
	lock
# 25 "data/maps/Baldesia_House4/scripts.pory"
	call EventScript_RevealTrainer
# 26 "data/maps/Baldesia_House4/scripts.pory"
	msgbox Baldesia_House4_EventScript_NinjaBoy_Text_0, MSGBOX_AUTOCLOSE
# 29 "data/maps/Baldesia_House4/scripts.pory"
	waitmessage
# 30 "data/maps/Baldesia_House4/scripts.pory"
	release
	end


Baldesia_House4_EventScript_KimonoLady::
# 35 "data/maps/Baldesia_House4/scripts.pory"
	msgbox Baldesia_House4_EventScript_KimonoLady_Text_0, MSGBOX_NPC
	end


Baldesia_House4_EventScript_Ninja_Text_0:
# 6 "data/maps/Baldesia_House4/scripts.pory"
	.string "MASTER BENNIS is one of the greatest\n ninjas to ever live.\p Wouldn't you agree?$"

Baldesia_House4_EventScript_Ninja_Text_1:
# 11 "data/maps/Baldesia_House4/scripts.pory"
	.string "That's right!\n He's my inspiration.$"

Baldesia_House4_EventScript_Ninja_Text_2:
# 15 "data/maps/Baldesia_House4/scripts.pory"
	.string "You don't know what you're talking about.\n Typical hair follicle mentality.$"

Baldesia_House4_EventScript_NinjaBoy_Text_0:
# 26 "data/maps/Baldesia_House4/scripts.pory"
	.string "Bald! Bald! Bald!\p Auntie MOMO taught me how to use\n disguises!$"

Baldesia_House4_EventScript_KimonoLady_Text_0:
# 35 "data/maps/Baldesia_House4/scripts.pory"
	.string "Before she left, LADY ASAKURA\n used to mentor all the children in\l the village.$"
