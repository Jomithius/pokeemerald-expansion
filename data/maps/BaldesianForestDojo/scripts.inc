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
	goto_if_unset FLAG_RECEIVED_PROTECTIVE_PADS, BaldesianForestDojo_EventScript_BrunoGoRecieveYourPrize
# 267 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_unset FLAG_SYS_DEFEATED_BRUNO, BaldesianForestDojo_EventScript_GiveKubfu
# 268 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_eq VAR_BALDESIA_FOREST_DOJO_STATE, 4, BaldesianForestDojo_EventScript_GiveScroll
# 269 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_Bruno_Text_0, MSGBOX_AUTOCLOSE
# 275 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 276 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 277 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 278 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_BrunoGoRecieveYourPrize::
# 283 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 284 "data/maps/BaldesianForestDojo/scripts.pory"
	faceplayer
# 285 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_BrunoGoRecieveYourPrize_Text_0, MSGBOX_AUTOCLOSE
# 289 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 290 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 291 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 292 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_BrunoAChallenger::
# 297 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 298 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_BrunoAChallenger_Text_0, MSGBOX_YESNO
# 299 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 300 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BaldesianForestDojo_EventScript_BrunoAChallenger_2
# 307 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_BrunoAChallenger_Text_2, MSGBOX_AUTOCLOSE
BaldesianForestDojo_EventScript_BrunoAChallenger_1:
# 310 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 311 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 312 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 313 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_BrunoAChallenger_2:
# 301 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_BrunoAChallenger_Text_1, MSGBOX_AUTOCLOSE
	goto BaldesianForestDojo_EventScript_BrunoAChallenger_1


BaldesianForestDojo_EventScript_GiveKubfu::
# 318 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 319 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveKubfu_Text_0, MSGBOX_AUTOCLOSE
# 322 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 323 "data/maps/BaldesianForestDojo/scripts.pory"
	givemon SPECIES_KUBFU, 70
# 324 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_KUBFU
# 325 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq BaldesianForestDojo_EventScript_GiveKubfu_2
# 331 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq BaldesianForestDojo_EventScript_GiveKubfu_3
# 339 "data/maps/BaldesianForestDojo/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
BaldesianForestDojo_EventScript_GiveKubfu_1:
# 341 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_GiveKubfu_2:
# 326 "data/maps/BaldesianForestDojo/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 327 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveKubfu_Text_1, MSGBOX_AUTOCLOSE
# 328 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 329 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SYS_DEFEATED_BRUNO
	goto BaldesianForestDojo_EventScript_GiveKubfu_1

BaldesianForestDojo_EventScript_GiveKubfu_3:
# 332 "data/maps/BaldesianForestDojo/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 333 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveKubfu_Text_2, MSGBOX_AUTOCLOSE
# 335 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 336 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SYS_DEFEATED_BRUNO
	goto BaldesianForestDojo_EventScript_GiveKubfu_1


BaldesianForestDojo_EventScript_GiveScroll::
# 346 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 347 "data/maps/BaldesianForestDojo/scripts.pory"
	faceplayer
# 348 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveScroll_Text_0, MSGBOX_DEFAULT
# 353 "data/maps/BaldesianForestDojo/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, BaldesianForestDojo_EventScript_GiveScroll_Text_1, BaldesianForestDojo_EventScript_GiveScroll_Text_2
# 354 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BaldesianForestDojo_EventScript_GiveScroll_2
# 359 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BaldesianForestDojo_EventScript_GiveScroll_3
# 365 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveScroll_Text_3, MSGBOX_AUTOCLOSE
# 367 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
BaldesianForestDojo_EventScript_GiveScroll_1:
# 369 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_GiveScroll_2:
# 355 "data/maps/BaldesianForestDojo/scripts.pory"
	giveitem ITEM_SCROLL_OF_DARKNESS
# 356 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 357 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 5
	goto BaldesianForestDojo_EventScript_GiveScroll_1

BaldesianForestDojo_EventScript_GiveScroll_3:
# 360 "data/maps/BaldesianForestDojo/scripts.pory"
	giveitem ITEM_SCROLL_OF_WATERS
# 361 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 362 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 5
	goto BaldesianForestDojo_EventScript_GiveScroll_1


BaldesianForestDojo_EventScript_Disciple::
# 374 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_Disciple_Text_0, MSGBOX_SIGN
	end


BaldesianForestDojo_EventScript_OldManDojo::
# 380 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 381 "data/maps/BaldesianForestDojo/scripts.pory"
	faceplayer
