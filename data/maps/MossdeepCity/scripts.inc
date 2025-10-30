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
	map_script MAP_SCRIPT_ON_RESUME, MossdeepCity_OnResume
# 11 "data/maps/MossdeepCity/scripts.pory"
	.byte 0
# 12 "data/maps/MossdeepCity/scripts.pory"

# 13 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_OnTransition:
# 14 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_SYS_DYNAMIC_LEVELS
# 15 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 16 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 17 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 18 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 19 "data/maps/MossdeepCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 20 "data/maps/MossdeepCity/scripts.pory"
	end
# 21 "data/maps/MossdeepCity/scripts.pory"

# 22 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_OnResume:
# 23 "data/maps/MossdeepCity/scripts.pory"
	call_if_defeated TRAINER_MOMO, MossdeepCity_RemoveMomoShadowClone
# 24 "data/maps/MossdeepCity/scripts.pory"
	end
# 25 "data/maps/MossdeepCity/scripts.pory"

# 26 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_RemoveMomoShadowClone:
# 27 "data/maps/MossdeepCity/scripts.pory"
	removeobject 20
# 28 "data/maps/MossdeepCity/scripts.pory"
	return
# 29 "data/maps/MossdeepCity/scripts.pory"

# 30 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanF::
# 31 "data/maps/MossdeepCity/scripts.pory"
	lock
# 32 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 33 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_PokefanFMagmaGone
# 34 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterReceivedLetter, MSGBOX_DEFAULT
# 35 "data/maps/MossdeepCity/scripts.pory"
	release
# 36 "data/maps/MossdeepCity/scripts.pory"
	end
# 37 "data/maps/MossdeepCity/scripts.pory"

# 38 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanFMagmaGone::
# 39 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterLaunchingRockets, MSGBOX_DEFAULT
# 40 "data/maps/MossdeepCity/scripts.pory"
	release
# 41 "data/maps/MossdeepCity/scripts.pory"
	end
# 42 "data/maps/MossdeepCity/scripts.pory"

# 43 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Sailor::
# 44 "data/maps/MossdeepCity/scripts.pory"
	lock
# 45 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 46 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_SailorMagmaGone
# 47 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_MossdeepTargetedByMagma, MSGBOX_DEFAULT
# 48 "data/maps/MossdeepCity/scripts.pory"
	release
# 49 "data/maps/MossdeepCity/scripts.pory"
	end
# 50 "data/maps/MossdeepCity/scripts.pory"

# 51 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SailorMagmaGone::
# 52 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_FeelReliefOnLand, MSGBOX_DEFAULT
# 53 "data/maps/MossdeepCity/scripts.pory"
	release
# 54 "data/maps/MossdeepCity/scripts.pory"
	end
# 55 "data/maps/MossdeepCity/scripts.pory"

# 56 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_NinjaBoy::
# 57 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WailmerWatching, MSGBOX_NPC
# 58 "data/maps/MossdeepCity/scripts.pory"
	end
# 59 "data/maps/MossdeepCity/scripts.pory"

# 60 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ExpertM::
# 61 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_LifeNeedsSeaToLive, MSGBOX_NPC
# 62 "data/maps/MossdeepCity/scripts.pory"
	end
# 63 "data/maps/MossdeepCity/scripts.pory"

# 64 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Girl::
# 65 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_NiceIfWorldCoveredByFlowers, MSGBOX_NPC
# 66 "data/maps/MossdeepCity/scripts.pory"
	end
# 67 "data/maps/MossdeepCity/scripts.pory"

# 68 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Woman::
# 69 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpecialSpaceCenterRock, MSGBOX_NPC
# 70 "data/maps/MossdeepCity/scripts.pory"
	end
# 71 "data/maps/MossdeepCity/scripts.pory"

# 72 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_WhiteRock::
# 73 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ItsAWhiteRock, MSGBOX_SIGN
# 74 "data/maps/MossdeepCity/scripts.pory"
	end
# 75 "data/maps/MossdeepCity/scripts.pory"

# 76 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_GymSign::
# 77 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_GymSign, MSGBOX_SIGN
# 78 "data/maps/MossdeepCity/scripts.pory"
	end
# 79 "data/maps/MossdeepCity/scripts.pory"

# 80 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_CitySign::
# 81 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_CitySign, MSGBOX_SIGN
# 82 "data/maps/MossdeepCity/scripts.pory"
	end
# 83 "data/maps/MossdeepCity/scripts.pory"

# 84 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SpaceCenterSign::
# 85 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterSign, MSGBOX_SIGN
# 86 "data/maps/MossdeepCity/scripts.pory"
	end
# 87 "data/maps/MossdeepCity/scripts.pory"

# 88 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_VisitedMossdeep::
# 89 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_VISITED_MOSSDEEP_CITY
# 90 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 91 "data/maps/MossdeepCity/scripts.pory"
	end
# 92 "data/maps/MossdeepCity/scripts.pory"

# 93 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter::
# 94 "data/maps/MossdeepCity/scripts.pory"
	lockall
# 95 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MAXIE, MossdeepCity_Movement_MaxieGestureToSpaceCenter
# 96 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 97 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, MossdeepCity_Movement_GruntFaceSpaceCenter
# 98 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, MossdeepCity_Movement_GruntFaceSpaceCenter
# 99 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, MossdeepCity_Movement_GruntFaceSpaceCenter
# 100 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, MossdeepCity_Movement_GruntFaceSpaceCenter
# 101 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 102 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MAXIE, MossdeepCity_Movement_MaxieEnterSpaceCenter
# 103 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, MossdeepCity_Movement_Grunt1EnterSpaceCenter
# 104 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, MossdeepCity_Movement_Grunt2EnterSpaceCenter
# 105 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, MossdeepCity_Movement_Grunt3EnterSpaceCenter
# 106 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, MossdeepCity_Movement_Grunt4EnterSpaceCenter
# 107 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 108 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MAXIE
# 109 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 110 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 111 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 112 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_4
# 113 "data/maps/MossdeepCity/scripts.pory"
	delay 30
# 114 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 2
# 115 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 116 "data/maps/MossdeepCity/scripts.pory"
	releaseall
# 117 "data/maps/MossdeepCity/scripts.pory"
	end
# 118 "data/maps/MossdeepCity/scripts.pory"

# 119 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieGestureToSpaceCenter:
# 120 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 121 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 122 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 123 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 124 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 125 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 126 "data/maps/MossdeepCity/scripts.pory"
	face_left
# 127 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 128 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 129 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 130 "data/maps/MossdeepCity/scripts.pory"

# 131 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_GruntFaceSpaceCenter:
# 132 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 133 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 134 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 135 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 136 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 137 "data/maps/MossdeepCity/scripts.pory"

# 138 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieEnterSpaceCenter:
# 139 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 140 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 141 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 142 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 143 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 144 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 145 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 146 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 147 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 148 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 149 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 150 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 151 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 152 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 153 "data/maps/MossdeepCity/scripts.pory"

# 154 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt1EnterSpaceCenter:
# 155 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 156 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 157 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 158 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 159 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 160 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 161 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 162 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 163 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 164 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 165 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 166 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 167 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 168 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 169 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 170 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 171 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 172 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 173 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 174 "data/maps/MossdeepCity/scripts.pory"

# 175 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt2EnterSpaceCenter:
# 176 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 177 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 178 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 179 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 180 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 181 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 182 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 183 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 184 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 185 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 186 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 187 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 188 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 189 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 190 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 191 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 192 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 193 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 194 "data/maps/MossdeepCity/scripts.pory"

# 195 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt3EnterSpaceCenter:
# 196 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 197 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 198 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 199 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 200 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 201 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 202 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 203 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 204 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 205 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 206 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 207 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 208 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 209 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 210 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 211 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 212 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 213 "data/maps/MossdeepCity/scripts.pory"

# 214 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt4EnterSpaceCenter:
# 215 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 216 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 217 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 218 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 219 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 220 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 221 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 222 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 223 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 224 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 225 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 226 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 227 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 228 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 229 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 230 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 231 "data/maps/MossdeepCity/scripts.pory"

# 232 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Man::
# 233 "data/maps/MossdeepCity/scripts.pory"
	lock
# 234 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 235 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SurfExhilarating, MSGBOX_DEFAULT
# 236 "data/maps/MossdeepCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 237 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 238 "data/maps/MossdeepCity/scripts.pory"
	release
# 239 "data/maps/MossdeepCity/scripts.pory"
	end
# 240 "data/maps/MossdeepCity/scripts.pory"

# 241 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_KingsRockBoy::
# 242 "data/maps/MossdeepCity/scripts.pory"
	lock
# 243 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 244 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_KINGS_ROCK, MossdeepCity_EventScript_ReceivedKingsRock
# 245 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WantKingsRockStevenGaveMe, MSGBOX_YESNO
# 246 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_EventScript_DeclineKingsRock
# 247 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_YouCanKeepIt, MSGBOX_DEFAULT
# 248 "data/maps/MossdeepCity/scripts.pory"
	giveitem ITEM_KINGS_ROCK
