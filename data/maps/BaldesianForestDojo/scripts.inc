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
	clearflag FLAG_HIDE_GAUNTLET_TRAINERS
# 107 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_HIDE_LAROLDINA_SPECTATOR
	return


BaldesianForestDojo_RemoveTrainerPokemon::
# 112 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 14
# 113 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 24
# 114 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 25
	return


BaldesianForestDojo_RemoveBrunoPokemon::
# 119 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 2
	return


BaldesianForestDojo_EventScript_KimonoOldWoman::
# 124 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 125 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_eq VAR_BALDESIA_FOREST_DOJO_STATE, 1, BaldesianForestDojo_EventScript_ExplainDojo
# 126 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_eq VAR_BALDESIA_FOREST_DOJO_STATE, 2, BaldesianForestDojo_EventScript_ReadyToChallenge
# 127 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_eq VAR_BALDESIA_FOREST_DOJO_STATE, 3, BaldesianForestDojo_EventScript_ReadyToChallengeBruno
# 128 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_unset FLAG_RECEIVED_PROTECTIVE_PADS, BaldesianForestDojo_EventScript_GiveProtectivePads
# 129 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_KimonoOldWoman_Text_0, MSGBOX_AUTOCLOSE
# 133 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 134 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_ExplainDojo::
# 139 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 140 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_Text_ExplainDojo, MSGBOX_AUTOCLOSE
# 141 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 142 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceRight
# 143 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 144 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 145 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 146 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ExplainDojo_Text_0, MSGBOX_AUTOCLOSE
# 149 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 150 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 151 "data/maps/BaldesianForestDojo/scripts.pory"
	call BaldesianForestDojo_DisciplePositionsGauntlet
# 152 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 153 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 154 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 155 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 156 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 157 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ExplainDojo_Text_1, MSGBOX_AUTOCLOSE
# 159 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 160 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 2
# 161 "data/maps/BaldesianForestDojo/scripts.pory"
	special HealPlayerParty
# 162 "data/maps/BaldesianForestDojo/scripts.pory"
	goto BaldesianForestDojo_EventScript_DojoChallenge
# 163 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_ReadyToChallenge::
# 168 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 169 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ReadyToChallenge_Text_0, MSGBOX_YESNO
# 171 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BaldesianForestDojo_EventScript_ReadyToChallenge_2
# 194 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ReadyToChallenge_Text_2, MSGBOX_AUTOCLOSE
# 196 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
BaldesianForestDojo_EventScript_ReadyToChallenge_1:
# 198 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_ReadyToChallenge_2:
# 172 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceRight
# 173 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 174 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 175 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 176 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ExplainDojo_Text_0, MSGBOX_AUTOCLOSE
# 179 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 180 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 181 "data/maps/BaldesianForestDojo/scripts.pory"
	call BaldesianForestDojo_DisciplePositionsGauntlet
# 182 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 183 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 184 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 185 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 186 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 187 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ReadyToChallenge_Text_1, MSGBOX_AUTOCLOSE
# 189 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 190 "data/maps/BaldesianForestDojo/scripts.pory"
	special HealPlayerParty
# 191 "data/maps/BaldesianForestDojo/scripts.pory"
	goto BaldesianForestDojo_EventScript_DojoChallenge
	goto BaldesianForestDojo_EventScript_ReadyToChallenge_1


BaldesianForestDojo_EventScript_ReadyToChallengeBruno::
# 203 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 204 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ReadyToChallengeBruno_Text_0, MSGBOX_YESNO
# 206 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BaldesianForestDojo_EventScript_ReadyToChallengeBruno_2
# 230 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ReadyToChallenge_Text_2, MSGBOX_AUTOCLOSE
# 232 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
BaldesianForestDojo_EventScript_ReadyToChallengeBruno_1:
# 234 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_ReadyToChallengeBruno_2:
# 207 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceRight
# 208 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 209 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 210 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 211 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ReadyToChallengeBruno_Text_1, MSGBOX_AUTOCLOSE
# 215 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 216 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 217 "data/maps/BaldesianForestDojo/scripts.pory"
	call BaldesianForestDojo_DisciplePositionsBruno
