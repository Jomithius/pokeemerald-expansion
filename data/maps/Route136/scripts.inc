Route136_MapScripts::
# 4 "data/maps/Route136/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route136_OnTransition
# 5 "data/maps/Route136/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route136_OnResume
	.byte 0


Route136_OnResume::
# 10 "data/maps/Route136/scripts.pory"
	call_if_eq VAR_ROUTE_136_STATE, 1, Route136_RemoveKlawf
	end


Route136_OnTransition::
# 15 "data/maps/Route136/scripts.pory"
	setflag FLAG_SYS_DYNAMIC_LEVELS
# 16 "data/maps/Route136/scripts.pory"
	call Route136_CheckEnterFromMountain
	end


Route136_CheckEnterFromMountain::
# 21 "data/maps/Route136/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 22 "data/maps/Route136/scripts.pory"
	goto_if_le VAR_TEMP_1, 8, Route136_EnterFromMountain
	return


Route136_EnterFromMountain::
# 27 "data/maps/Route136/scripts.pory"
	setweather WEATHER_SHADE
# 28 "data/maps/Route136/scripts.pory"
	doweather
	end


Route136_RemoveKlawf::
# 33 "data/maps/Route136/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 34 "data/maps/Route136/scripts.pory"
	compare VAR_LAST_TALKED, 10
	goto_if_eq Route136_RemoveKlawf_4
Route136_RemoveKlawf_3:
# 39 "data/maps/Route136/scripts.pory"
	goto Common_EventScript_NopReturn
Route136_RemoveKlawf_1:
	end

Route136_RemoveKlawf_2:
# 35 "data/maps/Route136/scripts.pory"
	removeobject VAR_LAST_TALKED
# 36 "data/maps/Route136/scripts.pory"
	setflag FLAG_DEFEATED_KLAWF
	goto Route136_RemoveKlawf_1

Route136_RemoveKlawf_4:
# 34 "data/maps/Route136/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route136_RemoveKlawf_2
	goto Route136_RemoveKlawf_3


Route136_EventScript_Klawf::
# 45 "data/maps/Route136/scripts.pory"
	lock
# 46 "data/maps/Route136/scripts.pory"
	playmoncry SPECIES_KLAWF, CRY_MODE_WEAK
# 47 "data/maps/Route136/scripts.pory"
	waitmoncry
# 48 "data/maps/Route136/scripts.pory"
	checkitem ITEM_POKE_FLUTE
# 49 "data/maps/Route136/scripts.pory"
	goto_if_ne VAR_RESULT, TRUE, Route136_EventScript_KlawfWontMove
# 50 "data/maps/Route136/scripts.pory"
	msgbox Route136_EventScript_Klawf_Text_0, MSGBOX_YESNO
# 52 "data/maps/Route136/scripts.pory"
	waitmessage
# 53 "data/maps/Route136/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route136_EventScript_KlawfBattle
# 54 "data/maps/Route136/scripts.pory"
	release
	end


Route136_EventScript_KlawfWontMove::
# 59 "data/maps/Route136/scripts.pory"
	lock
# 60 "data/maps/Route136/scripts.pory"
	msgbox Route136_EventScript_KlawfWontMove_Text_0, MSGBOX_AUTOCLOSE
# 63 "data/maps/Route136/scripts.pory"
	waitmessage
# 64 "data/maps/Route136/scripts.pory"
	release
	end


Route136_EventScript_KlawfBattle::
# 69 "data/maps/Route136/scripts.pory"
	lock
# 70 "data/maps/Route136/scripts.pory"
	setvar VAR_ROUTE_136_STATE, 1
# 71 "data/maps/Route136/scripts.pory"
	fadenewbgm MUS_NONE
# 72 "data/maps/Route136/scripts.pory"
	msgbox Route136_EventScript_KlawfBattle_Text_0, MSGBOX_DEFAULT
# 73 "data/maps/Route136/scripts.pory"
	waitmessage
