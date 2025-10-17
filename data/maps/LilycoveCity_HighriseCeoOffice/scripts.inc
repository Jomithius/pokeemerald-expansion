LilycoveCity_HighriseCeoOffice_MapScripts::
# 5 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_HighriseCeoOffice_OnTransition
# 2 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LilycoveCity_HighriseCeoOffice_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LilycoveCity_HighriseCeoOffice_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	map_script_2 VAR_CEO_STATE, 1, LilycoveCity_HighriseFloor2_EventScript_CeoMeeting
	.2byte 0


LilycoveCity_HighriseCeoOffice_OnTransition::
# 9 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	setflag FLAG_TEMP_7
# 10 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	removeobject 6
	end


LilycoveCity_HighriseFloor2_EventScript_CeoMeeting::
# 15 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	lockall
# 16 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 17 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	delay 10
# 18 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement 4, LilycoveCity_HighriseFloor2_Movement_Attendant
# 19 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	delay 16
# 20 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp6
# 21 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmovement 4
# 22 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_Text_Jimmy1, MSGBOX_AUTOCLOSE
# 23 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmessage
# 24 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 25 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmovement 5
# 26 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_0, MSGBOX_AUTOCLOSE
# 27 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmessage
# 28 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement 5, Common_Movement_WalkDown
# 29 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmovement 5
# 30 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_Text_Scientist, MSGBOX_DEFAULT
# 31 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmessage
# 32 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	delay 30
# 33 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 34 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_1, MSGBOX_AUTOCLOSE
# 35 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitfanfare
# 36 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmessage
# 37 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	setflag FLAG_ENABLE_REPORT_MATCH_CALL
# 38 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement 5, LilycoveCity_HighriseFloor2_Movement_Scientist
# 39 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmovement 5
# 40 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_Text_Jimmy2, MSGBOX_DEFAULT
# 41 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmessage
# 42 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_2, LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_3
# 43 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_2
# 47 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_4, MSGBOX_AUTOCLOSE
# 48 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmessage
# 49 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement 2, LilycoveCity_HighriseFloor2_Movement_StaffMember
# 50 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	delay 16
# 51 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement 3, LilycoveCity_HighriseFloor2_Movement_StaffMember2
# 52 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	delay 16
# 53 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	playse SE_PIN
# 54 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_HighriseFloor2_Movement_PlayerPanic
# 55 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmovement 3
# 56 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_5, MSGBOX_AUTOCLOSE
# 57 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmessage
# 58 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 59 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceUp
# 60 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmovement 3
# 61 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	checkplayergender
# 62 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_6
# 67 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_7, MSGBOX_AUTOCLOSE
LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_5:
# 69 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmessage
# 70 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement 2, LilycoveCity_HighriseFloor2_Movement_StaffMemberReturn
# 71 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	delay 16
# 72 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement 3, LilycoveCity_HighriseFloor2_Movement_StaffMember2Return
# 73 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	delay 16
# 74 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 75 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmovement 3
# 76 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_Text_Jimmy3, MSGBOX_DEFAULT
LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_1:
# 78 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmessage
# 79 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_8, MSGBOX_DEFAULT
# 88 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmessage
# 89 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 90 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmovement 5
# 91 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_0, MSGBOX_AUTOCLOSE
# 92 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmessage
# 93 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement 5, LilycoveCity_HighriseFloor2_Movement_ScientistPlacesBag
# 94 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmovement 5
# 95 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	playse SE_CONTEST_ICON_CLEAR
# 96 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	addobject 6
# 97 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitse
# 98 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	delay 30
# 99 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	goto LilycoveCity_HighriseFloor2_EventScript_PickGen9Starter
	end

LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_2:
# 44 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_Text_Jimmy4, MSGBOX_DEFAULT
	goto LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_1

LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_6:
# 63 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_6, MSGBOX_AUTOCLOSE
	goto LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_5


