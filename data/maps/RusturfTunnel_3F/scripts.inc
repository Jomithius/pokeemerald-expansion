RusturfTunnel_3F_MapScripts::
	.byte 0


RusturfTunnel_3F_EventScript_DefogMan::
# 4 "data/maps/RusturfTunnel_3F/scripts.pory"
	lock
# 5 "data/maps/RusturfTunnel_3F/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 6 "data/maps/RusturfTunnel_3F/scripts.pory"
	waitmovement 3
# 7 "data/maps/RusturfTunnel_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_DEFOG, RusturfTunnel_3F_EventScript_DefogMan_1
# 15 "data/maps/RusturfTunnel_3F/scripts.pory"
	msgbox RusturfTunnel_3F_EventScript_DefogMan_Text_1, MSGBOX_AUTOCLOSE
# 17 "data/maps/RusturfTunnel_3F/scripts.pory"
	waitmessage
# 18 "data/maps/RusturfTunnel_3F/scripts.pory"
	giveitem ITEM_TM_DEFOG
# 19 "data/maps/RusturfTunnel_3F/scripts.pory"
	waitmessage
# 20 "data/maps/RusturfTunnel_3F/scripts.pory"
	msgbox RusturfTunnel_3F_EventScript_DefogMan_Text_0, MSGBOX_NPC
# 22 "data/maps/RusturfTunnel_3F/scripts.pory"
	waitmessage
# 23 "data/maps/RusturfTunnel_3F/scripts.pory"
	setflag FLAG_RECEIVED_TM_DEFOG
# 24 "data/maps/RusturfTunnel_3F/scripts.pory"
	release
	end

RusturfTunnel_3F_EventScript_DefogMan_1:
# 8 "data/maps/RusturfTunnel_3F/scripts.pory"
	msgbox RusturfTunnel_3F_EventScript_DefogMan_Text_0, MSGBOX_NPC
# 10 "data/maps/RusturfTunnel_3F/scripts.pory"
	waitmessage
# 11 "data/maps/RusturfTunnel_3F/scripts.pory"
	release
	end


RusturfTunnel_3F_EventScript_Sarah::
# 30 "data/maps/RusturfTunnel_3F/scripts.pory"
	trainerbattle_single TRAINER_SARAH, RusturfTunnel_3F_Text_SarahIntro, RusturfTunnel_3F_Text_SarahDefeat
# 31 "data/maps/RusturfTunnel_3F/scripts.pory"
	msgbox RusturfTunnel_3F_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
	end


RusturfTunnel_3F_EventScript_Dawson::
# 48 "data/maps/RusturfTunnel_3F/scripts.pory"
	trainerbattle_single TRAINER_DAWSON, RusturfTunnel_3F_Text_DawsonIntro, RusturfTunnel_3F_Text_DawsonDefeat
# 49 "data/maps/RusturfTunnel_3F/scripts.pory"
	msgbox RusturfTunnel_3F_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 50 "data/maps/RusturfTunnel_3F/scripts.pory"
	waitmessage
	end


RusturfTunnel_3F_EventScript_Jerry::
# 67 "data/maps/RusturfTunnel_3F/scripts.pory"
	trainerbattle_single TRAINER_JERRY_1, RusturfTunnel_3F_Text_JerryIntro, RusturfTunnel_3F_Text_JerryDefeat
# 68 "data/maps/RusturfTunnel_3F/scripts.pory"
	msgbox RusturfTunnel_3F_Text_JerryPostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/RusturfTunnel_3F/scripts.pory"
	waitmessage
	end


RusturfTunnel_3F_EventScript_DefogMan_Text_0:
# 8 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "DEFOG doesn't only clear hazards, it\n also like, lowers the foe's evasion.$"

RusturfTunnel_3F_EventScript_DefogMan_Text_1:
# 15 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "Dude, if you gotta like, air a room\n out quick, you can use this.$"

RusturfTunnel_3F_Text_SarahIntro::
# 35 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "Do you smell that?$"

RusturfTunnel_3F_Text_SarahDefeat::
# 39 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "Oh, my goodness.$"

RusturfTunnel_3F_Text_SarahPostBattle::
# 43 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "Seriously, what's that smell?$"

RusturfTunnel_3F_Text_DawsonIntro::
# 54 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "Huh? I don't smell anything.$"

RusturfTunnel_3F_Text_DawsonDefeat::
# 58 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "I really don't smell anything!$"

RusturfTunnel_3F_Text_DawsonPostBattle::
# 62 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "Does it really smell bad?$"

RusturfTunnel_3F_Text_JerryIntro::
# 73 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "We learn all sorts of things at the\n TRAINER'S SCHOOL.$"

RusturfTunnel_3F_Text_JerryDefeat::
# 78 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "I slacked off in school…\n  That's why I lost.$"

RusturfTunnel_3F_Text_JerryPostBattle::
# 82 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "I should've studied more.$"
