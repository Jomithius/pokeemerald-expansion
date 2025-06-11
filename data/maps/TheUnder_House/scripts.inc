TheUnder_House_MapScripts::
	.byte 0


TheUnder_House_Eventscript_BedLeft::
# 4 "data/maps/TheUnder_House/scripts.pory"
	lock
# 5 "data/maps/TheUnder_House/scripts.pory"
	msgbox TheUnder_House_Text_TakeARest, MSGBOX_YESNO
# 6 "data/maps/TheUnder_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TheUnder_House_Eventscript_BedLeft_2
# 13 "data/maps/TheUnder_House/scripts.pory"
	msgbox TheUnder_House_Eventscript_BedLeft_Text_0, MSGBOX_AUTOCLOSE
# 14 "data/maps/TheUnder_House/scripts.pory"
	waitmessage
# 15 "data/maps/TheUnder_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 16 "data/maps/TheUnder_House/scripts.pory"
	waitmovement 0
TheUnder_House_Eventscript_BedLeft_1:
# 18 "data/maps/TheUnder_House/scripts.pory"
	release
	end

TheUnder_House_Eventscript_BedLeft_2:
# 7 "data/maps/TheUnder_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheUnder_House_Movement_LayInBedLeft
# 8 "data/maps/TheUnder_House/scripts.pory"
	waitmovement 0
# 9 "data/maps/TheUnder_House/scripts.pory"
	call TheUnder_House_OutOfCenterPartyHeal
# 10 "data/maps/TheUnder_House/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 1
	goto TheUnder_House_Eventscript_BedLeft_1


TheUnder_House_Eventscript_BedRight::
# 23 "data/maps/TheUnder_House/scripts.pory"
	lock
# 24 "data/maps/TheUnder_House/scripts.pory"
	msgbox TheUnder_House_Text_TakeARest, MSGBOX_YESNO
# 25 "data/maps/TheUnder_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TheUnder_House_Eventscript_BedRight_2
# 32 "data/maps/TheUnder_House/scripts.pory"
	msgbox TheUnder_House_Eventscript_BedLeft_Text_0, MSGBOX_AUTOCLOSE
# 33 "data/maps/TheUnder_House/scripts.pory"
	waitmessage
# 34 "data/maps/TheUnder_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 35 "data/maps/TheUnder_House/scripts.pory"
	waitmovement 0
TheUnder_House_Eventscript_BedRight_1:
# 37 "data/maps/TheUnder_House/scripts.pory"
	release
	end

TheUnder_House_Eventscript_BedRight_2:
# 26 "data/maps/TheUnder_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheUnder_House_Movement_LayInBedRight
# 27 "data/maps/TheUnder_House/scripts.pory"
	waitmovement 0
# 28 "data/maps/TheUnder_House/scripts.pory"
	call TheUnder_House_OutOfCenterPartyHeal
# 29 "data/maps/TheUnder_House/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 1
	goto TheUnder_House_Eventscript_BedRight_1


TheUnder_House_OutOfCenterPartyHeal::
# 42 "data/maps/TheUnder_House/scripts.pory"
	warpsilent MAP_THE_UNDER_SHADY_HOUSE, 11, 2
# 43 "data/maps/TheUnder_House/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 44 "data/maps/TheUnder_House/scripts.pory"
	delay 10
# 45 "data/maps/TheUnder_House/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 46 "data/maps/TheUnder_House/scripts.pory"
	delay 10
# 47 "data/maps/TheUnder_House/scripts.pory"
	playfanfare MUS_HEAL
# 48 "data/maps/TheUnder_House/scripts.pory"
	waitfanfare
# 49 "data/maps/TheUnder_House/scripts.pory"
	special HealPlayerParty
# 50 "data/maps/TheUnder_House/scripts.pory"
	callnative UpdateFollowingPokemon
# 51 "data/maps/TheUnder_House/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
	return


# 61 "data/maps/TheUnder_House/scripts.pory"
TheUnder_House_Movement_LayInBedLeft:
# 62 "data/maps/TheUnder_House/scripts.pory"
	walk_right
# 63 "data/maps/TheUnder_House/scripts.pory"
	walk_in_place_down
	step_end

# 66 "data/maps/TheUnder_House/scripts.pory"
TheUnder_House_Movement_LayInBedRight:
# 67 "data/maps/TheUnder_House/scripts.pory"
	walk_left
# 68 "data/maps/TheUnder_House/scripts.pory"
	walk_in_place_down
	step_end

TheUnder_House_Eventscript_BedLeft_Text_0:
# 13 "data/maps/TheUnder_House/scripts.pory"
	.string "Maybe another time.$"

TheUnder_House_Text_TakeARest::
# 56 "data/maps/TheUnder_House/scripts.pory"
	.string "There's a bed…\n Take a rest?$"
