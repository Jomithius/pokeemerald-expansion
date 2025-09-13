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
	msgbox BaldesianForestDojo_EventScript_GiveProtectivePads_Text_0, MSGBOX_DEFAULT
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
# 278 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 279 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 280 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 281 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_BrunoGoRecieveYourPrize::
# 286 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 287 "data/maps/BaldesianForestDojo/scripts.pory"
	faceplayer
# 288 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_BrunoGoRecieveYourPrize_Text_0, MSGBOX_AUTOCLOSE
# 292 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 293 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 294 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 295 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_BrunoAChallenger::
# 300 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 301 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_BrunoAChallenger_Text_0, MSGBOX_YESNO
# 302 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 303 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BaldesianForestDojo_EventScript_BrunoAChallenger_2
# 310 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_BrunoAChallenger_Text_2, MSGBOX_AUTOCLOSE
BaldesianForestDojo_EventScript_BrunoAChallenger_1:
# 313 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 314 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 315 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 316 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_BrunoAChallenger_2:
# 304 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_BrunoAChallenger_Text_1, MSGBOX_AUTOCLOSE
	goto BaldesianForestDojo_EventScript_BrunoAChallenger_1


BaldesianForestDojo_EventScript_GiveKubfu::
# 321 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 322 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveKubfu_Text_0, MSGBOX_DEFAULT
# 325 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 326 "data/maps/BaldesianForestDojo/scripts.pory"
	givemon SPECIES_KUBFU, 80
# 327 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_KUBFU
# 328 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq BaldesianForestDojo_EventScript_GiveKubfu_2
# 334 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq BaldesianForestDojo_EventScript_GiveKubfu_3
# 342 "data/maps/BaldesianForestDojo/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
BaldesianForestDojo_EventScript_GiveKubfu_1:
# 344 "data/maps/BaldesianForestDojo/scripts.pory"
	goto BaldesianForestDojo_EventScript_GiveScroll
# 345 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_GiveKubfu_2:
# 329 "data/maps/BaldesianForestDojo/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 330 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveKubfu_Text_1, MSGBOX_DEFAULT
# 331 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 332 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SYS_DEFEATED_BRUNO
	goto BaldesianForestDojo_EventScript_GiveKubfu_1

BaldesianForestDojo_EventScript_GiveKubfu_3:
# 335 "data/maps/BaldesianForestDojo/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 336 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveKubfu_Text_2, MSGBOX_DEFAULT
# 338 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 339 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SYS_DEFEATED_BRUNO
	goto BaldesianForestDojo_EventScript_GiveKubfu_1


BaldesianForestDojo_EventScript_GiveScroll::
# 350 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 351 "data/maps/BaldesianForestDojo/scripts.pory"
	faceplayer
# 352 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveScroll_Text_0, MSGBOX_DEFAULT
# 357 "data/maps/BaldesianForestDojo/scripts.pory"
	dynmultipush BaldesianForestDojo_EventScript_GiveScroll_Text_1, ITEM_SCROLL_OF_DARKNESS
# 358 "data/maps/BaldesianForestDojo/scripts.pory"
	dynmultipush BaldesianForestDojo_EventScript_GiveScroll_Text_2, ITEM_SCROLL_OF_WATERS
# 359 "data/maps/BaldesianForestDojo/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 361 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, ITEM_SCROLL_OF_DARKNESS
	goto_if_eq BaldesianForestDojo_EventScript_GiveScroll_2
# 366 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, ITEM_SCROLL_OF_WATERS
	goto_if_eq BaldesianForestDojo_EventScript_GiveScroll_3
# 372 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveScroll_Text_3, MSGBOX_AUTOCLOSE
# 374 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
BaldesianForestDojo_EventScript_GiveScroll_1:
# 376 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_GiveScroll_2:
# 362 "data/maps/BaldesianForestDojo/scripts.pory"
	giveitem ITEM_SCROLL_OF_DARKNESS
# 363 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 364 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 5
	goto BaldesianForestDojo_EventScript_GiveScroll_1

BaldesianForestDojo_EventScript_GiveScroll_3:
# 367 "data/maps/BaldesianForestDojo/scripts.pory"
	giveitem ITEM_SCROLL_OF_WATERS
