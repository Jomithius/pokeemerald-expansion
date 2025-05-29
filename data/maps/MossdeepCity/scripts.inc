# 1 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_1, 10
# 2 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_2, 11
# 3 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_3, 12
# 4 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_4, 13
# 5 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_MAXIE, 14
# 6 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_SCOTT, 16
# 7 "data/maps/MossdeepCity/scripts.pory"

# 8 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_MapScripts::
# 9 "data/maps/MossdeepCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_OnTransition
# 10 "data/maps/MossdeepCity/scripts.pory"
	.byte 0
# 11 "data/maps/MossdeepCity/scripts.pory"

# 12 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_OnTransition:
# 13 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 14 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 15 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 16 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 17 "data/maps/MossdeepCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 18 "data/maps/MossdeepCity/scripts.pory"
	end
# 19 "data/maps/MossdeepCity/scripts.pory"

# 20 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanF::
# 21 "data/maps/MossdeepCity/scripts.pory"
	lock
# 22 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 23 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_PokefanFMagmaGone
# 24 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterReceivedLetter, MSGBOX_DEFAULT
# 25 "data/maps/MossdeepCity/scripts.pory"
	release
# 26 "data/maps/MossdeepCity/scripts.pory"
	end
# 27 "data/maps/MossdeepCity/scripts.pory"

# 28 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanFMagmaGone::
# 29 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterLaunchingRockets, MSGBOX_DEFAULT
# 30 "data/maps/MossdeepCity/scripts.pory"
	release
# 31 "data/maps/MossdeepCity/scripts.pory"
	end
# 32 "data/maps/MossdeepCity/scripts.pory"

# 33 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Sailor::
# 34 "data/maps/MossdeepCity/scripts.pory"
	lock
# 35 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 36 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_SailorMagmaGone
# 37 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_MossdeepTargetedByMagma, MSGBOX_DEFAULT
# 38 "data/maps/MossdeepCity/scripts.pory"
	release
# 39 "data/maps/MossdeepCity/scripts.pory"
	end
# 40 "data/maps/MossdeepCity/scripts.pory"

# 41 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SailorMagmaGone::
# 42 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_FeelReliefOnLand, MSGBOX_DEFAULT
# 43 "data/maps/MossdeepCity/scripts.pory"
	release
# 44 "data/maps/MossdeepCity/scripts.pory"
	end
# 45 "data/maps/MossdeepCity/scripts.pory"

# 46 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_NinjaBoy::
# 47 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WailmerWatching, MSGBOX_NPC
# 48 "data/maps/MossdeepCity/scripts.pory"
	end
# 49 "data/maps/MossdeepCity/scripts.pory"

# 50 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ExpertM::
# 51 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_LifeNeedsSeaToLive, MSGBOX_NPC
# 52 "data/maps/MossdeepCity/scripts.pory"
	end
# 53 "data/maps/MossdeepCity/scripts.pory"

# 54 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Girl::
# 55 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_NiceIfWorldCoveredByFlowers, MSGBOX_NPC
# 56 "data/maps/MossdeepCity/scripts.pory"
	end
# 57 "data/maps/MossdeepCity/scripts.pory"

# 58 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Woman::
# 59 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpecialSpaceCenterRock, MSGBOX_NPC
# 60 "data/maps/MossdeepCity/scripts.pory"
	end
# 61 "data/maps/MossdeepCity/scripts.pory"

# 62 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_WhiteRock::
# 63 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ItsAWhiteRock, MSGBOX_SIGN
# 64 "data/maps/MossdeepCity/scripts.pory"
	end
# 65 "data/maps/MossdeepCity/scripts.pory"

# 66 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_GymSign::
# 67 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_GymSign, MSGBOX_SIGN
# 68 "data/maps/MossdeepCity/scripts.pory"
	end
# 69 "data/maps/MossdeepCity/scripts.pory"

