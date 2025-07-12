Route136_MapScripts::
# 4 "data/maps/Route136/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route136_OnResume
	.byte 0


Route136_OnResume::
# 8 "data/maps/Route136/scripts.pory"
	call_if_eq VAR_ROUTE_136_STATE, 1, Route136_RemoveKlawf
	end


Route136_RemoveKlawf::
# 13 "data/maps/Route136/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 14 "data/maps/Route136/scripts.pory"
	compare VAR_LAST_TALKED, 12
	goto_if_eq Route136_RemoveKlawf_4
Route136_RemoveKlawf_3:
# 19 "data/maps/Route136/scripts.pory"
	goto Common_EventScript_NopReturn
Route136_RemoveKlawf_1:
	end

Route136_RemoveKlawf_2:
# 15 "data/maps/Route136/scripts.pory"
	removeobject VAR_LAST_TALKED
# 16 "data/maps/Route136/scripts.pory"
	setflag FLAG_DEFEATED_KLAWF
	goto Route136_RemoveKlawf_1

Route136_RemoveKlawf_4:
# 14 "data/maps/Route136/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route136_RemoveKlawf_2
	goto Route136_RemoveKlawf_3


Route136_EventScript_Klawf::
# 25 "data/maps/Route136/scripts.pory"
	lock
# 26 "data/maps/Route136/scripts.pory"
	playmoncry SPECIES_KLAWF, CRY_MODE_WEAK
# 27 "data/maps/Route136/scripts.pory"
	waitmoncry
# 28 "data/maps/Route136/scripts.pory"
	checkitem ITEM_POKE_FLUTE
# 29 "data/maps/Route136/scripts.pory"
	goto_if_ne VAR_RESULT, TRUE, Route136_EventScript_KlawfWontMove
# 30 "data/maps/Route136/scripts.pory"
	msgbox Route136_EventScript_Klawf_Text_0, MSGBOX_YESNO
# 32 "data/maps/Route136/scripts.pory"
	waitmessage
# 33 "data/maps/Route136/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route136_EventScript_KlawfBattle
# 34 "data/maps/Route136/scripts.pory"
	release
	end


Route136_EventScript_KlawfWontMove::
# 39 "data/maps/Route136/scripts.pory"
	lock
# 40 "data/maps/Route136/scripts.pory"
	msgbox Route136_EventScript_KlawfWontMove_Text_0, MSGBOX_AUTOCLOSE
# 43 "data/maps/Route136/scripts.pory"
	waitmessage
# 44 "data/maps/Route136/scripts.pory"
	release
	end


Route136_EventScript_KlawfBattle::
# 49 "data/maps/Route136/scripts.pory"
	lock
# 50 "data/maps/Route136/scripts.pory"
	setvar VAR_ROUTE_136_STATE, 1
# 51 "data/maps/Route136/scripts.pory"
	fadenewbgm MUS_NONE
# 52 "data/maps/Route136/scripts.pory"
	msgbox Route136_EventScript_KlawfBattle_Text_0, MSGBOX_DEFAULT
# 53 "data/maps/Route136/scripts.pory"
	waitmessage
# 54 "data/maps/Route136/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 55 "data/maps/Route136/scripts.pory"
	delay 450
# 56 "data/maps/Route136/scripts.pory"
	fadedefaultbgm
# 57 "data/maps/Route136/scripts.pory"
	delay 30
# 58 "data/maps/Route136/scripts.pory"
	playse SE_PIN
# 59 "data/maps/Route136/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 60 "data/maps/Route136/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route136/scripts.pory"
	waitse
# 62 "data/maps/Route136/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 63 "data/maps/Route136/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route136/scripts.pory"
	msgbox Route136_EventScript_KlawfBattle_Text_1, MSGBOX_AUTOCLOSE
# 66 "data/maps/Route136/scripts.pory"
	waitmessage
# 67 "data/maps/Route136/scripts.pory"
	setwildbattle SPECIES_KLAWF, 75
# 68 "data/maps/Route136/scripts.pory"
	dowildbattle
# 69 "data/maps/Route136/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 70 "data/maps/Route136/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route136_EventScript_KlawfBattle_2
# 70 "data/maps/Route136/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route136_EventScript_KlawfBattle_2
# 80 "data/maps/Route136/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route136_EventScript_KlawfBattle_3
Route136_EventScript_KlawfBattle_1:
# 90 "data/maps/Route136/scripts.pory"
	setvar VAR_ROUTE_136_STATE, 2
# 91 "data/maps/Route136/scripts.pory"
	release
	end

