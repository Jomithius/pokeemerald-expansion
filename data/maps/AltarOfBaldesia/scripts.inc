AltarOfBaldesia_MapScripts::
# 10 "data/maps/AltarOfBaldesia/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AltarOfBaldesia_OnResume
# 11 "data/maps/AltarOfBaldesia/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AltarOfBaldesia_OnTransition
	.byte 0


AltarOfBaldesia_OnResume::
# 15 "data/maps/AltarOfBaldesia/scripts.pory"
	call_if_set FLAG_HIDE_OKIDOGI_JIRACHIS_ALTAR, AltarOfBaldesia_RemoveOkidogi
	end


AltarOfBaldesia_OnTransition::
# 20 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_TEMP_E
	end


AltarOfBaldesia_RemoveOkidogi::
# 25 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 10
	return


AltarOfBaldesia_LeftTrigger::
# 30 "data/maps/AltarOfBaldesia/scripts.pory"
	lockall
# 31 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AltarOfBaldesia_Movement_PlayerWalksToMomoLeftTrigger
# 32 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 33 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_AltarRitual
	end


AltarOfBaldesia_RightTrigger::
# 38 "data/maps/AltarOfBaldesia/scripts.pory"
	lockall
# 39 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AltarOfBaldesia_Movement_PlayerWalksToMomoRightTrigger
# 40 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 41 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_AltarRitual
	end


AltarOfBaldesia_MiddleTrigger::
# 46 "data/maps/AltarOfBaldesia/scripts.pory"
	lockall
# 47 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AltarOfBaldesia_Movement_PlayerWalksToMomoMiddleTrigger
# 48 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 49 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_AltarRitual
	end


AltarOfBaldesia_EventScript_AltarRitual::
# 54 "data/maps/AltarOfBaldesia/scripts.pory"
	lockall
# 55 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 56 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 57 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_0, MSGBOX_AUTOCLOSE
# 59 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 60 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 61 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 62 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 63 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 64 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_1, MSGBOX_DEFAULT
# 65 "data/maps/AltarOfBaldesia/scripts.pory"
	playfanfare MUS_RG_POKE_FLUTE
# 66 "data/maps/AltarOfBaldesia/scripts.pory"
	waitfanfare
# 67 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_2, MSGBOX_AUTOCLOSE
# 68 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 69 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 70 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 71 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 72 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 73 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 74 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 75 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 76 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 77 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 78 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 79 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 80 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 81 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 82 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 83 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, FALSE
# 84 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 85 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 86 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 87 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 88 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_3, MSGBOX_AUTOCLOSE
# 91 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 92 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 93 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 94 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 95 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 96 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 97 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 98 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 99 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 100 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 24
# 101 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 102 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 103 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 3
# 104 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 4
# 105 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, Common_Movement_WalkUp6
# 106 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 107 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkUp6
# 108 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 109 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_KIMONO_DANCE, TRUE
# 110 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_MomoAndLohan, MSGBOX_AUTOCLOSE
# 111 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 112 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_MomoICantBeatThemAlone
	return


AltarOfBaldesia_EventScript_MomoICantBeatThemAlone::
# 116 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 117 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 118 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 119 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 120 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_MomoICantBeatThemAlone_Text_0, MSGBOX_AUTOCLOSE
# 121 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 122 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_GetReadyForBattle
	return


AltarOfBaldesia_EventScript_GetReadyForBattle::
# 126 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 127 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 128 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 129 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 130 "data/maps/AltarOfBaldesia/scripts.pory"
	special SavePlayerParty
# 131 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
# 132 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 133 "data/maps/AltarOfBaldesia/scripts.pory"
	special ChooseHalfPartyForBattle
# 134 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 135 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_ne VAR_RESULT, 0, AltarOfBaldesia_EventScript_DoLohanMultiBattle
# 136 "data/maps/AltarOfBaldesia/scripts.pory"
	special LoadPlayerParty
# 137 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_MomoICantBeatThemAlone
	return