# 368 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 369 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 5
	goto BaldesianForestDojo_EventScript_GiveScroll_1


BaldesianForestDojo_EventScript_Disciple::
# 381 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 382 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_Disciple_Text_0, MSGBOX_AUTOCLOSE
# 384 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 385 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_OldManDojo::
# 390 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 391 "data/maps/BaldesianForestDojo/scripts.pory"
	faceplayer
# 392 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_BALDESIA_FOREST_DOJO_STATE, 4
	goto_if_ge BaldesianForestDojo_EventScript_OldManDojo_2
# 397 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_OldManDojo_Text_1, MSGBOX_AUTOCLOSE
BaldesianForestDojo_EventScript_OldManDojo_1:
# 402 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 403 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 404 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 405 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_OldManDojo_2:
# 393 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_OldManDojo_Text_0, MSGBOX_AUTOCLOSE
	goto BaldesianForestDojo_EventScript_OldManDojo_1


BaldesianForestDojo_EventScript_Kubfu::
# 410 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 411 "data/maps/BaldesianForestDojo/scripts.pory"
	faceplayer
# 412 "data/maps/BaldesianForestDojo/scripts.pory"
	playmoncry SPECIES_KUBFU, CRY_MODE_ENCOUNTER
# 413 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmoncry
# 414 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_Asak::
# 419 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 420 "data/maps/BaldesianForestDojo/scripts.pory"
	faceplayer
# 421 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_BALDESIA_FOREST_DOJO_STATE, 3
	goto_if_le BaldesianForestDojo_EventScript_Asak_2
# 426 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_Asak_Text_1, MSGBOX_AUTOCLOSE
BaldesianForestDojo_EventScript_Asak_1:
# 430 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 431 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 432 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 433 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_Asak_2:
# 422 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_Asak_Text_0, MSGBOX_AUTOCLOSE
	goto BaldesianForestDojo_EventScript_Asak_1


BaldesianForestDojo_EventScript_Nerd::
# 438 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 439 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_Nerd_Text_0, MSGBOX_AUTOCLOSE
# 442 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 443 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_LeftTrigger::
# 448 "data/maps/BaldesianForestDojo/scripts.pory"
	lockall
# 449 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_TEMP_5
# 450 "data/maps/BaldesianForestDojo/scripts.pory"
	goto BaldesianForestDojo_EventScript_AsakTrigger
	end


BaldesianForestDojo_EventScript_AsakTrigger::
# 455 "data/maps/BaldesianForestDojo/scripts.pory"
	lockall
# 456 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_PIN
# 457 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 458 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 459 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 460 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_set FLAG_TEMP_5, BaldesianForestDojo_EventScript_AsakTrigger_2
# 464 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakToPlayer
BaldesianForestDojo_EventScript_AsakTrigger_1:
# 466 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 467 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_unset FLAG_HIDE_LOYAL_THREE_JIRACHIS_ALTAR, BaldesianForestDojo_EventScript_AsakTrigger_6
# 490 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_AsakTrigger_Text_4, MSGBOX_AUTOCLOSE
# 500 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 501 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_set FLAG_TEMP_5, BaldesianForestDojo_EventScript_AsakTrigger_14
# 505 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakReturns
BaldesianForestDojo_EventScript_AsakTrigger_13:
# 507 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 508 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 509 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 9
BaldesianForestDojo_EventScript_AsakTrigger_5:
# 511 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 1
# 512 "data/maps/BaldesianForestDojo/scripts.pory"
	releaseall
	end

BaldesianForestDojo_EventScript_AsakTrigger_2:
# 461 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakToPlayerLeft
	goto BaldesianForestDojo_EventScript_AsakTrigger_1

BaldesianForestDojo_EventScript_AsakTrigger_6:
# 468 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_AsakTrigger_Text_0, MSGBOX_DEFAULT
# 471 "data/maps/BaldesianForestDojo/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, BaldesianForestDojo_EventScript_AsakTrigger_Text_1, BaldesianForestDojo_EventScript_AsakTrigger_Text_2
# 472 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_AsakTrigger_Text_3, MSGBOX_AUTOCLOSE
# 478 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 479 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_set FLAG_TEMP_5, BaldesianForestDojo_EventScript_AsakTrigger_10
# 483 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakReturns
BaldesianForestDojo_EventScript_AsakTrigger_9:
# 485 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 486 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 487 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 9
	goto BaldesianForestDojo_EventScript_AsakTrigger_5

