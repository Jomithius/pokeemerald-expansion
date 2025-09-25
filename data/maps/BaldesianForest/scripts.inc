BaldesianForest_MapScripts::
# 7 "data/maps/BaldesianForest/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BaldesianForest_OnResume
	.byte 0


BaldesianForest_OnResume::
# 11 "data/maps/BaldesianForest/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, BaldesianForest_OnResume_2
BaldesianForest_OnResume_1:
	end

BaldesianForest_OnResume_2:
# 12 "data/maps/BaldesianForest/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 13 "data/maps/BaldesianForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 14 "data/maps/BaldesianForest/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Common_EventScript_NopReturn
# 15 "data/maps/BaldesianForest/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_NopReturn
# 16 "data/maps/BaldesianForest/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, Common_EventScript_NopReturn
# 17 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_LAST_TALKED, 1
	goto_if_eq BaldesianForest_OnResume_4
# 17 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_LAST_TALKED, 2
	goto_if_eq BaldesianForest_OnResume_4
# 17 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_LAST_TALKED, 3
	goto_if_eq BaldesianForest_OnResume_4
# 17 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_LAST_TALKED, 4
	goto_if_eq BaldesianForest_OnResume_4
	goto BaldesianForest_OnResume_1

BaldesianForest_OnResume_4:
# 18 "data/maps/BaldesianForest/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto BaldesianForest_OnResume_1


BaldesianForest_EventScript_Masato::
# 25 "data/maps/BaldesianForest/scripts.pory"
	trainerbattle_single TRAINER_MASATO, BaldesianForest_EventScript_Masato_Text_0, BaldesianForest_EventScript_Masato_Text_1
# 26 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Masato_Text_2, MSGBOX_NPC
	end


BaldesianForest_EventScript_Kamiko::
# 31 "data/maps/BaldesianForest/scripts.pory"
	trainerbattle_single TRAINER_KAMIKO, BaldesianForest_EventScript_Kamiko_Text_0, BaldesianForest_EventScript_Kamiko_Text_1
# 32 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Kamiko_Text_0, MSGBOX_NPC
	end


BaldesianForest_EventScript_Miyako::
# 37 "data/maps/BaldesianForest/scripts.pory"
	trainerbattle_single TRAINER_MIYAKO, BaldesianForest_EventScript_Miyako_Text_0, BaldesianForest_EventScript_Miyako_Text_1
# 38 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Miyako_Text_2, MSGBOX_NPC
	end


BaldesianForest_EventScript_Kotone::
# 46 "data/maps/BaldesianForest/scripts.pory"
	trainerbattle_single TRAINER_KOTONE, BaldesianForest_EventScript_Kotone_Text_0, BaldesianForest_EventScript_Kotone_Text_1
# 47 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Kotone_Text_2, MSGBOX_NPC
	end


BaldesianForest_EventScript_Yoshiko::
# 54 "data/maps/BaldesianForest/scripts.pory"
	trainerbattle_single TRAINER_YOSHIKO, BaldesianForest_EventScript_Yoshiko_Text_0, BaldesianForest_EventScript_Yoshiko_Text_1
# 55 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Yoshiko_Text_2, MSGBOX_NPC
	end


BaldesianForest_EventScript_Hanzo::
# 61 "data/maps/BaldesianForest/scripts.pory"
	trainerbattle_single TRAINER_HANZO, BaldesianForest_EventScript_Hanzo_Text_0, BaldesianForest_EventScript_Hanzo_Text_1
# 62 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Hanzo_Text_2, MSGBOX_NPC
	end


BaldesianForest_EventScript_Genji::
# 68 "data/maps/BaldesianForest/scripts.pory"
	trainerbattle_single TRAINER_GENJI, BaldesianForest_EventScript_Genji_Text_0, BaldesianForest_EventScript_Genji_Text_1
# 69 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Genji_Text_2, MSGBOX_NPC
	end


BaldesianForest_EventScript_Denji::
# 75 "data/maps/BaldesianForest/scripts.pory"
	trainerbattle_single TRAINER_CINDY_2, BaldesianForest_EventScript_Denji_Text_0, BaldesianForest_EventScript_Denji_Text_1
# 76 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Denji_Text_2, MSGBOX_NPC
	end


BaldesianForest_EventScript_Landorus::
# 81 "data/maps/BaldesianForest/scripts.pory"
	lock
