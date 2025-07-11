WachunpelonCity_MapScripts::
	.byte 0


WachunpelonCity_EventScript_FatMan::
# 4 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_FatMan_Text_0, MSGBOX_SIGN
	end


WachunpelonCity_EventScript_OldMan::
# 10 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_OldMan_Text_0, MSGBOX_SIGN
	end


WachunpelonCity_EventScript_OldWoman::
# 16 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_OldWoman_Text_0, MSGBOX_SIGN
	end


WachunpelonCity_EventScript_AquaGrunt::
# 21 "data/maps/WachunpelonCity/scripts.pory"
	delay 16
# 22 "data/maps/WachunpelonCity/scripts.pory"
	playse SE_PIN
# 23 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 24 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 25 "data/maps/WachunpelonCity/scripts.pory"
	waitse
# 26 "data/maps/WachunpelonCity/scripts.pory"
	faceplayer
# 27 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_AquaGrunt_Text_0, MSGBOX_AUTOCLOSE
# 31 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 32 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 33 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 34 "data/maps/WachunpelonCity/scripts.pory"
	release
	end


WachunpelonCity_EventScript_Woman_4::
# 39 "data/maps/WachunpelonCity/scripts.pory"
	lock
# 40 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Woman_4_Text_0, MSGBOX_AUTOCLOSE
# 41 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 42 "data/maps/WachunpelonCity/scripts.pory"
	faceplayer
# 43 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Woman_4_Text_1, MSGBOX_AUTOCLOSE
# 44 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 45 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 46 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 47 "data/maps/WachunpelonCity/scripts.pory"
	release
	end


WachunpelonCity_EventScript_Tuber_F::
# 52 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Tuber_F_Text_0, MSGBOX_SIGN
	end


WachunpelonCity_EventScript_Tuber_M_Swimming::
# 58 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Tuber_M_Swimming_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_Tuber_M_Walking::
# 63 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Tuber_M_Walking_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_Man_4::
# 68 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Man_4_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_Woman_1::
# 74 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Woman_1_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_OldManBeach::
# 80 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_OldManBeach_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_Sailor::
# 86 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Sailor_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_Woman_2::
# 92 "data/maps/WachunpelonCity/scripts.pory"
	lock
# 93 "data/maps/WachunpelonCity/scripts.pory"
	faceplayer
# 94 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Woman_2_Text_0, MSGBOX_AUTOCLOSE
# 97 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 98 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 99 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 100 "data/maps/WachunpelonCity/scripts.pory"
	release
	end


WachunpelonCity_EventScript_Cook::
# 105 "data/maps/WachunpelonCity/scripts.pory"
	lock
# 106 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Cook_Text_0, MSGBOX_AUTOCLOSE
# 108 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 109 "data/maps/WachunpelonCity/scripts.pory"
	playse SE_PIN
# 110 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 111 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 112 "data/maps/WachunpelonCity/scripts.pory"
	waitse
# 113 "data/maps/WachunpelonCity/scripts.pory"
	faceplayer
# 114 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Cook_Text_1, MSGBOX_AUTOCLOSE
# 117 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 118 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 119 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 120 "data/maps/WachunpelonCity/scripts.pory"
	release
	end


WachunpelonCity_EventScript_PolicemanTrigger::
# 125 "data/maps/WachunpelonCity/scripts.pory"
	lockall
# 126 "data/maps/WachunpelonCity/scripts.pory"
	playse SE_PIN
# 127 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 128 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 129 "data/maps/WachunpelonCity/scripts.pory"
	delay 16
# 130 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 131 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 132 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 133 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 134 "data/maps/WachunpelonCity/scripts.pory"
	goto_if_set FLAG_SYS_DEFEATED_SPEEDWAGON_ROUTE_123, WachunpelonCity_EventScript_PolicemanTrigger_2
