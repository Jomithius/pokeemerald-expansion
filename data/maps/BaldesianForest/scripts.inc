BaldesianForest_MapScripts::
# 7 "data/maps/BaldesianForest/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BaldesianForest_OnResume
# 8 "data/maps/BaldesianForest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BaldesianForest_OnTransition
	.byte 0


BaldesianForest_OnTransition::
# 12 "data/maps/BaldesianForest/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	end


BaldesianForest_OnResume::
# 17 "data/maps/BaldesianForest/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, BaldesianForest_TryRemoveLegendary
	end


BaldesianForest_TryRemoveLegendary::
# 22 "data/maps/BaldesianForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 23 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BaldesianForest_TryRemoveLegendary_2
# 23 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BaldesianForest_TryRemoveLegendary_2
BaldesianForest_TryRemoveLegendary_1:
# 35 "data/maps/BaldesianForest/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	return

BaldesianForest_TryRemoveLegendary_2:
# 24 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_LAST_TALKED, 1
	goto_if_eq BaldesianForest_TryRemoveLegendary_6
# 25 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_LAST_TALKED, 2
	goto_if_eq BaldesianForest_TryRemoveLegendary_6
# 26 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_LAST_TALKED, 3
	goto_if_eq BaldesianForest_TryRemoveLegendary_6
# 27 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_LAST_TALKED, 4
	goto_if_eq BaldesianForest_TryRemoveLegendary_6
# 32 "data/maps/BaldesianForest/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	goto BaldesianForest_TryRemoveLegendary_1

BaldesianForest_TryRemoveLegendary_6:
# 28 "data/maps/BaldesianForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 29 "data/maps/BaldesianForest/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	goto BaldesianForest_TryRemoveLegendary_1


BaldesianForest_EventScript_Masato::
# 40 "data/maps/BaldesianForest/scripts.pory"
	trainerbattle_single TRAINER_MASATO, BaldesianForest_EventScript_Masato_Text_0, BaldesianForest_EventScript_Masato_Text_1
# 41 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Masato_Text_2, MSGBOX_NPC
	end


BaldesianForest_EventScript_Kamiko::
# 46 "data/maps/BaldesianForest/scripts.pory"
	trainerbattle_single TRAINER_KAMIKO, BaldesianForest_EventScript_Kamiko_Text_0, BaldesianForest_EventScript_Kamiko_Text_1
# 47 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Kamiko_Text_0, MSGBOX_NPC
	end


BaldesianForest_EventScript_Miyako::
# 52 "data/maps/BaldesianForest/scripts.pory"
	trainerbattle_single TRAINER_MIYAKO, BaldesianForest_EventScript_Miyako_Text_0, BaldesianForest_EventScript_Miyako_Text_1
# 53 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Miyako_Text_2, MSGBOX_NPC
	end


BaldesianForest_EventScript_Kotone::
# 61 "data/maps/BaldesianForest/scripts.pory"
	trainerbattle_single TRAINER_KOTONE, BaldesianForest_EventScript_Kotone_Text_0, BaldesianForest_EventScript_Kotone_Text_1
# 62 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Kotone_Text_2, MSGBOX_NPC
	end


BaldesianForest_EventScript_Yoshiko::
# 69 "data/maps/BaldesianForest/scripts.pory"
	trainerbattle_single TRAINER_YOSHIKO, BaldesianForest_EventScript_Yoshiko_Text_0, BaldesianForest_EventScript_Yoshiko_Text_1
# 70 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Yoshiko_Text_2, MSGBOX_NPC
	end


BaldesianForest_EventScript_Hanzo::
# 78 "data/maps/BaldesianForest/scripts.pory"
	trainerbattle_single TRAINER_HANZO, BaldesianForest_EventScript_Hanzo_Text_0, BaldesianForest_EventScript_Hanzo_Text_1
# 79 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Hanzo_Text_2, MSGBOX_NPC
	end


BaldesianForest_EventScript_Genji::
# 85 "data/maps/BaldesianForest/scripts.pory"
	trainerbattle_single TRAINER_GENJI, BaldesianForest_EventScript_Genji_Text_0, BaldesianForest_EventScript_Genji_Text_1
# 86 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Genji_Text_2, MSGBOX_NPC
	end


BaldesianForest_EventScript_Denji::
# 92 "data/maps/BaldesianForest/scripts.pory"
	trainerbattle_single TRAINER_CINDY_2, BaldesianForest_EventScript_Denji_Text_0, BaldesianForest_EventScript_Denji_Text_1
