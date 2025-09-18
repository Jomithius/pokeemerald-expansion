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
# 57 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_HIDE_LAROLDINA_BATTLER
	return


BaldesianForestDojo_ResetDisciplePositions::
# 62 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 15
# 63 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 16
# 64 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 17
# 65 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 18
# 66 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 19
# 67 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 20
# 68 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 21
# 69 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 22
# 70 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 23
# 71 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 26
# 72 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_HIDE_GAUNTLET_TRAINERS
# 73 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_HIDE_LAROLDINA_SPECTATOR
# 74 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_HIDE_LAROLDINA_BATTLER
# 75 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 3
# 76 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 4
# 77 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 5
# 78 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 6
# 79 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 7
# 80 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 8
# 81 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 10
# 82 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 11
# 83 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 13
# 84 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_HIDE_DOJO_DISCIPLES
	return


BaldesianForestDojo_DisciplePositionsBruno::
# 89 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 3
# 90 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 4
# 91 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 5
# 92 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 6
# 93 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 7
# 94 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 8
# 95 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 10
# 96 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 11
# 97 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 13
# 98 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_HIDE_DOJO_DISCIPLES
# 99 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 15
# 100 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 16
# 101 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 17
# 102 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 18
# 103 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 19
# 104 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 20
# 105 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 21
# 106 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 23
# 107 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 26
# 108 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_HIDE_GAUNTLET_TRAINERS
# 109 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_HIDE_LAROLDINA_SPECTATOR
	return


BaldesianForestDojo_RemoveTrainerPokemon::
# 114 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 14
# 115 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 24
# 116 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 25
# 117 "data/maps/BaldesianForestDojo/scripts.pory"
	hideobjectat OBJ_EVENT_ID_FOLLOWER, MAP_BALDESIAN_FOREST_DOJO
	return


BaldesianForestDojo_RemoveBrunoPokemon::
# 122 "data/maps/BaldesianForestDojo/scripts.pory"
	removeobject 2
	return


BaldesianForestDojo_EventScript_KimonoOldWoman::
# 127 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 128 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_eq VAR_BALDESIA_FOREST_DOJO_STATE, 1, BaldesianForestDojo_EventScript_ExplainDojo
# 129 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_eq VAR_BALDESIA_FOREST_DOJO_STATE, 2, BaldesianForestDojo_EventScript_ReadyToChallenge
# 130 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_eq VAR_BALDESIA_FOREST_DOJO_STATE, 3, BaldesianForestDojo_EventScript_ReadyToChallengeBruno
# 131 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_unset FLAG_RECEIVED_PROTECTIVE_PADS, BaldesianForestDojo_EventScript_GiveProtectivePads
# 132 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_KimonoOldWoman_Text_0, MSGBOX_AUTOCLOSE
# 136 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 137 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_ExplainDojo::
# 142 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 143 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_Text_ExplainDojo, MSGBOX_AUTOCLOSE
# 144 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 145 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceRight
# 146 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 147 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 148 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 149 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ExplainDojo_Text_0, MSGBOX_AUTOCLOSE
# 152 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 153 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 154 "data/maps/BaldesianForestDojo/scripts.pory"
	call BaldesianForestDojo_DisciplePositionsGauntlet
# 155 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 156 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 157 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 158 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 159 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 160 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ExplainDojo_Text_1, MSGBOX_AUTOCLOSE
# 162 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 163 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 2
# 164 "data/maps/BaldesianForestDojo/scripts.pory"
	special HealPlayerParty
# 165 "data/maps/BaldesianForestDojo/scripts.pory"
	goto BaldesianForestDojo_EventScript_DojoChallenge
# 166 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_ReadyToChallenge::
# 171 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 172 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ReadyToChallenge_Text_0, MSGBOX_YESNO
# 174 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BaldesianForestDojo_EventScript_ReadyToChallenge_2
# 197 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ReadyToChallenge_Text_2, MSGBOX_AUTOCLOSE
# 199 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
BaldesianForestDojo_EventScript_ReadyToChallenge_1:
# 201 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_ReadyToChallenge_2:
# 175 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceRight
# 176 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 177 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 178 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 179 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ExplainDojo_Text_0, MSGBOX_AUTOCLOSE
# 182 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 183 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 184 "data/maps/BaldesianForestDojo/scripts.pory"
	call BaldesianForestDojo_DisciplePositionsGauntlet
# 185 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 186 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 187 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 188 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 189 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 190 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ReadyToChallenge_Text_1, MSGBOX_AUTOCLOSE
# 192 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 193 "data/maps/BaldesianForestDojo/scripts.pory"
	special HealPlayerParty
