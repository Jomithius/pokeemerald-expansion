BaldesianForest_MapScripts::
	.byte 0


BaldesianForest_EventScript_Masato::
# 4 "data/maps/BaldesianForest/scripts.pory"
	trainerbattle_single TRAINER_MASATO, BaldesianForest_EventScript_Masato_Text_0, BaldesianForest_EventScript_Masato_Text_1
# 5 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Masato_Text_2, MSGBOX_NPC
	end


BaldesianForest_EventScript_Kamiko::
# 10 "data/maps/BaldesianForest/scripts.pory"
	trainerbattle_single TRAINER_KAMIKO, BaldesianForest_EventScript_Kamiko_Text_0, BaldesianForest_EventScript_Kamiko_Text_1
# 11 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Kamiko_Text_0, MSGBOX_NPC
	end


BaldesianForest_EventScript_Miyako::
# 16 "data/maps/BaldesianForest/scripts.pory"
	trainerbattle_single TRAINER_MIYAKO, BaldesianForest_EventScript_Miyako_Text_0, BaldesianForest_EventScript_Miyako_Text_1
# 17 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Miyako_Text_2, MSGBOX_NPC
	end


BaldesianForest_EventScript_Kotone::
# 25 "data/maps/BaldesianForest/scripts.pory"
	trainerbattle_single TRAINER_KOTONE, BaldesianForest_EventScript_Kotone_Text_0, BaldesianForest_EventScript_Kotone_Text_1
# 26 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Kotone_Text_2, MSGBOX_NPC
	end


BaldesianForest_EventScript_Yoshiko::
# 33 "data/maps/BaldesianForest/scripts.pory"
	trainerbattle_single TRAINER_YOSHIKO, BaldesianForest_EventScript_Yoshiko_Text_0, BaldesianForest_EventScript_Yoshiko_Text_1
# 34 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Yoshiko_Text_2, MSGBOX_NPC
	end


BaldesianForest_EventScript_Hanzo::
# 40 "data/maps/BaldesianForest/scripts.pory"
	trainerbattle_single TRAINER_HANZO, BaldesianForest_EventScript_Hanzo_Text_0, BaldesianForest_EventScript_Hanzo_Text_1
# 41 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Hanzo_Text_2, MSGBOX_NPC
	end


BaldesianForest_EventScript_Genji::
# 47 "data/maps/BaldesianForest/scripts.pory"
	trainerbattle_single TRAINER_GENJI, BaldesianForest_EventScript_Genji_Text_0, BaldesianForest_EventScript_Genji_Text_1
# 48 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Genji_Text_2, MSGBOX_NPC
	end


BaldesianForest_EventScript_Landorus::
# 54 "data/maps/BaldesianForest/scripts.pory"
	lock
# 55 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 56 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_LANDORUS, CRY_MODE_ENCOUNTER
# 57 "data/maps/BaldesianForest/scripts.pory"
	delay 40
# 58 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 59 "data/maps/BaldesianForest/scripts.pory"
	setwildbattle SPECIES_LANDORUS, 75
# 60 "data/maps/BaldesianForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 61 "data/maps/BaldesianForest/scripts.pory"
	waitstate
# 62 "data/maps/BaldesianForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 63 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BaldesianForest_EventScript_Landorus_2
# 63 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BaldesianForest_EventScript_Landorus_2
# 68 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BaldesianForest_EventScript_Landorus_3
# 68 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BaldesianForest_EventScript_Landorus_3
BaldesianForest_EventScript_Landorus_1:
# 71 "data/maps/BaldesianForest/scripts.pory"
	release
	end

BaldesianForest_EventScript_Landorus_2:
# 64 "data/maps/BaldesianForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 65 "data/maps/BaldesianForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 66 "data/maps/BaldesianForest/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto BaldesianForest_EventScript_Landorus_1

BaldesianForest_EventScript_Landorus_3:
# 69 "data/maps/BaldesianForest/scripts.pory"
	goto Common_EventScript_NopReturn
	goto BaldesianForest_EventScript_Landorus_1


BaldesianForest_EventScript_Thundurus::
# 76 "data/maps/BaldesianForest/scripts.pory"
	lock
# 77 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 78 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_THUNDURUS, CRY_MODE_ENCOUNTER
# 79 "data/maps/BaldesianForest/scripts.pory"
	delay 40
