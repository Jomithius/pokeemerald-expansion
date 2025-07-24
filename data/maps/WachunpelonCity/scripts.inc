WachunpelonCity_MapScripts::
# 2 "data/maps/WachunpelonCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WachunpelonCity_OnTransition
	.byte 0


WachunpelonCity_OnTransition::
# 6 "data/maps/WachunpelonCity/scripts.pory"
	setflag FLAG_SYS_DYNAMIC_LEVELS
	end


WachunpelonCity_EventScript_FatMan::
# 11 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_FatMan_Text_0, MSGBOX_SIGN
	end


WachunpelonCity_EventScript_OldMan::
# 17 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_OldMan_Text_0, MSGBOX_SIGN
	end


WachunpelonCity_EventScript_OldWoman::
# 23 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_OldWoman_Text_0, MSGBOX_SIGN
	end


WachunpelonCity_EventScript_AquaGrunt::
# 28 "data/maps/WachunpelonCity/scripts.pory"
	delay 16
# 29 "data/maps/WachunpelonCity/scripts.pory"
	playse SE_PIN
# 30 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 31 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 32 "data/maps/WachunpelonCity/scripts.pory"
	waitse
# 33 "data/maps/WachunpelonCity/scripts.pory"
	faceplayer
# 34 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_AquaGrunt_Text_0, MSGBOX_AUTOCLOSE
# 38 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 39 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 40 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 41 "data/maps/WachunpelonCity/scripts.pory"
	release
	end


WachunpelonCity_EventScript_Woman_4::
# 46 "data/maps/WachunpelonCity/scripts.pory"
	lock
# 47 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Woman_4_Text_0, MSGBOX_AUTOCLOSE
# 48 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 49 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 50 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 51 "data/maps/WachunpelonCity/scripts.pory"
	release
	end


WachunpelonCity_EventScript_Tuber_F::
# 56 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Tuber_F_Text_0, MSGBOX_SIGN
	end


WachunpelonCity_EventScript_Tuber_M_Swimming::
# 62 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Tuber_M_Swimming_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_Tuber_M_Walking::
# 67 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Tuber_M_Walking_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_Man_4::
# 72 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Man_4_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_Woman_1::
# 78 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Woman_1_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_OldManBeach::
# 84 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_OldManBeach_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_Sailor::
# 90 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Sailor_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_Woman_2::
# 96 "data/maps/WachunpelonCity/scripts.pory"
	lock
# 97 "data/maps/WachunpelonCity/scripts.pory"
	faceplayer
# 98 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Woman_2_Text_0, MSGBOX_AUTOCLOSE
# 101 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 102 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 103 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 104 "data/maps/WachunpelonCity/scripts.pory"
	release
	end


WachunpelonCity_EventScript_Cook::
# 109 "data/maps/WachunpelonCity/scripts.pory"
	lock
# 110 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Cook_Text_0, MSGBOX_AUTOCLOSE
# 116 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 117 "data/maps/WachunpelonCity/scripts.pory"
	playse SE_PIN
# 118 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 119 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 120 "data/maps/WachunpelonCity/scripts.pory"
	waitse
# 121 "data/maps/WachunpelonCity/scripts.pory"
	faceplayer
# 122 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Cook_Text_1, MSGBOX_AUTOCLOSE
# 125 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 126 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 127 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 128 "data/maps/WachunpelonCity/scripts.pory"
	release
	end


WachunpelonCity_EventScript_PolicemanTrigger::
# 133 "data/maps/WachunpelonCity/scripts.pory"
	lockall
# 134 "data/maps/WachunpelonCity/scripts.pory"
	playse SE_PIN
# 135 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 136 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 137 "data/maps/WachunpelonCity/scripts.pory"
	delay 16
# 138 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 139 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 140 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 141 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 142 "data/maps/WachunpelonCity/scripts.pory"
	goto_if_set FLAG_SYS_DEFEATED_SPEEDWAGON_ROUTE_123, WachunpelonCity_EventScript_PolicemanTrigger_2