# 74 "data/maps/Route136/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 75 "data/maps/Route136/scripts.pory"
	delay 450
# 76 "data/maps/Route136/scripts.pory"
	fadedefaultbgm
# 77 "data/maps/Route136/scripts.pory"
	delay 30
# 78 "data/maps/Route136/scripts.pory"
	playse SE_PIN
# 79 "data/maps/Route136/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 80 "data/maps/Route136/scripts.pory"
	waitmovement 0
# 81 "data/maps/Route136/scripts.pory"
	waitse
# 82 "data/maps/Route136/scripts.pory"
	applymovement 10, Common_Movement_WalkInPlaceDown
# 83 "data/maps/Route136/scripts.pory"
	waitmovement 0
# 84 "data/maps/Route136/scripts.pory"
	msgbox Route136_EventScript_KlawfBattle_Text_1, MSGBOX_AUTOCLOSE
# 86 "data/maps/Route136/scripts.pory"
	waitmessage
# 87 "data/maps/Route136/scripts.pory"
	setwildbattle SPECIES_KLAWF, 85
# 88 "data/maps/Route136/scripts.pory"
	dowildbattle
# 89 "data/maps/Route136/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 90 "data/maps/Route136/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route136_EventScript_KlawfBattle_2
# 90 "data/maps/Route136/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route136_EventScript_KlawfBattle_2
# 100 "data/maps/Route136/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route136_EventScript_KlawfBattle_3
Route136_EventScript_KlawfBattle_1:
# 110 "data/maps/Route136/scripts.pory"
	setvar VAR_ROUTE_136_STATE, 2
# 111 "data/maps/Route136/scripts.pory"
	release
	end

Route136_EventScript_KlawfBattle_2:
# 91 "data/maps/Route136/scripts.pory"
	playmoncry SPECIES_KLAWF, CRY_MODE_ENCOUNTER
# 92 "data/maps/Route136/scripts.pory"
	waitmoncry
# 93 "data/maps/Route136/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 94 "data/maps/Route136/scripts.pory"
	removeobject 10
# 95 "data/maps/Route136/scripts.pory"
	setflag FLAG_DEFEATED_KLAWF
# 96 "data/maps/Route136/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 97 "data/maps/Route136/scripts.pory"
	msgbox Route136_EventScript_KlawfBattle_Text_2, MSGBOX_AUTOCLOSE
# 98 "data/maps/Route136/scripts.pory"
	waitmessage
	goto Route136_EventScript_KlawfBattle_1

Route136_EventScript_KlawfBattle_3:
# 101 "data/maps/Route136/scripts.pory"
	playmoncry SPECIES_KLAWF, CRY_MODE_FAINT
# 102 "data/maps/Route136/scripts.pory"
	waitmoncry
# 103 "data/maps/Route136/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 104 "data/maps/Route136/scripts.pory"
	removeobject 10
# 105 "data/maps/Route136/scripts.pory"
	setflag FLAG_DEFEATED_KLAWF
# 106 "data/maps/Route136/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 107 "data/maps/Route136/scripts.pory"
	msgbox Route136_EventScript_KlawfBattle_Text_2, MSGBOX_AUTOCLOSE
# 108 "data/maps/Route136/scripts.pory"
	waitmessage
	goto Route136_EventScript_KlawfBattle_1


Route136_EventScript_Expert_M::
# 116 "data/maps/Route136/scripts.pory"
	msgbox Route136_EventScript_Expert_M_Text_0, MSGBOX_NPC
	end


Route136_EventScript_HikerKlawf::
# 126 "data/maps/Route136/scripts.pory"
	lock
# 127 "data/maps/Route136/scripts.pory"
	faceplayer
# 128 "data/maps/Route136/scripts.pory"
	goto_if_unset FLAG_DEFEATED_KLAWF, Route136_EventScript_HikerKlawf_2
# 135 "data/maps/Route136/scripts.pory"
	msgbox Route136_EventScript_HikerKlawf_Text_1, MSGBOX_AUTOCLOSE
