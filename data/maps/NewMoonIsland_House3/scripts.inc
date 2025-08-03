NewMoonIsland_House3_MapScripts::
# 2 "data/maps/NewMoonIsland_House3/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewMoonIsland_House3_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

NewMoonIsland_House3_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/NewMoonIsland_House3/scripts.pory"
	setflag FLAG_TEMP_E
	end


NewMoonIsland_House3_EventScript_Momo::
# 9 "data/maps/NewMoonIsland_House3/scripts.pory"
	msgbox NewMoonIsland_House3_Text_Momo, MSGBOX_NPC
	end


NewMoonIsland_House3_EventScript_Misa::
# 14 "data/maps/NewMoonIsland_House3/scripts.pory"
	lock
# 15 "data/maps/NewMoonIsland_House3/scripts.pory"
	faceplayer
# 16 "data/maps/NewMoonIsland_House3/scripts.pory"
	playbgm MUS_MISA_THEME, FALSE
# 17 "data/maps/NewMoonIsland_House3/scripts.pory"
	msgbox NewMoonIsland_House3_EventScript_Misa_Text_0, MSGBOX_AUTOCLOSE
# 19 "data/maps/NewMoonIsland_House3/scripts.pory"
	waitmessage
# 20 "data/maps/NewMoonIsland_House3/scripts.pory"
	fadedefaultbgm
# 21 "data/maps/NewMoonIsland_House3/scripts.pory"
	release
	end


NewMoonIsland_House3_EventScript_Gentleman::
# 26 "data/maps/NewMoonIsland_House3/scripts.pory"
	msgbox NewMoonIsland_House3_EventScript_Gentleman_Text_0, MSGBOX_NPC
	end


NewMoonIsland_House3_EventScript_Woman::
# 34 "data/maps/NewMoonIsland_House3/scripts.pory"
	msgbox NewMoonIsland_House3_EventScript_Woman_Text_0, MSGBOX_NPC
	end


NewMoonIsland_House3_EventScript_James::
# 42 "data/maps/NewMoonIsland_House3/scripts.pory"
	lock
# 43 "data/maps/NewMoonIsland_House3/scripts.pory"
	delay 16
# 44 "data/maps/NewMoonIsland_House3/scripts.pory"
	playse SE_PIN
# 45 "data/maps/NewMoonIsland_House3/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 46 "data/maps/NewMoonIsland_House3/scripts.pory"
	waitmovement 0
# 47 "data/maps/NewMoonIsland_House3/scripts.pory"
	waitse
# 48 "data/maps/NewMoonIsland_House3/scripts.pory"
	faceplayer
# 49 "data/maps/NewMoonIsland_House3/scripts.pory"
	playbgm MUS_PYRITE_THEME, FALSE
# 50 "data/maps/NewMoonIsland_House3/scripts.pory"
	msgbox NewMoonIsland_House3_Text_James, MSGBOX_AUTOCLOSE
# 51 "data/maps/NewMoonIsland_House3/scripts.pory"
	waitmessage
# 52 "data/maps/NewMoonIsland_House3/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 53 "data/maps/NewMoonIsland_House3/scripts.pory"
	waitmovement 0
# 54 "data/maps/NewMoonIsland_House3/scripts.pory"
	fadedefaultbgm
# 55 "data/maps/NewMoonIsland_House3/scripts.pory"
	release
	end


NewMoonIsland_House3_EventScript_Poobles::
# 60 "data/maps/NewMoonIsland_House3/scripts.pory"
	lock
# 61 "data/maps/NewMoonIsland_House3/scripts.pory"
	faceplayer
# 62 "data/maps/NewMoonIsland_House3/scripts.pory"
	playmoncry SPECIES_DIGLETT_ALOLA, CRY_MODE_ENCOUNTER
# 63 "data/maps/NewMoonIsland_House3/scripts.pory"
	waitmoncry
# 64 "data/maps/NewMoonIsland_House3/scripts.pory"
	msgbox NewMoonIsland_House3_EventScript_Poobles_Text_0, MSGBOX_AUTOCLOSE
# 65 "data/maps/NewMoonIsland_House3/scripts.pory"
	waitmessage
# 66 "data/maps/NewMoonIsland_House3/scripts.pory"
	release
	end


NewMoonIsland_House3_EventScript_Aria::
# 71 "data/maps/NewMoonIsland_House3/scripts.pory"
	lock
