AreaZero_MapScripts::
	.byte 0


AreaZero_EventScript_Cosmog::
# 4 "data/maps/AreaZero/scripts.pory"
	lockall
# 5 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 6 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 7 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 8 "data/maps/AreaZero/scripts.pory"
	msgbox AreaZero_Text_WouldYouLikeToReturn, MSGBOX_YESNO
# 9 "data/maps/AreaZero/scripts.pory"
	waitmessage
# 10 "data/maps/AreaZero/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AreaZero_EventScript_Cosmog_2
# 14 "data/maps/AreaZero/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
AreaZero_EventScript_Cosmog_1:
# 16 "data/maps/AreaZero/scripts.pory"
	releaseall
	end

AreaZero_EventScript_Cosmog_2:
# 11 "data/maps/AreaZero/scripts.pory"
	warpwhitefade MAP_ROUTE135_LAB, 7, 9
	goto AreaZero_EventScript_Cosmog_1


AreaZero_Text_WouldYouLikeToReturn::
# 20 "data/maps/AreaZero/scripts.pory"
	.string "Would you like to return to the LAB?$"