Route136_EventScript_HikerKlawf_1:
# 143 "data/maps/Route136/scripts.pory"
	waitmessage
# 144 "data/maps/Route136/scripts.pory"
	release
	end

Route136_EventScript_HikerKlawf_2:
# 129 "data/maps/Route136/scripts.pory"
	msgbox Route136_EventScript_HikerKlawf_Text_0, MSGBOX_AUTOCLOSE
	goto Route136_EventScript_HikerKlawf_1


Route136_EventScript_Newton::
# 149 "data/maps/Route136/scripts.pory"
	trainerbattle_single TRAINER_NEWTON, Route136_EventScript_Newton_Text_0, Route136_EventScript_Newton_Text_1
# 150 "data/maps/Route136/scripts.pory"
	msgbox Route136_EventScript_Newton_Text_2, MSGBOX_NPC
	end


Route136_EventScript_Dewton::
# 157 "data/maps/Route136/scripts.pory"
	trainerbattle_single TRAINER_DEWTON, Route136_EventScript_Dewton_Text_0, Route136_EventScript_Dewton_Text_1
# 158 "data/maps/Route136/scripts.pory"
	msgbox Route136_EventScript_Dewton_Text_2, MSGBOX_NPC
	end


Route136_EventScript_Johnithin::
# 165 "data/maps/Route136/scripts.pory"
	trainerbattle_single TRAINER_JOHNITHIN, Route136_EventScript_Johnithin_Text_0, Route136_EventScript_Johnithin_Text_1
# 166 "data/maps/Route136/scripts.pory"
	msgbox Route136_EventScript_Johnithin_Text_2, MSGBOX_NPC
	end


Route136_EventScript_Bobby::
# 174 "data/maps/Route136/scripts.pory"
	trainerbattle_single TRAINER_BOBBY, Route136_EventScript_Bobby_Text_0, Route136_EventScript_Bobby_Text_1
# 175 "data/maps/Route136/scripts.pory"
	msgbox Route136_EventScript_Bobby_Text_2, MSGBOX_NPC
	end


Route136_EventScript_Tobias::
# 183 "data/maps/Route136/scripts.pory"
	trainerbattle_single TRAINER_TOBIAS, Route136_EventScript_Tobias_Text_0, Route136_EventScript_Tobias_Text_1
# 184 "data/maps/Route136/scripts.pory"
	msgbox Route136_EventScript_Tobias_Text_2, MSGBOX_NPC
	end


Route136_EventScript_Bentley::
# 190 "data/maps/Route136/scripts.pory"
	trainerbattle_single TRAINER_BENTLEY, Route136_EventScript_Bentley_Text_0, Route136_EventScript_Bentley_Text_1
# 191 "data/maps/Route136/scripts.pory"
	msgbox Route136_EventScript_Bentley_Text_2, MSGBOX_NPC
	end


Route136_EventScript_Klawf_Text_0:
# 50 "data/maps/Route136/scripts.pory"
	.string "The KLAWF is in a deep sleep.\p Would you like to use the POKé FLUTE?$"

Route136_EventScript_KlawfWontMove_Text_0:
# 60 "data/maps/Route136/scripts.pory"
	.string "The KLAWF is in a deep sleep.\p Doesn't look like it's waking up\n anytime soon.$"

Route136_EventScript_KlawfBattle_Text_0:
# 72 "data/maps/Route136/scripts.pory"
	.string "{PLAYER} begins playing the POKé FLUTE…$"

Route136_EventScript_KlawfBattle_Text_1:
# 84 "data/maps/Route136/scripts.pory"
	.string "The KLAWF woke up!\n In a rage, it attacks!$"

Route136_EventScript_KlawfBattle_Text_2:
# 97 "data/maps/Route136/scripts.pory"
	.string "The KLAWF ran off somewhere…$"