# 80 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 81 "data/maps/BaldesianForest/scripts.pory"
	setwildbattle SPECIES_THUNDURUS, 75
# 82 "data/maps/BaldesianForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 83 "data/maps/BaldesianForest/scripts.pory"
	waitstate
# 84 "data/maps/BaldesianForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 85 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BaldesianForest_EventScript_Thundurus_2
# 85 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BaldesianForest_EventScript_Thundurus_2
# 90 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BaldesianForest_EventScript_Thundurus_3
# 90 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BaldesianForest_EventScript_Thundurus_3
BaldesianForest_EventScript_Thundurus_1:
# 93 "data/maps/BaldesianForest/scripts.pory"
	release
	end

BaldesianForest_EventScript_Thundurus_2:
# 86 "data/maps/BaldesianForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 87 "data/maps/BaldesianForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 88 "data/maps/BaldesianForest/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto BaldesianForest_EventScript_Thundurus_1

BaldesianForest_EventScript_Thundurus_3:
# 91 "data/maps/BaldesianForest/scripts.pory"
	goto Common_EventScript_NopReturn
	goto BaldesianForest_EventScript_Thundurus_1


BaldesianForest_EventScript_Tornadus::
# 98 "data/maps/BaldesianForest/scripts.pory"
	lock
# 99 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 100 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_TORNADUS, CRY_MODE_ENCOUNTER
# 101 "data/maps/BaldesianForest/scripts.pory"
	delay 40
# 102 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 103 "data/maps/BaldesianForest/scripts.pory"
	setwildbattle SPECIES_TORNADUS, 75
# 104 "data/maps/BaldesianForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 105 "data/maps/BaldesianForest/scripts.pory"
	waitstate
# 106 "data/maps/BaldesianForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 107 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BaldesianForest_EventScript_Tornadus_2
# 107 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BaldesianForest_EventScript_Tornadus_2
# 112 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BaldesianForest_EventScript_Tornadus_3
# 112 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BaldesianForest_EventScript_Tornadus_3
BaldesianForest_EventScript_Tornadus_1:
# 115 "data/maps/BaldesianForest/scripts.pory"
	release
	end

BaldesianForest_EventScript_Tornadus_2:
# 108 "data/maps/BaldesianForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 109 "data/maps/BaldesianForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 110 "data/maps/BaldesianForest/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto BaldesianForest_EventScript_Tornadus_1

BaldesianForest_EventScript_Tornadus_3:
# 113 "data/maps/BaldesianForest/scripts.pory"
	goto Common_EventScript_NopReturn
	goto BaldesianForest_EventScript_Tornadus_1


BaldesianForest_EventScript_Enamorus::
# 120 "data/maps/BaldesianForest/scripts.pory"
	lock
# 121 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 122 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_ENAMORUS, CRY_MODE_ENCOUNTER
# 123 "data/maps/BaldesianForest/scripts.pory"
	delay 40
# 124 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 125 "data/maps/BaldesianForest/scripts.pory"
	setwildbattle SPECIES_ENAMORUS, 75
# 126 "data/maps/BaldesianForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 127 "data/maps/BaldesianForest/scripts.pory"
	waitstate
# 128 "data/maps/BaldesianForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 129 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BaldesianForest_EventScript_Enamorus_2
# 129 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BaldesianForest_EventScript_Enamorus_2
# 134 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BaldesianForest_EventScript_Enamorus_3
# 134 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BaldesianForest_EventScript_Enamorus_3
BaldesianForest_EventScript_Enamorus_1:
# 137 "data/maps/BaldesianForest/scripts.pory"
	release
	end

BaldesianForest_EventScript_Enamorus_2:
# 130 "data/maps/BaldesianForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 131 "data/maps/BaldesianForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 132 "data/maps/BaldesianForest/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto BaldesianForest_EventScript_Enamorus_1

BaldesianForest_EventScript_Enamorus_3:
# 135 "data/maps/BaldesianForest/scripts.pory"
	goto Common_EventScript_NopReturn
	goto BaldesianForest_EventScript_Enamorus_1


BaldesianForest_EventScript_Celebi::
# 142 "data/maps/BaldesianForest/scripts.pory"
	lockall
# 143 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Celebi_Text_0, MSGBOX_YESNO
# 145 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 146 "data/maps/BaldesianForest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BaldesianForest_EventScript_NoCelebiSummon
# 147 "data/maps/BaldesianForest/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 148 "data/maps/BaldesianForest/scripts.pory"
	waitmovement 0