AltarOfBaldesia_EventScript_DoLohanMultiBattle::
# 141 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, TRUE
# 142 "data/maps/AltarOfBaldesia/scripts.pory"
	multi_2_vs_2 TRAINER_LOHAN, AltarOfBaldesia_Text_LohanIntro, TRAINER_LINDSAY, AltarOfBaldesia_Text_LindsayIntro, PARTNER_MOMO
# 143 "data/maps/AltarOfBaldesia/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 144 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AltarOfBaldesia_EventScript_DoLohanMultiBattle_1
# 148 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 149 "data/maps/AltarOfBaldesia/scripts.pory"
	special SetCB2WhiteOut
# 150 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
	return

AltarOfBaldesia_EventScript_DoLohanMultiBattle_1:
# 145 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_PecharuntAmbush
	return


AltarOfBaldesia_EventScript_PecharuntAmbush::
# 155 "data/maps/AltarOfBaldesia/scripts.pory"
	lockall
# 156 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
# 157 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 158 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 159 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 3
# 160 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 4
# 161 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 162 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_0, MSGBOX_AUTOCLOSE
# 163 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 164 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 165 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 166 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 167 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 168 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_1, MSGBOX_AUTOCLOSE
# 170 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 171 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 172 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 173 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 174 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 175 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, FALSE
# 176 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, AltarOfBaldesia_Movement_Fezandipiti
# 177 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, AltarOfBaldesia_Movement_Munkidori
# 178 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 179 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 10, AltarOfBaldesia_Movement_Okidogi
# 180 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 181 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 182 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 183 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 7, AltarOfBaldesia_Movement_Pecharunt
# 184 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 185 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 186 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 7
# 187 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_2, MSGBOX_AUTOCLOSE
# 190 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 191 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 192 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 193 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 194 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 195 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 196 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 5
# 197 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 198 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 8
# 199 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 6
# 200 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 201 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, AltarOfBaldesia_Movement_FezStepsBack
# 202 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 8
# 203 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_3, MSGBOX_AUTOCLOSE
# 205 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 206 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, AltarOfBaldesia_Movement_AriaEnters
# 207 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 208 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_4, MSGBOX_AUTOCLOSE
# 209 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 210 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 211 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkFasterRight
# 212 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, AltarOfBaldesia_Movement_MunkidoriPushedBack
# 213 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 214 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 215 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 216 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 217 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_Bennis, MSGBOX_AUTOCLOSE
# 218 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 219 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 220 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 221 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BALL_OPEN
# 222 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 223 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 13
# 224 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 225 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 226 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 227 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 228 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 229 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 230 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 7
# 231 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 10, Common_Movement_WalkLeft
# 232 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 233 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, Common_Movement_WalkLeft
# 234 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 235 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_PECHARUNT, CRY_MODE_ENCOUNTER
# 236 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 237 "data/maps/AltarOfBaldesia/scripts.pory"
	setwildbattle SPECIES_PECHARUNT, 100
# 238 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_NO_BAG_USE
# 239 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_OKIDOGI_JIRACHIS_ALTAR
# 240 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_SMART_WILD_AI
# 241 "data/maps/AltarOfBaldesia/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 242 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 243 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_NO_BAG_USE
# 244 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_SMART_WILD_AI
# 245 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_PECHARUNT, CRY_MODE_FAINT
# 246 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 247 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 248 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 249 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 7
# 250 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 251 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 252 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_5, MSGBOX_AUTOCLOSE
# 253 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 254 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 255 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 256 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 257 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 258 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 259 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 260 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 261 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 262 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 8
# 263 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 9
# 264 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
# 265 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 266 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 267 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 268 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 13, Common_Movement_EnterPokeball
# 269 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 270 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 13
# 271 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 272 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 273 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 274 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 275 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 276 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 277 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 278 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 279 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 280 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_ExplainPecharunt, MSGBOX_AUTOCLOSE
# 281 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 282 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 283 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 284 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_6, MSGBOX_AUTOCLOSE
# 286 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 287 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 288 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 289 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 290 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 291 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 292 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 293 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 294 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 295 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 296 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 297 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 298 "data/maps/AltarOfBaldesia/scripts.pory"
	fadenewbgm MUS_SEALED_CHAMBER
