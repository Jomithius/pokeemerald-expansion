# 1 "data/maps/Route104/scripts.pory"
@ NOTE: Route 104's sail to Dewford script references local IDs from Dewford's map.
# 2 "data/maps/Route104/scripts.pory"
@  These are labeled in DewfordTown/scripts.inc
# 3 "data/maps/Route104/scripts.pory"
.set LOCALID_RIVAL, 33
# 4 "data/maps/Route104/scripts.pory"

# 5 "data/maps/Route104/scripts.pory"
Route104_MapScripts::
# 6 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route104_OnFrame
# 7 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_OnTransition
# 8 "data/maps/Route104/scripts.pory"
	.byte 0
# 9 "data/maps/Route104/scripts.pory"

# 10 "data/maps/Route104/scripts.pory"
Route104_OnFrame:
# 11 "data/maps/Route104/scripts.pory"
	map_script_2 VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_StartSailToDewford
# 12 "data/maps/Route104/scripts.pory"
	.2byte 0
# 13 "data/maps/Route104/scripts.pory"

# 14 "data/maps/Route104/scripts.pory"
Route104_EventScript_StartSailToDewford::
# 15 "data/maps/Route104/scripts.pory"
	lockall
# 16 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_SailToDewford
# 17 "data/maps/Route104/scripts.pory"
	end
# 18 "data/maps/Route104/scripts.pory"

# 19 "data/maps/Route104/scripts.pory"
Route104_OnTransition:
# 20 "data/maps/Route104/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 21 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_TrySetRivalPos
# 22 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_ShowOrHideWhiteHerbFlorist
# 23 "data/maps/Route104/scripts.pory"
	end
# 24 "data/maps/Route104/scripts.pory"

# 25 "data/maps/Route104/scripts.pory"
Route104_EventScript_ShowOrHideWhiteHerbFlorist::
# 26 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_EventScript_HideWhiteHerbFlorist
# 27 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_EventScript_HideWhiteHerbFlorist
# 28 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 29 "data/maps/Route104/scripts.pory"
	return
# 30 "data/maps/Route104/scripts.pory"

# 31 "data/maps/Route104/scripts.pory"
Route104_EventScript_HideWhiteHerbFlorist::
# 32 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 33 "data/maps/Route104/scripts.pory"
	return
# 34 "data/maps/Route104/scripts.pory"

# 35 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrySetRivalPos::
# 36 "data/maps/Route104/scripts.pory"
	goto_if_ge VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_DontSetRivalPos
# 37 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, Route104_EventScript_DontSetRivalPos
# 38 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_DontSetRivalPos
# 39 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 17, 52
# 40 "data/maps/Route104/scripts.pory"
	return
# 41 "data/maps/Route104/scripts.pory"

# 42 "data/maps/Route104/scripts.pory"
Route104_EventScript_DontSetRivalPos::
# 43 "data/maps/Route104/scripts.pory"
	return
# 44 "data/maps/Route104/scripts.pory"

# 45 "data/maps/Route104/scripts.pory"
Route104_EventScript_Rival::
# 46 "data/maps/Route104/scripts.pory"
	lockall
# 47 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 1
# 48 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 49 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 51 "data/maps/Route104/scripts.pory"

# 52 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalTrigger::
# 53 "data/maps/Route104/scripts.pory"
	lockall
# 54 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 55 "data/maps/Route104/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 56 "data/maps/Route104/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 57 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 58 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route104/scripts.pory"
	delay 10
# 60 "data/maps/Route104/scripts.pory"
	addobject LOCALID_RIVAL
# 61 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_RIVAL
# 62 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBackUp
# 63 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalExitBrineysCottage
# 65 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 66 "data/maps/Route104/scripts.pory"
	delay 20
# 67 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 0
# 68 "data/maps/Route104/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 69 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 70 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 71 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 73 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 75 "data/maps/Route104/scripts.pory"

# 76 "data/maps/Route104/scripts.pory"
@ Unused, shares script with Rustboro encounter instead
# 77 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayRivalMusic::
# 78 "data/maps/Route104/scripts.pory"
	checkplayergender
# 79 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_PlayMayMusic
# 80 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_PlayBrendanMusic
# 81 "data/maps/Route104/scripts.pory"
	return
# 82 "data/maps/Route104/scripts.pory"

# 83 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayMayMusic::
# 84 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 85 "data/maps/Route104/scripts.pory"
	return
# 86 "data/maps/Route104/scripts.pory"

# 87 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayBrendanMusic::
# 88 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 89 "data/maps/Route104/scripts.pory"
	return
# 90 "data/maps/Route104/scripts.pory"

# 91 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalEncounter::
# 92 "data/maps/Route104/scripts.pory"
	checkplayergender
# 93 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_MayEncounter
# 94 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_BrendanEncounter
# 95 "data/maps/Route104/scripts.pory"
	end
# 96 "data/maps/Route104/scripts.pory"

# 97 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayEncounter::
# 98 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_MayDefeated
# 99 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_MayAskToBattle
# 100 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 101 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayWeShouldRegister, MSGBOX_DEFAULT
# 102 "data/maps/Route104/scripts.pory"
	closemessage
# 103 "data/maps/Route104/scripts.pory"
	delay 30
# 104 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 105 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredMay, MSGBOX_DEFAULT
# 106 "data/maps/Route104/scripts.pory"
	waitfanfare
# 107 "data/maps/Route104/scripts.pory"
	closemessage
# 108 "data/maps/Route104/scripts.pory"
	delay 30
# 109 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 110 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerFaceRival
# 111 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 112 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHowsYourPokedex, MSGBOX_DEFAULT
# 113 "data/maps/Route104/scripts.pory"
	closemessage
