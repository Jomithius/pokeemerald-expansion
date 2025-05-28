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
	applymovement 3, Common_Movement_FaceLeft
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
	fadedefaultbgm
# 62 "data/maps/MtPyre_Exterior/scripts.pory"
	setvar VAR_MISA_STATE, 7
# 63 "data/maps/MtPyre_Exterior/scripts.pory"
	setflag FLAG_HIDE_EMO_MT_PYRE
# 64 "data/maps/MtPyre_Exterior/scripts.pory"
	releaseall
	end


MtPyre_Exterior_EventScript_Emo2::
# 69 "data/maps/MtPyre_Exterior/scripts.pory"
	lockall
# 70 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 71 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 3
# 72 "data/maps/MtPyre_Exterior/scripts.pory"
	delay 20
# 73 "data/maps/MtPyre_Exterior/scripts.pory"
	playse SE_PIN
# 74 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 75 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 3
# 76 "data/maps/MtPyre_Exterior/scripts.pory"
	delay 20
# 77 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement 3, MtPyre_Exterior_Movement_Emo2
# 78 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 3
# 79 "data/maps/MtPyre_Exterior/scripts.pory"
	playbgm MUS_PYRITE_THEME, TRUE
# 80 "data/maps/MtPyre_Exterior/scripts.pory"
	delay 10
# 81 "data/maps/MtPyre_Exterior/scripts.pory"
	msgbox MtPyre_Exterior_Text_Emo1, MSGBOX_AUTOCLOSE
# 82 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmessage
# 83 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement 3, Common_Movement_WalkLeft
# 84 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 3
# 85 "data/maps/MtPyre_Exterior/scripts.pory"
	trainerbattle_no_intro TRAINER_JOMITHIUS_3, MtPyre_Exterior_Text_RivalDefeat
# 86 "data/maps/MtPyre_Exterior/scripts.pory"
	msgbox MtPyre_Exterior_Text_Emo2, MSGBOX_AUTOCLOSE
# 87 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmessage
# 88 "data/maps/MtPyre_Exterior/scripts.pory"
	giveitem ITEM_ASSAULT_VEST
# 89 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmessage
# 90 "data/maps/MtPyre_Exterior/scripts.pory"
	applymovement 3, Common_Movement_WalkRight
# 91 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmovement 3
# 92 "data/maps/MtPyre_Exterior/scripts.pory"
	msgbox MtPyre_Exterior_Text_Emo3, MSGBOX_AUTOCLOSE
# 93 "data/maps/MtPyre_Exterior/scripts.pory"
	waitmessage
# 94 "data/maps/MtPyre_Exterior/scripts.pory"
	setfieldeffectargument 0, 1
# 95 "data/maps/MtPyre_Exterior/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 96 "data/maps/MtPyre_Exterior/scripts.pory"
	delay 15
# 97 "data/maps/MtPyre_Exterior/scripts.pory"
	removeobject 3
# 98 "data/maps/MtPyre_Exterior/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 99 "data/maps/MtPyre_Exterior/scripts.pory"
	fadedefaultbgm
# 100 "data/maps/MtPyre_Exterior/scripts.pory"
	setvar VAR_MISA_STATE, 7
# 101 "data/maps/MtPyre_Exterior/scripts.pory"
	setflag FLAG_HIDE_EMO_MT_PYRE
# 102 "data/maps/MtPyre_Exterior/scripts.pory"
	clearflag FLAG_HIDE_EMO_LILYCOVE
# 103 "data/maps/MtPyre_Exterior/scripts.pory"
	releaseall
	end


# 138 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_Movement_Emo1:
# 139 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 139 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 139 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 139 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
	step_end

# 142 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_Movement_Emo2:
# 143 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_down
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
MtPyre_Exterior_Movement_EmoLeave1:
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
# 149 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 149 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 149 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 149 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 149 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_left
# 150 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_up
# 150 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_up
# 150 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_up
	step_end

# 153 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_Movement_EmoLeave2:
# 154 "data/maps/MtPyre_Exterior/scripts.pory"
	walk_up
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
	step_end

MtPyre_Exterior_Text_Emo1::
# 107 "data/maps/MtPyre_Exterior/scripts.pory"
	.string "JAMES: {PLAYER}?\n I wouldn't expect you to come here.\p Are you a fan of the occult?\n That's surprising.\p The dark energies in this place\n have caused my power to go even\l further beyond...\p I don't think even you can\n withstand this strength!$"

MtPyre_Exterior_Text_Emo2::
# 119 "data/maps/MtPyre_Exterior/scripts.pory"
	.string "JAMES: Hm...\n You've become stronger than I thought.\p As expected of my adversary.\n Here, you can have this.$"

MtPyre_Exterior_Text_Emo3::
# 126 "data/maps/MtPyre_Exterior/scripts.pory"
	.string "I'm heading to MOSSDEEP next\n after stopping by LILYCOVE.\p I heard the DEPT. STORE sells\n rare items.\p See ya, {PLAYER}.$"

MtPyre_Exterior_Text_RivalDefeat::
# 134 "data/maps/MtPyre_Exterior/scripts.pory"
	.string "I'm in my abyss...$"
