# 1 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_ARCHIE, 2
# 2 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_OLD_LADY, 3
# 3 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_GRUNT_1, 4
# 4 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_GRUNT_2, 5
# 5 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_GRUNT_3, 6
# 6 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_GRUNT_4, 7
# 7 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_MAXIE, 8
# 8 "data/maps/MtPyre_Summit/scripts.pory"

# 9 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_MapScripts::
# 10 "data/maps/MtPyre_Summit/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_Summit_OnTransition
# 11 "data/maps/MtPyre_Summit/scripts.pory"
	.byte 0
# 12 "data/maps/MtPyre_Summit/scripts.pory"

# 13 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_OnTransition:
# 14 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_MT_PYRE_STATE, 2, MtPyre_Summit_EventScript_SetArchieMaxiePositions
# 15 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 16 "data/maps/MtPyre_Summit/scripts.pory"

# 17 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_SetArchieMaxiePositions::
# 18 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_MAXIE, 23, 6
# 19 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 22, 6
# 20 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 21 "data/maps/MtPyre_Summit/scripts.pory"

# 22 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger0::
# 23 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 24 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 25 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 26 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 27 "data/maps/MtPyre_Summit/scripts.pory"

# 28 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger1::
# 29 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 30 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 31 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 32 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 33 "data/maps/MtPyre_Summit/scripts.pory"

# 34 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger2::
# 35 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 36 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 37 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 38 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 39 "data/maps/MtPyre_Summit/scripts.pory"

# 40 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits::
# 41 "data/maps/MtPyre_Summit/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 42 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 43 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 44 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 45 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 46 "data/maps/MtPyre_Summit/scripts.pory"
	delay 50
# 47 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieFacePlayer0
# 48 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieFacePlayer1
# 49 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieFacePlayer2
# 50 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo, MSGBOX_DEFAULT
# 51 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 52 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreen FADE_TO_BLACK
# 53 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_ARCHIE
# 54 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 55 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 56 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 57 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_4
# 58 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 59 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA
# 60 "data/maps/MtPyre_Summit/scripts.pory"
	fadedefaultbgm
# 61 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 62 "data/maps/MtPyre_Summit/scripts.pory"
	delay 20
# 63 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 1
# 64 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_OldLadyApproachPlayer0
# 65 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_OldLadyApproachPlayer1
# 66 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_OldLadyApproachPlayer2
# 67 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis, MSGBOX_DEFAULT
# 68 "data/maps/MtPyre_Summit/scripts.pory"
	giveitem ITEM_MAGMA_EMBLEM
# 69 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RECEIVED_RED_OR_BLUE_ORB
# 70 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
# 71 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 72 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 73 "data/maps/MtPyre_Summit/scripts.pory"

# 74 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer0::
# 75 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer0
# 76 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 77 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 78 "data/maps/MtPyre_Summit/scripts.pory"

# 79 "data/maps/MtPyre_Summit/scripts.pory"
@ Archie is already facing player
# 80 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer1::
# 81 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 82 "data/maps/MtPyre_Summit/scripts.pory"

# 83 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer2::
# 84 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer2
# 85 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 86 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 87 "data/maps/MtPyre_Summit/scripts.pory"

# 88 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer0::
# 89 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer0
# 90 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 91 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 92 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 93 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 94 "data/maps/MtPyre_Summit/scripts.pory"

# 95 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer1::
# 96 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer1
# 97 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 98 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 99 "data/maps/MtPyre_Summit/scripts.pory"

# 100 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer2::
# 101 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer2
# 102 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 103 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 104 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 105 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 106 "data/maps/MtPyre_Summit/scripts.pory"

# 107 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer0:
# 108 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 109 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 110 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 111 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 112 "data/maps/MtPyre_Summit/scripts.pory"

# 113 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer1:
# 114 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 115 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 116 "data/maps/MtPyre_Summit/scripts.pory"

# 117 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer2:
# 118 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 119 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 120 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 121 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 122 "data/maps/MtPyre_Summit/scripts.pory"

# 123 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer0:
# 124 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 125 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 126 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 127 "data/maps/MtPyre_Summit/scripts.pory"

# 128 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer2:
# 129 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 130 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 131 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 132 "data/maps/MtPyre_Summit/scripts.pory"

# 133 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldMan::
# 134 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 135 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 136 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, MtPyre_Summit_EventScript_OldManAfterRayquaza
# 137 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WillYouHearOutMyTale, MSGBOX_YESNO
# 138 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManTale
# 139 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 140 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 141 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 142 "data/maps/MtPyre_Summit/scripts.pory"

