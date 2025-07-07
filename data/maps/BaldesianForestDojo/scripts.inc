BaldesianForestDojo_MapScripts::
# 6 "data/maps/BaldesianForestDojo/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BaldesianForestDojo_OnTransition
# 7 "data/maps/BaldesianForestDojo/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BaldesianForestDojo_OnResume
	.byte 0


BaldesianForestDojo_OnTransition::
# 11 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_TEMP_E
# 12 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_le VAR_BALDESIA_FOREST_DOJO_STATE, 3, BaldesianForestDojo_TryResetGauntlet
# 13 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_ge VAR_BALDESIA_FOREST_DOJO_STATE, 4, BaldesianForestDojo_ResetDojo
	end


BaldesianForestDojo_OnResume::
# 18 "data/maps/BaldesianForestDojo/scripts.pory"
	call_if_defeated TRAINER_LAROLDINA, BaldesianForestDojo_RemoveTrainerPokemon
# 19 "data/maps/BaldesianForestDojo/scripts.pory"
	call_if_defeated TRAINER_BRUNO, BaldesianForestDojo_RemoveBrunoPokemon
	end


BaldesianForestDojo_TryResetGauntlet::
# 24 "data/maps/BaldesianForestDojo/scripts.pory"
	call BaldesianForestDojo_ResetDisciplePositions
# 25 "data/maps/BaldesianForestDojo/scripts.pory"
	call BaldesianForestDojo_RemoveTrainerPokemon
	end


BaldesianForestDojo_ResetDojo::
# 30 "data/maps/BaldesianForestDojo/scripts.pory"
	call BaldesianForestDojo_ResetDisciplePositions
# 31 "data/maps/BaldesianForestDojo/scripts.pory"
	call BaldesianForestDojo_RemoveTrainerPokemon
# 32 "data/maps/BaldesianForestDojo/scripts.pory"
	call BaldesianForestDojo_RemoveBrunoPokemon
	end


BaldesianForestDojo_DisciplePositionsGauntlet::
# 37 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 3
# 38 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 4
# 39 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 5
# 40 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 6
# 41 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 7
# 42 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 8
# 43 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 10
# 44 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 11
# 45 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 13
# 46 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_HIDE_DOJO_DISCIPLES
# 47 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 15
# 48 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 16
# 49 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 17
# 50 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 18
# 51 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 19
# 52 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 20
# 53 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 21
# 54 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 22
# 55 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 23
# 56 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_HIDE_GAUNTLET_TRAINERS
	return


BaldesianForestDojo_ResetDisciplePositions::
# 61 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 15
# 62 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 16
# 63 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 17
# 64 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 18
# 65 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 19
# 66 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 20
# 67 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 21
# 68 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 22
# 69 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 23
# 70 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 26
# 71 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_HIDE_GAUNTLET_TRAINERS
# 72 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_HIDE_LAROLDINA_SPECTATOR
# 73 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 3
# 74 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 4
# 75 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 5
# 76 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 6
# 77 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 7
# 78 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 8
# 79 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 10
# 80 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 11
# 81 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 13
# 82 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_HIDE_DOJO_DISCIPLES
	return


BaldesianForestDojo_DisciplePositionsBruno::
# 87 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 3
# 88 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 4
# 89 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 5
# 90 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 6
# 91 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 7
# 92 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 8
# 93 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 10
# 94 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 11
# 95 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 13
# 96 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_HIDE_DOJO_DISCIPLES
# 97 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 15
# 98 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 16
# 99 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 17
# 100 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 18
# 101 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 19
# 102 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 20
# 103 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 21
# 104 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 23
# 105 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 26
# 106 "data/maps/BaldesianForestDojo/scripts.pory"
	hideobjectat 22, MAP_BALDESIAN_FOREST_DOJO
# 107 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_HIDE_GAUNTLET_TRAINERS
# 108 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_HIDE_LAROLDINA_SPECTATOR
	return


BaldesianForestDojo_RemoveTrainerPokemon::
# 113 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 14
# 114 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 24
# 115 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 25
	return