# 194 "data/maps/BaldesianForestDojo/scripts.pory"
	goto BaldesianForestDojo_EventScript_DojoChallenge
	goto BaldesianForestDojo_EventScript_ReadyToChallenge_1


BaldesianForestDojo_EventScript_ReadyToChallengeBruno::
# 206 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 207 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ReadyToChallengeBruno_Text_0, MSGBOX_YESNO
# 209 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BaldesianForestDojo_EventScript_ReadyToChallengeBruno_2
# 233 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ReadyToChallenge_Text_2, MSGBOX_AUTOCLOSE
# 235 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
BaldesianForestDojo_EventScript_ReadyToChallengeBruno_1:
# 237 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_ReadyToChallengeBruno_2:
# 210 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceRight
# 211 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 212 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 213 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 214 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ReadyToChallengeBruno_Text_1, MSGBOX_AUTOCLOSE
# 218 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 219 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 220 "data/maps/BaldesianForestDojo/scripts.pory"
	call BaldesianForestDojo_DisciplePositionsBruno
# 221 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 222 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 223 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 224 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 225 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 226 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ReadyToChallenge_Text_1, MSGBOX_AUTOCLOSE
# 228 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 229 "data/maps/BaldesianForestDojo/scripts.pory"
	special HealPlayerParty
# 230 "data/maps/BaldesianForestDojo/scripts.pory"
	goto BaldesianForestDojo_EventScript_ChallengeBruno
	goto BaldesianForestDojo_EventScript_ReadyToChallengeBruno_1


BaldesianForestDojo_EventScript_GiveProtectivePads::
# 242 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 243 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveProtectivePads_Text_0, MSGBOX_DEFAULT
# 246 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 247 "data/maps/BaldesianForestDojo/scripts.pory"
	checkitemspace ITEM_PROTECTIVE_PADS
# 248 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BaldesianForestDojo_EventScript_GiveProtectivePads_2
# 256 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveProtectivePads_Text_2, MSGBOX_AUTOCLOSE
BaldesianForestDojo_EventScript_GiveProtectivePads_1:
# 259 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 260 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_GiveProtectivePads_2:
# 249 "data/maps/BaldesianForestDojo/scripts.pory"
	giveitem ITEM_PROTECTIVE_PADS
# 250 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 251 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_RECEIVED_PROTECTIVE_PADS
# 252 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveProtectivePads_Text_1, MSGBOX_AUTOCLOSE
	goto BaldesianForestDojo_EventScript_GiveProtectivePads_1


BaldesianForestDojo_EventScript_Bruno::
# 265 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 266 "data/maps/BaldesianForestDojo/scripts.pory"
	faceplayer
# 267 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_le VAR_BALDESIA_FOREST_DOJO_STATE, 2, BaldesianForestDojo_EventScript_BrunoAChallenger
# 268 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_eq VAR_BALDESIA_FOREST_DOJO_STATE, 3, BaldesianForestDojo_EventScript_BrunoComeToChallengeMeAgain
# 269 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_unset FLAG_RECEIVED_PROTECTIVE_PADS, BaldesianForestDojo_EventScript_BrunoGoRecieveYourPrize
# 270 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_unset FLAG_SYS_DEFEATED_BRUNO, BaldesianForestDojo_EventScript_GiveKubfu
# 271 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_eq VAR_BALDESIA_FOREST_DOJO_STATE, 4, BaldesianForestDojo_EventScript_GiveScroll
# 272 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_Bruno_Text_0, MSGBOX_AUTOCLOSE
# 281 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 282 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 283 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 284 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_BrunoGoRecieveYourPrize::
# 289 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 290 "data/maps/BaldesianForestDojo/scripts.pory"
	faceplayer
# 291 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_BrunoGoRecieveYourPrize_Text_0, MSGBOX_AUTOCLOSE
# 295 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 296 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 297 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 298 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_BrunoAChallenger::
# 303 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 304 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_BrunoAChallenger_Text_0, MSGBOX_YESNO
# 305 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 306 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BaldesianForestDojo_EventScript_BrunoAChallenger_2
# 313 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_BrunoAChallenger_Text_2, MSGBOX_AUTOCLOSE
BaldesianForestDojo_EventScript_BrunoAChallenger_1:
# 316 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 317 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 318 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 319 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_BrunoAChallenger_2:
# 307 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_BrunoAChallenger_Text_1, MSGBOX_AUTOCLOSE
	goto BaldesianForestDojo_EventScript_BrunoAChallenger_1


