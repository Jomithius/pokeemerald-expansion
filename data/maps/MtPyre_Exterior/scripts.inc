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
	delay 20
# 39 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement 3, MtPyre_Exterior_Movement_Emo1
# 40 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 3
# 41 "data/maps/MtPyre_Exterior/scripts.pory"
	playbgm MUS_PYRITE_THEME, TRUE
# 42 "data/maps/MtPyre_Exterior/scripts.pory"
	delay 10
# 43 "data/maps/MtPyre_Exterior/scripts.pory"
	msgbox MtPyre_Exterior_Text_Emo1, MSGBOX_AUTOCLOSE
# 44 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmessage
# 45 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement 3, Common_Movement_WalkLeft
# 46 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 3
# 47 "data/maps/MtPyre_Exterior/scripts.pory"
	trainerbattle_no_intro TRAINER_JOMITHIUS_3, MtPyre_Exterior_Text_RivalDefeat
# 48 "data/maps/MtPyre_Exterior/scripts.pory"
	msgbox MtPyre_Exterior_Text_Emo2, MSGBOX_AUTOCLOSE
# 49 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmessage
# 50 "data/maps/MtPyre_Exterior/scripts.pory"
	giveitem ITEM_ASSAULT_VEST
# 51 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmessage
# 52 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement 3, Common_Movement_WalkRight
# 53 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 3
# 54 "data/maps/MtPyre_Exterior/scripts.pory"
	msgbox MtPyre_Exterior_Text_Emo3, MSGBOX_AUTOCLOSE
# 55 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmessage
# 56 "data/maps/MtPyre_Exterior/scripts.pory"
	setfieldeffectargument 0, 1
# 57 "data/maps/MtPyre_Exterior/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 58 "data/maps/MtPyre_Exterior/scripts.pory"
	delay 15
# 59 "data/maps/MtPyre_Exterior/scripts.pory"
	removeobject 3
# 60 "data/maps/MtPyre_Exterior/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 61 "data/maps/MtPyre_Exterior/scripts.pory"
	savebgm MUS_DUMMY
# 62 "data/maps/MtPyre_Exterior/scripts.pory"
	fadedefaultbgm
# 63 "data/maps/MtPyre_Exterior/scripts.pory"
	setvar VAR_MISA_STATE, 7
# 64 "data/maps/MtPyre_Exterior/scripts.pory"
	setflag FLAG_HIDE_EMO_MT_PYRE
# 65 "data/maps/MtPyre_Exterior/scripts.pory"
	clearflag FLAG_HIDE_EMO_LILYCOVE
# 66 "data/maps/MtPyre_Exterior/scripts.pory"
	clearflag FLAG_HIDE_MISA_LILYCOVE_DEPT_5F
# 67 "data/maps/MtPyre_Exterior/scripts.pory"
	releaseall
	end


MtPyre_Exterior_EventScript_Emo2::
# 72 "data/maps/MtPyre_Exterior/scripts.pory"
	lockall
# 73 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 74 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 3
# 75 "data/maps/MtPyre_Exterior/scripts.pory"
	delay 20
# 76 "data/maps/MtPyre_Exterior/scripts.pory"
	playse SE_PIN
# 77 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 78 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 3
# 79 "data/maps/MtPyre_Exterior/scripts.pory"
	delay 20
# 80 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement 3, MtPyre_Exterior_Movement_Emo2
# 81 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 3
# 82 "data/maps/MtPyre_Exterior/scripts.pory"
	playbgm MUS_PYRITE_THEME, TRUE
# 83 "data/maps/MtPyre_Exterior/scripts.pory"
	delay 10
# 84 "data/maps/MtPyre_Exterior/scripts.pory"
	msgbox MtPyre_Exterior_Text_Emo1, MSGBOX_AUTOCLOSE
# 85 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmessage
# 86 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement 3, Common_Movement_WalkLeft
# 87 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 3
# 88 "data/maps/MtPyre_Exterior/scripts.pory"
	trainerbattle_no_intro TRAINER_JOMITHIUS_3, MtPyre_Exterior_Text_RivalDefeat
# 89 "data/maps/MtPyre_Exterior/scripts.pory"
	msgbox MtPyre_Exterior_Text_Emo2, MSGBOX_AUTOCLOSE
# 90 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmessage
# 91 "data/maps/MtPyre_Exterior/scripts.pory"
	giveitem ITEM_ASSAULT_VEST