# 299 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 300 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 301 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_7, MSGBOX_AUTOCLOSE
# 303 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 304 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 305 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 306 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 307 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 10
# 308 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 309 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 310 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 311 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_8, MSGBOX_AUTOCLOSE
# 314 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 315 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 316 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 317 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_9, MSGBOX_AUTOCLOSE
# 318 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 319 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, AltarOfBaldesia_Movement_AriaNextToMomo
# 320 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 321 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 322 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 323 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 324 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_10, MSGBOX_AUTOCLOSE
# 328 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 329 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 330 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 331 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 332 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 333 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 334 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_11, MSGBOX_AUTOCLOSE
# 336 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 337 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 338 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 339 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 340 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 341 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 342 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_12, MSGBOX_AUTOCLOSE
# 347 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 348 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 349 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 350 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 351 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 352 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 353 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_13, MSGBOX_AUTOCLOSE
# 354 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 355 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_RESULT, 1
# 356 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_ORB
# 357 "data/maps/AltarOfBaldesia/scripts.pory"
	special DoOrbEffect
# 358 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 150
# 359 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 360 "data/maps/AltarOfBaldesia/scripts.pory"
	special FadeOutOrbEffect
# 361 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 362 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 150
# 363 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_14, MSGBOX_AUTOCLOSE
# 364 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 365 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BIKE_HOP
# 366 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 367 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 1
# 368 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 369 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 90
# 370 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 371 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_MORNING_SUN
# 372 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 373 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 374 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 375 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 376 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 377 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_15, MSGBOX_AUTOCLOSE
# 378 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 379 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 380 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 381 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_16, MSGBOX_AUTOCLOSE
# 382 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 383 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BLIZZARD
# 384 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 60
# 385 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BLIZZARD2
# 386 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 387 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_17, MSGBOX_AUTOCLOSE
# 391 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 392 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 393 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 394 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_18, MSGBOX_AUTOCLOSE
# 396 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 397 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, AltarOfBaldesia_Movement_MomoHandsItem
# 398 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 399 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 400 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 401 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 402 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 403 "data/maps/AltarOfBaldesia/scripts.pory"
	giveitem ITEM_POKE_FLUTE
# 404 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 405 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_19, MSGBOX_AUTOCLOSE
# 407 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 408 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_PETAL_DANCE
# 409 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 410 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 2
# 411 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 412 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 413 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 414 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 415 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_20, MSGBOX_AUTOCLOSE
# 419 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 420 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 421 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_LOHAN_JIRACHIS_ALTAR
# 422 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_PECHARUNT_JIRACHIS_ALTAR
# 423 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_LOYAL_THREE_JIRACHIS_ALTAR
# 424 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_FEZANDIPITI_EASTERN_RUINS
# 425 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_MUNKIDORI_EASTERN_RUINS
# 426 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_PECHARUNT_EASTERN_RUINS
# 427 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 7
# 428 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 429 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 430 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 431 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 432 "data/maps/AltarOfBaldesia/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
	end


# 472 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoLeftTrigger:
# 473 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 473 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 473 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 473 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 473 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 473 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 473 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 473 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 473 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 473 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 473 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 473 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 474 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 477 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoMiddleTrigger:
# 478 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 478 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 478 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 478 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 478 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 478 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 478 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 478 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 478 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 478 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 479 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 480 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 480 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 481 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 484 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoRightTrigger:
# 485 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 485 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 485 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 485 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 485 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 485 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 485 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 485 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 485 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 485 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 486 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 486 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 487 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 487 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 488 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 491 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_JirachiLevitate:
# 492 "data/maps/AltarOfBaldesia/scripts.pory"
	levitate
# 493 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 494 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 495 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 496 "data/maps/AltarOfBaldesia/scripts.pory"
	destroy_extra_task
	step_end

# 499 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_JirachiEndLevitate:
# 500 "data/maps/AltarOfBaldesia/scripts.pory"
	levitate
# 501 "data/maps/AltarOfBaldesia/scripts.pory"
	stop_levitate
	step_end

# 504 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Pecharunt:
# 505 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 505 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 505 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 505 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 505 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 505 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 505 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 506 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 509 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Okidogi:
# 510 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 510 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 510 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 510 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 510 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 510 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 510 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 511 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
	step_end

