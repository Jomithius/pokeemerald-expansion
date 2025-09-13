AzureMountain_FromChasm_MapScripts::
	.byte 0


AzureMountain_FromChasm_EventScript_Gohan::
# 4 "data/maps/AzureMountain_FromChasm/scripts.pory"
	trainerbattle_single TRAINER_GOHAN, AzureMountain_FromChasm_EventScript_Gohan_Text_0, AzureMountain_FromChasm_EventScript_Gohan_Text_1
# 5 "data/maps/AzureMountain_FromChasm/scripts.pory"
	msgbox AzureMountain_FromChasm_EventScript_Gohan_Text_2, MSGBOX_NPC
	end


AzureMountain_FromChasm_EventScript_Gohana::
# 11 "data/maps/AzureMountain_FromChasm/scripts.pory"
	trainerbattle_single TRAINER_GOHANA, AzureMountain_FromChasm_EventScript_Gohan_Text_0, AzureMountain_FromChasm_EventScript_Gohan_Text_1
# 12 "data/maps/AzureMountain_FromChasm/scripts.pory"
	msgbox AzureMountain_FromChasm_EventScript_Gohan_Text_2, MSGBOX_NPC
	end


AzureMountain_FromChasm_EventScript_Magearna::
# 18 "data/maps/AzureMountain_FromChasm/scripts.pory"
	lock
# 19 "data/maps/AzureMountain_FromChasm/scripts.pory"
	faceplayer
# 20 "data/maps/AzureMountain_FromChasm/scripts.pory"
	playmoncry SPECIES_MAGEARNA, CRY_MODE_ENCOUNTER
# 21 "data/maps/AzureMountain_FromChasm/scripts.pory"
	delay 40
# 22 "data/maps/AzureMountain_FromChasm/scripts.pory"
	waitmoncry
# 23 "data/maps/AzureMountain_FromChasm/scripts.pory"
	setwildbattle SPECIES_MAGEARNA, 90
# 24 "data/maps/AzureMountain_FromChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 25 "data/maps/AzureMountain_FromChasm/scripts.pory"
	waitstate
# 26 "data/maps/AzureMountain_FromChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 27 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_FromChasm_EventScript_Magearna_2
# 27 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_FromChasm_EventScript_Magearna_2
# 32 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_FromChasm_EventScript_Magearna_3
# 32 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_FromChasm_EventScript_Magearna_3
AzureMountain_FromChasm_EventScript_Magearna_1:
# 35 "data/maps/AzureMountain_FromChasm/scripts.pory"
	release
	end

AzureMountain_FromChasm_EventScript_Magearna_2:
# 28 "data/maps/AzureMountain_FromChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 29 "data/maps/AzureMountain_FromChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 30 "data/maps/AzureMountain_FromChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_FromChasm_EventScript_Magearna_1

AzureMountain_FromChasm_EventScript_Magearna_3:
# 33 "data/maps/AzureMountain_FromChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_FromChasm_EventScript_Magearna_1


AzureMountain_FromChasm_EventScript_Zygarde::
# 40 "data/maps/AzureMountain_FromChasm/scripts.pory"
	lock
# 41 "data/maps/AzureMountain_FromChasm/scripts.pory"
	faceplayer
# 42 "data/maps/AzureMountain_FromChasm/scripts.pory"
	playmoncry SPECIES_ZYGARDE, CRY_MODE_ENCOUNTER
# 43 "data/maps/AzureMountain_FromChasm/scripts.pory"
	delay 40
# 44 "data/maps/AzureMountain_FromChasm/scripts.pory"
	waitmoncry
# 45 "data/maps/AzureMountain_FromChasm/scripts.pory"
	setwildbattle SPECIES_ZYGARDE, 90
# 46 "data/maps/AzureMountain_FromChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 47 "data/maps/AzureMountain_FromChasm/scripts.pory"
	waitstate
# 48 "data/maps/AzureMountain_FromChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 49 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_FromChasm_EventScript_Zygarde_2
# 49 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_FromChasm_EventScript_Zygarde_2
# 54 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_FromChasm_EventScript_Zygarde_3
# 54 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_FromChasm_EventScript_Zygarde_3
AzureMountain_FromChasm_EventScript_Zygarde_1:
# 57 "data/maps/AzureMountain_FromChasm/scripts.pory"
	release
	end

AzureMountain_FromChasm_EventScript_Zygarde_2:
# 50 "data/maps/AzureMountain_FromChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 51 "data/maps/AzureMountain_FromChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 52 "data/maps/AzureMountain_FromChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_FromChasm_EventScript_Zygarde_1