# 382 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_OldManDojo_Text_0, MSGBOX_AUTOCLOSE
# 386 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 387 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 388 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 389 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_Kubfu::
# 394 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 395 "data/maps/BaldesianForestDojo/scripts.pory"
	faceplayer
# 396 "data/maps/BaldesianForestDojo/scripts.pory"
	playmoncry SPECIES_KUBFU, CRY_MODE_ENCOUNTER
# 397 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmoncry
# 398 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_Asak::
# 403 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 404 "data/maps/BaldesianForestDojo/scripts.pory"
	faceplayer
# 405 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_BALDESIA_FOREST_DOJO_STATE, 3
	goto_if_le BaldesianForestDojo_EventScript_Asak_2
# 410 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_Asak_Text_1, MSGBOX_AUTOCLOSE
BaldesianForestDojo_EventScript_Asak_1:
# 414 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 415 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 416 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 417 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_Asak_2:
# 406 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_Asak_Text_0, MSGBOX_AUTOCLOSE
	goto BaldesianForestDojo_EventScript_Asak_1


BaldesianForestDojo_EventScript_Nerd::
# 422 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_Nerd_Text_0, MSGBOX_SIGN
	end


BaldesianForestDojo_LeftTrigger::
# 429 "data/maps/BaldesianForestDojo/scripts.pory"
	lockall
# 430 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_TEMP_5
# 431 "data/maps/BaldesianForestDojo/scripts.pory"
	goto BaldesianForestDojo_EventScript_AsakTrigger
	end


BaldesianForestDojo_EventScript_AsakTrigger::
# 436 "data/maps/BaldesianForestDojo/scripts.pory"
	lockall
# 437 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_PIN
# 438 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 439 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 440 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 441 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_set FLAG_TEMP_5, BaldesianForestDojo_EventScript_AsakTrigger_2
# 445 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakToPlayer
BaldesianForestDojo_EventScript_AsakTrigger_1:
# 447 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 448 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_unset FLAG_HIDE_LOYAL_THREE_JIRACHIS_ALTAR, BaldesianForestDojo_EventScript_AsakTrigger_6
# 471 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_AsakTrigger_Text_4, MSGBOX_AUTOCLOSE
# 481 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 482 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_set FLAG_TEMP_5, BaldesianForestDojo_EventScript_AsakTrigger_14
# 486 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakReturns
BaldesianForestDojo_EventScript_AsakTrigger_13:
# 488 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 489 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 490 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 9
BaldesianForestDojo_EventScript_AsakTrigger_5:
# 492 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 1
# 493 "data/maps/BaldesianForestDojo/scripts.pory"
	releaseall
	end

BaldesianForestDojo_EventScript_AsakTrigger_2:
# 442 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakToPlayerLeft
	goto BaldesianForestDojo_EventScript_AsakTrigger_1

BaldesianForestDojo_EventScript_AsakTrigger_6:
# 449 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_AsakTrigger_Text_0, MSGBOX_DEFAULT
# 452 "data/maps/BaldesianForestDojo/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, BaldesianForestDojo_EventScript_AsakTrigger_Text_1, BaldesianForestDojo_EventScript_AsakTrigger_Text_2
# 453 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_AsakTrigger_Text_3, MSGBOX_AUTOCLOSE
# 459 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 460 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_set FLAG_TEMP_5, BaldesianForestDojo_EventScript_AsakTrigger_10
# 464 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakReturns
BaldesianForestDojo_EventScript_AsakTrigger_9:
# 466 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 467 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 468 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 9
	goto BaldesianForestDojo_EventScript_AsakTrigger_5

BaldesianForestDojo_EventScript_AsakTrigger_10:
# 461 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakReturnsLeft
	goto BaldesianForestDojo_EventScript_AsakTrigger_9

BaldesianForestDojo_EventScript_AsakTrigger_14:
# 483 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakReturnsLeft
	goto BaldesianForestDojo_EventScript_AsakTrigger_13


