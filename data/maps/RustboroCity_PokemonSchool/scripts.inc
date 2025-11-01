# 1 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_MapScripts::
# 2 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.byte 0
# 3 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 4 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Blackboard::
# 5 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lockall
# 6 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges, MSGBOX_DEFAULT
# 7 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 8 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 9 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 10 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic::
# 11 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	message RustboroCity_PokemonSchool_Text_ReadWhichTopic
# 12 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 13 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	multichoicegrid 8, 1, MULTI_STATUS_INFO, 3, FALSE
# 14 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	switch VAR_RESULT
# 15 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 0, RustboroCity_PokemonSchool_EventScript_Poison
# 16 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 1, RustboroCity_PokemonSchool_EventScript_Paralysis
# 17 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 2, RustboroCity_PokemonSchool_EventScript_Sleep
# 18 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 3, RustboroCity_PokemonSchool_EventScript_Burn
# 19 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 4, RustboroCity_PokemonSchool_EventScript_Freeze
# 20 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 5, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
# 21 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
# 22 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 23 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 24 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Poison::
# 25 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainPoison, MSGBOX_DEFAULT
# 26 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 27 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 28 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 29 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Paralysis::
# 30 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainParalysis, MSGBOX_DEFAULT
# 31 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 32 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 33 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 34 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Sleep::
# 35 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainSleep, MSGBOX_DEFAULT
# 36 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 37 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 38 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 39 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Burn::
# 40 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainBurn, MSGBOX_DEFAULT
# 41 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 42 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 43 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 44 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Freeze::
# 45 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainFreeze, MSGBOX_DEFAULT
# 46 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 47 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 48 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 49 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ExitTopicSelect::
# 50 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	releaseall
# 51 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 52 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 53 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GameboyKid1::
# 54 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_TradingRightNow, MSGBOX_NPC
# 55 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 56 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 57 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GameboyKid2::
# 58 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot, MSGBOX_NPC
# 59 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 60 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 61 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_RichBoy::
# 62 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems, MSGBOX_NPC
# 63 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 64 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 65 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Lass::
# 66 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself, MSGBOX_NPC
# 67 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 68 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_SchoolKidM::
# 70 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry, MSGBOX_NPC
# 71 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 72 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 73 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_StudentNotebook::
# 74 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsNotes, MSGBOX_SIGN
# 75 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 76 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 77 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Teacher::
# 78 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 79 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 80 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_RECEIVED_QUICK_CLAW, RustboroCity_PokemonSchool_EventScript_GaveQuickClaw
# 81 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast
# 82 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest
# 83 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw, MSGBOX_DEFAULT
# 84 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 85 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 86 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 87 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 88 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 89 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_RECEIVED_QUICK_CLAW
# 90 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 91 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 92 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 93 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast::
# 94 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast
# 95 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 96 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	return
# 97 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 98 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest::
# 99 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest
# 100 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 101 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	return
# 102 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 103 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GaveQuickClaw::
# 104 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainQuickClaw, MSGBOX_DEFAULT
# 105 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 106 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 107 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 108 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 109 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 110 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 111 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest:
# 112 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 113 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 114 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 115 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 116 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
# 117 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 118 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 119 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 120 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 121 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_left
# 122 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 123 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 124 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 125 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 126 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 127 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 128 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 129 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 130 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 131 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 132 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 133 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 134 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end
# 135 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 136 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast:
# 137 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 138 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 139 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 140 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 141 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 142 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 143 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
# 144 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 145 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 146 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 147 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 148 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_left
# 149 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 150 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 151 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 152 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 153 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 154 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 155 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 156 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 157 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 158 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 159 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 160 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 161 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end
# 162 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 163 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Scott::
# 164 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 165 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 166 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE, RustboroCity_PokemonSchool_EventScript_ScottWatchStudents
# 167 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_RUSTBORO, RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready
# 168 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge
# 169 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut, MSGBOX_DEFAULT
# 170 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 171 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_RUSTBORO
# 172 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 173 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 174 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 175 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready::
# 176 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge
# 177 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
# 178 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 179 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 180 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 181 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge::
# 182 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge, MSGBOX_DEFAULT
# 183 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
# 184 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 185 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 186 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge::
# 187 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottStoneBadge, MSGBOX_DEFAULT
# 188 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
# 189 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 190 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 191 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge::
# 192 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 193 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE
# 194 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 195 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 196 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 197 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottWatchStudents::
# 198 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
# 199 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 200 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 201 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 202 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges:
# 203 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The blackboard lists status changes\n"
# 204 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "that may affect POKéMON in battle.$"
# 205 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 206 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ReadWhichTopic:
# 207 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Which topic do you want to read?$"
# 208 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 209 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainPoison:
# 210 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON is poisoned, it will\n"
# 211 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "steadily lose HP.\p"
# 212 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The effects of poison remain after\n"
# 213 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a battle.\p"
# 214 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A poisoned POKéMON's HP will drop\n"
# 215 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "while it is traveling.\p"
# 216 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Heal a poisoning using a FULL HEAL.$"
# 217 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 218 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainParalysis:
# 219 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON becomes paralyzed,\n"
# 220 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "its SPEED drops.\p"
# 221 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It may also not be able to move while\n"
# 222 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "it is in battle.\p"
# 223 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Paralysis remains after battle.\n"
# 224 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Cure it using a FULL HEAL.$"
# 225 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 226 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainSleep:
# 227 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON falls asleep, it will be\n"
# 228 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "unable to attack.\p"
# 229 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A POKéMON may wake up on its own,\n"
# 230 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "but if a battle ends while it is\l"
# 231 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "sleeping, it will stay asleep.\p"
# 232 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Wake it up using a FULL HEAL.$"
# 233 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 234 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainBurn:
# 235 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A burn reduces ATTACK power, and it\n"
# 236 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "steadily reduces the victim's HP.\p"
# 237 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A burn lingers after battle.\n"
# 238 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Cure a burn using a FULL HEAL.$"
# 239 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 240 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainFreeze:
# 241 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON is frostbitten, its\n"
# 242 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "SP. ATK is reduced.\p"
# 243 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It will remain frostbitten after battle.\n"
# 244 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Thaw it out using a FULL HEAL.$"
# 245 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 246 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw:
# 247 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Students who don't study get a little\n"
# 248 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "taste of my QUICK CLAW.\p"
# 249 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Whether or not you are a good student \n"
# 250 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "will be evident from the way you use\l"
# 251 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "this item.$"
# 252 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 253 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainQuickClaw:
# 254 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A POKéMON holding the QUICK CLAW will\n"
# 255 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "occasionally speed up and get to move\l"
# 256 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "before its opponent.\p"
# 257 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "There are many other items that are\n"
# 258 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "meant to be held by POKéMON.\p"
# 259 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Just those alone will give you many\n"
# 260 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "topics to study!$"
# 261 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 262 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_TradingRightNow:
# 263 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I'm trading POKéMON with my friend\n"
# 264 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "right now.$"
# 265 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 266 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot:
# 267 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I always wanted a SEEDOT, and\n"
# 268 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I'm finally getting one!$"
# 269 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 270 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems:
# 271 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON can hold items, but they\n"
# 272 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "don't know what to do with man-made\l"
# 273 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "items like POTION and FULL HEAL.$"
# 274 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 275 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself:
# 276 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "You know how some POKéMON moves can\n"
# 277 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "confuse a POKéMON?\p"
# 278 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A confused POKéMON will sometimes\n"
# 279 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "attack itself without meaning to.\p"
# 280 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "But once it leaves battle, it will\n"
# 281 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "return to normal.$"
# 282 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 283 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry:
# 284 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A POKéMON holding a BERRY will heal\n"
# 285 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "itself…\p"
# 286 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "There are many kinds of items that\n"
# 287 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON can hold…\p"
# 288 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Boy, it sure is hard taking notes\n"
# 289 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "down…$"
# 290 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 291 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentsNotes:
# 292 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's this student's notebook…\p"
# 293 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON are to be caught using\n"
# 294 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKé BALLS.\p"
# 295 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Up to six POKéMON can accompany\n"
# 296 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a TRAINER.\p"
# 297 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A TRAINER is someone who catches\n"
# 298 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON, raises them, and battles\l"
# 299 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "with them.\p"
# 300 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A TRAINER's mission is to defeat\n"
# 301 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "the strong TRAINERS who await\l"
# 302 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "challengers in POKéMON GYMS.$"
# 303 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 304 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut:
# 305 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hello? Didn't we meet before?\n"
# 306 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I think back in PETALBURG CITY.\p"
# 307 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Let me introduce myself.\n"
# 308 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "My name's SCOTT.\p"
# 309 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I've been traveling everywhere in\n"
# 310 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "search of outstanding TRAINERS.\p"
# 311 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "More specifically, I'm looking for\n"
# 312 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON battle experts.\p"
# 313 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "So, what brings you to this SCHOOL?\n"
# 314 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Are you a TRAINER, too?\p"
# 315 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The first thing you should do is to\n"
# 316 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "have a POKéMON learn the move CUT.\p"
# 317 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If I remember correctly, someone in\n"
# 318 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "this town has CUT.$"
# 319 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 320 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown:
# 321 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "SCOTT: Hmm…\p"
# 322 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The talent levels of the students here\n"
# 323 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "are unknown. The potential's there.$"
# 324 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 325 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottStoneBadge:
# 326 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "SCOTT: Oh, what's that?\p"
# 327 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's a STONE BADGE, isn't it?\n"
# 328 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "That's pretty impressive, I'd say.\p"
# 329 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "But, you know, I would've loved to see\n"
# 330 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "you in battle.\p"
# 331 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's hard to tell what you're like as\n"
# 332 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a TRAINER from a LEAGUE BADGE.$"
# 333 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 334 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge:
# 335 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hello? Didn't we meet before?\n"
# 336 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I think back in PETALBURG CITY.\p"
# 337 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Let me introduce myself.\n"
# 338 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "My name's SCOTT.\p"
# 339 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I've been traveling everywhere in\n"
# 340 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "search of outstanding TRAINERS.\p"
# 341 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "More specifically, I'm looking for\n"
# 342 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON battle experts.\p"
# 343 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Oh, what's that?\n"
# 344 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's a STONE BADGE, isn't it?\p"
# 345 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "That's pretty impressive, I'd say, for\n"
# 346 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a starting TRAINER like yourself.\p"
# 347 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "But, you know, I would've loved to see\n"
# 348 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "you in battle.\p"
# 349 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's hard to tell what you're like as\n"
# 350 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a TRAINER from a LEAGUE BADGE.$"

