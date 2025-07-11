BaldesianForest_MapScripts::
	.byte 0


BaldesianForest_EventScript_Landorus::
# 4 "data/maps/BaldesianForest/scripts.pory"
	lock
# 5 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 6 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_LANDORUS, CRY_MODE_ENCOUNTER
# 7 "data/maps/BaldesianForest/scripts.pory"
	delay 40
# 8 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 9 "data/maps/BaldesianForest/scripts.pory"
	setwildbattle SPECIES_LANDORUS, 75
# 10 "data/maps/BaldesianForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 11 "data/maps/BaldesianForest/scripts.pory"
	waitstate
# 12 "data/maps/BaldesianForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BaldesianForest_EventScript_Landorus_2
# 13 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BaldesianForest_EventScript_Landorus_2
# 18 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BaldesianForest_EventScript_Landorus_3
# 18 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BaldesianForest_EventScript_Landorus_3
BaldesianForest_EventScript_Landorus_1:
# 21 "data/maps/BaldesianForest/scripts.pory"
	release
	end

BaldesianForest_EventScript_Landorus_2:
# 14 "data/maps/BaldesianForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 15 "data/maps/BaldesianForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 16 "data/maps/BaldesianForest/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto BaldesianForest_EventScript_Landorus_1

BaldesianForest_EventScript_Landorus_3:
# 19 "data/maps/BaldesianForest/scripts.pory"
	goto Common_EventScript_NopReturn
	goto BaldesianForest_EventScript_Landorus_1


BaldesianForest_EventScript_Thundurus::
# 26 "data/maps/BaldesianForest/scripts.pory"
	lock
# 27 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 28 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_THUNDURUS, CRY_MODE_ENCOUNTER
# 29 "data/maps/BaldesianForest/scripts.pory"
	delay 40
# 30 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 31 "data/maps/BaldesianForest/scripts.pory"
	setwildbattle SPECIES_THUNDURUS, 75
# 32 "data/maps/BaldesianForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 33 "data/maps/BaldesianForest/scripts.pory"
	waitstate
# 34 "data/maps/BaldesianForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 35 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BaldesianForest_EventScript_Thundurus_2
# 35 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BaldesianForest_EventScript_Thundurus_2
# 40 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BaldesianForest_EventScript_Thundurus_3
# 40 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BaldesianForest_EventScript_Thundurus_3
BaldesianForest_EventScript_Thundurus_1:
# 43 "data/maps/BaldesianForest/scripts.pory"
	release
	end

BaldesianForest_EventScript_Thundurus_2:
# 36 "data/maps/BaldesianForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 37 "data/maps/BaldesianForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 38 "data/maps/BaldesianForest/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto BaldesianForest_EventScript_Thundurus_1

BaldesianForest_EventScript_Thundurus_3:
# 41 "data/maps/BaldesianForest/scripts.pory"
	goto Common_EventScript_NopReturn
	goto BaldesianForest_EventScript_Thundurus_1


BaldesianForest_EventScript_Tornadus::
# 48 "data/maps/BaldesianForest/scripts.pory"
	lock
# 49 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 50 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_TORNADUS, CRY_MODE_ENCOUNTER
# 51 "data/maps/BaldesianForest/scripts.pory"
	delay 40
# 52 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 53 "data/maps/BaldesianForest/scripts.pory"
	setwildbattle SPECIES_TORNADUS, 75
# 54 "data/maps/BaldesianForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 55 "data/maps/BaldesianForest/scripts.pory"
	waitstate
# 56 "data/maps/BaldesianForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 57 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BaldesianForest_EventScript_Tornadus_2
# 57 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BaldesianForest_EventScript_Tornadus_2
# 62 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BaldesianForest_EventScript_Tornadus_3
# 62 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BaldesianForest_EventScript_Tornadus_3
BaldesianForest_EventScript_Tornadus_1:
# 65 "data/maps/BaldesianForest/scripts.pory"
	release
	end

BaldesianForest_EventScript_Tornadus_2:
# 58 "data/maps/BaldesianForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 59 "data/maps/BaldesianForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 60 "data/maps/BaldesianForest/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto BaldesianForest_EventScript_Tornadus_1

BaldesianForest_EventScript_Tornadus_3:
# 63 "data/maps/BaldesianForest/scripts.pory"
	goto Common_EventScript_NopReturn
	goto BaldesianForest_EventScript_Tornadus_1


BaldesianForest_EventScript_Enamorus::
# 70 "data/maps/BaldesianForest/scripts.pory"
	lock
# 71 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 72 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_ENAMORUS, CRY_MODE_ENCOUNTER
# 73 "data/maps/BaldesianForest/scripts.pory"
	delay 40
