Route116_RusturfTunnel_Peak_MapScripts::
	.byte 0


Route116_RusturfTunnel_Peak_Jolteon::
# 4 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	lock
# 5 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 6 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmovement 3
# 7 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	playmoncry SPECIES_JOLTEON, CRY_MODE_ENCOUNTER
# 8 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 20
# 9 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	release
	end


Route116_RusturfTunnel_Peak_Pumpkaboo::
# 14 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	lock
# 15 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 16 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmovement 3
# 17 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	playmoncry SPECIES_PUMPKABOO, CRY_MODE_ENCOUNTER
# 18 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 20
# 19 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	release
	end


Route116_RusturfTunnel_Peak_Ribombee::
# 24 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	lockall
# 25 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	setflag FLAG_RIBOMBEE_TOTEM
# 26 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 4, Common_Movement_FacePlayer
# 27 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmovement 4
# 28 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	playmoncry SPECIES_RIBOMBEE, CRY_MODE_ENCOUNTER
# 29 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 40
# 30 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmoncry
# 31 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	setwildbattle SPECIES_RIBOMBEE_TOTEM, 20, ITEM_WISE_GLASSES
# 32 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	dowildbattle
# 33 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 34 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route116_RusturfTunnel_Peak_Ribombee_2
# 37 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route116_RusturfTunnel_Peak_Ribombee_3
# 40 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route116_RusturfTunnel_Peak_Ribombee_4
# 43 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route116_RusturfTunnel_Peak_Ribombee_5
Route116_RusturfTunnel_Peak_Ribombee_1:
# 46 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmessage
# 47 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	releaseall
	end

Route116_RusturfTunnel_Peak_Ribombee_2:
# 35 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	call RibombeeWon_Caught
	goto Route116_RusturfTunnel_Peak_Ribombee_1

Route116_RusturfTunnel_Peak_Ribombee_3:
# 38 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	call RibombeeWon_Caught
	goto Route116_RusturfTunnel_Peak_Ribombee_1

Route116_RusturfTunnel_Peak_Ribombee_4:
# 41 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	call RibombeeFailed
	goto Route116_RusturfTunnel_Peak_Ribombee_1

Route116_RusturfTunnel_Peak_Ribombee_5:
# 44 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	call RibombeeFailed
	goto Route116_RusturfTunnel_Peak_Ribombee_1


RibombeeWon_Caught::
# 52 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 53 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	removeobject 4
# 54 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	return


RibombeeFailed::
# 59 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	playmoncry SPECIES_RIBOMBEE, CRY_MODE_ENCOUNTER
# 60 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 20
# 61 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 62 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	removeobject 4
# 63 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
# 64 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	msgbox RibombeeFailed_Text_0
	return


Route116_RusturfTunnel_Peak_Daca::
# 69 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	lock
# 70 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 20
# 71 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	playse SE_PIN
# 72 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 73 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmovement 2
# 74 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 40
# 75 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 76 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmovement 2
# 77 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	msgbox Route116_RusturfTunnel_Peak_DacaText1, MSGBOX_AUTOCLOSE
# 78 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmessage
# 79 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	goto Route116_RusturfTunnel_Peak_DacaLeave
	return


Route116_RusturfTunnel_Peak_DacaLeave::
# 100 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_1
# 101 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	compare VAR_TEMP_1, DIR_NORTH
	goto_if_eq Route116_RusturfTunnel_Peak_DacaLeave_1
# 120 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 1, RusturfTunnel_Peak_ReturnToPokeball
# 121 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmovement 1
# 122 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	removeobject 1
# 123 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 3, RusturfTunnel_Peak_ReturnToPokeball
# 124 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmovement 3
# 125 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	removeobject 3
# 126 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 20
# 127 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 2, Route116_RusturfTunnel_Peak_DacaLeave2
# 128 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 20
# 129 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 130 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmovement 2
# 131 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 30
# 132 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	removeobject 2
# 133 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	setflag FLAG_HIDE_DACA_RUSTURF_PEAK
# 134 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	release
	end

Route116_RusturfTunnel_Peak_DacaLeave_1:
# 102 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 1, RusturfTunnel_Peak_ReturnToPokeball
# 103 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmovement 1
# 104 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	removeobject 1
# 105 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 3, RusturfTunnel_Peak_ReturnToPokeball
# 106 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmovement 3
# 107 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	removeobject 3
# 108 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 20
# 109 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement 2, Route116_RusturfTunnel_Peak_DacaLeave1
# 110 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 20
# 111 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 112 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	waitmovement 2
# 113 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	delay 30
# 114 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	removeobject 2
# 115 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	setflag FLAG_HIDE_DACA_RUSTURF_PEAK
# 116 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	release
	end


# 139 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
Route116_RusturfTunnel_Peak_DacaLeave1:
# 140 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_left
# 141 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 141 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 141 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 141 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 141 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 141 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 141 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 141 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 141 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
	step_end

# 144 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
Route116_RusturfTunnel_Peak_DacaLeave2:
# 145 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 145 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 145 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 145 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 145 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 145 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 145 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
# 145 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	walk_down
	step_end

# 148 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
RusturfTunnel_Peak_ReturnToPokeball:
# 149 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	enter_pokeball
	step_end

RibombeeFailed_Text_0:
# 64 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	.string "The RIBOMBEE disappeared...$"

Route116_RusturfTunnel_Peak_DacaText1::
# 82 "data/maps/Route116_RusturfTunnel_Peak/scripts.pory"
	.string "Huh?\n Who are you?\l ...\p Oh, a challenger?\n Hahaha, my bad!\p I'm DACA, LEADER of the MAUVILLE CITY\n POKéMON GYM.\p DACA: I was grabbing some rare herbs\n  for a sick HOUNDOUR that's being\l cared for at the DAYCARE.\p Well, sorry to make you come\n all the way up here!\p I'll wait for you back at the GYM.\n Then we can party! Hahaha!$"
