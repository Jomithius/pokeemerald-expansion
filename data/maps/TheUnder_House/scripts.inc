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
# 17 "data/maps/TheUnder_House/scripts.pory"
	msgbox TheUnder_House_Eventscript_BedLeft_Text_0, MSGBOX_AUTOCLOSE
# 18 "data/maps/TheUnder_House/scripts.pory"
	waitmessage
# 19 "data/maps/TheUnder_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 20 "data/maps/TheUnder_House/scripts.pory"
	waitmovement 0
TheUnder_House_Eventscript_BedLeft_1:
# 22 "data/maps/TheUnder_House/scripts.pory"
	release
	end

TheUnder_House_Eventscript_BedLeft_2:
# 7 "data/maps/TheUnder_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheUnder_House_Movement_LayInBedLeft
# 8 "data/maps/TheUnder_House/scripts.pory"
	waitmovement 0
# 9 "data/maps/TheUnder_House/scripts.pory"
	msgbox TheUnder_House_Movement_FallIntoSlumber, MSGBOX_DEFAULT
# 10 "data/maps/TheUnder_House/scripts.pory"
	waitmessage
# 11 "data/maps/TheUnder_House/scripts.pory"
	warpsilent MAP_THE_UNDER_SHADY_HOUSE, 11, 2
# 12 "data/maps/TheUnder_House/scripts.pory"
	delay 120
# 13 "data/maps/TheUnder_House/scripts.pory"
	call TheUnder_House_OutOfCenterPartyHeal
# 14 "data/maps/TheUnder_House/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 1
	goto TheUnder_House_Eventscript_BedLeft_1


TheUnder_House_Eventscript_BedRight::
# 27 "data/maps/TheUnder_House/scripts.pory"
	lock
# 28 "data/maps/TheUnder_House/scripts.pory"
	msgbox TheUnder_House_Text_TakeARest, MSGBOX_YESNO
# 29 "data/maps/TheUnder_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TheUnder_House_Eventscript_BedRight_2
# 40 "data/maps/TheUnder_House/scripts.pory"
	msgbox TheUnder_House_Eventscript_BedLeft_Text_0, MSGBOX_AUTOCLOSE
# 41 "data/maps/TheUnder_House/scripts.pory"
	waitmessage
# 42 "data/maps/TheUnder_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 43 "data/maps/TheUnder_House/scripts.pory"
	waitmovement 0
TheUnder_House_Eventscript_BedRight_1:
# 45 "data/maps/TheUnder_House/scripts.pory"
	release
	end

TheUnder_House_Eventscript_BedRight_2:
# 30 "data/maps/TheUnder_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheUnder_House_Movement_LayInBedRight
# 31 "data/maps/TheUnder_House/scripts.pory"
	waitmovement 0
# 32 "data/maps/TheUnder_House/scripts.pory"
	msgbox TheUnder_House_Movement_FallIntoSlumber, MSGBOX_DEFAULT
# 33 "data/maps/TheUnder_House/scripts.pory"
	waitmessage
# 34 "data/maps/TheUnder_House/scripts.pory"
	warpsilent MAP_THE_UNDER_SHADY_HOUSE, 11, 2
# 35 "data/maps/TheUnder_House/scripts.pory"
	delay 120
# 36 "data/maps/TheUnder_House/scripts.pory"
	call TheUnder_House_OutOfCenterPartyHeal
# 37 "data/maps/TheUnder_House/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 1
	goto TheUnder_House_Eventscript_BedRight_1


TheUnder_House_OutOfCenterPartyHeal::
# 51 "data/maps/TheUnder_House/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 52 "data/maps/TheUnder_House/scripts.pory"
	delay 30
# 53 "data/maps/TheUnder_House/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 54 "data/maps/TheUnder_House/scripts.pory"
	delay 30
# 55 "data/maps/TheUnder_House/scripts.pory"
	playfanfare MUS_HEAL
# 56 "data/maps/TheUnder_House/scripts.pory"
	waitfanfare
# 57 "data/maps/TheUnder_House/scripts.pory"
	special HealPlayerParty
# 58 "data/maps/TheUnder_House/scripts.pory"
	callnative UpdateFollowingPokemon
# 59 "data/maps/TheUnder_House/scripts.pory"
	delay 60
# 60 "data/maps/TheUnder_House/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
	return


# 76 "data/maps/TheUnder_House/scripts.pory"
TheUnder_House_Movement_LayInBedLeft:
# 77 "data/maps/TheUnder_House/scripts.pory"
	walk_right
# 78 "data/maps/TheUnder_House/scripts.pory"
	walk_in_place_down
	step_end

# 81 "data/maps/TheUnder_House/scripts.pory"
TheUnder_House_Movement_LayInBedRight:
# 82 "data/maps/TheUnder_House/scripts.pory"
	walk_left
# 83 "data/maps/TheUnder_House/scripts.pory"
	walk_in_place_down
	step_end

TheUnder_House_Eventscript_BedLeft_Text_0:
# 17 "data/maps/TheUnder_House/scripts.pory"
	.string "Maybe another time.$"

TheUnder_House_Text_TakeARest::
# 66 "data/maps/TheUnder_House/scripts.pory"
	.string "There's a bed…\n Take a rest?$"

TheUnder_House_Movement_FallIntoSlumber::
# 71 "data/maps/TheUnder_House/scripts.pory"
	.string "Your eyes feel heavy as you\n fall into a deep slumber…$"