BaldesianForestDojo_EventScript_BrunoComeToChallengeMeAgain::
# 324 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_BrunoComeToChallengeMeAgain_Text_0, MSGBOX_AUTOCLOSE
# 327 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 328 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 329 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 330 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_GiveKubfu::
# 335 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 336 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveKubfu_Text_0, MSGBOX_DEFAULT
# 339 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 340 "data/maps/BaldesianForestDojo/scripts.pory"
	givemon SPECIES_KUBFU, 80
# 341 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_KUBFU
# 342 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq BaldesianForestDojo_EventScript_GiveKubfu_2
# 348 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq BaldesianForestDojo_EventScript_GiveKubfu_3
# 356 "data/maps/BaldesianForestDojo/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
BaldesianForestDojo_EventScript_GiveKubfu_1:
# 358 "data/maps/BaldesianForestDojo/scripts.pory"
	goto BaldesianForestDojo_EventScript_GiveScroll
# 359 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_GiveKubfu_2:
# 343 "data/maps/BaldesianForestDojo/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 344 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveKubfu_Text_1, MSGBOX_DEFAULT
# 345 "data/maps/BaldesianForestDojo/scripts.pory"
	waitfanfare
# 346 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SYS_DEFEATED_BRUNO
	goto BaldesianForestDojo_EventScript_GiveKubfu_1

BaldesianForestDojo_EventScript_GiveKubfu_3:
# 349 "data/maps/BaldesianForestDojo/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 350 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveKubfu_Text_2, MSGBOX_DEFAULT
# 352 "data/maps/BaldesianForestDojo/scripts.pory"
	waitfanfare
# 353 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SYS_DEFEATED_BRUNO
	goto BaldesianForestDojo_EventScript_GiveKubfu_1


BaldesianForestDojo_EventScript_GiveScroll::
# 364 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 365 "data/maps/BaldesianForestDojo/scripts.pory"
	faceplayer
# 366 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveScroll_Text_0, MSGBOX_DEFAULT
# 371 "data/maps/BaldesianForestDojo/scripts.pory"
	dynmultipush BaldesianForestDojo_EventScript_GiveScroll_Text_1, ITEM_SCROLL_OF_DARKNESS
# 372 "data/maps/BaldesianForestDojo/scripts.pory"
	dynmultipush BaldesianForestDojo_EventScript_GiveScroll_Text_2, ITEM_SCROLL_OF_WATERS
# 373 "data/maps/BaldesianForestDojo/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 375 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, ITEM_SCROLL_OF_DARKNESS
	goto_if_eq BaldesianForestDojo_EventScript_GiveScroll_2
# 380 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_RESULT, ITEM_SCROLL_OF_WATERS
	goto_if_eq BaldesianForestDojo_EventScript_GiveScroll_3
# 386 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_GiveScroll_Text_3, MSGBOX_AUTOCLOSE
# 388 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
BaldesianForestDojo_EventScript_GiveScroll_1:
# 390 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_GiveScroll_2:
# 376 "data/maps/BaldesianForestDojo/scripts.pory"
	giveitem ITEM_SCROLL_OF_DARKNESS
# 377 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 378 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 5
	goto BaldesianForestDojo_EventScript_GiveScroll_1

BaldesianForestDojo_EventScript_GiveScroll_3:
# 381 "data/maps/BaldesianForestDojo/scripts.pory"
	giveitem ITEM_SCROLL_OF_WATERS
# 382 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 383 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 5
	goto BaldesianForestDojo_EventScript_GiveScroll_1


BaldesianForestDojo_EventScript_Disciple::
# 395 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 396 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_Disciple_Text_0, MSGBOX_AUTOCLOSE
# 398 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 399 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_OldManDojo::
# 404 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 405 "data/maps/BaldesianForestDojo/scripts.pory"
	faceplayer
# 406 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_BALDESIA_FOREST_DOJO_STATE, 4
	goto_if_ge BaldesianForestDojo_EventScript_OldManDojo_2
# 411 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_OldManDojo_Text_1, MSGBOX_AUTOCLOSE
BaldesianForestDojo_EventScript_OldManDojo_1:
# 416 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 417 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 418 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 419 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_OldManDojo_2:
# 407 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_OldManDojo_Text_0, MSGBOX_AUTOCLOSE
	goto BaldesianForestDojo_EventScript_OldManDojo_1


BaldesianForestDojo_EventScript_Kubfu::
# 424 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 425 "data/maps/BaldesianForestDojo/scripts.pory"
	faceplayer
# 426 "data/maps/BaldesianForestDojo/scripts.pory"
	playmoncry SPECIES_KUBFU, CRY_MODE_ENCOUNTER
# 427 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmoncry
# 428 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_EventScript_Asak::
# 433 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 434 "data/maps/BaldesianForestDojo/scripts.pory"
	faceplayer
