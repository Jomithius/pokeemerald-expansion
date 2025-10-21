# 1 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_MapScripts::
# 2 "data/maps/MtPyre_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_Exterior_OnTransition
# 3 "data/maps/MtPyre_Exterior/scripts.pory"
	.byte 0
# 4 "data/maps/MtPyre_Exterior/scripts.pory"

# 5 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_OnTransition:
# 6 "data/maps/MtPyre_Exterior/scripts.pory"
	call MtPyre_Exterior_EventScript_CheckEnterFromSummit
# 7 "data/maps/MtPyre_Exterior/scripts.pory"
	end
# 8 "data/maps/MtPyre_Exterior/scripts.pory"

# 9 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_EventScript_CheckEnterFromSummit::
# 10 "data/maps/MtPyre_Exterior/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 11 "data/maps/MtPyre_Exterior/scripts.pory"
	goto_if_lt VAR_TEMP_1, 12, MtPyre_Exterior_EventScript_EnterFromSummit
# 12 "data/maps/MtPyre_Exterior/scripts.pory"
	return
# 13 "data/maps/MtPyre_Exterior/scripts.pory"

# 14 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_EventScript_EnterFromSummit::
# 15 "data/maps/MtPyre_Exterior/scripts.pory"
	setweather WEATHER_FOG_HORIZONTAL
# 16 "data/maps/MtPyre_Exterior/scripts.pory"
	return
# 17 "data/maps/MtPyre_Exterior/scripts.pory"

# 18 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_EventScript_FogTrigger::
# 19 "data/maps/MtPyre_Exterior/scripts.pory"
	setweather WEATHER_FOG_HORIZONTAL
# 20 "data/maps/MtPyre_Exterior/scripts.pory"
	doweather
# 21 "data/maps/MtPyre_Exterior/scripts.pory"
	end
# 22 "data/maps/MtPyre_Exterior/scripts.pory"

# 23 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_EventScript_SunTrigger::
# 24 "data/maps/MtPyre_Exterior/scripts.pory"
	setweather WEATHER_SUNNY
# 25 "data/maps/MtPyre_Exterior/scripts.pory"
	doweather
# 26 "data/maps/MtPyre_Exterior/scripts.pory"
	end

MtPyre_Exterior_EventScript_Emo::
# 31 "data/maps/MtPyre_Exterior/scripts.pory"
	lockall
# 32 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 33 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 3
# 34 "data/maps/MtPyre_Exterior/scripts.pory"
	delay 20
# 35 "data/maps/MtPyre_Exterior/scripts.pory"
	playse SE_PIN
# 36 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 37 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 3
# 38 "data/maps/MtPyre_Exterior/scripts.pory"
	waitse
# 39 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement 3, MtPyre_Exterior_Movement_Emo1
# 40 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 3
# 41 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 42 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 0
# 43 "data/maps/MtPyre_Exterior/scripts.pory"
	playbgm MUS_PYRITE_THEME, TRUE
# 44 "data/maps/MtPyre_Exterior/scripts.pory"
	delay 10
# 45 "data/maps/MtPyre_Exterior/scripts.pory"
	msgbox MtPyre_Exterior_Text_Emo1, MSGBOX_AUTOCLOSE
# 46 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmessage
# 47 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement 3, Common_Movement_WalkLeft
# 48 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 3
# 49 "data/maps/MtPyre_Exterior/scripts.pory"
	trainerbattle_no_intro TRAINER_JOMITHIUS_3, MtPyre_Exterior_Text_RivalDefeat
# 50 "data/maps/MtPyre_Exterior/scripts.pory"
	msgbox MtPyre_Exterior_Text_Emo2, MSGBOX_DEFAULT
# 51 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmessage
# 52 "data/maps/MtPyre_Exterior/scripts.pory"
	giveitem ITEM_ASSAULT_VEST