# 143 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManAfterRayquaza::
# 144 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HearTheNewLegendOfHoenn, MSGBOX_YESNO
# 145 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManNewTale
# 146 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 147 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 148 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 149 "data/maps/MtPyre_Summit/scripts.pory"

# 150 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManTale::
# 151 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreTale, MSGBOX_DEFAULT
# 152 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 153 "data/maps/MtPyre_Summit/scripts.pory"

# 154 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_DeclineOldManTale::
# 155 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WellThatTooIsFine, MSGBOX_DEFAULT
# 156 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 157 "data/maps/MtPyre_Summit/scripts.pory"

# 158 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManNewTale::
# 159 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HoennTrioTale, MSGBOX_DEFAULT
# 160 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 161 "data/maps/MtPyre_Summit/scripts.pory"

# 162 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLady::
# 163 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 164 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 165 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_RETURNED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned
# 166 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_ge VAR_MT_PYRE_STATE, 3, MtPyre_Summit_EventScript_OldLadyOrbsReturned
# 167 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, MtPyre_Summit_EventScript_OldLadyLegendariesAwake
# 168 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_OrbsHaveBeenTaken, MSGBOX_DEFAULT
# 169 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 170 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 171 "data/maps/MtPyre_Summit/scripts.pory"

# 172 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyOrbsReturned::
# 173 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs, MSGBOX_DEFAULT
# 174 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RETURNED_RED_OR_BLUE_ORB
# 175 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 176 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 177 "data/maps/MtPyre_Summit/scripts.pory"

# 178 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyLegendariesAwake::
# 179 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreAwakened, MSGBOX_DEFAULT
# 180 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 181 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 182 "data/maps/MtPyre_Summit/scripts.pory"

# 183 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned::
# 184 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_SuperAncientPokemonTaughtUs, MSGBOX_DEFAULT
# 185 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 186 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 187 "data/maps/MtPyre_Summit/scripts.pory"

# 188 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger0::
# 189 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 190 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 191 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 192 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 193 "data/maps/MtPyre_Summit/scripts.pory"

# 194 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger1::
# 195 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 196 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 197 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 198 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 199 "data/maps/MtPyre_Summit/scripts.pory"

# 200 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger2::
# 201 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 202 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 203 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 204 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 205 "data/maps/MtPyre_Summit/scripts.pory"

# 206 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs::
# 207 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 208 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 209 "data/maps/MtPyre_Summit/scripts.pory"
	delay 60
# 210 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieMaxieBeginExit0
# 211 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieMaxieBeginExit1
# 212 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieMaxieBeginExit2
# 213 "data/maps/MtPyre_Summit/scripts.pory"
	playse SE_PIN
# 214 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 215 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 216 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 217 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 218 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 219 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachPlayer0
# 220 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachPlayer1
# 221 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachPlayer2
# 222 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_MaxieSilence, MSGBOX_DEFAULT
# 223 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 224 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachArchie0
# 225 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachArchie1
# 226 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachArchie2
# 227 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 228 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 229 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 230 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 231 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_ARCHIE
# 232 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MAXIE
# 233 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 3
# 234 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 235 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 236 "data/maps/MtPyre_Summit/scripts.pory"

# 237 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit0::
# 238 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0
# 239 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 240 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 241 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 242 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 243 "data/maps/MtPyre_Summit/scripts.pory"

# 244 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit1::
# 245 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1
# 246 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 247 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 248 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 249 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 250 "data/maps/MtPyre_Summit/scripts.pory"

# 251 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit2::
# 252 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2
# 253 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 254 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 255 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 256 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 257 "data/maps/MtPyre_Summit/scripts.pory"

# 258 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer0::
# 259 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie0
# 260 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 261 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer0
# 262 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 263 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 264 "data/maps/MtPyre_Summit/scripts.pory"

# 265 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer1::
# 266 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 267 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 268 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer1
# 269 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 270 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 271 "data/maps/MtPyre_Summit/scripts.pory"

# 272 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer2::
# 273 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 274 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 275 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer2
# 276 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 277 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 278 "data/maps/MtPyre_Summit/scripts.pory"

# 279 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie0::
# 280 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 281 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie0
# 282 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 283 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 284 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 285 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 286 "data/maps/MtPyre_Summit/scripts.pory"

# 287 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie1::
# 288 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 289 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie1
# 290 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 291 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 292 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 293 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 294 "data/maps/MtPyre_Summit/scripts.pory"

