LilycoveCity_HighriseGroundFloor_MapScripts::
# 5 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_HighriseGroundFloor_OnTransition
# 2 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LilycoveCity_HighriseGroundFloor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LilycoveCity_HighriseGroundFloor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	map_script_2 VAR_CEO_STATE, 1, LilycoveCity_HighriseGroundFloor_EventScript_ToElevator
	.2byte 0


LilycoveCity_HighriseGroundFloor_OnTransition::
# 9 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	setflag FLAG_TEMP_E
	end


LilycoveCity_HighriseGroundFloor_EventScript_ToElevator::
# 14 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	lock
# 15 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 16 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 6
# 17 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_Text_Attendant, MSGBOX_AUTOCLOSE
# 18 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmessage
# 19 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	giveitem ITEM_BIG_NUGGET, 50
# 20 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmessage
# 21 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_EventScript_ToElevator_Text_0, MSGBOX_AUTOCLOSE
# 23 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmessage
# 24 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 25 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 6, Common_Movement_WalkUp4
# 26 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	delay 20
# 27 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp4
# 28 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 0
# 29 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	opendoor 8, 1
# 30 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitdooranim
# 31 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 6, Common_Movement_WalkUp
# 32 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 6
# 33 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	removeobject 6
# 34 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	closedoor 8, 1
# 35 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitdooranim
# 36 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 37 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 0
# 38 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	warpdoor MAP_LILYCOVE_CITY_HIGHRISE_ELEVATOR, 2, 6
# 39 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitstate
# 40 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	release
	end


LilycoveCity_HighriseGroundFloor_EventScript_NoEntry::
# 52 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	lock
# 53 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	playse SE_PIN
# 54 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 55 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 2
# 56 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	delay 10
# 57 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 58 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 59 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 2
# 60 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_Text_StaffEmployee, MSGBOX_AUTOCLOSE
# 61 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmessage
# 62 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 63 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 0
# 64 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 65 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 2
# 66 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	release
	end


LilycoveCity_HighriseGroundFloor_EventScript_Woman::
# 76 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_EventScript_Woman_Text_0, MSGBOX_NPC
	end


LilycoveCity_HighriseGroundFloor_EventScript_StaffMember::
# 82 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_EventScript_StaffMember_Text_0, MSGBOX_SIGN
	end


LilycoveCity_HighriseGroundFloor_EventScript_Gentleman::
# 87 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_EventScript_Gentleman_Text_0, MSGBOX_NPC
	end


LilycoveCity_HighriseGroundFloor_EventScript_Maniac::
# 93 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_EventScript_Maniac_Text_0, MSGBOX_NPC
	end


LilycoveCity_HighriseGroundFloor_EventScript_ToElevator_Text_0:
# 21 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "Now, please allow me to\n show you to the CEO's office.$"

LilycoveCity_HighriseGroundFloor_EventScript_Woman_Text_0:
# 76 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "They said my meeting would be in “like\n an hour”, but that was two hours ago…$"

LilycoveCity_HighriseGroundFloor_EventScript_StaffMember_Text_0:
# 82 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "…$"

LilycoveCity_HighriseGroundFloor_EventScript_Gentleman_Text_0:
# 87 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "I finally get to meet with the CEO.\n I can't wait.$"

LilycoveCity_HighriseGroundFloor_EventScript_Maniac_Text_0:
# 93 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "I heard rumors that the CEO has\n experience with things of the occult.\l Namely, the void…\l I'm going to ask him about it.$"

LilycoveCity_HighriseGroundFloor_Text_Attendant::
# 44 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "Welcome, {PLAYER}.\n We have been expecting you.\p Please, accept this gift from the CEO\n for becoming CHAMPION.$"

LilycoveCity_HighriseGroundFloor_Text_StaffEmployee::
# 70 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "I'm sorry CHAMPION, but you're not\n scheduled to meet with the CEO.$"
