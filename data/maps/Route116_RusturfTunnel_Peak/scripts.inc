Route116_RusturfTunnel_Peak_MapScripts::
	.byte 0


Route116_RusturfTunnel_Peak_Jolteon::
# 4 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	lock
# 5 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	faceplayer
# 6 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	playmoncry SPECIES_JOLTEON, CRY_MODE_ENCOUNTER
# 7 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 20
# 8 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	release
	end


Route116_RusturfTunnel_Peak_Pumpkaboo::
# 13 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	lock
# 14 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	faceplayer
# 15 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	playmoncry SPECIES_PUMPKABOO, CRY_MODE_ENCOUNTER
# 16 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 20
# 17 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	release
	end


Route116_RusturfTunnel_Peak_Ribombee::
# 22 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	lock
# 23 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	setflag FLAG_RIBOMBEE_TOTEM
# 24 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	faceplayer
# 25 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	playmoncry SPECIES_RIBOMBEE, CRY_MODE_ENCOUNTER
# 26 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 40
# 27 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmoncry
# 28 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	setwildbattle SPECIES_RIBOMBEE_TOTEM, 20, ITEM_WISE_GLASSES
# 29 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	dowildbattle
# 30 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 31 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route116_RusturfTunnel_Peak_Ribombee_2
# 34 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route116_RusturfTunnel_Peak_Ribombee_3
# 37 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route116_RusturfTunnel_Peak_Ribombee_4
# 40 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route116_RusturfTunnel_Peak_Ribombee_5
Route116_RusturfTunnel_Peak_Ribombee_1:
# 43 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmessage
# 44 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	release
	end

Route116_RusturfTunnel_Peak_Ribombee_2:
# 32 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	call RibombeeWon_Caught
	goto Route116_RusturfTunnel_Peak_Ribombee_1

Route116_RusturfTunnel_Peak_Ribombee_3:
# 35 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	call RibombeeWon_Caught
	goto Route116_RusturfTunnel_Peak_Ribombee_1

Route116_RusturfTunnel_Peak_Ribombee_4:
# 38 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	call RibombeeFailed
	goto Route116_RusturfTunnel_Peak_Ribombee_1

Route116_RusturfTunnel_Peak_Ribombee_5:
# 41 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	call RibombeeFailed
	goto Route116_RusturfTunnel_Peak_Ribombee_1


RibombeeWon_Caught::
# 49 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 50 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	removeobject 4
# 51 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	return


RibombeeFailed::
# 56 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	playmoncry SPECIES_RIBOMBEE, CRY_MODE_ENCOUNTER
# 57 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 20
# 58 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 59 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	removeobject 4
# 60 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
# 61 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	msgbox RibombeeFailed_Text_0
	return


Route116_RusturfTunnel_Peak_Daca::
# 66 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	lock
# 67 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 20
# 68 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	playse SE_PIN
# 69 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 70 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmovement 2
# 71 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 40
# 72 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 73 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmovement 2
# 74 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	msgbox Route116_RusturfTunnel_Peak_DacaText1, MSGBOX_AUTOCLOSE
# 75 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmessage
# 76 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	goto Route116_RusturfTunnel_Peak_DacaLeave
	end


Route116_RusturfTunnel_Peak_DacaLeave::
# 99 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 100 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Route116_RusturfTunnel_Peak_DacaLeave_2
# 111 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 1, RusturfTunnel_Peak_ReturnToPokeball
# 112 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmovement 1
# 113 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	removeobject 1
# 114 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 3, RusturfTunnel_Peak_ReturnToPokeball
# 115 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmovement 3
# 116 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	removeobject 3
# 117 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 20
# 118 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 2, Route116_RusturfTunnel_Peak_DacaLeave2
Route116_RusturfTunnel_Peak_DacaLeave_1:
# 120 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 20
# 121 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 122 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmovement 2
# 123 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 30
# 124 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	removeobject 2
# 125 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	setflag FLAG_HIDE_DACA_RUSTURF_PEAK
# 126 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	release
	end

Route116_RusturfTunnel_Peak_DacaLeave_2:
# 101 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 1, RusturfTunnel_Peak_ReturnToPokeball
# 102 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmovement 1
# 103 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	removeobject 1
# 104 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 3, RusturfTunnel_Peak_ReturnToPokeball
# 105 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmovement 3
# 106 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	removeobject 3
# 107 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 20
# 108 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 2, Route116_RusturfTunnel_Peak_DacaLeave1
	goto Route116_RusturfTunnel_Peak_DacaLeave_1


# 130 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
Route116_RusturfTunnel_Peak_DacaLeave1:
# 131 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_left
# 132 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 132 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 132 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 132 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 132 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 132 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 132 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 132 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 132 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
	step_end

# 135 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
Route116_RusturfTunnel_Peak_DacaLeave2:
# 136 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 136 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 136 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 136 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 136 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 136 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 136 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 136 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
	step_end

# 139 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
RusturfTunnel_Peak_ReturnToPokeball:
# 140 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	enter_pokeball
	step_end

RibombeeFailed_Text_0:
# 61 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	.string "The RIBOMBEE disappeared…$"

Route116_RusturfTunnel_Peak_DacaText1::
# 80 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	.string "Huh?\n Who are you?\l … … … …\p Oh, a challenger?\n Hahaha, my bad!\l It's nice to meet you, {PLAYER}!\p I'm DACA, LEADER of the MAUVILLE CITY\n POKéMON GYM.\p I was grabbing some rare herbs\n  for a sick HOUNDOUR that's being\l cared for at the DAYCARE.\p Well, sorry to make you come\n all the way up here!\p I'll wait for you back at the GYM.\n Then we can party! Hahaha!$"