RustboroCity_PokemonSchool_EventScript_TutorialGirl::
# 355 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 356 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 357 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_TALKED_TO_POKEMON_SCHOOL_TUTOR, RustboroCity_PokemonSchool_EventScript_TutorialChoices2
# 358 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_TutorialGirl_Text_0, MSGBOX_YESNO
# 364 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 365 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_TALKED_TO_POKEMON_SCHOOL_TUTOR
# 366 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setvar VAR_TUTORIAL_COUNTER, 0
# 367 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_PokemonSchool_EventScript_TutorialChoices
# 368 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_TutorialDecline
# 369 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end


RustboroCity_PokemonSchool_EventScript_TutorialChoices::
# 374 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_0, MSGBOX_DEFAULT
# 375 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_SYS_RECEIVED_TERA_ORB, RustboroCity_PokemonSchool_EventScript_TutorialChoices_2
# 379 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_DEFEATED_JAMES_EVERGRANDE, RustboroCity_PokemonSchool_EventScript_TutorialChoices_3
# 384 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_1, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_2, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_3, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_4, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_5, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_6, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_7, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_8, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_9, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_10
RustboroCity_PokemonSchool_EventScript_TutorialChoices_1:
# 387 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	switch VAR_RESULT
# 388 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 0, RustboroCity_PokemonSchool_EventScript_TutorialChoices_9
# 390 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 1, RustboroCity_PokemonSchool_EventScript_TutorialChoices_10
# 392 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 2, RustboroCity_PokemonSchool_EventScript_TutorialChoices_11
# 394 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 3, RustboroCity_PokemonSchool_EventScript_TutorialChoices_12
# 396 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 4, RustboroCity_PokemonSchool_EventScript_TutorialChoices_13
# 398 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 5, RustboroCity_PokemonSchool_EventScript_TutorialChoices_14
# 400 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 6, RustboroCity_PokemonSchool_EventScript_TutorialChoices_15
# 402 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 7, RustboroCity_PokemonSchool_EventScript_TutorialChoices_16
# 404 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 8, RustboroCity_PokemonSchool_EventScript_TutorialChoices_17
# 406 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 9, RustboroCity_PokemonSchool_EventScript_TutorialChoices_18
# 408 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 10, RustboroCity_PokemonSchool_EventScript_TutorialChoices_19
# 410 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 11, RustboroCity_PokemonSchool_EventScript_TutorialChoices_20
# 412 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_PokemonSchool_EventScript_TutorialChoices_21
# 415 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_TutorialDecline
RustboroCity_PokemonSchool_EventScript_TutorialChoices_7:
# 417 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end

