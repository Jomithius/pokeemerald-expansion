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
# 10 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 1, FireStationFaceUp
# 11 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 1
# 12 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 13 "data/maps/RustboroCity_FireStation/scripts.pory"
	release
	end


RustboroCity_FireStation_Maniac2::
# 18 "data/maps/RustboroCity_FireStation/scripts.pory"
	lock
# 19 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 2, FireStationFacePlayer
# 20 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 2
# 21 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_Maniac2_Text_0, MSGBOX_NPC
# 26 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 2, FireStationFaceUp
# 27 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 2
# 28 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 29 "data/maps/RustboroCity_FireStation/scripts.pory"
	release
	end


RustboroCity_FireStation_Man::
# 34 "data/maps/RustboroCity_FireStation/scripts.pory"
	lock
# 35 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 4, FireStationFacePlayer
# 36 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 4
# 37 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_Man_Text_0, MSGBOX_NPC
# 40 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 41 "data/maps/RustboroCity_FireStation/scripts.pory"
	release
	end


RustboroCity_FireStation_FatMan::
# 46 "data/maps/RustboroCity_FireStation/scripts.pory"
	lock
# 47 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_FatMan_Text_0, MSGBOX_AUTOCLOSE
# 49 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 50 "data/maps/RustboroCity_FireStation/scripts.pory"
	playse SE_PIN
# 51 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 5, FireStationSurprised
# 52 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 5
# 53 "data/maps/RustboroCity_FireStation/scripts.pory"
	delay 20
# 54 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 5, FireStationFacePlayer
# 55 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 5
# 56 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_FatMan_Text_1, MSGBOX_NPC
# 58 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 5, FireStationFaceUp
# 59 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 5
# 60 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 61 "data/maps/RustboroCity_FireStation/scripts.pory"
	release
	end


RustboroCity_FireStation_Rotom::
# 66 "data/maps/RustboroCity_FireStation/scripts.pory"
	lock
# 67 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 3, FireStationFacePlayer
# 68 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 3
# 69 "data/maps/RustboroCity_FireStation/scripts.pory"
	playmoncry SPECIES_ROTOM, CRY_MODE_ENCOUNTER
# 70 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_Rotom_Text_0, MSGBOX_AUTOCLOSE
# 71 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 72 "data/maps/RustboroCity_FireStation/scripts.pory"
	release
	end


RustboroCity_FireStation_Man2::
# 77 "data/maps/RustboroCity_FireStation/scripts.pory"
	lock
# 78 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 6, FireStationFacePlayer
# 79 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 6
# 80 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_Man2_Text_0, MSGBOX_NPC
# 85 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 86 "data/maps/RustboroCity_FireStation/scripts.pory"
	release
	end


# 90 "data/maps/RustboroCity_FireStation/scripts.pory"
FireStationSurprised:
# 91 "data/maps/RustboroCity_FireStation/scripts.pory"
	emote_exclamation_mark
	step_end

# 94 "data/maps/RustboroCity_FireStation/scripts.pory"
FireStationFacePlayer:
# 95 "data/maps/RustboroCity_FireStation/scripts.pory"
	face_player
	step_end

# 98 "data/maps/RustboroCity_FireStation/scripts.pory"
FireStationFaceUp:
# 99 "data/maps/RustboroCity_FireStation/scripts.pory"
	face_up
	step_end

RustboroCity_FireStation_Maniac1_Text_0:
# 7 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "I'm researching ROTOM. We're testing\n what appliances they can inhabit.\l Imagine if it could control cars!$"

RustboroCity_FireStation_Maniac2_Text_0:
# 21 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "We're working with the LEAGUE to \n investigate strange tremors in the\l area recently.\p I don't know what's going on, but\n whatever it is, I'm sure we'll be ready.$"

RustboroCity_FireStation_Man_Text_0:
# 37 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "The Gym Leader, STEVE, is a first\n responder. There's no one better\l at firefighting in HOENN.$"

RustboroCity_FireStation_FatMan_Text_0:
# 47 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "Ah, MISA's back in town...\l I wish she would smother me...$"

RustboroCity_FireStation_FatMan_Text_1:
# 56 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "Hey! I'm working.\n Get out of here!$"

RustboroCity_FireStation_Rotom_Text_0:
# 70 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "ROTOM: zzzzz!$"

RustboroCity_FireStation_Man2_Text_0:
# 80 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "I recently heard that there's a mage\n who sells a special drink that can\l change your appearance overnight.\p If it's real, maybe I could get my\n hair back.$"