# 82 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 83 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 84 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_LANDORUS, CRY_MODE_ENCOUNTER
# 85 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 86 "data/maps/BaldesianForest/scripts.pory"
	setwildbattle SPECIES_LANDORUS, 75
# 87 "data/maps/BaldesianForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 88 "data/maps/BaldesianForest/scripts.pory"
	waitstate
# 89 "data/maps/BaldesianForest/scripts.pory"
	release
	end


BaldesianForest_EventScript_Thundurus::
# 94 "data/maps/BaldesianForest/scripts.pory"
	lock
# 95 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 96 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 97 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_THUNDURUS, CRY_MODE_ENCOUNTER
# 98 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 99 "data/maps/BaldesianForest/scripts.pory"
	setwildbattle SPECIES_THUNDURUS, 75
# 100 "data/maps/BaldesianForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 101 "data/maps/BaldesianForest/scripts.pory"
	waitstate
# 102 "data/maps/BaldesianForest/scripts.pory"
	release
	end


BaldesianForest_EventScript_Tornadus::
# 107 "data/maps/BaldesianForest/scripts.pory"
	lock
# 108 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 109 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 110 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_TORNADUS, CRY_MODE_ENCOUNTER
# 111 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 112 "data/maps/BaldesianForest/scripts.pory"
	setwildbattle SPECIES_TORNADUS, 75
# 113 "data/maps/BaldesianForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 114 "data/maps/BaldesianForest/scripts.pory"
	waitstate
# 115 "data/maps/BaldesianForest/scripts.pory"
	release
	end


BaldesianForest_EventScript_Enamorus::
# 120 "data/maps/BaldesianForest/scripts.pory"
	lock
# 121 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 122 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 123 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_ENAMORUS, CRY_MODE_ENCOUNTER
# 124 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 125 "data/maps/BaldesianForest/scripts.pory"
	setwildbattle SPECIES_ENAMORUS, 75
# 126 "data/maps/BaldesianForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 127 "data/maps/BaldesianForest/scripts.pory"
	waitstate
# 128 "data/maps/BaldesianForest/scripts.pory"
	release
	end


BaldesianForest_EventScript_Celebi::
# 133 "data/maps/BaldesianForest/scripts.pory"
	lockall
# 134 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Celebi_Text_0, MSGBOX_YESNO
# 136 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 137 "data/maps/BaldesianForest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BaldesianForest_EventScript_NoCelebiSummon
# 138 "data/maps/BaldesianForest/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 139 "data/maps/BaldesianForest/scripts.pory"
	waitmovement 0
# 140 "data/maps/BaldesianForest/scripts.pory"
	callnative RemoveFollowingPokemon
# 141 "data/maps/BaldesianForest/scripts.pory"
	delay 20
# 142 "data/maps/BaldesianForest/scripts.pory"
	fadenewbgm MUS_NONE
# 143 "data/maps/BaldesianForest/scripts.pory"
	delay 16
# 144 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Celebi_Text_1, MSGBOX_AUTOCLOSE
# 145 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 146 "data/maps/BaldesianForest/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 147 "data/maps/BaldesianForest/scripts.pory"
	delay 480
# 148 "data/maps/BaldesianForest/scripts.pory"
	checkobjectat 33, 12
# 149 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BaldesianForest_EventScript_Celebi_2
# 163 "data/maps/BaldesianForest/scripts.pory"
	playse SE_M_PETAL_DANCE
# 164 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 13, MAP_BALDESIAN_FOREST
# 165 "data/maps/BaldesianForest/scripts.pory"
	delay 8
# 166 "data/maps/BaldesianForest/scripts.pory"
	hideobjectat 13, MAP_BALDESIAN_FOREST
# 167 "data/maps/BaldesianForest/scripts.pory"
	delay 8
# 168 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 13, MAP_BALDESIAN_FOREST
# 169 "data/maps/BaldesianForest/scripts.pory"
	delay 16
# 170 "data/maps/BaldesianForest/scripts.pory"
	hideobjectat 13, MAP_BALDESIAN_FOREST
# 171 "data/maps/BaldesianForest/scripts.pory"
	delay 24
# 172 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 13, MAP_BALDESIAN_FOREST
# 173 "data/maps/BaldesianForest/scripts.pory"
	waitse
BaldesianForest_EventScript_Celebi_1:
# 175 "data/maps/BaldesianForest/scripts.pory"
	delay 16