# 435 "data/maps/BaldesianForestDojo/scripts.pory"
	compare VAR_BALDESIA_FOREST_DOJO_STATE, 3
	goto_if_le BaldesianForestDojo_EventScript_Asak_2
# 440 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_Asak_Text_1, MSGBOX_AUTOCLOSE
BaldesianForestDojo_EventScript_Asak_1:
# 444 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 445 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 446 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 447 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end

BaldesianForestDojo_EventScript_Asak_2:
# 436 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_Asak_Text_0, MSGBOX_AUTOCLOSE
	goto BaldesianForestDojo_EventScript_Asak_1


BaldesianForestDojo_EventScript_Nerd::
# 452 "data/maps/BaldesianForestDojo/scripts.pory"
	lock
# 453 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_Nerd_Text_0, MSGBOX_AUTOCLOSE
# 456 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 457 "data/maps/BaldesianForestDojo/scripts.pory"
	release
	end


BaldesianForestDojo_LeftTrigger::
# 462 "data/maps/BaldesianForestDojo/scripts.pory"
	lockall
# 463 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_TEMP_5
# 464 "data/maps/BaldesianForestDojo/scripts.pory"
	goto BaldesianForestDojo_EventScript_AsakTrigger
	end


BaldesianForestDojo_EventScript_AsakTrigger::
# 469 "data/maps/BaldesianForestDojo/scripts.pory"
	lockall
# 470 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_PIN
# 471 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 472 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 473 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 474 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_set FLAG_TEMP_5, BaldesianForestDojo_EventScript_AsakTrigger_2
# 478 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakToPlayer
BaldesianForestDojo_EventScript_AsakTrigger_1:
# 480 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 481 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_unset FLAG_HIDE_LOYAL_THREE_JIRACHIS_ALTAR, BaldesianForestDojo_EventScript_AsakTrigger_6
# 504 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_AsakTrigger_Text_4, MSGBOX_AUTOCLOSE
# 514 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 515 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_set FLAG_TEMP_5, BaldesianForestDojo_EventScript_AsakTrigger_14
# 519 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakReturns
BaldesianForestDojo_EventScript_AsakTrigger_13:
# 521 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 522 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 523 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 9
BaldesianForestDojo_EventScript_AsakTrigger_5:
# 525 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 1
# 526 "data/maps/BaldesianForestDojo/scripts.pory"
	releaseall
	end

BaldesianForestDojo_EventScript_AsakTrigger_2:
# 475 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakToPlayerLeft
	goto BaldesianForestDojo_EventScript_AsakTrigger_1

BaldesianForestDojo_EventScript_AsakTrigger_6:
# 482 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_AsakTrigger_Text_0, MSGBOX_DEFAULT
# 485 "data/maps/BaldesianForestDojo/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, BaldesianForestDojo_EventScript_AsakTrigger_Text_1, BaldesianForestDojo_EventScript_AsakTrigger_Text_2
# 486 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_AsakTrigger_Text_3, MSGBOX_AUTOCLOSE
# 492 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 493 "data/maps/BaldesianForestDojo/scripts.pory"
	goto_if_set FLAG_TEMP_5, BaldesianForestDojo_EventScript_AsakTrigger_10
# 497 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakReturns
BaldesianForestDojo_EventScript_AsakTrigger_9:
# 499 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 500 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 501 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 9
	goto BaldesianForestDojo_EventScript_AsakTrigger_5

BaldesianForestDojo_EventScript_AsakTrigger_10:
# 494 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakReturnsLeft
	goto BaldesianForestDojo_EventScript_AsakTrigger_9

BaldesianForestDojo_EventScript_AsakTrigger_14:
# 516 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakReturnsLeft
	goto BaldesianForestDojo_EventScript_AsakTrigger_13


BaldesianForestDojo_EventScript_DojoChallenge::
# 531 "data/maps/BaldesianForestDojo/scripts.pory"
	lockall
# 532 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_TEMP_E
# 533 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 534 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative UpdateFollowingPokemon
# 535 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BaldesianForestDojo_Movement_PlayerGoesToGauntlet
# 536 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 537 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_BALL_OPEN
# 538 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_WHITE
# 539 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 14
# 540 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExitPokeball
# 541 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 542 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BaldesianForestDojo_Movement_FollowerBesidePlayer
# 543 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 544 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 545 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, FALSE
# 546 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_0, MSGBOX_AUTOCLOSE
# 549 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 550 "data/maps/BaldesianForestDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_LAROLDINA, BaldesianForestDojo_Text_BattleGirlDefeat
# 551 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_ARENA_TIMEUP2
# 552 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 553 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 554 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_1, MSGBOX_AUTOCLOSE
# 555 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 556 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 22, BaldesianForestDojo_Movement_LaroldinaGoesToSeat
# 557 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 558 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 21, BaldesianForestDojo_Movement_CorneliusGoesToStage
# 559 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 21
# 560 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 30
# 561 "data/maps/BaldesianForestDojo/scripts.pory"
	special HealPlayerParty
