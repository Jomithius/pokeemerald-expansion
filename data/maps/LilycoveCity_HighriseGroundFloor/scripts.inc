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
	msgbox LilycoveCity_HighriseGroundFloor_EventScript_ToElevator_Text_0, MSGBOX_AUTOCLOSE
# 36 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmessage
# 37 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 38 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 6, Common_Movement_WalkUp4
# 39 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	delay 20
# 40 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp4
# 41 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 0
# 42 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	opendoor 8, 1
# 43 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitdooranim
# 44 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 6, Common_Movement_WalkUp
# 45 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 6
# 46 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	removeobject 6
# 47 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 48 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 0
# 49 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_LILYCOVE_CITY_HIGHRISE_GROUND_FLOOR
# 50 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	closedoor 8, 1
# 51 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitdooranim
# 52 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	warpdoor MAP_LILYCOVE_CITY_HIGHRISE_ELEVATOR, 2, 6
# 53 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitstate
# 54 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
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


LilycoveCity_HighriseGroundFloor_EventScript_NoEntry::
# 80 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	lockall
# 81 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	playse SE_PIN
# 82 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 83 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 2
# 84 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	delay 10
# 85 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 86 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 87 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 2
# 88 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_Text_StaffEmployee, MSGBOX_AUTOCLOSE
# 89 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmessage
# 90 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 91 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 0
# 92 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 93 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	waitmovement 2
# 94 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	releaseall
	end


LilycoveCity_HighriseGroundFloor_EventScript_Woman::
# 104 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_EventScript_Woman_Text_0, MSGBOX_NPC
	end


LilycoveCity_HighriseGroundFloor_EventScript_StaffMember::
# 110 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_EventScript_StaffMember_Text_0, MSGBOX_SIGN
	end


LilycoveCity_HighriseGroundFloor_EventScript_Gentleman::
# 115 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_EventScript_Gentleman_Text_0, MSGBOX_NPC
	end


LilycoveCity_HighriseGroundFloor_EventScript_Maniac::
# 121 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	msgbox LilycoveCity_HighriseGroundFloor_EventScript_Maniac_Text_0, MSGBOX_NPC
	end


LilycoveCity_HighriseGroundFloor_EventScript_ToElevator_Text_0:
# 30 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "That is worth more money than\n you can hold.\p We recommend not selling it\n all at once.\p Now, please allow me to\n show you to the CEO's office.$"

LilycoveCity_HighriseGroundFloor_EventScript_Woman_Text_0:
# 104 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "They said my meeting would be in “like\n an hour”, but that was two hours ago…$"

LilycoveCity_HighriseGroundFloor_EventScript_StaffMember_Text_0:
# 110 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "…$"

LilycoveCity_HighriseGroundFloor_EventScript_Gentleman_Text_0:
# 115 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "I finally get to meet with the CEO.\n I can't wait.$"

LilycoveCity_HighriseGroundFloor_EventScript_Maniac_Text_0:
# 121 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "I heard rumors that the CEO has\n experience with things of the occult.\l Namely, the void…\l I'm going to ask him about it.$"

LilycoveCity_HighriseGroundFloor_Text_Attendant::
# 58 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "Welcome, {PLAYER}.\n We have been expecting you.\p Please accept this gift from the CEO\n for becoming CHAMPION.$"

LilycoveCity_HighriseGroundFloor_Text_AttendantHardMode::
# 65 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "Welcome, {PLAYER}.\n We have been expecting you.\p Please accept this gift from the CEO\n for becoming CHAMPION, along with\l this added message:\p “I'm really impressed with the skill\n that you've shown in your battles.\p You truly are one of the best\n TRAINERS in the region.\p In respect for your skill, take\n this extra gift.”$"

LilycoveCity_HighriseGroundFloor_Text_StaffEmployee::
# 98 "data/maps/LilycoveCity_HighriseGroundFloor/scripts.pory"
	.string "I'm sorry CHAMPION, but you're not\n scheduled to meet with the CEO.$"