BaldesianForestDojo_EventScript_DojoChallenge::
# 498 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 499 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_TEMP_E
# 500 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 501 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative UpdateFollowingPokemon
# 502 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BaldesianForestDojo_Movement_PlayerGoesToGauntlet
# 503 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 504 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_BALL_OPEN
# 505 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_WHITE
# 506 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 14
# 507 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExitPokeball
# 508 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 509 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BaldesianForestDojo_Movement_FollowerBesidePlayer
# 510 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 511 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 512 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 513 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_0, MSGBOX_AUTOCLOSE
# 516 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 517 "data/maps/BaldesianForestDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_LAROLDINA, BaldesianForestDojo_Text_BattleGirlDefeat
# 518 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_ARENA_TIMEUP2
# 519 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 520 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 521 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_1, MSGBOX_AUTOCLOSE
# 522 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 523 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 22, BaldesianForestDojo_Movement_LaroldinaGoesToSeat
# 524 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 525 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 21, BaldesianForestDojo_Movement_CorneliusGoesToStage
# 526 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 21
# 527 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 60
# 528 "data/maps/BaldesianForestDojo/scripts.pory"
	special HealPlayerParty
# 529 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_BALL_OPEN
# 530 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_WHITE
# 531 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 24
# 532 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 533 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 534 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, FALSE
# 535 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_2, MSGBOX_AUTOCLOSE
# 538 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 539 "data/maps/BaldesianForestDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_CORNELIUS, BaldesianForestDojo_Text_NerdDefeat
# 540 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_ARENA_TIMEUP2
# 541 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 542 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 543 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_1, MSGBOX_AUTOCLOSE
# 544 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 545 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 30
# 546 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 21, BaldesianForestDojo_Movement_CorneliusGoesToSeat
# 547 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 548 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakGoesToStage
# 549 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 9
# 550 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 60
# 551 "data/maps/BaldesianForestDojo/scripts.pory"
	special HealPlayerParty
# 552 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_BALL_OPEN
# 553 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_WHITE
# 554 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 25
# 555 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 556 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 557 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_3, MSGBOX_AUTOCLOSE
# 560 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 561 "data/maps/BaldesianForestDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_ASAK_2, BaldesianForestDojo_Text_AsakDefeat
# 562 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_ARENA_TIMEUP2
# 563 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 564 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 565 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_1, MSGBOX_AUTOCLOSE
# 566 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 567 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 3
# 568 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakReturnsToSeat
# 569 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 570 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkDown4
# 571 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 572 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 2, Common_Movement_WalkDown4
# 573 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 2
# 574 "data/maps/BaldesianForestDojo/scripts.pory"
	special HealPlayerParty
# 575 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GYM_LEADER, FALSE
# 576 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_4, MSGBOX_AUTOCLOSE
# 579 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 580 "data/maps/BaldesianForestDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BRUNO, BaldesianForestDojo_Text_BrunoDefeat
# 581 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_NONE, FALSE
# 582 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 583 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 30
# 584 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_PIN
# 585 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 23, Common_Movement_ExclamationMark
# 586 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 23
# 587 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 588 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_5, MSGBOX_AUTOCLOSE
# 589 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 590 "data/maps/BaldesianForestDojo/scripts.pory"
	playfanfare MUS_RG_CAUGHT_INTRO
# 591 "data/maps/BaldesianForestDojo/scripts.pory"
	waitfanfare
# 592 "data/maps/BaldesianForestDojo/scripts.pory"
	fadedefaultbgm
# 593 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 594 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 595 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_6, MSGBOX_AUTOCLOSE
# 597 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 598 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkUp4
# 599 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 600 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 601 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 602 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 603 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 604 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative RemoveFollowingPokemon
# 605 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_TEMP_E
# 606 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 607 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BaldesianForestDojo_Movement_PlayerReturns
# 608 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 609 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 610 "data/maps/BaldesianForestDojo/scripts.pory"
	call BaldesianForestDojo_ResetDisciplePositions
# 611 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 612 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 4
# 613 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_ChallengeBruno::
# 618 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 619 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_TEMP_E
# 620 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 621 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative UpdateFollowingPokemon
# 622 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BaldesianForestDojo_Movement_PlayerGoesToGauntlet
# 623 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 624 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkDown4
# 625 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 2, Common_Movement_WalkDown4
# 626 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 627 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_BALL_OPEN
# 628 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_WHITE
# 629 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExitPokeball
# 630 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 631 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BaldesianForestDojo_Movement_FollowerBesidePlayer
# 632 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 633 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 634 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GYM_LEADER, FALSE
# 635 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ChallengeBruno_Text_0, MSGBOX_AUTOCLOSE
# 638 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 639 "data/maps/BaldesianForestDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BRUNO, BaldesianForestDojo_Text_BrunoDefeat
# 640 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_NONE, FALSE
# 641 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 30
# 642 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_PIN
# 643 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 23, Common_Movement_ExclamationMark
# 644 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 23
# 645 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 646 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 647 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_5, MSGBOX_AUTOCLOSE
# 648 "data/maps/BaldesianForestDojo/scripts.pory"
	playfanfare MUS_RG_CAUGHT_INTRO