# 249 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 250 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_RECEIVED_KINGS_ROCK
# 251 "data/maps/MossdeepCity/scripts.pory"
	release
# 252 "data/maps/MossdeepCity/scripts.pory"
	end
# 253 "data/maps/MossdeepCity/scripts.pory"

# 254 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ReceivedKingsRock::
# 255 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_StevensHouseOverThere, MSGBOX_DEFAULT
# 256 "data/maps/MossdeepCity/scripts.pory"
	release
# 257 "data/maps/MossdeepCity/scripts.pory"
	end
# 258 "data/maps/MossdeepCity/scripts.pory"

# 259 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_DeclineKingsRock::
# 260 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WhatToDoWithWeirdRock, MSGBOX_DEFAULT
# 261 "data/maps/MossdeepCity/scripts.pory"
	release
# 262 "data/maps/MossdeepCity/scripts.pory"
	end
# 263 "data/maps/MossdeepCity/scripts.pory"

# 264 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_BlackBelt::
# 265 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SootopolisNewGymLeader, MSGBOX_NPC
# 266 "data/maps/MossdeepCity/scripts.pory"
	end
# 267 "data/maps/MossdeepCity/scripts.pory"

# 268 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Scott::
# 269 "data/maps/MossdeepCity/scripts.pory"
	lock
# 270 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 271 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ScottSomethingWrongWithTown, MSGBOX_DEFAULT
# 272 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 273 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MossdeepCity_EventScript_ScottExitNorth
# 274 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MossdeepCity_EventScript_ScottExitEast
# 275 "data/maps/MossdeepCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 276 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 277 "data/maps/MossdeepCity/scripts.pory"
	release
# 278 "data/maps/MossdeepCity/scripts.pory"
	end
# 279 "data/maps/MossdeepCity/scripts.pory"

# 280 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitNorth::
# 281 "data/maps/MossdeepCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 282 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_SCOTT, MossdeepCity_Movement_ScottExitNorth
# 283 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 284 "data/maps/MossdeepCity/scripts.pory"
	return
# 285 "data/maps/MossdeepCity/scripts.pory"

# 286 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitEast::
# 287 "data/maps/MossdeepCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 288 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_SCOTT, MossdeepCity_Movement_ScottExitEast
# 289 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 290 "data/maps/MossdeepCity/scripts.pory"
	return
# 291 "data/maps/MossdeepCity/scripts.pory"

# 292 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_PlayerWatchScottExit:
# 293 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 294 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 295 "data/maps/MossdeepCity/scripts.pory"
	walk_in_place_faster_left
# 296 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 297 "data/maps/MossdeepCity/scripts.pory"

# 298 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitNorth:
# 299 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 300 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 301 "data/maps/MossdeepCity/scripts.pory"
	walk_left
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
	step_end
# 309 "data/maps/MossdeepCity/scripts.pory"

# 310 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitEast:
# 311 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 312 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 313 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 314 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 315 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 316 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 317 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 318 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 319 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 320 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 321 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 322 "data/maps/MossdeepCity/scripts.pory"

# 323 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WantKingsRockStevenGaveMe:
# 324 "data/maps/MossdeepCity/scripts.pory"
	.string "I got this from STEVEN, but I don't\n"
# 325 "data/maps/MossdeepCity/scripts.pory"
	.string "know what it's good for.\p"
# 326 "data/maps/MossdeepCity/scripts.pory"
	.string "I think it's called KING'S ROCK.\n"
# 327 "data/maps/MossdeepCity/scripts.pory"
	.string "Do you want it?$"
# 328 "data/maps/MossdeepCity/scripts.pory"

# 329 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_YouCanKeepIt:
# 330 "data/maps/MossdeepCity/scripts.pory"
	.string "Why would you want it?\n"
# 331 "data/maps/MossdeepCity/scripts.pory"
	.string "You're weird.\p"
# 332 "data/maps/MossdeepCity/scripts.pory"
	.string "You can keep it, but keep it a secret\n"
# 333 "data/maps/MossdeepCity/scripts.pory"
	.string "from STEVEN.$"
# 334 "data/maps/MossdeepCity/scripts.pory"

# 335 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_StevensHouseOverThere:
# 336 "data/maps/MossdeepCity/scripts.pory"
	.string "STEVEN's house is right over there!$"
# 337 "data/maps/MossdeepCity/scripts.pory"

# 338 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WhatToDoWithWeirdRock:
# 339 "data/maps/MossdeepCity/scripts.pory"
	.string "Yeah, you think so, too! What are you\n"
# 340 "data/maps/MossdeepCity/scripts.pory"
	.string "supposed to do with some weird rock?$"
# 341 "data/maps/MossdeepCity/scripts.pory"

# 342 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WailmerWatching:
# 343 "data/maps/MossdeepCity/scripts.pory"
	.string "The GYM LEADER here wears a\n"
# 344 "data/maps/MossdeepCity/scripts.pory"
	.string "real suit of armor!\p"
# 345 "data/maps/MossdeepCity/scripts.pory"
	.string "My mom said they have to wear it\n"
# 346 "data/maps/MossdeepCity/scripts.pory"
	.string "to protect their glass bones!\p"
# 347 "data/maps/MossdeepCity/scripts.pory"
	.string "Hahaha! How can they train\n"
# 348 "data/maps/MossdeepCity/scripts.pory"
	.string "so much with glass bones?$"
# 349 "data/maps/MossdeepCity/scripts.pory"

# 350 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterReceivedLetter:
# 351 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's SPACE CENTER has been\n"
# 352 "data/maps/MossdeepCity/scripts.pory"
	.string "launching huge rockets.\p"
# 353 "data/maps/MossdeepCity/scripts.pory"
	.string "There's been some kind of an uproar\n"
# 354 "data/maps/MossdeepCity/scripts.pory"
	.string "over a letter they received recently.$"
# 355 "data/maps/MossdeepCity/scripts.pory"

# 356 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterLaunchingRockets:
# 357 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's SPACE CENTER has been\n"
# 358 "data/maps/MossdeepCity/scripts.pory"
	.string "launching huge rockets.$"
# 359 "data/maps/MossdeepCity/scripts.pory"

# 360 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_MossdeepTargetedByMagma:
# 361 "data/maps/MossdeepCity/scripts.pory"
	.string "I heard from a SAILOR buddy that\n"
# 362 "data/maps/MossdeepCity/scripts.pory"
	.string "TEAM AQUA set up shop in LILYCOVE.\p"
# 363 "data/maps/MossdeepCity/scripts.pory"
	.string "I also heard that someone came along\n"
# 364 "data/maps/MossdeepCity/scripts.pory"
	.string "and wiped the floor with them!\p"
# 365 "data/maps/MossdeepCity/scripts.pory"
	.string "But MOSSDEEP here's been targeted\n"
# 366 "data/maps/MossdeepCity/scripts.pory"
	.string "by that TEAM MAGMA.\p"
# 367 "data/maps/MossdeepCity/scripts.pory"
	.string "If you want to know what they're up to,\n"
# 368 "data/maps/MossdeepCity/scripts.pory"
	.string "go visit the SPACE CENTER.$"
# 369 "data/maps/MossdeepCity/scripts.pory"

# 370 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_FeelReliefOnLand:
# 371 "data/maps/MossdeepCity/scripts.pory"
	.string "I'm a SAILOR, so the sea's obviously\n"
# 372 "data/maps/MossdeepCity/scripts.pory"
	.string "more important to me.\p"
# 373 "data/maps/MossdeepCity/scripts.pory"
	.string "But you know? When I get back on land\n"
# 374 "data/maps/MossdeepCity/scripts.pory"
	.string "after a long voyage, I do feel relief!$"
# 375 "data/maps/MossdeepCity/scripts.pory"

# 376 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_NiceIfWorldCoveredByFlowers:
# 377 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't it be nice?\p"
# 378 "data/maps/MossdeepCity/scripts.pory"
	.string "If the whole world was covered in\n"
# 379 "data/maps/MossdeepCity/scripts.pory"
	.string "plants and flowers like this island?$"
# 380 "data/maps/MossdeepCity/scripts.pory"

# 381 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_LifeNeedsSeaToLive:
# 382 "data/maps/MossdeepCity/scripts.pory"
	.string "All life needs the sea to live, even\n"
# 383 "data/maps/MossdeepCity/scripts.pory"
	.string "though it makes its home on the land.\p"
# 384 "data/maps/MossdeepCity/scripts.pory"
	.string "Life, having run its course, becomes\n"
# 385 "data/maps/MossdeepCity/scripts.pory"
	.string "soil and returns to the land.\p"
# 386 "data/maps/MossdeepCity/scripts.pory"
	.string "And the sea is always connected to\n"
# 387 "data/maps/MossdeepCity/scripts.pory"
	.string "the land.\p"
# 388 "data/maps/MossdeepCity/scripts.pory"
	.string "Yes, like the very shoreline here.$"