# 93 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Denji_Text_2, MSGBOX_NPC
	end


BaldesianForest_EventScript_Landorus::
# 98 "data/maps/BaldesianForest/scripts.pory"
	lock
# 99 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 100 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 101 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_LANDORUS, CRY_MODE_ENCOUNTER
# 102 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 103 "data/maps/BaldesianForest/scripts.pory"
	setwildbattle SPECIES_LANDORUS, 75
# 104 "data/maps/BaldesianForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 105 "data/maps/BaldesianForest/scripts.pory"
	waitstate
# 106 "data/maps/BaldesianForest/scripts.pory"
	release
	end


BaldesianForest_EventScript_Thundurus::
# 111 "data/maps/BaldesianForest/scripts.pory"
	lock
# 112 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 113 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 114 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_THUNDURUS, CRY_MODE_ENCOUNTER
# 115 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 116 "data/maps/BaldesianForest/scripts.pory"
	setwildbattle SPECIES_THUNDURUS, 75
# 117 "data/maps/BaldesianForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 118 "data/maps/BaldesianForest/scripts.pory"
	waitstate
# 119 "data/maps/BaldesianForest/scripts.pory"
	release
	end


BaldesianForest_EventScript_Tornadus::
# 124 "data/maps/BaldesianForest/scripts.pory"
	lock
# 125 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 126 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 127 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_TORNADUS, CRY_MODE_ENCOUNTER
# 128 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 129 "data/maps/BaldesianForest/scripts.pory"
	setwildbattle SPECIES_TORNADUS, 75
# 130 "data/maps/BaldesianForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 131 "data/maps/BaldesianForest/scripts.pory"
	waitstate
# 132 "data/maps/BaldesianForest/scripts.pory"
	release
	end


BaldesianForest_EventScript_Enamorus::
# 137 "data/maps/BaldesianForest/scripts.pory"
	lock
# 138 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 139 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 140 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_ENAMORUS, CRY_MODE_ENCOUNTER
# 141 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 142 "data/maps/BaldesianForest/scripts.pory"
	setwildbattle SPECIES_ENAMORUS, 75
# 143 "data/maps/BaldesianForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 144 "data/maps/BaldesianForest/scripts.pory"
	waitstate
# 145 "data/maps/BaldesianForest/scripts.pory"
	release
	end


BaldesianForest_EventScript_Celebi::
# 150 "data/maps/BaldesianForest/scripts.pory"
	lockall
# 151 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Celebi_Text_0, MSGBOX_YESNO
# 153 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 154 "data/maps/BaldesianForest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BaldesianForest_EventScript_NoCelebiSummon
# 155 "data/maps/BaldesianForest/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 156 "data/maps/BaldesianForest/scripts.pory"
	waitmovement 0
# 157 "data/maps/BaldesianForest/scripts.pory"
	callnative RemoveFollowingPokemon
# 158 "data/maps/BaldesianForest/scripts.pory"
	delay 20
# 159 "data/maps/BaldesianForest/scripts.pory"
	fadenewbgm MUS_NONE
# 160 "data/maps/BaldesianForest/scripts.pory"
	delay 16
# 161 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Celebi_Text_1, MSGBOX_AUTOCLOSE
# 162 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 163 "data/maps/BaldesianForest/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 164 "data/maps/BaldesianForest/scripts.pory"
	delay 480
# 165 "data/maps/BaldesianForest/scripts.pory"
	checkobjectat 33, 12
# 166 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BaldesianForest_EventScript_Celebi_2
# 180 "data/maps/BaldesianForest/scripts.pory"
	playse SE_M_PETAL_DANCE
# 181 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 13, MAP_BALDESIAN_FOREST
# 182 "data/maps/BaldesianForest/scripts.pory"
	delay 8
# 183 "data/maps/BaldesianForest/scripts.pory"
	hideobjectat 13, MAP_BALDESIAN_FOREST
# 184 "data/maps/BaldesianForest/scripts.pory"
	delay 8
# 185 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 13, MAP_BALDESIAN_FOREST
# 186 "data/maps/BaldesianForest/scripts.pory"
	delay 16
# 187 "data/maps/BaldesianForest/scripts.pory"
	hideobjectat 13, MAP_BALDESIAN_FOREST
# 188 "data/maps/BaldesianForest/scripts.pory"
	delay 24