RustboroCity_PokemonSchool_EventScript_TutorialChoices_2:
# 376 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_1, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_2, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_3, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_4, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_5, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_6, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_7, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_8, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_9, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_10, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_11, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_12
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices_1

RustboroCity_PokemonSchool_EventScript_TutorialChoices_3:
# 380 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_1, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_2, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_3, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_4, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_5, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_6, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_7, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_8, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_9, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_10, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_11
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices_1

RustboroCity_PokemonSchool_EventScript_TutorialChoices_9:
# 389 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExplainStab
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices_7

RustboroCity_PokemonSchool_EventScript_TutorialChoices_10:
# 391 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExplainPhysSpecialMoves
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices_7

RustboroCity_PokemonSchool_EventScript_TutorialChoices_11:
# 393 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExplainStatusMoves
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices_7

RustboroCity_PokemonSchool_EventScript_TutorialChoices_12:
# 395 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExplainPriorityMoves
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices_7

RustboroCity_PokemonSchool_EventScript_TutorialChoices_13:
# 397 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExplainSetUpMoves
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices_7

RustboroCity_PokemonSchool_EventScript_TutorialChoices_14:
# 399 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExplainWeather
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices_7

RustboroCity_PokemonSchool_EventScript_TutorialChoices_15:
# 401 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExplainTerrain
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices_7

RustboroCity_PokemonSchool_EventScript_TutorialChoices_16:
# 403 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExplainPivoting
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices_7

RustboroCity_PokemonSchool_EventScript_TutorialChoices_17:
# 405 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExplainIVsAndEVs
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices_7

RustboroCity_PokemonSchool_EventScript_TutorialChoices_18:
# 407 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExplainEVSpreads
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices_7

RustboroCity_PokemonSchool_EventScript_TutorialChoices_19:
# 409 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExplainMegaEvolution
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices_7

