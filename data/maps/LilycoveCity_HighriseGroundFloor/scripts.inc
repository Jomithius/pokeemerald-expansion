LilycoveCity_HighriseGroundFloor_MapScripts::
# 2 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LilycoveCity_HighriseGroundFloor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LilycoveCity_HighriseGroundFloor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	map_script_2 VAR_CEO_STATE, 1, LilycoveCity_HighriseGroundFloor_EventScript_ToElevator
	.2byte 0


LilycoveCity_HighriseGroundFloor_EventScript_ToElevator::
# 8 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	lock
# 9 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 10 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 6
# 11 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_Text_Attendant, MSGBOX_AUTOCLOSE
# 12 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmessage
# 13 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 14 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 6, Common_Movement_WalkUp4
# 15 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	delay 20
# 16 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp4
# 17 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 0
# 18 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	opendoor 8, 1
# 19 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitdooranim
# 20 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 6, Common_Movement_WalkUp
# 21 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 6
# 22 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	removeobject 6
# 23 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	closedoor 8, 1
# 24 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitdooranim
# 25 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 26 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 0
# 27 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	warpdoor MAP_LILYCOVE_CITY_HIGHRISE_ELEVATOR, 2, 6
# 28 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitstate
# 29 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	release
	end


LilycoveCity_HighriseGroundFloor_EventScript_NoEntry::
# 41 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	lock
# 42 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	playse SE_PIN
# 43 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 44 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 2
# 45 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	delay 10
# 46 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 47 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 48 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 2
# 49 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_Text_StaffEmployee, MSGBOX_AUTOCLOSE
# 50 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmessage
# 51 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 52 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 0
# 53 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 54 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 2
# 55 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	release
	end


LilycoveCity_HighriseGroundFloor_EventScript_Woman::
# 65 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_EventScript_Woman_Text_0, MSGBOX_NPC
	end


LilycoveCity_HighriseGroundFloor_EventScript_StaffMember::
# 71 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_EventScript_StaffMember_Text_0, MSGBOX_SIGN
	end


LilycoveCity_HighriseGroundFloor_EventScript_Gentleman::
# 76 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_EventScript_Gentleman_Text_0, MSGBOX_NPC
	end


LilycoveCity_HighriseGroundFloor_EventScript_Maniac::
# 82 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_EventScript_Maniac_Text_0, MSGBOX_NPC
	end


LilycoveCity_HighriseGroundFloor_EventScript_Woman_Text_0:
# 65 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "They said my meeting would be in “like\n an hour”, but that was two hours ago…$"

LilycoveCity_HighriseGroundFloor_EventScript_StaffMember_Text_0:
# 71 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "…$"

LilycoveCity_HighriseGroundFloor_EventScript_Gentleman_Text_0:
# 76 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "I finally get to meet with the CEO.\n I can't wait.$"

LilycoveCity_HighriseGroundFloor_EventScript_Maniac_Text_0:
# 82 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "I heard rumors that the CEO has\n experience with things of the occult.\l Namely, the void…\l I'm going to ask him about it.$"

LilycoveCity_HighriseGroundFloor_Text_Attendant::
# 33 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "Welcome, {PLAYER}.\n We have been expecting you.\p Please, allow me to show you to\n the CEO's office.$"

LilycoveCity_HighriseGroundFloor_Text_StaffEmployee::
# 59 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "I'm sorry CHAMPION, but you're not\n scheduled to meet with the CEO.$"