BaldesianForestDojo_RemoveBrunoPokemon::
# 120 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 2
	return


BaldesianForestDojo_EventScript_KimonoOldWoman::
# 125 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 126 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_eq VAR_BALDESIA_FOREST_DOJO_STATE, 1, BaldesianForestDojo_EventScript_ExplainDojo
# 127 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_eq VAR_BALDESIA_FOREST_DOJO_STATE, 2, BaldesianForestDojo_EventScript_ReadyToChallenge
# 128 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_eq VAR_BALDESIA_FOREST_DOJO_STATE, 3, BaldesianForestDojo_EventScript_ReadyToChallengeBruno
# 129 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_unset FLAG_RECEIVED_PROTECTIVE_PADS, BaldesianForestDojo_EventScript_GiveProtectivePads
# 130 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_KimonoOldWoman_Text_0, MSGBOX_AUTOCLOSE
# 134 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 135 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_ExplainDojo::
# 140 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 141 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_Text_ExplainDojo, MSGBOX_AUTOCLOSE
# 142 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 143 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceRight
# 144 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 145 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 146 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 147 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ExplainDojo_Text_0, MSGBOX_AUTOCLOSE
# 150 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 151 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 152 "data/maps/BaldesianForestDojo/scripts.pory"
	call BaldesianForestDojo_DisciplePositionsGauntlet
# 153 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 154 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 155 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 156 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 157 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 158 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ExplainDojo_Text_1, MSGBOX_AUTOCLOSE
# 160 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 161 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 2
# 162 "data/maps/BaldesianForestDojo/scripts.pory"
	special HealPlayerParty
# 163 "data/maps/BaldesianForestDojo/scripts.pory"
	goto BaldesianForestDojo_EventScript_DojoChallenge
# 164 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_ReadyToChallenge::
# 169 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 170 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ReadyToChallenge_Text_0, MSGBOX_YESNO
# 172 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BaldesianForestDojo_EventScript_ReadyToChallenge_2
# 195 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ReadyToChallenge_Text_2, MSGBOX_AUTOCLOSE
# 197 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
BaldesianForestDojo_EventScript_ReadyToChallenge_1:
# 199 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_ReadyToChallenge_2:
# 173 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceRight
# 174 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 175 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 176 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 177 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ExplainDojo_Text_0, MSGBOX_AUTOCLOSE
# 180 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 181 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 182 "data/maps/BaldesianForestDojo/scripts.pory"
	call BaldesianForestDojo_DisciplePositionsGauntlet
# 183 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 184 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 185 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 186 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 187 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 188 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ReadyToChallenge_Text_1, MSGBOX_AUTOCLOSE
# 190 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 191 "data/maps/BaldesianForestDojo/scripts.pory"
	special HealPlayerParty
# 192 "data/maps/BaldesianForestDojo/scripts.pory"
	goto BaldesianForestDojo_EventScript_DojoChallenge
	goto BaldesianForestDojo_EventScript_ReadyToChallenge_1


BaldesianForestDojo_EventScript_ReadyToChallengeBruno::
# 204 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 205 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ReadyToChallengeBruno_Text_0, MSGBOX_YESNO
# 207 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BaldesianForestDojo_EventScript_ReadyToChallengeBruno_2
# 231 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ReadyToChallenge_Text_2, MSGBOX_AUTOCLOSE
# 233 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
BaldesianForestDojo_EventScript_ReadyToChallengeBruno_1:
# 235 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_ReadyToChallengeBruno_2:
# 208 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceRight
# 209 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 210 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 211 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 212 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ReadyToChallengeBruno_Text_1, MSGBOX_AUTOCLOSE
# 216 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 217 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 218 "data/maps/BaldesianForestDojo/scripts.pory"
	call BaldesianForestDojo_DisciplePositionsBruno
# 219 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 220 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 221 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 222 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 223 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 224 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ReadyToChallenge_Text_1, MSGBOX_AUTOCLOSE
# 226 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 227 "data/maps/BaldesianForestDojo/scripts.pory"
	special HealPlayerParty