# 72 "data/maps/NewMoonIsland_House3/scripts.pory"
	playbgm MUS_NONE, FALSE
# 73 "data/maps/NewMoonIsland_House3/scripts.pory"
	playmoncry SPECIES_ETERNATUS, CRY_MODE_GROWL_1
# 74 "data/maps/NewMoonIsland_House3/scripts.pory"
	waitmoncry
# 75 "data/maps/NewMoonIsland_House3/scripts.pory"
	msgbox NewMoonIsland_House3_EventScript_Aria_Text_0, MSGBOX_AUTOCLOSE
# 77 "data/maps/NewMoonIsland_House3/scripts.pory"
	waitmessage
# 78 "data/maps/NewMoonIsland_House3/scripts.pory"
	delay 16
# 79 "data/maps/NewMoonIsland_House3/scripts.pory"
	playse SE_PIN
# 80 "data/maps/NewMoonIsland_House3/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 81 "data/maps/NewMoonIsland_House3/scripts.pory"
	waitmovement 4
# 82 "data/maps/NewMoonIsland_House3/scripts.pory"
	waitse
# 83 "data/maps/NewMoonIsland_House3/scripts.pory"
	faceplayer
# 84 "data/maps/NewMoonIsland_House3/scripts.pory"
	playse SE_M_YAWN
# 85 "data/maps/NewMoonIsland_House3/scripts.pory"
	waitse
# 86 "data/maps/NewMoonIsland_House3/scripts.pory"
	msgbox NewMoonIsland_House3_EventScript_Aria_Text_1, MSGBOX_AUTOCLOSE
# 87 "data/maps/NewMoonIsland_House3/scripts.pory"
	waitmessage
# 88 "data/maps/NewMoonIsland_House3/scripts.pory"
	applymovement 4, Common_Movement_FaceOriginalDirection
# 89 "data/maps/NewMoonIsland_House3/scripts.pory"
	waitmovement 4
# 90 "data/maps/NewMoonIsland_House3/scripts.pory"
	release
	end


NewMoonIsland_House3_EventScript_Misa_Text_0:
# 17 "data/maps/NewMoonIsland_House3/scripts.pory"
	.string "{PLAYER}, it's your turn to tuck mommy\n into bed now.$"

NewMoonIsland_House3_EventScript_Gentleman_Text_0:
# 26 "data/maps/NewMoonIsland_House3/scripts.pory"
	.string "{PLAYER}!\n LISTEN TO ME!\p CLOSE THE GAME! NOW!\n IT'S THE ONLY WAY TO ESCAPE! HURRY!$"

NewMoonIsland_House3_EventScript_Woman_Text_0:
# 34 "data/maps/NewMoonIsland_House3/scripts.pory"
	.string "{PLAYER}?\n {PLAYER}?\p {PLAYER}?\n PLEASE… WAKE UP…$"

NewMoonIsland_House3_EventScript_Poobles_Text_0:
# 64 "data/maps/NewMoonIsland_House3/scripts.pory"
	.string "POOOOOOOOOOOOOOOBLES!$"

NewMoonIsland_House3_EventScript_Aria_Text_0:
# 75 "data/maps/NewMoonIsland_House3/scripts.pory"
	.string "ARGH! AAAAAARGH!\n AAAUUAUUAAAUGH!$"

NewMoonIsland_House3_EventScript_Aria_Text_1:
# 86 "data/maps/NewMoonIsland_House3/scripts.pory"
	.string "MA-AH!$"

NewMoonIsland_House3_Text_James::
# 94 "data/maps/NewMoonIsland_House3/scripts.pory"
	.string "{PLAYER}?!\n What are you doing here?\p … … … …\p I see…\n So you were also pulled into the abyss…\p There's no saving us then…\p At least now I can tell you that the\n other me is a fake.$"

NewMoonIsland_House3_Text_Momo::
# 105 "data/maps/NewMoonIsland_House3/scripts.pory"
	.string "…\n …\l …\p BARK BARK RUGF RUGG FHHHHERGRGRGRRRR\n GRRRRRRRR\p AAAAAARAAAAAAAA AAAAA GRE\n RGRERRRRR GRRR\p HRHEHEHEGRGRGRGRGR\n GRGRGRGRGRGR\p HSISSSSS HISSSSSS BITE\n BITE SNARL SNARL\p sniff sniff\n GRRRRRRRRR…$"