LilycoveCity_HighriseFloor2_EventScript_PickGen9Starter::
# 104 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	hidemonpic
# 105 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	message LilycoveCity_HighriseFloor2_EventScript_PickGen9Starter_Text_0
# 106 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, LilycoveCity_HighriseFloor2_EventScript_PickGen9Starter_Text_1, LilycoveCity_HighriseFloor2_EventScript_PickGen9Starter_Text_2, LilycoveCity_HighriseFloor2_EventScript_PickGen9Starter_Text_3
# 107 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_HighriseFloor2_EventScript_PickGen9Starter_2
# 115 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_HighriseFloor2_EventScript_PickGen9Starter_3
# 124 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 4
# 125 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_EventScript_PickGen9Starter_Text_6, MSGBOX_YESNO
# 127 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmessage
# 128 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_HighriseFloor2_EventScript_PickGen9Starter
# 129 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	goto LilycoveCity_HighriseFloor2_EventScript_GiveQuaxly
LilycoveCity_HighriseFloor2_EventScript_PickGen9Starter_1:
	end

LilycoveCity_HighriseFloor2_EventScript_PickGen9Starter_2:
# 108 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 4
# 109 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_EventScript_PickGen9Starter_Text_4, MSGBOX_YESNO
# 111 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmessage
# 112 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_HighriseFloor2_EventScript_PickGen9Starter
# 113 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	goto LilycoveCity_HighriseFloor2_EventScript_GiveSprigatito
	goto LilycoveCity_HighriseFloor2_EventScript_PickGen9Starter_1

LilycoveCity_HighriseFloor2_EventScript_PickGen9Starter_3:
# 116 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	showmonpic SPECIES_FUECOCO, 10, 4
# 117 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_EventScript_PickGen9Starter_Text_5, MSGBOX_YESNO
# 119 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmessage
# 120 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_HighriseFloor2_EventScript_PickGen9Starter
# 121 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	goto LilycoveCity_HighriseFloor2_EventScript_GiveFuecoco
	goto LilycoveCity_HighriseFloor2_EventScript_PickGen9Starter_1


LilycoveCity_HighriseFloor2_EventScript_GiveSprigatito::
# 135 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	hidemonpic
# 136 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	givemon SPECIES_SPRIGATITO, 70
# 137 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SPRIGATITO
# 138 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LilycoveCity_HighriseFloor2_EventScript_GiveSprigatito_2
# 143 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LilycoveCity_HighriseFloor2_EventScript_GiveSprigatito_3
# 150 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	playse SE_FAILURE
# 151 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_EventScript_GiveSprigatito_Text_2, MSGBOX_DEFAULT
# 152 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitse
LilycoveCity_HighriseFloor2_EventScript_GiveSprigatito_1:
# 154 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	goto LilycoveCity_HighriseFloor2_EventScript_PlayerLeaves
	end

LilycoveCity_HighriseFloor2_EventScript_GiveSprigatito_2:
# 139 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 140 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_EventScript_GiveSprigatito_Text_0, MSGBOX_DEFAULT
# 141 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitfanfare
	goto LilycoveCity_HighriseFloor2_EventScript_GiveSprigatito_1

LilycoveCity_HighriseFloor2_EventScript_GiveSprigatito_3:
# 144 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 145 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_EventScript_GiveSprigatito_Text_1, MSGBOX_DEFAULT
# 147 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitfanfare
	goto LilycoveCity_HighriseFloor2_EventScript_GiveSprigatito_1


LilycoveCity_HighriseFloor2_EventScript_GiveFuecoco::
# 159 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	hidemonpic
# 160 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	givemon SPECIES_FUECOCO, 70
# 161 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_FUECOCO
# 162 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LilycoveCity_HighriseFloor2_EventScript_GiveFuecoco_2
# 167 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LilycoveCity_HighriseFloor2_EventScript_GiveFuecoco_3
# 174 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	playse SE_FAILURE
# 175 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_EventScript_GiveSprigatito_Text_2, MSGBOX_DEFAULT
# 176 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitse
LilycoveCity_HighriseFloor2_EventScript_GiveFuecoco_1:
# 178 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	goto LilycoveCity_HighriseFloor2_EventScript_PlayerLeaves
	end

LilycoveCity_HighriseFloor2_EventScript_GiveFuecoco_2:
# 163 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 164 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_EventScript_GiveFuecoco_Text_0, MSGBOX_DEFAULT
# 165 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitfanfare
	goto LilycoveCity_HighriseFloor2_EventScript_GiveFuecoco_1