# 149 "data/maps/BaldesianForest/scripts.pory"
	callnative RemoveFollowingPokemon
# 150 "data/maps/BaldesianForest/scripts.pory"
	delay 20
# 151 "data/maps/BaldesianForest/scripts.pory"
	fadenewbgm MUS_NONE
# 152 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Celebi_Text_1, MSGBOX_AUTOCLOSE
# 153 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 154 "data/maps/BaldesianForest/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 155 "data/maps/BaldesianForest/scripts.pory"
	delay 480
# 156 "data/maps/BaldesianForest/scripts.pory"
	checkobjectat 33, 12
# 157 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BaldesianForest_EventScript_Celebi_2
# 171 "data/maps/BaldesianForest/scripts.pory"
	playse SE_M_PETAL_DANCE
# 172 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 13, MAP_BALDESIAN_FOREST
# 173 "data/maps/BaldesianForest/scripts.pory"
	delay 8
# 174 "data/maps/BaldesianForest/scripts.pory"
	hideobjectat 13, MAP_BALDESIAN_FOREST
# 175 "data/maps/BaldesianForest/scripts.pory"
	delay 8
# 176 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 13, MAP_BALDESIAN_FOREST
# 177 "data/maps/BaldesianForest/scripts.pory"
	delay 16
# 178 "data/maps/BaldesianForest/scripts.pory"
	hideobjectat 13, MAP_BALDESIAN_FOREST
# 179 "data/maps/BaldesianForest/scripts.pory"
	delay 24
# 180 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 13, MAP_BALDESIAN_FOREST
# 181 "data/maps/BaldesianForest/scripts.pory"
	waitse
BaldesianForest_EventScript_Celebi_1:
# 183 "data/maps/BaldesianForest/scripts.pory"
	delay 16
# 184 "data/maps/BaldesianForest/scripts.pory"
	playse SE_PIN
# 185 "data/maps/BaldesianForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 186 "data/maps/BaldesianForest/scripts.pory"
	waitmovement 0
# 187 "data/maps/BaldesianForest/scripts.pory"
	waitse
# 188 "data/maps/BaldesianForest/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, FALSE
# 189 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Celebi_Text_2, MSGBOX_AUTOCLOSE
# 190 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 191 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
# 192 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 193 "data/maps/BaldesianForest/scripts.pory"
	givemon SPECIES_CELEBI, 75
# 194 "data/maps/BaldesianForest/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CELEBI
# 195 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq BaldesianForest_EventScript_Celebi_6
# 207 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq BaldesianForest_EventScript_Celebi_7
# 220 "data/maps/BaldesianForest/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
BaldesianForest_EventScript_Celebi_5:
# 222 "data/maps/BaldesianForest/scripts.pory"
	fadedefaultbgm
# 223 "data/maps/BaldesianForest/scripts.pory"
	releaseall
	end

BaldesianForest_EventScript_Celebi_2:
# 158 "data/maps/BaldesianForest/scripts.pory"
	playse SE_M_PETAL_DANCE
# 159 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 17, MAP_BALDESIAN_FOREST
# 160 "data/maps/BaldesianForest/scripts.pory"
	delay 8
# 161 "data/maps/BaldesianForest/scripts.pory"
	hideobjectat 17, MAP_BALDESIAN_FOREST
# 162 "data/maps/BaldesianForest/scripts.pory"
	delay 8
# 163 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 17, MAP_BALDESIAN_FOREST
# 164 "data/maps/BaldesianForest/scripts.pory"
	delay 16
# 165 "data/maps/BaldesianForest/scripts.pory"
	hideobjectat 17, MAP_BALDESIAN_FOREST
# 166 "data/maps/BaldesianForest/scripts.pory"
	delay 24
# 167 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 17, MAP_BALDESIAN_FOREST
# 168 "data/maps/BaldesianForest/scripts.pory"
	waitse
	goto BaldesianForest_EventScript_Celebi_1

BaldesianForest_EventScript_Celebi_6:
# 196 "data/maps/BaldesianForest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 197 "data/maps/BaldesianForest/scripts.pory"
	removeobject 13
# 198 "data/maps/BaldesianForest/scripts.pory"
	removeobject 17
# 199 "data/maps/BaldesianForest/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 200 "data/maps/BaldesianForest/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 201 "data/maps/BaldesianForest/scripts.pory"
	waitfanfare