# 228 "data/maps/BaldesianForestDojo/scripts.pory"
	goto BaldesianForestDojo_EventScript_ChallengeBruno
	goto BaldesianForestDojo_EventScript_ReadyToChallengeBruno_1


BaldesianForestDojo_EventScript_GiveProtectivePads::
# 240 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 241 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveProtectivePads_Text_0, MSGBOX_AUTOCLOSE
# 244 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 245 "data/maps/BaldesianForestDojo/scripts.pory"
	checkitemspace ITEM_PROTECTIVE_PADS
# 246 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BaldesianForestDojo_EventScript_GiveProtectivePads_2
# 254 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveProtectivePads_Text_2, MSGBOX_AUTOCLOSE
BaldesianForestDojo_EventScript_GiveProtectivePads_1:
# 257 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 258 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_GiveProtectivePads_2:
# 247 "data/maps/BaldesianForestDojo/scripts.pory"
	giveitem ITEM_PROTECTIVE_PADS
# 248 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 249 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_RECEIVED_PROTECTIVE_PADS
# 250 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveProtectivePads_Text_1, MSGBOX_AUTOCLOSE
	goto BaldesianForestDojo_EventScript_GiveProtectivePads_1


BaldesianForestDojo_EventScript_Bruno::
# 263 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 264 "data/maps/BaldesianForestDojo/scripts.pory"
	faceplayer
# 265 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_le VAR_BALDESIA_FOREST_DOJO_STATE, 3, BaldesianForestDojo_EventScript_BrunoAChallenger
# 266 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_unset FLAG_SYS_DEFEATED_BRUNO, BaldesianForestDojo_EventScript_GiveKubfu
# 267 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_eq VAR_BALDESIA_FOREST_DOJO_STATE, 4, BaldesianForestDojo_EventScript_GiveScroll
# 268 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_Bruno_Text_0, MSGBOX_AUTOCLOSE
# 274 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 275 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 276 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 277 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_BrunoAChallenger::
# 282 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 283 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_BrunoAChallenger_Text_0, MSGBOX_YESNO
# 284 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 285 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BaldesianForestDojo_EventScript_BrunoAChallenger_2
# 292 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_BrunoAChallenger_Text_2, MSGBOX_AUTOCLOSE
BaldesianForestDojo_EventScript_BrunoAChallenger_1:
# 295 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 296 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 297 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 298 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_BrunoAChallenger_2:
# 286 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_BrunoAChallenger_Text_1, MSGBOX_AUTOCLOSE
	goto BaldesianForestDojo_EventScript_BrunoAChallenger_1


BaldesianForestDojo_EventScript_GiveKubfu::
# 303 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 304 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveKubfu_Text_0, MSGBOX_AUTOCLOSE
# 307 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 308 "data/maps/BaldesianForestDojo/scripts.pory"
	givemon SPECIES_KUBFU, 70
# 309 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_KUBFU
# 310 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq BaldesianForestDojo_EventScript_GiveKubfu_2
# 316 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq BaldesianForestDojo_EventScript_GiveKubfu_3
# 324 "data/maps/BaldesianForestDojo/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
BaldesianForestDojo_EventScript_GiveKubfu_1:
# 326 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_GiveKubfu_2:
# 311 "data/maps/BaldesianForestDojo/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 312 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveKubfu_Text_1, MSGBOX_AUTOCLOSE
# 313 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 314 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SYS_DEFEATED_BRUNO
	goto BaldesianForestDojo_EventScript_GiveKubfu_1

BaldesianForestDojo_EventScript_GiveKubfu_3:
# 317 "data/maps/BaldesianForestDojo/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 318 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveKubfu_Text_2, MSGBOX_AUTOCLOSE
# 320 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 321 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SYS_DEFEATED_BRUNO
	goto BaldesianForestDojo_EventScript_GiveKubfu_1


BaldesianForestDojo_EventScript_GiveScroll::
# 331 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 332 "data/maps/BaldesianForestDojo/scripts.pory"
	faceplayer