# 649 "data/maps/BaldesianForestDojo/scripts.pory"
	waitfanfare
# 650 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 651 "data/maps/BaldesianForestDojo/scripts.pory"
	fadedefaultbgm
# 652 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 653 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 654 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ChallengeBruno_Text_1, MSGBOX_AUTOCLOSE
# 656 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 657 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkUp4
# 658 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 659 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 660 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 661 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative RemoveFollowingPokemon
# 662 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_TEMP_E
# 663 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 664 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BaldesianForestDojo_Movement_PlayerReturns
# 665 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 666 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 667 "data/maps/BaldesianForestDojo/scripts.pory"
	call BaldesianForestDojo_ResetDisciplePositions
# 668 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 669 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 4
# 670 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


# 674 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakToPlayer:
# 675 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 675 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 676 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 676 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 676 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 676 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 676 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 676 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 677 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_down
	step_end

# 680 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakToPlayerLeft:
# 681 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 681 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 682 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 682 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 682 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 682 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 682 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 682 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 682 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 683 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_down
	step_end

# 686 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakReturns:
# 687 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 687 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 687 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 687 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 687 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 687 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 688 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 688 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 689 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_left
	step_end

# 692 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakReturnsLeft:
# 693 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 693 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 693 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 693 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 693 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 693 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 693 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 694 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 694 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 695 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_left
	step_end

# 698 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_PlayerGoesToGauntlet:
# 699 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 699 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 699 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 700 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 700 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 701 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 701 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 701 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 701 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 702 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 702 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 702 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
	step_end

# 705 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_FollowerBesidePlayer:
# 706 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 707 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_up
	step_end

# 710 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_LaroldinaGoesToSeat:
# 711 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 711 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 711 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 711 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 711 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 711 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 712 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 712 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 713 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 714 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_right
	step_end

# 717 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_CorneliusGoesToStage:
# 718 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 718 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 718 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 718 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 718 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 718 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 719 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
	step_end

# 722 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_CorneliusGoesToSeat:
# 723 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 724 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 724 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 724 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 724 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 724 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 724 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 725 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_left
	step_end

# 728 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakGoesToStage:
# 729 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 730 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 730 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 730 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 730 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 731 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 731 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 731 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 731 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 731 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 732 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_down
	step_end

# 735 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakReturnsToSeat:
# 736 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 736 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 736 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 736 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 736 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 737 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 737 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 737 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 737 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 738 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 739 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_left
	step_end

# 742 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_PlayerReturns:
# 743 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 743 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 743 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 744 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 744 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 744 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 744 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 745 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 745 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 746 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 746 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 746 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 747 "data/maps/BaldesianForestDojo/scripts.pory"
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
	.string "Kahahaha! Great job!\n You actually beat BRUNO!\p Here's your prize!$"

BaldesianForestDojo_EventScript_GiveProtectivePads_Text_1:
# 250 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "BRUNO wanted to talk to you too.\n Don't keep him waiting too long!$"

BaldesianForestDojo_EventScript_GiveProtectivePads_Text_2:
# 254 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "You don't have any room!\n Come back when you have space!$"

BaldesianForestDojo_EventScript_Bruno_Text_0:
# 269 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'll keep training.\n Our battle re-inspired me.\p There's also still the pressing issue\n of finding a sucessor…\p If only my younger brother wasn't\n MASTER BENNIS's disciple.$"

BaldesianForestDojo_EventScript_BrunoGoRecieveYourPrize_Text_0:
# 285 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Hm?\n {PLAYER}, did you get your prize already?\p If you didn't, go talk to my mother at\n the reception desk.$"

BaldesianForestDojo_EventScript_BrunoAChallenger_Text_0:
# 298 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Oh, are you a new challenger?$"

BaldesianForestDojo_EventScript_BrunoAChallenger_Text_1:
# 301 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I see.\n I look forward to our battle.\p As long as you can prove yourself\n worthy, that is.$"

BaldesianForestDojo_EventScript_BrunoAChallenger_Text_2:
# 307 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Hm. Then why are you here?\n Don't waste my time.$"

BaldesianForestDojo_EventScript_GiveKubfu_Text_0:
# 319 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "That was a great battle.\n As acknowledgement of your strength,\l I want you to accept this KUBFU.$"

BaldesianForestDojo_EventScript_GiveKubfu_Text_1:
# 327 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "{PLAYER} received KUBFU!$"