# 138 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman1, MSGBOX_YESNO
WachunpelonCity_EventScript_PolicemanTrigger_1:
WachunpelonCity_EventScript_PolicemanTrigger_6:
# 140 "data/maps/WachunpelonCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WachunpelonCity_EventScript_PolicemanTrigger_7
# 143 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman2, MSGBOX_AUTOCLOSE
# 144 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 145 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Movement_WalkBack
# 146 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 147 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 148 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 149 "data/maps/WachunpelonCity/scripts.pory"
	opendoor 46, 14
# 150 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 151 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 152 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 153 "data/maps/WachunpelonCity/scripts.pory"
	removeobject 1
# 154 "data/maps/WachunpelonCity/scripts.pory"
	closedoor 46, 14
# 155 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 156 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 157 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 158 "data/maps/WachunpelonCity/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_WACHUNPELON
# 159 "data/maps/WachunpelonCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 9
# 160 "data/maps/WachunpelonCity/scripts.pory"
	warpdoor MAP_WACHUNPELON_CITY_SEWER, 26, 5
# 161 "data/maps/WachunpelonCity/scripts.pory"
	waitstate
# 162 "data/maps/WachunpelonCity/scripts.pory"
	releaseall
	end

WachunpelonCity_EventScript_PolicemanTrigger_2:
# 135 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanBikersRoute123, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanTrigger_1

WachunpelonCity_EventScript_PolicemanTrigger_7:
# 141 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanNo, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanTrigger_6


WachunpelonCity_EventScript_Policeman::
# 167 "data/maps/WachunpelonCity/scripts.pory"
	lockall
# 168 "data/maps/WachunpelonCity/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_1
# 169 "data/maps/WachunpelonCity/scripts.pory"
	compare VAR_TEMP_1, DIR_NORTH
	goto_if_eq WachunpelonCity_EventScript_Policeman_2
# 173 "data/maps/WachunpelonCity/scripts.pory"
	goto WachunpelonCity_EventScript_PolicemanEast
WachunpelonCity_EventScript_Policeman_1:
	end

WachunpelonCity_EventScript_Policeman_2:
# 170 "data/maps/WachunpelonCity/scripts.pory"
	goto WachunpelonCity_EventScript_PolicemanNorth
	goto WachunpelonCity_EventScript_Policeman_1


WachunpelonCity_EventScript_PolicemanNorth::
# 179 "data/maps/WachunpelonCity/scripts.pory"
	lockall
# 180 "data/maps/WachunpelonCity/scripts.pory"
	goto_if_set FLAG_SYS_DEFEATED_SPEEDWAGON_ROUTE_123, WachunpelonCity_EventScript_PolicemanNorth_2
# 184 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman1, MSGBOX_YESNO
WachunpelonCity_EventScript_PolicemanNorth_1:
WachunpelonCity_EventScript_PolicemanNorth_6:
# 186 "data/maps/WachunpelonCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WachunpelonCity_EventScript_PolicemanNorth_7
# 189 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman2, MSGBOX_AUTOCLOSE
# 190 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 191 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 192 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 193 "data/maps/WachunpelonCity/scripts.pory"
	opendoor 46, 14
# 194 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 195 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 196 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 197 "data/maps/WachunpelonCity/scripts.pory"
	removeobject 1
# 198 "data/maps/WachunpelonCity/scripts.pory"
	closedoor 46, 14
# 199 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 200 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Movement_PlayerNorth
# 201 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 202 "data/maps/WachunpelonCity/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_WACHUNPELON
# 203 "data/maps/WachunpelonCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 9
# 204 "data/maps/WachunpelonCity/scripts.pory"
	warpdoor MAP_WACHUNPELON_CITY_SEWER, 26, 5
# 205 "data/maps/WachunpelonCity/scripts.pory"
	waitstate
# 206 "data/maps/WachunpelonCity/scripts.pory"
	releaseall
	end

WachunpelonCity_EventScript_PolicemanNorth_2:
# 181 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanBikersRoute123, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanNorth_1

