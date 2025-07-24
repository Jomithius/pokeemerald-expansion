# 1 "data/maps/ArtisanCave_B1F/scripts.pory"
ArtisanCave_B1F_MapScripts::
# 2 "data/maps/ArtisanCave_B1F/scripts.pory"
	.byte 0

AzureMountain_EventScript_Barley::
# 6 "data/maps/ArtisanCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_BARLEY, AzureMountain_EventScript_Barley_Text_0, AzureMountain_EventScript_Barley_Text_1
# 7 "data/maps/ArtisanCave_B1F/scripts.pory"
	msgbox AzureMountain_EventScript_Barley_Text_2, MSGBOX_NPC
	end


AzureMountain_EventScript_Hurley::
# 13 "data/maps/ArtisanCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_HURLEY, AzureMountain_EventScript_Hurley_Text_0, AzureMountain_EventScript_Hurley_Text_1
# 14 "data/maps/ArtisanCave_B1F/scripts.pory"
	msgbox AzureMountain_EventScript_Hurley_Text_2, MSGBOX_NPC
	end


AzureMountain_EventScript_Jessi::
# 19 "data/maps/ArtisanCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_JESSI, AzureMountain_EventScript_Jessi_Text_0, AzureMountain_EventScript_Jessi_Text_1
# 20 "data/maps/ArtisanCave_B1F/scripts.pory"
	msgbox AzureMountain_EventScript_Hurley_Text_2, MSGBOX_NPC
	end


AzureMountain_EventScript_Dogfood::
# 25 "data/maps/ArtisanCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_DOGFOOD, AzureMountain_EventScript_Dogfood_Text_0, AzureMountain_EventScript_Dogfood_Text_0
# 26 "data/maps/ArtisanCave_B1F/scripts.pory"
	msgbox AzureMountain_EventScript_Dogfood_Text_0, MSGBOX_NPC
	end


AzureMountain_EventScript_Bjornulfr::
# 31 "data/maps/ArtisanCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_BJORNULFR, AzureMountain_EventScript_Bjornulfr_Text_0, AzureMountain_EventScript_Bjornulfr_Text_1
# 32 "data/maps/ArtisanCave_B1F/scripts.pory"
	msgbox AzureMountain_EventScript_Bjornulfr_Text_2, MSGBOX_NPC
	end


AzureMountain_EventScript_Rin::
# 38 "data/maps/ArtisanCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_RIN, AzureMountain_EventScript_Rin_Text_0, AzureMountain_EventScript_Rin_Text_1
# 39 "data/maps/ArtisanCave_B1F/scripts.pory"
	msgbox AzureMountain_EventScript_Rin_Text_2, MSGBOX_NPC
	end


AzureMountain_EventScript_Shuji::
# 44 "data/maps/ArtisanCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_SHUJI, AzureMountain_EventScript_Shuji_Text_0, AzureMountain_EventScript_Shuji_Text_1
# 45 "data/maps/ArtisanCave_B1F/scripts.pory"
	msgbox AzureMountain_EventScript_Shuji_Text_2, MSGBOX_NPC
	end


AzureMountain_EventScript_Yuu::
# 52 "data/maps/ArtisanCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_YUU, AzureMountain_EventScript_Yuu_Text_0, AzureMountain_EventScript_Yuu_Text_1
# 53 "data/maps/ArtisanCave_B1F/scripts.pory"
	msgbox AzureMountain_EventScript_Yuu_Text_2, MSGBOX_NPC
	end


AzureMountain_EventScript_Keldeo::
# 62 "data/maps/ArtisanCave_B1F/scripts.pory"
	lock
# 63 "data/maps/ArtisanCave_B1F/scripts.pory"
	faceplayer
# 64 "data/maps/ArtisanCave_B1F/scripts.pory"
	playmoncry SPECIES_KELDEO, CRY_MODE_ENCOUNTER
# 65 "data/maps/ArtisanCave_B1F/scripts.pory"
	delay 40
# 66 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitmoncry
# 67 "data/maps/ArtisanCave_B1F/scripts.pory"
	setwildbattle SPECIES_KELDEO, 75