# 70 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_CitySign::
# 71 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_CitySign, MSGBOX_SIGN
# 72 "data/maps/MossdeepCity/scripts.pory"
	end
# 73 "data/maps/MossdeepCity/scripts.pory"

# 74 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SpaceCenterSign::
# 75 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterSign, MSGBOX_SIGN
# 76 "data/maps/MossdeepCity/scripts.pory"
	end
# 77 "data/maps/MossdeepCity/scripts.pory"

# 78 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_VisitedMossdeep::
# 79 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_VISITED_MOSSDEEP_CITY
# 80 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 81 "data/maps/MossdeepCity/scripts.pory"
	end
# 82 "data/maps/MossdeepCity/scripts.pory"

# 83 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter::
# 84 "data/maps/MossdeepCity/scripts.pory"
	lockall
# 85 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MAXIE, MossdeepCity_Movement_MaxieGestureToSpaceCenter
# 86 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 87 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, MossdeepCity_Movement_GruntFaceSpaceCenter
# 88 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, MossdeepCity_Movement_GruntFaceSpaceCenter
# 89 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, MossdeepCity_Movement_GruntFaceSpaceCenter
# 90 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, MossdeepCity_Movement_GruntFaceSpaceCenter
# 91 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 92 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MAXIE, MossdeepCity_Movement_MaxieEnterSpaceCenter
# 93 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, MossdeepCity_Movement_Grunt1EnterSpaceCenter
# 94 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, MossdeepCity_Movement_Grunt2EnterSpaceCenter
# 95 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, MossdeepCity_Movement_Grunt3EnterSpaceCenter
# 96 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, MossdeepCity_Movement_Grunt4EnterSpaceCenter
# 97 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 98 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MAXIE
# 99 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 100 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 101 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 102 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_4
# 103 "data/maps/MossdeepCity/scripts.pory"
	delay 30
# 104 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 2
# 105 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 106 "data/maps/MossdeepCity/scripts.pory"
	releaseall
# 107 "data/maps/MossdeepCity/scripts.pory"
	end
# 108 "data/maps/MossdeepCity/scripts.pory"

# 109 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieGestureToSpaceCenter:
# 110 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 111 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 112 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 113 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 114 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 115 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 116 "data/maps/MossdeepCity/scripts.pory"
	face_left
# 117 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 118 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 119 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 120 "data/maps/MossdeepCity/scripts.pory"

# 121 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_GruntFaceSpaceCenter:
# 122 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 123 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 124 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 125 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 126 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 127 "data/maps/MossdeepCity/scripts.pory"

# 128 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieEnterSpaceCenter:
# 129 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 130 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 131 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 132 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 133 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 134 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 135 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 136 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 137 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 138 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 139 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 140 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 141 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 142 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 143 "data/maps/MossdeepCity/scripts.pory"

# 144 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt1EnterSpaceCenter:
# 145 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 146 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 147 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 148 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 149 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 150 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 151 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 152 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 153 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 154 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 155 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 156 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 157 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 158 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 159 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 160 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 161 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 162 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 163 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 164 "data/maps/MossdeepCity/scripts.pory"

# 165 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt2EnterSpaceCenter:
# 166 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 167 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 168 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 169 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 170 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 171 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 172 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 173 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 174 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 175 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 176 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 177 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 178 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 179 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 180 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 181 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 182 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 183 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 184 "data/maps/MossdeepCity/scripts.pory"

# 185 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt3EnterSpaceCenter:
# 186 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 187 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 188 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 189 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 190 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 191 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 192 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 193 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 194 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 195 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 196 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 197 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 198 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 199 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 200 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 201 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 202 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 203 "data/maps/MossdeepCity/scripts.pory"

# 204 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt4EnterSpaceCenter:
# 205 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 206 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 207 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 208 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 209 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 210 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 211 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 212 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 213 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 214 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 215 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 216 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 217 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 218 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 219 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 220 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 221 "data/maps/MossdeepCity/scripts.pory"