# 114 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 115 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalApproachPlayer
# 116 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 117 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 118 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayMinesDecentLetsBattle, MSGBOX_YESNO
# 119 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 120 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 121 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 122 "data/maps/Route104/scripts.pory"
	releaseall
# 123 "data/maps/Route104/scripts.pory"
	end
# 124 "data/maps/Route104/scripts.pory"

# 125 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalWalkSlowLeft:
# 126 "data/maps/Route104/scripts.pory"
	walk_slow_left
# 127 "data/maps/Route104/scripts.pory"
	step_end
# 128 "data/maps/Route104/scripts.pory"

# 129 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalApproachPlayer:
# 130 "data/maps/Route104/scripts.pory"
	walk_down
# 131 "data/maps/Route104/scripts.pory"
	face_right
# 132 "data/maps/Route104/scripts.pory"
	step_end
# 133 "data/maps/Route104/scripts.pory"

# 134 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerFaceRival:
# 135 "data/maps/Route104/scripts.pory"
	delay_4
# 136 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 137 "data/maps/Route104/scripts.pory"
	step_end
# 138 "data/maps/Route104/scripts.pory"

# 139 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayAskToBattle::
# 140 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayLetsBattle, MSGBOX_YESNO
# 141 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 142 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 143 "data/maps/Route104/scripts.pory"
	releaseall
# 144 "data/maps/Route104/scripts.pory"
	end
# 145 "data/maps/Route104/scripts.pory"

# 146 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMay::
# 147 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayIntro, MSGBOX_DEFAULT
# 148 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 149 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleMayTreecko
# 150 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleMayTorchic
# 151 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleMayMudkip
# 152 "data/maps/Route104/scripts.pory"
	end
# 153 "data/maps/Route104/scripts.pory"

# 154 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayDefeated::
# 155 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayPostBattle, MSGBOX_DEFAULT
# 156 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 157 "data/maps/Route104/scripts.pory"
	releaseall
# 158 "data/maps/Route104/scripts.pory"
	end
# 159 "data/maps/Route104/scripts.pory"

# 160 "data/maps/Route104/scripts.pory"
Route104_EventScript_RestoreMusic::
# 161 "data/maps/Route104/scripts.pory"
	savebgm MUS_DUMMY
# 162 "data/maps/Route104/scripts.pory"
	fadedefaultbgm
# 163 "data/maps/Route104/scripts.pory"
	return
# 164 "data/maps/Route104/scripts.pory"

# 165 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTreecko::
# 166 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, Route104_Text_MayDefeat
# 167 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 168 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 169 "data/maps/Route104/scripts.pory"
	end
# 170 "data/maps/Route104/scripts.pory"

# 171 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTorchic::
# 172 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, Route104_Text_MayDefeat
# 173 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 174 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 175 "data/maps/Route104/scripts.pory"
	end
# 176 "data/maps/Route104/scripts.pory"

# 177 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayMudkip::
# 178 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, Route104_Text_MayDefeat
# 179 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 180 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 181 "data/maps/Route104/scripts.pory"
	end
# 182 "data/maps/Route104/scripts.pory"

# 183 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanEncounter::
# 184 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_BrendanDefeated
# 185 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_BrendanAskToBattle
# 186 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 187 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanWeShouldRegister, MSGBOX_DEFAULT
# 188 "data/maps/Route104/scripts.pory"
	closemessage
# 189 "data/maps/Route104/scripts.pory"
	delay 30
# 190 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 191 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 192 "data/maps/Route104/scripts.pory"
	waitfanfare
# 193 "data/maps/Route104/scripts.pory"
	closemessage
# 194 "data/maps/Route104/scripts.pory"
	delay 30
# 195 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 196 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerFaceRival
# 197 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 198 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanHowsYourPokedex, MSGBOX_DEFAULT
# 199 "data/maps/Route104/scripts.pory"
	closemessage
# 200 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 201 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalApproachPlayer
# 202 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 203 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 204 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanDoingGreatLetsBattle, MSGBOX_YESNO
# 205 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 206 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 207 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 208 "data/maps/Route104/scripts.pory"
	releaseall
# 209 "data/maps/Route104/scripts.pory"
	end
# 210 "data/maps/Route104/scripts.pory"

# 211 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanAskToBattle::
# 212 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanLetsBattle, MSGBOX_YESNO
# 213 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 214 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 215 "data/maps/Route104/scripts.pory"
	releaseall
# 216 "data/maps/Route104/scripts.pory"
	end
# 217 "data/maps/Route104/scripts.pory"

# 218 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendan::
# 219 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanIntro, MSGBOX_DEFAULT
# 220 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 221 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleBrendanTreecko
# 222 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleBrendanTorchic
# 223 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleBrendanMudkip
# 224 "data/maps/Route104/scripts.pory"
	end
# 225 "data/maps/Route104/scripts.pory"

# 226 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanDefeated::
# 227 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanPostBattle, MSGBOX_DEFAULT
# 228 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 229 "data/maps/Route104/scripts.pory"
	releaseall
# 230 "data/maps/Route104/scripts.pory"
	end
# 231 "data/maps/Route104/scripts.pory"

# 232 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTreecko::
# 233 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, Route104_Text_BrendanDefeat
# 234 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 235 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 236 "data/maps/Route104/scripts.pory"
	end
# 237 "data/maps/Route104/scripts.pory"

# 238 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTorchic::
# 239 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, Route104_Text_BrendanDefeat
# 240 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 241 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 242 "data/maps/Route104/scripts.pory"
	end
# 243 "data/maps/Route104/scripts.pory"

# 244 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanMudkip::
# 245 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, Route104_Text_BrendanDefeat
# 246 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 247 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 248 "data/maps/Route104/scripts.pory"
	end
# 249 "data/maps/Route104/scripts.pory"

# 250 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBackUp:
# 251 "data/maps/Route104/scripts.pory"
	lock_facing_direction