# 68 "data/maps/ArtisanCave_B1F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 69 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitstate
# 70 "data/maps/ArtisanCave_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 71 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_EventScript_Keldeo_2
# 71 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_EventScript_Keldeo_2
# 76 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_EventScript_Keldeo_3
# 76 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_EventScript_Keldeo_3
AzureMountain_EventScript_Keldeo_1:
# 79 "data/maps/ArtisanCave_B1F/scripts.pory"
	release
	end

AzureMountain_EventScript_Keldeo_2:
# 72 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 73 "data/maps/ArtisanCave_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 74 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_EventScript_Keldeo_1

AzureMountain_EventScript_Keldeo_3:
# 77 "data/maps/ArtisanCave_B1F/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_EventScript_Keldeo_1


AzureMountain_EventScript_Cobalion::
# 84 "data/maps/ArtisanCave_B1F/scripts.pory"
	lock
# 85 "data/maps/ArtisanCave_B1F/scripts.pory"
	faceplayer
# 86 "data/maps/ArtisanCave_B1F/scripts.pory"
	playmoncry SPECIES_COBALION, CRY_MODE_ENCOUNTER
# 87 "data/maps/ArtisanCave_B1F/scripts.pory"
	delay 40
# 88 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitmoncry
# 89 "data/maps/ArtisanCave_B1F/scripts.pory"
	setwildbattle SPECIES_COBALION, 75
# 90 "data/maps/ArtisanCave_B1F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 91 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitstate
# 92 "data/maps/ArtisanCave_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 93 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_EventScript_Cobalion_2
# 93 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_EventScript_Cobalion_2
# 98 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_EventScript_Cobalion_3
# 98 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_EventScript_Cobalion_3
AzureMountain_EventScript_Cobalion_1:
# 101 "data/maps/ArtisanCave_B1F/scripts.pory"
	release
	end

AzureMountain_EventScript_Cobalion_2:
# 94 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 95 "data/maps/ArtisanCave_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 96 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_EventScript_Cobalion_1

AzureMountain_EventScript_Cobalion_3:
# 99 "data/maps/ArtisanCave_B1F/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_EventScript_Cobalion_1


AzureMountain_EventScript_Virizion::
# 106 "data/maps/ArtisanCave_B1F/scripts.pory"
	lock
# 107 "data/maps/ArtisanCave_B1F/scripts.pory"
	faceplayer
# 108 "data/maps/ArtisanCave_B1F/scripts.pory"
	playmoncry SPECIES_VIRIZION, CRY_MODE_ENCOUNTER
# 109 "data/maps/ArtisanCave_B1F/scripts.pory"
	delay 40
# 110 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitmoncry
# 111 "data/maps/ArtisanCave_B1F/scripts.pory"
	setwildbattle SPECIES_VIRIZION, 75
# 112 "data/maps/ArtisanCave_B1F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 113 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitstate
# 114 "data/maps/ArtisanCave_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 115 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_EventScript_Virizion_2
# 115 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_EventScript_Virizion_2
# 120 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_EventScript_Virizion_3
# 120 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_EventScript_Virizion_3
AzureMountain_EventScript_Virizion_1:
# 123 "data/maps/ArtisanCave_B1F/scripts.pory"
	release
	end

AzureMountain_EventScript_Virizion_2:
# 116 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 117 "data/maps/ArtisanCave_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 118 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_EventScript_Virizion_1

AzureMountain_EventScript_Virizion_3:
# 121 "data/maps/ArtisanCave_B1F/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_EventScript_Virizion_1


AzureMountain_EventScript_Terrakion::
# 128 "data/maps/ArtisanCave_B1F/scripts.pory"
	lock
# 129 "data/maps/ArtisanCave_B1F/scripts.pory"
	faceplayer
# 130 "data/maps/ArtisanCave_B1F/scripts.pory"
	playmoncry SPECIES_TERRAKION, CRY_MODE_ENCOUNTER
# 131 "data/maps/ArtisanCave_B1F/scripts.pory"
	delay 40
# 132 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitmoncry
# 133 "data/maps/ArtisanCave_B1F/scripts.pory"
	setwildbattle SPECIES_TERRAKION, 75
# 134 "data/maps/ArtisanCave_B1F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 135 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitstate
# 136 "data/maps/ArtisanCave_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 137 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_EventScript_Terrakion_2
# 137 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_EventScript_Terrakion_2
# 142 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_EventScript_Terrakion_3
# 142 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_EventScript_Terrakion_3
AzureMountain_EventScript_Terrakion_1:
# 145 "data/maps/ArtisanCave_B1F/scripts.pory"
	release
	end

