NewMoonIsland_House3_MapScripts::
# 2 "data/maps/NewMoonIsland_House3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewMoonIsland_House3_OnTransition
	.byte 0


NewMoonIsland_House3_OnTransition::
# 6 "data/maps/NewMoonIsland_House3/scripts.pory"
	setflag FLAG_TEMP_E
# 7 "data/maps/NewMoonIsland_House3/scripts.pory"
	call Common_EventScript_SetPooblesGfx
	end


NewMoonIsland_House3_EventScript_Momo::
# 12 "data/maps/NewMoonIsland_House3/scripts.pory"
	msgbox NewMoonIsland_House3_Text_Momo, MSGBOX_NPC
	end


NewMoonIsland_House3_EventScript_Misa::
# 17 "data/maps/NewMoonIsland_House3/scripts.pory"
	lock
# 18 "data/maps/NewMoonIsland_House3/scripts.pory"
	faceplayer
# 19 "data/maps/NewMoonIsland_House3/scripts.pory"
	playbgm MUS_MISA_THEME, FALSE
# 20 "data/maps/NewMoonIsland_House3/scripts.pory"
	msgbox NewMoonIsland_House3_EventScript_Misa_Text_0, MSGBOX_AUTOCLOSE
# 22 "data/maps/NewMoonIsland_House3/scripts.pory"
	waitmessage
# 23 "data/maps/NewMoonIsland_House3/scripts.pory"
	fadedefaultbgm
# 24 "data/maps/NewMoonIsland_House3/scripts.pory"
	release
	end


NewMoonIsland_House3_EventScript_Gentleman::
# 29 "data/maps/NewMoonIsland_House3/scripts.pory"
	msgbox NewMoonIsland_House3_EventScript_Gentleman_Text_0, MSGBOX_NPC
	end


NewMoonIsland_House3_EventScript_Woman::
# 37 "data/maps/NewMoonIsland_House3/scripts.pory"
	msgbox NewMoonIsland_House3_EventScript_Woman_Text_0, MSGBOX_NPC
	end


NewMoonIsland_House3_EventScript_James::
# 45 "data/maps/NewMoonIsland_House3/scripts.pory"
	lock
# 46 "data/maps/NewMoonIsland_House3/scripts.pory"
	delay 16
# 47 "data/maps/NewMoonIsland_House3/scripts.pory"
	playse SE_PIN
# 48 "data/maps/NewMoonIsland_House3/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 49 "data/maps/NewMoonIsland_House3/scripts.pory"
	waitmovement 0
# 50 "data/maps/NewMoonIsland_House3/scripts.pory"
	waitse
# 51 "data/maps/NewMoonIsland_House3/scripts.pory"
	faceplayer
# 52 "data/maps/NewMoonIsland_House3/scripts.pory"
	playbgm MUS_PYRITE_THEME, FALSE
# 53 "data/maps/NewMoonIsland_House3/scripts.pory"
	msgbox NewMoonIsland_House3_Text_James, MSGBOX_AUTOCLOSE
# 54 "data/maps/NewMoonIsland_House3/scripts.pory"
	waitmessage
# 55 "data/maps/NewMoonIsland_House3/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 56 "data/maps/NewMoonIsland_House3/scripts.pory"
	waitmovement 0
# 57 "data/maps/NewMoonIsland_House3/scripts.pory"
	fadedefaultbgm
# 58 "data/maps/NewMoonIsland_House3/scripts.pory"
	release
	end


NewMoonIsland_House3_EventScript_Poobles::
# 63 "data/maps/NewMoonIsland_House3/scripts.pory"
	lock
# 64 "data/maps/NewMoonIsland_House3/scripts.pory"
	faceplayer
# 65 "data/maps/NewMoonIsland_House3/scripts.pory"
	playmoncry SPECIES_DIGLETT_ALOLA, CRY_MODE_ENCOUNTER
# 66 "data/maps/NewMoonIsland_House3/scripts.pory"
	msgbox NewMoonIsland_House3_EventScript_Poobles_Text_0, MSGBOX_DEFAULT
# 67 "data/maps/NewMoonIsland_House3/scripts.pory"
	waitmoncry
# 68 "data/maps/NewMoonIsland_House3/scripts.pory"
	release
	end


NewMoonIsland_House3_EventScript_Aria::
# 73 "data/maps/NewMoonIsland_House3/scripts.pory"
	lock
