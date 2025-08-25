RusturfTunnel_3F_MapScripts::
	.byte 0


RusturfTunnel_3F_EventScript_DefogMan::
# 4 "data/maps/RusturfTunnel_3F/scripts.pory"
	lock
# 5 "data/maps/RusturfTunnel_3F/scripts.pory"
	faceplayer
# 6 "data/maps/RusturfTunnel_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_DEFOG, RusturfTunnel_3F_EventScript_DefogMan_2
# 13 "data/maps/RusturfTunnel_3F/scripts.pory"
	msgbox RusturfTunnel_3F_EventScript_DefogMan_Text_1, MSGBOX_DEFAULT
# 15 "data/maps/RusturfTunnel_3F/scripts.pory"
	waitmessage
# 16 "data/maps/RusturfTunnel_3F/scripts.pory"
	giveitem ITEM_TM_DEFOG
# 17 "data/maps/RusturfTunnel_3F/scripts.pory"
	waitmessage
# 18 "data/maps/RusturfTunnel_3F/scripts.pory"
	msgbox RusturfTunnel_3F_EventScript_DefogMan_Text_2, MSGBOX_NPC
# 20 "data/maps/RusturfTunnel_3F/scripts.pory"
	waitmessage
# 21 "data/maps/RusturfTunnel_3F/scripts.pory"
	setflag FLAG_RECEIVED_TM_DEFOG
RusturfTunnel_3F_EventScript_DefogMan_1:
# 23 "data/maps/RusturfTunnel_3F/scripts.pory"
	release
	end

RusturfTunnel_3F_EventScript_DefogMan_2:
# 7 "data/maps/RusturfTunnel_3F/scripts.pory"
	msgbox RusturfTunnel_3F_EventScript_DefogMan_Text_0, MSGBOX_NPC
# 10 "data/maps/RusturfTunnel_3F/scripts.pory"
	waitmessage
	goto RusturfTunnel_3F_EventScript_DefogMan_1


RusturfTunnel_3F_EventScript_Sarah::
# 28 "data/maps/RusturfTunnel_3F/scripts.pory"
	trainerbattle_single TRAINER_SARAH, RusturfTunnel_3F_Text_SarahIntro, RusturfTunnel_3F_Text_SarahDefeat
# 29 "data/maps/RusturfTunnel_3F/scripts.pory"
	msgbox RusturfTunnel_3F_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
	end


RusturfTunnel_3F_EventScript_Dawson::
# 46 "data/maps/RusturfTunnel_3F/scripts.pory"
	trainerbattle_single TRAINER_DAWSON, RusturfTunnel_3F_Text_DawsonIntro, RusturfTunnel_3F_Text_DawsonDefeat
# 47 "data/maps/RusturfTunnel_3F/scripts.pory"
	msgbox RusturfTunnel_3F_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 48 "data/maps/RusturfTunnel_3F/scripts.pory"
	waitmessage
	end


RusturfTunnel_3F_EventScript_Jerry::
# 65 "data/maps/RusturfTunnel_3F/scripts.pory"
	trainerbattle_single TRAINER_JERRY, RusturfTunnel_3F_Text_JerryIntro, RusturfTunnel_3F_Text_JerryDefeat
# 66 "data/maps/RusturfTunnel_3F/scripts.pory"
	msgbox RusturfTunnel_3F_Text_JerryPostBattle, MSGBOX_AUTOCLOSE
# 67 "data/maps/RusturfTunnel_3F/scripts.pory"
	waitmessage
	end


RusturfTunnel_3F_EventScript_DefogMan_Text_0:
# 7 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "Huh?\n “Why is it still foggy in here?”\p Like, this isn't fog, dude!$"

RusturfTunnel_3F_EventScript_DefogMan_Text_1:
# 13 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "Dude, if you gotta like, air a room\n out quick, you can use this.$"

RusturfTunnel_3F_EventScript_DefogMan_Text_2:
# 18 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "DEFOG doesn't only clear hazards, it\n also like, lowers the foe's evasion.$"

RusturfTunnel_3F_Text_SarahIntro::
# 33 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "Do you smell that?$"

RusturfTunnel_3F_Text_SarahDefeat::
# 37 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "Oh, my goodness.$"

RusturfTunnel_3F_Text_SarahPostBattle::
# 41 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "Seriously, what's that smell?$"

RusturfTunnel_3F_Text_DawsonIntro::
# 52 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "Huh? I don't smell anything.$"

RusturfTunnel_3F_Text_DawsonDefeat::
# 56 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "I really don't smell anything!$"

RusturfTunnel_3F_Text_DawsonPostBattle::
# 60 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "Does it really smell bad?$"

RusturfTunnel_3F_Text_JerryIntro::
# 71 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "We learn all sorts of things at the\n TRAINER'S SCHOOL.$"

RusturfTunnel_3F_Text_JerryDefeat::
# 76 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "I slacked off in school…\n  That's why I lost.$"

RusturfTunnel_3F_Text_JerryPostBattle::
# 80 "data/maps/RusturfTunnel_3F/scripts.pory"
	.string "I should've studied more.$"
