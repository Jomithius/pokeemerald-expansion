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
	trainerbattle_single TRAINER_TONY_1, Route107_Text_TonyIntro, Route107_Text_TonyDefeated
# 11 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_TonyPostBattle, MSGBOX_DEFAULT
# 12 "data/maps/Route107/scripts.pory"
	release
# 13 "data/maps/Route107/scripts.pory"
	end
# 14 "data/maps/Route107/scripts.pory"
@ Unused
# 15 "data/maps/Route107/scripts.pory"
Route107_EventScript_TonyRegisterMatchCallAfterBattle::
# 16 "data/maps/Route107/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 17 "data/maps/Route107/scripts.pory"
	waitmovement 0
# 18 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_TonyRegister, MSGBOX_DEFAULT
# 19 "data/maps/Route107/scripts.pory"
	register_matchcall TRAINER_TONY_1
# 20 "data/maps/Route107/scripts.pory"
	release
# 21 "data/maps/Route107/scripts.pory"
	end
# 22 "data/maps/Route107/scripts.pory"
@ Unused
# 23 "data/maps/Route107/scripts.pory"
Route107_EventScript_TonyRematch::
# 24 "data/maps/Route107/scripts.pory"
	trainerbattle_rematch TRAINER_TONY_1, Route107_Text_TonyRematchIntro, Route107_Text_TonyRematchDefeated
# 25 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_TonyRematchPostBattle, MSGBOX_AUTOCLOSE
# 26 "data/maps/Route107/scripts.pory"
	end
# 27 "data/maps/Route107/scripts.pory"

# 28 "data/maps/Route107/scripts.pory"
Route107_EventScript_Denise::
# 29 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_DENISE, Route107_Text_DeniseIntro, Route107_Text_DeniseDefeated
# 30 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_DenisePostBattle, MSGBOX_AUTOCLOSE
# 31 "data/maps/Route107/scripts.pory"
	end
# 32 "data/maps/Route107/scripts.pory"

# 33 "data/maps/Route107/scripts.pory"
Route107_EventScript_Beth::
# 34 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_BETH, Route107_Text_BethIntro, Route107_Text_BethDefeated
# 35 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_BethPostBattle, MSGBOX_AUTOCLOSE
# 36 "data/maps/Route107/scripts.pory"
	end
# 37 "data/maps/Route107/scripts.pory"

# 38 "data/maps/Route107/scripts.pory"
Route107_EventScript_Lisa::
# 39 "data/maps/Route107/scripts.pory"
	trainerbattle_double TRAINER_LISA_AND_RAY, Route107_Text_LisaIntro, Route107_Text_LisaDefeated, Route107_Text_LisaNotEnoughPokemon
# 40 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
# 41 "data/maps/Route107/scripts.pory"
	end
# 42 "data/maps/Route107/scripts.pory"

# 43 "data/maps/Route107/scripts.pory"
Route107_EventScript_Ray::
# 44 "data/maps/Route107/scripts.pory"
	trainerbattle_double TRAINER_LISA_AND_RAY, Route107_Text_RayIntro, Route107_Text_RayDefeated, Route107_Text_RayNotEnoughPokemon
# 45 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_RayPostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/Route107/scripts.pory"
	end
# 47 "data/maps/Route107/scripts.pory"

# 48 "data/maps/Route107/scripts.pory"
Route107_EventScript_Camron::
# 49 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_CAMRON, Route107_Text_CamronIntro, Route107_Text_CamronDefeated
# 50 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_CamronPostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/Route107/scripts.pory"
	end