# 74 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 75 "data/maps/BaldesianForest/scripts.pory"
	setwildbattle SPECIES_ENAMORUS, 75
# 76 "data/maps/BaldesianForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 77 "data/maps/BaldesianForest/scripts.pory"
	waitstate
# 78 "data/maps/BaldesianForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 79 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BaldesianForest_EventScript_Enamorus_2
# 79 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BaldesianForest_EventScript_Enamorus_2
# 84 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BaldesianForest_EventScript_Enamorus_3
# 84 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BaldesianForest_EventScript_Enamorus_3
BaldesianForest_EventScript_Enamorus_1:
# 87 "data/maps/BaldesianForest/scripts.pory"
	release
	end

BaldesianForest_EventScript_Enamorus_2:
# 80 "data/maps/BaldesianForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 81 "data/maps/BaldesianForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 82 "data/maps/BaldesianForest/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto BaldesianForest_EventScript_Enamorus_1

BaldesianForest_EventScript_Enamorus_3:
# 85 "data/maps/BaldesianForest/scripts.pory"
	goto Common_EventScript_NopReturn
	goto BaldesianForest_EventScript_Enamorus_1


BaldesianForest_EventScript_Celebi::
# 92 "data/maps/BaldesianForest/scripts.pory"
	lockall
# 93 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Celebi_Text_0, MSGBOX_YESNO
# 95 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 96 "data/maps/BaldesianForest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BaldesianForest_EventScript_NoCelebiSummon
# 97 "data/maps/BaldesianForest/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 98 "data/maps/BaldesianForest/scripts.pory"
	waitmovement 0
# 99 "data/maps/BaldesianForest/scripts.pory"
	callnative RemoveFollowingPokemon
# 100 "data/maps/BaldesianForest/scripts.pory"
	delay 20
# 101 "data/maps/BaldesianForest/scripts.pory"
	fadenewbgm MUS_NONE
# 102 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Celebi_Text_1, MSGBOX_AUTOCLOSE
# 103 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 104 "data/maps/BaldesianForest/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 105 "data/maps/BaldesianForest/scripts.pory"
	delay 480
# 106 "data/maps/BaldesianForest/scripts.pory"
	checkobjectat 33, 12
# 107 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BaldesianForest_EventScript_Celebi_2
# 121 "data/maps/BaldesianForest/scripts.pory"
	playse SE_M_PETAL_DANCE
# 122 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 13, MAP_BALDESIAN_FOREST
# 123 "data/maps/BaldesianForest/scripts.pory"
	delay 8
# 124 "data/maps/BaldesianForest/scripts.pory"
	hideobjectat 13, MAP_BALDESIAN_FOREST
# 125 "data/maps/BaldesianForest/scripts.pory"
	delay 8
# 126 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 13, MAP_BALDESIAN_FOREST
# 127 "data/maps/BaldesianForest/scripts.pory"
	delay 16
# 128 "data/maps/BaldesianForest/scripts.pory"
	hideobjectat 13, MAP_BALDESIAN_FOREST
# 129 "data/maps/BaldesianForest/scripts.pory"
	delay 24
# 130 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 13, MAP_BALDESIAN_FOREST
# 131 "data/maps/BaldesianForest/scripts.pory"
	waitse
BaldesianForest_EventScript_Celebi_1:
# 133 "data/maps/BaldesianForest/scripts.pory"
	delay 16
# 134 "data/maps/BaldesianForest/scripts.pory"
	playse SE_PIN
# 135 "data/maps/BaldesianForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 136 "data/maps/BaldesianForest/scripts.pory"
	waitmovement 0
# 137 "data/maps/BaldesianForest/scripts.pory"
	waitse
# 138 "data/maps/BaldesianForest/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, FALSE
# 139 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Celebi_Text_2, MSGBOX_AUTOCLOSE
# 140 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 141 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
# 142 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 143 "data/maps/BaldesianForest/scripts.pory"
	givemon SPECIES_CELEBI, 75
# 144 "data/maps/BaldesianForest/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CELEBI
# 145 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq BaldesianForest_EventScript_Celebi_6
# 157 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq BaldesianForest_EventScript_Celebi_7
# 170 "data/maps/BaldesianForest/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
BaldesianForest_EventScript_Celebi_5:
# 172 "data/maps/BaldesianForest/scripts.pory"
	fadedefaultbgm
# 173 "data/maps/BaldesianForest/scripts.pory"
	releaseall
	end

BaldesianForest_EventScript_Celebi_2:
# 108 "data/maps/BaldesianForest/scripts.pory"
	playse SE_M_PETAL_DANCE
# 109 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 17, MAP_BALDESIAN_FOREST
# 110 "data/maps/BaldesianForest/scripts.pory"
	delay 8