# 176 "data/maps/BaldesianForest/scripts.pory"
	playse SE_PIN
# 177 "data/maps/BaldesianForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 178 "data/maps/BaldesianForest/scripts.pory"
	waitmovement 0
# 179 "data/maps/BaldesianForest/scripts.pory"
	waitse
# 180 "data/maps/BaldesianForest/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, FALSE
# 181 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Celebi_Text_2, MSGBOX_AUTOCLOSE
# 182 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 183 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BaldesianForest_EventScript_Celebi_6
# 187 "data/maps/BaldesianForest/scripts.pory"
	applymovement 13, BaldesianForest_Movement_JirachiApproachesPlayer
BaldesianForest_EventScript_Celebi_5:
# 189 "data/maps/BaldesianForest/scripts.pory"
	waitmovement 0
# 190 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
# 191 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 192 "data/maps/BaldesianForest/scripts.pory"
	givemon SPECIES_CELEBI, 90
# 193 "data/maps/BaldesianForest/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CELEBI
# 194 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq BaldesianForest_EventScript_Celebi_10
# 205 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq BaldesianForest_EventScript_Celebi_11
# 217 "data/maps/BaldesianForest/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
BaldesianForest_EventScript_Celebi_9:
# 219 "data/maps/BaldesianForest/scripts.pory"
	fadedefaultbgm
# 220 "data/maps/BaldesianForest/scripts.pory"
	releaseall
	end

BaldesianForest_EventScript_Celebi_2:
# 150 "data/maps/BaldesianForest/scripts.pory"
	playse SE_M_PETAL_DANCE
# 151 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 17, MAP_BALDESIAN_FOREST
# 152 "data/maps/BaldesianForest/scripts.pory"
	delay 8
# 153 "data/maps/BaldesianForest/scripts.pory"
	hideobjectat 17, MAP_BALDESIAN_FOREST
# 154 "data/maps/BaldesianForest/scripts.pory"
	delay 8
# 155 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 17, MAP_BALDESIAN_FOREST
# 156 "data/maps/BaldesianForest/scripts.pory"
	delay 16
# 157 "data/maps/BaldesianForest/scripts.pory"
	hideobjectat 17, MAP_BALDESIAN_FOREST
# 158 "data/maps/BaldesianForest/scripts.pory"
	delay 24
# 159 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 17, MAP_BALDESIAN_FOREST
# 160 "data/maps/BaldesianForest/scripts.pory"
	waitse
	goto BaldesianForest_EventScript_Celebi_1

BaldesianForest_EventScript_Celebi_6:
# 184 "data/maps/BaldesianForest/scripts.pory"
	applymovement 17, BaldesianForest_Movement_JirachiApproachesPlayer
	goto BaldesianForest_EventScript_Celebi_5

BaldesianForest_EventScript_Celebi_10:
# 195 "data/maps/BaldesianForest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 196 "data/maps/BaldesianForest/scripts.pory"
	removeobject 13
# 197 "data/maps/BaldesianForest/scripts.pory"
	removeobject 17
# 198 "data/maps/BaldesianForest/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 199 "data/maps/BaldesianForest/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 200 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Celebi_Text_3, MSGBOX_DEFAULT
# 201 "data/maps/BaldesianForest/scripts.pory"
	waitfanfare
# 202 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_RECEIVED_CELEBI
# 203 "data/maps/BaldesianForest/scripts.pory"
	setvar VAR_BALDESIA_FOREST_STATE, 2
	goto BaldesianForest_EventScript_Celebi_9

BaldesianForest_EventScript_Celebi_11:
# 206 "data/maps/BaldesianForest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 207 "data/maps/BaldesianForest/scripts.pory"
	removeobject 13
# 208 "data/maps/BaldesianForest/scripts.pory"
	removeobject 17
# 209 "data/maps/BaldesianForest/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 210 "data/maps/BaldesianForest/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 211 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Celebi_Text_4, MSGBOX_DEFAULT
# 212 "data/maps/BaldesianForest/scripts.pory"
	waitfanfare
# 213 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_RECEIVED_CELEBI
# 214 "data/maps/BaldesianForest/scripts.pory"
	setvar VAR_BALDESIA_FOREST_STATE, 2
	goto BaldesianForest_EventScript_Celebi_9


