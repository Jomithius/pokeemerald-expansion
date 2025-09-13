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
# 42 "data/maps/AzureChasm/scripts.pory"
	lock
# 43 "data/maps/AzureChasm/scripts.pory"
	faceplayer
# 44 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_AZELF, CRY_MODE_ENCOUNTER
# 45 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 46 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 47 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_AZELF, 90
# 48 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 49 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 50 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 51 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Azelf_2
# 51 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Azelf_2
# 56 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Azelf_3
# 56 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Azelf_3
AzureChasm_EventScript_Azelf_1:
# 59 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Azelf_2:
# 52 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 53 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 54 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Azelf_1

AzureChasm_EventScript_Azelf_3:
# 57 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Azelf_1


AzureChasm_EventScript_Uxie::
# 64 "data/maps/AzureChasm/scripts.pory"
	lock
# 65 "data/maps/AzureChasm/scripts.pory"
	faceplayer
# 66 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_UXIE, CRY_MODE_ENCOUNTER
# 67 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 68 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 69 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_UXIE, 90
# 70 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 71 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 72 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 73 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Uxie_2
# 73 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Uxie_2
# 78 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Uxie_3
# 78 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Uxie_3
AzureChasm_EventScript_Uxie_1:
# 81 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Uxie_2:
# 74 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 75 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 76 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Uxie_1

AzureChasm_EventScript_Uxie_3:
# 79 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Uxie_1


AzureChasm_EventScript_Mesprit::
# 86 "data/maps/AzureChasm/scripts.pory"
	lock
# 87 "data/maps/AzureChasm/scripts.pory"
	faceplayer
# 88 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_MESPRIT, CRY_MODE_ENCOUNTER
# 89 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 90 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 91 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_MESPRIT, 90
# 92 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 93 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 94 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 95 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Mesprit_2
# 95 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Mesprit_2
# 100 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Mesprit_3
# 100 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Mesprit_3
AzureChasm_EventScript_Mesprit_1:
# 103 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Mesprit_2:
# 96 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 97 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 98 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Mesprit_1

AzureChasm_EventScript_Mesprit_3:
# 101 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Mesprit_1


AzureChasm_EventScript_Glastrier::
# 108 "data/maps/AzureChasm/scripts.pory"
	lock
# 109 "data/maps/AzureChasm/scripts.pory"
	faceplayer
# 110 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_GLASTRIER, CRY_MODE_ENCOUNTER
# 111 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 112 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 113 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_GLASTRIER, 90
# 114 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 115 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 116 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 117 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Glastrier_2
# 117 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Glastrier_2
# 122 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Glastrier_3
# 122 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Glastrier_3
AzureChasm_EventScript_Glastrier_1:
# 125 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Glastrier_2:
# 118 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 119 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 120 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Glastrier_1

AzureChasm_EventScript_Glastrier_3:
# 123 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Glastrier_1


AzureChasm_EventScript_Zacian::
# 130 "data/maps/AzureChasm/scripts.pory"
	lock
# 131 "data/maps/AzureChasm/scripts.pory"
	faceplayer
# 132 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_ZACIAN, CRY_MODE_ENCOUNTER
# 133 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 134 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 135 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_ZACIAN, 90, ITEM_RUSTED_SWORD
# 136 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 137 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 138 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 139 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Zacian_2
# 139 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Zacian_2
# 144 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Zacian_3
# 144 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Zacian_3
AzureChasm_EventScript_Zacian_1:
# 147 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Zacian_2:
# 140 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 141 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 142 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Zacian_1

AzureChasm_EventScript_Zacian_3:
# 145 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Zacian_1


AzureChasm_EventScript_Zamazenta::
# 152 "data/maps/AzureChasm/scripts.pory"
	lock
# 153 "data/maps/AzureChasm/scripts.pory"
	faceplayer
# 154 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_ZAMAZENTA, CRY_MODE_ENCOUNTER
# 155 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 156 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 157 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_ZAMAZENTA, 90
# 158 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 159 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 160 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 161 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Zamazenta_2
# 161 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Zamazenta_2
# 166 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Zamazenta_3
# 166 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Zamazenta_3
AzureChasm_EventScript_Zamazenta_1:
# 169 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Zamazenta_2:
# 162 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 163 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 164 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Zamazenta_1

AzureChasm_EventScript_Zamazenta_3:
# 167 "data/maps/AzureChasm/scripts.pory"
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
	.string "You probably didn't notice how thin the\n air is since you hiked all the way up.$"