# 189 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 13, MAP_BALDESIAN_FOREST
# 190 "data/maps/BaldesianForest/scripts.pory"
	waitse
BaldesianForest_EventScript_Celebi_1:
# 192 "data/maps/BaldesianForest/scripts.pory"
	delay 16
# 193 "data/maps/BaldesianForest/scripts.pory"
	playse SE_PIN
# 194 "data/maps/BaldesianForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 195 "data/maps/BaldesianForest/scripts.pory"
	waitmovement 0
# 196 "data/maps/BaldesianForest/scripts.pory"
	waitse
# 197 "data/maps/BaldesianForest/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, FALSE
# 198 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Celebi_Text_2, MSGBOX_AUTOCLOSE
# 199 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 200 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BaldesianForest_EventScript_Celebi_6
# 204 "data/maps/BaldesianForest/scripts.pory"
	applymovement 13, BaldesianForest_Movement_JirachiApproachesPlayer
BaldesianForest_EventScript_Celebi_5:
# 206 "data/maps/BaldesianForest/scripts.pory"
	waitmovement 0
# 207 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
# 208 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 209 "data/maps/BaldesianForest/scripts.pory"
	givemon SPECIES_CELEBI, 90
# 210 "data/maps/BaldesianForest/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CELEBI
# 211 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq BaldesianForest_EventScript_Celebi_10
# 222 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq BaldesianForest_EventScript_Celebi_11
# 234 "data/maps/BaldesianForest/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
BaldesianForest_EventScript_Celebi_9:
# 236 "data/maps/BaldesianForest/scripts.pory"
	fadedefaultbgm
# 237 "data/maps/BaldesianForest/scripts.pory"
	releaseall
	end

BaldesianForest_EventScript_Celebi_2:
# 167 "data/maps/BaldesianForest/scripts.pory"
	playse SE_M_PETAL_DANCE
# 168 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 17, MAP_BALDESIAN_FOREST
# 169 "data/maps/BaldesianForest/scripts.pory"
	delay 8
# 170 "data/maps/BaldesianForest/scripts.pory"
	hideobjectat 17, MAP_BALDESIAN_FOREST
# 171 "data/maps/BaldesianForest/scripts.pory"
	delay 8
# 172 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 17, MAP_BALDESIAN_FOREST
# 173 "data/maps/BaldesianForest/scripts.pory"
	delay 16
# 174 "data/maps/BaldesianForest/scripts.pory"
	hideobjectat 17, MAP_BALDESIAN_FOREST
# 175 "data/maps/BaldesianForest/scripts.pory"
	delay 24
# 176 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 17, MAP_BALDESIAN_FOREST
# 177 "data/maps/BaldesianForest/scripts.pory"
	waitse
	goto BaldesianForest_EventScript_Celebi_1

BaldesianForest_EventScript_Celebi_6:
# 201 "data/maps/BaldesianForest/scripts.pory"
	applymovement 17, BaldesianForest_Movement_JirachiApproachesPlayer
	goto BaldesianForest_EventScript_Celebi_5

BaldesianForest_EventScript_Celebi_10:
# 212 "data/maps/BaldesianForest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 213 "data/maps/BaldesianForest/scripts.pory"
	removeobject 13
# 214 "data/maps/BaldesianForest/scripts.pory"
	removeobject 17
# 215 "data/maps/BaldesianForest/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 216 "data/maps/BaldesianForest/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 217 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Celebi_Text_3, MSGBOX_DEFAULT
# 218 "data/maps/BaldesianForest/scripts.pory"
	waitfanfare
# 219 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_RECEIVED_CELEBI
# 220 "data/maps/BaldesianForest/scripts.pory"
	setvar VAR_BALDESIA_FOREST_STATE, 2
	goto BaldesianForest_EventScript_Celebi_9

BaldesianForest_EventScript_Celebi_11:
# 223 "data/maps/BaldesianForest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 224 "data/maps/BaldesianForest/scripts.pory"
	removeobject 13
# 225 "data/maps/BaldesianForest/scripts.pory"
	removeobject 17
# 226 "data/maps/BaldesianForest/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 227 "data/maps/BaldesianForest/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 228 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Celebi_Text_4, MSGBOX_DEFAULT
# 229 "data/maps/BaldesianForest/scripts.pory"
	waitfanfare
# 230 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_RECEIVED_CELEBI
# 231 "data/maps/BaldesianForest/scripts.pory"
	setvar VAR_BALDESIA_FOREST_STATE, 2
	goto BaldesianForest_EventScript_Celebi_9


