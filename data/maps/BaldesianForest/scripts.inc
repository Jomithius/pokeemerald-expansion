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
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 162 "data/maps/BaldesianForest/scripts.pory"
	waitmovement 0
# 163 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Celebi_Text_1, MSGBOX_AUTOCLOSE
# 164 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 165 "data/maps/BaldesianForest/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 166 "data/maps/BaldesianForest/scripts.pory"
	delay 480
# 167 "data/maps/BaldesianForest/scripts.pory"
	checkobjectat 33, 12
# 168 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BaldesianForest_EventScript_Celebi_2
# 182 "data/maps/BaldesianForest/scripts.pory"
	playse SE_M_PETAL_DANCE
# 183 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 13, MAP_BALDESIAN_FOREST
# 184 "data/maps/BaldesianForest/scripts.pory"
	delay 8
# 185 "data/maps/BaldesianForest/scripts.pory"
	hideobjectat 13, MAP_BALDESIAN_FOREST
# 186 "data/maps/BaldesianForest/scripts.pory"
	delay 8
# 187 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 13, MAP_BALDESIAN_FOREST
# 188 "data/maps/BaldesianForest/scripts.pory"
	delay 16
# 189 "data/maps/BaldesianForest/scripts.pory"
	hideobjectat 13, MAP_BALDESIAN_FOREST
# 190 "data/maps/BaldesianForest/scripts.pory"
	delay 24
# 191 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 13, MAP_BALDESIAN_FOREST
# 192 "data/maps/BaldesianForest/scripts.pory"
	waitse
BaldesianForest_EventScript_Celebi_1:
# 194 "data/maps/BaldesianForest/scripts.pory"
	delay 16
# 195 "data/maps/BaldesianForest/scripts.pory"
	playse SE_PIN
# 196 "data/maps/BaldesianForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 197 "data/maps/BaldesianForest/scripts.pory"
	waitmovement 0
# 198 "data/maps/BaldesianForest/scripts.pory"
	waitse
# 199 "data/maps/BaldesianForest/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, FALSE
# 200 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Celebi_Text_2, MSGBOX_AUTOCLOSE
# 201 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 202 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BaldesianForest_EventScript_Celebi_6
# 206 "data/maps/BaldesianForest/scripts.pory"
	applymovement 13, BaldesianForest_Movement_CelebiApproachesPlayer
BaldesianForest_EventScript_Celebi_5:
# 208 "data/maps/BaldesianForest/scripts.pory"
	waitmovement 0
# 209 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
# 210 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 211 "data/maps/BaldesianForest/scripts.pory"
	givemon SPECIES_CELEBI, 90
# 212 "data/maps/BaldesianForest/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CELEBI
# 213 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq BaldesianForest_EventScript_Celebi_10
# 224 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq BaldesianForest_EventScript_Celebi_11
# 236 "data/maps/BaldesianForest/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
BaldesianForest_EventScript_Celebi_9:
# 238 "data/maps/BaldesianForest/scripts.pory"
	callnative UpdateFollowingPokemon
# 239 "data/maps/BaldesianForest/scripts.pory"
	fadedefaultbgm
# 240 "data/maps/BaldesianForest/scripts.pory"
	releaseall
	end

BaldesianForest_EventScript_Celebi_2:
# 169 "data/maps/BaldesianForest/scripts.pory"
	playse SE_M_PETAL_DANCE
# 170 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 17, MAP_BALDESIAN_FOREST
# 171 "data/maps/BaldesianForest/scripts.pory"
	delay 8
# 172 "data/maps/BaldesianForest/scripts.pory"
	hideobjectat 17, MAP_BALDESIAN_FOREST
# 173 "data/maps/BaldesianForest/scripts.pory"
	delay 8
# 174 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 17, MAP_BALDESIAN_FOREST
# 175 "data/maps/BaldesianForest/scripts.pory"
	delay 16
# 176 "data/maps/BaldesianForest/scripts.pory"
	hideobjectat 17, MAP_BALDESIAN_FOREST
# 177 "data/maps/BaldesianForest/scripts.pory"
	delay 24
# 178 "data/maps/BaldesianForest/scripts.pory"
	showobjectat 17, MAP_BALDESIAN_FOREST
# 179 "data/maps/BaldesianForest/scripts.pory"
	waitse
	goto BaldesianForest_EventScript_Celebi_1

BaldesianForest_EventScript_Celebi_6:
# 203 "data/maps/BaldesianForest/scripts.pory"
	applymovement 17, BaldesianForest_Movement_CelebiApproachesPlayer
	goto BaldesianForest_EventScript_Celebi_5

BaldesianForest_EventScript_Celebi_10:
# 214 "data/maps/BaldesianForest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 215 "data/maps/BaldesianForest/scripts.pory"
	removeobject 13
# 216 "data/maps/BaldesianForest/scripts.pory"
	removeobject 17
# 217 "data/maps/BaldesianForest/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 218 "data/maps/BaldesianForest/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 219 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Celebi_Text_3, MSGBOX_DEFAULT
# 220 "data/maps/BaldesianForest/scripts.pory"
	waitfanfare