WachunpelonCity_EventScript_PolicemanNorth_7:
# 187 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanNo, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanNorth_6


WachunpelonCity_EventScript_PolicemanEast::
# 211 "data/maps/WachunpelonCity/scripts.pory"
	lockall
# 212 "data/maps/WachunpelonCity/scripts.pory"
	playse SE_PIN
# 213 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 214 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 215 "data/maps/WachunpelonCity/scripts.pory"
	delay 16
# 216 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 217 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 218 "data/maps/WachunpelonCity/scripts.pory"
	goto_if_set FLAG_SYS_DEFEATED_SPEEDWAGON_ROUTE_123, WachunpelonCity_EventScript_PolicemanEast_2
# 222 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman1, MSGBOX_YESNO
WachunpelonCity_EventScript_PolicemanEast_1:
WachunpelonCity_EventScript_PolicemanEast_6:
# 224 "data/maps/WachunpelonCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WachunpelonCity_EventScript_PolicemanEast_7
# 227 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman2, MSGBOX_AUTOCLOSE
# 228 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 229 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 230 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 231 "data/maps/WachunpelonCity/scripts.pory"
	opendoor 46, 14
# 232 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 233 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 234 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 235 "data/maps/WachunpelonCity/scripts.pory"
	removeobject 1
# 236 "data/maps/WachunpelonCity/scripts.pory"
	closedoor 46, 14
# 237 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 238 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Movement_PlayerEast
# 239 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 240 "data/maps/WachunpelonCity/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_WACHUNPELON
# 241 "data/maps/WachunpelonCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 9
# 242 "data/maps/WachunpelonCity/scripts.pory"
	warpdoor MAP_WACHUNPELON_CITY_SEWER, 26, 5
# 243 "data/maps/WachunpelonCity/scripts.pory"
	waitstate
# 244 "data/maps/WachunpelonCity/scripts.pory"
	releaseall
	end

WachunpelonCity_EventScript_PolicemanEast_2:
# 219 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanBikersRoute123, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanEast_1

WachunpelonCity_EventScript_PolicemanEast_7:
# 225 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanNo, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanEast_6


# 297 "data/maps/WachunpelonCity/scripts.pory"
WachunpelonCity_Movement_WalkBack:
# 298 "data/maps/WachunpelonCity/scripts.pory"
	walk_down
# 299 "data/maps/WachunpelonCity/scripts.pory"
	walk_in_place_up
	step_end

# 302 "data/maps/WachunpelonCity/scripts.pory"
WachunpelonCity_Movement_PlayerNorth:
# 303 "data/maps/WachunpelonCity/scripts.pory"
	walk_left
# 304 "data/maps/WachunpelonCity/scripts.pory"
	walk_up
	step_end

# 307 "data/maps/WachunpelonCity/scripts.pory"
WachunpelonCity_Movement_PlayerEast:
# 308 "data/maps/WachunpelonCity/scripts.pory"
	walk_left
# 308 "data/maps/WachunpelonCity/scripts.pory"
	walk_left
	step_end

WachunpelonCity_EventScript_FatMan_Text_0:
# 4 "data/maps/WachunpelonCity/scripts.pory"
	.string "Man…\n That's a nice ocean breeze.$"

WachunpelonCity_EventScript_OldMan_Text_0:
# 10 "data/maps/WachunpelonCity/scripts.pory"
	.string "This could be one of the last\n vacations we ever take! Hahaha!$"

WachunpelonCity_EventScript_OldWoman_Text_0:
# 16 "data/maps/WachunpelonCity/scripts.pory"
	.string "Don't say that!$"

WachunpelonCity_EventScript_AquaGrunt_Text_0:
# 27 "data/maps/WachunpelonCity/scripts.pory"
	.string "I'm not doing anything bad, I swear!\p I just moved out here after everything\n that happened.\p I just want to live quietly now.$"

