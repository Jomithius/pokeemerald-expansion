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
# 14 "data/maps/ArtisanCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_HURLEY, AzureMountain_EventScript_Hurley_Text_0, AzureMountain_EventScript_Hurley_Text_1
# 15 "data/maps/ArtisanCave_B1F/scripts.pory"
	msgbox AzureMountain_EventScript_Hurley_Text_2, MSGBOX_NPC
	end


AzureMountain_EventScript_Jessi::
# 21 "data/maps/ArtisanCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_JESSI, AzureMountain_EventScript_Jessi_Text_0, AzureMountain_EventScript_Jessi_Text_1
# 22 "data/maps/ArtisanCave_B1F/scripts.pory"
	msgbox AzureMountain_EventScript_Jessi_Text_2, MSGBOX_NPC
	end


AzureMountain_EventScript_Dogfood::
# 27 "data/maps/ArtisanCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_DOGFOOD, AzureMountain_EventScript_Dogfood_Text_0, AzureMountain_EventScript_Dogfood_Text_1
# 28 "data/maps/ArtisanCave_B1F/scripts.pory"
	msgbox AzureMountain_EventScript_Dogfood_Text_0, MSGBOX_NPC
	end


AzureMountain_EventScript_Bjornulfr::
# 33 "data/maps/ArtisanCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_BJORNULFR, AzureMountain_EventScript_Bjornulfr_Text_0, AzureMountain_EventScript_Bjornulfr_Text_1
# 34 "data/maps/ArtisanCave_B1F/scripts.pory"
	msgbox AzureMountain_EventScript_Bjornulfr_Text_2, MSGBOX_NPC
	end


AzureMountain_EventScript_Rin::
# 40 "data/maps/ArtisanCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_RIN, AzureMountain_EventScript_Rin_Text_0, AzureMountain_EventScript_Rin_Text_1
# 41 "data/maps/ArtisanCave_B1F/scripts.pory"
	msgbox AzureMountain_EventScript_Rin_Text_2, MSGBOX_NPC
	end


AzureMountain_EventScript_Shuji::
# 46 "data/maps/ArtisanCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_SHUJI, AzureMountain_EventScript_Shuji_Text_0, AzureMountain_EventScript_Shuji_Text_1
# 47 "data/maps/ArtisanCave_B1F/scripts.pory"
	msgbox AzureMountain_EventScript_Shuji_Text_2, MSGBOX_NPC
	end


AzureMountain_EventScript_Yuu::
# 54 "data/maps/ArtisanCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_YUU, AzureMountain_EventScript_Yuu_Text_0, AzureMountain_EventScript_Yuu_Text_1
# 55 "data/maps/ArtisanCave_B1F/scripts.pory"
	msgbox AzureMountain_EventScript_Yuu_Text_2, MSGBOX_NPC
	end


AzureMountain_EventScript_Keldeo::
# 63 "data/maps/ArtisanCave_B1F/scripts.pory"
	lock
# 64 "data/maps/ArtisanCave_B1F/scripts.pory"
	faceplayer
# 65 "data/maps/ArtisanCave_B1F/scripts.pory"
	playmoncry SPECIES_KELDEO, CRY_MODE_ENCOUNTER
# 66 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitmoncry
# 67 "data/maps/ArtisanCave_B1F/scripts.pory"
	setwildbattle SPECIES_KELDEO, 90
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
	waitmoncry
# 88 "data/maps/ArtisanCave_B1F/scripts.pory"
	setwildbattle SPECIES_COBALION, 90
# 89 "data/maps/ArtisanCave_B1F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 90 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitstate
# 91 "data/maps/ArtisanCave_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 92 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_EventScript_Cobalion_2
# 92 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_EventScript_Cobalion_2
# 97 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_EventScript_Cobalion_3
# 97 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_EventScript_Cobalion_3
AzureMountain_EventScript_Cobalion_1:
# 100 "data/maps/ArtisanCave_B1F/scripts.pory"
	release
	end

AzureMountain_EventScript_Cobalion_2:
# 93 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 94 "data/maps/ArtisanCave_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 95 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_EventScript_Cobalion_1

AzureMountain_EventScript_Cobalion_3:
# 98 "data/maps/ArtisanCave_B1F/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_EventScript_Cobalion_1


AzureMountain_EventScript_Virizion::
# 105 "data/maps/ArtisanCave_B1F/scripts.pory"
	lock
# 106 "data/maps/ArtisanCave_B1F/scripts.pory"
	faceplayer
# 107 "data/maps/ArtisanCave_B1F/scripts.pory"
	playmoncry SPECIES_VIRIZION, CRY_MODE_ENCOUNTER
# 108 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitmoncry
# 109 "data/maps/ArtisanCave_B1F/scripts.pory"
	setwildbattle SPECIES_VIRIZION, 90
# 110 "data/maps/ArtisanCave_B1F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 111 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitstate
# 112 "data/maps/ArtisanCave_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 113 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_EventScript_Virizion_2
# 113 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_EventScript_Virizion_2
# 118 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_EventScript_Virizion_3
# 118 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_EventScript_Virizion_3
AzureMountain_EventScript_Virizion_1:
# 121 "data/maps/ArtisanCave_B1F/scripts.pory"
	release
	end

