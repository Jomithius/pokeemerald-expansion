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
	msgbox MtPyre_Exterior_Text_Emo2, MSGBOX_DEFAULT
# 49 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmessage
# 50 "data/maps/MtPyre_Exterior/scripts.pory"
	giveitem ITEM_ASSAULT_VEST
# 51 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmessage
# 52 "data/maps/MtPyre_Exterior/scripts.pory"
	msgbox MtPyre_Exterior_Text_Emo3, MSGBOX_AUTOCLOSE
# 53 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmessage
# 54 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement 3, Common_Movement_WalkRight
# 55 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 3
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
	msgbox MtPyre_Exterior_Text_Emo2, MSGBOX_DEFAULT
# 90 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmessage
# 91 "data/maps/MtPyre_Exterior/scripts.pory"
	giveitem ITEM_ASSAULT_VEST
# 92 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmessage
# 93 "data/maps/MtPyre_Exterior/scripts.pory"
	msgbox MtPyre_Exterior_Text_Emo3, MSGBOX_AUTOCLOSE
# 94 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmessage
# 95 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement 3, Common_Movement_WalkRight
# 96 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 3
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


# 144 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_Movement_Emo1:
# 145 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 145 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 145 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 145 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
	step_end

# 148 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_Movement_Emo2:
# 149 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_down
# 150 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 150 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 150 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 150 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
	step_end

# 153 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_Movement_EmoLeave1:
# 154 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_down
# 155 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 155 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 155 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 155 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 155 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 155 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 155 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 155 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 155 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 156 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_up
# 156 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_up
# 156 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_up
	step_end

# 159 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_Movement_EmoLeave2:
# 160 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_up
# 161 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 161 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 161 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 161 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 161 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 161 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 161 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 161 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 161 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 162 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_up
# 162 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_up
	step_end

MtPyre_Exterior_EventScript_Spectrier::
# 166 "data/maps/MtPyre_Exterior/scripts.pory"
	lock
# 167 "data/maps/MtPyre_Exterior/scripts.pory"
	faceplayer
# 168 "data/maps/MtPyre_Exterior/scripts.pory"
	playmoncry SPECIES_SPECTRIER, CRY_MODE_ENCOUNTER
# 169 "data/maps/MtPyre_Exterior/scripts.pory"
	delay 40
# 170 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmoncry
# 171 "data/maps/MtPyre_Exterior/scripts.pory"
	setwildbattle SPECIES_SPECTRIER, 75
# 172 "data/maps/MtPyre_Exterior/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 173 "data/maps/MtPyre_Exterior/scripts.pory"
	waitstate
# 174 "data/maps/MtPyre_Exterior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 175 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MtPyre_Exterior_EventScript_Spectrier_2
# 175 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MtPyre_Exterior_EventScript_Spectrier_2
# 180 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MtPyre_Exterior_EventScript_Spectrier_3
# 180 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq MtPyre_Exterior_EventScript_Spectrier_3
MtPyre_Exterior_EventScript_Spectrier_1:
# 183 "data/maps/MtPyre_Exterior/scripts.pory"
	release
	end

MtPyre_Exterior_EventScript_Spectrier_2:
# 176 "data/maps/MtPyre_Exterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 177 "data/maps/MtPyre_Exterior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 178 "data/maps/MtPyre_Exterior/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto MtPyre_Exterior_EventScript_Spectrier_1

MtPyre_Exterior_EventScript_Spectrier_3:
# 181 "data/maps/MtPyre_Exterior/scripts.pory"
	goto Common_EventScript_NopReturn
	goto MtPyre_Exterior_EventScript_Spectrier_1


MtPyre_Exterior_EventScript_Marshadow::
# 188 "data/maps/MtPyre_Exterior/scripts.pory"
	lock
# 189 "data/maps/MtPyre_Exterior/scripts.pory"
	faceplayer
# 190 "data/maps/MtPyre_Exterior/scripts.pory"
	playmoncry SPECIES_MARSHADOW, CRY_MODE_ENCOUNTER
# 191 "data/maps/MtPyre_Exterior/scripts.pory"
	delay 40
# 192 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmoncry
# 193 "data/maps/MtPyre_Exterior/scripts.pory"
	setwildbattle SPECIES_MARSHADOW, 75