# 53 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmessage
# 54 "data/maps/MtPyre_Exterior/scripts.pory"
	msgbox MtPyre_Exterior_Text_Emo3, MSGBOX_AUTOCLOSE
# 55 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmessage
# 56 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement 3, Common_Movement_WalkRight
# 57 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 3
# 58 "data/maps/MtPyre_Exterior/scripts.pory"
	setfieldeffectargument 0, 1
# 59 "data/maps/MtPyre_Exterior/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 60 "data/maps/MtPyre_Exterior/scripts.pory"
	delay 15
# 61 "data/maps/MtPyre_Exterior/scripts.pory"
	removeobject 3
# 62 "data/maps/MtPyre_Exterior/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 63 "data/maps/MtPyre_Exterior/scripts.pory"
	savebgm MUS_DUMMY
# 64 "data/maps/MtPyre_Exterior/scripts.pory"
	fadedefaultbgm
# 65 "data/maps/MtPyre_Exterior/scripts.pory"
	setvar VAR_MISA_STATE, 7
# 66 "data/maps/MtPyre_Exterior/scripts.pory"
	setflag FLAG_HIDE_EMO_MT_PYRE
# 67 "data/maps/MtPyre_Exterior/scripts.pory"
	clearflag FLAG_HIDE_EMO_LILYCOVE
# 68 "data/maps/MtPyre_Exterior/scripts.pory"
	clearflag FLAG_HIDE_MISA_LILYCOVE_DEPT_5F
# 69 "data/maps/MtPyre_Exterior/scripts.pory"
	releaseall
	end


MtPyre_Exterior_EventScript_Emo2::
# 74 "data/maps/MtPyre_Exterior/scripts.pory"
	lockall
# 75 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 76 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 3
# 77 "data/maps/MtPyre_Exterior/scripts.pory"
	delay 20
# 78 "data/maps/MtPyre_Exterior/scripts.pory"
	playse SE_PIN
# 79 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 80 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 3
# 81 "data/maps/MtPyre_Exterior/scripts.pory"
	waitse
# 82 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement 3, MtPyre_Exterior_Movement_Emo2
# 83 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 3
# 84 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 85 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 0
# 86 "data/maps/MtPyre_Exterior/scripts.pory"
	playbgm MUS_PYRITE_THEME, TRUE
# 87 "data/maps/MtPyre_Exterior/scripts.pory"
	delay 10
# 88 "data/maps/MtPyre_Exterior/scripts.pory"
	msgbox MtPyre_Exterior_Text_Emo1, MSGBOX_AUTOCLOSE
# 89 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmessage
# 90 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement 3, Common_Movement_WalkLeft
# 91 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 3
# 92 "data/maps/MtPyre_Exterior/scripts.pory"
	trainerbattle_no_intro TRAINER_JOMITHIUS_3, MtPyre_Exterior_Text_RivalDefeat
# 93 "data/maps/MtPyre_Exterior/scripts.pory"
	msgbox MtPyre_Exterior_Text_Emo2, MSGBOX_DEFAULT
# 94 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmessage
# 95 "data/maps/MtPyre_Exterior/scripts.pory"
	giveitem ITEM_ASSAULT_VEST
# 96 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmessage
# 97 "data/maps/MtPyre_Exterior/scripts.pory"
	msgbox MtPyre_Exterior_Text_Emo3, MSGBOX_AUTOCLOSE
# 98 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmessage
# 99 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement 3, Common_Movement_WalkRight
# 100 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 3
# 101 "data/maps/MtPyre_Exterior/scripts.pory"
	setfieldeffectargument 0, 1
# 102 "data/maps/MtPyre_Exterior/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 103 "data/maps/MtPyre_Exterior/scripts.pory"
	delay 15
# 104 "data/maps/MtPyre_Exterior/scripts.pory"
	removeobject 3
# 105 "data/maps/MtPyre_Exterior/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 106 "data/maps/MtPyre_Exterior/scripts.pory"
	savebgm MUS_DUMMY
