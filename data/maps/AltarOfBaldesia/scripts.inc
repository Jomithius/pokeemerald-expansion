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
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_1, MSGBOX_AUTOCLOSE
# 65 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 66 "data/maps/AltarOfBaldesia/scripts.pory"
	fadeoutbgm 2
# 67 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 68 "data/maps/AltarOfBaldesia/scripts.pory"
	playfanfare MUS_RG_POKE_FLUTE
# 69 "data/maps/AltarOfBaldesia/scripts.pory"
	waitfanfare
# 70 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 60
# 71 "data/maps/AltarOfBaldesia/scripts.pory"
	dofieldeffectsparkle 17, 18, 0
# 72 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 60
# 73 "data/maps/AltarOfBaldesia/scripts.pory"
	dofieldeffectsparkle 17, 18, 0
# 74 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 90
# 75 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 76 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 77 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 78 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 79 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_2, MSGBOX_AUTOCLOSE
# 80 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 81 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, FALSE
# 82 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 83 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 1, AltarOfBaldesia_Movement_JirachiLevitate
# 84 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 85 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 86 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 87 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 88 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 89 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_3
# 92 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 93 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 94 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 95 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, TRUE
# 96 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 97 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 98 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 99 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 100 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 101 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 24
# 102 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 103 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 104 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 3
# 105 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 4
# 106 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, Common_Movement_WalkUp6
# 107 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 108 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkUp6
# 109 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 110 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_KIMONO_DANCE, FALSE
# 111 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_MomoAndLohan, MSGBOX_AUTOCLOSE
# 112 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 113 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_MomoICantBeatThemAlone
	return


AltarOfBaldesia_EventScript_MomoICantBeatThemAlone::
# 117 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 118 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 119 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 120 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 121 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_MomoICantBeatThemAlone_Text_0, MSGBOX_AUTOCLOSE
# 122 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 123 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_GetReadyForBattle
	return


AltarOfBaldesia_EventScript_GetReadyForBattle::
# 127 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 128 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 129 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 130 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 131 "data/maps/AltarOfBaldesia/scripts.pory"
	special SavePlayerParty
# 132 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
# 133 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 134 "data/maps/AltarOfBaldesia/scripts.pory"
	special ChooseHalfPartyForBattle
# 135 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 136 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_ne VAR_RESULT, 0, AltarOfBaldesia_EventScript_DoLohanMultiBattle
# 137 "data/maps/AltarOfBaldesia/scripts.pory"
	special LoadPlayerParty
# 138 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_MomoICantBeatThemAlone
	return


AltarOfBaldesia_EventScript_DoLohanMultiBattle::
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
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_2, MSGBOX_DEFAULT
# 191 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 192 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 193 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 194 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 195 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 196 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_PETAL_DANCE
# 197 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 198 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 5
# 199 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 200 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_3, MSGBOX_AUTOCLOSE
# 202 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 203 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, AltarOfBaldesia_Movement_AriaEnters
# 204 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 205 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_4, MSGBOX_AUTOCLOSE
# 206 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 207 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkFasterRight
# 208 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, AltarOfBaldesia_Movement_MunkidoriPushedBack
# 209 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 210 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 211 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 212 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_Bennis, MSGBOX_AUTOCLOSE
# 213 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 214 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 215 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 216 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 217 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 218 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 219 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_PECHARUNT, CRY_MODE_ENCOUNTER
# 220 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 221 "data/maps/AltarOfBaldesia/scripts.pory"
	setwildbattle SPECIES_PECHARUNT, 100