BaldesianForestDojo_EventScript_AsakTrigger_10:
# 480 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakReturnsLeft
	goto BaldesianForestDojo_EventScript_AsakTrigger_9

BaldesianForestDojo_EventScript_AsakTrigger_14:
# 502 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakReturnsLeft
	goto BaldesianForestDojo_EventScript_AsakTrigger_13


BaldesianForestDojo_EventScript_DojoChallenge::
# 517 "data/maps/BaldesianForestDojo/scripts.pory"
	lockall
# 518 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_TEMP_E
# 519 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 520 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative UpdateFollowingPokemon
# 521 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BaldesianForestDojo_Movement_PlayerGoesToGauntlet
# 522 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 523 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_BALL_OPEN
# 524 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_WHITE
# 525 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 14
# 526 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExitPokeball
# 527 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 528 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BaldesianForestDojo_Movement_FollowerBesidePlayer
# 529 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 530 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 531 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, FALSE
# 532 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_0, MSGBOX_AUTOCLOSE
# 535 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 536 "data/maps/BaldesianForestDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_LAROLDINA, BaldesianForestDojo_Text_BattleGirlDefeat
# 537 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_ARENA_TIMEUP2
# 538 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 539 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 540 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_1, MSGBOX_AUTOCLOSE
# 541 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 542 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 22, BaldesianForestDojo_Movement_LaroldinaGoesToSeat
# 543 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 544 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 21, BaldesianForestDojo_Movement_CorneliusGoesToStage
# 545 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 21
# 546 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 30
# 547 "data/maps/BaldesianForestDojo/scripts.pory"
	special HealPlayerParty
# 548 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative UpdateFollowingPokemon
# 549 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_BALL_OPEN
# 550 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_WHITE
# 551 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 24
# 552 "data/maps/BaldesianForestDojo/scripts.pory"
	setobjectxy OBJ_EVENT_ID_FOLLOWER, 8, 11
# 553 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExitPokeball
# 554 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 555 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BaldesianForestDojo_Movement_FollowerBesidePlayer
# 556 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 557 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 558 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 559 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, FALSE
# 560 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_2, MSGBOX_AUTOCLOSE
# 563 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 564 "data/maps/BaldesianForestDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_CORNELIUS, BaldesianForestDojo_Text_NerdDefeat
# 565 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_ARENA_TIMEUP2
# 566 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 567 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 568 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_1, MSGBOX_AUTOCLOSE
# 569 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 570 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 30
# 571 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 21, BaldesianForestDojo_Movement_CorneliusGoesToSeat
# 572 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 573 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakGoesToStage
# 574 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 9
# 575 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 30
# 576 "data/maps/BaldesianForestDojo/scripts.pory"
	special HealPlayerParty
# 577 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative UpdateFollowingPokemon
# 578 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_BALL_OPEN
# 579 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_WHITE
# 580 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 25
# 581 "data/maps/BaldesianForestDojo/scripts.pory"
	setobjectxy OBJ_EVENT_ID_FOLLOWER, 8, 11
# 582 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExitPokeball
# 583 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 584 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BaldesianForestDojo_Movement_FollowerBesidePlayer
# 585 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 586 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 587 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 588 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, FALSE
# 589 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_3, MSGBOX_AUTOCLOSE
# 596 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 597 "data/maps/BaldesianForestDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_ASAK_2, BaldesianForestDojo_Text_AsakDefeat
# 598 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_ARENA_TIMEUP2
# 599 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 600 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 601 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_4, MSGBOX_AUTOCLOSE
# 602 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 603 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 3
# 604 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakReturnsToSeat
# 605 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 606 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkDown4
# 607 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 608 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 2, Common_Movement_WalkDown4
# 609 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 2
# 610 "data/maps/BaldesianForestDojo/scripts.pory"
	special HealPlayerParty
# 611 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative UpdateFollowingPokemon
# 612 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_BALL_OPEN
# 613 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_WHITE
# 614 "data/maps/BaldesianForestDojo/scripts.pory"
	setobjectxy OBJ_EVENT_ID_FOLLOWER, 8, 11