Route136_EventScript_Expert_M_Text_0:
# 116 "data/maps/Route136/scripts.pory"
	.string "There's a city at the top of AZURE\n MOUNTAIN.\p It's snowy, but not that cold because\n of the geothermal energy.\p I don't really get it, but it's\n interesting.$"

Route136_EventScript_HikerKlawf_Text_0:
# 129 "data/maps/Route136/scripts.pory"
	.string "There's a stupid KLAWF blocking\n the tunnel entrance!\p I tried hitting it to wake it up,\n but it's shell's too hard.$"

Route136_EventScript_HikerKlawf_Text_1:
# 135 "data/maps/Route136/scripts.pory"
	.string "The KLAWF is finally gone!\p Now I can start my hike up the\n mountain.\p I'll go after I take a break.\n … Maybe a nap too.\p The TRAINERS in there are super\n scary.$"

Route136_EventScript_Newton_Text_0:
# 149 "data/maps/Route136/scripts.pory"
	.string "This is a prime spot!$"

Route136_EventScript_Newton_Text_1:
# 149 "data/maps/Route136/scripts.pory"
	.string "I still won't move!$"

Route136_EventScript_Newton_Text_2:
# 150 "data/maps/Route136/scripts.pory"
	.string "This is a huge waterfall.\p There are tons of MAGIKARP that try\n to swim up it each day.$"

Route136_EventScript_Dewton_Text_0:
# 157 "data/maps/Route136/scripts.pory"
	.string "All I've caught is MAGIKARP here!$"

Route136_EventScript_Dewton_Text_1:
# 157 "data/maps/Route136/scripts.pory"
	.string "I should go back to my old spot.$"

Route136_EventScript_Dewton_Text_2:
# 158 "data/maps/Route136/scripts.pory"
	.string "I heard there's a new cave that\n opened up on ROUTE 137.\p There must be rare POKéMON in there.$"

Route136_EventScript_Johnithin_Text_0:
# 165 "data/maps/Route136/scripts.pory"
	.string "I've trained so much that I've\ngotten so skinny.$"

Route136_EventScript_Johnithin_Text_1:
# 165 "data/maps/Route136/scripts.pory"
	.string "I'm so fricking skinny…$"

Route136_EventScript_Johnithin_Text_2:
# 166 "data/maps/Route136/scripts.pory"
	.string "A long time ago I used to train\n in BALDESIA.\p You should visit the dojo out there if\n you ever have the chance.$"

Route136_EventScript_Bobby_Text_0:
# 174 "data/maps/Route136/scripts.pory"
	.string "I want to hike up the mountain,\nbut a POKéMON is blocking the entrance.$"

Route136_EventScript_Bobby_Text_1:
# 174 "data/maps/Route136/scripts.pory"
	.string "Oh well.$"

Route136_EventScript_Bobby_Text_2:
# 175 "data/maps/Route136/scripts.pory"
	.string "I guess I can wait to make\n the hike.\p There's a lot of scary TRAINERS in\n there either way.$"

Route136_EventScript_Tobias_Text_0:
# 183 "data/maps/Route136/scripts.pory"
	.string "Up ahead is the tallest mountain\nin HOENN!$"

Route136_EventScript_Tobias_Text_1:
# 183 "data/maps/Route136/scripts.pory"
	.string "I'm afraid of tall things.$"

Route136_EventScript_Tobias_Text_2:
# 184 "data/maps/Route136/scripts.pory"
	.string "The TRAINERS in AZURE MOUNTAIN\n are seriously SUPER strong.$"

Route136_EventScript_Bentley_Text_0:
# 190 "data/maps/Route136/scripts.pory"
	.string "I can feel it…\nMy story starts now!$"

Route136_EventScript_Bentley_Text_1:
# 190 "data/maps/Route136/scripts.pory"
	.string "Maybe I'm not the main character…$"

Route136_EventScript_Bentley_Text_2:
# 191 "data/maps/Route136/scripts.pory"
	.string "AZURE MOUNTAIN has some crazy\n strong POKéMON and TRAINERS.$"