# 295 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie2::
# 296 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 297 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie2
# 298 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 299 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 300 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 301 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 302 "data/maps/MtPyre_Summit/scripts.pory"

# 303 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie0:
# 304 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 305 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 306 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 307 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 308 "data/maps/MtPyre_Summit/scripts.pory"

# 309 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie:
# 310 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 311 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 312 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 313 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 314 "data/maps/MtPyre_Summit/scripts.pory"

# 315 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieExit:
# 316 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 317 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 318 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 319 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 320 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 321 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 322 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 323 "data/maps/MtPyre_Summit/scripts.pory"

# 324 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieExit:
# 325 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 326 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 327 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 328 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 329 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 330 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 331 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 332 "data/maps/MtPyre_Summit/scripts.pory"

# 333 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0:
# 334 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 335 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 336 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 337 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 338 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 339 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 340 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 341 "data/maps/MtPyre_Summit/scripts.pory"

# 342 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1:
# 343 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 344 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 345 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 346 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 347 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 348 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 349 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 350 "data/maps/MtPyre_Summit/scripts.pory"

# 351 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2:
# 352 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 353 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 354 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 355 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 356 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 357 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 358 "data/maps/MtPyre_Summit/scripts.pory"

# 359 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer0:
# 360 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 361 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 362 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 363 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 364 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 365 "data/maps/MtPyre_Summit/scripts.pory"

# 366 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer1:
# 367 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 368 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 369 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 370 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 371 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 372 "data/maps/MtPyre_Summit/scripts.pory"

# 373 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer2:
# 374 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 375 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 376 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 377 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 378 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 379 "data/maps/MtPyre_Summit/scripts.pory"

# 380 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieWatchMaxie:
# 381 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 382 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 383 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 384 "data/maps/MtPyre_Summit/scripts.pory"

# 385 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchMaxie:
# 386 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 387 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 388 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 389 "data/maps/MtPyre_Summit/scripts.pory"

# 390 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie0:
# 391 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 392 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 393 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 394 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 395 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 396 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 397 "data/maps/MtPyre_Summit/scripts.pory"

# 398 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie1:
# 399 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 400 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 401 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 402 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 403 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 404 "data/maps/MtPyre_Summit/scripts.pory"

# 405 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie2:
# 406 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 407 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 408 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 409 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 410 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 411 "data/maps/MtPyre_Summit/scripts.pory"

# 412 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt1::
# 413 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, MtPyre_Summit_Text_Grunt1Intro, MtPyre_Summit_Text_Grunt1Defeat
# 414 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 415 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 416 "data/maps/MtPyre_Summit/scripts.pory"

# 417 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt2::
# 418 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, MtPyre_Summit_Text_Grunt2Intro, MtPyre_Summit_Text_Grunt2Defeat
# 419 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 420 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 421 "data/maps/MtPyre_Summit/scripts.pory"

# 422 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt3::
# 423 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, MtPyre_Summit_Text_Grunt3Intro, MtPyre_Summit_Text_Grunt3Defeat
# 424 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 425 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 426 "data/maps/MtPyre_Summit/scripts.pory"

# 427 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt4::
# 428 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_4, MtPyre_Summit_Text_Grunt4Intro, MtPyre_Summit_Text_Grunt4Defeat
# 429 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 430 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 431 "data/maps/MtPyre_Summit/scripts.pory"

# 432 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Intro:
# 433 "data/maps/MtPyre_Summit/scripts.pory"
	.string "No! Those TEAM MAGMA goons got\n"
# 434 "data/maps/MtPyre_Summit/scripts.pory"
	.string "here ahead of us!\p"
# 435 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We can't fall behind!$"
# 436 "data/maps/MtPyre_Summit/scripts.pory"

# 437 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Defeat:
# 438 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I thought you were one of the MAGMAS\n"
# 439 "data/maps/MtPyre_Summit/scripts.pory"
	.string "who happened to come back…$"
# 440 "data/maps/MtPyre_Summit/scripts.pory"

# 441 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1PostBattle:
# 442 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Yeah, so you are strong…\n"
# 443 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But there're a lot of us!$"
# 444 "data/maps/MtPyre_Summit/scripts.pory"

# 445 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Intro:
# 446 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Hah!\n"
# 447 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Too bad for you!\p"
# 448 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you came earlier, you only would've\n"
# 449 "data/maps/MtPyre_Summit/scripts.pory"
	.string "had to battle the wimpy TEAM MAGMA.\p"