# 333 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveScroll_Text_0, MSGBOX_DEFAULT
# 338 "data/maps/BaldesianForestDojo/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, BaldesianForestDojo_EventScript_GiveScroll_Text_1, BaldesianForestDojo_EventScript_GiveScroll_Text_2
# 339 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BaldesianForestDojo_EventScript_GiveScroll_2
# 344 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BaldesianForestDojo_EventScript_GiveScroll_3
# 350 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveScroll_Text_3, MSGBOX_AUTOCLOSE
# 352 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
BaldesianForestDojo_EventScript_GiveScroll_1:
# 354 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_GiveScroll_2:
# 340 "data/maps/BaldesianForestDojo/scripts.pory"
	giveitem ITEM_SCROLL_OF_DARKNESS
# 341 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 342 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 5
	goto BaldesianForestDojo_EventScript_GiveScroll_1

BaldesianForestDojo_EventScript_GiveScroll_3:
# 345 "data/maps/BaldesianForestDojo/scripts.pory"
	giveitem ITEM_SCROLL_OF_WATERS
# 346 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 347 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 5
	goto BaldesianForestDojo_EventScript_GiveScroll_1


BaldesianForestDojo_EventScript_Disciple::
# 359 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_Disciple_Text_0, MSGBOX_SIGN
	end


BaldesianForestDojo_EventScript_OldManDojo::
# 365 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 366 "data/maps/BaldesianForestDojo/scripts.pory"
	faceplayer
# 367 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_OldManDojo_Text_0, MSGBOX_AUTOCLOSE
# 371 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 372 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 373 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 374 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_Kubfu::
# 379 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 380 "data/maps/BaldesianForestDojo/scripts.pory"
	faceplayer
# 381 "data/maps/BaldesianForestDojo/scripts.pory"
	playmoncry SPECIES_KUBFU, CRY_MODE_ENCOUNTER
# 382 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmoncry
# 383 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_Asak::
# 388 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 389 "data/maps/BaldesianForestDojo/scripts.pory"
	faceplayer
# 390 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_BALDESIA_FOREST_DOJO_STATE, 3
	goto_if_le BaldesianForestDojo_EventScript_Asak_2
# 395 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_Asak_Text_1, MSGBOX_AUTOCLOSE
BaldesianForestDojo_EventScript_Asak_1:
# 399 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 400 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 401 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 402 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_Asak_2:
# 391 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_Asak_Text_0, MSGBOX_AUTOCLOSE
	goto BaldesianForestDojo_EventScript_Asak_1


BaldesianForestDojo_EventScript_Nerd::
# 407 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_Nerd_Text_0, MSGBOX_SIGN
	end


BaldesianForestDojo_LeftTrigger::
# 414 "data/maps/BaldesianForestDojo/scripts.pory"
	lockall
# 415 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_TEMP_5
# 416 "data/maps/BaldesianForestDojo/scripts.pory"
	goto BaldesianForestDojo_EventScript_AsakTrigger
	end


BaldesianForestDojo_EventScript_AsakTrigger::
# 421 "data/maps/BaldesianForestDojo/scripts.pory"
	lockall
# 422 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_PIN
# 423 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 424 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 425 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 426 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_set FLAG_TEMP_5, BaldesianForestDojo_EventScript_AsakTrigger_2
# 430 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakToPlayer
BaldesianForestDojo_EventScript_AsakTrigger_1:
# 432 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 433 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_unset FLAG_HIDE_PECHARUNT_JIRACHIS_ALTAR, BaldesianForestDojo_EventScript_AsakTrigger_6
# 456 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_AsakTrigger_Text_4, MSGBOX_AUTOCLOSE
# 466 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 467 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_set FLAG_TEMP_5, BaldesianForestDojo_EventScript_AsakTrigger_14
# 471 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakReturns
BaldesianForestDojo_EventScript_AsakTrigger_13:
# 473 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 474 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 475 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 9
BaldesianForestDojo_EventScript_AsakTrigger_5:
# 477 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 1
# 478 "data/maps/BaldesianForestDojo/scripts.pory"
	releaseall
	end

BaldesianForestDojo_EventScript_AsakTrigger_2:
# 427 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakToPlayerLeft
	goto BaldesianForestDojo_EventScript_AsakTrigger_1