# 218 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 219 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 220 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 221 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 222 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 223 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ReadyToChallenge_Text_1, MSGBOX_AUTOCLOSE
# 225 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 226 "data/maps/BaldesianForestDojo/scripts.pory"
	special HealPlayerParty
# 227 "data/maps/BaldesianForestDojo/scripts.pory"
	goto BaldesianForestDojo_EventScript_ChallengeBruno
	goto BaldesianForestDojo_EventScript_ReadyToChallengeBruno_1


BaldesianForestDojo_EventScript_GiveProtectivePads::
# 239 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 240 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveProtectivePads_Text_0, MSGBOX_AUTOCLOSE
# 243 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 244 "data/maps/BaldesianForestDojo/scripts.pory"
	checkitemspace ITEM_PROTECTIVE_PADS
# 245 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BaldesianForestDojo_EventScript_GiveProtectivePads_2
# 253 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveProtectivePads_Text_2, MSGBOX_AUTOCLOSE
BaldesianForestDojo_EventScript_GiveProtectivePads_1:
# 256 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 257 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_GiveProtectivePads_2:
# 246 "data/maps/BaldesianForestDojo/scripts.pory"
	giveitem ITEM_PROTECTIVE_PADS
# 247 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 248 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_RECEIVED_PROTECTIVE_PADS
# 249 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveProtectivePads_Text_1, MSGBOX_AUTOCLOSE
	goto BaldesianForestDojo_EventScript_GiveProtectivePads_1


BaldesianForestDojo_EventScript_Bruno::
# 262 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 263 "data/maps/BaldesianForestDojo/scripts.pory"
	faceplayer
# 264 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_le VAR_BALDESIA_FOREST_DOJO_STATE, 3, BaldesianForestDojo_EventScript_BrunoAChallenger
# 265 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_unset FLAG_SYS_DEFEATED_BRUNO, BaldesianForestDojo_EventScript_GiveKubfu
# 266 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_eq VAR_BALDESIA_FOREST_DOJO_STATE, 4, BaldesianForestDojo_EventScript_GiveScroll
# 267 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_Bruno_Text_0, MSGBOX_AUTOCLOSE
# 273 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 274 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 275 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 276 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_BrunoAChallenger::
# 281 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 282 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_BrunoAChallenger_Text_0, MSGBOX_YESNO
# 283 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 284 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BaldesianForestDojo_EventScript_BrunoAChallenger_2
# 291 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_BrunoAChallenger_Text_2, MSGBOX_AUTOCLOSE
BaldesianForestDojo_EventScript_BrunoAChallenger_1:
# 294 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 295 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 296 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 297 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_BrunoAChallenger_2:
# 285 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_BrunoAChallenger_Text_1, MSGBOX_AUTOCLOSE
	goto BaldesianForestDojo_EventScript_BrunoAChallenger_1


BaldesianForestDojo_EventScript_GiveKubfu::
# 302 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 303 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveKubfu_Text_0, MSGBOX_AUTOCLOSE
# 306 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 307 "data/maps/BaldesianForestDojo/scripts.pory"
	givemon SPECIES_KUBFU, 70
# 308 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_KUBFU
# 309 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq BaldesianForestDojo_EventScript_GiveKubfu_2
# 315 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq BaldesianForestDojo_EventScript_GiveKubfu_3
# 323 "data/maps/BaldesianForestDojo/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
BaldesianForestDojo_EventScript_GiveKubfu_1:
# 325 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_GiveKubfu_2:
# 310 "data/maps/BaldesianForestDojo/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 311 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveKubfu_Text_1, MSGBOX_AUTOCLOSE
# 312 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 313 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SYS_DEFEATED_BRUNO
	goto BaldesianForestDojo_EventScript_GiveKubfu_1

BaldesianForestDojo_EventScript_GiveKubfu_3:
# 316 "data/maps/BaldesianForestDojo/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 317 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveKubfu_Text_2, MSGBOX_AUTOCLOSE
# 319 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 320 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SYS_DEFEATED_BRUNO
	goto BaldesianForestDojo_EventScript_GiveKubfu_1