# 450 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But since you arrived now, you have\n"
# 451 "data/maps/MtPyre_Summit/scripts.pory"
	.string "to take on us toughies!$"
# 452 "data/maps/MtPyre_Summit/scripts.pory"

# 453 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Defeat:
# 454 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Urgh… I should've let you take on\n"
# 455 "data/maps/MtPyre_Summit/scripts.pory"
	.string "TEAM MAGMA first…$"
# 456 "data/maps/MtPyre_Summit/scripts.pory"

# 457 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2PostBattle:
# 458 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't know anything!\n"
# 459 "data/maps/MtPyre_Summit/scripts.pory"
	.string "So why are you messing with us?$"
# 460 "data/maps/MtPyre_Summit/scripts.pory"

# 461 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Intro:
# 462 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You…\n"
# 463 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We saw you at MT. CHIMNEY.\p"
# 464 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't belong to either TEAM,\n"
# 465 "data/maps/MtPyre_Summit/scripts.pory"
	.string "so why would you be here?$"
# 466 "data/maps/MtPyre_Summit/scripts.pory"

# 467 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Defeat:
# 468 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you're going to mess with anyone,\n"
# 469 "data/maps/MtPyre_Summit/scripts.pory"
	.string "let it be TEAM MAGMA…$"
# 470 "data/maps/MtPyre_Summit/scripts.pory"

# 471 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3PostBattle:
# 472 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Heh, it doesn't matter!\n"
# 473 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We bought ourselves some time!\p"
# 474 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BOSS should have snatched what\n"
# 475 "data/maps/MtPyre_Summit/scripts.pory"
	.string "he was after!$"
# 476 "data/maps/MtPyre_Summit/scripts.pory"

# 477 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Intro:
# 478 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, I know!\n"
# 479 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You tried to join TEAM MAGMA,\l"
# 480 "data/maps/MtPyre_Summit/scripts.pory"
	.string "but they wouldn't have you!\p"
# 481 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, don't think that we'll let you\n"
# 482 "data/maps/MtPyre_Summit/scripts.pory"
	.string "join our TEAM AQUA!$"
# 483 "data/maps/MtPyre_Summit/scripts.pory"

# 484 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Defeat:
# 485 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you want to join TEAM AQUA that\n"
# 486 "data/maps/MtPyre_Summit/scripts.pory"
	.string "badly, we can consider it…$"
# 487 "data/maps/MtPyre_Summit/scripts.pory"

# 488 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4PostBattle:
# 489 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We have a great combination going\n"
# 490 "data/maps/MtPyre_Summit/scripts.pory"
	.string "with us members and our leader.$"
# 491 "data/maps/MtPyre_Summit/scripts.pory"

# 492 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo:
# 493 "data/maps/MtPyre_Summit/scripts.pory"
	.string "ARCHIE: TEAM MAGMA's MAXIE got ahead\n"
# 494 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of us, but we also got what we wanted.\p"
# 495 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The RED ORB preserved at MT. PYRE…\n"
# 496 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I, ARCHIE, now have it in my possession!\p"
# 497 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Fufufu… Now we can bring our ultimate\n"
# 498 "data/maps/MtPyre_Summit/scripts.pory"
	.string "objective to fruition!\p"
# 499 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Okay, TEAM!\n"
# 500 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We're pulling out!$"
# 501 "data/maps/MtPyre_Summit/scripts.pory"

# 502 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis:
# 503 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, no…\n"
# 504 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This cannot happen…\p"
# 505 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Not only the BLUE ORB, but even\n"
# 506 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the RED ORB has been taken…\p"
# 507 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and RED ORB must never\n"
# 508 "data/maps/MtPyre_Summit/scripts.pory"
	.string "be separated. They belong together.\p"
# 509 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What are those men trying to do with\n"
# 510 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two ORBS?\p"
# 511 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 512 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\p"
# 513 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, yes. Was it TEAM MAGMA who came\n"
# 514 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and took the BLUE ORB first?\p"
# 515 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, in their haste, they left this\n"
# 516 "data/maps/MtPyre_Summit/scripts.pory"
	.string "behind.\p"
# 517 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I couldn't imagine what exactly it\n"
# 518 "data/maps/MtPyre_Summit/scripts.pory"
	.string "could be.\p"
# 519 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I would like you to have it.\n"
# 520 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps it will be useful in some way.$"
# 521 "data/maps/MtPyre_Summit/scripts.pory"

