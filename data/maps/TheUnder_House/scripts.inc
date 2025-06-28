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
# 16 "data/maps/TheUnder_House/scripts.pory"
	msgbox TheUnder_House_Eventscript_BedLeft_Text_0, MSGBOX_AUTOCLOSE
# 17 "data/maps/TheUnder_House/scripts.pory"
	waitmessage
# 18 "data/maps/TheUnder_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 19 "data/maps/TheUnder_House/scripts.pory"
	waitmovement 0
TheUnder_House_Eventscript_BedLeft_1:
# 21 "data/maps/TheUnder_House/scripts.pory"
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
	setflag FLAG_REMOVE_WARP_FADE
# 12 "data/maps/TheUnder_House/scripts.pory"
	call TheUnder_House_OutOfCenterPartyHeal
# 13 "data/maps/TheUnder_House/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 1
	goto TheUnder_House_Eventscript_BedLeft_1


TheUnder_House_Eventscript_BedRight::
# 26 "data/maps/TheUnder_House/scripts.pory"
	lock
# 27 "data/maps/TheUnder_House/scripts.pory"
	msgbox TheUnder_House_Text_TakeARest, MSGBOX_YESNO
# 28 "data/maps/TheUnder_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TheUnder_House_Eventscript_BedRight_2
# 38 "data/maps/TheUnder_House/scripts.pory"
	msgbox TheUnder_House_Eventscript_BedLeft_Text_0, MSGBOX_AUTOCLOSE
# 39 "data/maps/TheUnder_House/scripts.pory"
	waitmessage
# 40 "data/maps/TheUnder_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 41 "data/maps/TheUnder_House/scripts.pory"
	waitmovement 0
TheUnder_House_Eventscript_BedRight_1:
# 43 "data/maps/TheUnder_House/scripts.pory"
	release
	end

TheUnder_House_Eventscript_BedRight_2:
# 29 "data/maps/TheUnder_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheUnder_House_Movement_LayInBedRight
# 30 "data/maps/TheUnder_House/scripts.pory"
	waitmovement 0
# 31 "data/maps/TheUnder_House/scripts.pory"
	msgbox TheUnder_House_Movement_FallIntoSlumber, MSGBOX_DEFAULT
# 32 "data/maps/TheUnder_House/scripts.pory"
	waitmessage
# 33 "data/maps/TheUnder_House/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 34 "data/maps/TheUnder_House/scripts.pory"
	call TheUnder_House_OutOfCenterPartyHeal
# 35 "data/maps/TheUnder_House/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 1
	goto TheUnder_House_Eventscript_BedRight_1


TheUnder_House_OutOfCenterPartyHeal::
# 49 "data/maps/TheUnder_House/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 50 "data/maps/TheUnder_House/scripts.pory"
	delay 30
# 51 "data/maps/TheUnder_House/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 52 "data/maps/TheUnder_House/scripts.pory"
	delay 30
# 53 "data/maps/TheUnder_House/scripts.pory"
	playfanfare MUS_HEAL
# 54 "data/maps/TheUnder_House/scripts.pory"
	waitfanfare
# 55 "data/maps/TheUnder_House/scripts.pory"
	special HealPlayerParty
# 56 "data/maps/TheUnder_House/scripts.pory"
	callnative UpdateFollowingPokemon
# 57 "data/maps/TheUnder_House/scripts.pory"
	delay 60
# 58 "data/maps/TheUnder_House/scripts.pory"
	warpsilent MAP_THE_UNDER_SHADY_HOUSE, 11, 2
# 59 "data/maps/TheUnder_House/scripts.pory"
	waitstate
	return


# 75 "data/maps/TheUnder_House/scripts.pory"
TheUnder_House_Movement_LayInBedLeft:
# 76 "data/maps/TheUnder_House/scripts.pory"
	walk_right
# 77 "data/maps/TheUnder_House/scripts.pory"
	walk_in_place_down
	step_end

# 80 "data/maps/TheUnder_House/scripts.pory"
TheUnder_House_Movement_LayInBedRight:
# 81 "data/maps/TheUnder_House/scripts.pory"
	walk_left
# 82 "data/maps/TheUnder_House/scripts.pory"
	walk_in_place_down
	step_end

TheUnder_House_Eventscript_BedLeft_Text_0:
# 16 "data/maps/TheUnder_House/scripts.pory"
	.string "Maybe another time.$"

TheUnder_House_Text_TakeARest::
# 65 "data/maps/TheUnder_House/scripts.pory"
	.string "There's a bed…\n Take a rest?$"

TheUnder_House_Movement_FallIntoSlumber::
# 70 "data/maps/TheUnder_House/scripts.pory"
	.string "Your eyes feel heavy as you\n fall into a deep slumber…$"