RustboroCity_PokemonSchool_EventScript_TutorialChoices_20:
# 411 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExplainTera
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices_7

RustboroCity_PokemonSchool_EventScript_TutorialChoices_21:
# 413 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_TutorialDecline
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices_7


RustboroCity_PokemonSchool_EventScript_TutorialChoices2::
# 422 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_TutorialChoices2_Text_0, MSGBOX_DEFAULT
# 423 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_SYS_RECEIVED_TERA_ORB, RustboroCity_PokemonSchool_EventScript_TutorialChoices2_2
# 427 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_DEFEATED_JAMES_EVERGRANDE, RustboroCity_PokemonSchool_EventScript_TutorialChoices2_3
# 432 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_1, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_2, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_3, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_4, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_5, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_6, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_7, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_8, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_9, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_10
RustboroCity_PokemonSchool_EventScript_TutorialChoices2_1:
# 435 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	switch VAR_RESULT
# 436 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 0, RustboroCity_PokemonSchool_EventScript_TutorialChoices2_9
# 438 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 1, RustboroCity_PokemonSchool_EventScript_TutorialChoices2_10
# 440 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 2, RustboroCity_PokemonSchool_EventScript_TutorialChoices2_11
# 442 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 3, RustboroCity_PokemonSchool_EventScript_TutorialChoices2_12
# 444 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 4, RustboroCity_PokemonSchool_EventScript_TutorialChoices2_13
# 446 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 5, RustboroCity_PokemonSchool_EventScript_TutorialChoices2_14
# 448 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 6, RustboroCity_PokemonSchool_EventScript_TutorialChoices2_15
# 450 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 7, RustboroCity_PokemonSchool_EventScript_TutorialChoices2_16
# 452 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 8, RustboroCity_PokemonSchool_EventScript_TutorialChoices2_17
# 454 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 9, RustboroCity_PokemonSchool_EventScript_TutorialChoices2_18
# 456 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 10, RustboroCity_PokemonSchool_EventScript_TutorialChoices2_19
# 458 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 11, RustboroCity_PokemonSchool_EventScript_TutorialChoices2_20
# 460 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_PokemonSchool_EventScript_TutorialChoices2_21
# 463 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_TutorialDecline
RustboroCity_PokemonSchool_EventScript_TutorialChoices2_7:
# 465 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end

RustboroCity_PokemonSchool_EventScript_TutorialChoices2_2:
# 424 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_1, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_2, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_3, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_4, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_5, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_6, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_7, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_8, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_9, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_10, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_11, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_12
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices2_1

RustboroCity_PokemonSchool_EventScript_TutorialChoices2_3:
# 428 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_1, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_2, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_3, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_4, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_5, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_6, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_7, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_8, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_9, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_10, RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_11
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices2_1

RustboroCity_PokemonSchool_EventScript_TutorialChoices2_9:
# 437 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExplainStab
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices2_7

RustboroCity_PokemonSchool_EventScript_TutorialChoices2_10:
# 439 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExplainPhysSpecialMoves
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices2_7

RustboroCity_PokemonSchool_EventScript_TutorialChoices2_11:
# 441 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExplainStatusMoves
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices2_7

RustboroCity_PokemonSchool_EventScript_TutorialChoices2_12:
# 443 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExplainPriorityMoves
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices2_7

RustboroCity_PokemonSchool_EventScript_TutorialChoices2_13:
# 445 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExplainSetUpMoves
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices2_7

RustboroCity_PokemonSchool_EventScript_TutorialChoices2_14:
# 447 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExplainWeather
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices2_7

RustboroCity_PokemonSchool_EventScript_TutorialChoices2_15:
# 449 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExplainTerrain
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices2_7

RustboroCity_PokemonSchool_EventScript_TutorialChoices2_16:
# 451 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExplainPivoting
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices2_7

RustboroCity_PokemonSchool_EventScript_TutorialChoices2_17:
# 453 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExplainIVsAndEVs
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices2_7

RustboroCity_PokemonSchool_EventScript_TutorialChoices2_18:
# 455 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExplainEVSpreads
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices2_7

RustboroCity_PokemonSchool_EventScript_TutorialChoices2_19:
# 457 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExplainMegaEvolution
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices2_7

RustboroCity_PokemonSchool_EventScript_TutorialChoices2_20:
# 459 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExplainTera
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices2_7

RustboroCity_PokemonSchool_EventScript_TutorialChoices2_21:
# 461 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_TutorialDecline
	goto RustboroCity_PokemonSchool_EventScript_TutorialChoices2_7


RustboroCity_PokemonSchool_EventScript_ExplainStab::
# 470 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_ExplainStab_Text_0, MSGBOX_YESNO
# 485 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 486 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_lt VAR_TUTORIAL_COUNTER, 11, RustboroCity_PokemonSchool_UpdateTutorialCounter
# 487 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_PokemonSchool_EventScript_TutorialChoices
# 488 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_TUTORIAL_COUNTER, 10, RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward
# 489 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_TutorialDecline
# 490 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end