BaldesianForestDojo_EventScript_GiveScroll::
# 330 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 331 "data/maps/BaldesianForestDojo/scripts.pory"
	faceplayer
# 332 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveScroll_Text_0, MSGBOX_DEFAULT
# 337 "data/maps/BaldesianForestDojo/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, BaldesianForestDojo_EventScript_GiveScroll_Text_1, BaldesianForestDojo_EventScript_GiveScroll_Text_2
# 338 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BaldesianForestDojo_EventScript_GiveScroll_2
# 343 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BaldesianForestDojo_EventScript_GiveScroll_3
# 349 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveScroll_Text_3, MSGBOX_AUTOCLOSE
# 351 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
BaldesianForestDojo_EventScript_GiveScroll_1:
# 353 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_GiveScroll_2:
# 339 "data/maps/BaldesianForestDojo/scripts.pory"
	giveitem ITEM_SCROLL_OF_DARKNESS
# 340 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 341 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 5
	goto BaldesianForestDojo_EventScript_GiveScroll_1

BaldesianForestDojo_EventScript_GiveScroll_3:
# 344 "data/maps/BaldesianForestDojo/scripts.pory"
	giveitem ITEM_SCROLL_OF_WATERS
# 345 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 346 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 5
	goto BaldesianForestDojo_EventScript_GiveScroll_1


BaldesianForestDojo_EventScript_Disciple::
# 358 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_Disciple_Text_0, MSGBOX_SIGN
	end


BaldesianForestDojo_EventScript_OldManDojo::
# 364 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 365 "data/maps/BaldesianForestDojo/scripts.pory"
	faceplayer
# 366 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_OldManDojo_Text_0, MSGBOX_AUTOCLOSE
# 370 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 371 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 372 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 373 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_Kubfu::
# 378 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 379 "data/maps/BaldesianForestDojo/scripts.pory"
	faceplayer
# 380 "data/maps/BaldesianForestDojo/scripts.pory"
	playmoncry SPECIES_KUBFU, CRY_MODE_ENCOUNTER
# 381 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmoncry
# 382 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_Asak::
# 387 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 388 "data/maps/BaldesianForestDojo/scripts.pory"
	faceplayer
# 389 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_BALDESIA_FOREST_DOJO_STATE, 3
	goto_if_le BaldesianForestDojo_EventScript_Asak_2
# 394 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_Asak_Text_1, MSGBOX_AUTOCLOSE
BaldesianForestDojo_EventScript_Asak_1:
# 398 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 399 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 400 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 401 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_Asak_2:
# 390 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_Asak_Text_0, MSGBOX_AUTOCLOSE
	goto BaldesianForestDojo_EventScript_Asak_1


BaldesianForestDojo_EventScript_Nerd::
# 406 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_Nerd_Text_0, MSGBOX_SIGN
	end


BaldesianForestDojo_LeftTrigger::
# 413 "data/maps/BaldesianForestDojo/scripts.pory"
	lockall
# 414 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_TEMP_5
# 415 "data/maps/BaldesianForestDojo/scripts.pory"
	goto BaldesianForestDojo_EventScript_AsakTrigger
	end


BaldesianForestDojo_EventScript_AsakTrigger::
# 420 "data/maps/BaldesianForestDojo/scripts.pory"
	lockall
# 421 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_PIN
# 422 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 423 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 424 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 425 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_set FLAG_TEMP_5, BaldesianForestDojo_EventScript_AsakTrigger_2
# 429 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakToPlayer
BaldesianForestDojo_EventScript_AsakTrigger_1:
# 431 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 432 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_unset FLAG_HIDE_PECHARUNT_BALDESIAN_RUINS, BaldesianForestDojo_EventScript_AsakTrigger_6
# 455 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_AsakTrigger_Text_4, MSGBOX_AUTOCLOSE
# 465 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 466 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_set FLAG_TEMP_5, BaldesianForestDojo_EventScript_AsakTrigger_14
# 470 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakReturns
BaldesianForestDojo_EventScript_AsakTrigger_13:
# 472 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 473 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 474 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 9
BaldesianForestDojo_EventScript_AsakTrigger_5:
# 476 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 1
# 477 "data/maps/BaldesianForestDojo/scripts.pory"
	releaseall
	end