# 222 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Man::
# 223 "data/maps/MossdeepCity/scripts.pory"
	lock
# 224 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 225 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SurfExhilarating, MSGBOX_DEFAULT
# 226 "data/maps/MossdeepCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 227 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 228 "data/maps/MossdeepCity/scripts.pory"
	release
# 229 "data/maps/MossdeepCity/scripts.pory"
	end
# 230 "data/maps/MossdeepCity/scripts.pory"

# 231 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_KingsRockBoy::
# 232 "data/maps/MossdeepCity/scripts.pory"
	lock
# 233 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 234 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_KINGS_ROCK, MossdeepCity_EventScript_ReceivedKingsRock
# 235 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WantKingsRockStevenGaveMe, MSGBOX_YESNO
# 236 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_EventScript_DeclineKingsRock
# 237 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_YouCanKeepIt, MSGBOX_DEFAULT
# 238 "data/maps/MossdeepCity/scripts.pory"
	giveitem ITEM_KINGS_ROCK
# 239 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 240 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_RECEIVED_KINGS_ROCK
# 241 "data/maps/MossdeepCity/scripts.pory"
	release
# 242 "data/maps/MossdeepCity/scripts.pory"
	end
# 243 "data/maps/MossdeepCity/scripts.pory"

# 244 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ReceivedKingsRock::
# 245 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_StevensHouseOverThere, MSGBOX_DEFAULT
# 246 "data/maps/MossdeepCity/scripts.pory"
	release
# 247 "data/maps/MossdeepCity/scripts.pory"
	end
# 248 "data/maps/MossdeepCity/scripts.pory"

# 249 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_DeclineKingsRock::
# 250 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WhatToDoWithWeirdRock, MSGBOX_DEFAULT
# 251 "data/maps/MossdeepCity/scripts.pory"
	release
# 252 "data/maps/MossdeepCity/scripts.pory"
	end
# 253 "data/maps/MossdeepCity/scripts.pory"

# 254 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_BlackBelt::
# 255 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SootopolisNewGymLeader, MSGBOX_NPC
# 256 "data/maps/MossdeepCity/scripts.pory"
	end
# 257 "data/maps/MossdeepCity/scripts.pory"

# 258 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Scott::
# 259 "data/maps/MossdeepCity/scripts.pory"
	lock
# 260 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 261 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ScottSomethingWrongWithTown, MSGBOX_DEFAULT
# 262 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 263 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MossdeepCity_EventScript_ScottExitNorth
# 264 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MossdeepCity_EventScript_ScottExitEast
# 265 "data/maps/MossdeepCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 266 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 267 "data/maps/MossdeepCity/scripts.pory"
	release
# 268 "data/maps/MossdeepCity/scripts.pory"
	end
# 269 "data/maps/MossdeepCity/scripts.pory"

# 270 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitNorth::
# 271 "data/maps/MossdeepCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 272 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_SCOTT, MossdeepCity_Movement_ScottExitNorth
# 273 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 274 "data/maps/MossdeepCity/scripts.pory"
	return
# 275 "data/maps/MossdeepCity/scripts.pory"

# 276 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitEast::
# 277 "data/maps/MossdeepCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 278 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_SCOTT, MossdeepCity_Movement_ScottExitEast
# 279 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 280 "data/maps/MossdeepCity/scripts.pory"
	return
# 281 "data/maps/MossdeepCity/scripts.pory"

# 282 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_PlayerWatchScottExit:
# 283 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 284 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 285 "data/maps/MossdeepCity/scripts.pory"
	walk_in_place_faster_left
# 286 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 287 "data/maps/MossdeepCity/scripts.pory"

# 288 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitNorth:
# 289 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 290 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 291 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 292 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 293 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 294 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 295 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 296 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 297 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 298 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 299 "data/maps/MossdeepCity/scripts.pory"

