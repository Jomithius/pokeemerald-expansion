RatCave_3F_MapScripts::
	.byte 0


Petalburg_RatCave_Raticate::
# 4 "data/maps/RatCave_3F/scripts.pory"
	lockall
# 5 "data/maps/RatCave_3F/scripts.pory"
	setflag FLAG_PETALBURG_RATICATE
# 6 "data/maps/RatCave_3F/scripts.pory"
	playmoncry SPECIES_RATICATE, CRY_MODE_ENCOUNTER
# 7 "data/maps/RatCave_3F/scripts.pory"
	delay 40
# 8 "data/maps/RatCave_3F/scripts.pory"
	waitmoncry
# 9 "data/maps/RatCave_3F/scripts.pory"
	setwildbattle SPECIES_RATICATE, 16, ITEM_JOLLY_MINT
# 10 "data/maps/RatCave_3F/scripts.pory"
	dowildbattle
# 11 "data/maps/RatCave_3F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 12 "data/maps/RatCave_3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Petalburg_RatCave_Raticate_2
# 15 "data/maps/RatCave_3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Petalburg_RatCave_Raticate_3
# 18 "data/maps/RatCave_3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Petalburg_RatCave_Raticate_4
# 21 "data/maps/RatCave_3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Petalburg_RatCave_Raticate_5
Petalburg_RatCave_Raticate_1:
# 24 "data/maps/RatCave_3F/scripts.pory"
	waitmessage
# 25 "data/maps/RatCave_3F/scripts.pory"
	releaseall
	return

Petalburg_RatCave_Raticate_2:
# 13 "data/maps/RatCave_3F/scripts.pory"
	call RaticateWon_Caught
	goto Petalburg_RatCave_Raticate_1

Petalburg_RatCave_Raticate_3:
# 16 "data/maps/RatCave_3F/scripts.pory"
	call RaticateWon_Caught
	goto Petalburg_RatCave_Raticate_1

Petalburg_RatCave_Raticate_4:
# 19 "data/maps/RatCave_3F/scripts.pory"
	call RaticateFailed
	goto Petalburg_RatCave_Raticate_1

Petalburg_RatCave_Raticate_5:
# 22 "data/maps/RatCave_3F/scripts.pory"
	call RaticateFailed
	goto Petalburg_RatCave_Raticate_1


RaticateWon_Caught::
# 29 "data/maps/RatCave_3F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 30 "data/maps/RatCave_3F/scripts.pory"
	removeobject 1
# 31 "data/maps/RatCave_3F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	return


RaticateFailed::
# 36 "data/maps/RatCave_3F/scripts.pory"
	playmoncry SPECIES_RATICATE, CRY_MODE_ENCOUNTER
# 37 "data/maps/RatCave_3F/scripts.pory"
	delay 20
# 38 "data/maps/RatCave_3F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 39 "data/maps/RatCave_3F/scripts.pory"
	removeobject 1
# 40 "data/maps/RatCave_3F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
# 41 "data/maps/RatCave_3F/scripts.pory"
	msgbox RaticateFailed_Text_0
	return


Petalburg_RatCave_RaticateAlola::
# 46 "data/maps/RatCave_3F/scripts.pory"
	lockall
# 47 "data/maps/RatCave_3F/scripts.pory"
	setflag FLAG_PETALBURG_RATICATE_ALOLA
# 48 "data/maps/RatCave_3F/scripts.pory"
	playmoncry SPECIES_RATICATE_ALOLA, CRY_MODE_ENCOUNTER
# 49 "data/maps/RatCave_3F/scripts.pory"
	delay 40
# 50 "data/maps/RatCave_3F/scripts.pory"
	waitmoncry
# 51 "data/maps/RatCave_3F/scripts.pory"
	setwildbattle SPECIES_RATICATE_ALOLA_TOTEM, 16, ITEM_ADAMANT_MINT
# 52 "data/maps/RatCave_3F/scripts.pory"
	dowildbattle
# 53 "data/maps/RatCave_3F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 54 "data/maps/RatCave_3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Petalburg_RatCave_RaticateAlola_2
# 57 "data/maps/RatCave_3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Petalburg_RatCave_RaticateAlola_3
# 60 "data/maps/RatCave_3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Petalburg_RatCave_RaticateAlola_4
# 63 "data/maps/RatCave_3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Petalburg_RatCave_RaticateAlola_5
Petalburg_RatCave_RaticateAlola_1:
# 66 "data/maps/RatCave_3F/scripts.pory"
	waitmessage
# 67 "data/maps/RatCave_3F/scripts.pory"
	releaseall
	return

Petalburg_RatCave_RaticateAlola_2:
# 55 "data/maps/RatCave_3F/scripts.pory"
	call RaticateAlolaWon_Caught
	goto Petalburg_RatCave_RaticateAlola_1

Petalburg_RatCave_RaticateAlola_3:
# 58 "data/maps/RatCave_3F/scripts.pory"
	call RaticateAlolaWon_Caught
	goto Petalburg_RatCave_RaticateAlola_1

Petalburg_RatCave_RaticateAlola_4:
# 61 "data/maps/RatCave_3F/scripts.pory"
	call RaticateAlolaFailed
	goto Petalburg_RatCave_RaticateAlola_1

Petalburg_RatCave_RaticateAlola_5:
# 64 "data/maps/RatCave_3F/scripts.pory"
	call RaticateAlolaFailed
	goto Petalburg_RatCave_RaticateAlola_1


RaticateAlolaWon_Caught::
# 71 "data/maps/RatCave_3F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 72 "data/maps/RatCave_3F/scripts.pory"
	removeobject 2
# 73 "data/maps/RatCave_3F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	return


RaticateAlolaFailed::
# 78 "data/maps/RatCave_3F/scripts.pory"
	playmoncry SPECIES_RATICATE_ALOLA, CRY_MODE_ENCOUNTER
# 79 "data/maps/RatCave_3F/scripts.pory"
	delay 20
# 80 "data/maps/RatCave_3F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 81 "data/maps/RatCave_3F/scripts.pory"
	removeobject 2
# 82 "data/maps/RatCave_3F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
# 83 "data/maps/RatCave_3F/scripts.pory"
	msgbox RaticateFailed_Text_0
# 84 "data/maps/RatCave_3F/scripts.pory"
	waitmessage
	return


RaticateFailed_Text_0:
# 41 "data/maps/RatCave_3F/scripts.pory"
	.string "The RATICATE disappeared...$"
