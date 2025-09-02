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
	lockall
# 15 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 16 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 6
# 17 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	compare VAR_DIFFICULTY_SWITCH_COUNTER, 0
	goto_if_eq LilycoveCity_HighriseGroundFloor_EventScript_ToElevator_2
# 27 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_Text_Attendant, MSGBOX_DEFAULT
# 28 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmessage
# 29 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	giveitem ITEM_BIG_NUGGET, 25
LilycoveCity_HighriseGroundFloor_EventScript_ToElevator_1:
# 31 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmessage
# 32 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_EventScript_ToElevator_Text_1, MSGBOX_AUTOCLOSE
# 34 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmessage
# 35 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 36 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 6, Common_Movement_WalkUp4
# 37 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	delay 20
# 38 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp4
# 39 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 0
# 40 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	opendoor 8, 1
# 41 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitdooranim
# 42 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 6, Common_Movement_WalkUp
# 43 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 6
# 44 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	removeobject 6
# 45 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 46 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 0
# 47 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_LILYCOVE_CITY_HIGHRISE_GROUND_FLOOR
# 48 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	closedoor 8, 1
# 49 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitdooranim
# 50 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	warpdoor MAP_LILYCOVE_CITY_HIGHRISE_ELEVATOR, 2, 6
# 51 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitstate
# 52 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	releaseall
	end

LilycoveCity_HighriseGroundFloor_EventScript_ToElevator_2:
# 18 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_Text_AttendantHardMode, MSGBOX_DEFAULT
# 19 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmessage
# 20 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	giveitem ITEM_BIG_NUGGET, 50
# 21 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_EventScript_ToElevator_Text_0, MSGBOX_DEFAULT
	goto LilycoveCity_HighriseGroundFloor_EventScript_ToElevator_1


LilycoveCity_HighriseGroundFloor_EventScript_NoEntry::
# 76 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	lockall
# 77 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	playse SE_PIN
# 78 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 79 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 2
# 80 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	delay 10
# 81 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 82 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 83 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 2
# 84 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_Text_StaffEmployee, MSGBOX_AUTOCLOSE
# 85 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmessage
# 86 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 87 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 0
# 88 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 89 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 2
# 90 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	releaseall
	end


LilycoveCity_HighriseGroundFloor_EventScript_Woman::
# 100 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_EventScript_Woman_Text_0, MSGBOX_NPC
	end


LilycoveCity_HighriseGroundFloor_EventScript_StaffMember::
# 106 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_EventScript_StaffMember_Text_0, MSGBOX_SIGN
	end


LilycoveCity_HighriseGroundFloor_EventScript_Gentleman::
# 111 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_EventScript_Gentleman_Text_0, MSGBOX_NPC
	end


LilycoveCity_HighriseGroundFloor_EventScript_Maniac::
# 117 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_EventScript_Maniac_Text_0, MSGBOX_NPC
	end


LilycoveCity_HighriseGroundFloor_EventScript_ToElevator_Text_0:
# 21 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "That is worth more money than\n you can hold.\p We recommend not spending it\n all at once.$"

LilycoveCity_HighriseGroundFloor_EventScript_ToElevator_Text_1:
# 32 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "Now, please allow me to\n show you to the CEO's office.$"

LilycoveCity_HighriseGroundFloor_EventScript_Woman_Text_0:
# 100 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "They said my meeting would be in “like\n an hour”, but that was two hours ago…$"

LilycoveCity_HighriseGroundFloor_EventScript_StaffMember_Text_0:
# 106 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "…$"

LilycoveCity_HighriseGroundFloor_EventScript_Gentleman_Text_0:
# 111 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "I finally get to meet with the CEO.\n I can't wait.$"

LilycoveCity_HighriseGroundFloor_EventScript_Maniac_Text_0:
# 117 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "I heard rumors that the CEO has\n experience with things of the occult.\l Namely, the void…\l I'm going to ask him about it.$"

LilycoveCity_HighriseGroundFloor_Text_Attendant::
# 56 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "Welcome, {PLAYER}.\n We have been expecting you.\p Please accept this gift from the CEO\n for becoming CHAMPION.$"

LilycoveCity_HighriseGroundFloor_Text_AttendantHardMode::
# 63 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "Welcome, {PLAYER}.\n We have been expecting you.\p Please accept this gift from the CEO\n for becoming CHAMPION, along with\l this added message:\p “I'm really impressed with the skill\n that you've shown in your battles.\p You truly are one of the best\n TRAINERS in the region.”$"

LilycoveCity_HighriseGroundFloor_Text_StaffEmployee::
# 94 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "I'm sorry CHAMPION, but you're not\n scheduled to meet with the CEO.$"
