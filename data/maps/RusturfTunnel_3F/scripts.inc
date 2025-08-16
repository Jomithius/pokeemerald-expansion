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
	goto_if_set FLAG_RECEIVED_TM_DEFOG, RusturfTunnel_3F_EventScript_DefogMan_2
# 14 "data/maps/RusturfTunnel_3F/scripts.pory"
	msgbox RusturfTunnel_3F_EventScript_DefogMan_Text_1, MSGBOX_AUTOCLOSE
# 16 "data/maps/RusturfTunnel_3F/scripts.pory"
	waitmessage
# 17 "data/maps/RusturfTunnel_3F/scripts.pory"
	giveitem ITEM_TM_DEFOG
# 18 "data/maps/RusturfTunnel_3F/scripts.pory"
	waitmessage
# 19 "data/maps/RusturfTunnel_3F/scripts.pory"
	msgbox RusturfTunnel_3F_EventScript_DefogMan_Text_2, MSGBOX_NPC
# 21 "data/maps/RusturfTunnel_3F/scripts.pory"
	waitmessage
# 22 "data/maps/RusturfTunnel_3F/scripts.pory"
	setflag FLAG_RECEIVED_TM_DEFOG
RusturfTunnel_3F_EventScript_DefogMan_1:
# 24 "data/maps/RusturfTunnel_3F/scripts.pory"
	release
	end

RusturfTunnel_3F_EventScript_DefogMan_2:
# 8 "data/maps/RusturfTunnel_3F/scripts.pory"
	msgbox RusturfTunnel_3F_EventScript_DefogMan_Text_0, MSGBOX_NPC
# 11 "data/maps/RusturfTunnel_3F/scripts.pory"
	waitmessage
	goto RusturfTunnel_3F_EventScript_DefogMan_1


RusturfTunnel_3F_EventScript_Sarah::
# 29 "data/maps/RusturfTunnel_3F/scripts.pory"
	trainerbattle_single TRAINER_SARAH, RusturfTunnel_3F_Text_SarahIntro, RusturfTunnel_3F_Text_SarahDefeat
# 30 "data/maps/RusturfTunnel_3F/scripts.pory"
	msgbox RusturfTunnel_3F_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
	end


RusturfTunnel_3F_EventScript_Dawson::
# 47 "data/maps/RusturfTunnel_3F/scripts.pory"
	trainerbattle_single TRAINER_DAWSON, RusturfTunnel_3F_Text_DawsonIntro, RusturfTunnel_3F_Text_DawsonDefeat
# 48 "data/maps/RusturfTunnel_3F/scripts.pory"
	msgbox RusturfTunnel_3F_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/RusturfTunnel_3F/scripts.pory"
	waitmessage
	end


RusturfTunnel_3F_EventScript_Jerry::
# 66 "data/maps/RusturfTunnel_3F/scripts.pory"
	trainerbattle_single TRAINER_JERRY, RusturfTunnel_3F_Text_JerryIntro, RusturfTunnel_3F_Text_JerryDefeat
# 67 "data/maps/RusturfTunnel_3F/scripts.pory"
	msgbox RusturfTunnel_3F_Text_JerryPostBattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/RusturfTunnel_3F/scripts.pory"
	waitmessage
	end


RusturfTunnel_3F_EventScript_DefogMan_Text_0:
# 8 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "Huh?\n “Why is it still foggy in here?”\p Like, this isn't fog, dude!$"

RusturfTunnel_3F_EventScript_DefogMan_Text_1:
# 14 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "Dude, if you gotta like, air a room\n out quick, you can use this.$"

RusturfTunnel_3F_EventScript_DefogMan_Text_2:
# 19 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "DEFOG doesn't only clear hazards, it\n also like, lowers the foe's evasion.$"

RusturfTunnel_3F_Text_SarahIntro::
# 34 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "Do you smell that?$"

RusturfTunnel_3F_Text_SarahDefeat::
# 38 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "Oh, my goodness.$"

RusturfTunnel_3F_Text_SarahPostBattle::
# 42 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "Seriously, what's that smell?$"

RusturfTunnel_3F_Text_DawsonIntro::
# 53 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "Huh? I don't smell anything.$"

RusturfTunnel_3F_Text_DawsonDefeat::
# 57 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "I really don't smell anything!$"

RusturfTunnel_3F_Text_DawsonPostBattle::
# 61 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "Does it really smell bad?$"

RusturfTunnel_3F_Text_JerryIntro::
# 72 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "We learn all sorts of things at the\n TRAINER'S SCHOOL.$"

RusturfTunnel_3F_Text_JerryDefeat::
# 77 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "I slacked off in school…\n  That's why I lost.$"

RusturfTunnel_3F_Text_JerryPostBattle::
# 81 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "I should've studied more.$"
