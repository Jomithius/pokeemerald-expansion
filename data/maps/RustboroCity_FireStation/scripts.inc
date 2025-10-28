RustboroCity_FireStation_MapScripts::
	.byte 0


RustboroCity_FireStation_Maniac1::
# 4 "data/maps/RustboroCity_FireStation/scripts.pory"
	lock
# 5 "data/maps/RustboroCity_FireStation/scripts.pory"
	faceplayer
# 6 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_Maniac1_Text_0, MSGBOX_NPC
# 11 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 1, FireStationFaceUp
# 12 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 1
# 13 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 14 "data/maps/RustboroCity_FireStation/scripts.pory"
	release
	end


RustboroCity_FireStation_Maniac2::
# 19 "data/maps/RustboroCity_FireStation/scripts.pory"
	lock
# 20 "data/maps/RustboroCity_FireStation/scripts.pory"
	faceplayer
# 21 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_Maniac2_Text_0, MSGBOX_AUTOCLOSE
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
	faceplayer
# 36 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_Man_Text_0, MSGBOX_AUTOCLOSE
# 40 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 41 "data/maps/RustboroCity_FireStation/scripts.pory"
	release
	end


RustboroCity_FireStation_FatMan::
# 46 "data/maps/RustboroCity_FireStation/scripts.pory"
	lock
# 47 "data/maps/RustboroCity_FireStation/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, RustboroCity_FireStation_FatMan_2
# 52 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_FatMan_Text_1, MSGBOX_AUTOCLOSE
RustboroCity_FireStation_FatMan_1:
# 55 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 56 "data/maps/RustboroCity_FireStation/scripts.pory"
	playse SE_PIN
# 57 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 5, FireStationSurprised
# 58 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 5
# 59 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitse
# 60 "data/maps/RustboroCity_FireStation/scripts.pory"
	faceplayer
# 61 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_FatMan_Text_2, MSGBOX_AUTOCLOSE
# 63 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 5, FireStationFaceUp
# 64 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 5
# 65 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 66 "data/maps/RustboroCity_FireStation/scripts.pory"
	release
	end

RustboroCity_FireStation_FatMan_2:
# 48 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_FatMan_Text_0, MSGBOX_AUTOCLOSE
	goto RustboroCity_FireStation_FatMan_1


RustboroCity_FireStation_Rotom::
# 71 "data/maps/RustboroCity_FireStation/scripts.pory"
	lock
# 72 "data/maps/RustboroCity_FireStation/scripts.pory"
	faceplayer
# 73 "data/maps/RustboroCity_FireStation/scripts.pory"
	playmoncry SPECIES_ROTOM, CRY_MODE_ENCOUNTER
# 74 "data/maps/RustboroCity_FireStation/scripts.pory"
	delay 20
# 75 "data/maps/RustboroCity_FireStation/scripts.pory"
	release
	end


RustboroCity_FireStation_Man2::
# 80 "data/maps/RustboroCity_FireStation/scripts.pory"
	lock
# 81 "data/maps/RustboroCity_FireStation/scripts.pory"
	faceplayer
# 82 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_Man2_Text_0, MSGBOX_AUTOCLOSE
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
	faceplayer
# 97 "data/maps/RustboroCity_FireStation/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_WATER_PULSE, RustboroCity_FireStation_Camper_2
# 103 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_Camper_Text_1, MSGBOX_DEFAULT
# 104 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 105 "data/maps/RustboroCity_FireStation/scripts.pory"
	giveitem ITEM_TM_WATER_PULSE
# 106 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 107 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_Camper_Text_0, MSGBOX_AUTOCLOSE
# 109 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 110 "data/maps/RustboroCity_FireStation/scripts.pory"
	setflag FLAG_RECEIVED_TM_WATER_PULSE
RustboroCity_FireStation_Camper_1:
# 112 "data/maps/RustboroCity_FireStation/scripts.pory"
	release
	end

RustboroCity_FireStation_Camper_2:
# 98 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_Camper_Text_0, MSGBOX_AUTOCLOSE
# 100 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
	goto RustboroCity_FireStation_Camper_1


# 116 "data/maps/RustboroCity_FireStation/scripts.pory"
FireStationSurprised:
# 117 "data/maps/RustboroCity_FireStation/scripts.pory"
	emote_exclamation_mark
	step_end

# 120 "data/maps/RustboroCity_FireStation/scripts.pory"
FireStationFaceUp:
# 121 "data/maps/RustboroCity_FireStation/scripts.pory"
	face_up
	step_end

RustboroCity_FireStation_Maniac1_Text_0:
# 6 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "I'm researching ROTOM. I've tested\n what appliances they can inhabit.\p It seems that they can change\n form just from looking at a catalog.\l Isn't that amazing?$"

RustboroCity_FireStation_Maniac2_Text_0:
# 21 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "I'm working with the LEAGUE to\n investigate strange tremors in the\l area recently.\p I don't know what's going on, but\n whatever it is, I'm sure we'll be ready.$"

RustboroCity_FireStation_Man_Text_0:
# 36 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "The GYM LEADER STEVE is also a\n veteran first responder.\p There's no one better at firefighting\n in HOENN.$"

RustboroCity_FireStation_FatMan_Text_0:
# 48 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "Ah, MISA's back in town…\n I wish she would smother me…$"

RustboroCity_FireStation_FatMan_Text_1:
# 52 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "Ah, MISA…\n I wish she would smother me…$"

RustboroCity_FireStation_FatMan_Text_2:
# 61 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "H-Hey! I'm working.\n Get out of here!$"

RustboroCity_FireStation_Man2_Text_0:
# 82 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "I recently heard that there's a mage\n who sells a special drink that can\l change your appearance overnight.\p If it's real, maybe I could get my\n hair back.$"

RustboroCity_FireStation_Camper_Text_0:
# 98 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "WATER PULSE damages the foe,\n while also having a chance to confuse!$"

RustboroCity_FireStation_Camper_Text_1:
# 103 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "In case of a fire, use this!$"