# 300 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitEast:
# 301 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 302 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 303 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 304 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 305 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 306 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 307 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 308 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 309 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 310 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 311 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 312 "data/maps/MossdeepCity/scripts.pory"

# 313 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WantKingsRockStevenGaveMe:
# 314 "data/maps/MossdeepCity/scripts.pory"
	.string "I got this from STEVEN, but I don't\n"
# 315 "data/maps/MossdeepCity/scripts.pory"
	.string "know what it's good for.\p"
# 316 "data/maps/MossdeepCity/scripts.pory"
	.string "I think it's called KING'S ROCK.\n"
# 317 "data/maps/MossdeepCity/scripts.pory"
	.string "Do you want it?$"
# 318 "data/maps/MossdeepCity/scripts.pory"

# 319 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_YouCanKeepIt:
# 320 "data/maps/MossdeepCity/scripts.pory"
	.string "Why would you want it?\n"
# 321 "data/maps/MossdeepCity/scripts.pory"
	.string "You're weird.\p"
# 322 "data/maps/MossdeepCity/scripts.pory"
	.string "You can keep it, but keep it a secret\n"
# 323 "data/maps/MossdeepCity/scripts.pory"
	.string "from STEVEN.$"
# 324 "data/maps/MossdeepCity/scripts.pory"

# 325 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_StevensHouseOverThere:
# 326 "data/maps/MossdeepCity/scripts.pory"
	.string "STEVEN's house is right over there!$"
# 327 "data/maps/MossdeepCity/scripts.pory"

# 328 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WhatToDoWithWeirdRock:
# 329 "data/maps/MossdeepCity/scripts.pory"
	.string "Yeah, you think so, too! What are you\n"
# 330 "data/maps/MossdeepCity/scripts.pory"
	.string "supposed to do with some weird rock?$"
# 331 "data/maps/MossdeepCity/scripts.pory"

# 332 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WailmerWatching:
# 333 "data/maps/MossdeepCity/scripts.pory"
	.string "Around MOSSDEEP, you can see wild\n"
# 334 "data/maps/MossdeepCity/scripts.pory"
	.string "WAILMER.\p"
# 335 "data/maps/MossdeepCity/scripts.pory"
	.string "It's called, uh…\n"
# 336 "data/maps/MossdeepCity/scripts.pory"
	.string "What was it now…\p"
# 337 "data/maps/MossdeepCity/scripts.pory"
	.string "WAI, WAI, WAI…\p"
# 338 "data/maps/MossdeepCity/scripts.pory"
	.string "WAILMER watching!$"
# 339 "data/maps/MossdeepCity/scripts.pory"

# 340 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterReceivedLetter:
# 341 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's SPACE CENTER has been\n"
# 342 "data/maps/MossdeepCity/scripts.pory"
	.string "launching huge rockets.\p"
# 343 "data/maps/MossdeepCity/scripts.pory"
	.string "There's been some kind of an uproar\n"
# 344 "data/maps/MossdeepCity/scripts.pory"
	.string "over a letter they received recently.$"
# 345 "data/maps/MossdeepCity/scripts.pory"

# 346 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterLaunchingRockets:
# 347 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's SPACE CENTER has been\n"
# 348 "data/maps/MossdeepCity/scripts.pory"
	.string "launching huge rockets.$"
# 349 "data/maps/MossdeepCity/scripts.pory"

# 350 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_MossdeepTargetedByMagma:
# 351 "data/maps/MossdeepCity/scripts.pory"
	.string "I heard from a SAILOR buddy that\n"
# 352 "data/maps/MossdeepCity/scripts.pory"
	.string "TEAM AQUA set up shop in LILYCOVE.\p"
# 353 "data/maps/MossdeepCity/scripts.pory"
	.string "I also heard that someone came along\n"
# 354 "data/maps/MossdeepCity/scripts.pory"
	.string "and wiped the floor with them!\p"