# 107 "data/maps/MtPyre_Exterior/scripts.pory"
	fadedefaultbgm
# 108 "data/maps/MtPyre_Exterior/scripts.pory"
	setvar VAR_MISA_STATE, 7
# 109 "data/maps/MtPyre_Exterior/scripts.pory"
	setflag FLAG_HIDE_EMO_MT_PYRE
# 110 "data/maps/MtPyre_Exterior/scripts.pory"
	clearflag FLAG_HIDE_EMO_LILYCOVE
# 111 "data/maps/MtPyre_Exterior/scripts.pory"
	clearflag FLAG_HIDE_MISA_LILYCOVE_DEPT_5F
# 112 "data/maps/MtPyre_Exterior/scripts.pory"
	releaseall
	end


# 148 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_Movement_Emo1:
# 149 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 149 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
	step_end

# 152 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_Movement_Emo2:
# 153 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_down
# 154 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 154 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
	step_end

# 157 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_Movement_EmoLeave1:
# 158 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_down
# 159 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 159 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 159 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 159 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 159 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 159 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 159 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 159 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 159 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 160 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_up
# 160 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_up
# 160 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_up
	step_end

# 163 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_Movement_EmoLeave2:
# 164 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_up
# 165 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 165 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 165 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 165 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 165 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 165 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 165 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 165 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 165 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 166 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_up
# 166 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_up
	step_end

MtPyre_Exterior_EventScript_Spectrier::
# 170 "data/maps/MtPyre_Exterior/scripts.pory"
	lock
# 171 "data/maps/MtPyre_Exterior/scripts.pory"
	faceplayer
# 172 "data/maps/MtPyre_Exterior/scripts.pory"
	playmoncry SPECIES_SPECTRIER, CRY_MODE_ENCOUNTER
# 173 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmoncry
# 174 "data/maps/MtPyre_Exterior/scripts.pory"
	setwildbattle SPECIES_SPECTRIER, 75
# 175 "data/maps/MtPyre_Exterior/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 176 "data/maps/MtPyre_Exterior/scripts.pory"
	waitstate
# 177 "data/maps/MtPyre_Exterior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 178 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MtPyre_Exterior_EventScript_Spectrier_2
# 178 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MtPyre_Exterior_EventScript_Spectrier_2
# 183 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MtPyre_Exterior_EventScript_Spectrier_3
# 183 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq MtPyre_Exterior_EventScript_Spectrier_3
MtPyre_Exterior_EventScript_Spectrier_1:
# 186 "data/maps/MtPyre_Exterior/scripts.pory"
	release
	end

MtPyre_Exterior_EventScript_Spectrier_2:
# 179 "data/maps/MtPyre_Exterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 180 "data/maps/MtPyre_Exterior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 181 "data/maps/MtPyre_Exterior/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto MtPyre_Exterior_EventScript_Spectrier_1

MtPyre_Exterior_EventScript_Spectrier_3:
# 184 "data/maps/MtPyre_Exterior/scripts.pory"
	goto Common_EventScript_NopReturn
	goto MtPyre_Exterior_EventScript_Spectrier_1


MtPyre_Exterior_EventScript_Marshadow::
# 191 "data/maps/MtPyre_Exterior/scripts.pory"
	lock
# 192 "data/maps/MtPyre_Exterior/scripts.pory"
	faceplayer
# 193 "data/maps/MtPyre_Exterior/scripts.pory"
	playmoncry SPECIES_MARSHADOW, CRY_MODE_ENCOUNTER
# 194 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmoncry
# 195 "data/maps/MtPyre_Exterior/scripts.pory"
	setwildbattle SPECIES_MARSHADOW, 75
# 196 "data/maps/MtPyre_Exterior/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 197 "data/maps/MtPyre_Exterior/scripts.pory"
	waitstate