# 222 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_NO_BAG_USE
# 223 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_OKIDOGI_JIRACHIS_ALTAR
# 224 "data/maps/AltarOfBaldesia/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 225 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 226 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_NO_BAG_USE
# 227 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_PECHARUNT, CRY_MODE_FAINT
# 228 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 229 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 230 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 231 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 7
# 232 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 233 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 234 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_5, MSGBOX_AUTOCLOSE
# 235 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 236 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 237 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 238 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 239 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 240 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 241 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 242 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 243 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 244 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 8
# 245 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 9
# 246 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 247 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 248 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 249 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 250 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 251 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 252 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 253 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 254 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 255 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 256 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 257 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_ExplainPecharunt, MSGBOX_AUTOCLOSE
# 258 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 259 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 260 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 261 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_6, MSGBOX_AUTOCLOSE
# 263 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 264 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 265 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 266 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 267 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 268 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 269 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 270 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 271 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 272 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 273 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 274 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 275 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_7, MSGBOX_AUTOCLOSE
# 277 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 278 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 279 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 280 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 281 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 10
# 282 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 283 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 284 "data/maps/AltarOfBaldesia/scripts.pory"
	fadenewbgm MUS_SEALED_CHAMBER
# 285 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_8, MSGBOX_AUTOCLOSE
# 288 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 289 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 290 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 291 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_9, MSGBOX_AUTOCLOSE
# 292 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 293 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 294 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 295 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_10, MSGBOX_AUTOCLOSE
# 298 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 299 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 300 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 301 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_11, MSGBOX_AUTOCLOSE
# 306 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 307 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 308 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 309 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_12, MSGBOX_AUTOCLOSE
# 310 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 311 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 312 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_RESULT, 0
# 313 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_ORB
# 314 "data/maps/AltarOfBaldesia/scripts.pory"
	special DoOrbEffect
# 315 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 1, AltarOfBaldesia_Movement_JirachiEndLevitate
# 316 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 317 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 150
# 318 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 319 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 320 "data/maps/AltarOfBaldesia/scripts.pory"
	special FadeOutOrbEffect
# 321 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 322 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_MORNING_SUN
# 323 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 324 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 325 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 326 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_13, MSGBOX_AUTOCLOSE
# 327 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 328 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 329 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 330 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_SWAGGER2
# 331 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 332 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_SACRED_FIRE2
# 333 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 334 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_14, MSGBOX_AUTOCLOSE
# 339 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 340 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, AltarOfBaldesia_Movement_MomoHandsItem
# 341 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 342 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 343 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 344 "data/maps/AltarOfBaldesia/scripts.pory"
	giveitem ITEM_POKE_FLUTE
# 345 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 346 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_15, MSGBOX_AUTOCLOSE
# 348 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 349 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_PETAL_DANCE
# 350 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 351 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 2
# 352 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 353 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 354 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 355 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 356 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 357 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 358 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_16, MSGBOX_AUTOCLOSE
# 362 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 363 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 7
# 364 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 365 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 366 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 367 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 368 "data/maps/AltarOfBaldesia/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
	end


# 408 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoLeftTrigger:
# 409 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 409 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 409 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 409 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 409 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 409 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 409 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 409 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 409 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 409 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 409 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 409 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 410 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 413 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoMiddleTrigger:
# 414 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 414 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 414 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 414 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 414 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 414 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 414 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 414 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 414 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 414 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 415 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 416 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 416 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 417 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 420 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoRightTrigger:
# 421 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 421 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 421 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 421 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 421 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 421 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 421 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 421 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 421 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 421 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 422 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 422 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 423 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 423 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 424 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 427 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_JirachiLevitate:
# 428 "data/maps/AltarOfBaldesia/scripts.pory"
	levitate
# 429 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 430 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 431 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 432 "data/maps/AltarOfBaldesia/scripts.pory"
	destroy_extra_task
	step_end

# 435 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_JirachiEndLevitate:
# 436 "data/maps/AltarOfBaldesia/scripts.pory"
	levitate
# 437 "data/maps/AltarOfBaldesia/scripts.pory"
	stop_levitate
	step_end

# 440 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Pecharunt:
# 441 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 441 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 441 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 441 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 441 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 441 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 441 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 442 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
	step_end

