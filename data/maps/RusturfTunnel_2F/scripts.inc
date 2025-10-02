RusturfTunnel_2F_MapScripts::
	.byte 0


RusturfTunnel_2F_EventScript_Ivan::
# 4 "data/maps/RusturfTunnel_2F/scripts.pory"
	trainerbattle_single TRAINER_IVAN, RusturfTunnel_2F_Text_IvanIntro, Route104_Text_IvanDefeat
# 5 "data/maps/RusturfTunnel_2F/scripts.pory"
	msgbox RusturfTunnel_2F_Text_IvanPostBattle, MSGBOX_NPC
	end


RusturfTunnel_2F_EventScript_Athena::
# 18 "data/maps/RusturfTunnel_2F/scripts.pory"
	trainerbattle_single TRAINER_ATHENA, RusturfTunnel_2F_Text_AthenaIntro, RusturfTunnel_2F_Text_AthenaDefeat
# 19 "data/maps/RusturfTunnel_2F/scripts.pory"
	msgbox RusturfTunnel_2F_Text_AthenaPostBattle, MSGBOX_NPC
	end


RusturfTunnel_2F_EventScript_Allen::
# 30 "data/maps/RusturfTunnel_2F/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, RusturfTunnel_2F_Text_AllenIntro, RusturfTunnel_2F_Text_AllenDefeated
# 31 "data/maps/RusturfTunnel_2F/scripts.pory"
	msgbox RusturfTunnel_2F_Text_AllenPostBattle, MSGBOX_NPC
	end


RusturfTunnel_2F_Text_IvanIntro::
# 9 "data/maps/RusturfTunnel_2F/scripts.pory"
	.string "No matter how much I run,\n I'm still slow!$"

Route104_Text_IvanDefeat::
# 12 "data/maps/RusturfTunnel_2F/scripts.pory"
	.string "I can't catch up.$"

RusturfTunnel_2F_Text_IvanPostBattle::
# 14 "data/maps/RusturfTunnel_2F/scripts.pory"
	.string "Why can't I get any faster?$"

RusturfTunnel_2F_Text_AthenaIntro::
# 23 "data/maps/RusturfTunnel_2F/scripts.pory"
	.string "THIS IS GREAT FOR TRAINING!$"

RusturfTunnel_2F_Text_AthenaDefeat::
# 25 "data/maps/RusturfTunnel_2F/scripts.pory"
	.string "Maybe I should take a break.$"

RusturfTunnel_2F_Text_AthenaPostBattle::
# 27 "data/maps/RusturfTunnel_2F/scripts.pory"
	.string "Resting is important too!$"

RusturfTunnel_2F_Text_AllenIntro::
# 35 "data/maps/RusturfTunnel_2F/scripts.pory"
	.string "Hey! I found a sick spider nest\n earlier!$"

RusturfTunnel_2F_Text_AllenDefeated::
# 39 "data/maps/RusturfTunnel_2F/scripts.pory"
	.string "You're buggin.$"

RusturfTunnel_2F_Text_AllenPostBattle::
# 41 "data/maps/RusturfTunnel_2F/scripts.pory"
	.string "I heard there was a giant\n bee somewhere around here!$"
