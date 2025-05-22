RustboroCity_FireStation_MapScripts::
	.byte 0


RustboroCity_FireStation_Maniac1::
# 4 "data/maps/RustboroCity_FireStation/scripts.pory"
	lock
# 5 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 1, FireStationFacePlayer
# 6 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 1
# 7 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_Maniac1_Text_0, MSGBOX_NPC
# 12 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 1, FireStationFaceUp
# 13 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 1
# 14 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 15 "data/maps/RustboroCity_FireStation/scripts.pory"
	release
	end


RustboroCity_FireStation_Maniac2::
# 20 "data/maps/RustboroCity_FireStation/scripts.pory"
	lock
# 21 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 2, FireStationFacePlayer
# 22 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 2
# 23 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_Maniac2_Text_0, MSGBOX_NPC
# 28 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 2, FireStationFaceUp
# 29 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 2
# 30 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 31 "data/maps/RustboroCity_FireStation/scripts.pory"
	release
	end


RustboroCity_FireStation_Man::
# 36 "data/maps/RustboroCity_FireStation/scripts.pory"
	lock
# 37 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 4, FireStationFacePlayer
# 38 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 4
# 39 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_Man_Text_0, MSGBOX_NPC
# 42 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 43 "data/maps/RustboroCity_FireStation/scripts.pory"
	release
	end


RustboroCity_FireStation_FatMan::
# 48 "data/maps/RustboroCity_FireStation/scripts.pory"
	lock
# 49 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_FatMan_Text_0, MSGBOX_AUTOCLOSE
# 51 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 52 "data/maps/RustboroCity_FireStation/scripts.pory"
	playse SE_PIN
# 53 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 5, FireStationSurprised
# 54 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 5
# 55 "data/maps/RustboroCity_FireStation/scripts.pory"
	delay 20
# 56 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 5, FireStationFacePlayer
# 57 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 5
# 58 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_FatMan_Text_1, MSGBOX_NPC
# 60 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 5, FireStationFaceUp
# 61 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 5
# 62 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 63 "data/maps/RustboroCity_FireStation/scripts.pory"
	release
	end


RustboroCity_FireStation_Rotom::
# 68 "data/maps/RustboroCity_FireStation/scripts.pory"
	lock
# 69 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 3, FireStationFacePlayer
# 70 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 3
# 71 "data/maps/RustboroCity_FireStation/scripts.pory"
	playmoncry SPECIES_ROTOM, CRY_MODE_ENCOUNTER
# 72 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_Rotom_Text_0, MSGBOX_AUTOCLOSE
# 73 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 74 "data/maps/RustboroCity_FireStation/scripts.pory"
	release
	end


RustboroCity_FireStation_Man2::
# 79 "data/maps/RustboroCity_FireStation/scripts.pory"
	lock
# 80 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 6, FireStationFacePlayer
# 81 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 6
# 82 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_Man2_Text_0, MSGBOX_NPC
# 87 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 88 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 6, FireStationFaceUp
# 89 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 6
# 90 "data/maps/RustboroCity_FireStation/scripts.pory"
	release
	end


RustboroCity_FireStation_Camper::
# 95 "data/maps/RustboroCity_FireStation/scripts.pory"
	lock
# 96 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 7, FireStationFacePlayer
# 97 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 7
# 98 "data/maps/RustboroCity_FireStation/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_WATER_PULSE, RustboroCity_FireStation_Camper_1
# 106 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_Camper_Text_1, MSGBOX_NPC
# 107 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 108 "data/maps/RustboroCity_FireStation/scripts.pory"
	giveitem ITEM_TM_WATER_PULSE
# 109 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 110 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_Camper_Text_0
# 112 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 113 "data/maps/RustboroCity_FireStation/scripts.pory"
	setflag FLAG_RECEIVED_TM_WATER_PULSE
# 114 "data/maps/RustboroCity_FireStation/scripts.pory"
	release
	end

RustboroCity_FireStation_Camper_1:
# 99 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_Camper_Text_0
# 101 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 102 "data/maps/RustboroCity_FireStation/scripts.pory"
	release
	end


# 119 "data/maps/RustboroCity_FireStation/scripts.pory"
FireStationSurprised:
# 120 "data/maps/RustboroCity_FireStation/scripts.pory"
	emote_exclamation_mark
	step_end

# 123 "data/maps/RustboroCity_FireStation/scripts.pory"
FireStationFacePlayer:
# 124 "data/maps/RustboroCity_FireStation/scripts.pory"
	face_player
	step_end

# 127 "data/maps/RustboroCity_FireStation/scripts.pory"
FireStationFaceUp:
# 128 "data/maps/RustboroCity_FireStation/scripts.pory"
	face_up
	step_end

RustboroCity_FireStation_Maniac1_Text_0:
# 7 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "I'm researching ROTOM. We're testing\n what appliances they can inhabit.\p We've discovered that they can change\n form just from looking at a catalog.\l Isn't that amazing?$"

RustboroCity_FireStation_Maniac2_Text_0:
# 23 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "We're working with the LEAGUE to \n investigate strange tremors in the\l area recently.\p I don't know what's going on, but\n whatever it is, I'm sure we'll be ready.$"

RustboroCity_FireStation_Man_Text_0:
# 39 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "The Gym Leader, STEVE, is a first\n responder. There's no one better\l at firefighting in HOENN.$"

RustboroCity_FireStation_FatMan_Text_0:
# 49 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "Ah, MISA's back in town...\l I wish she would smother me...$"

RustboroCity_FireStation_FatMan_Text_1:
# 58 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "Hey! I'm working.\n Get out of here!$"

RustboroCity_FireStation_Rotom_Text_0:
# 72 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "ROTOM: zzzzz!$"

RustboroCity_FireStation_Man2_Text_0:
# 82 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "I recently heard that there's a mage\n who sells a special drink that can\l change your appearance overnight.\p If it's real, maybe I could get my\n hair back.$"

RustboroCity_FireStation_Camper_Text_0:
# 99 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "WATER PULSE not only damages the foe.\n It also has a chance to confuse it!$"

RustboroCity_FireStation_Camper_Text_1:
# 106 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "In case of a fire, use this!$"