BaldesianForest_EventScript_NoCelebiSummon::
# 225 "data/maps/BaldesianForest/scripts.pory"
	closemessage
# 226 "data/maps/BaldesianForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 227 "data/maps/BaldesianForest/scripts.pory"
	waitmovement 0
# 228 "data/maps/BaldesianForest/scripts.pory"
	releaseall
	end


BaldesianForest_EventScript_OldMan::
# 233 "data/maps/BaldesianForest/scripts.pory"
	lock
# 234 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 235 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldMan_Text_0, MSGBOX_AUTOCLOSE
# 237 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 238 "data/maps/BaldesianForest/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 239 "data/maps/BaldesianForest/scripts.pory"
	waitmovement 0
# 240 "data/maps/BaldesianForest/scripts.pory"
	release
	end


BaldesianForest_EventScript_OldManDojo::
# 245 "data/maps/BaldesianForest/scripts.pory"
	lock
# 246 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 247 "data/maps/BaldesianForest/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TEACUP, BaldesianForest_EventScript_OldManDojoGiveTeaCup
# 248 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojo_Text_0, MSGBOX_AUTOCLOSE
# 250 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 251 "data/maps/BaldesianForest/scripts.pory"
	release
	end


BaldesianForest_EventScript_Expert_F_RevealGlass::
# 256 "data/maps/BaldesianForest/scripts.pory"
	lock
# 257 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 258 "data/maps/BaldesianForest/scripts.pory"
	goto_if_unset FLAG_SYS_DEFEATED_BRUNO, BaldesianForest_EventScript_Expert_F_DefeatBruno
# 259 "data/maps/BaldesianForest/scripts.pory"
	goto_if_set FLAG_RECEIVED_REVEAL_GLASS, BaldesianForest_EventScript_Expert_F_ExplainRevealGlass
# 260 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Expert_F_RevealGlass_Text_0, MSGBOX_DEFAULT
# 262 "data/maps/BaldesianForest/scripts.pory"
	checkitemspace ITEM_REVEAL_GLASS
# 263 "data/maps/BaldesianForest/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 264 "data/maps/BaldesianForest/scripts.pory"
	giveitem ITEM_REVEAL_GLASS
# 265 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 266 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_RECEIVED_REVEAL_GLASS
# 267 "data/maps/BaldesianForest/scripts.pory"
	goto BaldesianForest_EventScript_Expert_F_ExplainRevealGlass
# 268 "data/maps/BaldesianForest/scripts.pory"
	release
	end


BaldesianForest_EventScript_Expert_F_DefeatBruno::
# 273 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Expert_F_DefeatBruno_Text_0, MSGBOX_NPC
	end


BaldesianForest_EventScript_Expert_F_ExplainRevealGlass::
# 281 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Expert_F_ExplainRevealGlass_Text_0, MSGBOX_NPC
	end


BaldesianForest_EventScript_OldManDojoGiveTeaCup::
# 287 "data/maps/BaldesianForest/scripts.pory"
	lock
# 288 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 289 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_0, MSGBOX_YESNO
# 291 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 292 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BaldesianForest_EventScript_OldManDojoGiveTeaCup_2
# 318 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_6, MSGBOX_AUTOCLOSE
BaldesianForest_EventScript_OldManDojoGiveTeaCup_1:
# 321 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 322 "data/maps/BaldesianForest/scripts.pory"
	release
	end

BaldesianForest_EventScript_OldManDojoGiveTeaCup_2:
# 293 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_1, MSGBOX_DEFAULT
# 297 "data/maps/BaldesianForest/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_2, BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_3
# 298 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BaldesianForest_EventScript_OldManDojoGiveTeaCup_6
# 307 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_5, MSGBOX_DEFAULT
# 308 "data/maps/BaldesianForest/scripts.pory"
	checkitemspace ITEM_UNREMARKABLE_TEACUP
# 309 "data/maps/BaldesianForest/scripts.pory"
	goto_if_ne VAR_RESULT, TRUE, Common_EventScript_ShowBagIsFull
# 310 "data/maps/BaldesianForest/scripts.pory"
	giveitem ITEM_UNREMARKABLE_TEACUP
# 311 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 312 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_RECEIVED_TEACUP
BaldesianForest_EventScript_OldManDojoGiveTeaCup_5:
# 314 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojo_Text_0, MSGBOX_AUTOCLOSE
	goto BaldesianForest_EventScript_OldManDojoGiveTeaCup_1

