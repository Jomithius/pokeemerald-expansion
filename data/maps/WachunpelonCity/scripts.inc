WachunpelonCity_MapScripts::
	.byte 0


WachunpelonCity_EventScript_PolicemanTrigger::
# 4 "data/maps/WachunpelonCity/scripts.pory"
	lockall
# 5 "data/maps/WachunpelonCity/scripts.pory"
	playse SE_PIN
# 6 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 7 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 8 "data/maps/WachunpelonCity/scripts.pory"
	delay 16
# 9 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 10 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 11 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 12 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 13 "data/maps/WachunpelonCity/scripts.pory"
	goto_if_set FLAG_HIDE_BIKERS_ROUTE_123, WachunpelonCity_EventScript_PolicemanTrigger_2
# 17 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman1, MSGBOX_YESNO
WachunpelonCity_EventScript_PolicemanTrigger_1:
WachunpelonCity_EventScript_PolicemanTrigger_6:
# 19 "data/maps/WachunpelonCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WachunpelonCity_EventScript_PolicemanTrigger_7
# 22 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman2, MSGBOX_AUTOCLOSE
# 23 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 24 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Movement_WalkBack
# 25 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 26 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 27 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 28 "data/maps/WachunpelonCity/scripts.pory"
	opendoor 46, 14
# 29 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 30 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 31 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 32 "data/maps/WachunpelonCity/scripts.pory"
	removeobject 1
# 33 "data/maps/WachunpelonCity/scripts.pory"
	closedoor 46, 14
# 34 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 35 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 36 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 37 "data/maps/WachunpelonCity/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_WACHUNPELON
# 38 "data/maps/WachunpelonCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 9
# 39 "data/maps/WachunpelonCity/scripts.pory"
	warpdoor MAP_WACHUNPELON_CITY_SEWER, 26, 5
# 40 "data/maps/WachunpelonCity/scripts.pory"
	waitstate
# 41 "data/maps/WachunpelonCity/scripts.pory"
	releaseall
	end

WachunpelonCity_EventScript_PolicemanTrigger_2:
# 14 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanBikersRoute123, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanTrigger_1

WachunpelonCity_EventScript_PolicemanTrigger_7:
# 20 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanNo, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanTrigger_6


WachunpelonCity_EventScript_Policeman::
# 46 "data/maps/WachunpelonCity/scripts.pory"
	lockall
# 47 "data/maps/WachunpelonCity/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_1
# 48 "data/maps/WachunpelonCity/scripts.pory"
	compare VAR_TEMP_1, DIR_NORTH
	goto_if_eq WachunpelonCity_EventScript_Policeman_2
# 52 "data/maps/WachunpelonCity/scripts.pory"
	goto WachunpelonCity_EventScript_PolicemanEast
WachunpelonCity_EventScript_Policeman_1:
	end

WachunpelonCity_EventScript_Policeman_2:
# 49 "data/maps/WachunpelonCity/scripts.pory"
	goto WachunpelonCity_EventScript_PolicemanNorth
	goto WachunpelonCity_EventScript_Policeman_1


WachunpelonCity_EventScript_PolicemanNorth::
# 58 "data/maps/WachunpelonCity/scripts.pory"
	lockall
# 59 "data/maps/WachunpelonCity/scripts.pory"
	goto_if_set FLAG_HIDE_BIKERS_ROUTE_123, WachunpelonCity_EventScript_PolicemanNorth_2
# 63 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman1, MSGBOX_YESNO
WachunpelonCity_EventScript_PolicemanNorth_1:
WachunpelonCity_EventScript_PolicemanNorth_6:
# 65 "data/maps/WachunpelonCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WachunpelonCity_EventScript_PolicemanNorth_7
# 68 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman2, MSGBOX_AUTOCLOSE
# 69 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 70 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 71 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 72 "data/maps/WachunpelonCity/scripts.pory"
	opendoor 46, 14
# 73 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 74 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 75 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 76 "data/maps/WachunpelonCity/scripts.pory"
	removeobject 1
# 77 "data/maps/WachunpelonCity/scripts.pory"
	closedoor 46, 14
# 78 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 79 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Movement_PlayerNorth
# 80 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 81 "data/maps/WachunpelonCity/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_WACHUNPELON
# 82 "data/maps/WachunpelonCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 8
# 83 "data/maps/WachunpelonCity/scripts.pory"
	warpdoor MAP_WACHUNPELON_CITY_SEWER, 26, 5
# 84 "data/maps/WachunpelonCity/scripts.pory"
	waitstate
# 85 "data/maps/WachunpelonCity/scripts.pory"
	releaseall
	end