RustboroCity_PokemonSchool_EventScript_ExplainPhysSpecialMoves::
# 495 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_ExplainPhysSpecialMoves_Text_0, MSGBOX_YESNO
# 514 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 515 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_lt VAR_TUTORIAL_COUNTER, 11, RustboroCity_PokemonSchool_UpdateTutorialCounter
# 516 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_PokemonSchool_EventScript_TutorialChoices
# 517 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_TUTORIAL_COUNTER, 10, RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward
# 518 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_TutorialDecline
# 519 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end


RustboroCity_PokemonSchool_EventScript_ExplainStatusMoves::
# 524 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_ExplainStatusMoves_Text_0, MSGBOX_YESNO
# 544 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 545 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_lt VAR_TUTORIAL_COUNTER, 11, RustboroCity_PokemonSchool_UpdateTutorialCounter
# 546 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_PokemonSchool_EventScript_TutorialChoices
# 547 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_TUTORIAL_COUNTER, 10, RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward
# 548 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_TutorialDecline
# 549 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end


RustboroCity_PokemonSchool_EventScript_ExplainPriorityMoves::
# 554 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_ExplainPriorityMoves_Text_0, MSGBOX_YESNO
# 580 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 581 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_lt VAR_TUTORIAL_COUNTER, 11, RustboroCity_PokemonSchool_UpdateTutorialCounter
# 582 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_PokemonSchool_EventScript_TutorialChoices
# 583 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_TUTORIAL_COUNTER, 10, RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward
# 584 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_TutorialDecline
# 585 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end


RustboroCity_PokemonSchool_EventScript_ExplainSetUpMoves::
# 590 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_ExplainSetUpMoves_Text_0, MSGBOX_YESNO
# 609 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 610 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_lt VAR_TUTORIAL_COUNTER, 11, RustboroCity_PokemonSchool_UpdateTutorialCounter
# 611 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_PokemonSchool_EventScript_TutorialChoices
# 612 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_TUTORIAL_COUNTER, 10, RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward
# 613 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_TutorialDecline
# 614 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end


RustboroCity_PokemonSchool_EventScript_ExplainWeather::
# 619 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_ExplainWeather_Text_0, MSGBOX_YESNO
# 646 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 647 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_lt VAR_TUTORIAL_COUNTER, 11, RustboroCity_PokemonSchool_UpdateTutorialCounter
# 648 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_PokemonSchool_EventScript_TutorialChoices
# 649 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_TUTORIAL_COUNTER, 10, RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward
# 650 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_TutorialDecline
# 651 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end


RustboroCity_PokemonSchool_EventScript_ExplainTerrain::
# 656 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_ExplainTerrain_Text_0, MSGBOX_YESNO
# 682 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 683 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_lt VAR_TUTORIAL_COUNTER, 11, RustboroCity_PokemonSchool_UpdateTutorialCounter
# 684 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_PokemonSchool_EventScript_TutorialChoices
# 685 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_TUTORIAL_COUNTER, 10, RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward
# 686 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_TutorialDecline
# 687 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end


RustboroCity_PokemonSchool_EventScript_ExplainPivoting::
# 692 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_ExplainPivoting_Text_0, MSGBOX_YESNO
# 719 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 720 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_lt VAR_TUTORIAL_COUNTER, 11, RustboroCity_PokemonSchool_UpdateTutorialCounter
# 721 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_PokemonSchool_EventScript_TutorialChoices
# 722 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_TUTORIAL_COUNTER, 10, RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward
# 723 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_TutorialDecline
# 724 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end


RustboroCity_PokemonSchool_EventScript_ExplainIVsAndEVs::
# 729 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_ExplainIVsAndEVs_Text_0, MSGBOX_YESNO
# 746 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 747 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_lt VAR_TUTORIAL_COUNTER, 11, RustboroCity_PokemonSchool_UpdateTutorialCounter
# 748 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_PokemonSchool_EventScript_TutorialChoices
# 749 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_TUTORIAL_COUNTER, 10, RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward
# 750 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_TutorialDecline
# 751 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end


RustboroCity_PokemonSchool_EventScript_ExplainEVSpreads::
# 756 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_ExplainEVSpreads_Text_0, MSGBOX_YESNO
# 784 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 785 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_lt VAR_TUTORIAL_COUNTER, 11, RustboroCity_PokemonSchool_UpdateTutorialCounter
# 786 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_PokemonSchool_EventScript_TutorialChoices
# 787 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_TUTORIAL_COUNTER, 10, RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward
# 788 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_TutorialDecline
# 789 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end


RustboroCity_PokemonSchool_EventScript_ExplainMegaEvolution::
# 794 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_ExplainMegaEvolution_Text_0, MSGBOX_YESNO
# 805 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 806 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_lt VAR_TUTORIAL_COUNTER, 11, RustboroCity_PokemonSchool_UpdateTutorialCounter
# 807 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_PokemonSchool_EventScript_TutorialChoices
# 808 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_TUTORIAL_COUNTER, 10, RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward
# 809 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_TutorialDecline
# 810 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end