BaldesianForest_EventScript_NoCelebiSummon::
# 242 "data/maps/BaldesianForest/scripts.pory"
	closemessage
# 243 "data/maps/BaldesianForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 244 "data/maps/BaldesianForest/scripts.pory"
	waitmovement 0
# 245 "data/maps/BaldesianForest/scripts.pory"
	releaseall
	end


BaldesianForest_EventScript_OldMan::
# 250 "data/maps/BaldesianForest/scripts.pory"
	lock
# 251 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 252 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldMan_Text_0, MSGBOX_AUTOCLOSE
# 254 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 255 "data/maps/BaldesianForest/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 256 "data/maps/BaldesianForest/scripts.pory"
	waitmovement 0
# 257 "data/maps/BaldesianForest/scripts.pory"
	release
	end


BaldesianForest_EventScript_OldManDojo::
# 262 "data/maps/BaldesianForest/scripts.pory"
	lock
# 263 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 264 "data/maps/BaldesianForest/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TEACUP, BaldesianForest_EventScript_OldManDojoGiveTeaCup
# 265 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojo_Text_0, MSGBOX_AUTOCLOSE
# 267 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 268 "data/maps/BaldesianForest/scripts.pory"
	release
	end


BaldesianForest_EventScript_Expert_F_RevealGlass::
# 273 "data/maps/BaldesianForest/scripts.pory"
	lock
# 274 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 275 "data/maps/BaldesianForest/scripts.pory"
	goto_if_unset FLAG_SYS_DEFEATED_BRUNO, BaldesianForest_EventScript_Expert_F_DefeatBruno
# 276 "data/maps/BaldesianForest/scripts.pory"
	goto_if_set FLAG_RECEIVED_REVEAL_GLASS, BaldesianForest_EventScript_Expert_F_ExplainRevealGlass
# 277 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Expert_F_RevealGlass_Text_0, MSGBOX_DEFAULT
# 279 "data/maps/BaldesianForest/scripts.pory"
	checkitemspace ITEM_REVEAL_GLASS
# 280 "data/maps/BaldesianForest/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 281 "data/maps/BaldesianForest/scripts.pory"
	giveitem ITEM_REVEAL_GLASS
# 282 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 283 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_RECEIVED_REVEAL_GLASS
# 284 "data/maps/BaldesianForest/scripts.pory"
	goto BaldesianForest_EventScript_Expert_F_ExplainRevealGlass
# 285 "data/maps/BaldesianForest/scripts.pory"
	release
	end


BaldesianForest_EventScript_Expert_F_DefeatBruno::
# 290 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Expert_F_DefeatBruno_Text_0, MSGBOX_NPC
	end


BaldesianForest_EventScript_Expert_F_ExplainRevealGlass::
# 298 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Expert_F_ExplainRevealGlass_Text_0, MSGBOX_AUTOCLOSE
# 300 "data/maps/BaldesianForest/scripts.pory"
	release
	end


BaldesianForest_EventScript_OldManDojoGiveTeaCup::
# 305 "data/maps/BaldesianForest/scripts.pory"
	lock
# 306 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 307 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_0, MSGBOX_YESNO
# 309 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 310 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BaldesianForest_EventScript_OldManDojoGiveTeaCup_2
# 336 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_6, MSGBOX_AUTOCLOSE
BaldesianForest_EventScript_OldManDojoGiveTeaCup_1:
# 339 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 340 "data/maps/BaldesianForest/scripts.pory"
	release
	end

BaldesianForest_EventScript_OldManDojoGiveTeaCup_2:
# 311 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_1, MSGBOX_DEFAULT
# 315 "data/maps/BaldesianForest/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_2, BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_3
# 316 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BaldesianForest_EventScript_OldManDojoGiveTeaCup_6
# 325 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_5, MSGBOX_DEFAULT
# 326 "data/maps/BaldesianForest/scripts.pory"
	checkitemspace ITEM_UNREMARKABLE_TEACUP
# 327 "data/maps/BaldesianForest/scripts.pory"
	goto_if_ne VAR_RESULT, TRUE, Common_EventScript_ShowBagIsFull
# 328 "data/maps/BaldesianForest/scripts.pory"
	giveitem ITEM_UNREMARKABLE_TEACUP