# 252 "data/maps/Route104/scripts.pory"
	walk_down
# 253 "data/maps/Route104/scripts.pory"
	unlock_facing_direction
# 254 "data/maps/Route104/scripts.pory"
	step_end
# 255 "data/maps/Route104/scripts.pory"

# 256 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalExitBrineysCottage:
# 257 "data/maps/Route104/scripts.pory"
	walk_down
# 258 "data/maps/Route104/scripts.pory"
	step_end
# 259 "data/maps/Route104/scripts.pory"

# 260 "data/maps/Route104/scripts.pory"
Route104_EventScript_ExpertF::
# 261 "data/maps/Route104/scripts.pory"
	lock
# 262 "data/maps/Route104/scripts.pory"
	faceplayer
# 263 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_EventScript_ReceivedBerry
# 264 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
# 265 "data/maps/Route104/scripts.pory"
	giveitem ITEM_CHESTO_BERRY
# 266 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 267 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 268 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 269 "data/maps/Route104/scripts.pory"
	release
# 270 "data/maps/Route104/scripts.pory"
	end
# 271 "data/maps/Route104/scripts.pory"

# 272 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBerry::
# 273 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 274 "data/maps/Route104/scripts.pory"
	release
# 275 "data/maps/Route104/scripts.pory"
	end
# 276 "data/maps/Route104/scripts.pory"

# 277 "data/maps/Route104/scripts.pory"
Route104_EventScript_WhiteHerbFlorist::
# 278 "data/maps/Route104/scripts.pory"
	lock
# 279 "data/maps/Route104/scripts.pory"
	faceplayer
# 280 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_EventScript_ReceivedWhiteHerb
# 281 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 282 "data/maps/Route104/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 283 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 284 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
# 285 "data/maps/Route104/scripts.pory"
	release
# 286 "data/maps/Route104/scripts.pory"
	end
# 287 "data/maps/Route104/scripts.pory"

# 288 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedWhiteHerb::
# 289 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 290 "data/maps/Route104/scripts.pory"
	release
# 291 "data/maps/Route104/scripts.pory"
	end
# 292 "data/maps/Route104/scripts.pory"

# 293 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl1::
# 294 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 295 "data/maps/Route104/scripts.pory"
	end
# 296 "data/maps/Route104/scripts.pory"

# 297 "data/maps/Route104/scripts.pory"
Route104_EventScript_BugCatcher::
# 298 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 299 "data/maps/Route104/scripts.pory"
	end
# 300 "data/maps/Route104/scripts.pory"

# 301 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrineysCottageSign::
# 302 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 303 "data/maps/Route104/scripts.pory"
	end
# 304 "data/maps/Route104/scripts.pory"

# 305 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignPetalburg::
# 306 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 307 "data/maps/Route104/scripts.pory"
	end
# 308 "data/maps/Route104/scripts.pory"

# 309 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignRustboro::
# 310 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 311 "data/maps/Route104/scripts.pory"
	end
# 312 "data/maps/Route104/scripts.pory"

# 313 "data/maps/Route104/scripts.pory"
Route104_EventScript_FlowerShopSign::
# 314 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 315 "data/maps/Route104/scripts.pory"
	end
# 316 "data/maps/Route104/scripts.pory"

# 317 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrainerTipsDoubleBattles::
# 318 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 319 "data/maps/Route104/scripts.pory"
	end
# 320 "data/maps/Route104/scripts.pory"

# 321 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy1::
# 322 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 323 "data/maps/Route104/scripts.pory"
	end
# 324 "data/maps/Route104/scripts.pory"

# 325 "data/maps/Route104/scripts.pory"
Route104_EventScript_Woman::
# 326 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 327 "data/maps/Route104/scripts.pory"
	end
# 328 "data/maps/Route104/scripts.pory"

# 329 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy2::
# 330 "data/maps/Route104/scripts.pory"
	lock
# 331 "data/maps/Route104/scripts.pory"
	faceplayer
# 332 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104_EventScript_ReceivedBulletSeed
# 333 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 334 "data/maps/Route104/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 335 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 336 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
# 337 "data/maps/Route104/scripts.pory"
	release
# 338 "data/maps/Route104/scripts.pory"
	end
# 339 "data/maps/Route104/scripts.pory"

# 340 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBulletSeed::
# 341 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 342 "data/maps/Route104/scripts.pory"
	release
# 343 "data/maps/Route104/scripts.pory"
	end
# 344 "data/maps/Route104/scripts.pory"

# 345 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl2::
# 346 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 347 "data/maps/Route104/scripts.pory"
	end
# 348 "data/maps/Route104/scripts.pory"

# 349 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford::
# 350 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R104, MAP_ROUTE104, 0
# 351 "data/maps/Route104/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104, 0
# 352 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_R104, Route104_Movement_BrineyBoardBoat
# 353 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 354 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_BRINEY_R104
# 355 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBoardBoat
# 356 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 357 "data/maps/Route104/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 358 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 359 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordNoCall
# 360 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordDadCalls
# 361 "data/maps/Route104/scripts.pory"
	end
# 362 "data/maps/Route104/scripts.pory"

# 363 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordNoCall::
# 364 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewford
# 365 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewford
# 366 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 367 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 368 "data/maps/Route104/scripts.pory"

# 369 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordDadCalls::
# 370 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordBeforeDadCalls
# 371 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 372 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 373 "data/maps/Route104/scripts.pory"
	pokenavcall Route104_Text_DadPokenavCall
# 374 "data/maps/Route104/scripts.pory"
	waitmessage
# 375 "data/maps/Route104/scripts.pory"
	delay 30
# 376 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 377 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 378 "data/maps/Route104/scripts.pory"
	waitfanfare
# 379 "data/maps/Route104/scripts.pory"
	closemessage
# 380 "data/maps/Route104/scripts.pory"
	delay 30
