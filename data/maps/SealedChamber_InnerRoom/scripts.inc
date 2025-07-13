# 1 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_MapScripts::
# 2 "data/maps/SealedChamber_InnerRoom/scripts.pory"
    map_script MAP_SCRIPT_ON_RESUME, SealedChamber_InnerRoom_OnResume
# 3 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	.byte 0
# 4 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 5 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_OnResume::
# 6 "data/maps/SealedChamber_InnerRoom/scripts.pory"
    call_if_set FLAG_SYS_CTRL_OBJ_DELETE, SealedChamber_InnerRoom_EventScript_TryRemoveRegigigas
# 7 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 8 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 9 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_TryRemoveRegigigas::
# 10 "data/maps/SealedChamber_InnerRoom/scripts.pory"
    specialvar VAR_RESULT, GetBattleOutcome
# 11 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 12 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	removeobject VAR_LAST_TALKED
# 13 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	return
# 14 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 15 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleBackWall::
# 16 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 17 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_FirstWailordLastRelicanth
# 18 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto_if_set FLAG_REGI_DOORS_OPENED, SealedChamber_InnerRoom_EventScript_NoEffect
# 19 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	specialvar VAR_RESULT, CheckRelicanthWailord
# 20 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SealedChamber_InnerRoom_EventScript_NoEffect
# 21 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	fadeoutbgm 0
# 22 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_TRUCK_MOVE
# 23 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Long
# 24 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 25 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 26 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 27 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 28 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 29 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 30 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 31 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 32 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 33 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 34 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 35 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 36 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 37 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 38 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	msgbox gText_DoorOpenedFarAway, MSGBOX_DEFAULT
# 39 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	closemessage
# 40 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	fadeinbgm 0
# 41 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	setflag FLAG_REGI_DOORS_OPENED
# 42 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 43 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 44 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 45 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_NoEffect::
# 46 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 47 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 48 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 49 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart1::
# 50 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 51 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_InThisCaveWeHaveLived
# 52 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 53 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 54 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 55 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart2::
# 56 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 57 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_WeOweAllToThePokemon
# 58 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 59 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 60 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 61 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart3::
# 62 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 63 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_ButWeSealedThePokemonAway
# 64 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 65 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 66 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 67 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart4::
# 68 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 69 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_WeFearedIt
# 70 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 71 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 72 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 73 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart5::
# 74 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 75 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_ThoseWithCourageHope
# 76 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 77 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 78 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 79 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart6::
# 80 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 81 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_OpenDoorEternalPokemonWaits
# 82 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 83 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end

SealedChamber_InnerRoom_EventScript_Regigigas::
# 87 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lock
# 88 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	checkitem ITEM_CASTELIACONE
# 89 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SealedChamber_InnerRoom_EventScript_CheckRegisAndNickname
# 90 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	checkitem ITEM_NEVERMELTICE
# 91 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SealedChamber_InnerRoom_EventScript_CheckRegisAndNickname
# 92 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	checkitem ITEM_ICY_ROCK
# 93 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SealedChamber_InnerRoom_EventScript_CheckRegisAndNickname
# 94 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto SealedChamber_InnerRoom_EventScript_AncientStatue
	end


SealedChamber_InnerRoom_EventScript_CheckRegisAndNickname::
# 99 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lock
# 100 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	specialvar VAR_RESULT, AreRegisInParty
# 101 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SealedChamber_InnerRoom_EventScript_CheckRegisAndNickname_2
# 107 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto SealedChamber_InnerRoom_EventScript_AncientStatue
SealedChamber_InnerRoom_EventScript_CheckRegisAndNickname_1:
	end

SealedChamber_InnerRoom_EventScript_CheckRegisAndNickname_2:
# 102 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	specialvar VAR_RESULT, IsLeadMonNicknamedOrNotEnglish
# 103 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SealedChamber_InnerRoom_EventScript_RegigigasAwakens
# 104 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto SealedChamber_InnerRoom_EventScript_AncientStatue
	goto SealedChamber_InnerRoom_EventScript_CheckRegisAndNickname_1


SealedChamber_InnerRoom_EventScript_AncientStatue::
# 113 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lock
# 114 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	msgbox SealedChamber_InnerRoom_EventScript_AncientStatue_Text_0, MSGBOX_AUTOCLOSE
# 116 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitmessage
# 117 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	release
	end


SealedChamber_InnerRoom_EventScript_RegigigasAwakens::
# 122 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lock
# 123 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	fadeoutbgm 0
# 124 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_TRUCK_MOVE
# 125 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Long
# 126 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 127 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 128 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 129 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 130 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_TRUCK_STOP
# 131 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 132 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_M_THUNDERBOLT
# 133 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	fadescreen FADE_TO_WHITE
# 134 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitse
# 135 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 136 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 137 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	msgbox SealedChamber_InnerRoom_EventScript_RegigigasAwakens_Text_0, MSGBOX_AUTOCLOSE
# 138 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitmessage
# 139 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playmoncry SPECIES_REGIGIGAS, CRY_MODE_ENCOUNTER
# 140 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitmoncry
# 141 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	setwildbattle SPECIES_REGIGIGAS, 100
# 142 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 143 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special StartRegiBattle
# 144 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 145 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 146 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 147 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SealedChamber_InnerRoom_EventScript_RegigigasAwakens_2
# 147 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SealedChamber_InnerRoom_EventScript_RegigigasAwakens_2
# 156 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SealedChamber_InnerRoom_EventScript_RegigigasAwakens_3
SealedChamber_InnerRoom_EventScript_RegigigasAwakens_1:
# 165 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	release
	end

SealedChamber_InnerRoom_EventScript_RegigigasAwakens_2:
# 148 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playmoncry SPECIES_REGIGIGAS, CRY_MODE_WEAK
# 149 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitmoncry
# 150 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 151 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 152 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 153 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	msgbox SealedChamber_InnerRoom_EventScript_RegigigasAwakens_Text_1, MSGBOX_AUTOCLOSE
# 154 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitmessage
	goto SealedChamber_InnerRoom_EventScript_RegigigasAwakens_1

SealedChamber_InnerRoom_EventScript_RegigigasAwakens_3:
# 157 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playmoncry SPECIES_REGIGIGAS, CRY_MODE_FAINT
# 158 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitmoncry
# 159 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 160 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	removeobject 1
# 161 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 162 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	msgbox SealedChamber_InnerRoom_EventScript_RegigigasAwakens_Text_2, MSGBOX_AUTOCLOSE
# 163 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitmessage
	goto SealedChamber_InnerRoom_EventScript_RegigigasAwakens_1


SealedChamber_InnerRoom_EventScript_AncientStatue_Text_0:
# 114 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	.string "It looks like a statue of a very\n ancient and powerful POKéMON…$"

SealedChamber_InnerRoom_EventScript_RegigigasAwakens_Text_0:
# 137 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	.string "The statue started moving!$"

SealedChamber_InnerRoom_EventScript_RegigigasAwakens_Text_1:
# 153 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	.string "REGIGIGAS stopped moving…$"

SealedChamber_InnerRoom_EventScript_RegigigasAwakens_Text_2:
# 162 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	.string "REGIGIGAS disappeared…$"