# 194 "data/maps/MtPyre_Exterior/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 195 "data/maps/MtPyre_Exterior/scripts.pory"
	waitstate
# 196 "data/maps/MtPyre_Exterior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 197 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MtPyre_Exterior_EventScript_Marshadow_2
# 197 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MtPyre_Exterior_EventScript_Marshadow_2
# 202 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MtPyre_Exterior_EventScript_Marshadow_3
# 202 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq MtPyre_Exterior_EventScript_Marshadow_3
MtPyre_Exterior_EventScript_Marshadow_1:
# 205 "data/maps/MtPyre_Exterior/scripts.pory"
	release
	end

MtPyre_Exterior_EventScript_Marshadow_2:
# 198 "data/maps/MtPyre_Exterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 199 "data/maps/MtPyre_Exterior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 200 "data/maps/MtPyre_Exterior/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto MtPyre_Exterior_EventScript_Marshadow_1

MtPyre_Exterior_EventScript_Marshadow_3:
# 203 "data/maps/MtPyre_Exterior/scripts.pory"
	goto Common_EventScript_NopReturn
	goto MtPyre_Exterior_EventScript_Marshadow_1


MtPyre_Exterior_EventScript_ArticunoGalar::
# 210 "data/maps/MtPyre_Exterior/scripts.pory"
	lock
# 211 "data/maps/MtPyre_Exterior/scripts.pory"
	faceplayer
# 212 "data/maps/MtPyre_Exterior/scripts.pory"
	playmoncry SPECIES_ARTICUNO_GALAR, CRY_MODE_ENCOUNTER
# 213 "data/maps/MtPyre_Exterior/scripts.pory"
	delay 40
# 214 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmoncry
# 215 "data/maps/MtPyre_Exterior/scripts.pory"
	setwildbattle SPECIES_ARTICUNO_GALAR, 75
# 216 "data/maps/MtPyre_Exterior/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 217 "data/maps/MtPyre_Exterior/scripts.pory"
	waitstate
# 218 "data/maps/MtPyre_Exterior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 219 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MtPyre_Exterior_EventScript_ArticunoGalar_2
# 219 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MtPyre_Exterior_EventScript_ArticunoGalar_2
# 224 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MtPyre_Exterior_EventScript_ArticunoGalar_3
# 224 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq MtPyre_Exterior_EventScript_ArticunoGalar_3
MtPyre_Exterior_EventScript_ArticunoGalar_1:
# 227 "data/maps/MtPyre_Exterior/scripts.pory"
	release
	end

MtPyre_Exterior_EventScript_ArticunoGalar_2:
# 220 "data/maps/MtPyre_Exterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 221 "data/maps/MtPyre_Exterior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 222 "data/maps/MtPyre_Exterior/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto MtPyre_Exterior_EventScript_ArticunoGalar_1

MtPyre_Exterior_EventScript_ArticunoGalar_3:
# 225 "data/maps/MtPyre_Exterior/scripts.pory"
	goto Common_EventScript_NopReturn
	goto MtPyre_Exterior_EventScript_ArticunoGalar_1


MtPyre_Exterior_Text_Emo1::
# 112 "data/maps/MtPyre_Exterior/scripts.pory"
	.string "JAMES: {PLAYER}?\n I wouldn't expect you to come here.\p Are you a fan of the occult?\n That's surprising.\p Well, since you're here…\n How about a battle?\p The energy in this place has caused\n QUILAVA to become even stronger.\p I don't think even YOU can\n withstand this strength!$"

MtPyre_Exterior_Text_Emo2::
# 125 "data/maps/MtPyre_Exterior/scripts.pory"
	.string "JAMES: Hm… You've become\n stronger than I thought.\p As expected of my adversary.\n Here, you can have this.$"

MtPyre_Exterior_Text_Emo3::
# 132 "data/maps/MtPyre_Exterior/scripts.pory"
	.string "I'm heading to MOSSDEEP next\n after stopping by LILYCOVE.\p I heard the DEPT. STORE there sells\n rare items.\p See ya, {PLAYER}.$"

MtPyre_Exterior_Text_RivalDefeat::
# 140 "data/maps/MtPyre_Exterior/scripts.pory"
	.string "I'm in my abyss…$"
