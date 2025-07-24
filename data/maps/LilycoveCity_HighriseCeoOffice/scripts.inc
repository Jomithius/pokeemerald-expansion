LilycoveCity_HighriseCeoOffice_MapScripts::
# 2 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LilycoveCity_HighriseCeoOffice_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LilycoveCity_HighriseCeoOffice_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	map_script_2 VAR_CEO_STATE, 1, LilycoveCity_HighriseFloor2_EventScript_CeoMeeting
	.2byte 0


LilycoveCity_HighriseFloor2_EventScript_CeoMeeting::
# 8 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	lock
# 9 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 10 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	delay 10
# 11 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement 4, LilycoveCity_HighriseFloor2_Movement_Attendant
# 12 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	delay 16
# 13 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp6
# 14 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmovement 4
# 15 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_Text_Jimmy1, MSGBOX_AUTOCLOSE
# 16 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmessage
# 17 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 18 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmovement 5
# 19 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_0, MSGBOX_AUTOCLOSE
# 20 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmessage
# 21 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement 5, Common_Movement_WalkDown
# 22 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmovement 5
# 23 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_Text_Scientist, MSGBOX_DEFAULT
# 24 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmessage
# 25 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	delay 30
# 26 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 27 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_1, MSGBOX_AUTOCLOSE
# 28 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitfanfare
# 29 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmessage
# 30 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	setflag FLAG_ENABLE_REPORT_MATCH_CALL
# 31 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement 5, LilycoveCity_HighriseFloor2_Movement_Scientist
# 32 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmovement 5
# 33 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_Text_Jimmy2, MSGBOX_YESNO
# 34 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmessage
# 35 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_2
# 39 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_2, MSGBOX_AUTOCLOSE
# 40 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmessage
# 41 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement 2, LilycoveCity_HighriseFloor2_Movement_StaffMember
# 42 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	delay 16
# 43 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement 3, LilycoveCity_HighriseFloor2_Movement_StaffMember2
# 44 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	delay 16
# 45 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	playse SE_PIN
# 46 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_HighriseFloor2_Movement_PlayerPanic
# 47 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmovement 3
# 48 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_3, MSGBOX_AUTOCLOSE
# 49 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmessage
# 50 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 51 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceUp
# 52 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmovement 3
# 53 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	checkplayergender
# 54 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_6
# 59 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_5, MSGBOX_AUTOCLOSE
LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_5:
# 61 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmessage
# 62 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement 2, LilycoveCity_HighriseFloor2_Movement_StaffMemberReturn
# 63 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	delay 16
# 64 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement 3, LilycoveCity_HighriseFloor2_Movement_StaffMember2Return
# 65 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	delay 16
# 66 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 67 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmovement 3
# 68 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_Text_Jimmy3, MSGBOX_AUTOCLOSE
LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_1:
# 70 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmessage
# 71 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_HighriseFloor2_Movement_PlayerLeave
# 72 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitmovement 0
# 73 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	setvar VAR_CEO_STATE, 2
# 74 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	setflag FLAG_CALL_FROM_CEO
# 75 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	setflag FLAG_HIDE_JAMES_RUSTBORO_CITY
# 76 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	call LilycoveCity_HighriseFloor2_CeoMeeting_ClearLegendaryFlags
# 77 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	warp MAP_LILYCOVE_CITY, 51, 7
# 78 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	waitstate
# 79 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	release
	end

LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_2:
# 36 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_Text_Jimmy4, MSGBOX_AUTOCLOSE
	goto LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_1

LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_6:
# 55 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	msgbox LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_4, MSGBOX_AUTOCLOSE
	goto LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_5


LilycoveCity_HighriseFloor2_CeoMeeting_ClearLegendaryFlags::
# 84 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_ENTEI
# 85 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_RAIKOU
# 86 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_SUICUNE
# 87 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_MOLTRES
# 88 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_ARTICUNO
# 89 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_ZAPDOS
# 90 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_GALARIAN_MOLTRES
# 91 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_GALARIAN_ZAPDOS
# 92 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_GALARIAN_ARTICUNO
# 93 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_ARCEUS
# 94 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_DIALGA
# 95 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_PALKIA
# 96 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_GIRATINA
# 97 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_MARSHADOW
# 98 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_HIDE_ZERAORA
# 99 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_DEFEATED_SPECTRIER
# 100 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_DEFEATED_GENESECT
# 101 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_DEFEATED_RESHIRAM
# 102 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_DEFEATED_ZEKROM
# 103 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_DEFEATED_REGIDRAGO
# 104 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_DEFEATED_REGIELEKI
# 105 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	clearflag FLAG_DEFEATED_ZARUDE
	return


# 109 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
LilycoveCity_HighriseFloor2_Movement_Attendant:
# 110 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 110 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 110 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 110 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 111 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_left
# 111 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_left
# 111 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_left
# 112 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 112 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 112 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 112 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 112 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 113 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_right
# 114 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_in_place_down
	step_end