# 615 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExitPokeball
# 616 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 617 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BaldesianForestDojo_Movement_FollowerBesidePlayer
# 618 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 619 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 620 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 621 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_KIMONO_DANCE, FALSE
# 622 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_5, MSGBOX_AUTOCLOSE
# 625 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 626 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_NONE, TRUE
# 627 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SYS_BOSS_BATTLE
# 628 "data/maps/BaldesianForestDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BRUNO, BaldesianForestDojo_Text_BrunoDefeat
# 629 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_SYS_BOSS_BATTLE
# 630 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 631 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 30
# 632 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_PIN
# 633 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 23, Common_Movement_ExclamationMark
# 634 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 23
# 635 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 636 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_6, MSGBOX_AUTOCLOSE
# 637 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 638 "data/maps/BaldesianForestDojo/scripts.pory"
	playfanfare MUS_OBTAIN_B_POINTS
# 639 "data/maps/BaldesianForestDojo/scripts.pory"
	waitfanfare
# 640 "data/maps/BaldesianForestDojo/scripts.pory"
	savebgm MUS_DUMMY
# 641 "data/maps/BaldesianForestDojo/scripts.pory"
	fadedefaultbgm
# 642 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 643 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 644 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_7, MSGBOX_AUTOCLOSE
# 646 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 647 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkUp4
# 648 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 649 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 650 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 651 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 652 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 653 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative RemoveFollowingPokemon
# 654 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_TEMP_E
# 655 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 656 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BaldesianForestDojo_Movement_PlayerReturns
# 657 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 658 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 659 "data/maps/BaldesianForestDojo/scripts.pory"
	call BaldesianForestDojo_ResetDisciplePositions
# 660 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 661 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 4
# 662 "data/maps/BaldesianForestDojo/scripts.pory"
	releaseall
	end


BaldesianForestDojo_EventScript_ChallengeBruno::
# 667 "data/maps/BaldesianForestDojo/scripts.pory"
	lockall
# 668 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_TEMP_E
# 669 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 670 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative UpdateFollowingPokemon
# 671 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BaldesianForestDojo_Movement_PlayerGoesToGauntlet
# 672 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 673 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkDown4
# 674 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 2, Common_Movement_WalkDown4
# 675 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 676 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_BALL_OPEN
# 677 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_WHITE
# 678 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExitPokeball
# 679 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 680 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BaldesianForestDojo_Movement_FollowerBesidePlayer
# 681 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 682 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 683 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_KIMONO_DANCE, FALSE
# 684 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ChallengeBruno_Text_0, MSGBOX_AUTOCLOSE
# 687 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 688 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SYS_BOSS_BATTLE
# 689 "data/maps/BaldesianForestDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BRUNO, BaldesianForestDojo_Text_BrunoDefeat
# 690 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_SYS_BOSS_BATTLE
# 691 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_NONE, FALSE
# 692 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 30
# 693 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_PIN
# 694 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 23, Common_Movement_ExclamationMark
# 695 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 23
# 696 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 697 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 698 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_6, MSGBOX_AUTOCLOSE
# 699 "data/maps/BaldesianForestDojo/scripts.pory"
	playfanfare MUS_OBTAIN_B_POINTS
# 700 "data/maps/BaldesianForestDojo/scripts.pory"
	waitfanfare
# 701 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 702 "data/maps/BaldesianForestDojo/scripts.pory"
	savebgm MUS_DUMMY
# 703 "data/maps/BaldesianForestDojo/scripts.pory"
	fadedefaultbgm
# 704 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 705 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 706 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ChallengeBruno_Text_1, MSGBOX_AUTOCLOSE
# 708 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 709 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkUp4
# 710 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 711 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 712 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 713 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative RemoveFollowingPokemon
# 714 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_TEMP_E
# 715 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 716 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BaldesianForestDojo_Movement_PlayerReturns
# 717 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 718 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 719 "data/maps/BaldesianForestDojo/scripts.pory"
	call BaldesianForestDojo_ResetDisciplePositions
# 720 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 721 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 4
# 722 "data/maps/BaldesianForestDojo/scripts.pory"
	releaseall
	end


# 726 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakToPlayer:
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
# 728 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 728 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 729 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_down
	step_end

