# 1 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_MapScripts::
# 2 "data/maps/MauvilleCity_House1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_House1_OnTransition
# 3 "data/maps/MauvilleCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_House1/scripts.pory"

# 5 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_OnTransition:
# 6 "data/maps/MauvilleCity_House1/scripts.pory"
	call_if_set FLAG_SYS_BIKERS_ROUTE_110, MauvilleCity_EventScript_SaveBikerMusic
# 7 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 8 "data/maps/MauvilleCity_House1/scripts.pory"

# 9 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_RockSmashDude::
# 10 "data/maps/MauvilleCity_House1/scripts.pory"
	lock
# 11 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 12 "data/maps/MauvilleCity_House1/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_ROCK_SMASH, MauvilleCity_House1_EventScript_ReceivedRockSmash
# 13 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ImRockSmashDudeTakeThis, MSGBOX_DEFAULT
# 14 "data/maps/MauvilleCity_House1/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 15 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
# 16 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY
# 17 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ExplainRockSmash, MSGBOX_DEFAULT
# 18 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 19 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 20 "data/maps/MauvilleCity_House1/scripts.pory"

# 21 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_ReceivedRockSmash::
# 22 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock, MSGBOX_DEFAULT
# 23 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 24 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 25 "data/maps/MauvilleCity_House1/scripts.pory"

# 26 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ImRockSmashDudeTakeThis:
# 27 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo!\p"
# 28 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I hear people call me the ROCK SMASH\n"
# 29 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "GUY, but I find that sort of degrading.\p"
# 30 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I think I deserve a bit more respect,\n"
# 31 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "like maybe the ROCK SMASH DUDE.\p"
# 32 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo!\p"
# 33 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Anyways, your POKéMON look pretty\n"
# 34 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "strong.\p"
# 35 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I like that!\n"
# 36 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Here, take this HIDDEN MACHINE!$"
# 37 "data/maps/MauvilleCity_House1/scripts.pory"

# 38 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ExplainRockSmash:
# 39 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "That HM contains ROCK SMASH.\p"
# 40 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "If you come across large boulders\n"
# 41 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "that block your path…\p"
# 42 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Well, use that HM move and smash\n"
# 43 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "them right out of your way!\p"
# 44 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Yes, sir! Smash rocks aside, I say!\n"
# 45 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo!$"
# 46 "data/maps/MauvilleCity_House1/scripts.pory"

# 47 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock:
# 48 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Oh, yes, if you smash a rock, a POKéMON\n"
# 49 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "could come flying out of hiding.\p"
# 50 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo!$"

MauvilleCity_House1_EventScript_BulldozeTutor::
# 55 "data/maps/MauvilleCity_House1/scripts.pory"
	lock
# 56 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 57 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_EventScript_BulldozeTutor_Text_0, MSGBOX_YESNO
# 61 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmessage
# 62 "data/maps/MauvilleCity_House1/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_BulldozeDeclined
# 63 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_EventScript_BulldozeTutor_Text_1, MSGBOX_DEFAULT
# 64 "data/maps/MauvilleCity_House1/scripts.pory"
	setvar VAR_0x8005, MOVE_ROOST
# 65 "data/maps/MauvilleCity_House1/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 66 "data/maps/MauvilleCity_House1/scripts.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_BulldozeDeclined
# 67 "data/maps/MauvilleCity_House1/scripts.pory"
	goto MoveTutor_EventScript_BulldozeTaught
	end


MoveTutor_EventScript_BulldozeDeclined::
# 72 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MoveTutor_EventScript_BulldozeDeclined_Text_0, MSGBOX_AUTOCLOSE
# 75 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmessage
# 76 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end


MoveTutor_EventScript_BulldozeTaught::
# 81 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MoveTutor_EventScript_BulldozeTaught_Text_0, MSGBOX_AUTOCLOSE
# 83 "data/maps/MauvilleCity_House1/scripts.pory"
	waitmessage
# 84 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end


MauvilleCity_House1_EventScript_BulldozeTutor_Text_0:
# 57 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You can't only get rid of rocks!\n You have to flatten the land too.\p If you want, I can teach your POKéMON\n how to do so!$"

MauvilleCity_House1_EventScript_BulldozeTutor_Text_1:
# 63 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Which POKéMON do you want to\nteach BULLDOZE to?$"

MoveTutor_EventScript_BulldozeDeclined_Text_0:
# 72 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Hm. Alright.\p Come back if you want to learn\n more about land development!$"

MoveTutor_EventScript_BulldozeTaught_Text_0:
# 81 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Come back if you want to learn\n more about land development!$"