# 92 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmessage
# 93 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement 3, Common_Movement_WalkRight
# 94 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 3
# 95 "data/maps/MtPyre_Exterior/scripts.pory"
	msgbox MtPyre_Exterior_Text_Emo3, MSGBOX_AUTOCLOSE
# 96 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmessage
# 97 "data/maps/MtPyre_Exterior/scripts.pory"
	setfieldeffectargument 0, 1
# 98 "data/maps/MtPyre_Exterior/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 99 "data/maps/MtPyre_Exterior/scripts.pory"
	delay 15
# 100 "data/maps/MtPyre_Exterior/scripts.pory"
	removeobject 3
# 101 "data/maps/MtPyre_Exterior/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 102 "data/maps/MtPyre_Exterior/scripts.pory"
	savebgm MUS_DUMMY
# 103 "data/maps/MtPyre_Exterior/scripts.pory"
	fadedefaultbgm
# 104 "data/maps/MtPyre_Exterior/scripts.pory"
	setvar VAR_MISA_STATE, 7
# 105 "data/maps/MtPyre_Exterior/scripts.pory"
	setflag FLAG_HIDE_EMO_MT_PYRE
# 106 "data/maps/MtPyre_Exterior/scripts.pory"
	clearflag FLAG_HIDE_EMO_LILYCOVE
# 107 "data/maps/MtPyre_Exterior/scripts.pory"
	clearflag FLAG_HIDE_MISA_LILYCOVE_DEPT_5F
# 108 "data/maps/MtPyre_Exterior/scripts.pory"
	releaseall
	end


# 143 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_Movement_Emo1:
# 144 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 144 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 144 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 144 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
	step_end

# 147 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_Movement_Emo2:
# 148 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_down
# 149 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 149 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 149 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 149 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
	step_end

# 152 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_Movement_EmoLeave1:
# 153 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_down
# 154 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 154 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 154 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 154 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 154 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 154 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 154 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 154 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 154 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 155 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_up
# 155 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_up
# 155 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_up
	step_end

# 158 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_Movement_EmoLeave2:
# 159 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_up
# 160 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 160 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 160 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 160 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 160 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 160 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 160 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 160 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 160 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 161 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_up
# 161 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_up
	step_end

MtPyre_Exterior_EventScript_Spectrier::
# 165 "data/maps/MtPyre_Exterior/scripts.pory"
	lock
# 166 "data/maps/MtPyre_Exterior/scripts.pory"
	faceplayer
# 167 "data/maps/MtPyre_Exterior/scripts.pory"
	playmoncry SPECIES_SPECTRIER, CRY_MODE_ENCOUNTER
# 168 "data/maps/MtPyre_Exterior/scripts.pory"
	delay 40
# 169 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmoncry
# 170 "data/maps/MtPyre_Exterior/scripts.pory"
	setwildbattle SPECIES_SPECTRIER, 75
# 171 "data/maps/MtPyre_Exterior/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 172 "data/maps/MtPyre_Exterior/scripts.pory"
	waitstate
# 173 "data/maps/MtPyre_Exterior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 174 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MtPyre_Exterior_EventScript_Spectrier_2
# 174 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MtPyre_Exterior_EventScript_Spectrier_2
# 179 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MtPyre_Exterior_EventScript_Spectrier_3
# 179 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq MtPyre_Exterior_EventScript_Spectrier_3
MtPyre_Exterior_EventScript_Spectrier_1:
# 182 "data/maps/MtPyre_Exterior/scripts.pory"
	release
	end

MtPyre_Exterior_EventScript_Spectrier_2:
# 175 "data/maps/MtPyre_Exterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 176 "data/maps/MtPyre_Exterior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 177 "data/maps/MtPyre_Exterior/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto MtPyre_Exterior_EventScript_Spectrier_1

MtPyre_Exterior_EventScript_Spectrier_3:
# 180 "data/maps/MtPyre_Exterior/scripts.pory"
	goto Common_EventScript_NopReturn
	goto MtPyre_Exterior_EventScript_Spectrier_1


MtPyre_Exterior_EventScript_Marshadow::
# 187 "data/maps/MtPyre_Exterior/scripts.pory"
	lock
# 188 "data/maps/MtPyre_Exterior/scripts.pory"
	faceplayer
# 189 "data/maps/MtPyre_Exterior/scripts.pory"
	playmoncry SPECIES_MARSHADOW, CRY_MODE_ENCOUNTER