# 562 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative UpdateFollowingPokemon
# 563 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_BALL_OPEN
# 564 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_WHITE
# 565 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 24
# 566 "data/maps/BaldesianForestDojo/scripts.pory"
	setobjectxy OBJ_EVENT_ID_FOLLOWER, 8, 11
# 567 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExitPokeball
# 568 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 569 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BaldesianForestDojo_Movement_FollowerBesidePlayer
# 570 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 571 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 572 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 573 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, FALSE
# 574 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_2, MSGBOX_AUTOCLOSE
# 577 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 578 "data/maps/BaldesianForestDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_CORNELIUS, BaldesianForestDojo_Text_NerdDefeat
# 579 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_ARENA_TIMEUP2
# 580 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 581 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 582 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_1, MSGBOX_AUTOCLOSE
# 583 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 584 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 30
# 585 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 21, BaldesianForestDojo_Movement_CorneliusGoesToSeat
# 586 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 587 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakGoesToStage
# 588 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 9
# 589 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 30
# 590 "data/maps/BaldesianForestDojo/scripts.pory"
	special HealPlayerParty
# 591 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative UpdateFollowingPokemon
# 592 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_BALL_OPEN
# 593 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_WHITE
# 594 "data/maps/BaldesianForestDojo/scripts.pory"
	addobject 25
# 595 "data/maps/BaldesianForestDojo/scripts.pory"
	setobjectxy OBJ_EVENT_ID_FOLLOWER, 8, 11
# 596 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExitPokeball
# 597 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 598 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BaldesianForestDojo_Movement_FollowerBesidePlayer
# 599 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 600 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 601 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 602 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, FALSE
# 603 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_3, MSGBOX_AUTOCLOSE
# 610 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 611 "data/maps/BaldesianForestDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_ASAK_2, BaldesianForestDojo_Text_AsakDefeat
# 612 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_ARENA_TIMEUP2
# 613 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 614 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 615 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_4, MSGBOX_AUTOCLOSE
# 616 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 617 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 3
# 618 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 9, BaldesianForestDojo_Movement_AsakReturnsToSeat
# 619 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 620 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkDown4
# 621 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 622 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 2, Common_Movement_WalkDown4
# 623 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 2
# 624 "data/maps/BaldesianForestDojo/scripts.pory"
	special HealPlayerParty
# 625 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative UpdateFollowingPokemon
# 626 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_BALL_OPEN
# 627 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_WHITE
# 628 "data/maps/BaldesianForestDojo/scripts.pory"
	setobjectxy OBJ_EVENT_ID_FOLLOWER, 8, 11
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
	waitse
# 635 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_KIMONO_DANCE, FALSE
# 636 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_5, MSGBOX_AUTOCLOSE
# 639 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 640 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_NONE, TRUE
# 641 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SYS_BOSS_BATTLE
# 642 "data/maps/BaldesianForestDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BRUNO, BaldesianForestDojo_Text_BrunoDefeat
# 643 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_SYS_BOSS_BATTLE
# 644 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 645 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 30
# 646 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_PIN
# 647 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 23, Common_Movement_ExclamationMark
# 648 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 23
# 649 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 650 "data/maps/BaldesianForestDojo/scripts.pory"
	playfanfare MUS_OBTAIN_B_POINTS
# 651 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_6, MSGBOX_DEFAULT
# 652 "data/maps/BaldesianForestDojo/scripts.pory"
	waitfanfare
# 653 "data/maps/BaldesianForestDojo/scripts.pory"
	savebgm MUS_DUMMY
# 654 "data/maps/BaldesianForestDojo/scripts.pory"
	fadedefaultbgm
# 655 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 656 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 657 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_7, MSGBOX_AUTOCLOSE
# 659 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 660 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkUp4
# 661 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 662 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 663 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 664 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 665 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 666 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative RemoveFollowingPokemon
# 667 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_TEMP_E
# 668 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 669 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BaldesianForestDojo_Movement_PlayerReturns
# 670 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 671 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 672 "data/maps/BaldesianForestDojo/scripts.pory"
	call BaldesianForestDojo_ResetDisciplePositions
# 673 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 674 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 4
# 675 "data/maps/BaldesianForestDojo/scripts.pory"
	releaseall
	end