# 329 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 330 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_RECEIVED_TEACUP
BaldesianForest_EventScript_OldManDojoGiveTeaCup_5:
# 332 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojo_Text_0, MSGBOX_AUTOCLOSE
	goto BaldesianForest_EventScript_OldManDojoGiveTeaCup_1

BaldesianForest_EventScript_OldManDojoGiveTeaCup_6:
# 317 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_4, MSGBOX_DEFAULT
# 318 "data/maps/BaldesianForest/scripts.pory"
	checkitemspace ITEM_MASTERPIECE_TEACUP
# 319 "data/maps/BaldesianForest/scripts.pory"
	goto_if_ne VAR_RESULT, TRUE, Common_EventScript_ShowBagIsFull
# 320 "data/maps/BaldesianForest/scripts.pory"
	giveitem ITEM_MASTERPIECE_TEACUP
# 321 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 322 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_RECEIVED_TEACUP
	goto BaldesianForest_EventScript_OldManDojoGiveTeaCup_5


BaldesianForest_EventScript_KimonoGirl::
# 345 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_KimonoGirl_Text_0, MSGBOX_NPC
	end


# 352 "data/maps/BaldesianForest/scripts.pory"
BaldesianForest_Movement_JirachiApproachesPlayer:
# 353 "data/maps/BaldesianForest/scripts.pory"
	levitate
# 354 "data/maps/BaldesianForest/scripts.pory"
	walk_down
# 354 "data/maps/BaldesianForest/scripts.pory"
	walk_down
# 354 "data/maps/BaldesianForest/scripts.pory"
	walk_down
# 355 "data/maps/BaldesianForest/scripts.pory"
	stop_levitate
	step_end

BaldesianForest_EventScript_Masato_Text_0:
# 40 "data/maps/BaldesianForest/scripts.pory"
	.string "Time to show the results of\nmy training!$"

BaldesianForest_EventScript_Masato_Text_1:
# 40 "data/maps/BaldesianForest/scripts.pory"
	.string "Those were poor results…$"

BaldesianForest_EventScript_Masato_Text_2:
# 41 "data/maps/BaldesianForest/scripts.pory"
	.string "I love training!$"

BaldesianForest_EventScript_Kamiko_Text_0:
# 46 "data/maps/BaldesianForest/scripts.pory"
	.string "I just love a stroll through the forest!$"

BaldesianForest_EventScript_Kamiko_Text_1:
# 46 "data/maps/BaldesianForest/scripts.pory"
	.string "Aw, I lost…$"

BaldesianForest_EventScript_Miyako_Text_0:
# 52 "data/maps/BaldesianForest/scripts.pory"
	.string "We're protecting the shrine!$"

BaldesianForest_EventScript_Miyako_Text_1:
# 52 "data/maps/BaldesianForest/scripts.pory"
	.string "The shrine…$"

BaldesianForest_EventScript_Miyako_Text_2:
# 53 "data/maps/BaldesianForest/scripts.pory"
	.string "This shrine used to have tons of\n visitors.\p But as the years went on, more and more\n people stopped coming.$"

BaldesianForest_EventScript_Kotone_Text_0:
# 61 "data/maps/BaldesianForest/scripts.pory"
	.string "CELEBI!\nWhy won't you respond to the melody?$"

BaldesianForest_EventScript_Kotone_Text_1:
# 61 "data/maps/BaldesianForest/scripts.pory"
	.string "The melody…$"

BaldesianForest_EventScript_Kotone_Text_2:
# 62 "data/maps/BaldesianForest/scripts.pory"
	.string "Our ancestors used to also perform\n rituals here for CELEBI.\p That was a long time ago.$"

BaldesianForest_EventScript_Yoshiko_Text_0:
# 69 "data/maps/BaldesianForest/scripts.pory"
	.string "Argh!\nI still can't beat BRUNO!$"

BaldesianForest_EventScript_Yoshiko_Text_1:
# 69 "data/maps/BaldesianForest/scripts.pory"
	.string "Sorry for taking it out on you.$"

BaldesianForest_EventScript_Yoshiko_Text_2:
# 70 "data/maps/BaldesianForest/scripts.pory"
	.string "I swear!\n BRUNO is impossible to beat!\p I need to catch a FLYING TYPE\n for that stupid MACHAMP!$"

BaldesianForest_EventScript_Hanzo_Text_0:
# 78 "data/maps/BaldesianForest/scripts.pory"
	.string "Haha! I bet you didn't see me!\nDid I scare you?$"

BaldesianForest_EventScript_Hanzo_Text_1:
# 78 "data/maps/BaldesianForest/scripts.pory"
	.string "I'm a master of disguise!$"