BaldesianForestDojo_EventScript_AsakTrigger_2:
# 426 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakToPlayerLeft
	goto BaldesianForestDojo_EventScript_AsakTrigger_1

BaldesianForestDojo_EventScript_AsakTrigger_6:
# 433 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_AsakTrigger_Text_0, MSGBOX_DEFAULT
# 436 "data/maps/BaldesianForestDojo/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, BaldesianForestDojo_EventScript_AsakTrigger_Text_1, BaldesianForestDojo_EventScript_AsakTrigger_Text_2
# 437 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_AsakTrigger_Text_3, MSGBOX_AUTOCLOSE
# 443 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 444 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_set FLAG_TEMP_5, BaldesianForestDojo_EventScript_AsakTrigger_10
# 448 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakReturns
BaldesianForestDojo_EventScript_AsakTrigger_9:
# 450 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 451 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 452 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 9
	goto BaldesianForestDojo_EventScript_AsakTrigger_5

BaldesianForestDojo_EventScript_AsakTrigger_10:
# 445 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakReturnsLeft
	goto BaldesianForestDojo_EventScript_AsakTrigger_9

BaldesianForestDojo_EventScript_AsakTrigger_14:
# 467 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakReturnsLeft
	goto BaldesianForestDojo_EventScript_AsakTrigger_13


BaldesianForestDojo_EventScript_DojoChallenge::
# 482 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 483 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_TEMP_E
# 484 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 485 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative UpdateFollowingPokemon
# 486 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BaldesianForestDojo_Movement_PlayerGoesToGauntlet
# 487 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 488 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_BALL_OPEN
# 489 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_WHITE
# 490 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 14
# 491 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExitPokeball
# 492 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 493 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BaldesianForestDojo_Movement_FollowerBesidePlayer
# 494 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 495 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 496 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 497 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_0, MSGBOX_AUTOCLOSE
# 500 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 501 "data/maps/BaldesianForestDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_LAROLDINA, BaldesianForestDojo_Text_BattleGirlDefeat
# 502 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_ARENA_TIMEUP2
# 503 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 504 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 505 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_1, MSGBOX_AUTOCLOSE
# 506 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 507 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 22, BaldesianForestDojo_Movement_LaroldinaGoesToSeat
# 508 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 509 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 21, BaldesianForestDojo_Movement_CorneliusGoesToStage
# 510 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 21
# 511 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 60
# 512 "data/maps/BaldesianForestDojo/scripts.pory"
	special HealPlayerParty
# 513 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_BALL_OPEN
# 514 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_WHITE
# 515 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 24
# 516 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 517 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 518 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, FALSE
# 519 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_2, MSGBOX_AUTOCLOSE
# 522 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 523 "data/maps/BaldesianForestDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_CORNELIUS, BaldesianForestDojo_Text_NerdDefeat
# 524 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_ARENA_TIMEUP2
# 525 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 526 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 527 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_1, MSGBOX_AUTOCLOSE
# 528 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 529 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 30
# 530 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 21, BaldesianForestDojo_Movement_CorneliusGoesToSeat
# 531 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 532 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakGoesToStage
# 533 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 9
# 534 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 60
# 535 "data/maps/BaldesianForestDojo/scripts.pory"
	special HealPlayerParty
# 536 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_BALL_OPEN
# 537 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_WHITE
# 538 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 25
# 539 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 540 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 541 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_3, MSGBOX_AUTOCLOSE
# 544 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 545 "data/maps/BaldesianForestDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_ASAK_2, BaldesianForestDojo_Text_AsakDefeat
# 546 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_ARENA_TIMEUP2
# 547 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 548 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 549 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_1, MSGBOX_AUTOCLOSE
# 550 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 551 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 3
# 552 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakReturnsToSeat
# 553 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 554 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkDown4
# 555 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 556 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 2, Common_Movement_WalkDown4
# 557 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 2
# 558 "data/maps/BaldesianForestDojo/scripts.pory"
	special HealPlayerParty