# 732 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakToPlayerLeft:
# 733 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 733 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 734 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 734 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 734 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 734 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 734 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 734 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 734 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 735 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_down
	step_end

# 738 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakReturns:
# 739 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 739 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 739 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 739 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 739 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 739 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 740 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 740 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 741 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_left
	step_end

# 744 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakReturnsLeft:
# 745 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 745 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 745 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 745 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 745 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 745 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 745 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 746 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 746 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 747 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_left
	step_end

# 750 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_PlayerGoesToGauntlet:
# 751 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 751 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 751 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 752 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 752 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 753 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 753 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 753 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 753 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 754 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 754 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 754 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
	step_end

# 757 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_FollowerBesidePlayer:
# 758 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 759 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_up
	step_end

# 762 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_LaroldinaGoesToSeat:
# 763 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 763 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 763 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 763 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 763 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 763 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 764 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 764 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 765 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 766 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_right
	step_end

# 769 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_CorneliusGoesToStage:
# 770 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 770 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 770 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 770 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 770 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 770 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 771 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
	step_end

# 774 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_CorneliusGoesToSeat:
# 775 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 776 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 776 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 776 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 776 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 776 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 776 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 777 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_left
	step_end

# 780 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakGoesToStage:
# 781 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 782 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 782 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 782 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 782 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 783 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 783 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 783 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 783 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 783 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 784 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_down
	step_end

# 787 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakReturnsToSeat:
# 788 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 788 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 788 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 788 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 788 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 789 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 789 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 789 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 789 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 790 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 791 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_left
	step_end

# 794 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_PlayerReturns:
# 795 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 795 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 795 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 796 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 796 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 796 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 796 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 797 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 797 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 798 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 798 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 798 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 799 "data/maps/BaldesianForestDojo/scripts.pory"
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
	.string "Kahaha!\n All right! Good luck!$"

BaldesianForestDojo_EventScript_ReadyToChallenge_Text_0:
# 170 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Kahaha! Welcome back!\n Here to try again?$"

BaldesianForestDojo_EventScript_ReadyToChallenge_Text_1:
# 188 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Kahahaha!\n All right! Good luck!$"

BaldesianForestDojo_EventScript_ReadyToChallenge_Text_2:
# 195 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "All right.\n Let me know when you're ready.$"

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
	.string "I'll keep training.\n Our battle inspired me.\p There's also still the pressing issue\n of finding a successor…\p Don't worry. I can tell\n you're too busy to take over.\l You still have a journey to finish.\p If only my younger brother wasn't\n MASTER BENNIS's disciple.$"

BaldesianForestDojo_EventScript_BrunoGoRecieveYourPrize_Text_0:
# 288 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Hm?\n Did you get your prize already?\p If you didn't, go talk to my mother at\n the reception desk.$"

BaldesianForestDojo_EventScript_BrunoAChallenger_Text_0:
# 301 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Oh, are you a new challenger?$"

BaldesianForestDojo_EventScript_BrunoAChallenger_Text_1:
# 304 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I see.\n I look forward to our battle.\p As long as you can prove yourself\n worthy, that is.$"

BaldesianForestDojo_EventScript_BrunoAChallenger_Text_2:
# 310 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Hm. Then why are you here?\n Don't waste my time.$"

BaldesianForestDojo_EventScript_GiveKubfu_Text_0:
# 322 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "That was a great battle.\p As acknowledgement of your strength,\n I want you to accept this KUBFU.$"

BaldesianForestDojo_EventScript_GiveKubfu_Text_1:
# 330 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "{PLAYER} received KUBFU!$"

BaldesianForestDojo_EventScript_GiveKubfu_Text_2:
# 336 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "{PLAYER} received KUBFU!\n KUBFU was sent to the PC.$"

BaldesianForestDojo_EventScript_GiveScroll_Text_0:
# 352 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'll also give you one scroll.\p It contains secret techniques passed\n down in our family for generations.\p Which one would you like?\n Choose wisely.$"

BaldesianForestDojo_EventScript_GiveScroll_Text_1:
# 357 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "SCROLL OF DARKNESS$"

BaldesianForestDojo_EventScript_GiveScroll_Text_2:
# 358 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "SCROLL OF WATERS$"