# 381 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 382 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordAfterDadCalls
# 383 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordAfterDadCalls, MAP_ROUTE104
# 384 "data/maps/Route104/scripts.pory"
	waitmovement LOCALID_BOAT_R104, MAP_ROUTE104
# 385 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 386 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 387 "data/maps/Route104/scripts.pory"

# 388 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford::
# 389 "data/maps/Route104/scripts.pory"
	delay 50
# 390 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerExitBoat
# 391 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 392 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 393 "data/maps/Route104/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 394 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerMoveForBriney
# 395 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 396 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 397 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 398 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 399 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 400 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route104_Movement_BrineyExitBoat
# 401 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 402 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 403 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 404 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 405 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 406 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_BOAT_R104, MAP_ROUTE104
# 407 "data/maps/Route104/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 408 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 409 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 410 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 411 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 412 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_DeliverLetterReminder
# 413 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_LandedInDewford
# 414 "data/maps/Route104/scripts.pory"
	end
# 415 "data/maps/Route104/scripts.pory"

# 416 "data/maps/Route104/scripts.pory"
Route104_EventScript_DeliverLetterReminder::
# 417 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
# 418 "data/maps/Route104/scripts.pory"
	releaseall
# 419 "data/maps/Route104/scripts.pory"
	end
# 420 "data/maps/Route104/scripts.pory"

# 421 "data/maps/Route104/scripts.pory"
Route104_EventScript_LandedInDewford::
# 422 "data/maps/Route104/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 423 "data/maps/Route104/scripts.pory"
	releaseall
# 424 "data/maps/Route104/scripts.pory"
	end
# 425 "data/maps/Route104/scripts.pory"

# 426 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls:
# 427 "data/maps/Route104/scripts.pory"
	walk_down
# 428 "data/maps/Route104/scripts.pory"
	walk_down
# 429 "data/maps/Route104/scripts.pory"
	walk_down
# 430 "data/maps/Route104/scripts.pory"
	walk_down
# 431 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 432 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 433 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 434 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 435 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 436 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 437 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 438 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 439 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 440 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 441 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 442 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 443 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 444 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 445 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 446 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 448 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 449 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 450 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 451 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 452 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 453 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 454 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 455 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 456 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 457 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 458 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 459 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 460 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 461 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 462 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 463 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 464 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 465 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 466 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 467 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 468 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 469 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 470 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 471 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 472 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 473 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 474 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 475 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 476 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 477 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 478 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 479 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 480 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 481 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 482 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 483 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 484 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 485 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 486 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 487 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 488 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 489 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 490 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 491 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 492 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 493 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 494 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 495 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 496 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 497 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 498 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 499 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 500 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 501 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 502 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 503 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 504 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 505 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 506 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 507 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 508 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 509 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 510 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 511 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 512 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 513 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 514 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 515 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 516 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 517 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 518 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 519 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 520 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 521 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 522 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 523 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 524 "data/maps/Route104/scripts.pory"
	step_end
# 525 "data/maps/Route104/scripts.pory"

# 526 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordAfterDadCalls:
# 527 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 528 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 529 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 530 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 531 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 532 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 533 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 534 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 535 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 536 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 537 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 538 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 539 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 540 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 541 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 542 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 543 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 544 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 545 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 546 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 547 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 548 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 549 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 550 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 551 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 552 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 553 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 554 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 555 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 556 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 557 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 558 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 559 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 560 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 561 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 562 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 563 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 564 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 565 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 566 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 567 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 568 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 569 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 570 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 571 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 572 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 573 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 574 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 575 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 576 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 577 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 578 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 579 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 580 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 581 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 582 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 583 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 584 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 585 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 586 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 587 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 588 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 589 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 590 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 591 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 592 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 593 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 594 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 595 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 596 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 597 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 598 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 599 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 600 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 601 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 602 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 603 "data/maps/Route104/scripts.pory"
	walk_right
# 604 "data/maps/Route104/scripts.pory"
	walk_right
# 605 "data/maps/Route104/scripts.pory"
	walk_down
# 606 "data/maps/Route104/scripts.pory"
	walk_down
# 607 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 608 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 609 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 610 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 611 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 612 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 613 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 614 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 615 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 616 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 617 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 618 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 619 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 620 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 621 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 622 "data/maps/Route104/scripts.pory"
	walk_down
# 623 "data/maps/Route104/scripts.pory"
	walk_down
# 624 "data/maps/Route104/scripts.pory"
	step_end
# 625 "data/maps/Route104/scripts.pory"

# 626 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewford:
# 627 "data/maps/Route104/scripts.pory"
	walk_down
# 628 "data/maps/Route104/scripts.pory"
	walk_down
# 629 "data/maps/Route104/scripts.pory"
	walk_down
# 630 "data/maps/Route104/scripts.pory"
	walk_down
# 631 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 632 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 633 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 634 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 635 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 636 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 637 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 638 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 639 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 640 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 641 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 642 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 643 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 644 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 645 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 646 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 647 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 648 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 649 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 650 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 651 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 652 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 653 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 654 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 655 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 656 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 657 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 658 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 659 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 660 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 661 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 662 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 663 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 664 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 665 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 666 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 667 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 668 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 669 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 670 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 671 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 672 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 673 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 674 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 675 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 676 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 677 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 678 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 679 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 680 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 681 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 682 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 683 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 684 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 685 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 686 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 687 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 688 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 689 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 690 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 691 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 692 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 693 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 694 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 695 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 696 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 697 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 698 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 699 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 700 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 701 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 702 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 703 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 704 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 705 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 706 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 707 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 708 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 709 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 710 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 711 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 712 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 713 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 714 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 715 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 716 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 717 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 718 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 719 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 720 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 721 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 722 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 723 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 724 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 725 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 726 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 727 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 728 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 729 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 730 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 731 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 732 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 733 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 734 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 735 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 736 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 737 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 738 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 739 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 740 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 741 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 742 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 743 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 744 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 745 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 746 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 747 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 748 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 749 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 750 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 751 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 752 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 753 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 754 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 755 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 756 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 757 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 758 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 759 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 760 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 761 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 762 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 763 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 764 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 765 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 766 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 767 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 768 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 769 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 770 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 771 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 772 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 773 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 774 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 775 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 776 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 777 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 778 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 779 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 780 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 781 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 782 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 783 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 784 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 785 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 786 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 787 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 788 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 789 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 790 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 791 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 792 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 793 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 794 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 795 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 796 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 797 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 798 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 799 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 800 "data/maps/Route104/scripts.pory"
	walk_right