# 389 "data/maps/MossdeepCity/scripts.pory"

# 390 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SurfExhilarating:
# 391 "data/maps/MossdeepCity/scripts.pory"
	.string "A voyage on a ship is fine.\p"
# 392 "data/maps/MossdeepCity/scripts.pory"
	.string "But crossing the sea with POKéMON\n"
# 393 "data/maps/MossdeepCity/scripts.pory"
	.string "using SURF…\p"
# 394 "data/maps/MossdeepCity/scripts.pory"
	.string "Now that's an exhilarating trip!\n"
# 395 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't you agree, youngster?$"
# 396 "data/maps/MossdeepCity/scripts.pory"

# 397 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpecialSpaceCenterRock:
# 398 "data/maps/MossdeepCity/scripts.pory"
	.string "This rock has a special meaning to\n"
# 399 "data/maps/MossdeepCity/scripts.pory"
	.string "the people at the SPACE CENTER.\p"
# 400 "data/maps/MossdeepCity/scripts.pory"
	.string "They put it here as their wish for\n"
# 401 "data/maps/MossdeepCity/scripts.pory"
	.string "their rockets to fly safely.\p"
# 402 "data/maps/MossdeepCity/scripts.pory"
	.string "When you make a wish, what do you use?\n"
# 403 "data/maps/MossdeepCity/scripts.pory"
	.string "Do you wish upon a star?\p"
# 404 "data/maps/MossdeepCity/scripts.pory"
	.string "I use a wish tag to make it happen.\n"
# 405 "data/maps/MossdeepCity/scripts.pory"
	.string "That's what I do.$"
# 406 "data/maps/MossdeepCity/scripts.pory"

# 407 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ItsAWhiteRock:
# 408 "data/maps/MossdeepCity/scripts.pory"
	.string "It's a white rock.$"
# 409 "data/maps/MossdeepCity/scripts.pory"

# 410 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_GymSign:
# 411 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\n"
# 412 "data/maps/MossdeepCity/scripts.pory"
	.string "LEADERS: MOMO & ARIA\p"
# 413 "data/maps/MossdeepCity/scripts.pory"
	.string "“The bald NINJA and KNIGHT\n"
# 414 "data/maps/MossdeepCity/scripts.pory"
	.string "of the SACRED BLADE!”$"
# 415 "data/maps/MossdeepCity/scripts.pory"

# 416 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_CitySign:
# 417 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP CITY\n"
# 418 "data/maps/MossdeepCity/scripts.pory"
	.string "“Our slogan: Cherish POKéMON!”$"
# 419 "data/maps/MossdeepCity/scripts.pory"

# 420 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterSign:
# 421 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP SPACE CENTER\n"
# 422 "data/maps/MossdeepCity/scripts.pory"
	.string "“The closest place to space.”$"
# 423 "data/maps/MossdeepCity/scripts.pory"

# 424 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ScottSomethingWrongWithTown:
# 425 "data/maps/MossdeepCity/scripts.pory"
	.string "SCOTT: {PLAYER}{KUN}, feeling good?\n"
# 426 "data/maps/MossdeepCity/scripts.pory"
	.string "I'm doing great!\p"
# 427 "data/maps/MossdeepCity/scripts.pory"
	.string "I'd heard MOSSDEEP's GYM LEADER is\n"
# 428 "data/maps/MossdeepCity/scripts.pory"
	.string "pretty strong, so I decided to come\l"
# 429 "data/maps/MossdeepCity/scripts.pory"
	.string "take a look-see for myself.\p"
# 430 "data/maps/MossdeepCity/scripts.pory"
	.string "But there's something wrong about\n"
# 431 "data/maps/MossdeepCity/scripts.pory"
	.string "this town.\p"
# 432 "data/maps/MossdeepCity/scripts.pory"
	.string "People are going on about a warning\n"
# 433 "data/maps/MossdeepCity/scripts.pory"
	.string "letter and the SPACE CENTER…\p"
# 434 "data/maps/MossdeepCity/scripts.pory"
	.string "I don't think it concerns me in any\n"
# 435 "data/maps/MossdeepCity/scripts.pory"
	.string "way, though.$"
# 436 "data/maps/MossdeepCity/scripts.pory"

# 437 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SootopolisNewGymLeader:
# 438 "data/maps/MossdeepCity/scripts.pory"
	.string "Ahh… It feels great letting the waves\n"
# 439 "data/maps/MossdeepCity/scripts.pory"
	.string "wash over my feet…\p"
# 440 "data/maps/MossdeepCity/scripts.pory"
	.string "Speaking of the waves, you know that\n"
# 441 "data/maps/MossdeepCity/scripts.pory"
	.string "island city SOOTOPOLIS?\p"
# 442 "data/maps/MossdeepCity/scripts.pory"
	.string "I think the GYM there had a new\n"
# 443 "data/maps/MossdeepCity/scripts.pory"
	.string "LEADER come in.\p"
# 444 "data/maps/MossdeepCity/scripts.pory"
	.string "People tell me they always say\n"
# 445 "data/maps/MossdeepCity/scripts.pory"
	.string "“yeah” and “yeet”.$"

MossdeepCity_EventScript_Momo::
# 450 "data/maps/MossdeepCity/scripts.pory"
	lock
# 451 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 452 "data/maps/MossdeepCity/scripts.pory"
	goto_if_not_defeated TRAINER_MOMO, MossdeepCity_EventScript_MomoBattle
# 453 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_Momo_Text_0, MSGBOX_AUTOCLOSE
# 456 "data/maps/MossdeepCity/scripts.pory"
	release
	end


MossdeepCity_EventScript_MomoBattle::
# 461 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_MomoBattle_Text_0, MSGBOX_YESNO
# 468 "data/maps/MossdeepCity/scripts.pory"
	waitmessage
# 469 "data/maps/MossdeepCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_EventScript_MomoBattle_2
# 474 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_MomoBattle_Text_2, MSGBOX_AUTOCLOSE
# 477 "data/maps/MossdeepCity/scripts.pory"
	waitmessage
# 478 "data/maps/MossdeepCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 479 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 480 "data/maps/MossdeepCity/scripts.pory"
	callnative RemoveFollowingPokemon
# 481 "data/maps/MossdeepCity/scripts.pory"
	fadeoutbgm 0
# 482 "data/maps/MossdeepCity/scripts.pory"
	delay 24
# 483 "data/maps/MossdeepCity/scripts.pory"
	playse SE_ARENA_TIMEUP1
# 484 "data/maps/MossdeepCity/scripts.pory"
	delay 16
# 485 "data/maps/MossdeepCity/scripts.pory"
	playse SE_ARENA_TIMEUP1
# 486 "data/maps/MossdeepCity/scripts.pory"
	waitse
# 487 "data/maps/MossdeepCity/scripts.pory"
	delay 24
# 488 "data/maps/MossdeepCity/scripts.pory"
	playse SE_ARENA_TIMEUP1
# 489 "data/maps/MossdeepCity/scripts.pory"
	waitse
# 490 "data/maps/MossdeepCity/scripts.pory"
	playse SE_M_PETAL_DANCE
# 491 "data/maps/MossdeepCity/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 492 "data/maps/MossdeepCity/scripts.pory"
	waitse
# 494 "data/maps/MossdeepCity/scripts.pory"
	addobject 20
# 495 "data/maps/MossdeepCity/scripts.pory"
	call MossdeepCity_EventScript_MomoShadowClone
# 496 "data/maps/MossdeepCity/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 497 "data/maps/MossdeepCity/scripts.pory"
	delay 20
# 498 "data/maps/MossdeepCity/scripts.pory"
	playbgm MUS_KIMONO_DANCE, FALSE
# 499 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_MomoBattle_Text_3, MSGBOX_AUTOCLOSE
# 503 "data/maps/MossdeepCity/scripts.pory"
	waitmessage
# 504 "data/maps/MossdeepCity/scripts.pory"
	trainerbattle_two_trainers TRAINER_MOMO, MossdeepCity_EventScript_MomoBattle_Text_4, TRAINER_SHADOW_CLONE_MOMO, MossdeepCity_EventScript_MomoBattle_Text_5
# 505 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_MomoBattle_Text_6, MSGBOX_AUTOCLOSE
# 510 "data/maps/MossdeepCity/scripts.pory"
	waitmessage
# 511 "data/maps/MossdeepCity/scripts.pory"
	addvar VAR_GYM_LEADER_COUNT, 1
# 512 "data/maps/MossdeepCity/scripts.pory"
	callnative UpdateFollowingPokemon
# 513 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_GYM_LEADER_COUNT, 9, EventScript_UnlockEliteFourFinalRematch
MossdeepCity_EventScript_MomoBattle_1:
# 515 "data/maps/MossdeepCity/scripts.pory"
	release
	end