RustboroCity_PokemonSchool_EventScript_ExplainTera::
# 815 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_ExplainTera_Text_0, MSGBOX_DEFAULT
# 843 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 844 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_ExplainTera_Text_1, MSGBOX_YESNO
# 846 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 847 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_lt VAR_TUTORIAL_COUNTER, 11, RustboroCity_PokemonSchool_UpdateTutorialCounter
# 848 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_PokemonSchool_EventScript_TutorialChoices
# 849 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_TUTORIAL_COUNTER, 10, RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward
# 850 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_TutorialDecline
# 851 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end


RustboroCity_PokemonSchool_UpdateTutorialCounter::
# 856 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_TUTORIAL_COUNTER, 1
	return


RustboroCity_PokemonSchool_EventScript_TutorialDecline::
# 861 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 862 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_TUTORIAL_COUNTER, 10, RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward
# 863 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_TutorialDecline_Text_0, MSGBOX_AUTOCLOSE
# 865 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 866 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end


RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward::
# 871 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward_Text_0, MSGBOX_DEFAULT
# 875 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 876 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	giveitem ITEM_RARE_CANDY, 5
# 877 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 878 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward_2
# 881 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward_3
# 884 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward_4
# 888 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 10
RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward_1:
# 890 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 891 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	giveitem ITEM_CHERISH_BALL, 6
# 892 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 893 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward_Text_1, MSGBOX_AUTOCLOSE
# 897 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 898 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setvar VAR_TUTORIAL_COUNTER, 11
# 899 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end

RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward_2:
# 879 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	giveitem ITEM_EXP_CANDY_S, 10
	goto RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward_1

RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward_3:
# 882 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	giveitem ITEM_EXP_CANDY_M, 10
	goto RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward_1

RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward_4:
# 885 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	giveitem ITEM_EXP_CANDY_L, 10
	goto RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward_1


RustboroCity_PokemonSchool_EventScript_Boy1::
# 904 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_Boy1_Text_0, MSGBOX_SIGN
	end


RustboroCity_PokemonSchool_EventScript_Girl1::
# 918 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_Girl1_Text_0, MSGBOX_NPC
	end


RustboroCity_PokemonSchool_EventScript_TutorialGirl_Text_0:
# 358 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Oh! Are you a new TRAINER?\n That's great!\p I'm pretty smart when it comes\n to POKéMON.\p If you want, I can answer any questions\n you might have about battling.$"

RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_0:
# 374 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "What do you want to know about?$"

RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_1:
# 376 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "STAB$"

RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_2:
# 376 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "PHYSICAL & SPECIAL MOVES$"

RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_3:
# 376 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "STATUS MOVES$"

RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_4:
# 376 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "PRIORITY MOVES$"

RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_5:
# 377 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "SET UP MOVES$"

RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_6:
# 377 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "WEATHER$"

RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_7:
# 377 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "TERRAIN$"

RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_8:
# 377 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "DOUBLING/PIVOT$"

RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_9:
# 377 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "IVs & EVs$"

RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_10:
# 377 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "EV SPREADS$"

RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_11:
# 377 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "MEGA EVOLUTION$"

RustboroCity_PokemonSchool_EventScript_TutorialChoices_Text_12:
# 377 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "TERA$"

RustboroCity_PokemonSchool_EventScript_TutorialChoices2_Text_0:
# 422 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hey! Here to learn about battling?\nWhat do you want to know about?$"

RustboroCity_PokemonSchool_EventScript_ExplainStab_Text_0:
# 470 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "STAB stands for\n Same Type Attack Bonus.\p When a POKéMON uses a damaging move\n that's the same type as one of theirs,\l the move's power is increased by 1.5x.\p For example, WATER PULSE usually has\n a base power of 60.\p If used by a WATER-type, STAB boosts\n WATER PULSES's power to 90.\p Also, if a POKéMON has the ability\n ADAPTABILITY, STAB boosts are 2x!\p Making use of your POKéMON's types\n is essential to being good at battles!\p Is there anything else you wanted\n me to explain?$"

RustboroCity_PokemonSchool_EventScript_ExplainPhysSpecialMoves_Text_0:
# 495 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Moves are put into three different\n categories: PHYSICAL, SPECIAL, and\l STATUS.\p All three categories have icons\n to show which one they are.\p Some examples of PHYSICAL moves are\n TACKLE and BITE.\p Some examples of SPECIAL moves are\n WATER GUN and EMBER.\p A POKéMON with a high ATK is\n stronger with PHYSICAL moves.\p A POKéMON with a high SP. ATK\n is stronger with SPECIAL moves.\p Knowing whether your POKéMON is a\n PHYSICAL or SPECIAL attacker is\l important if you want to be a\l good TRAINER!\p Is there anything else you wanted\n me to explain?$"

RustboroCity_PokemonSchool_EventScript_ExplainStatusMoves_Text_0:
# 524 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Moves are put into three different\n categories: PHYSICAL, SPECIAL, and\l STATUS.\p All three categories have icons\n to show which one they are.\p Some examples of STATUS moves are\n TAIL WHIP and GROWL.\p Other examples of STATUS moves are\n BULK UP and THUNDER WAVE.\p STATUS MOVES can do a variety of\n things:\p Give the foe an ailment like POISON,\n or a debuff like lowering DEF., or\l even giving your POKéMON a buff\l by increasing its STATS!\p Knowing which STATUS MOVES to use\n in a battle is very important if\l you want to be a good TRAINER!\p Is there anything else you wanted\n me to explain?$"