# 221 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_RECEIVED_CELEBI
# 222 "data/maps/BaldesianForest/scripts.pory"
	setvar VAR_BALDESIA_FOREST_STATE, 2
	goto BaldesianForest_EventScript_Celebi_9

BaldesianForest_EventScript_Celebi_11:
# 225 "data/maps/BaldesianForest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 226 "data/maps/BaldesianForest/scripts.pory"
	removeobject 13
# 227 "data/maps/BaldesianForest/scripts.pory"
	removeobject 17
# 228 "data/maps/BaldesianForest/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 229 "data/maps/BaldesianForest/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 230 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Celebi_Text_4, MSGBOX_DEFAULT
# 231 "data/maps/BaldesianForest/scripts.pory"
	waitfanfare
# 232 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_RECEIVED_CELEBI
# 233 "data/maps/BaldesianForest/scripts.pory"
	setvar VAR_BALDESIA_FOREST_STATE, 2
	goto BaldesianForest_EventScript_Celebi_9


BaldesianForest_EventScript_NoCelebiSummon::
# 245 "data/maps/BaldesianForest/scripts.pory"
	closemessage
# 246 "data/maps/BaldesianForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 247 "data/maps/BaldesianForest/scripts.pory"
	waitmovement 0
# 248 "data/maps/BaldesianForest/scripts.pory"
	releaseall
	end


BaldesianForest_EventScript_OldMan::
# 253 "data/maps/BaldesianForest/scripts.pory"
	lock
# 254 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 255 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldMan_Text_0, MSGBOX_AUTOCLOSE
# 257 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 258 "data/maps/BaldesianForest/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 259 "data/maps/BaldesianForest/scripts.pory"
	waitmovement 0
# 260 "data/maps/BaldesianForest/scripts.pory"
	release
	end


BaldesianForest_EventScript_OldManDojo::
# 265 "data/maps/BaldesianForest/scripts.pory"
	lock
# 266 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 267 "data/maps/BaldesianForest/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TEACUP, BaldesianForest_EventScript_OldManDojoGiveTeaCup
# 268 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojo_Text_0, MSGBOX_AUTOCLOSE
# 270 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 271 "data/maps/BaldesianForest/scripts.pory"
	release
	end


BaldesianForest_EventScript_Expert_F_RevealGlass::
# 276 "data/maps/BaldesianForest/scripts.pory"
	lock
# 277 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 278 "data/maps/BaldesianForest/scripts.pory"
	goto_if_unset FLAG_SYS_DEFEATED_BRUNO, BaldesianForest_EventScript_Expert_F_DefeatBruno
# 279 "data/maps/BaldesianForest/scripts.pory"
	goto_if_set FLAG_RECEIVED_REVEAL_GLASS, BaldesianForest_EventScript_Expert_F_ExplainRevealGlass
# 280 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Expert_F_RevealGlass_Text_0, MSGBOX_DEFAULT
# 282 "data/maps/BaldesianForest/scripts.pory"
	checkitemspace ITEM_REVEAL_GLASS
# 283 "data/maps/BaldesianForest/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 284 "data/maps/BaldesianForest/scripts.pory"
	giveitem ITEM_REVEAL_GLASS
# 285 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 286 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_RECEIVED_REVEAL_GLASS
# 287 "data/maps/BaldesianForest/scripts.pory"
	goto BaldesianForest_EventScript_Expert_F_ExplainRevealGlass
# 288 "data/maps/BaldesianForest/scripts.pory"
	release
	end


BaldesianForest_EventScript_Expert_F_DefeatBruno::
# 293 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Expert_F_DefeatBruno_Text_0, MSGBOX_NPC
	end


BaldesianForest_EventScript_Expert_F_ExplainRevealGlass::
# 301 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_Expert_F_ExplainRevealGlass_Text_0, MSGBOX_AUTOCLOSE
# 303 "data/maps/BaldesianForest/scripts.pory"
	release
	end


BaldesianForest_EventScript_OldManDojoGiveTeaCup::
# 308 "data/maps/BaldesianForest/scripts.pory"
	lock
# 309 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 310 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_0, MSGBOX_YESNO
# 312 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 313 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BaldesianForest_EventScript_OldManDojoGiveTeaCup_2
# 339 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_6, MSGBOX_AUTOCLOSE
BaldesianForest_EventScript_OldManDojoGiveTeaCup_1:
# 342 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 343 "data/maps/BaldesianForest/scripts.pory"
	release
	end

BaldesianForest_EventScript_OldManDojoGiveTeaCup_2:
# 314 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_1, MSGBOX_DEFAULT
# 318 "data/maps/BaldesianForest/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_2, BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_3
# 319 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BaldesianForest_EventScript_OldManDojoGiveTeaCup_6
# 328 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_5, MSGBOX_DEFAULT
# 329 "data/maps/BaldesianForest/scripts.pory"
	checkitemspace ITEM_UNREMARKABLE_TEACUP
# 330 "data/maps/BaldesianForest/scripts.pory"
	goto_if_ne VAR_RESULT, TRUE, Common_EventScript_ShowBagIsFull