# 559 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GYM_LEADER, FALSE
# 560 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_4, MSGBOX_AUTOCLOSE
# 563 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 564 "data/maps/BaldesianForestDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BRUNO, BaldesianForestDojo_Text_BrunoDefeat
# 565 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_NONE, FALSE
# 566 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 567 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 30
# 568 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_PIN
# 569 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 23, Common_Movement_ExclamationMark
# 570 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 23
# 571 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 572 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_5, MSGBOX_AUTOCLOSE
# 573 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 574 "data/maps/BaldesianForestDojo/scripts.pory"
	playfanfare MUS_RG_CAUGHT_INTRO
# 575 "data/maps/BaldesianForestDojo/scripts.pory"
	waitfanfare
# 576 "data/maps/BaldesianForestDojo/scripts.pory"
	fadedefaultbgm
# 577 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 578 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 579 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_6, MSGBOX_AUTOCLOSE
# 581 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 582 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkUp4
# 583 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 584 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 585 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 586 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 587 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 588 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative RemoveFollowingPokemon
# 589 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_TEMP_E
# 590 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 591 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BaldesianForestDojo_Movement_PlayerReturns
# 592 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 593 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 594 "data/maps/BaldesianForestDojo/scripts.pory"
	call BaldesianForestDojo_ResetDisciplePositions
# 595 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 596 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 4
# 597 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_ChallengeBruno::
# 602 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 603 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_TEMP_E
# 604 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 605 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative UpdateFollowingPokemon
# 606 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BaldesianForestDojo_Movement_PlayerGoesToGauntlet
# 607 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 608 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkDown4
# 609 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 2, Common_Movement_WalkDown4
# 610 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 611 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_BALL_OPEN
# 612 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_WHITE
# 613 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExitPokeball
# 614 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 615 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BaldesianForestDojo_Movement_FollowerBesidePlayer
# 616 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 617 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 618 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GYM_LEADER, FALSE
# 619 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ChallengeBruno_Text_0, MSGBOX_AUTOCLOSE
# 622 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 623 "data/maps/BaldesianForestDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BRUNO, BaldesianForestDojo_Text_BrunoDefeat
# 624 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_NONE, FALSE
# 625 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 30
# 626 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_PIN
# 627 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 23, Common_Movement_ExclamationMark
# 628 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 23
# 629 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 630 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 631 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_5, MSGBOX_AUTOCLOSE
# 632 "data/maps/BaldesianForestDojo/scripts.pory"
	playfanfare MUS_RG_CAUGHT_INTRO
# 633 "data/maps/BaldesianForestDojo/scripts.pory"
	waitfanfare
# 634 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 635 "data/maps/BaldesianForestDojo/scripts.pory"
	fadedefaultbgm
# 636 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 637 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 638 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_6, MSGBOX_AUTOCLOSE
# 640 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 641 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkUp4
# 642 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 643 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 644 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 645 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative RemoveFollowingPokemon
# 646 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_TEMP_E
# 647 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 648 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BaldesianForestDojo_Movement_PlayerReturns
# 649 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 650 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 651 "data/maps/BaldesianForestDojo/scripts.pory"
	call BaldesianForestDojo_ResetDisciplePositions
# 652 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 653 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 4
# 654 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


# 658 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakToPlayer:
# 659 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 659 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 660 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 660 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 660 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 660 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 660 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 660 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 661 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_down
	step_end

# 664 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakToPlayerLeft:
# 665 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 665 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 666 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 666 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 666 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 666 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 666 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 666 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 666 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 667 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_down
	step_end

# 670 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakReturns:
# 671 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 671 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 671 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 671 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 671 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 671 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 672 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 672 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 673 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_left
	step_end

# 676 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakReturnsLeft:
# 677 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 677 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 677 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 677 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 677 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 677 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 677 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 678 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 678 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 679 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_left
	step_end

# 682 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_PlayerGoesToGauntlet:
# 683 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 683 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 683 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 684 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 684 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 685 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 685 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 685 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 685 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 686 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 686 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 686 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
	step_end

# 689 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_FollowerBesidePlayer:
# 690 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 691 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_up
	step_end