BaldesianForestDojo_EventScript_GiveScroll_Text_3:
# 372 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "You don't have any room.\n Come back when you do.$"

BaldesianForestDojo_EventScript_Disciple_Text_0:
# 382 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "They're busy training.\n It's probably a bad idea to disturb them.$"

BaldesianForestDojo_EventScript_OldManDojo_Text_0:
# 393 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Those were some great battles,\n {PLAYER}!$"

BaldesianForestDojo_EventScript_OldManDojo_Text_1:
# 397 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'm the referee for the battles\n during dojo challenges.\p Nothing will get past me, so\n don't even think about cheating!$"

BaldesianForestDojo_EventScript_Asak_Text_0:
# 422 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "It's been a while since I've come home.\n I guess brother's still a strong as ever.$"

BaldesianForestDojo_EventScript_Asak_Text_1:
# 426 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Wow… you really beat brother…\p No wonder MASTER BENNIS and LADY\n ASAKURA recognize your strength.$"

BaldesianForestDojo_EventScript_Nerd_Text_0:
# 439 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Huff… Huff…\p Even though I look like this, I\n love training in the martial arts.$"

BaldesianForestDojo_EventScript_AsakTrigger_Text_0:
# 468 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "ASAK: {PLAYER}?\n What are you doing here?\l What about the ritual?$"

BaldesianForestDojo_EventScript_AsakTrigger_Text_1:
# 471 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'll still make it in time.$"

BaldesianForestDojo_EventScript_AsakTrigger_Text_2:
# 471 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Don't worry about it.$"

BaldesianForestDojo_EventScript_AsakTrigger_Text_3:
# 472 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "………\n Uh… okay.\p You must be here to challenge the DOJO,\n then.\p Talk to the old hag over there.\n She'll get everything set up.$"

BaldesianForestDojo_EventScript_AsakTrigger_Text_4:
# 490 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "ASAK: {PLAYER}?\n What are you doing here?\l What about the ritual?\p … … …\n I see… So all that happened.\l Thanks for everything that you did.\p You must be here to challenge the DOJO,\n then.\p Talk to the old hag over there.\n She'll get everything set up.$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_0:
# 532 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'm first!\p You gotta get through me before you\n even think about battling BRUNO!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_1:
# 540 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "OLD MAN: Winner: Challenger!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_2:
# 560 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'm next!\p You shall fear the power of my\n secret martial arts!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_3:
# 589 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "{PLAYER}.\p I have to admit I have newfound\n respect for your strength.\p But I've also traveled HOENN, training\n since our battle in DEWFORD TOWN.\p I'll show you how much stronger\n I've gotten!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_4:
# 601 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "OLD MAN: Winner: {PLAYER}!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_5:
# 622 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "BRUNO: Those were impressive battles.\n Finally, it's my turn.\p Will you be the first one to defeat me?$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_6:
# 636 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "OLD MAN: T-The winner is {PLAYER}!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_7:
# 644 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "{PLAYER}, was it? After you receive\n your prize, come talk to me.$"

BaldesianForestDojo_EventScript_ChallengeBruno_Text_0:
# 684 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "BRUNO: So you've come to challenge\n me again. Very well.\p Will you be the first one to defeat me?$"

BaldesianForestDojo_EventScript_ChallengeBruno_Text_1:
# 706 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "…{PLAYER}, was it? After you receive\n your prize, come talk to me.$"

BaldesianForestDojo_Text_ExplainDojo::
# 803 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Oh, a challenger? Kahaha, good!\n We haven't been getting many lately.\p The way the challenge works is simple:\n beat three of our disciples in a row.\l Only then can you challenge BRUNO.\p Easy, right? Kahahaha!\n Let's get everything set up for you!$"

BaldesianForestDojo_Text_BattleGirlDefeat::
# 813 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Maybe you can think about battling\n him…$"

BaldesianForestDojo_Text_NerdDefeat::
# 818 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I should've become a KNIGHT instead.$"

BaldesianForestDojo_Text_AsakDefeat::
# 822 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "…… As expected of the one\n acknowledged by MASTER BENNIS.$"

BaldesianForestDojo_Text_BrunoDefeat::
# 827 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "… I was finally defeated……\n Impressive. Truly impressive.$"
