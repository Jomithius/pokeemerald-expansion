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
	waitmoncry
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
	waitmoncry
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
	waitmoncry
# 27 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	setwildbattle SPECIES_RIBOMBEE_TOTEM, 20, ITEM_WISE_GLASSES
# 28 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	dowildbattle
# 29 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 30 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route116_RusturfTunnel_Peak_Ribombee_2
# 33 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route116_RusturfTunnel_Peak_Ribombee_3
# 36 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route116_RusturfTunnel_Peak_Ribombee_4
# 39 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route116_RusturfTunnel_Peak_Ribombee_5
Route116_RusturfTunnel_Peak_Ribombee_1:
# 42 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmessage
# 43 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	release
	end

Route116_RusturfTunnel_Peak_Ribombee_2:
# 31 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	call RibombeeWon_Caught
	goto Route116_RusturfTunnel_Peak_Ribombee_1

Route116_RusturfTunnel_Peak_Ribombee_3:
# 34 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	call RibombeeWon_Caught
	goto Route116_RusturfTunnel_Peak_Ribombee_1

Route116_RusturfTunnel_Peak_Ribombee_4:
# 37 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	call RibombeeFailed
	goto Route116_RusturfTunnel_Peak_Ribombee_1

Route116_RusturfTunnel_Peak_Ribombee_5:
# 40 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	call RibombeeFailed
	goto Route116_RusturfTunnel_Peak_Ribombee_1


RibombeeWon_Caught::
# 48 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 49 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	removeobject 4
# 50 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	return


RibombeeFailed::
# 55 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	playmoncry SPECIES_RIBOMBEE, CRY_MODE_ENCOUNTER
# 56 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmoncry
# 57 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 58 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	removeobject 4
# 59 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
# 60 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	msgbox RibombeeFailed_Text_0, MSGBOX_DEFAULT
	return


Route116_RusturfTunnel_Peak_Daca::
# 65 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	lock
# 66 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 20
# 67 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	playse SE_PIN
# 68 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 69 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmovement 2
# 70 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 40
# 71 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 72 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmovement 2
# 73 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	msgbox Route116_RusturfTunnel_Peak_DacaText1, MSGBOX_AUTOCLOSE
# 74 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmessage
# 75 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	goto Route116_RusturfTunnel_Peak_DacaLeave
	end


Route116_RusturfTunnel_Peak_DacaLeave::
# 98 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 99 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Route116_RusturfTunnel_Peak_DacaLeave_2
# 110 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 1, RusturfTunnel_Peak_ReturnToPokeball
# 111 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmovement 1
# 112 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	removeobject 1
# 113 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 3, RusturfTunnel_Peak_ReturnToPokeball
# 114 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmovement 3
# 115 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	removeobject 3
# 116 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 20
# 117 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 2, Route116_RusturfTunnel_Peak_DacaLeave2
Route116_RusturfTunnel_Peak_DacaLeave_1:
# 119 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 20
# 120 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 121 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmovement 2
# 122 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 30
# 123 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	removeobject 2
# 124 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	setflag FLAG_HIDE_DACA_RUSTURF_PEAK
# 125 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	release
	end

Route116_RusturfTunnel_Peak_DacaLeave_2:
# 100 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 1, RusturfTunnel_Peak_ReturnToPokeball
# 101 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmovement 1
# 102 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	removeobject 1
# 103 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 3, RusturfTunnel_Peak_ReturnToPokeball
# 104 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmovement 3
# 105 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	removeobject 3
# 106 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 20
# 107 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 2, Route116_RusturfTunnel_Peak_DacaLeave1
	goto Route116_RusturfTunnel_Peak_DacaLeave_1


# 129 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
Route116_RusturfTunnel_Peak_DacaLeave1:
# 130 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_left
# 131 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 131 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 131 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 131 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 131 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 131 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 131 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 131 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 131 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
	step_end

# 134 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
Route116_RusturfTunnel_Peak_DacaLeave2:
# 135 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 135 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 135 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 135 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 135 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 135 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 135 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 135 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
	step_end

# 138 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
RusturfTunnel_Peak_ReturnToPokeball:
# 139 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	enter_pokeball
	step_end

RibombeeFailed_Text_0:
# 60 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	.string "The RIBOMBEE disappeared…$"

Route116_RusturfTunnel_Peak_DacaText1::
# 79 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	.string "Huh?\n Who are you?\l … … … …\p Oh, a challenger?\n Hahaha, my bad!\l It's nice to meet you, {PLAYER}!\p I'm DACA, LEADER of the MAUVILLE CITY\n POKéMON GYM.\p I was grabbing some rare herbs\n for a sick HOUNDOUR that's being\l cared for at the DAYCARE.\p Well, sorry to make you come\n all the way up here!\p I'll wait for you back at the GYM.\n Then we can party! Hahaha!$"