# 202 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Celebi_Text_3, MSGBOX_AUTOCLOSE
# 203 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 204 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_RECEIVED_CELEBI
# 205 "data/maps/BaldesianForest/scripts.pory"
	setvar VAR_BALDESIA_FOREST_STATE, 2
	goto BaldesianForest_EventScript_Celebi_5

BaldesianForest_EventScript_Celebi_7:
# 208 "data/maps/BaldesianForest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 209 "data/maps/BaldesianForest/scripts.pory"
	removeobject 13
# 210 "data/maps/BaldesianForest/scripts.pory"
	removeobject 17
# 211 "data/maps/BaldesianForest/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 212 "data/maps/BaldesianForest/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 213 "data/maps/BaldesianForest/scripts.pory"
	waitfanfare
# 214 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Celebi_Text_4, MSGBOX_AUTOCLOSE
# 215 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 216 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_RECEIVED_CELEBI
# 217 "data/maps/BaldesianForest/scripts.pory"
	setvar VAR_BALDESIA_FOREST_STATE, 2
	goto BaldesianForest_EventScript_Celebi_5


BaldesianForest_EventScript_NoCelebiSummon::
# 228 "data/maps/BaldesianForest/scripts.pory"
	lockall
# 229 "data/maps/BaldesianForest/scripts.pory"
	closemessage
# 230 "data/maps/BaldesianForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 231 "data/maps/BaldesianForest/scripts.pory"
	waitmovement 0
# 232 "data/maps/BaldesianForest/scripts.pory"
	releaseall
	end


BaldesianForest_EventScript_OldMan::
# 237 "data/maps/BaldesianForest/scripts.pory"
	lock
# 238 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 239 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldMan_Text_0, MSGBOX_AUTOCLOSE
# 241 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 242 "data/maps/BaldesianForest/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 243 "data/maps/BaldesianForest/scripts.pory"
	waitmovement 0
# 244 "data/maps/BaldesianForest/scripts.pory"
	release
	end


BaldesianForest_EventScript_OldManDojo::
# 249 "data/maps/BaldesianForest/scripts.pory"
	lock
# 250 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 251 "data/maps/BaldesianForest/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TEACUP, BaldesianForest_EventScript_OldManDojoGiveTeaCup
# 252 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojo_Text_0, MSGBOX_AUTOCLOSE
# 254 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 255 "data/maps/BaldesianForest/scripts.pory"
	release
	end


BaldesianForest_EventScript_Expert_F_RevealGlass::
# 260 "data/maps/BaldesianForest/scripts.pory"
	lock
# 261 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 262 "data/maps/BaldesianForest/scripts.pory"
	goto_if_unset FLAG_SYS_DEFEATED_BRUNO, BaldesianForest_EventScript_Expert_F_DefeatBruno
# 263 "data/maps/BaldesianForest/scripts.pory"
	goto_if_set FLAG_RECEIVED_REVEAL_GLASS, BaldesianForest_EventScript_Expert_F_ExplainRevealGlass
# 264 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Expert_F_RevealGlass_Text_0, MSGBOX_DEFAULT
# 266 "data/maps/BaldesianForest/scripts.pory"
	giveitem ITEM_REVEAL_GLASS
# 267 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 268 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_RECEIVED_REVEAL_GLASS
# 269 "data/maps/BaldesianForest/scripts.pory"
	goto BaldesianForest_EventScript_Expert_F_ExplainRevealGlass
# 270 "data/maps/BaldesianForest/scripts.pory"
	release
	end


BaldesianForest_EventScript_Expert_F_DefeatBruno::
# 275 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Expert_F_DefeatBruno_Text_0, MSGBOX_NPC
	end


BaldesianForest_EventScript_Expert_F_ExplainRevealGlass::
# 283 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Expert_F_ExplainRevealGlass_Text_0, MSGBOX_NPC
	end


BaldesianForest_EventScript_OldManDojoGiveTeaCup::
# 289 "data/maps/BaldesianForest/scripts.pory"
	lock
# 290 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 291 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_0, MSGBOX_YESNO
# 293 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 294 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BaldesianForest_EventScript_OldManDojoGiveTeaCup_2
# 320 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_6, MSGBOX_AUTOCLOSE
BaldesianForest_EventScript_OldManDojoGiveTeaCup_1:
# 323 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 324 "data/maps/BaldesianForest/scripts.pory"
	release
	end