BaldesianForestDojo_EventScript_AsakTrigger_6:
# 434 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_AsakTrigger_Text_0, MSGBOX_DEFAULT
# 437 "data/maps/BaldesianForestDojo/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, BaldesianForestDojo_EventScript_AsakTrigger_Text_1, BaldesianForestDojo_EventScript_AsakTrigger_Text_2
# 438 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_AsakTrigger_Text_3, MSGBOX_AUTOCLOSE
# 444 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 445 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_set FLAG_TEMP_5, BaldesianForestDojo_EventScript_AsakTrigger_10
# 449 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakReturns
BaldesianForestDojo_EventScript_AsakTrigger_9:
# 451 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 452 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 453 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 9
	goto BaldesianForestDojo_EventScript_AsakTrigger_5

BaldesianForestDojo_EventScript_AsakTrigger_10:
# 446 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakReturnsLeft
	goto BaldesianForestDojo_EventScript_AsakTrigger_9

BaldesianForestDojo_EventScript_AsakTrigger_14:
# 468 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakReturnsLeft
	goto BaldesianForestDojo_EventScript_AsakTrigger_13


BaldesianForestDojo_EventScript_DojoChallenge::
# 483 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 484 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_TEMP_E
# 485 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 486 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative UpdateFollowingPokemon
# 487 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BaldesianForestDojo_Movement_PlayerGoesToGauntlet
# 488 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 489 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_BALL_OPEN
# 490 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_WHITE
# 491 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 14
# 492 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExitPokeball
# 493 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 494 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BaldesianForestDojo_Movement_FollowerBesidePlayer
# 495 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 496 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 497 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 498 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_0, MSGBOX_AUTOCLOSE
# 501 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 502 "data/maps/BaldesianForestDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_LAROLDINA, BaldesianForestDojo_Text_BattleGirlDefeat
# 503 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_ARENA_TIMEUP2
# 504 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 505 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 506 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_1, MSGBOX_AUTOCLOSE
# 507 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 508 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 22, BaldesianForestDojo_Movement_LaroldinaGoesToSeat
# 509 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 510 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 21, BaldesianForestDojo_Movement_CorneliusGoesToStage
# 511 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 21
# 512 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 60
# 513 "data/maps/BaldesianForestDojo/scripts.pory"
	special HealPlayerParty
# 514 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_BALL_OPEN
# 515 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_WHITE
# 516 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 24
# 517 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 518 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 519 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, FALSE
# 520 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_2, MSGBOX_AUTOCLOSE
# 523 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 524 "data/maps/BaldesianForestDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_CORNELIUS, BaldesianForestDojo_Text_NerdDefeat
# 525 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_ARENA_TIMEUP2
# 526 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 527 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 528 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_1, MSGBOX_AUTOCLOSE
# 529 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 530 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 30
# 531 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 21, BaldesianForestDojo_Movement_CorneliusGoesToSeat
# 532 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 533 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakGoesToStage
# 534 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 9
# 535 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 60
# 536 "data/maps/BaldesianForestDojo/scripts.pory"
	special HealPlayerParty
# 537 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_BALL_OPEN
# 538 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_WHITE
# 539 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 25
# 540 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 541 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 542 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_3, MSGBOX_AUTOCLOSE
# 545 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 546 "data/maps/BaldesianForestDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_ASAK_2, BaldesianForestDojo_Text_AsakDefeat
# 547 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_ARENA_TIMEUP2
# 548 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 549 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 550 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_1, MSGBOX_AUTOCLOSE
# 551 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 552 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 3
# 553 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakReturnsToSeat
# 554 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 555 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkDown4
# 556 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 557 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 2, Common_Movement_WalkDown4
# 558 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 2
# 559 "data/maps/BaldesianForestDojo/scripts.pory"
	special HealPlayerParty
