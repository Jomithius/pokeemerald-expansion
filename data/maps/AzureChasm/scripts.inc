AzureChasm_MapScripts::
	.byte 0


AzureChasm_EventScript_BlackBelt::
# 4 "data/maps/AzureChasm/scripts.pory"
	msgbox AzureChasm_EventScript_BlackBelt_Text_0, MSGBOX_SIGN
	end


AzureChasm_EventScript_Kenneth::
# 10 "data/maps/AzureChasm/scripts.pory"
	trainerbattle_single TRAINER_KENNETH, AzureChasm_EventScript_Kenneth_Text_0, AzureChasm_EventScript_Kenneth_Text_1
# 11 "data/maps/AzureChasm/scripts.pory"
	msgbox AzureChasm_EventScript_Kenneth_Text_2, MSGBOX_NPC
	end


AzureChasm_EventScript_Keith::
# 17 "data/maps/AzureChasm/scripts.pory"
	trainerbattle_single TRAINER_KEITH, AzureChasm_EventScript_Keith_Text_0, AzureChasm_EventScript_Keith_Text_1
# 18 "data/maps/AzureChasm/scripts.pory"
	msgbox AzureChasm_EventScript_Keith_Text_2, MSGBOX_NPC
	end


AzureChasm_EventScript_Roy::
# 29 "data/maps/AzureChasm/scripts.pory"
	trainerbattle_single TRAINER_ROY, AzureChasm_EventScript_Roy_Text_0, AzureChasm_EventScript_Roy_Text_1
# 30 "data/maps/AzureChasm/scripts.pory"
	msgbox AzureChasm_EventScript_Roy_Text_2, MSGBOX_NPC
	end


AzureChasm_EventScript_Yor::
# 35 "data/maps/AzureChasm/scripts.pory"
	trainerbattle_single TRAINER_YOR, AzureChasm_EventScript_Yor_Text_0, AzureChasm_EventScript_Yor_Text_1
# 36 "data/maps/AzureChasm/scripts.pory"
	msgbox AzureChasm_EventScript_Yor_Text_2, MSGBOX_NPC
	end


AzureChasm_EventScript_Azelf::
# 43 "data/maps/AzureChasm/scripts.pory"
	lock
# 44 "data/maps/AzureChasm/scripts.pory"
	faceplayer
# 45 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_AZELF, CRY_MODE_ENCOUNTER
# 46 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 47 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 48 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_AZELF, 75
# 49 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 50 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 51 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 52 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Azelf_2
# 52 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Azelf_2
# 57 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Azelf_3
# 57 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Azelf_3
AzureChasm_EventScript_Azelf_1:
# 60 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Azelf_2:
# 53 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 54 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 55 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Azelf_1

AzureChasm_EventScript_Azelf_3:
# 58 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Azelf_1


AzureChasm_EventScript_Uxie::
# 65 "data/maps/AzureChasm/scripts.pory"
	lock
# 66 "data/maps/AzureChasm/scripts.pory"
	faceplayer
# 67 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_UXIE, CRY_MODE_ENCOUNTER
# 68 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 69 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 70 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_UXIE, 75
# 71 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 72 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 73 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 74 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Uxie_2
# 74 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Uxie_2
# 79 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Uxie_3
# 79 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Uxie_3
AzureChasm_EventScript_Uxie_1:
# 82 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Uxie_2:
# 75 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 76 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 77 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Uxie_1

AzureChasm_EventScript_Uxie_3:
# 80 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Uxie_1


AzureChasm_EventScript_Mesprit::
# 87 "data/maps/AzureChasm/scripts.pory"
	lock
# 88 "data/maps/AzureChasm/scripts.pory"
	faceplayer
# 89 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_MESPRIT, CRY_MODE_ENCOUNTER
# 90 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 91 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 92 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_MESPRIT, 75
# 93 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 94 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 95 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 96 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Mesprit_2
# 96 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Mesprit_2
# 101 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Mesprit_3
# 101 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Mesprit_3
AzureChasm_EventScript_Mesprit_1:
# 104 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Mesprit_2:
# 97 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 98 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 99 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Mesprit_1

AzureChasm_EventScript_Mesprit_3:
# 102 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Mesprit_1


AzureChasm_EventScript_Glastrier::
# 109 "data/maps/AzureChasm/scripts.pory"
	lock
# 110 "data/maps/AzureChasm/scripts.pory"
	faceplayer
