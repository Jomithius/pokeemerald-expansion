Baldesia_MainHouse_MapScripts::
# 2 "data/maps/Baldesia_MainHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Baldesia_MainHouse_OnTransition
# 3 "data/maps/Baldesia_MainHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Baldesia_MainHouse_OnTransition::
# 7 "data/maps/Baldesia_MainHouse/scripts.pory"
	setrespawn HEAL_LOCATION_BALDESIA
	end


Baldesia_MainHouse_EventScript_KimonoGirl::
# 12 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 13 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 14 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox gText_WouldYouLikeToRestYourPkmn, MSGBOX_YESNO
# 15 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Baldesia_MainHouse_EventScript_KimonoGirl_2
# 21 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox gText_WeHopeToSeeYouAgain, MSGBOX_DEFAULT
Baldesia_MainHouse_EventScript_KimonoGirl_1:
# 23 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 24 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 25 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 26 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end

Baldesia_MainHouse_EventScript_KimonoGirl_2:
# 16 "data/maps/Baldesia_MainHouse/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 17 "data/maps/Baldesia_MainHouse/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 18 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_ThankYouForWaiting, MSGBOX_DEFAULT
	goto Baldesia_MainHouse_EventScript_KimonoGirl_1


Baldesia_MainHouse_Text_ThankYouForWaiting::
# 30 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Thank you for waiting.\p We've restored your POKéMON\n to full health.\p We hope to see you again!$"