# 445 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Okidogi:
# 446 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 446 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 446 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 446 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 446 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 446 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 446 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 447 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 447 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
	step_end

# 450 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Munkidori:
# 451 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 451 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 451 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 451 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 451 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 451 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 452 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 453 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
	step_end

# 456 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Fezandipiti:
# 457 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 457 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 457 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 457 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 457 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 457 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 457 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 457 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 457 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 458 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_up
	step_end

# 461 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_AriaEnters:
# 462 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 462 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 462 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 462 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 462 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 462 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 462 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 463 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 466 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MunkidoriPushedBack:
# 467 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 468 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_right
# 468 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_right
# 469 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 472 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MomoHandsItem:
# 473 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_down
# 474 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_left
	step_end

AltarOfBaldesia_EventScript_AltarRitual_Text_0:
# 57 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …… You made it.\n There's no time. I'll start right away.$"

AltarOfBaldesia_EventScript_AltarRitual_Text_1:
# 64 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO begins to play the POKé FLUTE…$"

AltarOfBaldesia_EventScript_AltarRitual_Text_2:
# 79 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI is awakening!$"

AltarOfBaldesia_EventScript_AltarRitual_Text_3:
# 89 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … Now I just need to make the\n wish and we're done.\p We always wish for-$"

AltarOfBaldesia_EventScript_MomoICantBeatThemAlone_Text_0:
# 121 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … I can't beat them alone.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_0:
# 162 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … They ran.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_1:
# 168 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "…… They're being controlled.\n Something's been weird ever since-$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_2:
# 187 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …!\p A voice calls out:\p Baldy baldy, over there!\n What's it like to have no hair?$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_3:
# 200 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "Hold on, my shiny crystal ball!\n Your KNIGHT is here!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_4:
# 205 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "ARIA: AAAARGGHH!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_5:
# 234 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "The weakened PECHARUNT fled!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_6:
# 261 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "Their hideout should be close by.\n We should have time to hunt them down.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_7:
# 275 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: Hm. My Lady.\n You should finish the ritual.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_8:
# 285 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: JIRACHI… …\n Please bless our village with peace\l and prosperity.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_9:
# 291 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI stares at MOMO…$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_10:
# 295 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "ARIA: It looks like it still wants to\n grant another wish.\p Maybe it's grateful that we protected it?$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_11:
# 301 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO:…\n …\l …\l I…\l ……… want hair.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_12:
# 309 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI begins gathering power!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_13:
# 326 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "…Nothing happened!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_14:
# 334 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: … It's okay.\n Bald is beautiful too, my Lady.\p ARIA: …… I'm sorry.\n Maybe we can get you a wig?\p MOMO: ………………$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_15:
# 346 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …… I don't want that anymore.\n I'm leaving.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_16:
# 358 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: … Hm.\n Just give her some time.\p We should head back to the MAIN HOUSE.\n The Chief and Madam should be waiting.$"

AltarOfBaldesia_Text_MomoAndLohan::
# 372 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: B-Brother…?!\n ……\l Why are you here?\p Only the Maiden and her guards are\n allowed to be at the altar during\l the ritual.\p LOHAN: …………\p MOMO: … I knew it.\n This is bad.$"

AltarOfBaldesia_Text_LohanIntro::
# 384 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… Just… give… us what… we want…$"

AltarOfBaldesia_Text_LindsayIntro::
# 388 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "…… Don't… try to stop us…$"

AltarOfBaldesia_Text_Bennis::
# 392 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: Young Lady.\n The Chief and Madam are brainwashed.\p I can explain after we take care of\n these POKéMON.$"

AltarOfBaldesia_Text_ExplainPecharunt::
# 399 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: So they fled…\p I thought it was only a myth, but\n that POKéMON, PECHARUNT, was the\l one who brainwashed the Chief and Madam.\p {PLAYER} weakened it, so the brainwashing\n has probably worn off.$"
