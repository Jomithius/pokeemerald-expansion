# 1 "data/maps/Route106/scripts.pory"
Route106_MapScripts::
# 2 "data/maps/Route106/scripts.pory"
	.byte 0
# 3 "data/maps/Route106/scripts.pory"

# 4 "data/maps/Route106/scripts.pory"
Route106_EventScript_TrainerTipsSign::
# 5 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_TrainerTips, MSGBOX_SIGN
# 6 "data/maps/Route106/scripts.pory"
	end
# 7 "data/maps/Route106/scripts.pory"

# 8 "data/maps/Route106/scripts.pory"
Route106_EventScript_Douglas::
# 9 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_DOUGLAS, Route106_Text_DouglasIntro, Route106_Text_DouglasDefeated
# 10 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_DouglasPostBattle, MSGBOX_AUTOCLOSE
# 11 "data/maps/Route106/scripts.pory"
	end
# 12 "data/maps/Route106/scripts.pory"

# 13 "data/maps/Route106/scripts.pory"
Route106_EventScript_Kyla::
# 14 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_KYLA, Route106_Text_KylaIntro, Route106_Text_KylaDefeated
# 15 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_KylaPostBattle, MSGBOX_AUTOCLOSE
# 16 "data/maps/Route106/scripts.pory"
	end
# 17 "data/maps/Route106/scripts.pory"

# 18 "data/maps/Route106/scripts.pory"
Route106_EventScript_Elliot::
# 19 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_ELLIOT_1, Route106_Text_ElliotIntro, Route106_Text_ElliotDefeated, Route106_EventScript_ElliotRegisterMatchCallAfterBattle
# 20 "data/maps/Route106/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 21 "data/maps/Route106/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route106_EventScript_ElliotRematch
# 22 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotPostBattle, MSGBOX_DEFAULT
# 23 "data/maps/Route106/scripts.pory"
	release
# 24 "data/maps/Route106/scripts.pory"
	end
# 25 "data/maps/Route106/scripts.pory"

# 26 "data/maps/Route106/scripts.pory"
Route106_EventScript_ElliotRegisterMatchCallAfterBattle::
# 27 "data/maps/Route106/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 28 "data/maps/Route106/scripts.pory"
	waitmovement 0
# 29 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotRegister, MSGBOX_DEFAULT
# 30 "data/maps/Route106/scripts.pory"
	register_matchcall TRAINER_ELLIOT_1
# 31 "data/maps/Route106/scripts.pory"
	release
# 32 "data/maps/Route106/scripts.pory"
	end
# 33 "data/maps/Route106/scripts.pory"

# 34 "data/maps/Route106/scripts.pory"
Route106_EventScript_ElliotRematch::
# 35 "data/maps/Route106/scripts.pory"
	trainerbattle_rematch TRAINER_ELLIOT_1, Route106_Text_ElliotRematchIntro, Route106_Text_ElliotRematchDefeated
# 36 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotRematchPostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/Route106/scripts.pory"
	end
# 38 "data/maps/Route106/scripts.pory"

# 39 "data/maps/Route106/scripts.pory"
Route106_EventScript_Ned::
# 40 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_NED, Route106_Text_NedIntro, Route106_Text_NedDefeated
# 41 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_NedPostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/Route106/scripts.pory"
	end
# 43 "data/maps/Route106/scripts.pory"

# 44 "data/maps/Route106/scripts.pory"
Route106_Text_TrainerTips:
# 45 "data/maps/Route106/scripts.pory"
	.string "TRAINER TIPS\p"
# 46 "data/maps/Route106/scripts.pory"
	.string "Advice on catching POKéMON with a ROD:\n"
# 47 "data/maps/Route106/scripts.pory"
	.string "Press the A Button if you get a bite.$"

Route106_EventScript_Wishiwashi::
# 52 "data/maps/Route106/scripts.pory"
	lock
# 53 "data/maps/Route106/scripts.pory"
	faceplayer
# 54 "data/maps/Route106/scripts.pory"
	playmoncry SPECIES_WISHIWASHI, CRY_MODE_ENCOUNTER
# 55 "data/maps/Route106/scripts.pory"
	delay 40
# 56 "data/maps/Route106/scripts.pory"
	waitmoncry
# 57 "data/maps/Route106/scripts.pory"
	setwildbattle SPECIES_WISHIWASHI_SOLO, 20, ITEM_MYSTIC_WATER
# 58 "data/maps/Route106/scripts.pory"
	dowildbattle
# 59 "data/maps/Route106/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 60 "data/maps/Route106/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route106_EventScript_Wishiwashi_2
# 65 "data/maps/Route106/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route106_EventScript_Wishiwashi_3
# 73 "data/maps/Route106/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route106_EventScript_Wishiwashi_4
# 81 "data/maps/Route106/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route106_EventScript_Wishiwashi_5
Route106_EventScript_Wishiwashi_1:
# 89 "data/maps/Route106/scripts.pory"
	waitmessage
# 90 "data/maps/Route106/scripts.pory"
	release
	end

Route106_EventScript_Wishiwashi_2:
# 61 "data/maps/Route106/scripts.pory"
	fadescreen FADE_TO_BLACK
# 62 "data/maps/Route106/scripts.pory"
	removeobject 5
# 63 "data/maps/Route106/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto Route106_EventScript_Wishiwashi_1

Route106_EventScript_Wishiwashi_3:
# 66 "data/maps/Route106/scripts.pory"
	playmoncry SPECIES_WISHIWASHI, CRY_MODE_FAINT
# 67 "data/maps/Route106/scripts.pory"
	waitmoncry
# 68 "data/maps/Route106/scripts.pory"
	fadescreen FADE_TO_BLACK
# 69 "data/maps/Route106/scripts.pory"
	removeobject 5
# 70 "data/maps/Route106/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
# 71 "data/maps/Route106/scripts.pory"
	msgbox Route106_EventScript_Wishiwashi_Text_0, MSGBOX_AUTOCLOSE
	goto Route106_EventScript_Wishiwashi_1

Route106_EventScript_Wishiwashi_4:
# 74 "data/maps/Route106/scripts.pory"
	playmoncry SPECIES_WISHIWASHI, CRY_MODE_ENCOUNTER
# 75 "data/maps/Route106/scripts.pory"
	waitmoncry
# 76 "data/maps/Route106/scripts.pory"
	fadescreen FADE_TO_BLACK
# 77 "data/maps/Route106/scripts.pory"
	removeobject 5
# 78 "data/maps/Route106/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
# 79 "data/maps/Route106/scripts.pory"
	msgbox Route106_EventScript_Wishiwashi_Text_0, MSGBOX_AUTOCLOSE
	goto Route106_EventScript_Wishiwashi_1

Route106_EventScript_Wishiwashi_5:
# 82 "data/maps/Route106/scripts.pory"
	playmoncry SPECIES_WISHIWASHI, CRY_MODE_ENCOUNTER
# 83 "data/maps/Route106/scripts.pory"
	waitmoncry
# 84 "data/maps/Route106/scripts.pory"
	fadescreen FADE_TO_BLACK
# 85 "data/maps/Route106/scripts.pory"
	removeobject 5
# 86 "data/maps/Route106/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
# 87 "data/maps/Route106/scripts.pory"
	msgbox Route106_EventScript_Wishiwashi_Text_0, MSGBOX_AUTOCLOSE
	goto Route106_EventScript_Wishiwashi_1


Route106_EventScript_Wishiwashi_Text_0:
# 71 "data/maps/Route106/scripts.pory"
	.string "The WISHIWASHI disappeared…$"