MossdeepCity_EventScript_MomoBattle_2:
# 470 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_MomoBattle_Text_1, MSGBOX_AUTOCLOSE
# 471 "data/maps/MossdeepCity/scripts.pory"
	waitmessage
	goto MossdeepCity_EventScript_MomoBattle_1


MossdeepCity_EventScript_MomoShadowClone::
# 520 "data/maps/MossdeepCity/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_4
# 521 "data/maps/MossdeepCity/scripts.pory"
	compare VAR_TEMP_2, 37
	goto_if_eq MossdeepCity_EventScript_MomoShadowClone_8
MossdeepCity_EventScript_MomoShadowClone_6:
# 524 "data/maps/MossdeepCity/scripts.pory"
	compare VAR_TEMP_2, 39
	goto_if_eq MossdeepCity_EventScript_MomoShadowClone_5
MossdeepCity_EventScript_MomoShadowClone_4:
# 528 "data/maps/MossdeepCity/scripts.pory"
	applymovement 20, Common_Movement_FaceDown
MossdeepCity_EventScript_MomoShadowClone_1:
# 530 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 20
	return

MossdeepCity_EventScript_MomoShadowClone_2:
# 522 "data/maps/MossdeepCity/scripts.pory"
	applymovement 20, MossdeepCity_Movement_MomoClone
	goto MossdeepCity_EventScript_MomoShadowClone_1

MossdeepCity_EventScript_MomoShadowClone_3:
# 525 "data/maps/MossdeepCity/scripts.pory"
	applymovement 20, MossdeepCity_Movement_MomoClone2
	goto MossdeepCity_EventScript_MomoShadowClone_1

MossdeepCity_EventScript_MomoShadowClone_5:
# 524 "data/maps/MossdeepCity/scripts.pory"
	compare VAR_TEMP_4, 10
	goto_if_eq MossdeepCity_EventScript_MomoShadowClone_3
	goto MossdeepCity_EventScript_MomoShadowClone_4

MossdeepCity_EventScript_MomoShadowClone_8:
# 521 "data/maps/MossdeepCity/scripts.pory"
	compare VAR_TEMP_4, 10
	goto_if_eq MossdeepCity_EventScript_MomoShadowClone_2
	goto MossdeepCity_EventScript_MomoShadowClone_6


MossdeepCity_EventScript_Aria::
# 535 "data/maps/MossdeepCity/scripts.pory"
	lock
# 536 "data/maps/MossdeepCity/scripts.pory"
	goto_if_not_defeated TRAINER_ARIA, MossdeepCity_EventScript_AriaBattle
# 537 "data/maps/MossdeepCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE_PARTNER, MossdeepCity_EventScript_GiveTotodile
# 538 "data/maps/MossdeepCity/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_1
# 539 "data/maps/MossdeepCity/scripts.pory"
	playbgm MUS_NONE, FALSE
# 540 "data/maps/MossdeepCity/scripts.pory"
	delay 20
# 541 "data/maps/MossdeepCity/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 542 "data/maps/MossdeepCity/scripts.pory"
	waitse
# 543 "data/maps/MossdeepCity/scripts.pory"
	playmoncry SPECIES_ETERNATUS, CRY_MODE_NORMAL
# 544 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_Aria_Text_0, MSGBOX_DEFAULT
# 546 "data/maps/MossdeepCity/scripts.pory"
	waitmoncry
# 547 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 548 "data/maps/MossdeepCity/scripts.pory"
	playse SE_PIN
# 549 "data/maps/MossdeepCity/scripts.pory"
	applymovement 21, Common_Movement_ExclamationMark
# 550 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 21
# 551 "data/maps/MossdeepCity/scripts.pory"
	waitse
# 552 "data/maps/MossdeepCity/scripts.pory"
	setobjectnewmovementtype 21, MOVEMENT_TYPE_NONE
# 553 "data/maps/MossdeepCity/scripts.pory"
	applymovement 21, Common_Movement_FacePlayer
# 554 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 21
# 555 "data/maps/MossdeepCity/scripts.pory"
	delay 40
# 557 "data/maps/MossdeepCity/scripts.pory"
	playmoncry SPECIES_TERAPAGOS, CRY_MODE_NORMAL
# 558 "data/maps/MossdeepCity/scripts.pory"
	call ShoalCave_LowTideIceRoom_EventScript_AriaPosition1
# 559 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 21
# 560 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_Aria_Text_1, MSGBOX_DEFAULT
# 561 "data/maps/MossdeepCity/scripts.pory"
	waitmoncry
# 562 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 563 "data/maps/MossdeepCity/scripts.pory"
	fadedefaultbgm
# 564 "data/maps/MossdeepCity/scripts.pory"
	call ShoalCave_LowTideIceRoom_EventScript_AriaPosition2
# 565 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 21
# 566 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_Aria_Text_2, MSGBOX_AUTOCLOSE
# 570 "data/maps/MossdeepCity/scripts.pory"
	waitmessage
# 571 "data/maps/MossdeepCity/scripts.pory"
	setobjectnewmovementtype 21, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 572 "data/maps/MossdeepCity/scripts.pory"
	applymovement 21, Common_Movement_WalkInPlaceDown
# 573 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 21
# 574 "data/maps/MossdeepCity/scripts.pory"
	release
	end


MossdeepCity_EventScript_AriaBattle::
# 579 "data/maps/MossdeepCity/scripts.pory"
	lock
# 580 "data/maps/MossdeepCity/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_1
# 581 "data/maps/MossdeepCity/scripts.pory"
	playbgm MUS_NONE, FALSE
# 582 "data/maps/MossdeepCity/scripts.pory"
	delay 20
# 583 "data/maps/MossdeepCity/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 584 "data/maps/MossdeepCity/scripts.pory"
	waitse
# 585 "data/maps/MossdeepCity/scripts.pory"
	playmoncry SPECIES_ETERNATUS, CRY_MODE_NORMAL
# 586 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_Aria_Text_0, MSGBOX_DEFAULT
# 588 "data/maps/MossdeepCity/scripts.pory"
	waitmoncry
# 589 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 590 "data/maps/MossdeepCity/scripts.pory"
	playse SE_PIN
# 591 "data/maps/MossdeepCity/scripts.pory"
	applymovement 21, Common_Movement_ExclamationMark
# 592 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 21
# 593 "data/maps/MossdeepCity/scripts.pory"
	waitse
# 594 "data/maps/MossdeepCity/scripts.pory"
	setobjectnewmovementtype 21, MOVEMENT_TYPE_NONE
# 595 "data/maps/MossdeepCity/scripts.pory"
	applymovement 21, Common_Movement_FacePlayer
# 596 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 21
# 597 "data/maps/MossdeepCity/scripts.pory"
	delay 40
# 599 "data/maps/MossdeepCity/scripts.pory"
	playmoncry SPECIES_TERAPAGOS, CRY_MODE_NORMAL
# 600 "data/maps/MossdeepCity/scripts.pory"
	call ShoalCave_LowTideIceRoom_EventScript_AriaPosition1
# 601 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 21
# 602 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_Aria_Text_1, MSGBOX_DEFAULT
# 603 "data/maps/MossdeepCity/scripts.pory"
	waitmoncry
# 604 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 605 "data/maps/MossdeepCity/scripts.pory"
	playbgm MUS_ENCOUNTER_COOL, FALSE
# 606 "data/maps/MossdeepCity/scripts.pory"
	call ShoalCave_LowTideIceRoom_EventScript_AriaPosition2
# 607 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 21
# 608 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_AriaBattle_Text_0, MSGBOX_AUTOCLOSE
# 616 "data/maps/MossdeepCity/scripts.pory"
	waitmessage
# 617 "data/maps/MossdeepCity/scripts.pory"
	trainerbattle_no_intro TRAINER_ARIA, MossdeepCity_EventScript_AriaBattle_Text_1
# 618 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_AriaBattle_Text_2, MSGBOX_DEFAULT
# 620 "data/maps/MossdeepCity/scripts.pory"
	waitmessage
# 621 "data/maps/MossdeepCity/scripts.pory"
	addvar VAR_GYM_LEADER_COUNT, 1
# 622 "data/maps/MossdeepCity/scripts.pory"
	checkitem ITEM_SACRED_BLADE
# 623 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MossdeepCity_EventScript_GiveTotodilePostBattle
# 624 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_AriaBattle_Text_3, MSGBOX_AUTOCLOSE
# 628 "data/maps/MossdeepCity/scripts.pory"
	waitmessage
# 629 "data/maps/MossdeepCity/scripts.pory"
	setobjectnewmovementtype 21, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 630 "data/maps/MossdeepCity/scripts.pory"
	applymovement 21, Common_Movement_WalkInPlaceDown
# 631 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 21
# 632 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_GYM_LEADER_COUNT, 9, EventScript_UnlockEliteFourFinalRematch
# 633 "data/maps/MossdeepCity/scripts.pory"
	release
	end


MossdeepCity_EventScript_GiveTotodilePostBattle::
# 638 "data/maps/MossdeepCity/scripts.pory"
	lock