# 355 "data/maps/MossdeepCity/scripts.pory"
	.string "But MOSSDEEP here's been targeted\n"
# 356 "data/maps/MossdeepCity/scripts.pory"
	.string "by that TEAM MAGMA.\p"
# 357 "data/maps/MossdeepCity/scripts.pory"
	.string "If you want to know what they're up to,\n"
# 358 "data/maps/MossdeepCity/scripts.pory"
	.string "go visit the SPACE CENTER.$"
# 359 "data/maps/MossdeepCity/scripts.pory"

# 360 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_FeelReliefOnLand:
# 361 "data/maps/MossdeepCity/scripts.pory"
	.string "I'm a SAILOR, so the sea's obviously\n"
# 362 "data/maps/MossdeepCity/scripts.pory"
	.string "more important to me.\p"
# 363 "data/maps/MossdeepCity/scripts.pory"
	.string "But you know? When I get back on land\n"
# 364 "data/maps/MossdeepCity/scripts.pory"
	.string "after a long voyage, I do feel relief!$"
# 365 "data/maps/MossdeepCity/scripts.pory"

# 366 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_NiceIfWorldCoveredByFlowers:
# 367 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't it be nice?\p"
# 368 "data/maps/MossdeepCity/scripts.pory"
	.string "If the whole world was covered in\n"
# 369 "data/maps/MossdeepCity/scripts.pory"
	.string "plants and flowers like this island?$"
# 370 "data/maps/MossdeepCity/scripts.pory"

# 371 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_LifeNeedsSeaToLive:
# 372 "data/maps/MossdeepCity/scripts.pory"
	.string "All life needs the sea to live, even\n"
# 373 "data/maps/MossdeepCity/scripts.pory"
	.string "though it makes its home on the land.\p"
# 374 "data/maps/MossdeepCity/scripts.pory"
	.string "Life, having run its course, becomes\n"
# 375 "data/maps/MossdeepCity/scripts.pory"
	.string "soil and returns to the land.\p"
# 376 "data/maps/MossdeepCity/scripts.pory"
	.string "And the sea is always connected to\n"
# 377 "data/maps/MossdeepCity/scripts.pory"
	.string "the land.\p"
# 378 "data/maps/MossdeepCity/scripts.pory"
	.string "Yes, like the very shoreline here.$"
# 379 "data/maps/MossdeepCity/scripts.pory"

# 380 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SurfExhilarating:
# 381 "data/maps/MossdeepCity/scripts.pory"
	.string "A voyage on a ship is fine.\p"
# 382 "data/maps/MossdeepCity/scripts.pory"
	.string "But crossing the sea with POKéMON\n"
# 383 "data/maps/MossdeepCity/scripts.pory"
	.string "using SURF…\p"
# 384 "data/maps/MossdeepCity/scripts.pory"
	.string "Now that's an exhilarating trip!\n"
# 385 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't you agree, youngster?$"
# 386 "data/maps/MossdeepCity/scripts.pory"

# 387 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpecialSpaceCenterRock:
# 388 "data/maps/MossdeepCity/scripts.pory"
	.string "This rock has a special meaning to\n"
# 389 "data/maps/MossdeepCity/scripts.pory"
	.string "the people at the SPACE CENTER.\p"
# 390 "data/maps/MossdeepCity/scripts.pory"
	.string "They put it here as their wish for\n"
# 391 "data/maps/MossdeepCity/scripts.pory"
	.string "their rockets to fly safely.\p"
# 392 "data/maps/MossdeepCity/scripts.pory"
	.string "When you make a wish, what do you use?\n"
# 393 "data/maps/MossdeepCity/scripts.pory"
	.string "Do you wish upon a star?\p"
# 394 "data/maps/MossdeepCity/scripts.pory"
	.string "I use a wish tag to make it happen.\n"
# 395 "data/maps/MossdeepCity/scripts.pory"
	.string "That's what I do.$"