WachunpelonCity_EventScript_PolicemanNorth_2:
# 60 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanBikersRoute123, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanNorth_1

WachunpelonCity_EventScript_PolicemanNorth_7:
# 66 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanNo, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanNorth_6


WachunpelonCity_EventScript_PolicemanEast::
# 90 "data/maps/WachunpelonCity/scripts.pory"
	lockall
# 91 "data/maps/WachunpelonCity/scripts.pory"
	playse SE_PIN
# 92 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 93 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 94 "data/maps/WachunpelonCity/scripts.pory"
	delay 16
# 95 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 96 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 97 "data/maps/WachunpelonCity/scripts.pory"
	goto_if_set FLAG_HIDE_BIKERS_ROUTE_123, WachunpelonCity_EventScript_PolicemanEast_2
# 101 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman1, MSGBOX_YESNO
WachunpelonCity_EventScript_PolicemanEast_1:
WachunpelonCity_EventScript_PolicemanEast_6:
# 103 "data/maps/WachunpelonCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WachunpelonCity_EventScript_PolicemanEast_7
# 106 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman2, MSGBOX_AUTOCLOSE
# 107 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 108 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 109 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 110 "data/maps/WachunpelonCity/scripts.pory"
	opendoor 46, 14
# 111 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 112 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 113 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 114 "data/maps/WachunpelonCity/scripts.pory"
	removeobject 1
# 115 "data/maps/WachunpelonCity/scripts.pory"
	closedoor 46, 14
# 116 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 117 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Movement_PlayerEast
# 118 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 119 "data/maps/WachunpelonCity/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_WACHUNPELON
# 120 "data/maps/WachunpelonCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 9
# 121 "data/maps/WachunpelonCity/scripts.pory"
	warpdoor MAP_WACHUNPELON_CITY_SEWER, 26, 5
# 122 "data/maps/WachunpelonCity/scripts.pory"
	waitstate
# 123 "data/maps/WachunpelonCity/scripts.pory"
	releaseall
	end

WachunpelonCity_EventScript_PolicemanEast_2:
# 98 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanBikersRoute123, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanEast_1

WachunpelonCity_EventScript_PolicemanEast_7:
# 104 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanNo, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanEast_6


# 176 "data/maps/WachunpelonCity/scripts.pory"
WachunpelonCity_Movement_WalkBack:
# 177 "data/maps/WachunpelonCity/scripts.pory"
	walk_down
# 178 "data/maps/WachunpelonCity/scripts.pory"
	walk_in_place_up
	step_end

# 181 "data/maps/WachunpelonCity/scripts.pory"
WachunpelonCity_Movement_PlayerNorth:
# 182 "data/maps/WachunpelonCity/scripts.pory"
	walk_left
# 183 "data/maps/WachunpelonCity/scripts.pory"
	walk_up
	step_end

# 186 "data/maps/WachunpelonCity/scripts.pory"
WachunpelonCity_Movement_PlayerEast:
# 187 "data/maps/WachunpelonCity/scripts.pory"
	walk_left
# 187 "data/maps/WachunpelonCity/scripts.pory"
	walk_left
	step_end

WachunpelonCity_Text_Policeman1::
# 127 "data/maps/WachunpelonCity/scripts.pory"
	.string "It's you! Thanks again for your help on\n ROUTE 110.\p Most of the bikers have been arrested\n already.\l Only the boss along with a couple of\l members are left now, and I've tracked\l them to their hideout here.\p Backup's actually coming this time, but\n I want to get the jump on them before\l they have a chance to escape…\p So, what do you say?\p Having a strong TRAINER like you to\n cover me would be reassuring.\p Can you help me out?$"

WachunpelonCity_Text_PolicemanBikersRoute123::
# 144 "data/maps/WachunpelonCity/scripts.pory"
	.string "It's you! Thanks again for your help on\n ROUTE 110.\p I heard you drove those thugs away from\n ROUTE 123 as well.\p Most of the bikers have been arrested\n already.\l Only the boss along with a couple of\l members are left now, and I've tracked\l them to their hideout here.\p Backup's actually coming this time, but\n I want to get the jump on them before\l they have a chance to escape…\p So, what do you say?\p Having a strong TRAINER like you to\n cover me would be reassuring.\p Can you help me out?$"

WachunpelonCity_Text_PolicemanNo::
# 163 "data/maps/WachunpelonCity/scripts.pory"
	.string "Come on. You've already helped me\n on this case before.\l This will be the last time.$"

WachunpelonCity_Text_Policeman2::
# 169 "data/maps/WachunpelonCity/scripts.pory"
	.string "Great! This time I have clearance to use\n force as necessary.\p It won't be a repeat of last time.\n I'll lead.$"
