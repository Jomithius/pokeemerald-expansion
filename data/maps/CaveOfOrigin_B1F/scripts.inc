# 1 "data/maps/CaveOfOrigin_B1F/scripts.pory"
.set LOCALID_WALLACE, 1
# 2 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 3 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_MapScripts::
# 4 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.byte 0
# 5 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 6 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_Wallace::
# 7 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	lock
# 8 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	faceplayer
# 9 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_WallaceStory, MSGBOX_DEFAULT
# 10 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 11 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterUp
# 12 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 13 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 60
# 14 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playse SE_PIN
# 15 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_ExclamationMark
# 16 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 17 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_Delay48
# 18 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 19 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 30
# 20 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_FacePlayer
# 21 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 22 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_WhereIsRayquaza
# 23 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 24 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 25 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 26 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_WheresRayquaza::
# 27 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	multichoice 0, 0, MULTI_WHERES_RAYQUAZA, FALSE
# 28 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	switch VAR_RESULT
# 29 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 0, CaveOfOrigin_B1F_EventScript_AtCaveOfOrigin
# 30 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 1, CaveOfOrigin_B1F_EventScript_AtMtPyre
# 31 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 2, CaveOfOrigin_B1F_EventScript_AtSkyPillar
# 32 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 3, CaveOfOrigin_B1F_EventScript_DontRemember
# 33 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_DontRemember
# 34 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	end
# 35 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 36 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtCaveOfOrigin::
# 37 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin
# 38 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 39 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 40 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 41 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtMtPyre::
# 42 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat
# 43 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 44 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 45 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 46 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_DontRemember::
# 47 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_CantYouRememberSomehow
# 48 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 49 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 50 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 51 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtSkyPillar::
# 52 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_WellHeadToSkyPillar, MSGBOX_DEFAULT
# 53 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 54 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playse SE_EXIT
# 55 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 56 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setflag FLAG_WALLACE_GOES_TO_SKY_PILLAR
# 57 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 3
# 58 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	removeobject LOCALID_WALLACE
# 59 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_WALLACE
# 60 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 61 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	release
# 62 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	end
# 63 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 64 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WallaceStory:
# 65 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Ah, so you are {PLAYER}{KUN}?\n"
# 66 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I've heard tales of your exploits.\p"
# 67 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "My name is WALLACE.\p"
# 68 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I was once the GYM LEADER of\n"
# 69 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "SOOTOPOLIS, but something came up.\p"
# 70 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "So now, I've entrusted my mentor JUAN\n"
# 71 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "with the GYM's operation.\p"
# 72 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "… … … … … …\n"
# 73 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "… … … … … …\p"
# 74 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "GROUDON and KYOGRE, the two POKéMON\n"
# 75 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "wreaking havoc here, are considered\l"
# 76 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "to be super-ancient POKéMON.\p"
# 77 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "But there aren't just two super-\n"
# 78 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "ancient POKéMON.\p"
# 79 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "There is one more somewhere.\p"
# 80 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Somewhere, there is a super-\n"
# 81 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "ancient POKéMON named RAYQUAZA.\p"
# 82 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "It's said that it was RAYQUAZA that\n"
# 83 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "becalmed the two combatants in\l"
# 84 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "the distant past.\p"
# 85 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "But even I have no clue as to\n"
# 86 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "RAYQUAZA's whereabouts…$"
# 87 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 88 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WhereIsRayquaza:
# 89 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}, do you perhaps\n"
# 90 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "know where RAYQUAZA is now?\p"
# 91 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "If you do, please tell me.$"
# 92 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 93 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin:
# 94 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: The CAVE OF ORIGIN?\p"
# 95 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "But that's right here!\n"
# 96 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I need you to do better than that!\p"
# 97 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Please, I need you to think about\n"
# 98 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "where RAYQUAZA might be right now.$"
# 99 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 100 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat:
# 101 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: MT. PYRE?\p"
# 102 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "But when I met the old lady there\n"
# 103 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "earlier, she made no mention of it.\p"
# 104 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I very much doubt that the old lady\n"
# 105 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "would try to hide something from me…\p"
# 106 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "{PLAYER}{KUN}, could you think about this\n"
# 107 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "more carefully for me?$"
# 108 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 109 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_CantYouRememberSomehow:
# 110 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: Huh? You don't remember?\n"
# 111 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Hmm… That's a problem…\p"
# 112 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Can't you remember somehow?$"
# 113 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 114 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WellHeadToSkyPillar:
# 115 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: The SKY PILLAR?\p"
# 116 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "That's it!\n"
# 117 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "It must be the SKY PILLAR!\p"
# 118 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "{PLAYER}{KUN}, there's not a moment to lose!\n"
# 119 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "We'll head to the SKY PILLAR right away!$"