RustboroCity_PokemonSchool_EventScript_ExplainPriorityMoves_Text_0:
# 554 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "PRIORITY MOVES are a special\n set of moves that usually go first.\l They can be PHYSICAL or SPECIAL.\p An example of a PHYSICAL PRIORITY\n MOVE is QUICK ATTACK.\p A SPECIAL PRIORITY MOVE would be\n VACUUM WAVE.\p A STATUS PRIORITY MOVE would be\n something like PROTECT.\p There are also items that can increase\n a POKéMON's priority, such as the\l QUICK CLAW, or CUSTAP BERRY.\p Some moves also reverse priority,\n like TRICK ROOM.\p Some abilities can even increase\n priority, like PRANKSTER, which\l increases priority on STATUS MOVES.\p Speed control through the use of\n PRIORITY MOVES can be extremely\l useful if your POKéMON is slow, or if\l the foe's POKéMON has a lot of boosts.\p If two POKéMON use a move with the\n same priority, the POKéMON that's\l faster will go first.\p Is there anything else you wanted\n me to explain?$"

RustboroCity_PokemonSchool_EventScript_ExplainSetUpMoves_Text_0:
# 590 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "SETUP MOVES are moves that give\n your POKéMON some type of STAT boost.\p Some examples are BULK UP, WORK UP,\n CALM MIND, and NASTY PLOT.\p SETUP MOVES are a great way for\n a POKéMON to sweep a team.\p Any STAT increase or decrease will\n last until the POKéMON switches out.\p This is why it's usually better to\n raise your POKéMON's STATS as\l opposed to lowering your foe's.\p STATS can be boosted up to +6,\n and lowered to -6.\p SETUP MOVES can be extremely strong\n when used correctly.\p Consider teaching your POKéMON some\n SETUP MOVES!\p Is there anything else you wanted\n me to explain?$"

RustboroCity_PokemonSchool_EventScript_ExplainWeather_Text_0:
# 619 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "WEATHER effects can influence\n a battle a lot!\p There are four weather effects:\n RAIN, SUN, SAND, and SNOW.\p RAIN weakens FIRE-type attacks, and\n boosts WATER-type attacks.\p SUN weakens WATER-type attacks, and\n boosts FIRE-type attacks.\p SAND hurts non GROUND, ROCK, or STEEL\n -types and raises the SP. DEF of ROCK\l -types.\p SNOW increases the DEF of ICE-types.\p There are also some moves that get\n affected by the WEATHER!\p For example, THUNDER and HURRICANE\n can't miss in RAIN.\p SOLAR BEAM and SOLAR BLADE don't\n need to charge in SUN.\p BLIZZARD can't miss in SNOW.\p Also, moves like SYNTHESIS and\n GROWTH can be weaker or stronger\l depending on the WEATHER.\p There are also WEATHER dependent\n abilities such as SWIFT SWIM, SLUSH\l RUSH, and CHLOROPHYLL.\p Is there anything else you wanted\n me to explain?$"

RustboroCity_PokemonSchool_EventScript_ExplainTerrain_Text_0:
# 656 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "TERRAINS aren't as popular as WEATHER\n but still have strong effects!\p There are four different TERRAINS:\n ELECTRIC, GRASSY, MISTY, and PSYCHIC.\p ELECTRIC TERRAIN increases the power\n of ELECTRIC-type attacks, and stops\l POKéMON from falling asleep.\p GRASSY TERRAIN increases the power\n of GRASS-type attacks and heals\l POKéMON every turn.\p GRASSY TERRAIN also halves the\n damage of BULLDOZE, EARTHQUAKE, and\l MAGNITUDE.\p MISTY TERRAIN halves the damage of\n DRAGON-type attacks and prevents\l POKéMON from being afflicted with\l ailments like burn and confusion.\p PSYCHIC TERRAIN increases the power\n of PSYCHIC-type attacks and also\l causes any PRIORITY MOVE to fail.\p Only grounded POKéMON are affected\n by TERRAIN.\p That means FLYING-types and LEVITATE\n POKéMON aren't affected by TERRAINS!\p Is there anything else you wanted\n me to explain?$"

RustboroCity_PokemonSchool_EventScript_ExplainPivoting_Text_0:
# 692 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "DOUBLING is an advanced switching\n technique used to get one of your\l other POKéMON in safely.\p For example, let's say you have an\n ELECTRIC-type out against a\l FIRE/GROUND-type.\p Assuming your opponent is going\n to use a GROUND-type attack, you\l don't want your WATER-type switching\l in on a move it doesn't resist.\p So instead, you switch to your\n STEEL/FLYING-type, which is immune\l to GROUND-type attacks, and next\l turn double to your WATER-type on\l the predictable FIRE-type attack.\p An example of a PIVOT is to switch into\n a slow and defensive POKéMON, and\l then use a switching move, such as\l VOLT SWITCH or U-TURN, which can\l let you switch into another\l POKéMON safely.\p This is why moves like TELEPORT can\n be so powerful, since they have\l negative priority, meaning they'll\l usually move last.\p Is there anything else you wanted\n me to explain?$"