# 560 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GYM_LEADER, FALSE
# 561 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_4, MSGBOX_AUTOCLOSE
# 564 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 565 "data/maps/BaldesianForestDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BRUNO, BaldesianForestDojo_Text_BrunoDefeat
# 566 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_NONE, FALSE
# 567 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 568 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 30
# 569 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_PIN
# 570 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 23, Common_Movement_ExclamationMark
# 571 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 23
# 572 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 573 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_5, MSGBOX_AUTOCLOSE
# 574 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 575 "data/maps/BaldesianForestDojo/scripts.pory"
	playfanfare MUS_RG_CAUGHT_INTRO
# 576 "data/maps/BaldesianForestDojo/scripts.pory"
	waitfanfare
# 577 "data/maps/BaldesianForestDojo/scripts.pory"
	fadedefaultbgm
# 578 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 579 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 580 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_6, MSGBOX_AUTOCLOSE
# 582 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 583 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkUp4
# 584 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 585 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 586 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 587 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 588 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 589 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative RemoveFollowingPokemon
# 590 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_TEMP_E
# 591 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 592 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BaldesianForestDojo_Movement_PlayerReturns
# 593 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 594 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 595 "data/maps/BaldesianForestDojo/scripts.pory"
	call BaldesianForestDojo_ResetDisciplePositions
# 596 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 597 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 4
# 598 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_ChallengeBruno::
# 603 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 604 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_TEMP_E
# 605 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 606 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative UpdateFollowingPokemon
# 607 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BaldesianForestDojo_Movement_PlayerGoesToGauntlet
# 608 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 609 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkDown4
# 610 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 2, Common_Movement_WalkDown4
# 611 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 612 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_BALL_OPEN
# 613 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_WHITE
# 614 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExitPokeball
# 615 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 616 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BaldesianForestDojo_Movement_FollowerBesidePlayer
# 617 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 618 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 619 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GYM_LEADER, FALSE
# 620 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ChallengeBruno_Text_0, MSGBOX_AUTOCLOSE
# 623 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 624 "data/maps/BaldesianForestDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BRUNO, BaldesianForestDojo_Text_BrunoDefeat
# 625 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_NONE, FALSE
# 626 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 30
# 627 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_PIN
# 628 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 23, Common_Movement_ExclamationMark
# 629 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 23
# 630 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 631 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 632 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_5, MSGBOX_AUTOCLOSE
# 633 "data/maps/BaldesianForestDojo/scripts.pory"
	playfanfare MUS_RG_CAUGHT_INTRO
# 634 "data/maps/BaldesianForestDojo/scripts.pory"
	waitfanfare
# 635 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 636 "data/maps/BaldesianForestDojo/scripts.pory"
	fadedefaultbgm
# 637 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 638 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 639 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_6, MSGBOX_AUTOCLOSE
# 641 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 642 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkUp4
# 643 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 644 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 645 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 646 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative RemoveFollowingPokemon
# 647 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_TEMP_E
# 648 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 649 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BaldesianForestDojo_Movement_PlayerReturns
# 650 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 651 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 652 "data/maps/BaldesianForestDojo/scripts.pory"
	call BaldesianForestDojo_ResetDisciplePositions
# 653 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 654 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 4
# 655 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


# 659 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakToPlayer:
# 660 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 660 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 661 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 661 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 661 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 661 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 661 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 661 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 662 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_down
	step_end

# 665 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakToPlayerLeft:
# 666 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 666 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 667 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 667 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 667 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 667 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 667 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 667 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 667 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 668 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_down
	step_end

# 671 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakReturns:
# 672 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 672 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 672 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 672 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 672 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 672 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 673 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 673 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 674 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_left
	step_end

# 677 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakReturnsLeft:
# 678 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 678 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 678 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 678 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 678 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 678 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 678 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 679 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 679 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 680 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_left
	step_end

# 683 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_PlayerGoesToGauntlet:
# 684 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 684 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 684 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 685 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 685 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 686 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 686 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 686 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 686 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 687 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 687 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 687 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
	step_end

# 690 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_FollowerBesidePlayer:
# 691 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 692 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_up
	step_end

# 695 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_LaroldinaGoesToSeat:
# 696 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 696 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 696 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 696 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 696 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 696 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 697 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 697 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 698 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 699 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_right
	step_end