# 694 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_LaroldinaGoesToSeat:
# 695 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 695 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 695 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 695 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 695 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 695 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 696 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 696 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 697 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 698 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_right
	step_end

# 701 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_CorneliusGoesToStage:
# 702 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 702 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 702 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 702 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 702 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 702 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 703 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
	step_end

# 706 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_CorneliusGoesToSeat:
# 707 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 708 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 708 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 708 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 708 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 708 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 708 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 709 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_left
	step_end

# 712 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakGoesToStage:
# 713 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 714 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 714 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 714 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 714 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 715 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 715 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 715 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 715 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 715 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 716 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_down
	step_end

# 719 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakReturnsToSeat:
# 720 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 720 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 720 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 720 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 720 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 721 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 721 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 721 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 721 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 722 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 723 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_left
	step_end

# 726 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_PlayerReturns:
# 727 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 727 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 727 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 728 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 728 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 728 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 728 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 729 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 729 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 730 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 730 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 730 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 731 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_up
	step_end

BaldesianForestDojo_EventScript_KimonoOldWoman_Text_0:
# 129 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Kahaha!\n I've never seen BRUNO lose.\p Good, good!\n You've entertained this old lady!$"

BaldesianForestDojo_EventScript_ExplainDojo_Text_0:
# 146 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "OI! WE GOT A CHALLENGER!\n GET READY!\p Yes, Ma'am!$"

BaldesianForestDojo_EventScript_ExplainDojo_Text_1:
# 157 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Kahaha!\n Alright! Good luck!$"

BaldesianForestDojo_EventScript_ReadyToChallenge_Text_0:
# 169 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Kahaha! Welcome back!\n Here to try again?$"

BaldesianForestDojo_EventScript_ReadyToChallenge_Text_1:
# 187 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Kahahaha!\n Alright! Good luck!$"

BaldesianForestDojo_EventScript_ReadyToChallenge_Text_2:
# 194 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Alright.\n Let me know when you're ready.$"

BaldesianForestDojo_EventScript_ReadyToChallengeBruno_Text_0:
# 204 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Kahaha! Welcome back!\n BRUNO's waiting! Ready?$"

BaldesianForestDojo_EventScript_ReadyToChallengeBruno_Text_1:
# 211 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "OI! BRUNO!\n YOU GOT A CHALLENGER!\p EVERYONE ELSE GET OUT THE WAY!\n Yes, Ma'am!$"

BaldesianForestDojo_EventScript_GiveProtectivePads_Text_0:
# 240 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Kahahaha! Great job!\n You actually beat BRUNO!\p Here's your reward!$"

BaldesianForestDojo_EventScript_GiveProtectivePads_Text_1:
# 249 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "BRUNO wanted to talk to you too.\n Don't keep him waiting too long!$"

BaldesianForestDojo_EventScript_GiveProtectivePads_Text_2:
# 253 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "You don't have any room!\n Come back when you have space!$"

BaldesianForestDojo_EventScript_Bruno_Text_0:
# 267 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'll keep training.\n Our battle re-inspired me.\p There's also still the pressing issue\n of finding a sucessor…\p If only my younger brother wasn't\n MASTER BENNIS's disciple.$"

BaldesianForestDojo_EventScript_BrunoAChallenger_Text_0:
# 282 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Oh, are you a new challenger?$"

BaldesianForestDojo_EventScript_BrunoAChallenger_Text_1:
# 285 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I see.\n I look forward to our battle.\p As long as you can prove yourself\n worthy, that is.$"

BaldesianForestDojo_EventScript_BrunoAChallenger_Text_2:
# 291 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Hm. Then why are you here?\n Don't waste my time.$"

BaldesianForestDojo_EventScript_GiveKubfu_Text_0:
# 303 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "That was a great battle.\n As acknowledgement of your strength,\l I want you to accept this KUBFU.$"

BaldesianForestDojo_EventScript_GiveKubfu_Text_1:
# 311 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "{PLAYER} received KUBFU!$"

BaldesianForestDojo_EventScript_GiveKubfu_Text_2:
# 317 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "{PLAYER} received KUBFU!\p KUBFU was sent to the PC.$"