BaldesianForestDojo_EventScript_ChallengeBruno::
# 680 "data/maps/BaldesianForestDojo/scripts.pory"
	lockall
# 681 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_TEMP_E
# 682 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 683 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative UpdateFollowingPokemon
# 684 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BaldesianForestDojo_Movement_PlayerGoesToGauntlet
# 685 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 686 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkDown4
# 687 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 688 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 2, Common_Movement_WalkDown4
# 689 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 2
# 690 "data/maps/BaldesianForestDojo/scripts.pory"
	special HealPlayerParty
# 691 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative UpdateFollowingPokemon
# 692 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_BALL_OPEN
# 693 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_WHITE
# 694 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExitPokeball
# 695 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 696 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BaldesianForestDojo_Movement_FollowerBesidePlayer
# 697 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 698 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 699 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_KIMONO_DANCE, FALSE
# 700 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_ChallengeBruno_Text_0, MSGBOX_AUTOCLOSE
# 703 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 704 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SYS_BOSS_BATTLE
# 705 "data/maps/BaldesianForestDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BRUNO, BaldesianForestDojo_Text_BrunoDefeat
# 706 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_SYS_BOSS_BATTLE
# 707 "data/maps/BaldesianForestDojo/scripts.pory"
	playbgm MUS_NONE, FALSE
# 708 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 709 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 30
# 710 "data/maps/BaldesianForestDojo/scripts.pory"
	playse SE_PIN
# 711 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 23, Common_Movement_ExclamationMark
# 712 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 23
# 713 "data/maps/BaldesianForestDojo/scripts.pory"
	waitse
# 714 "data/maps/BaldesianForestDojo/scripts.pory"
	playfanfare MUS_OBTAIN_B_POINTS
# 715 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_6, MSGBOX_DEFAULT
# 716 "data/maps/BaldesianForestDojo/scripts.pory"
	waitfanfare
# 717 "data/maps/BaldesianForestDojo/scripts.pory"
	savebgm MUS_DUMMY
# 718 "data/maps/BaldesianForestDojo/scripts.pory"
	fadedefaultbgm
# 719 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 720 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 721 "data/maps/BaldesianForestDojo/scripts.pory"
	msgbox BaldesianForestDojo_EventScript_DojoChallenge_Text_7, MSGBOX_AUTOCLOSE
# 723 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmessage
# 724 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_WalkUp4
# 725 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 726 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 727 "data/maps/BaldesianForestDojo/scripts.pory"
	delay 8
# 728 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 729 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 730 "data/maps/BaldesianForestDojo/scripts.pory"
	callnative RemoveFollowingPokemon
# 731 "data/maps/BaldesianForestDojo/scripts.pory"
	setflag FLAG_TEMP_E
# 732 "data/maps/BaldesianForestDojo/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 733 "data/maps/BaldesianForestDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BaldesianForestDojo_Movement_PlayerReturns
# 734 "data/maps/BaldesianForestDojo/scripts.pory"
	waitmovement 0
# 735 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 736 "data/maps/BaldesianForestDojo/scripts.pory"
	call BaldesianForestDojo_ResetDisciplePositions
# 737 "data/maps/BaldesianForestDojo/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 738 "data/maps/BaldesianForestDojo/scripts.pory"
	setvar VAR_BALDESIA_FOREST_DOJO_STATE, 4
# 739 "data/maps/BaldesianForestDojo/scripts.pory"
	releaseall
	end


# 743 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakToPlayer:
# 744 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 744 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 745 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 745 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 745 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 745 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 745 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 745 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 746 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_down
	step_end

# 749 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakToPlayerLeft:
# 750 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 750 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 751 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 751 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 751 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 751 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 751 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 751 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 751 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 752 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_down
	step_end

# 755 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakReturns:
# 756 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 756 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 756 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 756 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 756 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 756 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 757 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 757 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 758 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_left
	step_end

# 761 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakReturnsLeft:
# 762 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 762 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 762 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 762 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 762 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 762 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 762 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 763 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 763 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 764 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_left
	step_end

# 767 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_PlayerGoesToGauntlet:
# 768 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 768 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 768 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 769 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 769 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 770 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 770 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 770 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 770 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 771 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 771 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 771 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
	step_end

# 774 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_FollowerBesidePlayer:
# 775 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 776 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_up
	step_end

# 779 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_LaroldinaGoesToSeat:
# 780 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 780 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 780 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 780 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 780 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 780 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 781 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 781 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 782 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 783 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_right
	step_end

# 786 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_CorneliusGoesToStage:
# 787 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 787 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 787 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 787 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 787 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 787 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 788 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
	step_end