BaldesianForest_EventScript_OldManDojoGiveTeaCup_2:
# 295 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_1, MSGBOX_DEFAULT
# 299 "data/maps/BaldesianForest/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_2, BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_3
# 300 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BaldesianForest_EventScript_OldManDojoGiveTeaCup_6
# 309 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_5, MSGBOX_DEFAULT
# 310 "data/maps/BaldesianForest/scripts.pory"
	checkitem ITEM_UNREMARKABLE_TEACUP
# 311 "data/maps/BaldesianForest/scripts.pory"
	goto_if_ne VAR_RESULT, TRUE, Common_EventScript_ShowBagIsFull
# 312 "data/maps/BaldesianForest/scripts.pory"
	giveitem ITEM_UNREMARKABLE_TEACUP
# 313 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 314 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_RECEIVED_TEACUP
BaldesianForest_EventScript_OldManDojoGiveTeaCup_5:
# 316 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojo_Text_0, MSGBOX_AUTOCLOSE
	goto BaldesianForest_EventScript_OldManDojoGiveTeaCup_1

BaldesianForest_EventScript_OldManDojoGiveTeaCup_6:
# 301 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_4, MSGBOX_DEFAULT
# 302 "data/maps/BaldesianForest/scripts.pory"
	checkitem ITEM_MASTERPIECE_TEACUP
# 303 "data/maps/BaldesianForest/scripts.pory"
	goto_if_ne VAR_RESULT, TRUE, Common_EventScript_ShowBagIsFull
# 304 "data/maps/BaldesianForest/scripts.pory"
	giveitem ITEM_MASTERPIECE_TEACUP
# 305 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 306 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_RECEIVED_TEACUP
	goto BaldesianForest_EventScript_OldManDojoGiveTeaCup_5


BaldesianForest_EventScript_KimonoGirl::
# 329 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_KimonoGirl_Text_0, MSGBOX_NPC
	end


BaldesianForest_EventScript_Masato_Text_0:
# 4 "data/maps/BaldesianForest/scripts.pory"
	.string "Time to show the results of\nmy training!$"

BaldesianForest_EventScript_Masato_Text_1:
# 4 "data/maps/BaldesianForest/scripts.pory"
	.string "Those were poor results…$"

BaldesianForest_EventScript_Masato_Text_2:
# 5 "data/maps/BaldesianForest/scripts.pory"
	.string "I love training!$"

BaldesianForest_EventScript_Kamiko_Text_0:
# 10 "data/maps/BaldesianForest/scripts.pory"
	.string "I just love a stroll through the forest!$"

BaldesianForest_EventScript_Kamiko_Text_1:
# 10 "data/maps/BaldesianForest/scripts.pory"
	.string "Aw, I lost…$"

BaldesianForest_EventScript_Miyako_Text_0:
# 16 "data/maps/BaldesianForest/scripts.pory"
	.string "We're protecting the shrine!$"

BaldesianForest_EventScript_Miyako_Text_1:
# 16 "data/maps/BaldesianForest/scripts.pory"
	.string "The shrine…$"

BaldesianForest_EventScript_Miyako_Text_2:
# 17 "data/maps/BaldesianForest/scripts.pory"
	.string "This shrine used to have tons of\n visitors.\p But as the years went on, more and more\n people stopped coming.$"

BaldesianForest_EventScript_Kotone_Text_0:
# 25 "data/maps/BaldesianForest/scripts.pory"
	.string "CELEBI!\nWhy won't you respond to the melody?$"

BaldesianForest_EventScript_Kotone_Text_1:
# 25 "data/maps/BaldesianForest/scripts.pory"
	.string "The melody…$"

BaldesianForest_EventScript_Kotone_Text_2:
# 26 "data/maps/BaldesianForest/scripts.pory"
	.string "We used to also perform rituals here\n for CELEBI.\p That was a long time ago.$"

BaldesianForest_EventScript_Yoshiko_Text_0:
# 33 "data/maps/BaldesianForest/scripts.pory"
	.string "Argh!\nI still can't beat BRUNO!$"

BaldesianForest_EventScript_Yoshiko_Text_1:
# 33 "data/maps/BaldesianForest/scripts.pory"
	.string "Sorry for taking it out on you.$"