# 146 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman1, MSGBOX_YESNO
WachunpelonCity_EventScript_PolicemanTrigger_1:
WachunpelonCity_EventScript_PolicemanTrigger_6:
# 148 "data/maps/WachunpelonCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WachunpelonCity_EventScript_PolicemanTrigger_7
# 151 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman2, MSGBOX_AUTOCLOSE
# 152 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 153 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Movement_WalkBack
# 154 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 155 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 156 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 157 "data/maps/WachunpelonCity/scripts.pory"
	opendoor 46, 14
# 158 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 159 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 160 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 161 "data/maps/WachunpelonCity/scripts.pory"
	removeobject 1
# 162 "data/maps/WachunpelonCity/scripts.pory"
	closedoor 46, 14
# 163 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 164 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 165 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 166 "data/maps/WachunpelonCity/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_WACHUNPELON
# 167 "data/maps/WachunpelonCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 9
# 168 "data/maps/WachunpelonCity/scripts.pory"
	warpdoor MAP_WACHUNPELON_CITY_SEWER, 26, 5
# 169 "data/maps/WachunpelonCity/scripts.pory"
	waitstate
# 170 "data/maps/WachunpelonCity/scripts.pory"
	releaseall
	end

WachunpelonCity_EventScript_PolicemanTrigger_2:
# 143 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanBikersRoute123, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanTrigger_1

WachunpelonCity_EventScript_PolicemanTrigger_7:
# 149 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanNo, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanTrigger_6


WachunpelonCity_EventScript_Policeman::
# 175 "data/maps/WachunpelonCity/scripts.pory"
	lockall
# 176 "data/maps/WachunpelonCity/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_1
# 177 "data/maps/WachunpelonCity/scripts.pory"
	compare VAR_TEMP_1, DIR_NORTH
	goto_if_eq WachunpelonCity_EventScript_Policeman_2
# 181 "data/maps/WachunpelonCity/scripts.pory"
	goto WachunpelonCity_EventScript_PolicemanEast
WachunpelonCity_EventScript_Policeman_1:
	end

WachunpelonCity_EventScript_Policeman_2:
# 178 "data/maps/WachunpelonCity/scripts.pory"
	goto WachunpelonCity_EventScript_PolicemanNorth
	goto WachunpelonCity_EventScript_Policeman_1


WachunpelonCity_EventScript_PolicemanNorth::
# 187 "data/maps/WachunpelonCity/scripts.pory"
	lockall
# 188 "data/maps/WachunpelonCity/scripts.pory"
	goto_if_set FLAG_SYS_DEFEATED_SPEEDWAGON_ROUTE_123, WachunpelonCity_EventScript_PolicemanNorth_2
# 192 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman1, MSGBOX_YESNO
WachunpelonCity_EventScript_PolicemanNorth_1:
WachunpelonCity_EventScript_PolicemanNorth_6:
# 194 "data/maps/WachunpelonCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WachunpelonCity_EventScript_PolicemanNorth_7
# 197 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman2, MSGBOX_AUTOCLOSE
# 198 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 199 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 200 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 201 "data/maps/WachunpelonCity/scripts.pory"
	opendoor 46, 14
# 202 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 203 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 204 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 205 "data/maps/WachunpelonCity/scripts.pory"
	removeobject 1
# 206 "data/maps/WachunpelonCity/scripts.pory"
	closedoor 46, 14
# 207 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 208 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Movement_PlayerNorth
# 209 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 210 "data/maps/WachunpelonCity/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_WACHUNPELON
# 211 "data/maps/WachunpelonCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 9
# 212 "data/maps/WachunpelonCity/scripts.pory"
	warpdoor MAP_WACHUNPELON_CITY_SEWER, 26, 5
# 213 "data/maps/WachunpelonCity/scripts.pory"
	waitstate
# 214 "data/maps/WachunpelonCity/scripts.pory"
	releaseall
	end

