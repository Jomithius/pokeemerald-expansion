Route139_Tunnel_MapScripts::
	.byte 0


Route139_Tunnel_EventScript_Natsuko::
# 4 "data/maps/Route139_Tunnel/scripts.pory"
	trainerbattle_single TRAINER_NATSUKO, Route139_Tunnel_EventScript_Natsuko_Text_0, Route139_Tunnel_EventScript_Natsuko_Text_1
# 5 "data/maps/Route139_Tunnel/scripts.pory"
	goto_if_set FLAG_HIDE_LOYAL_THREE_JIRACHIS_ALTAR, Route139_Tunnel_EventScript_PostRitualWakeJirachiHint
# 6 "data/maps/Route139_Tunnel/scripts.pory"
	msgbox Route139_Tunnel_EventScript_Natsuko_Text_2, MSGBOX_NPC
	end


Route139_Tunnel_EventScript_Akiko::
# 11 "data/maps/Route139_Tunnel/scripts.pory"
	trainerbattle_single TRAINER_AKIKO, Route139_Tunnel_EventScript_Akiko_Text_0, Route139_Tunnel_EventScript_Akiko_Text_1
# 12 "data/maps/Route139_Tunnel/scripts.pory"
	goto_if_set FLAG_HIDE_LOYAL_THREE_JIRACHIS_ALTAR, Route139_Tunnel_EventScript_PostRitualWakeJirachiHint
# 13 "data/maps/Route139_Tunnel/scripts.pory"
	msgbox Route139_Tunnel_EventScript_Natsuko_Text_2, MSGBOX_NPC
	end


Route139_Tunnel_EventScript_PostRitualWakeJirachiHint::
# 18 "data/maps/Route139_Tunnel/scripts.pory"
	msgbox Route139_Tunnel_EventScript_PostRitualWakeJirachiHint_Text_0, MSGBOX_NPC
	end


Route139_Tunnel_EventScript_Natsuko_Text_0:
# 4 "data/maps/Route139_Tunnel/scripts.pory"
	.string "I must test that you're\nworthy to pass!$"

Route139_Tunnel_EventScript_Natsuko_Text_1:
# 4 "data/maps/Route139_Tunnel/scripts.pory"
	.string "… You're worthy.$"

Route139_Tunnel_EventScript_Natsuko_Text_2:
# 6 "data/maps/Route139_Tunnel/scripts.pory"
	.string "… Soon… The ritual will start…$"

Route139_Tunnel_EventScript_Akiko_Text_0:
# 11 "data/maps/Route139_Tunnel/scripts.pory"
	.string "My sister and I are tasked\nwith guarding the path!$"

Route139_Tunnel_EventScript_Akiko_Text_1:
# 11 "data/maps/Route139_Tunnel/scripts.pory"
	.string "You may pass.$"

Route139_Tunnel_EventScript_PostRitualWakeJirachiHint_Text_0:
# 18 "data/maps/Route139_Tunnel/scripts.pory"
	.string "The ritual…\n JIRACHI will awaken again in 9 years…$"