# 522 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_OrbsHaveBeenTaken:
# 523 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and RED ORB taken by\n"
# 524 "data/maps/MtPyre_Summit/scripts.pory"
	.string "those sinister men…\p"
# 525 "data/maps/MtPyre_Summit/scripts.pory"
	.string "They must never be apart…\n"
# 526 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I fear something terrible will happen…$"
# 527 "data/maps/MtPyre_Summit/scripts.pory"

# 528 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreAwakened:
# 529 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, my goodness…\p"
# 530 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You say that both GROUDON and KYOGRE\n"
# 531 "data/maps/MtPyre_Summit/scripts.pory"
	.string "have been awakened?\p"
# 532 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is said that the BLUE ORB and\n"
# 533 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the RED ORB quelled the rage of\l"
# 534 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two POKéMON…\p"
# 535 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is also said that the true owner\n"
# 536 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of the ORBS still exists.\p"
# 537 "data/maps/MtPyre_Summit/scripts.pory"
	.string "However, no one knows who, or what\n"
# 538 "data/maps/MtPyre_Summit/scripts.pory"
	.string "exactly, the ORBS belong to.\p"
# 539 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It could be a human, or perhaps\n"
# 540 "data/maps/MtPyre_Summit/scripts.pory"
	.string "a POKéMON, but no one knows.$"
# 541 "data/maps/MtPyre_Summit/scripts.pory"

# 542 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs:
# 543 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The two men who took the ORBS came\n"
# 544 "data/maps/MtPyre_Summit/scripts.pory"
	.string "back to return them on their own.\p"
# 545 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Those men…\n"
# 546 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps they are not so evil after all…$"
# 547 "data/maps/MtPyre_Summit/scripts.pory"

# 548 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_SuperAncientPokemonTaughtUs:
# 549 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The embodiments of the land, sea,\n"
# 550 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the sky…\p"
# 551 "data/maps/MtPyre_Summit/scripts.pory"
	.string "That is said to be the identities of\n"
# 552 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the super-ancient POKéMON…\p"
# 553 "data/maps/MtPyre_Summit/scripts.pory"
	.string "In the same way that we humans and\n"
# 554 "data/maps/MtPyre_Summit/scripts.pory"
	.string "POKéMON have life, our world, too,\l"
# 555 "data/maps/MtPyre_Summit/scripts.pory"
	.string "is alive…\p"
# 556 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The super-ancient POKéMON have\n"
# 557 "data/maps/MtPyre_Summit/scripts.pory"
	.string "taught us that…$"
# 558 "data/maps/MtPyre_Summit/scripts.pory"

# 559 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WillYouHearOutMyTale:
# 560 "data/maps/MtPyre_Summit/scripts.pory"
	.string "MT. PYRE is where we calm the spirits\n"
# 561 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of POKéMON that have passed on…\p"
# 562 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This is a high place where one can\n"
# 563 "data/maps/MtPyre_Summit/scripts.pory"
	.string "see all of HOENN…\p"
# 564 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The disembodied spirits of POKéMON\n"
# 565 "data/maps/MtPyre_Summit/scripts.pory"
	.string "must find solace here…\p"
# 566 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Is it coincidence that you are here…\p"
# 567 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Will you hear out my tale? A tale long\n"
# 568 "data/maps/MtPyre_Summit/scripts.pory"
	.string "told in the HOENN region?$"
# 569 "data/maps/MtPyre_Summit/scripts.pory"

# 570 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreTale:
# 571 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 572 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 573 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the POKéMON of the land\l"
# 574 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the POKéMON of the sea…\p"
# 575 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The POKéMON of the land raised\n"
# 576 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 577 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The POKéMON of the sea raised huge\n"
# 578 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 579 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 580 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 581 "data/maps/MtPyre_Summit/scripts.pory"
	.string "infernos and vicious storms.\p"
# 582 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and the RED ORB brought\n"
# 583 "data/maps/MtPyre_Summit/scripts.pory"
	.string "an end to the calamity.\p"
# 584 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Light poured from the two ORBS and\n"
# 585 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the enraged adversaries.\p"
# 586 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The pair, made docile, dove deep into\n"
# 587 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sea where eventually they\l"
# 588 "data/maps/MtPyre_Summit/scripts.pory"
	.string "disappeared…$"
# 589 "data/maps/MtPyre_Summit/scripts.pory"

# 590 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WellThatTooIsFine:
# 591 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I see…\n"
# 592 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, that, too, is fine…$"
# 593 "data/maps/MtPyre_Summit/scripts.pory"

