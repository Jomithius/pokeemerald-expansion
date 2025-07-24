RatCave_Central_MapScripts::
# 2 "data/maps/RatCave_Central/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RatCave_Central_OnTransition
	.byte 0


RatCave_Central_OnTransition::
# 6 "data/maps/RatCave_Central/scripts.pory"
	setflag FLAG_SYS_DYNAMIC_LEVELS
	end


RatCave_Central_EventScript_Todd::
# 11 "data/maps/RatCave_Central/scripts.pory"
	trainerbattle_single TRAINER_TODD, RatCave_Central_EventScript_Todd_Text_0, RatCave_Central_EventScript_Todd_Text_1
# 12 "data/maps/RatCave_Central/scripts.pory"
	msgbox RatCave_Central_EventScript_Todd_Text_2, MSGBOX_NPC
	end


RatCave_Central_EventScript_Barold::
# 17 "data/maps/RatCave_Central/scripts.pory"
	trainerbattle_single TRAINER_BAROLD, RatCave_Central_EventScript_Barold_Text_0, RatCave_Central_EventScript_Barold_Text_1
# 18 "data/maps/RatCave_Central/scripts.pory"
	msgbox RatCave_Central_EventScript_Barold_Text_2, MSGBOX_NPC
	end


RatCave_Central_EventScript_Samson::
# 23 "data/maps/RatCave_Central/scripts.pory"
	trainerbattle_single TRAINER_SAMSON, RatCave_Central_EventScript_Samson_Text_0, RatCave_Central_EventScript_Samson_Text_1
# 24 "data/maps/RatCave_Central/scripts.pory"
	msgbox RatCave_Central_EventScript_Samson_Text_1, MSGBOX_NPC
	end


RatCave_Central_EventScript_Deanson::
# 29 "data/maps/RatCave_Central/scripts.pory"
	trainerbattle_single TRAINER_DEANSON, RatCave_Central_EventScript_Deanson_Text_0, RatCave_Central_EventScript_Deanson_Text_1
# 30 "data/maps/RatCave_Central/scripts.pory"
	msgbox RatCave_Central_EventScript_Deanson_Text_2, MSGBOX_NPC
	end


RatCave_Central_EventScript_Pammy::
# 36 "data/maps/RatCave_Central/scripts.pory"
	trainerbattle_single TRAINER_PAMMY, RatCave_Central_EventScript_Pammy_Text_0, RatCave_Central_EventScript_Pammy_Text_1
# 37 "data/maps/RatCave_Central/scripts.pory"
	msgbox RatCave_Central_EventScript_Pammy_Text_2, MSGBOX_NPC
	end


RatCave_Central_EventScript_Sammy::
# 42 "data/maps/RatCave_Central/scripts.pory"
	trainerbattle_single TRAINER_SAMMY, RatCave_Central_EventScript_Sammy_Text_0, RatCave_Central_EventScript_Sammy_Text_1
# 43 "data/maps/RatCave_Central/scripts.pory"
	msgbox RatCave_Central_EventScript_Sammy_Text_2, MSGBOX_NPC
	end


RatCave_Central_EventScript_Deanuel::
# 48 "data/maps/RatCave_Central/scripts.pory"
	trainerbattle_single TRAINER_DEANUEL, RatCave_Central_EventScript_Deanuel_Text_0, RatCave_Central_EventScript_Deanuel_Text_1
# 49 "data/maps/RatCave_Central/scripts.pory"
	msgbox RatCave_Central_EventScript_Deanuel_Text_2, MSGBOX_NPC
	end


RatCave_Central_EventScript_Camper::
# 56 "data/maps/RatCave_Central/scripts.pory"
	msgbox RatCave_Central_Text_Camper, MSGBOX_NPC
	end


RatCave_Central_EventScript_Todd_Text_0:
# 11 "data/maps/RatCave_Central/scripts.pory"
	.string "A new age of exploration!$"

RatCave_Central_EventScript_Todd_Text_1:
# 11 "data/maps/RatCave_Central/scripts.pory"
	.string "Losing won't bring me down!$"

RatCave_Central_EventScript_Todd_Text_2:
# 12 "data/maps/RatCave_Central/scripts.pory"
	.string "There's so much to explore!$"

RatCave_Central_EventScript_Barold_Text_0:
# 17 "data/maps/RatCave_Central/scripts.pory"
	.string "This cave system is massive!$"

RatCave_Central_EventScript_Barold_Text_1:
# 17 "data/maps/RatCave_Central/scripts.pory"
	.string "That loss was massive…$"

RatCave_Central_EventScript_Barold_Text_2:
# 18 "data/maps/RatCave_Central/scripts.pory"
	.string "… You know what else is massive?$"

RatCave_Central_EventScript_Samson_Text_0:
# 23 "data/maps/RatCave_Central/scripts.pory"
	.string "I came here all the way from PETALBURG!$"

RatCave_Central_EventScript_Samson_Text_1:
# 23 "data/maps/RatCave_Central/scripts.pory"
	.string "Maybe I should go back home…$"

RatCave_Central_EventScript_Deanson_Text_0:
# 29 "data/maps/RatCave_Central/scripts.pory"
	.string "I can't believe somebody dug this.$"

RatCave_Central_EventScript_Deanson_Text_1:
# 29 "data/maps/RatCave_Central/scripts.pory"
	.string "They dug through peoples' houses…$"

RatCave_Central_EventScript_Deanson_Text_2:
# 30 "data/maps/RatCave_Central/scripts.pory"
	.string "You had to walk through somebody's house\n to get here too, right?$"

RatCave_Central_EventScript_Pammy_Text_0:
# 36 "data/maps/RatCave_Central/scripts.pory"
	.string "This used to be my secret training\nspot!$"

RatCave_Central_EventScript_Pammy_Text_1:
# 36 "data/maps/RatCave_Central/scripts.pory"
	.string "Now there's all these people!$"

RatCave_Central_EventScript_Pammy_Text_2:
# 37 "data/maps/RatCave_Central/scripts.pory"
	.string "I need to find a new spot to train.$"

RatCave_Central_EventScript_Sammy_Text_0:
# 42 "data/maps/RatCave_Central/scripts.pory"
	.string "I used to train at BRUNO's!$"

RatCave_Central_EventScript_Sammy_Text_1:
# 42 "data/maps/RatCave_Central/scripts.pory"
	.string "Maybe I should go back to retrain.$"

RatCave_Central_EventScript_Sammy_Text_2:
# 43 "data/maps/RatCave_Central/scripts.pory"
	.string "BRUNO's crazy strong.$"

RatCave_Central_EventScript_Deanuel_Text_0:
# 48 "data/maps/RatCave_Central/scripts.pory"
	.string "I heard to the east there's a\ndojo where I can train!$"

RatCave_Central_EventScript_Deanuel_Text_1:
# 48 "data/maps/RatCave_Central/scripts.pory"
	.string "Maybe I should get stronger first.$"

RatCave_Central_EventScript_Deanuel_Text_2:
# 49 "data/maps/RatCave_Central/scripts.pory"
	.string "I'll train more here before I go\n try to join.$"

RatCave_Central_Text_Camper::
# 60 "data/maps/RatCave_Central/scripts.pory"
	.string "This cave system looks like it was\n recently excavated…\p But whoever made it did a fantastic\n job at constructing it.\p They must be a genius.$"
