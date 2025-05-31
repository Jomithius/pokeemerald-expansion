# 1 "data/maps/Route107/scripts.pory"
Route107_MapScripts::
# 2 "data/maps/Route107/scripts.pory"
	.byte 0
# 3 "data/maps/Route107/scripts.pory"

# 4 "data/maps/Route107/scripts.pory"
Route107_EventScript_Darrin::
# 5 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_DARRIN, Route107_Text_DarrinIntro, Route107_Text_DarrinDefeated
# 6 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_DarrinPostBattle, MSGBOX_AUTOCLOSE
# 7 "data/maps/Route107/scripts.pory"
	end
# 8 "data/maps/Route107/scripts.pory"

# 9 "data/maps/Route107/scripts.pory"
Route107_EventScript_Tony::
# 10 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_TONY_1, Route107_Text_TonyIntro, Route107_Text_TonyDefeated, Route107_EventScript_TonyRegisterMatchCallAfterBattle
# 11 "data/maps/Route107/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 12 "data/maps/Route107/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route107_EventScript_TonyRematch
# 13 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_TonyPostBattle, MSGBOX_DEFAULT
# 14 "data/maps/Route107/scripts.pory"
	release
# 15 "data/maps/Route107/scripts.pory"
	end
# 16 "data/maps/Route107/scripts.pory"

# 17 "data/maps/Route107/scripts.pory"
Route107_EventScript_TonyRegisterMatchCallAfterBattle::
# 18 "data/maps/Route107/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 19 "data/maps/Route107/scripts.pory"
	waitmovement 0
# 20 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_TonyRegister, MSGBOX_DEFAULT
# 21 "data/maps/Route107/scripts.pory"
	register_matchcall TRAINER_TONY_1
# 22 "data/maps/Route107/scripts.pory"
	release
# 23 "data/maps/Route107/scripts.pory"
	end
# 24 "data/maps/Route107/scripts.pory"

# 25 "data/maps/Route107/scripts.pory"
Route107_EventScript_TonyRematch::
# 26 "data/maps/Route107/scripts.pory"
	trainerbattle_rematch TRAINER_TONY_1, Route107_Text_TonyRematchIntro, Route107_Text_TonyRematchDefeated
# 27 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_TonyRematchPostBattle, MSGBOX_AUTOCLOSE
# 28 "data/maps/Route107/scripts.pory"
	end
# 29 "data/maps/Route107/scripts.pory"

# 30 "data/maps/Route107/scripts.pory"
Route107_EventScript_Denise::
# 31 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_DENISE, Route107_Text_DeniseIntro, Route107_Text_DeniseDefeated
# 32 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_DenisePostBattle, MSGBOX_AUTOCLOSE
# 33 "data/maps/Route107/scripts.pory"
	end
# 34 "data/maps/Route107/scripts.pory"

# 35 "data/maps/Route107/scripts.pory"
Route107_EventScript_Beth::
# 36 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_BETH, Route107_Text_BethIntro, Route107_Text_BethDefeated
# 37 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_BethPostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/Route107/scripts.pory"
	end
# 39 "data/maps/Route107/scripts.pory"

# 40 "data/maps/Route107/scripts.pory"
Route107_EventScript_Lisa::
# 41 "data/maps/Route107/scripts.pory"
	trainerbattle_double TRAINER_LISA_AND_RAY, Route107_Text_LisaIntro, Route107_Text_LisaDefeated, Route107_Text_LisaNotEnoughPokemon
# 42 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
# 43 "data/maps/Route107/scripts.pory"
	end
# 44 "data/maps/Route107/scripts.pory"

# 45 "data/maps/Route107/scripts.pory"
Route107_EventScript_Ray::
# 46 "data/maps/Route107/scripts.pory"
	trainerbattle_double TRAINER_LISA_AND_RAY, Route107_Text_RayIntro, Route107_Text_RayDefeated, Route107_Text_RayNotEnoughPokemon
# 47 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_RayPostBattle, MSGBOX_AUTOCLOSE
# 48 "data/maps/Route107/scripts.pory"
	end
# 49 "data/maps/Route107/scripts.pory"

# 50 "data/maps/Route107/scripts.pory"
Route107_EventScript_Camron::
# 51 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_CAMRON, Route107_Text_CamronIntro, Route107_Text_CamronDefeated
# 52 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_CamronPostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/Route107/scripts.pory"
	end