# 801 "data/maps/Route104/scripts.pory"
	walk_right
# 802 "data/maps/Route104/scripts.pory"
	walk_down
# 803 "data/maps/Route104/scripts.pory"
	walk_down
# 804 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 805 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 806 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 807 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 808 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 809 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 810 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 811 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 812 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 813 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 814 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 815 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 816 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 817 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 818 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 819 "data/maps/Route104/scripts.pory"
	walk_down
# 820 "data/maps/Route104/scripts.pory"
	walk_down
# 821 "data/maps/Route104/scripts.pory"
	step_end
# 822 "data/maps/Route104/scripts.pory"

# 823 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBoardBoat:
# 824 "data/maps/Route104/scripts.pory"
	walk_left
# 825 "data/maps/Route104/scripts.pory"
	walk_down
# 826 "data/maps/Route104/scripts.pory"
	walk_down
# 827 "data/maps/Route104/scripts.pory"
	step_end
# 828 "data/maps/Route104/scripts.pory"

# 829 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerExitBoat:
# 830 "data/maps/Route104/scripts.pory"
	walk_down
# 831 "data/maps/Route104/scripts.pory"
	step_end
# 832 "data/maps/Route104/scripts.pory"

# 833 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerMoveForBriney:
# 834 "data/maps/Route104/scripts.pory"
	walk_down
# 835 "data/maps/Route104/scripts.pory"
	walk_left
# 836 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_right
# 837 "data/maps/Route104/scripts.pory"
	step_end
# 838 "data/maps/Route104/scripts.pory"

# 839 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyBoardBoat:
# 840 "data/maps/Route104/scripts.pory"
	walk_down
# 841 "data/maps/Route104/scripts.pory"
	walk_down
# 842 "data/maps/Route104/scripts.pory"
	step_end
# 843 "data/maps/Route104/scripts.pory"

# 844 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyExitBoat:
# 845 "data/maps/Route104/scripts.pory"
	walk_down
# 846 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 847 "data/maps/Route104/scripts.pory"
	step_end
# 848 "data/maps/Route104/scripts.pory"

# 849 "data/maps/Route104/scripts.pory"
Route104_EventScript_Billy::
# 850 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 851 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 852 "data/maps/Route104/scripts.pory"
	end
# 853 "data/maps/Route104/scripts.pory"

# 854 "data/maps/Route104/scripts.pory"
Route104_EventScript_Haley::
# 855 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_EventScript_TryRegisterHaleyAfterBattle
# 856 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 857 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchHaley
# 858 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 859 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 860 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterHaley
# 861 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 862 "data/maps/Route104/scripts.pory"
	release
# 863 "data/maps/Route104/scripts.pory"
	end
# 864 "data/maps/Route104/scripts.pory"

# 865 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaleyAfterBattle::
# 866 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 867 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 868 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaleyAfterBattle
# 869 "data/maps/Route104/scripts.pory"
	release
# 870 "data/maps/Route104/scripts.pory"
	end
# 871 "data/maps/Route104/scripts.pory"

# 872 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaleyAfterBattle::
# 873 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 874 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 875 "data/maps/Route104/scripts.pory"
	release
# 876 "data/maps/Route104/scripts.pory"
	end
# 877 "data/maps/Route104/scripts.pory"

# 878 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaley::
# 879 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaley
# 880 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 881 "data/maps/Route104/scripts.pory"
	release
# 882 "data/maps/Route104/scripts.pory"
	end
# 883 "data/maps/Route104/scripts.pory"

# 884 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaley::
# 885 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 886 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 887 "data/maps/Route104/scripts.pory"
	release
# 888 "data/maps/Route104/scripts.pory"
	end
# 889 "data/maps/Route104/scripts.pory"

# 890 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchHaley::
# 891 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 892 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 893 "data/maps/Route104/scripts.pory"
	end
# 894 "data/maps/Route104/scripts.pory"

# 895 "data/maps/Route104/scripts.pory"
Route104_EventScript_Winston::
# 896 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_EventScript_TryRegisterWinstonAfterBattle
# 897 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 898 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchWinston
# 899 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 900 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 901 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterWinston
# 902 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 903 "data/maps/Route104/scripts.pory"
	release
# 904 "data/maps/Route104/scripts.pory"
	end
# 905 "data/maps/Route104/scripts.pory"

# 906 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinstonAfterBattle::
# 907 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 908 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 909 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinstonAfterBattle
# 910 "data/maps/Route104/scripts.pory"
	release
# 911 "data/maps/Route104/scripts.pory"
	end
# 912 "data/maps/Route104/scripts.pory"

# 913 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinstonAfterBattle::
# 914 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 915 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 916 "data/maps/Route104/scripts.pory"
	release
# 917 "data/maps/Route104/scripts.pory"
	end
# 918 "data/maps/Route104/scripts.pory"

# 919 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinston::
# 920 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinston
# 921 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 922 "data/maps/Route104/scripts.pory"
	release
# 923 "data/maps/Route104/scripts.pory"
	end
# 924 "data/maps/Route104/scripts.pory"

