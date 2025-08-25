MtPyre_Exterior_Dave_House_MapScripts::
	.byte 0


MtPyre_Exterior_Dave_House_EventScript_Gengar::
# 4 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	lock
# 5 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	faceplayer
# 6 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	playmoncry SPECIES_GENGAR, CRY_MODE_ENCOUNTER
# 7 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	waitmoncry
# 8 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	release
	end


MtPyre_Exterior_Dave_House_EventScript_Mimikyu::
# 13 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	lock
# 14 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	faceplayer
# 15 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
# 16 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	waitmoncry
# 17 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	release
	end


MtPyre_Exterior_Dave_House_EventScript_Banette::
# 22 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	lock
# 23 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	faceplayer
# 24 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	playmoncry SPECIES_BANETTE, CRY_MODE_ENCOUNTER
# 25 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	waitmoncry
# 26 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	release
	end


MtPyre_Exterior_Dave_House_EventScript_Litwick::
# 31 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	lock
# 32 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	faceplayer
# 33 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	playmoncry SPECIES_LITWICK, CRY_MODE_ENCOUNTER
# 34 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	waitmoncry
# 35 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	release
	end


MtPyre_Exterior_Dave_House_EventScript_Dave::
# 40 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	lock
# 41 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	faceplayer
# 42 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	goto_if_unset FLAG_RECEIVED_FANTASIA, MtPyre_Exterior_Dave_House_EventScript_GiveFantasia
# 43 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	msgbox MtPyre_Exterior_Dave_House_EventScript_Dave_Text_0, MSGBOX_AUTOCLOSE
# 45 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	waitmessage
# 46 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 47 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	waitmovement 0
# 48 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	release
	end


MtPyre_Exterior_Dave_House_EventScript_GiveFantasia::
# 53 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	lock
# 54 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 55 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	msgbox MtPyre_Exterior_Dave_House_Text_Fantasia, MSGBOX_DEFAULT
# 56 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	waitmessage
# 57 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	giveitem ITEM_FANTASIA
# 58 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	waitmessage
# 59 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	msgbox MtPyre_Exterior_Dave_House_Text_WarnFantasia, MSGBOX_AUTOCLOSE
# 60 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	waitmessage
# 61 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	setflag FLAG_RECEIVED_FANTASIA
# 62 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 63 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	waitmovement 0
# 64 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	release
	end


MtPyre_Exterior_Dave_House_EventScript_Dave_Text_0:
# 43 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	.string "DAVE: If we have to battle in the\n future, do me a favor and lose, okay?$"

MtPyre_Exterior_Dave_House_Text_Fantasia::
# 69 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	.string "Oh, yes, hello.\n Who are you?\l … … … …\p Oh. Nice to meet you, {PLAYER}.\n I'm DAVE, a member of the ELITE FOUR.\p DAVE: So?\n Why'd you come all the way out here?\p … … … …\p Oh, I see.\p Well, I can tell you're a good TRAINER.\n Your {STR_VAR_1} looks strong.\p Usually I sell these, but I'll give you\n one for free.\p There's a guy that recently bought out\n almost all my stock, so I'm feeling\l generous today.$"

MtPyre_Exterior_Dave_House_Text_WarnFantasia::
# 88 "data/maps/MtPyre_Exterior_Dave_House/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}WARNING\p Using the FANTASIA before post game\n may cause a few visual bugs in a\l couple cutscenes.\l Check the README for more details.\p {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}If we have to battle in the future, do\n me a favor and lose, okay?$"