# 639 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 640 "data/maps/MossdeepCity/scripts.pory"
	playse SE_PIN
# 641 "data/maps/MossdeepCity/scripts.pory"
	applymovement 21, Common_Movement_ExclamationMark
# 642 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 21
# 643 "data/maps/MossdeepCity/scripts.pory"
	waitse
# 644 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_GiveTotodilePostBattle_Text_0, MSGBOX_AUTOCLOSE
# 652 "data/maps/MossdeepCity/scripts.pory"
	waitmessage
# 653 "data/maps/MossdeepCity/scripts.pory"
	givemon SPECIES_TOTODILE_PARTNER, 100, ITEM_NONE, ITEM_POKE_BALL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 654 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TOTODILE
# 655 "data/maps/MossdeepCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MossdeepCity_EventScript_GiveTotodilePostBattle_2
# 661 "data/maps/MossdeepCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MossdeepCity_EventScript_GiveTotodilePostBattle_3
# 669 "data/maps/MossdeepCity/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
MossdeepCity_EventScript_GiveTotodilePostBattle_1:
# 671 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_GiveTotodilePostBattle_Text_3, MSGBOX_AUTOCLOSE
# 676 "data/maps/MossdeepCity/scripts.pory"
	waitmessage
# 677 "data/maps/MossdeepCity/scripts.pory"
	setobjectnewmovementtype 21, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 678 "data/maps/MossdeepCity/scripts.pory"
	applymovement 21, Common_Movement_WalkInPlaceDown
# 679 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 21
# 680 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_GYM_LEADER_COUNT, 9, EventScript_UnlockEliteFourFinalRematch
# 681 "data/maps/MossdeepCity/scripts.pory"
	release
	end

MossdeepCity_EventScript_GiveTotodilePostBattle_2:
# 656 "data/maps/MossdeepCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 657 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_GiveTotodilePostBattle_Text_1, MSGBOX_DEFAULT
# 658 "data/maps/MossdeepCity/scripts.pory"
	waitfanfare
# 659 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_RECEIVED_TOTODILE_PARTNER
	goto MossdeepCity_EventScript_GiveTotodilePostBattle_1

MossdeepCity_EventScript_GiveTotodilePostBattle_3:
# 662 "data/maps/MossdeepCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 663 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_GiveTotodilePostBattle_Text_2, MSGBOX_DEFAULT
# 665 "data/maps/MossdeepCity/scripts.pory"
	waitfanfare
# 666 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_RECEIVED_TOTODILE_PARTNER
	goto MossdeepCity_EventScript_GiveTotodilePostBattle_1


MossdeepCity_EventScript_GiveTotodile::
# 686 "data/maps/MossdeepCity/scripts.pory"
	lock
# 687 "data/maps/MossdeepCity/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_1
# 688 "data/maps/MossdeepCity/scripts.pory"
	playbgm MUS_NONE, FALSE
# 689 "data/maps/MossdeepCity/scripts.pory"
	delay 20
# 690 "data/maps/MossdeepCity/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 691 "data/maps/MossdeepCity/scripts.pory"
	waitse
# 692 "data/maps/MossdeepCity/scripts.pory"
	playmoncry SPECIES_ETERNATUS, CRY_MODE_NORMAL
# 693 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_Aria_Text_0, MSGBOX_DEFAULT
# 695 "data/maps/MossdeepCity/scripts.pory"
	waitmoncry
# 696 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 697 "data/maps/MossdeepCity/scripts.pory"
	playse SE_PIN
# 698 "data/maps/MossdeepCity/scripts.pory"
	applymovement 21, Common_Movement_ExclamationMark
# 699 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 21
# 700 "data/maps/MossdeepCity/scripts.pory"
	waitse
# 701 "data/maps/MossdeepCity/scripts.pory"
	setobjectnewmovementtype 21, MOVEMENT_TYPE_NONE
# 702 "data/maps/MossdeepCity/scripts.pory"
	applymovement 21, Common_Movement_FacePlayer
# 703 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 21
# 704 "data/maps/MossdeepCity/scripts.pory"
	delay 40
# 706 "data/maps/MossdeepCity/scripts.pory"
	playmoncry SPECIES_TERAPAGOS, CRY_MODE_NORMAL
# 707 "data/maps/MossdeepCity/scripts.pory"
	call ShoalCave_LowTideIceRoom_EventScript_AriaPosition1
# 708 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 21
# 709 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_Aria_Text_1, MSGBOX_DEFAULT
# 710 "data/maps/MossdeepCity/scripts.pory"
	waitmoncry
# 711 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 712 "data/maps/MossdeepCity/scripts.pory"
	fadedefaultbgm
# 713 "data/maps/MossdeepCity/scripts.pory"
	call ShoalCave_LowTideIceRoom_EventScript_AriaPosition2
# 714 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 21
# 715 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_GiveTotodile_Text_0, MSGBOX_DEFAULT
# 717 "data/maps/MossdeepCity/scripts.pory"
	waitmessage
# 718 "data/maps/MossdeepCity/scripts.pory"
	checkitem ITEM_SACRED_BLADE
# 719 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MossdeepCity_EventScript_GiveTotodilePostBattle
# 720 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 721 "data/maps/MossdeepCity/scripts.pory"
	setobjectnewmovementtype 21, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 722 "data/maps/MossdeepCity/scripts.pory"
	applymovement 21, Common_Movement_WalkInPlaceDown
# 723 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 21
# 724 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_GYM_LEADER_COUNT, 9, EventScript_UnlockEliteFourFinalRematch
# 725 "data/maps/MossdeepCity/scripts.pory"
	release
	end


MossdeepCity_Gym_NPC::
# 730 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_GymLeaderGone, MSGBOX_NPC
	end


MossdeepCity_EventScript_AriaSword::
# 735 "data/maps/MossdeepCity/scripts.pory"
	lockall
# 736 "data/maps/MossdeepCity/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 737 "data/maps/MossdeepCity/scripts.pory"
	waitse
# 738 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_AriaSword_Text_0, MSGBOX_AUTOCLOSE
# 741 "data/maps/MossdeepCity/scripts.pory"
	waitmessage
# 742 "data/maps/MossdeepCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 743 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 744 "data/maps/MossdeepCity/scripts.pory"
	releaseall
	end


MossdeepCity_EventScript_RecoverTutor::
# 749 "data/maps/MossdeepCity/scripts.pory"
	lock
# 750 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 751 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_RecoverTeach, MSGBOX_YESNO
# 752 "data/maps/MossdeepCity/scripts.pory"
	waitmessage
# 753 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_RecoverDeclined
# 754 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_RecoverTutor_Text_0, MSGBOX_DEFAULT
# 755 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_0x8005, MOVE_RECOVER
# 756 "data/maps/MossdeepCity/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 757 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_RecoverDeclined
# 758 "data/maps/MossdeepCity/scripts.pory"
	goto MoveTutor_EventScript_RecoverTaught
	end


MoveTutor_EventScript_RecoverDeclined::
# 763 "data/maps/MossdeepCity/scripts.pory"
	msgbox MoveTutor_EventScript_RecoverDeclined_Text_0, MSGBOX_AUTOCLOSE
# 765 "data/maps/MossdeepCity/scripts.pory"
	waitmessage
# 766 "data/maps/MossdeepCity/scripts.pory"
	release
	end


MoveTutor_EventScript_RecoverTaught::
# 771 "data/maps/MossdeepCity/scripts.pory"
	msgbox MoveTutor_EventScript_RecoverTaught_Text_0, MSGBOX_AUTOCLOSE
# 774 "data/maps/MossdeepCity/scripts.pory"
	waitmessage
# 775 "data/maps/MossdeepCity/scripts.pory"
	release
	end


# 799 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MomoClone:
# 800 "data/maps/MossdeepCity/scripts.pory"
	walk_fast_down
# 801 "data/maps/MossdeepCity/scripts.pory"
	walk_fast_left
	step_end

# 804 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MomoClone2:
# 805 "data/maps/MossdeepCity/scripts.pory"
	walk_fast_down
# 806 "data/maps/MossdeepCity/scripts.pory"
	walk_fast_left
# 807 "data/maps/MossdeepCity/scripts.pory"
	walk_in_place_right
	step_end

MossdeepCity_EventScript_PunchesTutor::
# 811 "data/maps/MossdeepCity/scripts.pory"
	lock
# 812 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 813 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_PunchesTutor_Text_0, MSGBOX_YESNO
# 817 "data/maps/MossdeepCity/scripts.pory"
	waitmessage
# 818 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MossdeepCity_EventScript_PunchesTutorChoices
# 819 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_PunchesTutorDecline
# 820 "data/maps/MossdeepCity/scripts.pory"
	release
	end


MossdeepCity_EventScript_PunchesTutorChoices::
# 825 "data/maps/MossdeepCity/scripts.pory"
	lock