# 331 "data/maps/BaldesianForest/scripts.pory"
	giveitem ITEM_UNREMARKABLE_TEACUP
# 332 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 333 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_RECEIVED_TEACUP
BaldesianForest_EventScript_OldManDojoGiveTeaCup_5:
# 335 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojo_Text_0, MSGBOX_AUTOCLOSE
	goto BaldesianForest_EventScript_OldManDojoGiveTeaCup_1

BaldesianForest_EventScript_OldManDojoGiveTeaCup_6:
# 320 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_4, MSGBOX_DEFAULT
# 321 "data/maps/BaldesianForest/scripts.pory"
	checkitemspace ITEM_MASTERPIECE_TEACUP
# 322 "data/maps/BaldesianForest/scripts.pory"
	goto_if_ne VAR_RESULT, TRUE, Common_EventScript_ShowBagIsFull
# 323 "data/maps/BaldesianForest/scripts.pory"
	giveitem ITEM_MASTERPIECE_TEACUP
# 324 "data/maps/BaldesianForest/scripts.pory"
	waitmessage
# 325 "data/maps/BaldesianForest/scripts.pory"
	setflag FLAG_RECEIVED_TEACUP
	goto BaldesianForest_EventScript_OldManDojoGiveTeaCup_5


BaldesianForest_EventScript_KimonoGirl::
# 348 "data/maps/BaldesianForest/scripts.pory"
	msgbox BaldesianForest_EventScript_KimonoGirl_Text_0, MSGBOX_NPC
	end


# 355 "data/maps/BaldesianForest/scripts.pory"
BaldesianForest_Movement_CelebiApproachesPlayer:
# 356 "data/maps/BaldesianForest/scripts.pory"
	levitate
# 357 "data/maps/BaldesianForest/scripts.pory"
	walk_down
# 357 "data/maps/BaldesianForest/scripts.pory"
	walk_down
# 357 "data/maps/BaldesianForest/scripts.pory"
	walk_down
# 358 "data/maps/BaldesianForest/scripts.pory"
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
	.string "I swear!\n BRUNO is impossible to beat!\p I need to catch a FLYING-type\n for that stupid MACHAMP!$"

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
# 163 "data/maps/BaldesianForest/scripts.pory"
	.string "{PLAYER} begins playing the POKé FLUTE…$"

BaldesianForest_EventScript_Celebi_Text_2:
# 200 "data/maps/BaldesianForest/scripts.pory"
	.string "CELEBI was drawn to the sound!$"

BaldesianForest_EventScript_Celebi_Text_3:
# 219 "data/maps/BaldesianForest/scripts.pory"
	.string "CELEBI joined the party!$"

BaldesianForest_EventScript_Celebi_Text_4:
# 230 "data/maps/BaldesianForest/scripts.pory"
	.string "CELEBI was sent to the PC!$"

BaldesianForest_EventScript_OldMan_Text_0:
# 255 "data/maps/BaldesianForest/scripts.pory"
	.string "Huff… Huff…\n I might be old, but I still got it!$"

BaldesianForest_EventScript_OldManDojo_Text_0:
# 268 "data/maps/BaldesianForest/scripts.pory"
	.string "Gahaha!\n Nothing like a good wager!$"

BaldesianForest_EventScript_Expert_F_RevealGlass_Text_0:
# 280 "data/maps/BaldesianForest/scripts.pory"
	.string "Wow! You actually did it?\n As promised, you can have this.$"

BaldesianForest_EventScript_Expert_F_DefeatBruno_Text_0:
# 293 "data/maps/BaldesianForest/scripts.pory"
	.string "Hm…\n You seem strong.\p Tell you what: beat BRUNO\n and I'll give you a prize.$"

BaldesianForest_EventScript_Expert_F_ExplainRevealGlass_Text_0:
# 301 "data/maps/BaldesianForest/scripts.pory"
	.string "That artifact is said to reveal\n the true form of the forces of nature.$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_0:
# 310 "data/maps/BaldesianForest/scripts.pory"
	.string "Hey!\n You like gambling?$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_1:
# 314 "data/maps/BaldesianForest/scripts.pory"
	.string "Gahaha!\n All right!\p I'm holding something in my hands.\n Left or right?$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_2:
# 318 "data/maps/BaldesianForest/scripts.pory"
	.string "Left!$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_3:
# 318 "data/maps/BaldesianForest/scripts.pory"
	.string "Right!$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_4:
# 320 "data/maps/BaldesianForest/scripts.pory"
	.string "Gahaha! You win!$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_5:
# 328 "data/maps/BaldesianForest/scripts.pory"
	.string "Gahaha!\nBetter luck next time!$"

BaldesianForest_EventScript_OldManDojoGiveTeaCup_Text_6:
# 339 "data/maps/BaldesianForest/scripts.pory"
	.string "… Oh.\n Nevermind then.$"

BaldesianForest_EventScript_KimonoGirl_Text_0:
# 348 "data/maps/BaldesianForest/scripts.pory"
	.string "My grandpa used to train here\n when he was younger.\p He was one of the former MASTER's\n top disciples.$"