# 514 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Munkidori:
# 515 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 515 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 515 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 515 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 515 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 515 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 516 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 517 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
	step_end

# 520 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Fezandipiti:
# 521 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 521 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 521 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 521 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 521 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 521 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 521 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 521 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 521 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 522 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_up
	step_end

# 525 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_AriaEnters:
# 526 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 526 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 526 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 526 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 526 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 526 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 526 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 527 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 530 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MunkidoriPushedBack:
# 531 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 532 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_right
# 533 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 536 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MomoHandsItem:
# 537 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_down
# 538 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_left
	step_end

# 541 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_FezStepsBack:
# 542 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 543 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 544 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 547 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_AriaNextToMomo:
# 548 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 549 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 549 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 550 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_left
	step_end

AltarOfBaldesia_EventScript_AltarRitual_Text_0:
# 57 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …… You made it.\n There's no time. I'll start right away.$"

AltarOfBaldesia_EventScript_AltarRitual_Text_1:
# 64 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO begins to play the POKé FLUTE…$"

AltarOfBaldesia_EventScript_AltarRitual_Text_2:
# 67 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI is awakening!$"

AltarOfBaldesia_EventScript_AltarRitual_Text_3:
# 88 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … Now I just need to make the\n wish and we're done.\p We always wish for-$"

AltarOfBaldesia_EventScript_MomoICantBeatThemAlone_Text_0:
# 120 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … I can't beat them alone.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_0:
# 162 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … They ran.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_1:
# 168 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "…… They're being controlled.\n Something's been weird ever since-$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_2:
# 187 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …!\p ???: Baldy baldy, over there!\n What's it like to have no hair?$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_3:
# 203 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "???: Hold on, my shiny crystal ball!\n Your KNIGHT is here!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_4:
# 208 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "ARIA: AAAARGGHH!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_5:
# 252 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "The weakened PECHARUNT fled!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_6:
# 284 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "Their hideout should be close by.\n We should have time to hunt them down.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_7:
# 301 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: Oh, yeah. My Lady.\n You should finish the ritual.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_8:
# 311 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: JIRACHI… …\n Please bless our village with peace\l and prosperity for many years to come.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_9:
# 317 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI stares at MOMO…$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_10:
# 324 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "ARIA: It looks like it still wants to\n grant another wish…\p Maybe it's grateful to us for\n protecting it?$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_11:
# 334 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: My Lady. If you have\n a wish of your own, now's the time.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_12:
# 342 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … … … …\n … … … …\l … … …\l I…\l ……… want hair.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_13:
# 353 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI begins gathering power!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_14:
# 363 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… … … …$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_15:
# 377 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "…But nothing happened!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_16:
# 381 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI went back to sleep!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_17:
# 387 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: … It's okay.\n Bald is beautiful too, my Lady.\p ARIA: W-Wow! Not even JIRACHI's power\n can give you hair…!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_18:
# 394 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "But… Maybe we can get you a wig?\p MOMO: ………………$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_19:
# 405 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …… I don't want that anymore.\n I'm leaving.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_20:
# 415 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: … Hm.\n Just give her some time.\p We should head back to the MAIN HOUSE.\n The Chief and Madam should be waiting.$"

AltarOfBaldesia_Text_MomoAndLohan::
# 436 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: B-Brother…?!\n ……\l Why are you here?\p Only the Maiden and her guards are\n allowed to be at the altar during\l the ritual.\p LOHAN: …………\p MOMO: … I knew it.\n This is bad.$"

AltarOfBaldesia_Text_LohanIntro::
# 448 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… Just… give… us what… we want…$"

AltarOfBaldesia_Text_LindsayIntro::
# 452 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "…… Don't… try to stop us…$"

AltarOfBaldesia_Text_Bennis::
# 456 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: Young Lady.\n The Chief and Madam are brainwashed.\p I can explain after we take care of\n these POKéMON.$"

AltarOfBaldesia_Text_ExplainPecharunt::
# 463 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: So they fled…\p I thought it was only a myth, but\n that POKéMON, PECHARUNT, was the one\l who brainwashed the Chief and Madam.\p {PLAYER} weakened it, so it probably\n can't keep controlling them.$"