BaldesianForest_EventScript_Hanzo_Text_2:
# 79 "data/maps/BaldesianForest/scripts.pory"
	.string "I'm small so its easy for\n me to hide!$"

BaldesianForest_EventScript_Genji_Text_0:
# 85 "data/maps/BaldesianForest/scripts.pory"
	.string "Baldy, baldy, over- huh?\nYou're not bald!$"

BaldesianForest_EventScript_Genji_Text_1:
# 85 "data/maps/BaldesianForest/scripts.pory"
	.string "You're the loser since you\nhave hair!$"

BaldesianForest_EventScript_Genji_Text_2:
# 86 "data/maps/BaldesianForest/scripts.pory"
	.string "Sorry.\n I don't talk to hair-having losers.$"

BaldesianForest_EventScript_Denji_Text_0:
# 92 "data/maps/BaldesianForest/scripts.pory"
	.string "Hair detected!$"

BaldesianForest_EventScript_Denji_Text_1:
# 92 "data/maps/BaldesianForest/scripts.pory"
	.string "I guess you can keep your hair.$"

BaldesianForest_EventScript_Denji_Text_2:
# 93 "data/maps/BaldesianForest/scripts.pory"
	.string "Being bald is way better.$"

BaldesianForest_EventScript_Celebi_Text_0:
# 151 "data/maps/BaldesianForest/scripts.pory"
	.string "You sense a mystical energy…\n Try playing the POKé FLUTE?$"

BaldesianForest_EventScript_Celebi_Text_1:
# 161 "data/maps/BaldesianForest/scripts.pory"
	.string "{PLAYER} begins playing the POKé FLUTE…$"

BaldesianForest_EventScript_Celebi_Text_2:
# 198 "data/maps/BaldesianForest/scripts.pory"
	.string "CELEBI was drawn to the sound!$"

BaldesianForest_EventScript_Celebi_Text_3:
# 217 "data/maps/BaldesianForest/scripts.pory"
	.string "CELEBI joined the party!$"

BaldesianForest_EventScript_Celebi_Text_4:
# 228 "data/maps/BaldesianForest/scripts.pory"
	.string "CELEBI was sent to the PC!$"

BaldesianForest_EventScript_OldMan_Text_0:
# 252 "data/maps/BaldesianForest/scripts.pory"
	.string "Huff… Huff…\n I might be old, but I still got it!$"

BaldesianForest_EventScript_OldManDojo_Text_0:
# 265 "data/maps/BaldesianForest/scripts.pory"
	.string "Gahaha!\n Nothing like a good wager!$"

BaldesianForest_EventScript_Expert_F_RevealGlass_Text_0:
# 277 "data/maps/BaldesianForest/scripts.pory"
	.string "Wow! You actually did it?\n As promised, you can have this.$"

BaldesianForest_EventScript_Expert_F_DefeatBruno_Text_0:
# 290 "data/maps/BaldesianForest/scripts.pory"
	.string "Hm…\n You seem strong.\p Tell you what: beat BRUNO\n and I'll give you a prize.$"

BaldesianForest_EventScript_Expert_F_ExplainRevealGlass_Text_0:
# 298 "data/maps/BaldesianForest/scripts.pory"
	.string "That artifact is said to reveal\n the true form of the forces of nature.$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_0:
# 307 "data/maps/BaldesianForest/scripts.pory"
	.string "Hey!\n You like gambling?$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_1:
# 311 "data/maps/BaldesianForest/scripts.pory"
	.string "Gahaha!\n All right!\p I'm holding something in my hands.\n Left or right?$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_2:
# 315 "data/maps/BaldesianForest/scripts.pory"
	.string "Left!$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_3:
# 315 "data/maps/BaldesianForest/scripts.pory"
	.string "Right!$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_4:
# 317 "data/maps/BaldesianForest/scripts.pory"
	.string "Gahaha! You win!$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_5:
# 325 "data/maps/BaldesianForest/scripts.pory"
	.string "Gahaha!\nBetter luck next time!$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_6:
# 336 "data/maps/BaldesianForest/scripts.pory"
	.string "… Oh.\n Nevermind then.$"

BaldesianForest_EventScript_KimonoGirl_Text_0:
# 345 "data/maps/BaldesianForest/scripts.pory"
	.string "My grandpa used to train here\n when he was younger.\p He was one of the former MASTER's\n top disciples.$"