# 791 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_CorneliusGoesToSeat:
# 792 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 793 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 793 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 793 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 793 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 793 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 793 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 794 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_left
	step_end

# 797 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakGoesToStage:
# 798 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 799 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 799 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 799 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 799 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_up
# 800 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 800 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 800 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 800 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 800 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 801 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_down
	step_end

# 804 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_AsakReturnsToSeat:
# 805 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 805 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 805 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 805 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 805 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 806 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 806 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 806 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 806 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 807 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_right
# 808 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_left
	step_end

# 811 "data/maps/BaldesianForestDojo/scripts.pory"
BaldesianForestDojo_Movement_PlayerReturns:
# 812 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 812 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 812 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 813 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 813 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 813 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 813 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 814 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 814 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_down
# 815 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 815 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 815 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_left
# 816 "data/maps/BaldesianForestDojo/scripts.pory"
	walk_in_place_up
	step_end

BaldesianForestDojo_EventScript_KimonoOldWoman_Text_0:
# 132 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Kahaha!\n I've never seen BRUNO lose.\p Good, good!\n You've entertained this old lady!$"

BaldesianForestDojo_EventScript_ExplainDojo_Text_0:
# 149 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "OI! WE GOT A CHALLENGER!\n GET READY!\p Yes, Ma'am!$"

BaldesianForestDojo_EventScript_ExplainDojo_Text_1:
# 160 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Kahaha!\n All right! Good luck!$"

BaldesianForestDojo_EventScript_ReadyToChallenge_Text_0:
# 172 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Kahaha! Welcome back!\n Here to try again?$"

BaldesianForestDojo_EventScript_ReadyToChallenge_Text_1:
# 190 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Kahahaha!\n All right! Good luck!$"

BaldesianForestDojo_EventScript_ReadyToChallenge_Text_2:
# 197 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "All right.\n Let me know when you're ready.$"

BaldesianForestDojo_EventScript_ReadyToChallengeBruno_Text_0:
# 207 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Kahaha! Welcome back!\n BRUNO's waiting! Ready?$"

BaldesianForestDojo_EventScript_ReadyToChallengeBruno_Text_1:
# 214 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "OI! BRUNO!\n YOU GOT A CHALLENGER!\l EVERYONE ELSE GET OUT THE WAY!\p Yes, Ma'am!$"

BaldesianForestDojo_EventScript_GiveProtectivePads_Text_0:
# 243 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Kahahaha! Great job!\n You actually beat BRUNO!\p Here's your prize!$"

BaldesianForestDojo_EventScript_GiveProtectivePads_Text_1:
# 252 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "BRUNO wanted to talk to you too.\n Don't keep him waiting too long!$"

BaldesianForestDojo_EventScript_GiveProtectivePads_Text_2:
# 256 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "You don't have any room!\n Come back when you have space!$"

BaldesianForestDojo_EventScript_Bruno_Text_0:
# 272 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'll keep training.\n Our battle inspired me.\p There's also still the pressing issue\n of finding a successor…\p Don't worry. I can tell you're too\n busy to take over.\l You still have a journey to finish.\p If only my younger brother wasn't\n MASTER BENNIS's disciple…$"

BaldesianForestDojo_EventScript_BrunoGoRecieveYourPrize_Text_0:
# 291 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Hm?\n Did you get your prize already?\p If you didn't, go talk to my mother at\n the reception desk.$"

BaldesianForestDojo_EventScript_BrunoAChallenger_Text_0:
# 304 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Oh, are you a new challenger?$"

BaldesianForestDojo_EventScript_BrunoAChallenger_Text_1:
# 307 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I see.\n I look forward to our battle.\p As long as you can prove yourself\n worthy, that is.$"

BaldesianForestDojo_EventScript_BrunoAChallenger_Text_2:
# 313 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Hm. Then why are you here?\n Don't waste my time.$"

BaldesianForestDojo_EventScript_BrunoComeToChallengeMeAgain_Text_0:
# 324 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "So you've returned.\p You're more than welcome to train\n here before challenging me again.$"

BaldesianForestDojo_EventScript_GiveKubfu_Text_0:
# 336 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "That was a great battle.\p As acknowledgement of your strength,\n I want you to accept this KUBFU.$"

BaldesianForestDojo_EventScript_GiveKubfu_Text_1:
# 344 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "{PLAYER} received KUBFU!$"

BaldesianForestDojo_EventScript_GiveKubfu_Text_2:
# 350 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "{PLAYER} received KUBFU!\n KUBFU was sent to the PC.$"