WachunpelonCity_EventScript_PolicemanNorth_2:
# 189 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanBikersRoute123, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanNorth_1

WachunpelonCity_EventScript_PolicemanNorth_7:
# 195 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanNo, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanNorth_6


WachunpelonCity_EventScript_PolicemanEast::
# 219 "data/maps/WachunpelonCity/scripts.pory"
	lockall
# 220 "data/maps/WachunpelonCity/scripts.pory"
	playse SE_PIN
# 221 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 222 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 223 "data/maps/WachunpelonCity/scripts.pory"
	delay 16
# 224 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 225 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 226 "data/maps/WachunpelonCity/scripts.pory"
	goto_if_set FLAG_SYS_DEFEATED_SPEEDWAGON_ROUTE_123, WachunpelonCity_EventScript_PolicemanEast_2
# 230 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman1, MSGBOX_YESNO
WachunpelonCity_EventScript_PolicemanEast_1:
WachunpelonCity_EventScript_PolicemanEast_6:
# 232 "data/maps/WachunpelonCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WachunpelonCity_EventScript_PolicemanEast_7
# 235 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman2, MSGBOX_AUTOCLOSE
# 236 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 237 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 238 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 239 "data/maps/WachunpelonCity/scripts.pory"
	opendoor 46, 14
# 240 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 241 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 242 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 243 "data/maps/WachunpelonCity/scripts.pory"
	removeobject 1
# 244 "data/maps/WachunpelonCity/scripts.pory"
	closedoor 46, 14
# 245 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 246 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Movement_PlayerEast
# 247 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 248 "data/maps/WachunpelonCity/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_WACHUNPELON
# 249 "data/maps/WachunpelonCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 9
# 250 "data/maps/WachunpelonCity/scripts.pory"
	warpdoor MAP_WACHUNPELON_CITY_SEWER, 26, 5
# 251 "data/maps/WachunpelonCity/scripts.pory"
	waitstate
# 252 "data/maps/WachunpelonCity/scripts.pory"
	releaseall
	end

WachunpelonCity_EventScript_PolicemanEast_2:
# 227 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanBikersRoute123, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanEast_1

WachunpelonCity_EventScript_PolicemanEast_7:
# 233 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanNo, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanEast_6


# 305 "data/maps/WachunpelonCity/scripts.pory"
WachunpelonCity_Movement_WalkBack:
# 306 "data/maps/WachunpelonCity/scripts.pory"
	walk_down
# 307 "data/maps/WachunpelonCity/scripts.pory"
	walk_in_place_up
	step_end

# 310 "data/maps/WachunpelonCity/scripts.pory"
WachunpelonCity_Movement_PlayerNorth:
# 311 "data/maps/WachunpelonCity/scripts.pory"
	walk_left
# 312 "data/maps/WachunpelonCity/scripts.pory"
	walk_up
	step_end

# 315 "data/maps/WachunpelonCity/scripts.pory"
WachunpelonCity_Movement_PlayerEast:
# 316 "data/maps/WachunpelonCity/scripts.pory"
	walk_left
# 316 "data/maps/WachunpelonCity/scripts.pory"
	walk_left
	step_end

WachunpelonCity_EventScript_FatMan_Text_0:
# 11 "data/maps/WachunpelonCity/scripts.pory"
	.string "Man…\n That's a nice ocean breeze.$"

WachunpelonCity_EventScript_OldMan_Text_0:
# 17 "data/maps/WachunpelonCity/scripts.pory"
	.string "This could be one of the last\n vacations we ever take! Hahaha!$"

WachunpelonCity_EventScript_OldWoman_Text_0:
# 23 "data/maps/WachunpelonCity/scripts.pory"
	.string "Don't say that!$"

WachunpelonCity_EventScript_AquaGrunt_Text_0:
# 34 "data/maps/WachunpelonCity/scripts.pory"
	.string "I'm not doing anything bad, I swear!\p I just moved out here after everything\n that happened.\p I just want to live quietly now.$"