BaldesianForestDojo_EventScript_GiveScroll_Text_0:
# 332 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'll also give you one scroll.\n It contains secret techniques passed\l down in our family for generations.\p Which one would you like?\n Choose wisely.$"

BaldesianForestDojo_EventScript_GiveScroll_Text_1:
# 337 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Scroll of Darkness$"

BaldesianForestDojo_EventScript_GiveScroll_Text_2:
# 337 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Scroll of Waters$"

BaldesianForestDojo_EventScript_GiveScroll_Text_3:
# 349 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "You don't have any room.\n Come back when you do.$"

BaldesianForestDojo_EventScript_Disciple_Text_0:
# 358 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "They're busy training.\n It's probably a bad idea to disturb them.$"

BaldesianForestDojo_EventScript_OldManDojo_Text_0:
# 366 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'm the referee for the battles\n during dojo challenges.\p Nothing will get past me, so\n don't even think about cheating!$"

BaldesianForestDojo_EventScript_Asak_Text_0:
# 390 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "It's been a while since I've come home.\n I guess brother's still a strong as ever.$"

BaldesianForestDojo_EventScript_Asak_Text_1:
# 394 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Wow… you really beat brother…\p No wonder MASTER BENNIS and LADY\n ASAKURA recognize your strength.$"

BaldesianForestDojo_EventScript_Nerd_Text_0:
# 406 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Huff… Huff…\p Even though I look like this, I\n love training in the martial arts.$"

BaldesianForestDojo_EventScript_AsakTrigger_Text_0:
# 433 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "ASAK: {PLAYER}?\n What are you doing here?\l What about the ritual?$"

BaldesianForestDojo_EventScript_AsakTrigger_Text_1:
# 436 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'll still make it in time.$"

BaldesianForestDojo_EventScript_AsakTrigger_Text_2:
# 436 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Don't worry about it.$"

BaldesianForestDojo_EventScript_AsakTrigger_Text_3:
# 437 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "………\n Uh… okay.\p You must be here to challenge the DOJO,\n then.\p Talk to the old hag over there.\n She'll get everything set up.$"

BaldesianForestDojo_EventScript_AsakTrigger_Text_4:
# 455 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "ASAK: {PLAYER}?\n What are you doing here?\l What about the ritual?\p … … …\n I see… So all that happened.\l Thanks for everything that you did.\p You must be here to challenge the DOJO,\n then.\p Talk to the old hag over there.\n She'll get everything set up.$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_0:
# 497 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'm first!\p You gotta get through me before you\n even think about battling BRUNO!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_1:
# 505 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "OLD MAN: Winner: Challenger!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_2:
# 519 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'm next!\p You shall fear the power of my\n secret martial arts!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_3:
# 541 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "{PLAYER}.\p I'll show you how much stronger\n I've gotten!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_4:
# 560 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "BRUNO: Those were impressive battles.\n Finally, it's my turn.\p Will you be the first one to defeat me?$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_5:
# 572 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "OLD MAN: T-The winner is {PLAYER}!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_6:
# 579 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "{PLAYER}, was it? After you receive\n your prize, come talk to me.$"

BaldesianForestDojo_EventScript_ChallengeBruno_Text_0:
# 619 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "BRUNO: So you've come to challenge\n me again. Very well.\p Will you be the first one to defeat me?$"

BaldesianForestDojo_Text_ExplainDojo::
# 735 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Oh, a challenger? Kahaha, good!\n We haven't been getting many lately.\p The way the challenge works is simple:\n beat three of our disciples in a row.\l Only then can you challenge BRUNO.\p Easy, right? Kahahaha!\n Let's get everything set up for you!$"

BaldesianForestDojo_Text_BattleGirlDefeat::
# 745 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Maybe you can think about battling\n him…$"

BaldesianForestDojo_Text_NerdDefeat::
# 750 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I should've become a KNIGHT instead.$"

BaldesianForestDojo_Text_AsakDefeat::
# 754 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "…… As expected of the one\n acknowledged by MASTER BENNIS.$"

BaldesianForestDojo_Text_BrunoDefeat::
# 759 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "… I was finally defeated……\n Impressive. Truly impressive.$"