BaldesianForestDojo_EventScript_GiveKubfu_Text_2:
# 333 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "{PLAYER} received KUBFU!\p KUBFU was sent to the PC.$"

BaldesianForestDojo_EventScript_GiveScroll_Text_0:
# 348 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'll also give you one scroll.\n It contains secret techniques passed\l down in our family for generations.\p Which one would you like?\n Choose wisely.$"

BaldesianForestDojo_EventScript_GiveScroll_Text_1:
# 353 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Scroll of Darkness$"

BaldesianForestDojo_EventScript_GiveScroll_Text_2:
# 353 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Scroll of Waters$"

BaldesianForestDojo_EventScript_GiveScroll_Text_3:
# 365 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "You don't have any room.\n Come back when you do.$"

BaldesianForestDojo_EventScript_Disciple_Text_0:
# 374 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "They're busy training.\n It's probably a bad idea to disturb them.$"

BaldesianForestDojo_EventScript_OldManDojo_Text_0:
# 382 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'm the referee for the battles\n during dojo challenges.\p Nothing will get past me, so\n don't even think about cheating!$"

BaldesianForestDojo_EventScript_Asak_Text_0:
# 406 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "It's been a while since I've come home.\n I guess brother's still a strong as ever.$"

BaldesianForestDojo_EventScript_Asak_Text_1:
# 410 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Wow… you really beat brother…\p No wonder MASTER BENNIS and LADY\n ASAKURA recognize your strength.$"

BaldesianForestDojo_EventScript_Nerd_Text_0:
# 422 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Huff… Huff…\p Even though I look like this, I\n love training in the martial arts.$"

BaldesianForestDojo_EventScript_AsakTrigger_Text_0:
# 449 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "ASAK: {PLAYER}?\n What are you doing here?\l What about the ritual?$"

BaldesianForestDojo_EventScript_AsakTrigger_Text_1:
# 452 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'll still make it in time.$"

BaldesianForestDojo_EventScript_AsakTrigger_Text_2:
# 452 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Don't worry about it.$"

BaldesianForestDojo_EventScript_AsakTrigger_Text_3:
# 453 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "………\n Uh… okay.\p You must be here to challenge the DOJO,\n then.\p Talk to the old hag over there.\n She'll get everything set up.$"

BaldesianForestDojo_EventScript_AsakTrigger_Text_4:
# 471 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "ASAK: {PLAYER}?\n What are you doing here?\l What about the ritual?\p … … …\n I see… So all that happened.\l Thanks for everything that you did.\p You must be here to challenge the DOJO,\n then.\p Talk to the old hag over there.\n She'll get everything set up.$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_0:
# 513 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'm first!\p You gotta get through me before you\n even think about battling BRUNO!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_1:
# 521 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "OLD MAN: Winner: Challenger!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_2:
# 535 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'm next!\p You shall fear the power of my\n secret martial arts!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_3:
# 557 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "{PLAYER}.\p I'll show you how much stronger\n I've gotten!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_4:
# 576 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "BRUNO: Those were impressive battles.\n Finally, it's my turn.\p Will you be the first one to defeat me?$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_5:
# 588 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "OLD MAN: T-The winner is {PLAYER}!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_6:
# 595 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "{PLAYER}, was it? After you receive\n your prize, come talk to me.$"

BaldesianForestDojo_EventScript_ChallengeBruno_Text_0:
# 635 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "BRUNO: So you've come to challenge\n me again. Very well.\p Will you be the first one to defeat me?$"

BaldesianForestDojo_EventScript_ChallengeBruno_Text_1:
# 654 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "…{PLAYER}, was it? After you receive\n your prize, come talk to me.$"

BaldesianForestDojo_Text_ExplainDojo::
# 751 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Oh, a challenger? Kahaha, good!\n We haven't been getting many lately.\p The way the challenge works is simple:\n beat three of our disciples in a row.\l Only then can you challenge BRUNO.\p Easy, right? Kahahaha!\n Let's get everything set up for you!$"

BaldesianForestDojo_Text_BattleGirlDefeat::
# 761 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Maybe you can think about battling\n him…$"

BaldesianForestDojo_Text_NerdDefeat::
# 766 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I should've become a KNIGHT instead.$"

BaldesianForestDojo_Text_AsakDefeat::
# 770 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "…… As expected of the one\n acknowledged by MASTER BENNIS.$"

BaldesianForestDojo_Text_BrunoDefeat::
# 775 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "… I was finally defeated……\n Impressive. Truly impressive.$"