LilycoveCity_HighriseFloor2_EventScript_GiveFuecoco_3:
# 168 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 169 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_EventScript_GiveFuecoco_Text_1, MSGBOX_DEFAULT
# 171 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitfanfare
	goto LilycoveCity_HighriseFloor2_EventScript_GiveFuecoco_1


LilycoveCity_HighriseFloor2_EventScript_GiveQuaxly::
# 183 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	hidemonpic
# 184 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	givemon SPECIES_QUAXLY, 70
# 185 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_QUAXLY
# 186 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LilycoveCity_HighriseFloor2_EventScript_GiveQuaxly_2
# 191 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LilycoveCity_HighriseFloor2_EventScript_GiveQuaxly_3
# 198 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	playse SE_FAILURE
# 199 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_EventScript_GiveSprigatito_Text_2, MSGBOX_DEFAULT
# 200 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitse
LilycoveCity_HighriseFloor2_EventScript_GiveQuaxly_1:
# 202 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	goto LilycoveCity_HighriseFloor2_EventScript_PlayerLeaves
	end

LilycoveCity_HighriseFloor2_EventScript_GiveQuaxly_2:
# 187 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 188 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_EventScript_GiveQuaxly_Text_0, MSGBOX_DEFAULT
# 189 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitfanfare
	goto LilycoveCity_HighriseFloor2_EventScript_GiveQuaxly_1

LilycoveCity_HighriseFloor2_EventScript_GiveQuaxly_3:
# 192 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 193 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_EventScript_GiveQuaxly_Text_1, MSGBOX_DEFAULT
# 195 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitfanfare
	goto LilycoveCity_HighriseFloor2_EventScript_GiveQuaxly_1


LilycoveCity_HighriseFloor2_EventScript_PlayerLeaves::
# 207 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	playse SE_CONTEST_ICON_CLEAR
# 208 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	removeobject 6
# 209 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitse
# 210 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement 5, LilycoveCity_HighriseFloor2_Movement_ScientistReturnsPostStarter
# 211 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmovement 5
# 212 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_Text_JimmyIExpectGoodNews, MSGBOX_AUTOCLOSE
# 213 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmessage
# 214 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_HighriseFloor2_Movement_PlayerLeave
# 215 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmovement 0
# 216 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	setvar VAR_CEO_STATE, 2
# 217 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	setflag FLAG_CALL_FROM_CEO
# 218 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	setflag FLAG_HIDE_JAMES_RUSTBORO_CITY
# 219 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	setflag FLAG_HIDE_MISA_POST_GAME_RUSTBORO
# 220 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 221 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 0
# 222 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	setvar VAR_AZURE_MOUNTAIN_RIVAL_STATE, 1
# 223 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	call LilycoveCity_HighriseFloor2_CeoMeeting_ClearLegendaryFlags
# 224 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	warp MAP_LILYCOVE_CITY, 51, 7
# 225 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitstate
# 226 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	releaseall
	end


LilycoveCity_HighriseFloor2_CeoMeeting_ClearLegendaryFlags::
# 231 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_ENTEI
# 232 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_RAIKOU
# 233 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_ITEM_MEWTWONITE_X
# 234 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_MEWTWO
# 235 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_ITEM_METEOR_FALLS_1F_1R_PP_UP
# 236 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_ZAPDOS
# 237 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_GALARIAN_MOLTRES
# 238 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_GALARIAN_ZAPDOS
# 239 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_GALARIAN_ARTICUNO
# 240 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_ARCEUS
# 241 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_DIALGA
# 242 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_PALKIA
# 243 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_GIRATINA
# 244 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_MARSHADOW
# 245 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_ZERAORA
# 246 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_DEFEATED_SPECTRIER
# 247 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_DEFEATED_GENESECT
# 248 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_DEFEATED_RESHIRAM
# 249 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_DEFEATED_ZEKROM
# 250 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_DEFEATED_REGIDRAGO
# 251 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_DEFEATED_REGIELEKI
# 252 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_DEFEATED_ZARUDE
# 253 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_MYSTERY_GIFT_MAN
# 254 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	setflag FLAG_MIMIKYU_TOTEM
	return