WachunpelonCity_EventScript_Woman_4_Text_0:
# 47 "data/maps/WachunpelonCity/scripts.pory"
	.string "You can do it, honey!$"

WachunpelonCity_EventScript_Tuber_F_Text_0:
# 56 "data/maps/WachunpelonCity/scripts.pory"
	.string "I can't!\n It's too scary!$"

WachunpelonCity_EventScript_Tuber_M_Swimming_Text_0:
# 62 "data/maps/WachunpelonCity/scripts.pory"
	.string "I love swimming!$"

WachunpelonCity_EventScript_Tuber_M_Walking_Text_0:
# 67 "data/maps/WachunpelonCity/scripts.pory"
	.string "I love running on the sand!$"

WachunpelonCity_EventScript_Man_4_Text_0:
# 72 "data/maps/WachunpelonCity/scripts.pory"
	.string "We came all the way from VERDANTURF.\n I work at the DAYCARE over there.$"

WachunpelonCity_EventScript_Woman_1_Text_0:
# 78 "data/maps/WachunpelonCity/scripts.pory"
	.string "My family can embarass me sometimes,\n but I still love them.$"

WachunpelonCity_EventScript_OldManBeach_Text_0:
# 84 "data/maps/WachunpelonCity/scripts.pory"
	.string "I'm on vacation with my family.\n I love seeing my grandkids having fun.$"

WachunpelonCity_EventScript_Sailor_Text_0:
# 90 "data/maps/WachunpelonCity/scripts.pory"
	.string "It can be hard work navigatin' these\n seas.$"

WachunpelonCity_EventScript_Woman_2_Text_0:
# 98 "data/maps/WachunpelonCity/scripts.pory"
	.string "I come here from LUSH ACREAGE all the\n time just for the coffee.\p It's so good!$"

WachunpelonCity_EventScript_Cook_Text_0:
# 110 "data/maps/WachunpelonCity/scripts.pory"
	.string "Hm… So he decided to use those spices…!\n Gosh… It's so yummy…\l Tasty…\l Scrumptious…\l Delicious…\l Savory…$"

WachunpelonCity_EventScript_Cook_Text_1:
# 122 "data/maps/WachunpelonCity/scripts.pory"
	.string "Excuse me!\p It's rude to bother people when they're\n eating!$"

WachunpelonCity_Text_Policeman1::
# 256 "data/maps/WachunpelonCity/scripts.pory"
	.string "It's you! Thanks again for your help on\n ROUTE 110.\p Most of the bikers have been arrested\n already.\l Only the boss along with a couple of\l members are left now, and I've tracked\l them to their hideout here.\p Backup's actually coming this time, but\n I want to get the jump on them before\l they have a chance to escape…\p So, what do you say?\p Having a strong TRAINER like you to\n cover me would be reassuring.\p Can you help me out?$"

WachunpelonCity_Text_PolicemanBikersRoute123::
# 273 "data/maps/WachunpelonCity/scripts.pory"
	.string "It's you! Thanks again for your help on\n ROUTE 110.\p I heard you drove those thugs away from\n ROUTE 123 as well.\p Most of them have been arrested\n already.\l Only the boss along with a couple of\l members are left now, and I've tracked\l them to their hideout here.\p Backup's actually coming this time, but\n I want to get the jump on them before\l they have a chance to escape…\p So, what do you say?\p Having a strong TRAINER like you to\n cover me would be reassuring.\p Can you help me out?$"

WachunpelonCity_Text_PolicemanNo::
# 292 "data/maps/WachunpelonCity/scripts.pory"
	.string "Come on. You've already helped me\n on this case before.\l This will be the last time.$"

WachunpelonCity_Text_Policeman2::
# 298 "data/maps/WachunpelonCity/scripts.pory"
	.string "Great! This time I have clearance to use\n force as necessary.\p It won't be a repeat of last time.\n I'll lead.$"
