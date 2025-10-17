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
	goto_if_eq LilycoveCity_HighriseGroundFloor_EventScript_ToElevator_4
LilycoveCity_HighriseGroundFloor_EventScript_ToElevator_3:
# 25 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_Text_Attendant, MSGBOX_DEFAULT
# 26 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmessage
# 27 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	giveitem ITEM_BIG_NUGGET, 75
LilycoveCity_HighriseGroundFloor_EventScript_ToElevator_1:
# 29 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmessage
# 30 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	addpcitem ITEM_EXP_CANDY_XL, 99
# 31 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_EventScript_ToElevator_Text_0, MSGBOX_AUTOCLOSE
# 39 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmessage
# 40 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 41 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 6, Common_Movement_WalkUp4
# 42 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	delay 20
# 43 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp4
# 44 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 0
# 45 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	opendoor 8, 1
# 46 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitdooranim
# 47 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 6, Common_Movement_WalkUp
# 48 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 6
# 49 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	removeobject 6
# 50 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 51 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 0
# 52 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_LILYCOVE_CITY_HIGHRISE_GROUND_FLOOR
# 53 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	closedoor 8, 1
# 54 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitdooranim
# 55 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	warpsilent MAP_LILYCOVE_CITY_HIGHRISE_ELEVATOR, 2, 6
# 56 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitstate
# 57 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	releaseall
	end

LilycoveCity_HighriseGroundFloor_EventScript_ToElevator_2:
# 18 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_Text_AttendantHardMode, MSGBOX_DEFAULT
# 19 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmessage
# 20 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	giveitem ITEM_BIG_NUGGET, 75
# 21 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmessage
# 22 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	giveitem ITEM_CHERISH_BALL, 50
	goto LilycoveCity_HighriseGroundFloor_EventScript_ToElevator_1

LilycoveCity_HighriseGroundFloor_EventScript_ToElevator_4:
# 17 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	goto_if_set FLAG_SYS_HARD_MODE, LilycoveCity_HighriseGroundFloor_EventScript_ToElevator_2
	goto LilycoveCity_HighriseGroundFloor_EventScript_ToElevator_3


LilycoveCity_HighriseGroundFloor_EventScript_NoEntry::
# 83 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	lockall
# 84 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	playse SE_PIN
# 85 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 86 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 2
# 87 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	delay 10
# 88 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 89 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 90 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 2
# 91 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_Text_StaffEmployee, MSGBOX_AUTOCLOSE
# 92 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmessage
# 93 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 94 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 0
# 95 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 96 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 2
# 97 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	releaseall
	end


LilycoveCity_HighriseGroundFloor_EventScript_Woman::
# 107 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_EventScript_Woman_Text_0, MSGBOX_NPC
	end


LilycoveCity_HighriseGroundFloor_EventScript_StaffMember::
# 113 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_EventScript_StaffMember_Text_0, MSGBOX_SIGN
	end


LilycoveCity_HighriseGroundFloor_EventScript_Gentleman::
# 118 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_EventScript_Gentleman_Text_0, MSGBOX_NPC
	end


LilycoveCity_HighriseGroundFloor_EventScript_Maniac::
# 124 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_EventScript_Maniac_Text_0, MSGBOX_NPC
	end


LilycoveCity_HighriseGroundFloor_EventScript_ToElevator_Text_0:
# 31 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "That is worth more money than\n you can hold.\p We recommend not selling it\n all at once.\p Also, the CEO has generously wired\n EXP. CANDIES to your PC account.\p Now, please allow me to\n show you to the CEO's office.$"

LilycoveCity_HighriseGroundFloor_EventScript_Woman_Text_0:
# 107 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "They said my meeting would be in “like\n an hour”, but that was two hours ago…$"

LilycoveCity_HighriseGroundFloor_EventScript_StaffMember_Text_0:
# 113 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "…$"

LilycoveCity_HighriseGroundFloor_EventScript_Gentleman_Text_0:
# 118 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "I finally get to meet with the CEO.\n I can't wait.$"

LilycoveCity_HighriseGroundFloor_EventScript_Maniac_Text_0:
# 124 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "I heard rumors that the CEO has\n experience with things of the occult.\p Namely, the void…\n I'm going to ask him about it.$"

LilycoveCity_HighriseGroundFloor_Text_Attendant::
# 61 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "Welcome, {PLAYER}.\n We have been expecting you.\p Please accept this gift from the CEO\n for becoming CHAMPION.$"

LilycoveCity_HighriseGroundFloor_Text_AttendantHardMode::
# 68 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "Welcome, {PLAYER}.\n We have been expecting you.\p Please accept this gift from the CEO\n for becoming CHAMPION, along with\l this added message:\p “I'm really impressed with the skill\n that you've shown in your battles.\p “You truly are one of the best\n TRAINERS in the region.\p “In respect for your skill, take\n this extra gift.”$"

LilycoveCity_HighriseGroundFloor_Text_StaffEmployee::
# 101 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "I'm sorry CHAMPION, but you're not\n scheduled to meet with the CEO.$"