BaldesianForestDojo_EventScript_GiveScroll_Text_0:
# 366 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'll also give you one scroll.\p It contains secret techniques passed\n down in our family for generations.\p Which one would you like?\n Choose wisely.$"

BaldesianForestDojo_EventScript_GiveScroll_Text_1:
# 371 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "SCROLL OF DARKNESS$"

BaldesianForestDojo_EventScript_GiveScroll_Text_2:
# 372 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "SCROLL OF WATERS$"

BaldesianForestDojo_EventScript_GiveScroll_Text_3:
# 386 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "You don't have any room.\n Come back when you do.$"

BaldesianForestDojo_EventScript_Disciple_Text_0:
# 396 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "They're busy training.\n It's probably a bad idea to disturb them.$"

BaldesianForestDojo_EventScript_OldManDojo_Text_0:
# 407 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Those were some great battles,\n {PLAYER}!$"

BaldesianForestDojo_EventScript_OldManDojo_Text_1:
# 411 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'm the referee for the battles\n during dojo challenges.\p Nothing will get past me, so\n don't even think about cheating!$"

BaldesianForestDojo_EventScript_Asak_Text_0:
# 436 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "It's been a while since I've come home.\n I guess brother's still a strong as ever.$"

BaldesianForestDojo_EventScript_Asak_Text_1:
# 440 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Wow… you really beat brother…\p No wonder MASTER BENNIS and LADY\n ASAKURA recognize your strength.$"

BaldesianForestDojo_EventScript_Nerd_Text_0:
# 453 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Huff… Huff…\p Even though I look like this, I\n love training in the martial arts.$"

BaldesianForestDojo_EventScript_AsakTrigger_Text_0:
# 482 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "ASAK: {PLAYER}?\n What are you doing here?\l What about the ritual?$"

BaldesianForestDojo_EventScript_AsakTrigger_Text_1:
# 485 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'll still make it in time.$"

BaldesianForestDojo_EventScript_AsakTrigger_Text_2:
# 485 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Don't worry about it.$"

BaldesianForestDojo_EventScript_AsakTrigger_Text_3:
# 486 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "………\n Uh… okay.\p You must be here to challenge the DOJO,\n then.\p Talk to the old hag over there.\n She'll get everything set up.$"

BaldesianForestDojo_EventScript_AsakTrigger_Text_4:
# 504 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "ASAK: {PLAYER}?\n What are you doing here?\l What about the ritual?\p … … …\n I see… So all that happened.\l Thanks for everything that you did.\p You must be here to challenge the DOJO,\n then.\p Talk to the old hag over there.\n She'll get everything set up.$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_0:
# 546 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'm first!\p You gotta get through me before you\n even think about battling BRUNO!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_1:
# 554 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "OLD MAN: Winner: Challenger!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_2:
# 574 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I'm next!\p You shall fear the power of my\n secret martial arts!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_3:
# 603 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "ASAK: {PLAYER}.\p I have to admit I have newfound\n respect for your strength.\p But I've also traveled HOENN, training\n since our battle in DEWFORD TOWN.\p I'll show you how much stronger\n I've gotten!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_4:
# 615 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "OLD MAN: Winner: {PLAYER}!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_5:
# 636 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "BRUNO: Those were impressive battles.\n Finally, it's my turn.\p Will you be the first one to defeat me?$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_6:
# 651 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "OLD MAN: T-The winner is {PLAYER}!$"

BaldesianForestDojo_EventScript_DojoChallenge_Text_7:
# 657 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "{PLAYER}, was it? After you receive\n your prize, come talk to me.$"

BaldesianForestDojo_EventScript_ChallengeBruno_Text_0:
# 700 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "BRUNO: So you've come to challenge\n me again. Very well.\p Will you be the first one to defeat me?$"

BaldesianForestDojo_Text_ExplainDojo::
# 820 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Oh, a challenger? Kahaha, good!\n We haven't been getting many lately.\p The way the challenge works is simple:\n beat three of our disciples in a row.\l Only then can you challenge BRUNO.\p Easy, right? Kahahaha!\n Let's get everything set up for you!$"

BaldesianForestDojo_Text_BattleGirlDefeat::
# 830 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "Maybe you can think about battling\n him…$"

BaldesianForestDojo_Text_NerdDefeat::
# 835 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "I should've become a KNIGHT instead.$"

BaldesianForestDojo_Text_AsakDefeat::
# 839 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "…… As expected of the one\n acknowledged by MASTER BENNIS.$"

BaldesianForestDojo_Text_BrunoDefeat::
# 844 "data/maps/BaldesianForestDojo/scripts.pory"
	.string "… I was finally defeated……\n Impressive. Truly impressive.$"