# 826 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_PunchesTutorChoices_Text_0, MSGBOX_DEFAULT
# 827 "data/maps/MossdeepCity/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, MossdeepCity_EventScript_PunchesTutorChoices_Text_1, MossdeepCity_EventScript_PunchesTutorChoices_Text_2, MossdeepCity_EventScript_PunchesTutorChoices_Text_3, MossdeepCity_EventScript_PunchesTutorChoices_Text_4, MossdeepCity_EventScript_PunchesTutorChoices_Text_5, MossdeepCity_EventScript_PunchesTutorChoices_Text_6, MossdeepCity_EventScript_PunchesTutorChoices_Text_7, MossdeepCity_EventScript_PunchesTutorChoices_Text_8
# 829 "data/maps/MossdeepCity/scripts.pory"
	switch VAR_RESULT
# 830 "data/maps/MossdeepCity/scripts.pory"
	case 0, MossdeepCity_EventScript_PunchesTutorChoices_3
# 832 "data/maps/MossdeepCity/scripts.pory"
	case 1, MossdeepCity_EventScript_PunchesTutorChoices_4
# 834 "data/maps/MossdeepCity/scripts.pory"
	case 2, MossdeepCity_EventScript_PunchesTutorChoices_5
# 836 "data/maps/MossdeepCity/scripts.pory"
	case 3, MossdeepCity_EventScript_PunchesTutorChoices_6
# 838 "data/maps/MossdeepCity/scripts.pory"
	case 4, MossdeepCity_EventScript_PunchesTutorChoices_7
# 840 "data/maps/MossdeepCity/scripts.pory"
	case 5, MossdeepCity_EventScript_PunchesTutorChoices_8
# 842 "data/maps/MossdeepCity/scripts.pory"
	case 6, MossdeepCity_EventScript_PunchesTutorChoices_9
# 844 "data/maps/MossdeepCity/scripts.pory"
	case 7, MossdeepCity_EventScript_PunchesTutorChoices_10
# 846 "data/maps/MossdeepCity/scripts.pory"
	case MULTI_B_PRESSED, MossdeepCity_EventScript_PunchesTutorChoices_11
# 849 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_PunchesTutorDecline
MossdeepCity_EventScript_PunchesTutorChoices_1:
	end

MossdeepCity_EventScript_PunchesTutorChoices_3:
# 831 "data/maps/MossdeepCity/scripts.pory"
	goto MoveTutor_EventScript_FirePunchTeach
	goto MossdeepCity_EventScript_PunchesTutorChoices_1

MossdeepCity_EventScript_PunchesTutorChoices_4:
# 833 "data/maps/MossdeepCity/scripts.pory"
	goto MoveTutor_EventScript_IcePunchTeach
	goto MossdeepCity_EventScript_PunchesTutorChoices_1

MossdeepCity_EventScript_PunchesTutorChoices_5:
# 835 "data/maps/MossdeepCity/scripts.pory"
	goto MoveTutor_EventScript_ThunderPunchTeach
	goto MossdeepCity_EventScript_PunchesTutorChoices_1

MossdeepCity_EventScript_PunchesTutorChoices_6:
# 837 "data/maps/MossdeepCity/scripts.pory"
	goto MoveTutor_EventScript_BulletPunchTeach
	goto MossdeepCity_EventScript_PunchesTutorChoices_1

MossdeepCity_EventScript_PunchesTutorChoices_7:
# 839 "data/maps/MossdeepCity/scripts.pory"
	goto MoveTutor_EventScript_SuckerPunchTeach
	goto MossdeepCity_EventScript_PunchesTutorChoices_1

MossdeepCity_EventScript_PunchesTutorChoices_8:
# 841 "data/maps/MossdeepCity/scripts.pory"
	goto MoveTutor_EventScript_FakeOutTeach
	goto MossdeepCity_EventScript_PunchesTutorChoices_1

MossdeepCity_EventScript_PunchesTutorChoices_9:
# 843 "data/maps/MossdeepCity/scripts.pory"
	goto MoveTutor_EventScript_PowerUpPunchTeach
	goto MossdeepCity_EventScript_PunchesTutorChoices_1

MossdeepCity_EventScript_PunchesTutorChoices_10:
# 845 "data/maps/MossdeepCity/scripts.pory"
	goto MoveTutor_EventScript_MachPunchTeach
	goto MossdeepCity_EventScript_PunchesTutorChoices_1

MossdeepCity_EventScript_PunchesTutorChoices_11:
# 847 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_PunchesTutorDecline
	goto MossdeepCity_EventScript_PunchesTutorChoices_1


MoveTutor_EventScript_FirePunchTeach::
# 855 "data/maps/MossdeepCity/scripts.pory"
	msgbox MoveTutor_EventScript_FirePunchTeach_Text_0, MSGBOX_DEFAULT
# 856 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
# 857 "data/maps/MossdeepCity/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 858 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, MossdeepCity_EventScript_PunchesTutorDecline
# 859 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_PunchesTutorTaught
	end


MoveTutor_EventScript_IcePunchTeach::
# 864 "data/maps/MossdeepCity/scripts.pory"
	msgbox MoveTutor_EventScript_IcePunchTeach_Text_0, MSGBOX_DEFAULT
# 865 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_PUNCH
# 866 "data/maps/MossdeepCity/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 867 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, MossdeepCity_EventScript_PunchesTutorDecline
# 868 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_PunchesTutorTaught
	end


MoveTutor_EventScript_ThunderPunchTeach::
# 873 "data/maps/MossdeepCity/scripts.pory"
	msgbox MoveTutor_EventScript_ThunderPunchTeach_Text_0, MSGBOX_DEFAULT
# 874 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
# 875 "data/maps/MossdeepCity/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 876 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, MossdeepCity_EventScript_PunchesTutorDecline
# 877 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_PunchesTutorTaught
	end


MoveTutor_EventScript_BulletPunchTeach::
# 882 "data/maps/MossdeepCity/scripts.pory"
	msgbox MoveTutor_EventScript_BulletPunchTeach_Text_0, MSGBOX_DEFAULT
# 883 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_0x8005, MOVE_BULLET_PUNCH
# 884 "data/maps/MossdeepCity/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 885 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, MossdeepCity_EventScript_PunchesTutorDecline
# 886 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_PunchesTutorTaught
	end


MoveTutor_EventScript_SuckerPunchTeach::
# 891 "data/maps/MossdeepCity/scripts.pory"
	msgbox MoveTutor_EventScript_SuckerPunchTeach_Text_0, MSGBOX_DEFAULT
# 892 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_0x8005, MOVE_SUCKER_PUNCH
# 893 "data/maps/MossdeepCity/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 894 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, MossdeepCity_EventScript_PunchesTutorDecline
# 895 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_PunchesTutorTaught
	end


MoveTutor_EventScript_FakeOutTeach::
# 900 "data/maps/MossdeepCity/scripts.pory"
	msgbox MoveTutor_EventScript_FakeOutTeach_Text_0, MSGBOX_DEFAULT
# 901 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_0x8005, MOVE_FAKE_OUT
# 902 "data/maps/MossdeepCity/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 903 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, MossdeepCity_EventScript_PunchesTutorDecline
# 904 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_PunchesTutorTaught
	end


MoveTutor_EventScript_PowerUpPunchTeach::
# 909 "data/maps/MossdeepCity/scripts.pory"
	msgbox MoveTutor_EventScript_PowerUpPunchTeach_Text_0, MSGBOX_DEFAULT
# 910 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_0x8005, MOVE_POWER_UP_PUNCH
# 911 "data/maps/MossdeepCity/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 912 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, MossdeepCity_EventScript_PunchesTutorDecline
# 913 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_PunchesTutorTaught
	end


MoveTutor_EventScript_MachPunchTeach::
# 918 "data/maps/MossdeepCity/scripts.pory"
	msgbox MoveTutor_EventScript_MachPunchTeach_Text_0, MSGBOX_DEFAULT
# 919 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_0x8005, MOVE_MACH_PUNCH
# 920 "data/maps/MossdeepCity/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 921 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, MossdeepCity_EventScript_PunchesTutorDecline
# 922 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_PunchesTutorTaught
	end


MossdeepCity_EventScript_PunchesTutorDecline::
# 927 "data/maps/MossdeepCity/scripts.pory"
	lock
# 928 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_PunchesTutorDecline_Text_0, MSGBOX_AUTOCLOSE
# 931 "data/maps/MossdeepCity/scripts.pory"
	waitmessage
# 932 "data/maps/MossdeepCity/scripts.pory"
	release
	end


MossdeepCity_EventScript_PunchesTutorTaught::
# 937 "data/maps/MossdeepCity/scripts.pory"
	lock
# 938 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_PunchesTutorTaught_Text_0, MSGBOX_AUTOCLOSE
# 940 "data/maps/MossdeepCity/scripts.pory"
	waitmessage
# 941 "data/maps/MossdeepCity/scripts.pory"
	release
	end


MossdeepCity_EventScript_MultiHitTutor::
# 946 "data/maps/MossdeepCity/scripts.pory"
	lock