# 702 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_CorneliusGoesToStage:
# 703 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 703 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 703 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 703 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 703 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 703 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 704 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
	step_end

# 707 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_CorneliusGoesToSeat:
# 708 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 709 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 709 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 709 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 709 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 709 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 709 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 710 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_left
	step_end

# 713 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakGoesToStage:
# 714 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 715 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 715 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 715 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 715 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 716 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 716 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 716 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 716 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 716 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 717 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_down
	step_end

# 720 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakReturnsToSeat:
# 721 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 721 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 721 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 721 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 721 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 722 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 722 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 722 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 722 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 723 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 724 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_left
	step_end

# 727 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_PlayerReturns:
# 728 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 728 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 728 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 729 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 729 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 729 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 729 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 730 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 730 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 731 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 731 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 731 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 732 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_up
	step_end

BaldesianForestDojo_EventScript_KimonoOldWoman_Text_0:
# 130 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Kahaha!\n I've never seen BRUNO lose.\p Good, good!\n You've entertained this old lady!$"

BaldesianForestDojo_EventScript_ExplainDojo_Text_0:
# 147 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "OI! WE GOT A CHALLENGER!\n GET READY!\p Yes, Ma'am!$"

BaldesianForestDojo_EventScript_ExplainDojo_Text_1:
# 158 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Kahaha!\n Alright! Good luck!$"

BaldesianForestDojo_EventScript_ReadyToChallenge_Text_0:
# 170 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Kahaha! Welcome back!\n Here to try again?$"

BaldesianForestDojo_EventScript_ReadyToChallenge_Text_1:
# 188 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Kahahaha!\n Alright! Good luck!$"

BaldesianForestDojo_EventScript_ReadyToChallenge_Text_2:
# 195 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Alright.\n Let me know when you're ready.$"

BaldesianForestDojo_EventScript_ReadyToChallengeBruno_Text_0:
# 205 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Kahaha! Welcome back!\n BRUNO's waiting! Ready?$"

BaldesianForestDojo_EventScript_ReadyToChallengeBruno_Text_1:
# 212 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "OI! BRUNO!\n YOU GOT A CHALLENGER!\l EVERYONE ELSE GET OUT THE WAY!\p Yes, Ma'am!$"

BaldesianForestDojo_EventScript_GiveProtectivePads_Text_0:
# 241 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Kahahaha! Great job!\n You actually beat BRUNO!\p Here's your reward!$"

BaldesianForestDojo_EventScript_GiveProtectivePads_Text_1:
# 250 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "BRUNO wanted to talk to you too.\n Don't keep him waiting too long!$"

BaldesianForestDojo_EventScript_GiveProtectivePads_Text_2:
# 254 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "You don't have any room!\n Come back when you have space!$"

BaldesianForestDojo_EventScript_Bruno_Text_0:
# 268 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'll keep training.\n Our battle re-inspired me.\p There's also still the pressing issue\n of finding a sucessor…\p If only my younger brother wasn't\n MASTER BENNIS's disciple.$"

BaldesianForestDojo_EventScript_BrunoAChallenger_Text_0:
# 283 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Oh, are you a new challenger?$"

BaldesianForestDojo_EventScript_BrunoAChallenger_Text_1:
# 286 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I see.\n I look forward to our battle.\p As long as you can prove yourself\n worthy, that is.$"

BaldesianForestDojo_EventScript_BrunoAChallenger_Text_2:
# 292 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Hm. Then why are you here?\n Don't waste my time.$"

BaldesianForestDojo_EventScript_GiveKubfu_Text_0:
# 304 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "That was a great battle.\n As acknowledgement of your strength,\l I want you to accept this KUBFU.$"

BaldesianForestDojo_EventScript_GiveKubfu_Text_1:
# 312 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "{PLAYER} received KUBFU!$"

BaldesianForestDojo_EventScript_GiveKubfu_Text_2:
# 318 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "{PLAYER} received KUBFU!\p KUBFU was sent to the PC.$"

