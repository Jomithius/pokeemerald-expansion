AzureMountain_Peak_MapScripts::
# 2 "data/maps/AzureMountain_Peak/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AzureMountain_Peak_OnResume
	.byte 0


AzureMountain_Peak_OnResume::
# 6 "data/maps/AzureMountain_Peak/scripts.pory"
	call_if_defeated TRAINER_RED, AzureMountain_Peak_RemovePikachu
	end


AzureMountain_Peak_RemovePikachu::
# 11 "data/maps/AzureMountain_Peak/scripts.pory"
	removeobject 2
	return


AzureMountain_Peak_EventScript_Red::
# 16 "data/maps/AzureMountain_Peak/scripts.pory"
	lockall
# 17 "data/maps/AzureMountain_Peak/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 18 "data/maps/AzureMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp3
# 19 "data/maps/AzureMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_WalkUp3
# 20 "data/maps/AzureMountain_Peak/scripts.pory"
	waitmovement 0
# 21 "data/maps/AzureMountain_Peak/scripts.pory"
	delay 30
# 22 "data/maps/AzureMountain_Peak/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 23 "data/maps/AzureMountain_Peak/scripts.pory"
	delay 8
# 24 "data/maps/AzureMountain_Peak/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 25 "data/maps/AzureMountain_Peak/scripts.pory"
	waitmovement 0
# 26 "data/maps/AzureMountain_Peak/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 27 "data/maps/AzureMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_WalkLeft
# 28 "data/maps/AzureMountain_Peak/scripts.pory"
	waitmovement 0
# 29 "data/maps/AzureMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_WalkUp
# 30 "data/maps/AzureMountain_Peak/scripts.pory"
	waitmovement 0
# 31 "data/maps/AzureMountain_Peak/scripts.pory"
	msgbox AzureMountain_Peak_Text_Red, MSGBOX_AUTOCLOSE
# 32 "data/maps/AzureMountain_Peak/scripts.pory"
	waitmessage
# 33 "data/maps/AzureMountain_Peak/scripts.pory"
	trainerbattle_no_intro TRAINER_RED, AzureMountain_Peak_Text_Red
# 34 "data/maps/AzureMountain_Peak/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 35 "data/maps/AzureMountain_Peak/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 36 "data/maps/AzureMountain_Peak/scripts.pory"
	waitmovement 1
# 37 "data/maps/AzureMountain_Peak/scripts.pory"
	msgbox AzureMountain_Peak_Text_Red, MSGBOX_AUTOCLOSE
# 38 "data/maps/AzureMountain_Peak/scripts.pory"
	waitmessage
# 39 "data/maps/AzureMountain_Peak/scripts.pory"
	setfieldeffectargument 0, 1
# 40 "data/maps/AzureMountain_Peak/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 41 "data/maps/AzureMountain_Peak/scripts.pory"
	delay 15
# 42 "data/maps/AzureMountain_Peak/scripts.pory"
	removeobject 1
# 43 "data/maps/AzureMountain_Peak/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 44 "data/maps/AzureMountain_Peak/scripts.pory"
	setflag FLAG_SYS_DEFEATED_RED
# 45 "data/maps/AzureMountain_Peak/scripts.pory"
	setflag FLAG_HIDE_RED_AZURE_MOUNTAIN
# 46 "data/maps/AzureMountain_Peak/scripts.pory"
	setvar VAR_AZURE_MOUNTAIN_PEAK_STATE, 1
# 47 "data/maps/AzureMountain_Peak/scripts.pory"
	setvar VAR_JAMES_AREA_ZERO_CALL_STEP_COUNTER, 0
# 48 "data/maps/AzureMountain_Peak/scripts.pory"
	releaseall
	end


# 56 "data/maps/AzureMountain_Peak/scripts.pory"
AzureMountain_Peak_RedLeaves:
# 57 "data/maps/AzureMountain_Peak/scripts.pory"
	jump_up
	step_end

AzureMountain_Peak_Text_Red::
# 52 "data/maps/AzureMountain_Peak/scripts.pory"
	.string "…$"