# 947 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 948 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_MultiHitTutor_Text_0, MSGBOX_YESNO
# 954 "data/maps/MossdeepCity/scripts.pory"
	waitmessage
# 955 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MossdeepCity_EventScript_MultiHitTutorChoices
# 956 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_MultiHitTutorTaught
# 957 "data/maps/MossdeepCity/scripts.pory"
	release
	end


MossdeepCity_EventScript_MultiHitTutorChoices::
# 962 "data/maps/MossdeepCity/scripts.pory"
	lock
# 963 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_MultiHitTutorChoices_Text_0, MSGBOX_DEFAULT
# 964 "data/maps/MossdeepCity/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, MossdeepCity_EventScript_MultiHitTutorChoices_Text_1, MossdeepCity_EventScript_MultiHitTutorChoices_Text_2, MossdeepCity_EventScript_MultiHitTutorChoices_Text_3, MossdeepCity_EventScript_MultiHitTutorChoices_Text_4
# 965 "data/maps/MossdeepCity/scripts.pory"
	switch VAR_RESULT
# 966 "data/maps/MossdeepCity/scripts.pory"
	case 0, MossdeepCity_EventScript_MultiHitTutorChoices_3
# 968 "data/maps/MossdeepCity/scripts.pory"
	case 1, MossdeepCity_EventScript_MultiHitTutorChoices_4
# 970 "data/maps/MossdeepCity/scripts.pory"
	case 2, MossdeepCity_EventScript_MultiHitTutorChoices_5
# 972 "data/maps/MossdeepCity/scripts.pory"
	case 3, MossdeepCity_EventScript_MultiHitTutorChoices_6
# 974 "data/maps/MossdeepCity/scripts.pory"
	case MULTI_B_PRESSED, MossdeepCity_EventScript_MultiHitTutorChoices_7
# 977 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_MultiHitTutorTaught
MossdeepCity_EventScript_MultiHitTutorChoices_1:
	end

MossdeepCity_EventScript_MultiHitTutorChoices_3:
# 967 "data/maps/MossdeepCity/scripts.pory"
	goto MoveTutor_EventScript_TripleAxelTeach
	goto MossdeepCity_EventScript_MultiHitTutorChoices_1

MossdeepCity_EventScript_MultiHitTutorChoices_4:
# 969 "data/maps/MossdeepCity/scripts.pory"
	goto MoveTutor_EventScript_DualWingbeatTeach
	goto MossdeepCity_EventScript_MultiHitTutorChoices_1

MossdeepCity_EventScript_MultiHitTutorChoices_5:
# 971 "data/maps/MossdeepCity/scripts.pory"
	goto MoveTutor_EventScript_RockBlastTeach
	goto MossdeepCity_EventScript_MultiHitTutorChoices_1

MossdeepCity_EventScript_MultiHitTutorChoices_6:
# 973 "data/maps/MossdeepCity/scripts.pory"
	goto MoveTutor_EventScript_TailSlapTeach
	goto MossdeepCity_EventScript_MultiHitTutorChoices_1

MossdeepCity_EventScript_MultiHitTutorChoices_7:
# 975 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_MultiHitTutorTaught
	goto MossdeepCity_EventScript_MultiHitTutorChoices_1


MoveTutor_EventScript_TripleAxelTeach::
# 983 "data/maps/MossdeepCity/scripts.pory"
	msgbox MoveTutor_EventScript_TripleAxelTeach_Text_0, MSGBOX_DEFAULT
# 984 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_0x8005, MOVE_TRIPLE_AXEL
# 985 "data/maps/MossdeepCity/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 986 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, MossdeepCity_EventScript_MultiHitTutorTaught
# 987 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_MultiHitTutorTaught
	end


MoveTutor_EventScript_DualWingbeatTeach::
# 992 "data/maps/MossdeepCity/scripts.pory"
	msgbox MoveTutor_EventScript_DualWingbeatTeach_Text_0, MSGBOX_DEFAULT
# 993 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_0x8005, MOVE_DUAL_WINGBEAT
# 994 "data/maps/MossdeepCity/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 995 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, MossdeepCity_EventScript_MultiHitTutorTaught
# 996 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_MultiHitTutorTaught
	end


MoveTutor_EventScript_RockBlastTeach::
# 1001 "data/maps/MossdeepCity/scripts.pory"
	msgbox MoveTutor_EventScript_RockBlastTeach_Text_0, MSGBOX_DEFAULT
# 1002 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_BLAST
# 1003 "data/maps/MossdeepCity/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 1004 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, MossdeepCity_EventScript_MultiHitTutorTaught
# 1005 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_MultiHitTutorTaught
	end


MoveTutor_EventScript_TailSlapTeach::
# 1010 "data/maps/MossdeepCity/scripts.pory"
	msgbox MoveTutor_EventScript_TailSlapTeach_Text_0, MSGBOX_DEFAULT
# 1011 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_0x8005, MOVE_TAIL_SLAP
# 1012 "data/maps/MossdeepCity/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 1013 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, MossdeepCity_EventScript_MultiHitTutorTaught
# 1014 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_MultiHitTutorTaught
	end


MossdeepCity_EventScript_MultiHitTutorTaught::
# 1019 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_MultiHitTutorTaught_Text_0, MSGBOX_AUTOCLOSE
# 1021 "data/maps/MossdeepCity/scripts.pory"
	waitmessage
# 1022 "data/maps/MossdeepCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 1023 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 1024 "data/maps/MossdeepCity/scripts.pory"
	release
	end


MossdeepCity_EventScript_Momo_Text_0:
# 453 "data/maps/MossdeepCity/scripts.pory"
	.string "{PLAYER}, if you're going to see ARIA\n can you tell them to hurry up and\l finish their training?$"

MossdeepCity_EventScript_MomoBattle_Text_0:
# 461 "data/maps/MossdeepCity/scripts.pory"
	.string "Hi, {PLAYER}.\n ARIA's… not here.\p They're training on the beach\n right now.\l …\l …\p Did you want to battle?$"

MossdeepCity_EventScript_MomoBattle_Text_1:
# 470 "data/maps/MossdeepCity/scripts.pory"
	.string "… Okay.$"

MossdeepCity_EventScript_MomoBattle_Text_2:
# 474 "data/maps/MossdeepCity/scripts.pory"
	.string "Okay.\p I… want to show you the new\n ninjutsu I've been working on.$"

MossdeepCity_EventScript_MomoBattle_Text_3:
# 499 "data/maps/MossdeepCity/scripts.pory"
	.string "I can make clones now.\n Isn't that cool?\p …\n Okay, let's battle.$"

MossdeepCity_EventScript_MomoBattle_Text_4:
# 504 "data/maps/MossdeepCity/scripts.pory"
	.string "Everyone's so mean to me…$"

MossdeepCity_EventScript_MomoBattle_Text_5:
# 504 "data/maps/MossdeepCity/scripts.pory"
	.string "</3$"

MossdeepCity_EventScript_MomoBattle_Text_6:
# 505 "data/maps/MossdeepCity/scripts.pory"
	.string "I… lost again.\n Still, I had fun.\p {PLAYER}, if you're going to see ARIA,\n can you tell them to hurry up and\l finish their training?$"

MossdeepCity_EventScript_Aria_Text_0:
# 544 "data/maps/MossdeepCity/scripts.pory"
	.string "ARGH!\n AAAARGH!$"

MossdeepCity_EventScript_Aria_Text_1:
# 560 "data/maps/MossdeepCity/scripts.pory"
	.string "AH!$"

MossdeepCity_EventScript_Aria_Text_2:
# 566 "data/maps/MossdeepCity/scripts.pory"
	.string "{PLAYER}!\n You scared me again!\p If you're going to see MOMO, can you\n tell her I'm gonna train for a bit more?$"

MossdeepCity_EventScript_AriaBattle_Text_0:
# 608 "data/maps/MossdeepCity/scripts.pory"
	.string "{PLAYER}!\n You scared me!\p Wait…\n This murderous intent…!\p I see…\n So you would challenge this KNIGHT?\p All right! I'll show you the power of\n the SACRED BLADE!$"

MossdeepCity_EventScript_AriaBattle_Text_1:
# 617 "data/maps/MossdeepCity/scripts.pory"
	.string "M-My lord…$"

MossdeepCity_EventScript_AriaBattle_Text_2:
# 618 "data/maps/MossdeepCity/scripts.pory"
	.string "ARRGGGHH!\n I lost again!$"

MossdeepCity_EventScript_AriaBattle_Text_3:
# 624 "data/maps/MossdeepCity/scripts.pory"
	.string "I need to train more!\p {PLAYER}, if you're going to see MOMO,\n can you tell her I'm gonna train for\l a little while longer?$"

MossdeepCity_EventScript_GiveTotodilePostBattle_Text_0:
# 644 "data/maps/MossdeepCity/scripts.pory"
	.string "Wait…\n This power I sense…!\p {PLAYER}, are you also a wielder\n of the SACRED BLADE?!\p Here.\n This TOTODILE is special.\p It has the KNIGHT's will required\n to wield the SACRED BLADE.$"