# 190 "data/maps/MtPyre_Exterior/scripts.pory"
	delay 40
# 191 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmoncry
# 192 "data/maps/MtPyre_Exterior/scripts.pory"
	setwildbattle SPECIES_MARSHADOW, 75
# 193 "data/maps/MtPyre_Exterior/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 194 "data/maps/MtPyre_Exterior/scripts.pory"
	waitstate
# 195 "data/maps/MtPyre_Exterior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 196 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MtPyre_Exterior_EventScript_Marshadow_2
# 196 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MtPyre_Exterior_EventScript_Marshadow_2
# 201 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MtPyre_Exterior_EventScript_Marshadow_3
# 201 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq MtPyre_Exterior_EventScript_Marshadow_3
MtPyre_Exterior_EventScript_Marshadow_1:
# 204 "data/maps/MtPyre_Exterior/scripts.pory"
	release
	end

MtPyre_Exterior_EventScript_Marshadow_2:
# 197 "data/maps/MtPyre_Exterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 198 "data/maps/MtPyre_Exterior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 199 "data/maps/MtPyre_Exterior/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto MtPyre_Exterior_EventScript_Marshadow_1

MtPyre_Exterior_EventScript_Marshadow_3:
# 202 "data/maps/MtPyre_Exterior/scripts.pory"
	goto Common_EventScript_NopReturn
	goto MtPyre_Exterior_EventScript_Marshadow_1


MtPyre_Exterior_EventScript_ArticunoGalar::
# 209 "data/maps/MtPyre_Exterior/scripts.pory"
	lock
# 210 "data/maps/MtPyre_Exterior/scripts.pory"
	faceplayer
# 211 "data/maps/MtPyre_Exterior/scripts.pory"
	playmoncry SPECIES_ARTICUNO_GALAR, CRY_MODE_ENCOUNTER
# 212 "data/maps/MtPyre_Exterior/scripts.pory"
	delay 40
# 213 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmoncry
# 214 "data/maps/MtPyre_Exterior/scripts.pory"
	setwildbattle SPECIES_ARTICUNO_GALAR, 75
# 215 "data/maps/MtPyre_Exterior/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 216 "data/maps/MtPyre_Exterior/scripts.pory"
	waitstate
# 217 "data/maps/MtPyre_Exterior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 218 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MtPyre_Exterior_EventScript_ArticunoGalar_2
# 218 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MtPyre_Exterior_EventScript_ArticunoGalar_2
# 223 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MtPyre_Exterior_EventScript_ArticunoGalar_3
# 223 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq MtPyre_Exterior_EventScript_ArticunoGalar_3
MtPyre_Exterior_EventScript_ArticunoGalar_1:
# 226 "data/maps/MtPyre_Exterior/scripts.pory"
	release
	end

MtPyre_Exterior_EventScript_ArticunoGalar_2:
# 219 "data/maps/MtPyre_Exterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 220 "data/maps/MtPyre_Exterior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 221 "data/maps/MtPyre_Exterior/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto MtPyre_Exterior_EventScript_ArticunoGalar_1

MtPyre_Exterior_EventScript_ArticunoGalar_3:
# 224 "data/maps/MtPyre_Exterior/scripts.pory"
	goto Common_EventScript_NopReturn
	goto MtPyre_Exterior_EventScript_ArticunoGalar_1


MtPyre_Exterior_Text_Emo1::
# 112 "data/maps/MtPyre_Exterior/scripts.pory"
	.string "JAMES: {PLAYER}?\n I wouldn't expect you to come here.\p Are you a fan of the occult?\n That's surprising.\p The dark energies in this place\n have caused my power to go even\l further beyond…\p I don't think even you can\n withstand this strength!$"

MtPyre_Exterior_Text_Emo2::
# 124 "data/maps/MtPyre_Exterior/scripts.pory"
	.string "JAMES: Hm…\n You've become stronger than I thought.\p As expected of my adversary.\n Here, you can have this.$"

MtPyre_Exterior_Text_Emo3::
# 131 "data/maps/MtPyre_Exterior/scripts.pory"
	.string "I'm heading to MOSSDEEP next\n after stopping by LILYCOVE.\p I heard the DEPT. STORE there sells\n rare items.\p See ya, {PLAYER}.$"

MtPyre_Exterior_Text_RivalDefeat::
# 139 "data/maps/MtPyre_Exterior/scripts.pory"
	.string "I'm in my abyss…$"