# 111 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_GLASTRIER, CRY_MODE_ENCOUNTER
# 112 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 113 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 114 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_GLASTRIER, 75
# 115 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 116 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 117 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 118 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Glastrier_2
# 118 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Glastrier_2
# 123 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Glastrier_3
# 123 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Glastrier_3
AzureChasm_EventScript_Glastrier_1:
# 126 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Glastrier_2:
# 119 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 120 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 121 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Glastrier_1

AzureChasm_EventScript_Glastrier_3:
# 124 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Glastrier_1


AzureChasm_EventScript_Zacian::
# 131 "data/maps/AzureChasm/scripts.pory"
	lock
# 132 "data/maps/AzureChasm/scripts.pory"
	faceplayer
# 133 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_ZACIAN, CRY_MODE_ENCOUNTER
# 134 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 135 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 136 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_ZACIAN, 75, ITEM_RUSTED_SWORD
# 137 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 138 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 139 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 140 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Zacian_2
# 140 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Zacian_2
# 145 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Zacian_3
# 145 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Zacian_3
AzureChasm_EventScript_Zacian_1:
# 148 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Zacian_2:
# 141 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 142 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 143 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Zacian_1

AzureChasm_EventScript_Zacian_3:
# 146 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Zacian_1


AzureChasm_EventScript_Zamazenta::
# 153 "data/maps/AzureChasm/scripts.pory"
	lock
# 154 "data/maps/AzureChasm/scripts.pory"
	faceplayer
# 155 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_ZAMAZENTA, CRY_MODE_ENCOUNTER
# 156 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 157 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 158 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_ZAMAZENTA, 75
# 159 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 160 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 161 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 162 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Zamazenta_2
# 162 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Zamazenta_2
# 167 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Zamazenta_3
# 167 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Zamazenta_3
AzureChasm_EventScript_Zamazenta_1:
# 170 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Zamazenta_2:
# 163 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 164 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 165 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Zamazenta_1

AzureChasm_EventScript_Zamazenta_3:
# 168 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Zamazenta_1


AzureChasm_EventScript_BlackBelt_Text_0:
# 4 "data/maps/AzureChasm/scripts.pory"
	.string "It's so cold…\n I can barely train like this…$"

AzureChasm_EventScript_Kenneth_Text_0:
# 10 "data/maps/AzureChasm/scripts.pory"
	.string "Fufu…\nSuch rare POKéMON.$"

AzureChasm_EventScript_Kenneth_Text_1:
# 10 "data/maps/AzureChasm/scripts.pory"
	.string "I see.\nYou're quite strong.$"

AzureChasm_EventScript_Kenneth_Text_2:
# 11 "data/maps/AzureChasm/scripts.pory"
	.string "There's a horse down there.\n I tried to catch it, but it's too strong.$"

AzureChasm_EventScript_Keith_Text_0:
# 17 "data/maps/AzureChasm/scripts.pory"
	.string "I MADE IT!\nRAAAAAAAH!$"

AzureChasm_EventScript_Keith_Text_1:
# 17 "data/maps/AzureChasm/scripts.pory"
	.string "I lost it…\nRaaaaaaah…$"

AzureChasm_EventScript_Keith_Text_2:
# 18 "data/maps/AzureChasm/scripts.pory"
	.string "Congratulations on making it up here!\p Most people just use the CORVIKNIGHT\n service.\p Huh?\n How can I tell you didn't?\p You're covered in dirt!\n Hahahaha!$"

AzureChasm_EventScript_Roy_Text_0:
# 29 "data/maps/AzureChasm/scripts.pory"
	.string "Man! It's so cold over here!$"

AzureChasm_EventScript_Roy_Text_1:
# 29 "data/maps/AzureChasm/scripts.pory"
	.string "Why is SNOWDRIFT so much warmer?$"

AzureChasm_EventScript_Roy_Text_2:
# 30 "data/maps/AzureChasm/scripts.pory"
	.string "It's weird how warm SNOWDRIFT CITY gets.$"

AzureChasm_EventScript_Yor_Text_0:
# 35 "data/maps/AzureChasm/scripts.pory"
	.string "There's less oxygen up here.\nGreat for training!$"

AzureChasm_EventScript_Yor_Text_1:
# 35 "data/maps/AzureChasm/scripts.pory"
	.string "I'm all out of breath…$"

AzureChasm_EventScript_Yor_Text_2:
# 36 "data/maps/AzureChasm/scripts.pory"
	.string "You probably didn't notice how thin\n the air was up here since you\l hiked all the way up.$"
