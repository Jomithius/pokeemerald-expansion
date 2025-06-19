RusturfTunnel_2F_Room2_MapScripts::
	.byte 0


RusturfTunnel_2F_Room2_Galvantula::
# 4 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	lockall
# 5 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	setflag FLAG_RUSTURF_GALVANTULA
# 6 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	applymovement 5, Common_Movement_FacePlayer
# 7 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	waitmovement 5
# 8 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	playmoncry SPECIES_GALVANTULA, CRY_MODE_ENCOUNTER
# 9 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	delay 40
# 10 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	waitmoncry
# 11 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	setwildbattle SPECIES_GALVANTULA, 21, ITEM_MAGNET
# 12 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	dowildbattle
# 13 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 14 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq RusturfTunnel_2F_Room2_Galvantula_2
# 17 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq RusturfTunnel_2F_Room2_Galvantula_3
# 20 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq RusturfTunnel_2F_Room2_Galvantula_4
# 23 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq RusturfTunnel_2F_Room2_Galvantula_5
RusturfTunnel_2F_Room2_Galvantula_1:
# 26 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	waitmessage
# 27 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	releaseall
	end

RusturfTunnel_2F_Room2_Galvantula_2:
# 15 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	call GalvantulaWon_Caught
	goto RusturfTunnel_2F_Room2_Galvantula_1

RusturfTunnel_2F_Room2_Galvantula_3:
# 18 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	call GalvantulaWon_Caught
	goto RusturfTunnel_2F_Room2_Galvantula_1

RusturfTunnel_2F_Room2_Galvantula_4:
# 21 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	call GalvantulaFailed
	goto RusturfTunnel_2F_Room2_Galvantula_1

RusturfTunnel_2F_Room2_Galvantula_5:
# 24 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	call GalvantulaFailed
	goto RusturfTunnel_2F_Room2_Galvantula_1


GalvantulaWon_Caught::
# 32 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 33 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	removeobject 5
# 34 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	return


GalvantulaFailed::
# 39 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	playmoncry SPECIES_GALVANTULA, CRY_MODE_ENCOUNTER
# 40 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	delay 20
# 41 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 42 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	removeobject 5
# 43 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
# 44 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	msgbox GalvantulaFailed_Text_0
	return


RusturfTunnel_2F_Room2_Ariados::
# 50 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	lockall
# 51 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	setflag FLAG_RUSTURF_ARIADOS
# 52 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 53 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	waitmovement 6
# 54 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	playmoncry SPECIES_ARIADOS, CRY_MODE_ENCOUNTER
# 55 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	delay 40
# 56 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	waitmoncry
# 57 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	setwildbattle SPECIES_ARIADOS, 21, ITEM_BIG_NUGGET
# 58 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	dowildbattle
# 59 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 60 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq RusturfTunnel_2F_Room2_Ariados_2
# 63 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq RusturfTunnel_2F_Room2_Ariados_3
# 66 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq RusturfTunnel_2F_Room2_Ariados_4
# 69 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq RusturfTunnel_2F_Room2_Ariados_5
RusturfTunnel_2F_Room2_Ariados_1:
# 72 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	waitmessage
# 73 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	releaseall
	end

RusturfTunnel_2F_Room2_Ariados_2:
# 61 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	call AriadosWon_Caught
	goto RusturfTunnel_2F_Room2_Ariados_1

RusturfTunnel_2F_Room2_Ariados_3:
# 64 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	call AriadosWon_Caught
	goto RusturfTunnel_2F_Room2_Ariados_1

RusturfTunnel_2F_Room2_Ariados_4:
# 67 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	call AriadosFailed
	goto RusturfTunnel_2F_Room2_Ariados_1

RusturfTunnel_2F_Room2_Ariados_5:
# 70 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	call AriadosFailed
	goto RusturfTunnel_2F_Room2_Ariados_1


AriadosWon_Caught::
# 78 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 79 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	removeobject 6
# 80 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	return


AriadosFailed::
# 85 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	playmoncry SPECIES_ARIADOS, CRY_MODE_ENCOUNTER
# 86 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	delay 20
# 87 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 88 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	removeobject 6
# 89 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
# 90 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	msgbox AriadosFailed_Text_0
	return


GalvantulaFailed_Text_0:
# 44 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	.string "The GALVANTULA disappeared…$"

AriadosFailed_Text_0:
# 90 "data/maps/RusturfTunnel_2F_Room2/scripts.pory"
	.string "The ARIADOS disappeared…$"