# 258 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
LilycoveCity_HighriseFloor2_Movement_Attendant:
# 259 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 259 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 259 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 259 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 260 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_left
# 260 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_left
# 260 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_left
# 261 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 261 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 261 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 261 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 261 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 262 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_right
# 263 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_in_place_down
	step_end

# 266 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
LilycoveCity_HighriseFloor2_Movement_Scientist:
# 267 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	lock_facing_direction
# 268 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 269 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	unlock_facing_direction
	step_end

# 272 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
LilycoveCity_HighriseFloor2_Movement_PlayerPanic:
# 273 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	emote_exclamation_mark
# 274 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_in_place_fast_right
# 275 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	delay_16
# 276 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_in_place_fast_left
	step_end

# 279 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
LilycoveCity_HighriseFloor2_Movement_PlayerLeave:
# 280 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_down
# 280 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_down
# 280 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_down
# 280 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_down
# 280 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_down
# 280 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_down
# 280 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_down
	step_end

# 283 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
LilycoveCity_HighriseFloor2_Movement_StaffMember:
# 284 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_fast_down
# 284 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_fast_down
# 284 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_fast_down
# 284 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_fast_down
# 285 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_fast_left
	step_end

# 288 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
LilycoveCity_HighriseFloor2_Movement_StaffMemberReturn:
# 289 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_right
# 290 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 290 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 290 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 290 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 291 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_in_place_down
	step_end

# 294 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
LilycoveCity_HighriseFloor2_Movement_StaffMember2:
# 295 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_fast_down
# 295 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_fast_down
# 295 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_fast_down
# 295 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_fast_down
# 296 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_fast_right
	step_end

# 299 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
LilycoveCity_HighriseFloor2_Movement_StaffMember2Return:
# 300 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_left
# 301 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 301 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 301 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 301 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 302 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_in_place_down
	step_end

# 305 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
LilycoveCity_HighriseFloor2_Movement_ScientistPlacesBag:
# 306 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_down
# 307 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_left
# 307 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_left
# 308 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_in_place_down
	step_end

# 311 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
LilycoveCity_HighriseFloor2_Movement_ScientistReturnsPostStarter:
# 312 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_right
# 312 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_right
# 313 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 314 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_in_place_down
	step_end

LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_0:
# 26 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "Sir.$"

LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_1:
# 34 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "Registered REPORT GUY in the POKéNAV.$"

LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_2:
# 42 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "Okay. Sounds fun!$"

LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_3:
# 42 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "No way! You're not even my boss!$"

LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_4:
# 47 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "…$"

LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_5:
# 56 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "JIMMY: Wait.$"

LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_6:
# 63 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "What's wrong with you?\n Don't threaten her.$"

LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_7:
# 67 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "It's fine.$"

LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_8:
# 79 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "Great!\p Now that that's figured out, I have one\n more thing for you.\p When we battled, there were POKéMON\n you had never seen before, right?\p Those POKéMON are only found in\n NORTHERN HOENN.\p I think you know where this is going.\n Go ahead, PROF.$"

LilycoveCity_HighriseFloor2_EventScript_PickGen9Starter_Text_0:
# 105 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "You may choose any one you'd like.$"

LilycoveCity_HighriseFloor2_EventScript_PickGen9Starter_Text_1:
# 106 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "SPRIGATITO$"

LilycoveCity_HighriseFloor2_EventScript_PickGen9Starter_Text_2:
# 106 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "FUECOCO$"

LilycoveCity_HighriseFloor2_EventScript_PickGen9Starter_Text_3:
# 106 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "QUAXLY$"

LilycoveCity_HighriseFloor2_EventScript_PickGen9Starter_Text_4:
# 109 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "SPRIGATITO, the GRASS CAT POKéMON.\n Is this the one you want?$"

LilycoveCity_HighriseFloor2_EventScript_PickGen9Starter_Text_5:
# 117 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "FUECOCO, the FIRE CROC POKéMON.\n Is this the one you want?$"