# 117 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
LilycoveCity_HighriseFloor2_Movement_Scientist:
# 118 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	lock_facing_direction
# 119 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 120 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	unlock_facing_direction
	step_end

# 123 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
LilycoveCity_HighriseFloor2_Movement_PlayerPanic:
# 124 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	emote_exclamation_mark
# 125 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_in_place_fast_right
# 126 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	delay_16
# 127 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_in_place_fast_left
	step_end

# 130 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
LilycoveCity_HighriseFloor2_Movement_PlayerLeave:
# 131 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_down
# 131 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_down
# 131 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_down
# 131 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_down
# 131 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_down
# 131 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_down
# 131 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_down
	step_end

# 134 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
LilycoveCity_HighriseFloor2_Movement_StaffMember:
# 135 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_fast_down
# 135 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_fast_down
# 135 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_fast_down
# 135 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_fast_down
# 136 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_fast_left
	step_end

# 139 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
LilycoveCity_HighriseFloor2_Movement_StaffMemberReturn:
# 140 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_right
# 141 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 141 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 141 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 141 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 142 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_in_place_down
	step_end

# 145 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
LilycoveCity_HighriseFloor2_Movement_StaffMember2:
# 146 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_fast_down
# 146 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_fast_down
# 146 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_fast_down
# 146 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_fast_down
# 147 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_fast_right
	step_end

# 150 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
LilycoveCity_HighriseFloor2_Movement_StaffMember2Return:
# 151 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_left
# 152 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 152 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 152 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 152 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_up
# 153 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	walk_in_place_down
	step_end

LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_0:
# 19 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "Sir.$"

LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_1:
# 27 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "Registered REPORT GUY in the POKéNAV.$"

LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_2:
# 39 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "…$"

LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_3:
# 48 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "JIMMY: Wait.$"

LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_4:
# 55 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "What's wrong with you?\n Don't threaten her.$"

LilycoveCity_HighriseFloor2_EventScript_CeoMeeting_Text_5:
# 59 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "It's fine.$"

LilycoveCity_HighriseFloor2_Text_Jimmy1::
# 156 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "JIMMY: {PLAYER}! Good to see you.\n I'll get to the point.\p I'm sure you noticed random tremors\n in the region during your travels.\p Well, the LEAGUE's investigation around\n the cause of those earthquakes has\l concluded.\p My subordinate will give you the finer\n details.$"

LilycoveCity_HighriseFloor2_Text_Scientist::
# 168 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "We have discovered that the source of\n seismic disturbances have primarily\l come from a MANIAC and his RATTATAs\l creating tunnels all throughout the\l region.\p Surprisingly, it had nothing to do\n with the actions of TEAM MAGMA.\p We have surveyed the tunnel systems\n and have discovered their origin lies\l in NORTHERN HOENN.\p It's difficult to continue monitoring\n seismic activity due to GROUDON being\l awakened, but we believe the RATTATA\l are no longer being ordered to dig.\p We presume that he has finally found\n whatever he has been looking for.\p Furthermore, there have been reports\n of extremely rare POKéMON now being\l seen in the region.\p Notable reports have come from: the\n SCORCHED SLAB, MT. PYRE, FIERY PATH,\l METEOR FALLS, ROUTE 123, NEW MAUVILLE,\l SKY PILLAR, and the CAVE OF ORIGIN.\p Please register me in your POKéNAV\n so I can give you future updates.$"

LilycoveCity_HighriseFloor2_Text_Jimmy2::
# 196 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "JIMMY: That's pretty much it.\p That rat weirdo isn't much of a threat\n to the region's security at this point.\p Still, I'd like you to go and do your\n own general investigation of the area.$"

LilycoveCity_HighriseFloor2_Text_Jimmy3::
# 204 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "{PLAYER}, you can do what you want.\n But it's in your best interest to go.\p In that remote part of the region, there\n are POKéMON you've never seen before.\p You may be CHAMPION, but there's still\n parts of this region to explore.\l After you return, I want you to go and\l challenge all the GYM LEADERS again.\l And, of course, the ELITE FOUR.\l Next time, they won't hold back.\p Well, {PLAYER}, I won't hold you\n any longer. You got things to do!\p You should be able to reach NORTHERN\n HOENN through the tunnel system.\l I expect good news!$"

LilycoveCity_HighriseFloor2_Text_Jimmy4::
# 222 "data/maps/LilycoveCity_HighriseCeoOffice/scripts.pory"
	.string "I knew you'd be down for an adventure!\n JAMES is already out there on another\l job I asked him to work on.\l You'll probably run into him at some\l  point.\p Then, after you return, I want you to\n challenge all the GYM LEADERS again.\l And, of course, the ELITE FOUR.\l Next time, they won't hold back.\p Well, {PLAYER}, I won't hold you\n any longer. You got things to do!\p You should be able to reach NORTHERN\n HOENN through the tunnel system.\l I expect good news!$"