WachunpelonCity_EventScript_Woman_4_Text_0:
# 40 "data/maps/WachunpelonCity/scripts.pory"
	.string "You can do it, honey!$"

WachunpelonCity_EventScript_Woman_4_Text_1:
# 43 "data/maps/WachunpelonCity/scripts.pory"
	.string "She's still scared to go in the water.$"

WachunpelonCity_EventScript_Tuber_F_Text_0:
# 52 "data/maps/WachunpelonCity/scripts.pory"
	.string "I can't!\n It's too scary!$"

WachunpelonCity_EventScript_Tuber_M_Swimming_Text_0:
# 58 "data/maps/WachunpelonCity/scripts.pory"
	.string "I love swimming!$"

WachunpelonCity_EventScript_Tuber_M_Walking_Text_0:
# 63 "data/maps/WachunpelonCity/scripts.pory"
	.string "I love running on the sand!$"

WachunpelonCity_EventScript_Man_4_Text_0:
# 68 "data/maps/WachunpelonCity/scripts.pory"
	.string "We came all the way from VERDANTURF.\n I work at the DAYCARE over there.$"

WachunpelonCity_EventScript_Woman_1_Text_0:
# 74 "data/maps/WachunpelonCity/scripts.pory"
	.string "My family can embarass me sometimes,\n but I still love them.$"

WachunpelonCity_EventScript_OldManBeach_Text_0:
# 80 "data/maps/WachunpelonCity/scripts.pory"
	.string "I'm on vacation with my family.\n I love seeing my grandkids having fun.$"

WachunpelonCity_EventScript_Sailor_Text_0:
# 86 "data/maps/WachunpelonCity/scripts.pory"
	.string "It can be hard work navigatin' these\n seas.$"

WachunpelonCity_EventScript_Woman_2_Text_0:
# 94 "data/maps/WachunpelonCity/scripts.pory"
	.string "I come here from LUSH ACREAGE all the\n time just for the food.\p It's so good!$"

WachunpelonCity_EventScript_Cook_Text_0:
# 106 "data/maps/WachunpelonCity/scripts.pory"
	.string "Hm… So he decided to use those\n spices… Interesting.$"

WachunpelonCity_EventScript_Cook_Text_1:
# 114 "data/maps/WachunpelonCity/scripts.pory"
	.string "Excuse me!\p It's rude to bother people when they're\n eating!$"

WachunpelonCity_Text_Policeman1::
# 248 "data/maps/WachunpelonCity/scripts.pory"
	.string "It's you! Thanks again for your help on\n ROUTE 110.\p Most of the bikers have been arrested\n already.\l Only the boss along with a couple of\l members are left now, and I've tracked\l them to their hideout here.\p Backup's actually coming this time, but\n I want to get the jump on them before\l they have a chance to escape…\p So, what do you say?\p Having a strong TRAINER like you to\n cover me would be reassuring.\p Can you help me out?$"

WachunpelonCity_Text_PolicemanBikersRoute123::
# 265 "data/maps/WachunpelonCity/scripts.pory"
	.string "It's you! Thanks again for your help on\n ROUTE 110.\p I heard you drove those thugs away from\n ROUTE 123 as well.\p Most of them have been arrested\n already.\l Only the boss along with a couple of\l members are left now, and I've tracked\l them to their hideout here.\p Backup's actually coming this time, but\n I want to get the jump on them before\l they have a chance to escape…\p So, what do you say?\p Having a strong TRAINER like you to\n cover me would be reassuring.\p Can you help me out?$"

WachunpelonCity_Text_PolicemanNo::
# 284 "data/maps/WachunpelonCity/scripts.pory"
	.string "Come on. You've already helped me\n on this case before.\l This will be the last time.$"

WachunpelonCity_Text_Policeman2::
# 290 "data/maps/WachunpelonCity/scripts.pory"
	.string "Great! This time I have clearance to use\n force as necessary.\p It won't be a repeat of last time.\n I'll lead.$"