AzureMountain_FromChasm_EventScript_Zygarde_3:
# 55 "data/maps/AzureMountain_FromChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_FromChasm_EventScript_Zygarde_1


AzureMountain_FromChasm_EventScript_Yveltal::
# 62 "data/maps/AzureMountain_FromChasm/scripts.pory"
	lock
# 63 "data/maps/AzureMountain_FromChasm/scripts.pory"
	faceplayer
# 64 "data/maps/AzureMountain_FromChasm/scripts.pory"
	playmoncry SPECIES_YVELTAL, CRY_MODE_ENCOUNTER
# 65 "data/maps/AzureMountain_FromChasm/scripts.pory"
	delay 40
# 66 "data/maps/AzureMountain_FromChasm/scripts.pory"
	waitmoncry
# 67 "data/maps/AzureMountain_FromChasm/scripts.pory"
	setwildbattle SPECIES_YVELTAL, 90
# 68 "data/maps/AzureMountain_FromChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 69 "data/maps/AzureMountain_FromChasm/scripts.pory"
	waitstate
# 70 "data/maps/AzureMountain_FromChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 71 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_FromChasm_EventScript_Yveltal_2
# 71 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_FromChasm_EventScript_Yveltal_2
# 76 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_FromChasm_EventScript_Yveltal_3
# 76 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_FromChasm_EventScript_Yveltal_3
AzureMountain_FromChasm_EventScript_Yveltal_1:
# 79 "data/maps/AzureMountain_FromChasm/scripts.pory"
	release
	end

AzureMountain_FromChasm_EventScript_Yveltal_2:
# 72 "data/maps/AzureMountain_FromChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 73 "data/maps/AzureMountain_FromChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 74 "data/maps/AzureMountain_FromChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_FromChasm_EventScript_Yveltal_1

AzureMountain_FromChasm_EventScript_Yveltal_3:
# 77 "data/maps/AzureMountain_FromChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_FromChasm_EventScript_Yveltal_1


AzureMountain_FromChasm_EventScript_Xerneas::
# 84 "data/maps/AzureMountain_FromChasm/scripts.pory"
	lock
# 85 "data/maps/AzureMountain_FromChasm/scripts.pory"
	faceplayer
# 86 "data/maps/AzureMountain_FromChasm/scripts.pory"
	playmoncry SPECIES_XERNEAS, CRY_MODE_ENCOUNTER
# 87 "data/maps/AzureMountain_FromChasm/scripts.pory"
	delay 40
# 88 "data/maps/AzureMountain_FromChasm/scripts.pory"
	waitmoncry
# 89 "data/maps/AzureMountain_FromChasm/scripts.pory"
	setwildbattle SPECIES_XERNEAS, 90
# 90 "data/maps/AzureMountain_FromChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 91 "data/maps/AzureMountain_FromChasm/scripts.pory"
	waitstate
# 92 "data/maps/AzureMountain_FromChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 93 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_FromChasm_EventScript_Xerneas_2
# 93 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_FromChasm_EventScript_Xerneas_2
# 98 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_FromChasm_EventScript_Xerneas_3
# 98 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_FromChasm_EventScript_Xerneas_3
AzureMountain_FromChasm_EventScript_Xerneas_1:
# 101 "data/maps/AzureMountain_FromChasm/scripts.pory"
	release
	end

AzureMountain_FromChasm_EventScript_Xerneas_2:
# 94 "data/maps/AzureMountain_FromChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 95 "data/maps/AzureMountain_FromChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 96 "data/maps/AzureMountain_FromChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_FromChasm_EventScript_Xerneas_1

AzureMountain_FromChasm_EventScript_Xerneas_3:
# 99 "data/maps/AzureMountain_FromChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_FromChasm_EventScript_Xerneas_1


AzureMountain_FromChasm_EventScript_Gohan_Text_0:
# 4 "data/maps/AzureMountain_FromChasm/scripts.pory"
	.string "You've done well to get this far.\nShow me your strength!$"

AzureMountain_FromChasm_EventScript_Gohan_Text_1:
# 4 "data/maps/AzureMountain_FromChasm/scripts.pory"
	.string "Hm…\nYou have impressed me.$"

AzureMountain_FromChasm_EventScript_Gohan_Text_2:
# 5 "data/maps/AzureMountain_FromChasm/scripts.pory"
	.string "Not many people can make it out here.\n Good job, young one.$"