BaldesianForestDojo_EventScript_GiveScroll_Text_0:
# 333 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'll also give you one scroll.\n It contains secret techniques passed\l down in our family for generations.\p Which one would you like?\n Choose wisely.$"

BaldesianForestDojo_EventScript_GiveScroll_Text_1:
# 338 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Scroll of Darkness$"

BaldesianForestDojo_EventScript_GiveScroll_Text_2:
# 338 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Scroll of Waters$"

BaldesianForestDojo_EventScript_GiveScroll_Text_3:
# 350 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "You don't have any room.\n Come back when you do.$"

BaldesianForestDojo_EventScript_Disciple_Text_0:
# 359 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "They're busy training.\n It's probably a bad idea to disturb them.$"

BaldesianForestDojo_EventScript_OldManDojo_Text_0:
# 367 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'm the referee for the battles\n during dojo challenges.\p Nothing will get past me, so\n don't even think about cheating!$"

BaldesianForestDojo_EventScript_Asak_Text_0:
# 391 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "It's been a while since I've come home.\n I guess brother's still a strong as ever.$"

BaldesianForestDojo_EventScript_Asak_Text_1:
# 395 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Wow… you really beat brother…\p No wonder MASTER BENNIS and LADY\n ASAKURA recognize your strength.$"

BaldesianForestDojo_EventScript_Nerd_Text_0:
# 407 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Huff… Huff…\p Even though I look like this, I\n love training in the martial arts.$"

BaldesianForestDojo_EventScript_AsakTrigger_Text_0:
# 434 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "ASAK: {PLAYER}?\n What are you doing here?\l What about the ritual?$"

BaldesianForestDojo_EventScript_AsakTrigger_Text_1:
# 437 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'll still make it in time.$"

BaldesianForestDojo_EventScript_AsakTrigger_Text_2:
# 437 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Don't worry about it.$"

BaldesianForestDojo_EventScript_AsakTrigger_Text_3:
# 438 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "………\n Uh… okay.\p You must be here to challenge the DOJO,\n then.\p Talk to the old hag over there.\n She'll get everything set up.$"

BaldesianForestDojo_EventScript_AsakTrigger_Text_4:
# 456 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "ASAK: {PLAYER}?\n What are you doing here?\l What about the ritual?\p … … …\n I see… So all that happened.\l Thanks for everything that you did.\p You must be here to challenge the DOJO,\n then.\p Talk to the old hag over there.\n She'll get everything set up.$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_0:
# 498 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'm first!\p You gotta get through me before you\n even think about battling BRUNO!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_1:
# 506 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "OLD MAN: Winner: Challenger!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_2:
# 520 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'm next!\p You shall fear the power of my\n secret martial arts!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_3:
# 542 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "{PLAYER}.\p I'll show you how much stronger\n I've gotten!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_4:
# 561 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "BRUNO: Those were impressive battles.\n Finally, it's my turn.\p Will you be the first one to defeat me?$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_5:
# 573 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "OLD MAN: T-The winner is {PLAYER}!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_6:
# 580 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "{PLAYER}, was it? After you receive\n your prize, come talk to me.$"

BaldesianForestDojo_EventScript_ChallengeBruno_Text_0:
# 620 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "BRUNO: So you've come to challenge\n me again. Very well.\p Will you be the first one to defeat me?$"

BaldesianForestDojo_Text_ExplainDojo::
# 736 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Oh, a challenger? Kahaha, good!\n We haven't been getting many lately.\p The way the challenge works is simple:\n beat three of our disciples in a row.\l Only then can you challenge BRUNO.\p Easy, right? Kahahaha!\n Let's get everything set up for you!$"

BaldesianForestDojo_Text_BattleGirlDefeat::
# 746 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Maybe you can think about battling\n him…$"

BaldesianForestDojo_Text_NerdDefeat::
# 751 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I should've become a KNIGHT instead.$"

BaldesianForestDojo_Text_AsakDefeat::
# 755 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "…… As expected of the one\n acknowledged by MASTER BENNIS.$"

BaldesianForestDojo_Text_BrunoDefeat::
# 760 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "… I was finally defeated……\n Impressive. Truly impressive.$"
