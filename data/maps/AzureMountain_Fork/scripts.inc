AzureMountain_Fork_MapScripts::
	.byte 0


AzureMountain_Fork_EventScript_DracoMeteorTutor::
# 4 "data/maps/AzureMountain_Fork/scripts.pory"
	lock
# 5 "data/maps/AzureMountain_Fork/scripts.pory"
	faceplayer
# 6 "data/maps/AzureMountain_Fork/scripts.pory"
	goto_if_not_defeated TRAINER_DRAY, AzureMountain_Fork_EventScript_TrainerWiley
# 7 "data/maps/AzureMountain_Fork/scripts.pory"
	goto AzureMountain_Fork_EventScript_TeachDracoMeteor
	end


AzureMountain_Fork_EventScript_TrainerWiley::
# 12 "data/maps/AzureMountain_Fork/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 13 "data/maps/AzureMountain_Fork/scripts.pory"
	msgbox AzureMountain_Fork_EventScript_TrainerWiley_Text_0, MSGBOX_AUTOCLOSE
# 18 "data/maps/AzureMountain_Fork/scripts.pory"
	waitmessage
# 19 "data/maps/AzureMountain_Fork/scripts.pory"
	trainerbattle_no_intro TRAINER_DRAY, AzureMountain_Fork_EventScript_TrainerWiley_Text_1
# 20 "data/maps/AzureMountain_Fork/scripts.pory"
	goto AzureMountain_Fork_EventScript_TeachDracoMeteor
	end


AzureMountain_Fork_EventScript_TeachDracoMeteor::
# 25 "data/maps/AzureMountain_Fork/scripts.pory"
	msgbox AzureMountain_Fork_Text_DracoMeteorTeach, MSGBOX_YESNO
# 26 "data/maps/AzureMountain_Fork/scripts.pory"
	waitmessage
# 27 "data/maps/AzureMountain_Fork/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DracoMeteorDeclined
# 28 "data/maps/AzureMountain_Fork/scripts.pory"
	msgbox AzureMountain_Fork_Text_DracoMeteorWhichMon, MSGBOX_DEFAULT
# 29 "data/maps/AzureMountain_Fork/scripts.pory"
	setvar VAR_0x8005, MOVE_DRACO_METEOR
# 30 "data/maps/AzureMountain_Fork/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 31 "data/maps/AzureMountain_Fork/scripts.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_DracoMeteorDeclined
# 32 "data/maps/AzureMountain_Fork/scripts.pory"
	goto MoveTutor_EventScript_DracoMeteorTaught
	end


MoveTutor_EventScript_DracoMeteorDeclined::
# 37 "data/maps/AzureMountain_Fork/scripts.pory"
	lock
# 38 "data/maps/AzureMountain_Fork/scripts.pory"
	msgbox MoveTutor_EventScript_DracoMeteorDeclined_Text_0, MSGBOX_AUTOCLOSE
# 41 "data/maps/AzureMountain_Fork/scripts.pory"
	waitmessage
# 42 "data/maps/AzureMountain_Fork/scripts.pory"
	release
	end


MoveTutor_EventScript_DracoMeteorTaught::
# 47 "data/maps/AzureMountain_Fork/scripts.pory"
	lock
# 48 "data/maps/AzureMountain_Fork/scripts.pory"
	msgbox MoveTutor_EventScript_DracoMeteorTaught_Text_0, MSGBOX_AUTOCLOSE
# 51 "data/maps/AzureMountain_Fork/scripts.pory"
	waitmessage
# 52 "data/maps/AzureMountain_Fork/scripts.pory"
	release
	end


AzureMountain_Fork_EventScript_TrainerWiley_Text_0:
# 13 "data/maps/AzureMountain_Fork/scripts.pory"
	.string "Hm…\p To have climbed such a treacherous\n mountain… Well done.\p You may be able to learn my secret move.\n But first, I must test your strength!$"

AzureMountain_Fork_EventScript_TrainerWiley_Text_1:
# 19 "data/maps/AzureMountain_Fork/scripts.pory"
	.string "You have proven yourself well,\nyoung one.$"

MoveTutor_EventScript_DracoMeteorDeclined_Text_0:
# 38 "data/maps/AzureMountain_Fork/scripts.pory"
	.string "So you have chosen not to learn\n such a powerful technique…\p Come back if you change your mind.$"

MoveTutor_EventScript_DracoMeteorTaught_Text_0:
# 48 "data/maps/AzureMountain_Fork/scripts.pory"
	.string "You now are the wielder of an\n ultimate dragon technique.\p Use it wisely, young one.$"

AzureMountain_Fork_Text_DracoMeteorTeach::
# 56 "data/maps/AzureMountain_Fork/scripts.pory"
	.string "You have proven yourself worthy\n of the all-powerful dragon move,\l DRACO METEOR.\p Would you like to teach this technique\n to one of your dragons?$"

AzureMountain_Fork_Text_DracoMeteorWhichMon::
# 64 "data/maps/AzureMountain_Fork/scripts.pory"
	.string "Which dragon will learn this move?$"