# 925 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinston::
# 926 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 927 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 928 "data/maps/Route104/scripts.pory"
	release
# 929 "data/maps/Route104/scripts.pory"
	end
# 930 "data/maps/Route104/scripts.pory"

# 931 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchWinston::
# 932 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 933 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 934 "data/maps/Route104/scripts.pory"
	end
# 935 "data/maps/Route104/scripts.pory"

# 936 "data/maps/Route104/scripts.pory"
Route104_EventScript_Cindy::
# 937 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat, Route104_EventScript_TryRegisterCindyAfterBattle
# 938 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 939 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchCindy
# 940 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_CINDY_1
# 941 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 942 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterCindy
# 943 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 944 "data/maps/Route104/scripts.pory"
	release
# 945 "data/maps/Route104/scripts.pory"
	end
# 946 "data/maps/Route104/scripts.pory"

# 947 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindyAfterBattle::
# 948 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 949 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 950 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindyAfterBattle
# 951 "data/maps/Route104/scripts.pory"
	release
# 952 "data/maps/Route104/scripts.pory"
	end
# 953 "data/maps/Route104/scripts.pory"

# 954 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindyAfterBattle::
# 955 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 956 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 957 "data/maps/Route104/scripts.pory"
	release
# 958 "data/maps/Route104/scripts.pory"
	end
# 959 "data/maps/Route104/scripts.pory"

# 960 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindy::
# 961 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindy
# 962 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 963 "data/maps/Route104/scripts.pory"
	release
# 964 "data/maps/Route104/scripts.pory"
	end
# 965 "data/maps/Route104/scripts.pory"

# 966 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindy::
# 967 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 968 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 969 "data/maps/Route104/scripts.pory"
	release
# 970 "data/maps/Route104/scripts.pory"
	end
# 971 "data/maps/Route104/scripts.pory"

# 972 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchCindy::
# 973 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 974 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 975 "data/maps/Route104/scripts.pory"
	end
# 976 "data/maps/Route104/scripts.pory"

# 977 "data/maps/Route104/scripts.pory"
Route104_EventScript_Gina::
# 978 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 979 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 980 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 981 "data/maps/Route104/scripts.pory"
	release
# 982 "data/maps/Route104/scripts.pory"
	end
# 983 "data/maps/Route104/scripts.pory"

# 984 "data/maps/Route104/scripts.pory"
Route104_EventScript_Mia::
# 985 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 986 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 987 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 988 "data/maps/Route104/scripts.pory"
	release
# 989 "data/maps/Route104/scripts.pory"
	end
# 990 "data/maps/Route104/scripts.pory"

# 991 "data/maps/Route104/scripts.pory"
Route104_EventScript_Darian::
# 992 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 993 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 994 "data/maps/Route104/scripts.pory"
	end
# 995 "data/maps/Route104/scripts.pory"

# 996 "data/maps/Route104/scripts.pory"
Route104_Text_BrineyLivesInSeasideCottage:
# 997 "data/maps/Route104/scripts.pory"
	.string "That seaside cottage is where\n"
# 998 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY lives.\p"
# 999 "data/maps/Route104/scripts.pory"
	.string "He was once a mighty sailor who never\n"
# 1000 "data/maps/Route104/scripts.pory"
	.string "feared the sea, however stormy.$"
# 1001 "data/maps/Route104/scripts.pory"

# 1002 "data/maps/Route104/scripts.pory"
Route104_Text_WhatsItLikeAtBottomOfSea:
# 1003 "data/maps/Route104/scripts.pory"
	.string "The sea, huh?\p"
# 1004 "data/maps/Route104/scripts.pory"
	.string "I wonder what it's like at the bottom\n"
# 1005 "data/maps/Route104/scripts.pory"
	.string "of the sea?$"
# 1006 "data/maps/Route104/scripts.pory"

# 1007 "data/maps/Route104/scripts.pory"
Route104_Text_ThrowBallAtWeakenedPokemon:
# 1008 "data/maps/Route104/scripts.pory"
	.string "If you're going to throw a POKé BALL,\n"
# 1009 "data/maps/Route104/scripts.pory"
	.string "weaken the wild POKéMON first.\p"
# 1010 "data/maps/Route104/scripts.pory"
	.string "It will be easier to catch if it's been\n"
# 1011 "data/maps/Route104/scripts.pory"
	.string "poisoned, burned, or lulled to sleep.$"
# 1012 "data/maps/Route104/scripts.pory"

# 1013 "data/maps/Route104/scripts.pory"
Route104_Text_OnlyThrowBallAtWildPokemon:
# 1014 "data/maps/Route104/scripts.pory"
	.string "You're a thief if you try to steal\n"
# 1015 "data/maps/Route104/scripts.pory"
	.string "someone else's POKéMON.\p"
# 1016 "data/maps/Route104/scripts.pory"
	.string "You should throw POKé BALLS only at\n"
# 1017 "data/maps/Route104/scripts.pory"
	.string "wild POKéMON.$"
# 1018 "data/maps/Route104/scripts.pory"

# 1019 "data/maps/Route104/scripts.pory"
Route104_Text_ImNotATrainer:
# 1020 "data/maps/Route104/scripts.pory"
	.string "Oh, no, I'm not a TRAINER.\p"
# 1021 "data/maps/Route104/scripts.pory"
	.string "But that's right, if TRAINERS lock eyes,\n"
# 1022 "data/maps/Route104/scripts.pory"
	.string "it's a challenge to battle.\p"
# 1023 "data/maps/Route104/scripts.pory"
	.string "If you don't want to battle, stay out\n"
# 1024 "data/maps/Route104/scripts.pory"
	.string "of their sight.$"
# 1025 "data/maps/Route104/scripts.pory"

# 1026 "data/maps/Route104/scripts.pory"
Route104_Text_LikeFillingMouthWithSeedsTakeThis:
# 1027 "data/maps/Route104/scripts.pory"
	.string "I like filling my mouth with seeds,\n"