BaldesianForest_EventScript_Yoshiko_Text_2:
# 34 "data/maps/BaldesianForest/scripts.pory"
	.string "I swear!\n BRUNO is impossible to beat!$"

BaldesianForest_EventScript_Hanzo_Text_0:
# 40 "data/maps/BaldesianForest/scripts.pory"
	.string "Haha! I bet you didn't see me!\nDid I scare you?$"

BaldesianForest_EventScript_Hanzo_Text_1:
# 40 "data/maps/BaldesianForest/scripts.pory"
	.string "I'm a master of disguise!$"

BaldesianForest_EventScript_Hanzo_Text_2:
# 41 "data/maps/BaldesianForest/scripts.pory"
	.string "I'm small so its easy for\n me to hide!$"

BaldesianForest_EventScript_Genji_Text_0:
# 47 "data/maps/BaldesianForest/scripts.pory"
	.string "Baldy, baldy, over- huh?\nYou're not bald!$"

BaldesianForest_EventScript_Genji_Text_1:
# 47 "data/maps/BaldesianForest/scripts.pory"
	.string "You're the loser since you\nhave hair!$"

BaldesianForest_EventScript_Genji_Text_2:
# 48 "data/maps/BaldesianForest/scripts.pory"
	.string "Sorry.\n I don't talk to hair-having losers.$"

BaldesianForest_EventScript_Celebi_Text_0:
# 143 "data/maps/BaldesianForest/scripts.pory"
	.string "You sense a mystical energy…\n Try playing the POKé FLUTE?$"

BaldesianForest_EventScript_Celebi_Text_1:
# 152 "data/maps/BaldesianForest/scripts.pory"
	.string "{PLAYER} begins playing the POKé FLUTE…$"

BaldesianForest_EventScript_Celebi_Text_2:
# 189 "data/maps/BaldesianForest/scripts.pory"
	.string "CELEBI was drawn to the sound!$"

BaldesianForest_EventScript_Celebi_Text_3:
# 202 "data/maps/BaldesianForest/scripts.pory"
	.string "CELEBI joined the party!$"

BaldesianForest_EventScript_Celebi_Text_4:
# 214 "data/maps/BaldesianForest/scripts.pory"
	.string "CELEBI was sent to the PC!$"

BaldesianForest_EventScript_OldMan_Text_0:
# 239 "data/maps/BaldesianForest/scripts.pory"
	.string "Huff… Huff…\n I might be old, but I still got it!$"

BaldesianForest_EventScript_OldManDojo_Text_0:
# 252 "data/maps/BaldesianForest/scripts.pory"
	.string "Gahaha!\n Nothing like a good wager!$"

BaldesianForest_EventScript_Expert_F_RevealGlass_Text_0:
# 264 "data/maps/BaldesianForest/scripts.pory"
	.string "Wow! You actually did it?\n As promised, you can have this.$"

BaldesianForest_EventScript_Expert_F_DefeatBruno_Text_0:
# 275 "data/maps/BaldesianForest/scripts.pory"
	.string "Hm…\n You seem strong.\p Tell you what: beat BRUNO\n and I'll give you a prize.$"

BaldesianForest_EventScript_Expert_F_ExplainRevealGlass_Text_0:
# 283 "data/maps/BaldesianForest/scripts.pory"
	.string "That artifact is said to reveal\n the true form of the forces of nature.$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_0:
# 291 "data/maps/BaldesianForest/scripts.pory"
	.string "Hey!\n You like gambling?$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_1:
# 295 "data/maps/BaldesianForest/scripts.pory"
	.string "Gahaha!\n Alright!\p I'm holding something in my hands. Left or right?$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_2:
# 299 "data/maps/BaldesianForest/scripts.pory"
	.string "Left!$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_3:
# 299 "data/maps/BaldesianForest/scripts.pory"
	.string "Right!$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_4:
# 301 "data/maps/BaldesianForest/scripts.pory"
	.string "Gahaha! You win!$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_5:
# 309 "data/maps/BaldesianForest/scripts.pory"
	.string "Gahaha!\nBetter luck next time!$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_6:
# 320 "data/maps/BaldesianForest/scripts.pory"
	.string "… Oh.\n Nevermind then.$"

BaldesianForest_EventScript_KimonoGirl_Text_0:
# 329 "data/maps/BaldesianForest/scripts.pory"
	.string "My grandpa used to train here\n when he was younger.\p He was one of the former MASTER's\n top disciples.$"
