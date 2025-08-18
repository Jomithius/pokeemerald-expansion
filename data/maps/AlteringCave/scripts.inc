AlteringCave_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AlteringCave_OnTransition
	.byte 0

AlteringCave_OnTransition:
	setflag FLAG_LANDMARK_ALTERING_CAVE
	end

AlteringCave_EventScript_Maniac::
	msgbox AlteringCave_Text_TimeToSketch, MSGBOX_NPC
	end
	

AlteringCave_Text_TimeToSketch::
	.string "I found it!\n"
	.string "I really found it!\p"
	.string "It took some digging, but the\n"
	.string "cave really was here…\p"
	.string "Time to get sketches of all\n"
	.string "these rare POKéMON.$"	