# 396 "data/maps/MossdeepCity/scripts.pory"

# 397 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ItsAWhiteRock:
# 398 "data/maps/MossdeepCity/scripts.pory"
	.string "It's a white rock.$"
# 399 "data/maps/MossdeepCity/scripts.pory"

# 400 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_GymSign:
# 401 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\n"
# 402 "data/maps/MossdeepCity/scripts.pory"
	.string "LEADERS: MOMO & ARIA\p"
# 403 "data/maps/MossdeepCity/scripts.pory"
	.string "“The bald and brave!”$"
# 404 "data/maps/MossdeepCity/scripts.pory"

# 405 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_CitySign:
# 406 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP CITY\n"
# 407 "data/maps/MossdeepCity/scripts.pory"
	.string "“Our slogan: Cherish POKéMON!”$"
# 408 "data/maps/MossdeepCity/scripts.pory"

# 409 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterSign:
# 410 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP SPACE CENTER\n"
# 411 "data/maps/MossdeepCity/scripts.pory"
	.string "“The closest place to space.”$"
# 412 "data/maps/MossdeepCity/scripts.pory"

# 413 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ScottSomethingWrongWithTown:
# 414 "data/maps/MossdeepCity/scripts.pory"
	.string "SCOTT: {PLAYER}{KUN}, feeling good?\n"
# 415 "data/maps/MossdeepCity/scripts.pory"
	.string "I'm doing great!\p"
# 416 "data/maps/MossdeepCity/scripts.pory"
	.string "I'd heard MOSSDEEP's GYM LEADER is\n"
# 417 "data/maps/MossdeepCity/scripts.pory"
	.string "pretty strong, so I decided to come\l"
# 418 "data/maps/MossdeepCity/scripts.pory"
	.string "take a look-see for myself.\p"
# 419 "data/maps/MossdeepCity/scripts.pory"
	.string "But there's something wrong about\n"
# 420 "data/maps/MossdeepCity/scripts.pory"
	.string "this town.\p"
# 421 "data/maps/MossdeepCity/scripts.pory"
	.string "People are going on about a warning\n"
# 422 "data/maps/MossdeepCity/scripts.pory"
	.string "letter and the SPACE CENTER…\p"
# 423 "data/maps/MossdeepCity/scripts.pory"
	.string "I don't think it concerns me in any\n"
# 424 "data/maps/MossdeepCity/scripts.pory"
	.string "way, though.$"
# 425 "data/maps/MossdeepCity/scripts.pory"

# 426 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SootopolisNewGymLeader:
# 427 "data/maps/MossdeepCity/scripts.pory"
	.string "Ahh… It feels great letting the waves\n"
# 428 "data/maps/MossdeepCity/scripts.pory"
	.string "wash over my feet…\p"
# 429 "data/maps/MossdeepCity/scripts.pory"
	.string "Speaking of the waves, you know that\n"
# 430 "data/maps/MossdeepCity/scripts.pory"
	.string "island city SOOTOPOLIS?\p"
# 431 "data/maps/MossdeepCity/scripts.pory"
	.string "I think the GYM there had a new\n"
# 432 "data/maps/MossdeepCity/scripts.pory"
	.string "LEADER come in.\p"
# 433 "data/maps/MossdeepCity/scripts.pory"
	.string "People tell me they always say\n"
# 434 "data/maps/MossdeepCity/scripts.pory"
	.string "“yeah” and “yeet”.$"

MossdeepCity_Gym_NPC::
# 439 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_GymLeaderGone, MSGBOX_NPC
	end


MossdeepCity_Text_GymLeaderGone::
# 443 "data/maps/MossdeepCity/scripts.pory"
	.string "Well met, challenger. Here to take on\n the GYM, I presume.\p The knight commander has left with their\n Order to train in SHOAL CAVE.\p You'll have to wait until they return,\n unless you're brave enough to go\l get them yourself..$"