BaldesianForest_EventScript_OldManDojoGiveTeaCup_6:
# 299 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_4, MSGBOX_DEFAULT
# 300 "data/maps/BaldesianForest/scripts.pory"
	checkitemspace ITEM_MASTERPIECE_TEACUP
# 301 "data/maps/BaldesianForest/scripts.pory"
	goto_if_ne VAR_RESULT, TRUE, Common_EventScript_ShowBagIsFull
# 302 "data/maps/BaldesianForest/scripts.pory"
	giveitem ITEM_MASTERPIECE_TEACUP
# 303 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 304 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_RECEIVED_TEACUP
	goto BaldesianForest_EventScript_OldManDojoGiveTeaCup_5


BaldesianForest_EventScript_KimonoGirl::
# 327 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_KimonoGirl_Text_0, MSGBOX_NPC
	end


# 334 "data/maps/BaldesianForest/scripts.pory"
BaldesianForest_Movement_JirachiApproachesPlayer:
# 335 "data/maps/BaldesianForest/scripts.pory"
	levitate
# 336 "data/maps/BaldesianForest/scripts.pory"
	walk_down
# 336 "data/maps/BaldesianForest/scripts.pory"
	walk_down
# 336 "data/maps/BaldesianForest/scripts.pory"
	walk_down
# 337 "data/maps/BaldesianForest/scripts.pory"
	stop_levitate
	step_end

BaldesianForest_EventScript_Masato_Text_0:
# 25 "data/maps/BaldesianForest/scripts.pory"
	.string "Time to show the results of\nmy training!$"

BaldesianForest_EventScript_Masato_Text_1:
# 25 "data/maps/BaldesianForest/scripts.pory"
	.string "Those were poor results…$"

BaldesianForest_EventScript_Masato_Text_2:
# 26 "data/maps/BaldesianForest/scripts.pory"
	.string "I love training!$"

BaldesianForest_EventScript_Kamiko_Text_0:
# 31 "data/maps/BaldesianForest/scripts.pory"
	.string "I just love a stroll through the forest!$"

BaldesianForest_EventScript_Kamiko_Text_1:
# 31 "data/maps/BaldesianForest/scripts.pory"
	.string "Aw, I lost…$"

BaldesianForest_EventScript_Miyako_Text_0:
# 37 "data/maps/BaldesianForest/scripts.pory"
	.string "We're protecting the shrine!$"

BaldesianForest_EventScript_Miyako_Text_1:
# 37 "data/maps/BaldesianForest/scripts.pory"
	.string "The shrine…$"

BaldesianForest_EventScript_Miyako_Text_2:
# 38 "data/maps/BaldesianForest/scripts.pory"
	.string "This shrine used to have tons of\n visitors.\p But as the years went on, more and more\n people stopped coming.$"

BaldesianForest_EventScript_Kotone_Text_0:
# 46 "data/maps/BaldesianForest/scripts.pory"
	.string "CELEBI!\nWhy won't you respond to the melody?$"

BaldesianForest_EventScript_Kotone_Text_1:
# 46 "data/maps/BaldesianForest/scripts.pory"
	.string "The melody…$"

BaldesianForest_EventScript_Kotone_Text_2:
# 47 "data/maps/BaldesianForest/scripts.pory"
	.string "We used to also perform rituals here\n for CELEBI.\p That was a long time ago.$"

BaldesianForest_EventScript_Yoshiko_Text_0:
# 54 "data/maps/BaldesianForest/scripts.pory"
	.string "Argh!\nI still can't beat BRUNO!$"

BaldesianForest_EventScript_Yoshiko_Text_1:
# 54 "data/maps/BaldesianForest/scripts.pory"
	.string "Sorry for taking it out on you.$"

BaldesianForest_EventScript_Yoshiko_Text_2:
# 55 "data/maps/BaldesianForest/scripts.pory"
	.string "I swear!\n BRUNO is impossible to beat!$"

BaldesianForest_EventScript_Hanzo_Text_0:
# 61 "data/maps/BaldesianForest/scripts.pory"
	.string "Haha! I bet you didn't see me!\nDid I scare you?$"

BaldesianForest_EventScript_Hanzo_Text_1:
# 61 "data/maps/BaldesianForest/scripts.pory"
	.string "I'm a master of disguise!$"