# 1028 "data/maps/Route104/scripts.pory"
	.string "then spitting them out fast!\p"
# 1029 "data/maps/Route104/scripts.pory"
	.string "You can have this, so you try it out!\p"
# 1030 "data/maps/Route104/scripts.pory"
	.string "Use it on a POKéMON, and it will learn\n"
# 1031 "data/maps/Route104/scripts.pory"
	.string "a move for firing seeds rapidly.$"
# 1032 "data/maps/Route104/scripts.pory"

# 1033 "data/maps/Route104/scripts.pory"
Route104_Text_TMsAreOneTimeUse:
# 1034 "data/maps/Route104/scripts.pory"
	.string "A word of advice!\p"
# 1035 "data/maps/Route104/scripts.pory"
	.string "A TM, TECHNICAL MACHINE, is good only\n"
# 1036 "data/maps/Route104/scripts.pory"
	.string "for one-time use.\p"
# 1037 "data/maps/Route104/scripts.pory"
	.string "Once you use it, it's gone.\n"
# 1038 "data/maps/Route104/scripts.pory"
	.string "Think twice before using it!$"
# 1039 "data/maps/Route104/scripts.pory"

# 1040 "data/maps/Route104/scripts.pory"
Route104_Text_DontNeedThisTakeIt:
# 1041 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1042 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1043 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1044 "data/maps/Route104/scripts.pory"
	.string "shopping.\p"
# 1045 "data/maps/Route104/scripts.pory"
	.string "I don't need this WHITE HERB anymore.\n"
# 1046 "data/maps/Route104/scripts.pory"
	.string "Would you take it, please?$"
# 1047 "data/maps/Route104/scripts.pory"

# 1048 "data/maps/Route104/scripts.pory"
Route104_Text_FlowerShopSellingSaplings:
# 1049 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1050 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1051 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1052 "data/maps/Route104/scripts.pory"
	.string "shopping. Where should I put them?$"
# 1053 "data/maps/Route104/scripts.pory"

# 1054 "data/maps/Route104/scripts.pory"
Route104_Text_MrBrineysCottage:
# 1055 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY'S COTTAGE$"
# 1056 "data/maps/Route104/scripts.pory"

# 1057 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignPetalburg:
# 1058 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 1059 "data/maps/Route104/scripts.pory"
	.string "{RIGHT_ARROW} PETALBURG CITY$"
# 1060 "data/maps/Route104/scripts.pory"

# 1061 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignRustboro:
# 1062 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 1063 "data/maps/Route104/scripts.pory"
	.string "{UP_ARROW} RUSTBORO CITY$"
# 1064 "data/maps/Route104/scripts.pory"

# 1065 "data/maps/Route104/scripts.pory"
Route104_Text_PrettyPetalFlowShop:
# 1066 "data/maps/Route104/scripts.pory"
	.string "PRETTY PETAL FLOWER SHOP$"
# 1067 "data/maps/Route104/scripts.pory"

# 1068 "data/maps/Route104/scripts.pory"
Route104_Text_TrainerTipsDoubleBattles:
# 1069 "data/maps/Route104/scripts.pory"
	.string "TRAINER TIPS\p"
# 1070 "data/maps/Route104/scripts.pory"
	.string "In the HOENN region there are pairs\n"
# 1071 "data/maps/Route104/scripts.pory"
	.string "of TRAINERS who challenge others\l"
# 1072 "data/maps/Route104/scripts.pory"
	.string "for 2-on-2 POKéMON battles called\l"
# 1073 "data/maps/Route104/scripts.pory"
	.string "DOUBLE BATTLES.\p"
# 1074 "data/maps/Route104/scripts.pory"
	.string "In a DOUBLE BATTLE, the TRAINER must\n"
# 1075 "data/maps/Route104/scripts.pory"
	.string "send out two POKéMON, the one at the\l"
# 1076 "data/maps/Route104/scripts.pory"
	.string "left of the list and the top one.\l"
# 1077 "data/maps/Route104/scripts.pory"
	.string "Watch how POKéMON are lined up.$"
# 1078 "data/maps/Route104/scripts.pory"

# 1079 "data/maps/Route104/scripts.pory"
Route104_Text_MayWeShouldRegister:
# 1080 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1081 "data/maps/Route104/scripts.pory"
	.string "DEVON upgraded your POKéNAV with\n"
# 1082 "data/maps/Route104/scripts.pory"
	.string "the MATCH CALL system, huh?\p"
# 1083 "data/maps/Route104/scripts.pory"
	.string "We should register each other so we\n"
# 1084 "data/maps/Route104/scripts.pory"
	.string "can get in contact anytime.$"
# 1085 "data/maps/Route104/scripts.pory"

# 1086 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredMay:
# 1087 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered MAY\n"
# 1088 "data/maps/Route104/scripts.pory"
	.string "in the POKéNAV.$"
# 1089 "data/maps/Route104/scripts.pory"

# 1090 "data/maps/Route104/scripts.pory"
Route104_Text_MayHowsYourPokedex:
# 1091 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, by the way, {PLAYER}{KUN},\n"
# 1092 "data/maps/Route104/scripts.pory"
	.string "how's your POKéDEX coming along?$"
# 1093 "data/maps/Route104/scripts.pory"

# 1094 "data/maps/Route104/scripts.pory"
Route104_Text_MayMinesDecentLetsBattle:
# 1095 "data/maps/Route104/scripts.pory"
	.string "Mine's looking pretty decent.\n"
# 1096 "data/maps/Route104/scripts.pory"
	.string "So…\l"
# 1097 "data/maps/Route104/scripts.pory"
	.string "How about a little battle?$"
# 1098 "data/maps/Route104/scripts.pory"

