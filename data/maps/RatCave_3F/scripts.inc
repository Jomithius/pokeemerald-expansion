RatCave_3F_MapScripts::
	.byte 0


Petalburg_RatCave_Raticate::
# 4 "data/maps/RatCave_3F/scripts.pory"
	lock
# 5 "data/maps/RatCave_3F/scripts.pory"
	faceplayer
# 6 "data/maps/RatCave_3F/scripts.pory"
	setflag FLAG_PETALBURG_RATICATE
# 7 "data/maps/RatCave_3F/scripts.pory"
	playmoncry SPECIES_RATICATE, CRY_MODE_ENCOUNTER
# 8 "data/maps/RatCave_3F/scripts.pory"
	delay 40
# 9 "data/maps/RatCave_3F/scripts.pory"
	waitmoncry
# 10 "data/maps/RatCave_3F/scripts.pory"
	setwildbattle SPECIES_RATICATE, 16, ITEM_JOLLY_MINT
# 11 "data/maps/RatCave_3F/scripts.pory"
	dowildbattle
# 12 "data/maps/RatCave_3F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/RatCave_3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Petalburg_RatCave_Raticate_2
# 16 "data/maps/RatCave_3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Petalburg_RatCave_Raticate_3
# 19 "data/maps/RatCave_3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Petalburg_RatCave_Raticate_4
# 22 "data/maps/RatCave_3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Petalburg_RatCave_Raticate_5
Petalburg_RatCave_Raticate_1:
# 25 "data/maps/RatCave_3F/scripts.pory"
	waitmessage
# 26 "data/maps/RatCave_3F/scripts.pory"
	release
	end

Petalburg_RatCave_Raticate_2:
# 14 "data/maps/RatCave_3F/scripts.pory"
	call RaticateWon_Caught
	goto Petalburg_RatCave_Raticate_1

Petalburg_RatCave_Raticate_3:
# 17 "data/maps/RatCave_3F/scripts.pory"
	call RaticateWon_Caught
	goto Petalburg_RatCave_Raticate_1

Petalburg_RatCave_Raticate_4:
# 20 "data/maps/RatCave_3F/scripts.pory"
	call RaticateFailed
	goto Petalburg_RatCave_Raticate_1

Petalburg_RatCave_Raticate_5:
# 23 "data/maps/RatCave_3F/scripts.pory"
	call RaticateFailed
	goto Petalburg_RatCave_Raticate_1


RaticateWon_Caught::
# 31 "data/maps/RatCave_3F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 32 "data/maps/RatCave_3F/scripts.pory"
	removeobject 1
# 33 "data/maps/RatCave_3F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	return


RaticateFailed::
# 38 "data/maps/RatCave_3F/scripts.pory"
	playmoncry SPECIES_RATICATE, CRY_MODE_ENCOUNTER
# 39 "data/maps/RatCave_3F/scripts.pory"
	delay 20
# 40 "data/maps/RatCave_3F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 41 "data/maps/RatCave_3F/scripts.pory"
	removeobject 1
# 42 "data/maps/RatCave_3F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
# 43 "data/maps/RatCave_3F/scripts.pory"
	msgbox RaticateFailed_Text_0
	return


Petalburg_RatCave_RaticateAlola::
# 48 "data/maps/RatCave_3F/scripts.pory"
	lock
# 49 "data/maps/RatCave_3F/scripts.pory"
	faceplayer
# 50 "data/maps/RatCave_3F/scripts.pory"
	setflag FLAG_PETALBURG_RATICATE_ALOLA
# 51 "data/maps/RatCave_3F/scripts.pory"
	playmoncry SPECIES_RATICATE_ALOLA_TOTEM, CRY_MODE_ENCOUNTER
# 52 "data/maps/RatCave_3F/scripts.pory"
	delay 40
# 53 "data/maps/RatCave_3F/scripts.pory"
	waitmoncry
# 54 "data/maps/RatCave_3F/scripts.pory"
	setwildbattle SPECIES_RATICATE_ALOLA_TOTEM, 16, ITEM_ADAMANT_MINT
# 55 "data/maps/RatCave_3F/scripts.pory"
	dowildbattle
# 56 "data/maps/RatCave_3F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 57 "data/maps/RatCave_3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Petalburg_RatCave_RaticateAlola_2
# 60 "data/maps/RatCave_3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Petalburg_RatCave_RaticateAlola_3
# 63 "data/maps/RatCave_3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Petalburg_RatCave_RaticateAlola_4
# 66 "data/maps/RatCave_3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Petalburg_RatCave_RaticateAlola_5
Petalburg_RatCave_RaticateAlola_1:
# 69 "data/maps/RatCave_3F/scripts.pory"
	waitmessage
# 70 "data/maps/RatCave_3F/scripts.pory"
	release
	end

Petalburg_RatCave_RaticateAlola_2:
# 58 "data/maps/RatCave_3F/scripts.pory"
	call RaticateAlolaWon_Caught
	goto Petalburg_RatCave_RaticateAlola_1

Petalburg_RatCave_RaticateAlola_3:
# 61 "data/maps/RatCave_3F/scripts.pory"
	call RaticateAlolaWon_Caught
	goto Petalburg_RatCave_RaticateAlola_1

Petalburg_RatCave_RaticateAlola_4:
# 64 "data/maps/RatCave_3F/scripts.pory"
	call RaticateAlolaFailed
	goto Petalburg_RatCave_RaticateAlola_1

Petalburg_RatCave_RaticateAlola_5:
# 67 "data/maps/RatCave_3F/scripts.pory"
	call RaticateAlolaFailed
	goto Petalburg_RatCave_RaticateAlola_1


RaticateAlolaWon_Caught::
# 75 "data/maps/RatCave_3F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 76 "data/maps/RatCave_3F/scripts.pory"
	removeobject 2
# 77 "data/maps/RatCave_3F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	return


RaticateAlolaFailed::
# 82 "data/maps/RatCave_3F/scripts.pory"
	playmoncry SPECIES_RATICATE_ALOLA, CRY_MODE_ENCOUNTER
# 83 "data/maps/RatCave_3F/scripts.pory"
	delay 20
# 84 "data/maps/RatCave_3F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 85 "data/maps/RatCave_3F/scripts.pory"
	removeobject 2
# 86 "data/maps/RatCave_3F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
# 87 "data/maps/RatCave_3F/scripts.pory"
	msgbox RaticateFailed_Text_0
# 88 "data/maps/RatCave_3F/scripts.pory"
	waitmessage
	return


RaticateFailed_Text_0:
# 43 "data/maps/RatCave_3F/scripts.pory"
	.string "The RATICATE disappeared…$"