# 594 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_MaxieSilence:
# 595 "data/maps/MtPyre_Summit/scripts.pory"
	.string "MAXIE: {PLAYER}…\p"
# 596 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 597 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …$"
# 598 "data/maps/MtPyre_Summit/scripts.pory"

# 599 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HearTheNewLegendOfHoenn:
# 600 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is my role to pass on the legends\n"
# 601 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of HOENN to future generations.\p"
# 602 "data/maps/MtPyre_Summit/scripts.pory"
	.string "And the crisis that just ended in\n"
# 603 "data/maps/MtPyre_Summit/scripts.pory"
	.string "SOOTOPOLIS rewrote a legend…\p"
# 604 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Have you the time to hear the new\n"
# 605 "data/maps/MtPyre_Summit/scripts.pory"
	.string "legend of HOENN?$"
# 606 "data/maps/MtPyre_Summit/scripts.pory"

# 607 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HoennTrioTale:
# 608 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 609 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 610 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the POKéMON of the land\l"
# 611 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the POKéMON of the sea…\p"
# 612 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The POKéMON of the land raised\n"
# 613 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 614 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The POKéMON of the sea raised huge\n"
# 615 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 616 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 617 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 618 "data/maps/MtPyre_Summit/scripts.pory"
	.string "fires and vicious storms.\p"
# 619 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It was then that the POKéMON of\n"
# 620 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sky descended from a storm.\p"
# 621 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The POKéMON, shining a vivid green,\n"
# 622 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the two enraged POKéMON.\p"
# 623 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Then, its duty done, the green POKéMON\n"
# 624 "data/maps/MtPyre_Summit/scripts.pory"
	.string "flew off into the wild blue yonder…$"

MtPyre_Summit_EventScript_Mimikyu::
# 629 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 630 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_MIMIKYU_TOTEM
# 631 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement 9, Common_Movement_FacePlayer
# 632 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 9
# 633 "data/maps/MtPyre_Summit/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
# 634 "data/maps/MtPyre_Summit/scripts.pory"
	delay 40
# 635 "data/maps/MtPyre_Summit/scripts.pory"
	waitmoncry
# 636 "data/maps/MtPyre_Summit/scripts.pory"
	setwildbattle SPECIES_MIMIKYU_TOTEM, 38, ITEM_SPELL_TAG
# 637 "data/maps/MtPyre_Summit/scripts.pory"
	dowildbattle
# 638 "data/maps/MtPyre_Summit/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 639 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MtPyre_Summit_EventScript_Mimikyu_2
# 642 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MtPyre_Summit_EventScript_Mimikyu_3
# 645 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MtPyre_Summit_EventScript_Mimikyu_4
# 648 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq MtPyre_Summit_EventScript_Mimikyu_5
MtPyre_Summit_EventScript_Mimikyu_1:
# 651 "data/maps/MtPyre_Summit/scripts.pory"
	waitmessage
# 652 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
	end

MtPyre_Summit_EventScript_Mimikyu_2:
# 640 "data/maps/MtPyre_Summit/scripts.pory"
	call MimikyuWon_Caught
	goto MtPyre_Summit_EventScript_Mimikyu_1

MtPyre_Summit_EventScript_Mimikyu_3:
# 643 "data/maps/MtPyre_Summit/scripts.pory"
	call MimikyuWon_Caught
	goto MtPyre_Summit_EventScript_Mimikyu_1

MtPyre_Summit_EventScript_Mimikyu_4:
# 646 "data/maps/MtPyre_Summit/scripts.pory"
	call MimikyuFailed
	goto MtPyre_Summit_EventScript_Mimikyu_1

MtPyre_Summit_EventScript_Mimikyu_5:
# 649 "data/maps/MtPyre_Summit/scripts.pory"
	call MimikyuFailed
	goto MtPyre_Summit_EventScript_Mimikyu_1


MimikyuWon_Caught::
# 657 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreen FADE_TO_BLACK
# 658 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject 9
# 659 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	return


MimikyuFailed::
# 664 "data/maps/MtPyre_Summit/scripts.pory"
	playmoncry SPECIES_MIMIKYU, CRY_MODE_ENCOUNTER
# 665 "data/maps/MtPyre_Summit/scripts.pory"
	delay 20
# 666 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreen FADE_TO_BLACK
# 667 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject 9
# 668 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
# 669 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MimikyuFailed_Text_0
	return


MimikyuFailed_Text_0:
# 669 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The MIMIKYU disappeared...$"