# 1099 "data/maps/Route104/scripts.pory"
Route104_Text_MayHaventRaisedPokemon:
# 1100 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1101 "data/maps/Route104/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1102 "data/maps/Route104/scripts.pory"
	.string "POKéMON very much?\p"
# 1103 "data/maps/Route104/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1104 "data/maps/Route104/scripts.pory"

# 1105 "data/maps/Route104/scripts.pory"
Route104_Text_MayLetsBattle:
# 1106 "data/maps/Route104/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1107 "data/maps/Route104/scripts.pory"
	.string "How about a little battle here?$"
# 1108 "data/maps/Route104/scripts.pory"

# 1109 "data/maps/Route104/scripts.pory"
Route104_Text_MayIntro:
# 1110 "data/maps/Route104/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1111 "data/maps/Route104/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1112 "data/maps/Route104/scripts.pory"

# 1113 "data/maps/Route104/scripts.pory"
Route104_Text_MayDefeat:
# 1114 "data/maps/Route104/scripts.pory"
	.string "Yikes!\n"
# 1115 "data/maps/Route104/scripts.pory"
	.string "You're better than I expected!$"
# 1116 "data/maps/Route104/scripts.pory"

# 1117 "data/maps/Route104/scripts.pory"
Route104_Text_MayPostBattle:
# 1118 "data/maps/Route104/scripts.pory"
	.string "MAY: I can tell you've gotten pretty\n"
# 1119 "data/maps/Route104/scripts.pory"
	.string "good with the way you handle POKéMON.\p"
# 1120 "data/maps/Route104/scripts.pory"
	.string "But instead of only making them\n"
# 1121 "data/maps/Route104/scripts.pory"
	.string "battle, you should be like MR. BRINEY.\p"
# 1122 "data/maps/Route104/scripts.pory"
	.string "It's important to become friends with\n"
# 1123 "data/maps/Route104/scripts.pory"
	.string "POKéMON, too.$"
# 1124 "data/maps/Route104/scripts.pory"

# 1125 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanWeShouldRegister:
# 1126 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1127 "data/maps/Route104/scripts.pory"
	.string "Cool, you had DEVON install the MATCH\n"
# 1128 "data/maps/Route104/scripts.pory"
	.string "CALL system on your POKéNAV!\p"
# 1129 "data/maps/Route104/scripts.pory"
	.string "Let's register each other in our\n"
# 1130 "data/maps/Route104/scripts.pory"
	.string "POKéNAVS so we can keep in touch.$"
# 1131 "data/maps/Route104/scripts.pory"

# 1132 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredBrendan:
# 1133 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered BRENDAN\n"
# 1134 "data/maps/Route104/scripts.pory"
	.string "in the POKéNAV.$"
# 1135 "data/maps/Route104/scripts.pory"

# 1136 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanHowsYourPokedex:
# 1137 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: {PLAYER}, how's your POKéDEX?\n"
# 1138 "data/maps/Route104/scripts.pory"
	.string "Have you filled in any pages yet?$"
# 1139 "data/maps/Route104/scripts.pory"

# 1140 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDoingGreatLetsBattle:
# 1141 "data/maps/Route104/scripts.pory"
	.string "Me, I'm doing great!\p"
# 1142 "data/maps/Route104/scripts.pory"
	.string "Want to check out how good I am with\n"
# 1143 "data/maps/Route104/scripts.pory"
	.string "a battle?$"
# 1144 "data/maps/Route104/scripts.pory"

# 1145 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanNoConfidence:
# 1146 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1147 "data/maps/Route104/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1148 "data/maps/Route104/scripts.pory"

# 1149 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanLetsBattle:
# 1150 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1151 "data/maps/Route104/scripts.pory"
	.string "Want to have a battle with me?$"
# 1152 "data/maps/Route104/scripts.pory"

# 1153 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanIntro:
# 1154 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1155 "data/maps/Route104/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1156 "data/maps/Route104/scripts.pory"

# 1157 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDefeat:
# 1158 "data/maps/Route104/scripts.pory"
	.string "Hmm…\n"
# 1159 "data/maps/Route104/scripts.pory"
	.string "You're pretty good.$"
# 1160 "data/maps/Route104/scripts.pory"

# 1161 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanPostBattle:
# 1162 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: You've gotten pretty decent\n"
# 1163 "data/maps/Route104/scripts.pory"
	.string "at handling POKéMON.\p"
# 1164 "data/maps/Route104/scripts.pory"
	.string "But, you know, you shouldn't just be\n"
# 1165 "data/maps/Route104/scripts.pory"
	.string "making POKéMON battle.\p"
# 1166 "data/maps/Route104/scripts.pory"
	.string "Like MR. BRINEY, it's important to\n"
# 1167 "data/maps/Route104/scripts.pory"
	.string "become friends with your POKéMON.$"

Route104_LunaDexNav::
# 1171 "data/maps/Route104/scripts.pory"
	lockall
# 1172 "data/maps/Route104/scripts.pory"
	pokenavcall Route104_LunaDexNavText
# 1173 "data/maps/Route104/scripts.pory"
	waitmessage
# 1174 "data/maps/Route104/scripts.pory"
	delay 30
# 1175 "data/maps/Route104/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 2
# 1176 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_NPC_LUNA_HOUSE_PETALBURG
# 1177 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_NPC_RATDUARDO_SIDEQUEST
# 1178 "data/maps/Route104/scripts.pory"
	releaseall
	end


Route104_LunaDexNavText::
# 1182 "data/maps/Route104/scripts.pory"
	.string "… … … … … …\n … … … … … Beep!\p {PLAYER}? It's LUNA.\n Are you still in the area?\p I need a favor. Meet me in front of\n my house in PETALBURG.\p It's the one north of the POKéMON\n CENTER.\p … … … … … …\n … … … … … Click!$"