CaveOfOrigin_B1F_EventScript_Dialga::
# 124 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	lock
# 125 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playmoncry SPECIES_DIALGA, CRY_MODE_ENCOUNTER
# 126 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 40
# 127 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmoncry
# 128 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setwildbattle SPECIES_DIALGA, 75, ITEM_ADAMANT_CRYSTAL
# 129 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 130 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitstate
# 131 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 132 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq CaveOfOrigin_B1F_EventScript_Dialga_2
# 132 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CaveOfOrigin_B1F_EventScript_Dialga_2
# 137 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq CaveOfOrigin_B1F_EventScript_Dialga_3
# 137 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq CaveOfOrigin_B1F_EventScript_Dialga_3
CaveOfOrigin_B1F_EventScript_Dialga_1:
# 140 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	release
	end

CaveOfOrigin_B1F_EventScript_Dialga_2:
# 133 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 134 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 135 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto CaveOfOrigin_B1F_EventScript_Dialga_1

CaveOfOrigin_B1F_EventScript_Dialga_3:
# 138 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto Common_EventScript_NopReturn
	goto CaveOfOrigin_B1F_EventScript_Dialga_1


CaveOfOrigin_B1F_EventScript_Palkia::
# 145 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	lock
# 146 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playmoncry SPECIES_PALKIA, CRY_MODE_ENCOUNTER
# 147 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 40
# 148 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmoncry
# 149 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setwildbattle SPECIES_PALKIA, 75, ITEM_LUSTROUS_GLOBE
# 150 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 151 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitstate
# 152 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 153 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq CaveOfOrigin_B1F_EventScript_Palkia_2
# 153 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CaveOfOrigin_B1F_EventScript_Palkia_2
# 158 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq CaveOfOrigin_B1F_EventScript_Palkia_3
# 158 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq CaveOfOrigin_B1F_EventScript_Palkia_3
CaveOfOrigin_B1F_EventScript_Palkia_1:
# 161 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	release
	end

CaveOfOrigin_B1F_EventScript_Palkia_2:
# 154 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 155 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 156 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto CaveOfOrigin_B1F_EventScript_Palkia_1

CaveOfOrigin_B1F_EventScript_Palkia_3:
# 159 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto Common_EventScript_NopReturn
	goto CaveOfOrigin_B1F_EventScript_Palkia_1


CaveOfOrigin_B1F_EventScript_Arceus::
# 166 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	lock
# 167 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
# 168 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 40
# 169 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmoncry
# 170 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setwildbattle SPECIES_ARCEUS, 75
# 171 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 172 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitstate
# 173 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 174 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq CaveOfOrigin_B1F_EventScript_Arceus_2
# 174 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CaveOfOrigin_B1F_EventScript_Arceus_2
# 179 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq CaveOfOrigin_B1F_EventScript_Arceus_3
# 179 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq CaveOfOrigin_B1F_EventScript_Arceus_3
CaveOfOrigin_B1F_EventScript_Arceus_1:
# 182 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	release
	end

CaveOfOrigin_B1F_EventScript_Arceus_2:
# 175 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 176 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 177 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto CaveOfOrigin_B1F_EventScript_Arceus_1

CaveOfOrigin_B1F_EventScript_Arceus_3:
# 180 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto Common_EventScript_NopReturn
	goto CaveOfOrigin_B1F_EventScript_Arceus_1