AzureMountain_EventScript_Virizion_2:
# 114 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 115 "data/maps/ArtisanCave_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 116 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_EventScript_Virizion_1

AzureMountain_EventScript_Virizion_3:
# 119 "data/maps/ArtisanCave_B1F/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_EventScript_Virizion_1


AzureMountain_EventScript_Terrakion::
# 126 "data/maps/ArtisanCave_B1F/scripts.pory"
	lock
# 127 "data/maps/ArtisanCave_B1F/scripts.pory"
	faceplayer
# 128 "data/maps/ArtisanCave_B1F/scripts.pory"
	playmoncry SPECIES_TERRAKION, CRY_MODE_ENCOUNTER
# 129 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitmoncry
# 130 "data/maps/ArtisanCave_B1F/scripts.pory"
	setwildbattle SPECIES_TERRAKION, 90
# 131 "data/maps/ArtisanCave_B1F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 132 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitstate
# 133 "data/maps/ArtisanCave_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 134 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_EventScript_Terrakion_2
# 134 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_EventScript_Terrakion_2
# 139 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_EventScript_Terrakion_3
# 139 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_EventScript_Terrakion_3
AzureMountain_EventScript_Terrakion_1:
# 142 "data/maps/ArtisanCave_B1F/scripts.pory"
	release
	end

AzureMountain_EventScript_Terrakion_2:
# 135 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 136 "data/maps/ArtisanCave_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 137 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_EventScript_Terrakion_1

AzureMountain_EventScript_Terrakion_3:
# 140 "data/maps/ArtisanCave_B1F/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_EventScript_Terrakion_1


AzureMountain_EventScript_Hoopa::
# 147 "data/maps/ArtisanCave_B1F/scripts.pory"
	lock
# 148 "data/maps/ArtisanCave_B1F/scripts.pory"
	faceplayer
# 149 "data/maps/ArtisanCave_B1F/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_ENCOUNTER
# 150 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitmoncry
# 151 "data/maps/ArtisanCave_B1F/scripts.pory"
	setwildbattle SPECIES_HOOPA, 90
# 152 "data/maps/ArtisanCave_B1F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 153 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitstate
# 154 "data/maps/ArtisanCave_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 155 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_EventScript_Hoopa_2
# 155 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_EventScript_Hoopa_2
# 160 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_EventScript_Hoopa_3
# 160 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_EventScript_Hoopa_3
AzureMountain_EventScript_Hoopa_1:
# 163 "data/maps/ArtisanCave_B1F/scripts.pory"
	release
	end

AzureMountain_EventScript_Hoopa_2:
# 156 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 157 "data/maps/ArtisanCave_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 158 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_EventScript_Hoopa_1

AzureMountain_EventScript_Hoopa_3:
# 161 "data/maps/ArtisanCave_B1F/scripts.pory"
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
	.string "Another super strong TRAINER\n came through here a while ago.\p He beat me without saying a word!$"

AzureMountain_EventScript_Hurley_Text_0:
# 14 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "I got here by cheating!$"

AzureMountain_EventScript_Hurley_Text_1:
# 14 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Are you cheating too?!$"

AzureMountain_EventScript_Hurley_Text_2:
# 15 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "There's no way you beat my team.\n You've gotta be cheating too.$"

AzureMountain_EventScript_Jessi_Text_0:
# 21 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Oh?\nYou think you can beat me?$"

AzureMountain_EventScript_Jessi_Text_1:
# 21 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Okay…\nMaybe you can…$"

AzureMountain_EventScript_Jessi_Text_2:
# 22 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Dang…\nYou're strong!$"

AzureMountain_EventScript_Dogfood_Text_0:
# 27 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Guys…\nI need pee.$"

AzureMountain_EventScript_Dogfood_Text_1:
# 27 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Grrr…$"

AzureMountain_EventScript_Bjornulfr_Text_0:
# 33 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Huff… huff…\nWhat a hike!$"

AzureMountain_EventScript_Bjornulfr_Text_1:
# 33 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Maybe I'm out of shape…$"

AzureMountain_EventScript_Bjornulfr_Text_2:
# 34 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "There's a lot of strong POKéMON\n in here!$"

AzureMountain_EventScript_Rin_Text_0:
# 40 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Fear my fists!$"

AzureMountain_EventScript_Rin_Text_1:
# 40 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Maybe I should fear you!$"

AzureMountain_EventScript_Rin_Text_2:
# 41 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "This is the best place to train!$"

AzureMountain_EventScript_Shuji_Text_0:
# 46 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Hm…\nI can sense your strength.$"

AzureMountain_EventScript_Shuji_Text_1:
# 46 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "You've come far, young one.$"

AzureMountain_EventScript_Shuji_Text_2:
# 47 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Hm…\p Looks like the next generation has\n a lot of potential.$"

AzureMountain_EventScript_Yuu_Text_0:
# 54 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "It's so hot over here!\nI'm fired up!$"

AzureMountain_EventScript_Yuu_Text_1:
# 54 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Well, that cooled me down!$"

AzureMountain_EventScript_Yuu_Text_2:
# 55 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "The ladder next to me leads to the\n volcano deep within the mountain.\p It's so hot that I don't think\n I've ever seen anyone go down there!$"