Route136_EventScript_KlawfBattle_2:
# 71 "data/maps/Route136/scripts.pory"
	playmoncry SPECIES_KLAWF, CRY_MODE_ENCOUNTER
# 72 "data/maps/Route136/scripts.pory"
	waitmoncry
# 73 "data/maps/Route136/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 74 "data/maps/Route136/scripts.pory"
	removeobject 12
# 75 "data/maps/Route136/scripts.pory"
	setflag FLAG_DEFEATED_KLAWF
# 76 "data/maps/Route136/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 77 "data/maps/Route136/scripts.pory"
	msgbox Route136_EventScript_KlawfBattle_Text_2, MSGBOX_AUTOCLOSE
# 78 "data/maps/Route136/scripts.pory"
	waitmessage
	goto Route136_EventScript_KlawfBattle_1

Route136_EventScript_KlawfBattle_3:
# 81 "data/maps/Route136/scripts.pory"
	playmoncry SPECIES_KLAWF, CRY_MODE_FAINT
# 82 "data/maps/Route136/scripts.pory"
	waitmoncry
# 83 "data/maps/Route136/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 84 "data/maps/Route136/scripts.pory"
	removeobject 12
# 85 "data/maps/Route136/scripts.pory"
	setflag FLAG_DEFEATED_KLAWF
# 86 "data/maps/Route136/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 87 "data/maps/Route136/scripts.pory"
	msgbox Route136_EventScript_KlawfBattle_Text_2, MSGBOX_AUTOCLOSE
# 88 "data/maps/Route136/scripts.pory"
	waitmessage
	goto Route136_EventScript_KlawfBattle_1


Route136_EventScript_Expert_M::
# 96 "data/maps/Route136/scripts.pory"
	msgbox Route136_EventScript_Expert_M_Text_0, MSGBOX_NPC
	end


Route136_EventScript_HikerKlawf::
# 106 "data/maps/Route136/scripts.pory"
	lock
# 107 "data/maps/Route136/scripts.pory"
	faceplayer
# 108 "data/maps/Route136/scripts.pory"
	goto_if_unset FLAG_DEFEATED_KLAWF, Route136_EventScript_HikerKlawf_2
Route136_EventScript_HikerKlawf_1:
# 115 "data/maps/Route136/scripts.pory"
	msgbox Route136_EventScript_HikerKlawf_Text_1, MSGBOX_AUTOCLOSE
# 120 "data/maps/Route136/scripts.pory"
	release
	end

Route136_EventScript_HikerKlawf_2:
# 109 "data/maps/Route136/scripts.pory"
	msgbox Route136_EventScript_HikerKlawf_Text_0, MSGBOX_AUTOCLOSE
# 113 "data/maps/Route136/scripts.pory"
	waitmessage
	goto Route136_EventScript_HikerKlawf_1


Route136_EventScript_Klawf_Text_0:
# 30 "data/maps/Route136/scripts.pory"
	.string "The KLAWF is in a deep sleep.\p Would you like to use the POKé FLUTE?$"

Route136_EventScript_KlawfWontMove_Text_0:
# 40 "data/maps/Route136/scripts.pory"
	.string "The KLAWF is in a deep sleep.\p Doesn't look like it's waking up\n anytime soon.$"

Route136_EventScript_KlawfBattle_Text_0:
# 52 "data/maps/Route136/scripts.pory"
	.string "{PLAYER} begins playing the POKé FLUTE…$"

Route136_EventScript_KlawfBattle_Text_1:
# 64 "data/maps/Route136/scripts.pory"
	.string "The KLAWF woke up!\n In a rage, it attacks!$"

Route136_EventScript_KlawfBattle_Text_2:
# 77 "data/maps/Route136/scripts.pory"
	.string "The KLAWF ran off somewhere…$"

Route136_EventScript_Expert_M_Text_0:
# 96 "data/maps/Route136/scripts.pory"
	.string "There's a city at the top of AZURE\n MOUNTAIN.\p It's snowy, but not that cold because\n of the geothermal energy.\p I don't really get it, but it's\n interesting.$"

Route136_EventScript_HikerKlawf_Text_0:
# 109 "data/maps/Route136/scripts.pory"
	.string "There's a stupid KLAWF blocking\n the tunnel entrance!\p I tried hitting it to wake it up,\n but it's shell's too hard.$"

Route136_EventScript_HikerKlawf_Text_1:
# 115 "data/maps/Route136/scripts.pory"
	.string "The KLAWF is finally gone!\n Now I can start my hike up the\l mountain.\p I'll go after I take a break.\n … Maybe a nap too.$"