AzureMountain_EventScript_Terrakion_2:
# 138 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 139 "data/maps/ArtisanCave_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 140 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_EventScript_Terrakion_1

AzureMountain_EventScript_Terrakion_3:
# 143 "data/maps/ArtisanCave_B1F/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_EventScript_Terrakion_1


AzureMountain_EventScript_Hoopa::
# 150 "data/maps/ArtisanCave_B1F/scripts.pory"
	lock
# 151 "data/maps/ArtisanCave_B1F/scripts.pory"
	faceplayer
# 152 "data/maps/ArtisanCave_B1F/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_ENCOUNTER
# 153 "data/maps/ArtisanCave_B1F/scripts.pory"
	delay 40
# 154 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitmoncry
# 155 "data/maps/ArtisanCave_B1F/scripts.pory"
	setwildbattle SPECIES_HOOPA, 75
# 156 "data/maps/ArtisanCave_B1F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 157 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitstate
# 158 "data/maps/ArtisanCave_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 159 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_EventScript_Hoopa_2
# 159 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_EventScript_Hoopa_2
# 164 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_EventScript_Hoopa_3
# 164 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_EventScript_Hoopa_3
AzureMountain_EventScript_Hoopa_1:
# 167 "data/maps/ArtisanCave_B1F/scripts.pory"
	release
	end

AzureMountain_EventScript_Hoopa_2:
# 160 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 161 "data/maps/ArtisanCave_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 162 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_EventScript_Hoopa_1

AzureMountain_EventScript_Hoopa_3:
# 165 "data/maps/ArtisanCave_B1F/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_EventScript_Hoopa_1


AzureMountain_EventScript_Barley_Text_0:
# 6 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Only the strongest TRAINERS come here!$"

AzureMountain_EventScript_Barley_Text_1:
# 6 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Whoa…$"

AzureMountain_EventScript_Barley_Text_2:
# 7 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Another super strong TRAINER\n came through here a while ago.$"

AzureMountain_EventScript_Hurley_Text_0:
# 13 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "I'll show you why I was\nable to get here!$"

AzureMountain_EventScript_Hurley_Text_1:
# 13 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Dang…$"

AzureMountain_EventScript_Hurley_Text_2:
# 14 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Dang… You're strong!$"

AzureMountain_EventScript_Jessi_Text_0:
# 19 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Oh?\nYou think you can beat me?$"

AzureMountain_EventScript_Jessi_Text_1:
# 19 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Okay…\nMaybe you can beat me.$"

AzureMountain_EventScript_Dogfood_Text_0:
# 25 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Grrr…$"

AzureMountain_EventScript_Bjornulfr_Text_0:
# 31 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Huff… huff…\nWhat a hike!$"

AzureMountain_EventScript_Bjornulfr_Text_1:
# 31 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Maybe I'm out of shape…$"

AzureMountain_EventScript_Bjornulfr_Text_2:
# 32 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "There's a lot of strong POKéMON\n in here!$"

AzureMountain_EventScript_Rin_Text_0:
# 38 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Fear my fists!$"

AzureMountain_EventScript_Rin_Text_1:
# 38 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Maybe I should fear you!$"

AzureMountain_EventScript_Rin_Text_2:
# 39 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "This is the best place to train!$"

AzureMountain_EventScript_Shuji_Text_0:
# 44 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Hm…\nI can sense your strength.$"

AzureMountain_EventScript_Shuji_Text_1:
# 44 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "You've come far, young one.$"

AzureMountain_EventScript_Shuji_Text_2:
# 45 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Hm…\n Looks like the next generations have\l a lot of potential.$"

AzureMountain_EventScript_Yuu_Text_0:
# 52 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "It's so hot over here!\nI'm fired up!$"

AzureMountain_EventScript_Yuu_Text_1:
# 52 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Well, that cooled me down!$"

AzureMountain_EventScript_Yuu_Text_2:
# 53 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "The ladder next to me leads to\n the volcano deep within the\l mountain.\p It's so hot that I don't think\n I've ever seen anyone go down there!$"