LilycoveCity_HighriseFloor2_EventScript_PickGen9Starter_Text_6:
# 125 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "QUAXLY, the DUCKLING POKéMON.\n Is this the one you want?$"

LilycoveCity_HighriseFloor2_EventScript_GiveSprigatito_Text_0:
# 140 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "{PLAYER} received SPRIGATITO!$"

LilycoveCity_HighriseFloor2_EventScript_GiveSprigatito_Text_1:
# 145 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "{PLAYER} received SPRIGATITO!\n SPRIGATITO was sent to the PC.$"

LilycoveCity_HighriseFloor2_EventScript_GiveSprigatito_Text_2:
# 151 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "You don't have any room.$"

LilycoveCity_HighriseFloor2_EventScript_GiveFuecoco_Text_0:
# 164 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "{PLAYER} received FUECOCO!$"

LilycoveCity_HighriseFloor2_EventScript_GiveFuecoco_Text_1:
# 169 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "{PLAYER} received FUECOCO!\n FUECOCO was sent to the PC.$"

LilycoveCity_HighriseFloor2_EventScript_GiveQuaxly_Text_0:
# 188 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "{PLAYER} received QUAXLY!$"

LilycoveCity_HighriseFloor2_EventScript_GiveQuaxly_Text_1:
# 193 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "{PLAYER} received QUAXLY!\n QUAXLY was sent to the PC.$"

LilycoveCity_HighriseFloor2_Text_Jimmy1::
# 317 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "JIMMY: {PLAYER}! Good to see you.\n I'll get to the point.\p I'm sure you noticed random tremors\n in the region during your travels.\p And I know LUNA made- I mean…asked you\n for help with his work too.\p Well, the LEAGUE's investigation around\n the cause of those earthquakes has\l concluded.\p My subordinate will give you the finer\n details.$"

LilycoveCity_HighriseFloor2_Text_Scientist::
# 331 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "We have discovered that the source of\n seismic disturbances have primarily\l come from a MANIAC and his RATTATAs\l creating tunnels all throughout the\l region.\p Surprisingly, it had nothing to do\n with the actions of TEAM MAGMA.\p We have surveyed the tunnel systems\n and have discovered their origin lies\l in NORTHERN HOENN.\p It's difficult to continue monitoring\n seismic activity due to GROUDON being\l awakened, but we believe the RATTATA\l are no longer being ordered to dig.\p We presume that he has finally found\n whatever he has been looking for.\p Furthermore, there have been reports\n of extremely rare POKéMON now being\l seen in the region.\p Notable reports have come from: the\n SCORCHED SLAB, MT. PYRE, FIERY PATH,\l METEOR FALLS, ROUTE 123, NEW MAUVILLE,\l SKY PILLAR, and the CAVE OF ORIGIN.\p Please register me in your POKéNAV\n so I can give you future updates.$"

LilycoveCity_HighriseFloor2_Text_Jimmy2::
# 359 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "JIMMY: That's pretty much it.\p That rat weirdo isn't much of a threat\n to the region's security at this point.\p Still, I'd like you to go and do your\n own general investigation of the area.$"

LilycoveCity_HighriseFloor2_Text_Jimmy3::
# 367 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "{PLAYER}, you can do what you want.\n But it's in your best interest to go.\p In that remote part of the region, there\n are POKéMON you've never seen before.\p You may be CHAMPION, but there's still\n parts of this region to explore.\p After you return, I want you to go and\n challenge all the GYM LEADERS again.\p And, of course, the ELITE FOUR.\n Next time, they won't hold back.$"

LilycoveCity_HighriseFloor2_Text_Jimmy4::
# 380 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "I knew you'd be down for an adventure!\p JAMES is already out there on another\n job I asked him to work on.\p You'll probably run into him at some\n point.\p Then, after you return, I want you to\n challenge all the GYM LEADERS again.\p And, of course, the ELITE FOUR.\n Next time, they won't hold back.$"

LilycoveCity_HighriseFloor2_Text_JimmyIExpectGoodNews::
# 392 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "JIMMY: Well, {PLAYER}, I won't hold you\n any longer. You got things to do!\p You should be able to reach NORTHERN\n HOENN through the tunnel system.\l I expect good news!$"