BaldesianForest_EventScript_Hanzo_Text_2:
# 62 "data/maps/BaldesianForest/scripts.pory"
	.string "I'm small so its easy for\n me to hide!$"

BaldesianForest_EventScript_Genji_Text_0:
# 68 "data/maps/BaldesianForest/scripts.pory"
	.string "Baldy, baldy, over- huh?\nYou're not bald!$"

BaldesianForest_EventScript_Genji_Text_1:
# 68 "data/maps/BaldesianForest/scripts.pory"
	.string "You're the loser since you\nhave hair!$"

BaldesianForest_EventScript_Genji_Text_2:
# 69 "data/maps/BaldesianForest/scripts.pory"
	.string "Sorry.\n I don't talk to hair-having losers.$"

BaldesianForest_EventScript_Denji_Text_0:
# 75 "data/maps/BaldesianForest/scripts.pory"
	.string "Hair detected!$"

BaldesianForest_EventScript_Denji_Text_1:
# 75 "data/maps/BaldesianForest/scripts.pory"
	.string "I guess you can keep your hair.$"

BaldesianForest_EventScript_Denji_Text_2:
# 76 "data/maps/BaldesianForest/scripts.pory"
	.string "Being bald is way better.$"

BaldesianForest_EventScript_Celebi_Text_0:
# 134 "data/maps/BaldesianForest/scripts.pory"
	.string "You sense a mystical energy…\n Try playing the POKé FLUTE?$"

BaldesianForest_EventScript_Celebi_Text_1:
# 144 "data/maps/BaldesianForest/scripts.pory"
	.string "{PLAYER} begins playing the POKé FLUTE…$"

BaldesianForest_EventScript_Celebi_Text_2:
# 181 "data/maps/BaldesianForest/scripts.pory"
	.string "CELEBI was drawn to the sound!$"

BaldesianForest_EventScript_Celebi_Text_3:
# 200 "data/maps/BaldesianForest/scripts.pory"
	.string "CELEBI joined the party!$"

BaldesianForest_EventScript_Celebi_Text_4:
# 211 "data/maps/BaldesianForest/scripts.pory"
	.string "CELEBI was sent to the PC!$"

BaldesianForest_EventScript_OldMan_Text_0:
# 235 "data/maps/BaldesianForest/scripts.pory"
	.string "Huff… Huff…\n I might be old, but I still got it!$"

BaldesianForest_EventScript_OldManDojo_Text_0:
# 248 "data/maps/BaldesianForest/scripts.pory"
	.string "Gahaha!\n Nothing like a good wager!$"

BaldesianForest_EventScript_Expert_F_RevealGlass_Text_0:
# 260 "data/maps/BaldesianForest/scripts.pory"
	.string "Wow! You actually did it?\n As promised, you can have this.$"

BaldesianForest_EventScript_Expert_F_DefeatBruno_Text_0:
# 273 "data/maps/BaldesianForest/scripts.pory"
	.string "Hm…\n You seem strong.\p Tell you what: beat BRUNO\n and I'll give you a prize.$"

BaldesianForest_EventScript_Expert_F_ExplainRevealGlass_Text_0:
# 281 "data/maps/BaldesianForest/scripts.pory"
	.string "That artifact is said to reveal\n the true form of the forces of nature.$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_0:
# 289 "data/maps/BaldesianForest/scripts.pory"
	.string "Hey!\n You like gambling?$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_1:
# 293 "data/maps/BaldesianForest/scripts.pory"
	.string "Gahaha!\n All right!\p I'm holding something in my hands.\n Left or right?$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_2:
# 297 "data/maps/BaldesianForest/scripts.pory"
	.string "Left!$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_3:
# 297 "data/maps/BaldesianForest/scripts.pory"
	.string "Right!$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_4:
# 299 "data/maps/BaldesianForest/scripts.pory"
	.string "Gahaha! You win!$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_5:
# 307 "data/maps/BaldesianForest/scripts.pory"
	.string "Gahaha!\nBetter luck next time!$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_6:
# 318 "data/maps/BaldesianForest/scripts.pory"
	.string "… Oh.\n Nevermind then.$"

BaldesianForest_EventScript_KimonoGirl_Text_0:
# 327 "data/maps/BaldesianForest/scripts.pory"
	.string "My grandpa used to train here\n when he was younger.\p He was one of the former MASTER's\n top disciples.$"