RustboroCity_PokemonSchool_EventScript_ExplainIVsAndEVs_Text_0:
# 729 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "IVs, or INDIVIDUAL VALUES, are\n the inherent talents of a POKéMON and\l can range from 0-31.\p This stat is determined from birth.\p Luckily, most POKéMON in HOENN have\n perfect IVs.\p EVs, or EFFORT VALUES, are gained\n from battling POKéMON.\p Each stat, such as HP, ATK, etc.,\n can gain EVs from defeating certain\l POKéMON.\p A POKéMON can have up to 510 EVs total,\n with a maximum of 252 in a single stat.\p A POKéMON with EVs can be much stronger\n than one without any!\p Is there anything else you wanted\n me to explain?$"

RustboroCity_PokemonSchool_EventScript_ExplainEVSpreads_Text_0:
# 756 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "With proper EVs and a good NATURE\n your POKéMON will be really strong!\p When trying to decide how to give\n your POKéMON EVs you need to consider\l what the POKéMON's role on the team is\l and its strengths and weaknesses.\p For example, SNORLAX is a slow, bulky\n POKéMON with naturally high HP and ATK.\p Investing 252 EVs in its HP and ATK\n respectively would be a good option.\p On the other hand, a fast and frail\n POKéMON that can hit hard would\l gain a lot more from investing EVs\l in its SPEED and ATTACK or SP. ATK.\p Along with proper EVs, a POKéMON's\n NATURE is also very important.\p For example, a MODEST NATURE lowers\n ATK and raises SP. ATK.\p A NATURE like that would be terrible\n on a POKéMON like SNORLAX!\p While the POKéMON will always have\n the NATURE it started with, you can\l at least change the STAT benefits\l through the use of NATURE MINTS.\p You can buy NATURE MINTS from\n POKé MARTS.\p Is there anything else you wanted\n me to explain?$"

RustboroCity_PokemonSchool_EventScript_ExplainMegaEvolution_Text_0:
# 794 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "MEGA EVOLUTION is something that only\n some POKéMON are able to use.\p For a POKéMON to MEGA EVOLVE, it needs\n to be holding the right MEGA STONE.\p A POKéMON that's MEGA'd will stay\n in its MEGA EVOLUTION until the\l battle ends, or it faints.\p To use MEGA EVOLUTION in battle, press\n START before selecting your move.\p Is there anything else you wanted\n me to explain?$"

RustboroCity_PokemonSchool_EventScript_ExplainTera_Text_0:
# 815 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "TERASTALLIZATION is a battle mechanic\n that allows you to change your\l POKéMON's type temporarily during a\l battle.\p Similar to MEGA EVOLUTION, the type\n the POKéMON TERASTALLIZED into will\l last until the end of the battle, or\l until the POKéMON faints.\p Only one POKéMON can TERA during a\n battle, and two gimmicks can't be\l used on the same POKéMON.\p To TERASTALLIZE, press START before\n selecting your move.\p While TERASTALLIZED, POKéMON receive\n STAB (Same Type Attack Bonus) on\l moves matching their TERA-type,\l in addition to moves matching their\l original types.\p A POKéMON's TERA-type can be viewed\n in the summary screen.\p It will default to an existing type\n the POKéMON has.\p After using TERA, the TERA ORB needs to\n be recharged at a POKéMON CENTER.\p TERA SHARDS are required to change\n a POKéMON's TERA-type.\p They can be bought from new vendors\n in POKé MARTS.$"

RustboroCity_PokemonSchool_EventScript_ExplainTera_Text_1:
# 844 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Is there anything else you wanted\n me to explain?$"

RustboroCity_PokemonSchool_EventScript_TutorialDecline_Text_0:
# 863 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Okay!\n Good luck on your battles!$"

RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward_Text_0:
# 871 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Wow!\p I've never had somebody so ready to\n learn about battling!\p Here, take this a thanks for listening.$"

RustboroCity_PokemonSchool_EventScript_TutorialGirlGiveReward_Text_1:
# 893 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I know you'll become a great TRAINER.\n I'll be rooting for you!\p If you ever need a refresher course,\n feel free to come back!$"

RustboroCity_PokemonSchool_EventScript_Boy1_Text_0:
# 904 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "“Wild POKéMON are weaker than a\n TRAINER's POKéMON.\p “This is because POKéMON gain EVs from\n battling other POKéMON.\p “It's good to make sure new POKéMON\n added to your team also get EVs.”\p Is that so…\n But… Huh?\p What are EVs?\n We didn't learn that yet…$"

RustboroCity_PokemonSchool_EventScript_Girl1_Text_0:
# 918 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hey, did you know?\p You can change what POKé BALL your\n POKéMON is in!\p Just use any POKé BALL from the bag\n outside of battle.\p Isn't that cool?$"