MossdeepCity_EventScript_GiveTotodilePostBattle_Text_1:
# 657 "data/maps/MossdeepCity/scripts.pory"
	.string "{PLAYER} received TOTODILE!$"

MossdeepCity_EventScript_GiveTotodilePostBattle_Text_2:
# 663 "data/maps/MossdeepCity/scripts.pory"
	.string "{PLAYER} received TOTODILE!\n TOTODILE was sent to the PC.$"

MossdeepCity_EventScript_GiveTotodilePostBattle_Text_3:
# 671 "data/maps/MossdeepCity/scripts.pory"
	.string "Okay!\n I need to get back to my training!\p {PLAYER}, if you're going to see MOMO,\n can you tell her I'm gonna train for\l a while longer?$"

MossdeepCity_EventScript_GiveTotodile_Text_0:
# 715 "data/maps/MossdeepCity/scripts.pory"
	.string "{PLAYER}!\n You scared me again!$"

MossdeepCity_EventScript_AriaSword_Text_0:
# 738 "data/maps/MossdeepCity/scripts.pory"
	.string "They're swinging a sword.\p It looks dangerous to approach them\n from the front.$"

MossdeepCity_EventScript_RecoverTutor_Text_0:
# 754 "data/maps/MossdeepCity/scripts.pory"
	.string "Which POKéMON do you want to\nteach RECOVER to?$"

MoveTutor_EventScript_RecoverDeclined_Text_0:
# 763 "data/maps/MossdeepCity/scripts.pory"
	.string "Well, all right.\n Don't overexert yourself.$"

MoveTutor_EventScript_RecoverTaught_Text_0:
# 771 "data/maps/MossdeepCity/scripts.pory"
	.string "All right.\p Come back if you ever need to recover\n from your training.$"

MossdeepCity_EventScript_PunchesTutor_Text_0:
# 813 "data/maps/MossdeepCity/scripts.pory"
	.string "They called me the FISTING AVATAR in\n my prime because of my elemental fists.\p I can teach your POKéMON how to\n fist too, if you'd like.$"

MossdeepCity_EventScript_PunchesTutorChoices_Text_0:
# 826 "data/maps/MossdeepCity/scripts.pory"
	.string "Which punch do you want me\nto teach?$"

MossdeepCity_EventScript_PunchesTutorChoices_Text_1:
# 827 "data/maps/MossdeepCity/scripts.pory"
	.string "FIRE PUNCH$"

MossdeepCity_EventScript_PunchesTutorChoices_Text_2:
# 827 "data/maps/MossdeepCity/scripts.pory"
	.string "ICE PUNCH$"

MossdeepCity_EventScript_PunchesTutorChoices_Text_3:
# 827 "data/maps/MossdeepCity/scripts.pory"
	.string "THUNDER PUNCH$"

MossdeepCity_EventScript_PunchesTutorChoices_Text_4:
# 827 "data/maps/MossdeepCity/scripts.pory"
	.string "BULLET PUNCH$"

MossdeepCity_EventScript_PunchesTutorChoices_Text_5:
# 827 "data/maps/MossdeepCity/scripts.pory"
	.string "SUCKER PUNCH$"

MossdeepCity_EventScript_PunchesTutorChoices_Text_6:
# 827 "data/maps/MossdeepCity/scripts.pory"
	.string "FAKE OUT$"

MossdeepCity_EventScript_PunchesTutorChoices_Text_7:
# 828 "data/maps/MossdeepCity/scripts.pory"
	.string "POWER UP PUNCH$"

MossdeepCity_EventScript_PunchesTutorChoices_Text_8:
# 828 "data/maps/MossdeepCity/scripts.pory"
	.string "MACH PUNCH$"

MoveTutor_EventScript_FirePunchTeach_Text_0:
# 855 "data/maps/MossdeepCity/scripts.pory"
	.string "Which POKéMON do you want to\nteach FIRE PUNCH to?$"

MoveTutor_EventScript_IcePunchTeach_Text_0:
# 864 "data/maps/MossdeepCity/scripts.pory"
	.string "Which POKéMON do you want to\nteach ICE PUNCH to?$"

MoveTutor_EventScript_ThunderPunchTeach_Text_0:
# 873 "data/maps/MossdeepCity/scripts.pory"
	.string "Which POKéMON do you want to\nteach THUNDER PUNCH to?$"

MoveTutor_EventScript_BulletPunchTeach_Text_0:
# 882 "data/maps/MossdeepCity/scripts.pory"
	.string "Which POKéMON do you want to\nteach BULLET PUNCH to?$"

MoveTutor_EventScript_SuckerPunchTeach_Text_0:
# 891 "data/maps/MossdeepCity/scripts.pory"
	.string "Which POKéMON do you want to\nteach SUCKER PUNCH to?$"

MoveTutor_EventScript_FakeOutTeach_Text_0:
# 900 "data/maps/MossdeepCity/scripts.pory"
	.string "Which POKéMON do you want to\nteach FAKE OUT to?$"

MoveTutor_EventScript_PowerUpPunchTeach_Text_0:
# 909 "data/maps/MossdeepCity/scripts.pory"
	.string "Which POKéMON do you want to\nteach POWER UP PUNCH to?$"

MoveTutor_EventScript_MachPunchTeach_Text_0:
# 918 "data/maps/MossdeepCity/scripts.pory"
	.string "Which POKéMON do you want to\nteach MACH PUNCH to?$"

MossdeepCity_EventScript_PunchesTutorDecline_Text_0:
# 928 "data/maps/MossdeepCity/scripts.pory"
	.string "I see.\p Come back if you want to teach your\n POKéMON the way of the elemental fist.$"

MossdeepCity_EventScript_PunchesTutorTaught_Text_0:
# 938 "data/maps/MossdeepCity/scripts.pory"
	.string "Come back if you want to teach more\n POKéMON the way of the elemental fist.$"

MossdeepCity_EventScript_MultiHitTutor_Text_0:
# 948 "data/maps/MossdeepCity/scripts.pory"
	.string "ORA!\n ORAORAORAORAORA!\p Hitting multiple times in a row\n is important to winning fights!\p If you want, I can teach your POKéMON\n a multi-hit move!$"

MossdeepCity_EventScript_MultiHitTutorChoices_Text_0:
# 963 "data/maps/MossdeepCity/scripts.pory"
	.string "Which move do you want me\nto teach?$"

MossdeepCity_EventScript_MultiHitTutorChoices_Text_1:
# 964 "data/maps/MossdeepCity/scripts.pory"
	.string "TRIPLE AXEL$"

MossdeepCity_EventScript_MultiHitTutorChoices_Text_2:
# 964 "data/maps/MossdeepCity/scripts.pory"
	.string "DUAL WINGBEAT$"

MossdeepCity_EventScript_MultiHitTutorChoices_Text_3:
# 964 "data/maps/MossdeepCity/scripts.pory"
	.string "ROCK BLAST$"

MossdeepCity_EventScript_MultiHitTutorChoices_Text_4:
# 964 "data/maps/MossdeepCity/scripts.pory"
	.string "TAIL SLAP$"

MoveTutor_EventScript_TripleAxelTeach_Text_0:
# 983 "data/maps/MossdeepCity/scripts.pory"
	.string "Which POKéMON do you want to\nteach TRIPLE AXEL to?$"

MoveTutor_EventScript_DualWingbeatTeach_Text_0:
# 992 "data/maps/MossdeepCity/scripts.pory"
	.string "Which POKéMON do you want to\nteach DUAL WINGBEAT to?$"

MoveTutor_EventScript_RockBlastTeach_Text_0:
# 1001 "data/maps/MossdeepCity/scripts.pory"
	.string "Which POKéMON do you want to\nteach ROCK BLAST to?$"

MoveTutor_EventScript_TailSlapTeach_Text_0:
# 1010 "data/maps/MossdeepCity/scripts.pory"
	.string "Which POKéMON do you want to\nteach TAIL SLAP to?$"

MossdeepCity_EventScript_MultiHitTutorTaught_Text_0:
# 1019 "data/maps/MossdeepCity/scripts.pory"
	.string "Come back if you want to teach your\n POKéMON a multi-hit move!$"

MossdeepCity_Text_RecoverTeach::
# 779 "data/maps/MossdeepCity/scripts.pory"
	.string "Pfft. Those meatheads on the beach\n spend all day training.\p Giving your muscles time to recover is\n is important too.\p If you want, I could teach your POKéMON\n how to RECOVER.$"

MossdeepCity_Text_GymLeaderGone::
# 788 "data/maps/MossdeepCity/scripts.pory"
	.string "Well met, challenger. Here to take on\n the GYM, I presume.\p The KNIGHT commander has left with the\n PROTECTORS to train in SHOAL CAVE\l on ROUTE 125.\l You'll have to wait until they return.\p That is, unless you're brave enough\n to go get them yourself…$"