# 111 "data/maps/BaldesianForest/scripts.pory"
	hideobjectat 17, MAP_BALDESIAN_FOREST
# 112 "data/maps/BaldesianForest/scripts.pory"
	delay 8
# 113 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 17, MAP_BALDESIAN_FOREST
# 114 "data/maps/BaldesianForest/scripts.pory"
	delay 16
# 115 "data/maps/BaldesianForest/scripts.pory"
	hideobjectat 17, MAP_BALDESIAN_FOREST
# 116 "data/maps/BaldesianForest/scripts.pory"
	delay 24
# 117 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 17, MAP_BALDESIAN_FOREST
# 118 "data/maps/BaldesianForest/scripts.pory"
	waitse
	goto BaldesianForest_EventScript_Celebi_1

BaldesianForest_EventScript_Celebi_6:
# 146 "data/maps/BaldesianForest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 147 "data/maps/BaldesianForest/scripts.pory"
	removeobject 13
# 148 "data/maps/BaldesianForest/scripts.pory"
	removeobject 17
# 149 "data/maps/BaldesianForest/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 150 "data/maps/BaldesianForest/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 151 "data/maps/BaldesianForest/scripts.pory"
	waitfanfare
# 152 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Celebi_Text_3, MSGBOX_AUTOCLOSE
# 153 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 154 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_RECEIVED_CELEBI
# 155 "data/maps/BaldesianForest/scripts.pory"
	setvar VAR_BALDESIA_FOREST_STATE, 2
	goto BaldesianForest_EventScript_Celebi_5

BaldesianForest_EventScript_Celebi_7:
# 158 "data/maps/BaldesianForest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 159 "data/maps/BaldesianForest/scripts.pory"
	removeobject 13
# 160 "data/maps/BaldesianForest/scripts.pory"
	removeobject 17
# 161 "data/maps/BaldesianForest/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 162 "data/maps/BaldesianForest/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 163 "data/maps/BaldesianForest/scripts.pory"
	waitfanfare
# 164 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Celebi_Text_4, MSGBOX_AUTOCLOSE
# 165 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 166 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_RECEIVED_CELEBI
# 167 "data/maps/BaldesianForest/scripts.pory"
	setvar VAR_BALDESIA_FOREST_STATE, 2
	goto BaldesianForest_EventScript_Celebi_5


BaldesianForest_EventScript_NoCelebiSummon::
# 178 "data/maps/BaldesianForest/scripts.pory"
	lockall
# 179 "data/maps/BaldesianForest/scripts.pory"
	closemessage
# 180 "data/maps/BaldesianForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 181 "data/maps/BaldesianForest/scripts.pory"
	waitmovement 0
# 182 "data/maps/BaldesianForest/scripts.pory"
	releaseall
	end


BaldesianForest_EventScript_OldMan::
# 187 "data/maps/BaldesianForest/scripts.pory"
	lock
# 188 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 189 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldMan_Text_0, MSGBOX_AUTOCLOSE
# 191 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 192 "data/maps/BaldesianForest/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 193 "data/maps/BaldesianForest/scripts.pory"
	waitmovement 0
# 194 "data/maps/BaldesianForest/scripts.pory"
	release
	end


BaldesianForest_EventScript_KimonoGirl::
# 199 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_KimonoGirl_Text_0, MSGBOX_NPC
	end


BaldesianForest_EventScript_Celebi_Text_0:
# 93 "data/maps/BaldesianForest/scripts.pory"
	.string "You sense a mystical energy…\n Try playing the POKé FLUTE?$"

BaldesianForest_EventScript_Celebi_Text_1:
# 102 "data/maps/BaldesianForest/scripts.pory"
	.string "{PLAYER} begins playing the POKé FLUTE…$"

BaldesianForest_EventScript_Celebi_Text_2:
# 139 "data/maps/BaldesianForest/scripts.pory"
	.string "CELEBI was drawn to the sound!$"

BaldesianForest_EventScript_Celebi_Text_3:
# 152 "data/maps/BaldesianForest/scripts.pory"
	.string "CELEBI joined the party!$"

BaldesianForest_EventScript_Celebi_Text_4:
# 164 "data/maps/BaldesianForest/scripts.pory"
	.string "CELEBI was sent to the PC!$"

BaldesianForest_EventScript_OldMan_Text_0:
# 189 "data/maps/BaldesianForest/scripts.pory"
	.string "Huff… Huff…\n I might be old, but I still got it!$"

BaldesianForest_EventScript_KimonoGirl_Text_0:
# 199 "data/maps/BaldesianForest/scripts.pory"
	.string "My grandpa used to train here\n when he was younger.\p He was one of the former MASTER's\n top disciples.$"