# 74 "data/maps/NewMoonIsland_House3/scripts.pory"
	fadeoutbgm 0
# 75 "data/maps/NewMoonIsland_House3/scripts.pory"
	delay 24
# 76 "data/maps/NewMoonIsland_House3/scripts.pory"
	playmoncry SPECIES_ETERNATUS, CRY_MODE_NORMAL
# 77 "data/maps/NewMoonIsland_House3/scripts.pory"
	msgbox NewMoonIsland_House3_EventScript_Aria_Text_0, MSGBOX_DEFAULT
# 79 "data/maps/NewMoonIsland_House3/scripts.pory"
	waitmoncry
# 80 "data/maps/NewMoonIsland_House3/scripts.pory"
	playse SE_PIN
# 81 "data/maps/NewMoonIsland_House3/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 82 "data/maps/NewMoonIsland_House3/scripts.pory"
	waitmovement 4
# 83 "data/maps/NewMoonIsland_House3/scripts.pory"
	waitse
# 84 "data/maps/NewMoonIsland_House3/scripts.pory"
	faceplayer
# 87 "data/maps/NewMoonIsland_House3/scripts.pory"
	playmoncry SPECIES_TERAPAGOS, CRY_MODE_NORMAL
# 88 "data/maps/NewMoonIsland_House3/scripts.pory"
	msgbox NewMoonIsland_House3_EventScript_Aria_Text_1, MSGBOX_DEFAULT
# 89 "data/maps/NewMoonIsland_House3/scripts.pory"
	waitmoncry
# 90 "data/maps/NewMoonIsland_House3/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 91 "data/maps/NewMoonIsland_House3/scripts.pory"
	waitmovement 4
# 92 "data/maps/NewMoonIsland_House3/scripts.pory"
	fadeinbgm 0
# 93 "data/maps/NewMoonIsland_House3/scripts.pory"
	release
	end


NewMoonIsland_House3_EventScript_Misa_Text_0:
# 20 "data/maps/NewMoonIsland_House3/scripts.pory"
	.string "{PLAYER}, it's your turn to tuck mommy\n into bed now.$"

NewMoonIsland_House3_EventScript_Gentleman_Text_0:
# 29 "data/maps/NewMoonIsland_House3/scripts.pory"
	.string "{PLAYER}!\n LISTEN TO ME!\p CLOSE THE GAME! NOW!\n IT'S THE ONLY WAY TO ESCAPE! HURRY!$"

NewMoonIsland_House3_EventScript_Woman_Text_0:
# 37 "data/maps/NewMoonIsland_House3/scripts.pory"
	.string "{PLAYER}?\n {PLAYER}?\p {PLAYER}?\n PLEASE… WAKE UP…$"

NewMoonIsland_House3_EventScript_Poobles_Text_0:
# 66 "data/maps/NewMoonIsland_House3/scripts.pory"
	.string "POOOOOOOOOOOOOOOBLES!$"

NewMoonIsland_House3_EventScript_Aria_Text_0:
# 77 "data/maps/NewMoonIsland_House3/scripts.pory"
	.string "ARGH! AAAAAARGH!\n AAAUUAUUAAAUGH!$"

NewMoonIsland_House3_EventScript_Aria_Text_1:
# 88 "data/maps/NewMoonIsland_House3/scripts.pory"
	.string "MA-AH!$"

NewMoonIsland_House3_Text_James::
# 97 "data/maps/NewMoonIsland_House3/scripts.pory"
	.string "{PLAYER}?!\n What are you doing here?\p … … … …\p I see…\n So you were also pulled into the abyss…\p There's no saving us then…\p At least now I can tell you that the\n other me, the one you battled at\l EVER GRANDE CITY, is a fake…\p If we ever get out of here…\n DON'T ever trust him.$"

NewMoonIsland_House3_Text_Momo::
# 111 "data/maps/NewMoonIsland_House3/scripts.pory"
	.string "…\n …\l …\p BARK BARK RUGF RUGG FHHHHERGRGRGRRRR\n GRRRRRRRR\p AAAAAARAAAAAAAA AAAAA GRE\n RGRERRRRR GRRR\p HRHEHEHEGRGRGRGRGR\n GRGRGRGRGRGR\p HSISSSSS HISSSSSS BITE\n BITE SNARL SNARL\p sniff sniff… augh pllbthth\n GRRRRRRRRR…$"