# 198 "data/maps/MtPyre_Exterior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 199 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MtPyre_Exterior_EventScript_Marshadow_2
# 199 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MtPyre_Exterior_EventScript_Marshadow_2
# 204 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MtPyre_Exterior_EventScript_Marshadow_3
# 204 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq MtPyre_Exterior_EventScript_Marshadow_3
MtPyre_Exterior_EventScript_Marshadow_1:
# 207 "data/maps/MtPyre_Exterior/scripts.pory"
	release
	end

MtPyre_Exterior_EventScript_Marshadow_2:
# 200 "data/maps/MtPyre_Exterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 201 "data/maps/MtPyre_Exterior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 202 "data/maps/MtPyre_Exterior/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto MtPyre_Exterior_EventScript_Marshadow_1

MtPyre_Exterior_EventScript_Marshadow_3:
# 205 "data/maps/MtPyre_Exterior/scripts.pory"
	goto Common_EventScript_NopReturn
	goto MtPyre_Exterior_EventScript_Marshadow_1


MtPyre_Exterior_EventScript_ArticunoGalar::
# 212 "data/maps/MtPyre_Exterior/scripts.pory"
	lock
# 213 "data/maps/MtPyre_Exterior/scripts.pory"
	faceplayer
# 214 "data/maps/MtPyre_Exterior/scripts.pory"
	playmoncry SPECIES_ARTICUNO_GALAR, CRY_MODE_ENCOUNTER
# 215 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmoncry
# 216 "data/maps/MtPyre_Exterior/scripts.pory"
	setwildbattle SPECIES_ARTICUNO_GALAR, 75
# 217 "data/maps/MtPyre_Exterior/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 218 "data/maps/MtPyre_Exterior/scripts.pory"
	waitstate
# 219 "data/maps/MtPyre_Exterior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 220 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MtPyre_Exterior_EventScript_ArticunoGalar_2
# 220 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MtPyre_Exterior_EventScript_ArticunoGalar_2
# 225 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MtPyre_Exterior_EventScript_ArticunoGalar_3
# 225 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq MtPyre_Exterior_EventScript_ArticunoGalar_3
MtPyre_Exterior_EventScript_ArticunoGalar_1:
# 228 "data/maps/MtPyre_Exterior/scripts.pory"
	release
	end

MtPyre_Exterior_EventScript_ArticunoGalar_2:
# 221 "data/maps/MtPyre_Exterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 222 "data/maps/MtPyre_Exterior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 223 "data/maps/MtPyre_Exterior/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto MtPyre_Exterior_EventScript_ArticunoGalar_1

MtPyre_Exterior_EventScript_ArticunoGalar_3:
# 226 "data/maps/MtPyre_Exterior/scripts.pory"
	goto Common_EventScript_NopReturn
	goto MtPyre_Exterior_EventScript_ArticunoGalar_1


MtPyre_Exterior_Text_Emo1::
# 116 "data/maps/MtPyre_Exterior/scripts.pory"
	.string "JAMES: {PLAYER}?\n I wouldn't expect you to come here.\p Are you a fan of the occult?\n That's surprising.\p Well, since you're here…\n How about a battle?\p The energy in this place has caused\n QUILAVA to become even stronger.\p I don't think even YOU can\n withstand this strength!$"

MtPyre_Exterior_Text_Emo2::
# 129 "data/maps/MtPyre_Exterior/scripts.pory"
	.string "JAMES: Hm… You've become\n stronger than I thought.\p As expected of my adversary.\n Here, you can have this.$"

MtPyre_Exterior_Text_Emo3::
# 136 "data/maps/MtPyre_Exterior/scripts.pory"
	.string "JAMES: I'm heading to MOSSDEEP next\n after stopping by LILYCOVE.\p I heard the DEPT. STORE there sells\n rare items.\p See ya, {PLAYER}.$"

MtPyre_Exterior_Text_RivalDefeat::
# 144 "data/maps/MtPyre_Exterior/scripts.pory"
	.string "I'm in my abyss…$"
