# 1 "data/maps/LilycoveCity/scripts.pory"
.set LOCALID_WOMAN_1, 19
# 2 "data/maps/LilycoveCity/scripts.pory"
.set LOCALID_MAN_1, 20
# 3 "data/maps/LilycoveCity/scripts.pory"

# 4 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_MapScripts::
# 5 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_OnTransition
# 6 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_OnLoad
# 7 "data/maps/LilycoveCity/scripts.pory"
	.byte 0
# 8 "data/maps/LilycoveCity/scripts.pory"

# 9 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnTransition:
# 10 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_SYS_DYNAMIC_LEVELS
# 11 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_VISITED_LILYCOVE_CITY
# 12 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 13 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
# 14 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 15 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 16 "data/maps/LilycoveCity/scripts.pory"
	end
# 17 "data/maps/LilycoveCity/scripts.pory"

# 18 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnLoad:
# 19 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_SetWailmerMetatiles
# 20 "data/maps/LilycoveCity/scripts.pory"
	end
# 21 "data/maps/LilycoveCity/scripts.pory"

# 22 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SetWailmerMetatiles::
# 23 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 12, METATILE_Lilycove_Wailmer0, TRUE
# 24 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 12, METATILE_Lilycove_Wailmer1, TRUE
# 25 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 13, METATILE_Lilycove_Wailmer2, TRUE
# 26 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 13, METATILE_Lilycove_Wailmer3, TRUE
# 27 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 14, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 28 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 14, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 29 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 15, METATILE_Lilycove_Wailmer2, TRUE
# 30 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 15, METATILE_Lilycove_Wailmer3, TRUE
# 31 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 16, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 32 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 16, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 33 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 17, METATILE_Lilycove_Wailmer2, TRUE
# 34 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 17, METATILE_Lilycove_Wailmer3, TRUE
# 35 "data/maps/LilycoveCity/scripts.pory"
	return
# 36 "data/maps/LilycoveCity/scripts.pory"

# 37 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BerryGentleman::
# 38 "data/maps/LilycoveCity/scripts.pory"
	lock
# 39 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 40 "data/maps/LilycoveCity/scripts.pory"
	dotimebasedevents
# 41 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, LilycoveCity_EventScript_ReceivedBerry
# 42 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BerrySuitsYou, MSGBOX_DEFAULT
# 43 "data/maps/LilycoveCity/scripts.pory"
	random 10
# 44 "data/maps/LilycoveCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 45 "data/maps/LilycoveCity/scripts.pory"
	giveitem VAR_RESULT
# 46 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 47 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
# 48 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BecauseYoureTrainer, MSGBOX_DEFAULT
# 49 "data/maps/LilycoveCity/scripts.pory"
	release
# 50 "data/maps/LilycoveCity/scripts.pory"
	end
# 51 "data/maps/LilycoveCity/scripts.pory"

# 52 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ReceivedBerry::
# 53 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_PokeblocksSuitPokemon, MSGBOX_DEFAULT
# 54 "data/maps/LilycoveCity/scripts.pory"
	release
# 55 "data/maps/LilycoveCity/scripts.pory"
	end
# 56 "data/maps/LilycoveCity/scripts.pory"

# 57 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man3::
# 58 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallInTown, MSGBOX_NPC
# 59 "data/maps/LilycoveCity/scripts.pory"
	end
# 60 "data/maps/LilycoveCity/scripts.pory"

# 61 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Girl::
# 62 "data/maps/LilycoveCity/scripts.pory"
	lock
# 63 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 64 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_GirlAquaGone
# 65 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_StrangeCaveInCove, MSGBOX_DEFAULT
# 66 "data/maps/LilycoveCity/scripts.pory"
	release
# 67 "data/maps/LilycoveCity/scripts.pory"
	end
# 68 "data/maps/LilycoveCity/scripts.pory"

# 69 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_GirlAquaGone::
# 70 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GoingToMoveDeleterForHMs, MSGBOX_DEFAULT
# 71 "data/maps/LilycoveCity/scripts.pory"
	release
# 72 "data/maps/LilycoveCity/scripts.pory"
	end
# 73 "data/maps/LilycoveCity/scripts.pory"

# 74 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RichBoy::
# 75 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImFromKanto, MSGBOX_NPC
# 76 "data/maps/LilycoveCity/scripts.pory"
	end
# 77 "data/maps/LilycoveCity/scripts.pory"

# 78 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2::
# 79 "data/maps/LilycoveCity/scripts.pory"
	lock
# 80 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 81 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Sailor2AquaGone
# 82 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaBeenTrainingWailmer, MSGBOX_DEFAULT
# 83 "data/maps/LilycoveCity/scripts.pory"
	release
# 84 "data/maps/LilycoveCity/scripts.pory"
	end
# 85 "data/maps/LilycoveCity/scripts.pory"

# 86 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2AquaGone::
# 87 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeonePuntedTeamAquaOut, MSGBOX_DEFAULT
# 88 "data/maps/LilycoveCity/scripts.pory"
	release
# 89 "data/maps/LilycoveCity/scripts.pory"
	end
# 90 "data/maps/LilycoveCity/scripts.pory"

# 91 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2::
# 92 "data/maps/LilycoveCity/scripts.pory"
	lock
# 93 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 94 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Woman2AquaGone
# 95 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeoneStoleMyPokemon, MSGBOX_DEFAULT
# 96 "data/maps/LilycoveCity/scripts.pory"
	release
# 97 "data/maps/LilycoveCity/scripts.pory"
	end
# 98 "data/maps/LilycoveCity/scripts.pory"

# 99 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2AquaGone::
# 100 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MissingPokemonCameBack, MSGBOX_DEFAULT
# 101 "data/maps/LilycoveCity/scripts.pory"
	release
# 102 "data/maps/LilycoveCity/scripts.pory"
	end
# 103 "data/maps/LilycoveCity/scripts.pory"

# 104 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man2::
# 105 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImArtDealer, MSGBOX_NPC
# 106 "data/maps/LilycoveCity/scripts.pory"
	end
# 107 "data/maps/LilycoveCity/scripts.pory"

# 108 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM1::
# 109 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SeaRemainsForeverYoung, MSGBOX_SIGN
# 110 "data/maps/LilycoveCity/scripts.pory"
	end
# 111 "data/maps/LilycoveCity/scripts.pory"

# 112 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertF::
# 113 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SixtyYearsAgoHusbandProposed, MSGBOX_SIGN
# 114 "data/maps/LilycoveCity/scripts.pory"
	end
# 115 "data/maps/LilycoveCity/scripts.pory"

# 116 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2::
# 117 "data/maps/LilycoveCity/scripts.pory"
	lock
# 118 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 119 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_ExpertM2AquaGone
# 120 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaRenovatedCavern, MSGBOX_DEFAULT
# 121 "data/maps/LilycoveCity/scripts.pory"
	release
# 122 "data/maps/LilycoveCity/scripts.pory"
	end
# 123 "data/maps/LilycoveCity/scripts.pory"

# 124 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2AquaGone::
# 125 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaLotGoneForGood, MSGBOX_DEFAULT
# 126 "data/maps/LilycoveCity/scripts.pory"
	release
# 127 "data/maps/LilycoveCity/scripts.pory"
	end
# 128 "data/maps/LilycoveCity/scripts.pory"

# 129 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor1::
# 130 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HeardTowerCalledSkyPillar, MSGBOX_NPC
# 131 "data/maps/LilycoveCity/scripts.pory"
	end
# 132 "data/maps/LilycoveCity/scripts.pory"

# 133 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_FatMan::
# 134 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SawTallTowerOnRoute131, MSGBOX_NPC
# 135 "data/maps/LilycoveCity/scripts.pory"
	end
# 136 "data/maps/LilycoveCity/scripts.pory"

# 137 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man1::
# 138 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 139 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_JustArrivedAndSawRarePokemon, MSGBOX_NPC
# 140 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_MAN_1, Common_Movement_FaceOriginalDirection
# 141 "data/maps/LilycoveCity/scripts.pory"
	end
# 142 "data/maps/LilycoveCity/scripts.pory"

# 143 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman1::
# 144 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 145 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HoneymoonVowToSeeRarePokemon, MSGBOX_NPC
# 146 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_WOMAN_1, Common_Movement_FaceOriginalDirection
# 147 "data/maps/LilycoveCity/scripts.pory"
	end
# 148 "data/maps/LilycoveCity/scripts.pory"

# 149 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CitySign::
# 150 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_CitySign, MSGBOX_SIGN
# 151 "data/maps/LilycoveCity/scripts.pory"
	end
# 152 "data/maps/LilycoveCity/scripts.pory"

# 153 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ContestHallSign::
# 154 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallSign, MSGBOX_SIGN
# 155 "data/maps/LilycoveCity/scripts.pory"
	end
# 156 "data/maps/LilycoveCity/scripts.pory"

# 157 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MotelSign::
# 158 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MotelSign, MSGBOX_SIGN
# 159 "data/maps/LilycoveCity/scripts.pory"
	end
# 160 "data/maps/LilycoveCity/scripts.pory"

# 161 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSign::
# 162 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 163 "data/maps/LilycoveCity/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 164 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_0x8004
# 165 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_MuseumSignNoPaintings
# 166 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSignPlayersExhibit, MSGBOX_DEFAULT
# 167 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 168 "data/maps/LilycoveCity/scripts.pory"
	end
# 169 "data/maps/LilycoveCity/scripts.pory"

# 170 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSignNoPaintings::
# 171 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSign, MSGBOX_DEFAULT
# 172 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 173 "data/maps/LilycoveCity/scripts.pory"
	end
# 174 "data/maps/LilycoveCity/scripts.pory"

# 175 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSign::
# 176 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 177 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_HarborSignFerryReady
# 178 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSignUnderConstruction, MSGBOX_DEFAULT
# 179 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 180 "data/maps/LilycoveCity/scripts.pory"
	end
# 181 "data/maps/LilycoveCity/scripts.pory"

# 182 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSignFerryReady::
# 183 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSign, MSGBOX_DEFAULT
# 184 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 185 "data/maps/LilycoveCity/scripts.pory"
	end
# 186 "data/maps/LilycoveCity/scripts.pory"

# 187 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_TrainerFanClubSign::
# 188 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TrainerFanClubSign, MSGBOX_SIGN
# 189 "data/maps/LilycoveCity/scripts.pory"
	end
# 190 "data/maps/LilycoveCity/scripts.pory"

# 191 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DepartmentStoreSign::
# 192 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DepartmentStoreSign, MSGBOX_SIGN
# 193 "data/maps/LilycoveCity/scripts.pory"
	end
# 194 "data/maps/LilycoveCity/scripts.pory"

# 195 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MoveDeletersHouseSign::
# 196 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MoveDeletersHouseSign, MSGBOX_SIGN
# 197 "data/maps/LilycoveCity/scripts.pory"
	end
# 198 "data/maps/LilycoveCity/scripts.pory"

# 199 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_WailmerTrainerGrunt::
# 200 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 201 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_MET_WAILMER_TRAINER, LilycoveCity_EventScript_MetWailmerTrainer
# 202 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 203 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 204 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 205 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GetLostMessingUpTraining, MSGBOX_DEFAULT
# 206 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 207 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 208 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_WAILMER_TRAINER
# 209 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 210 "data/maps/LilycoveCity/scripts.pory"
	end
# 211 "data/maps/LilycoveCity/scripts.pory"

# 212 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MetWailmerTrainer::
# 213 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 214 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 215 "data/maps/LilycoveCity/scripts.pory"
	end
# 216 "data/maps/LilycoveCity/scripts.pory"

# 217 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt1::
# 218 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MovedLootIntoHideoutToday, MSGBOX_NPC
# 219 "data/maps/LilycoveCity/scripts.pory"
	end
# 220 "data/maps/LilycoveCity/scripts.pory"

# 221 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt2::
# 222 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ChanceToDoBigThings, MSGBOX_NPC
# 223 "data/maps/LilycoveCity/scripts.pory"
	end
# 224 "data/maps/LilycoveCity/scripts.pory"

# 225 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt3::
# 226 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DontGoNearCaveInCove, MSGBOX_NPC
# 227 "data/maps/LilycoveCity/scripts.pory"
	end
# 228 "data/maps/LilycoveCity/scripts.pory"

# 229 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt4::
# 230 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_IfWorldBecomesOurs, MSGBOX_NPC
# 231 "data/maps/LilycoveCity/scripts.pory"
	end
# 232 "data/maps/LilycoveCity/scripts.pory"

# 233 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Rival::
# 234 "data/maps/LilycoveCity/scripts.pory"
	lock
# 235 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 236 "data/maps/LilycoveCity/scripts.pory"
	checkplayergender
# 237 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LilycoveCity_EventScript_May
# 238 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LilycoveCity_EventScript_Brendan
# 239 "data/maps/LilycoveCity/scripts.pory"
	end
# 240 "data/maps/LilycoveCity/scripts.pory"

# 241 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_May::
# 242 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 243 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattleAgain
# 244 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattle
# 245 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineMayBattle
# 246 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayWontBeBeaten, MSGBOX_DEFAULT
# 247 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_BattleMayTorchic
# 248 "data/maps/LilycoveCity/scripts.pory"
	end
# 249 "data/maps/LilycoveCity/scripts.pory"

# 250 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattleAgain::
# 251 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayBattleMe, MSGBOX_YESNO
# 252 "data/maps/LilycoveCity/scripts.pory"
	return
# 253 "data/maps/LilycoveCity/scripts.pory"

# 254 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattle::
# 255 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayShoppingLetsBattle, MSGBOX_YESNO
# 256 "data/maps/LilycoveCity/scripts.pory"
	return
# 257 "data/maps/LilycoveCity/scripts.pory"

# 258 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineMayBattle::
# 259 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 260 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayNotRaisingPokemon, MSGBOX_DEFAULT
# 261 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 262 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 263 "data/maps/LilycoveCity/scripts.pory"
	release
# 264 "data/maps/LilycoveCity/scripts.pory"
	end
# 265 "data/maps/LilycoveCity/scripts.pory"

# 266 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Brendan::
# 267 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 268 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattleAgain
# 269 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattle
# 270 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineBrendanBattle
# 271 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanWontBeBeaten, MSGBOX_DEFAULT
# 272 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_BattleBrendanTreecko
# 273 "data/maps/LilycoveCity/scripts.pory"
	end
# 274 "data/maps/LilycoveCity/scripts.pory"

# 275 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattleAgain::
# 276 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanBattleMe, MSGBOX_YESNO
# 277 "data/maps/LilycoveCity/scripts.pory"
	return
# 278 "data/maps/LilycoveCity/scripts.pory"

# 279 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattle::
# 280 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanShoppingLetsBattle, MSGBOX_YESNO
# 281 "data/maps/LilycoveCity/scripts.pory"
	return
# 282 "data/maps/LilycoveCity/scripts.pory"

# 283 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineBrendanBattle::
# 284 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 285 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 286 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 287 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 288 "data/maps/LilycoveCity/scripts.pory"
	release
# 289 "data/maps/LilycoveCity/scripts.pory"
	end
# 290 "data/maps/LilycoveCity/scripts.pory"

# 291 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTorchic::
# 292 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TORCHIC, LilycoveCity_Text_MayDefeat
# 293 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 294 "data/maps/LilycoveCity/scripts.pory"
	end
# 295 "data/maps/LilycoveCity/scripts.pory"

# 296 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTreecko::
# 297 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TREECKO, LilycoveCity_Text_BrendanDefeat
# 298 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 299 "data/maps/LilycoveCity/scripts.pory"
	end
# 300 "data/maps/LilycoveCity/scripts.pory"

# 301 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedMay::
# 302 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayGoingBackToLittleroot, MSGBOX_DEFAULT
# 303 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 304 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 305 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_MayCollectBadges
# 306 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_MayPokemonLeague
# 307 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 308 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
# 309 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 310 "data/maps/LilycoveCity/scripts.pory"
	end
# 311 "data/maps/LilycoveCity/scripts.pory"

# 312 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CheckFinalBadge::
# 313 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, LilycoveCity_EventScript_HasFinalBadge
# 314 "data/maps/LilycoveCity/scripts.pory"
	return
# 315 "data/maps/LilycoveCity/scripts.pory"

# 316 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HasFinalBadge::
# 317 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, TRUE
# 318 "data/maps/LilycoveCity/scripts.pory"
	return
# 319 "data/maps/LilycoveCity/scripts.pory"

# 320 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayCollectBadges::
# 321 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToCollectBadges, MSGBOX_DEFAULT
# 322 "data/maps/LilycoveCity/scripts.pory"
	return
# 323 "data/maps/LilycoveCity/scripts.pory"

# 324 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayPokemonLeague::
# 325 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_MayBattleFrontier
# 326 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 327 "data/maps/LilycoveCity/scripts.pory"
	return
# 328 "data/maps/LilycoveCity/scripts.pory"

# 329 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayBattleFrontier::
# 330 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 331 "data/maps/LilycoveCity/scripts.pory"
	return
# 332 "data/maps/LilycoveCity/scripts.pory"

# 333 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedBrendan::
# 334 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanGoingBackToLittleroot, MSGBOX_DEFAULT
# 335 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 336 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 337 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_BrendanCollectBadges
# 338 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_BrendanPokemonLeague
# 339 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 340 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
# 341 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 342 "data/maps/LilycoveCity/scripts.pory"
	end
# 343 "data/maps/LilycoveCity/scripts.pory"

# 344 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanCollectBadges::
# 345 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToCollectBadges, MSGBOX_DEFAULT
# 346 "data/maps/LilycoveCity/scripts.pory"
	return
# 347 "data/maps/LilycoveCity/scripts.pory"

# 348 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanPokemonLeague::
# 349 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_BrendanBattleFrontier
# 350 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 351 "data/maps/LilycoveCity/scripts.pory"
	return
# 352 "data/maps/LilycoveCity/scripts.pory"

# 353 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanBattleFrontier::
# 354 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 355 "data/maps/LilycoveCity/scripts.pory"
	return
# 356 "data/maps/LilycoveCity/scripts.pory"

# 357 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RivalFlyAway::
# 358 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 359 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 360 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 361 "data/maps/LilycoveCity/scripts.pory"
	delay 50
# 362 "data/maps/LilycoveCity/scripts.pory"
	setfieldeffectargument 0, 1
# 363 "data/maps/LilycoveCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 364 "data/maps/LilycoveCity/scripts.pory"
	delay 15
# 365 "data/maps/LilycoveCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 366 "data/maps/LilycoveCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 367 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 368 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 369 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 370 "data/maps/LilycoveCity/scripts.pory"
	release
# 371 "data/maps/LilycoveCity/scripts.pory"
	end
# 372 "data/maps/LilycoveCity/scripts.pory"

# 373 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SchoolKidM::
# 374 "data/maps/LilycoveCity/scripts.pory"
	lock
# 375 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 376 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DoYouKnowAboutBerryBlender, MSGBOX_YESNO
# 377 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, LilycoveCity_EventScript_KnowAboutBerryBlender
# 378 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DontKnowAboutBerryBlender
# 379 "data/maps/LilycoveCity/scripts.pory"
	release
# 380 "data/maps/LilycoveCity/scripts.pory"
	end
# 381 "data/maps/LilycoveCity/scripts.pory"

# 382 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_KnowAboutBerryBlender::
# 383 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_FasterSpinBetterPokeblocks, MSGBOX_DEFAULT
# 384 "data/maps/LilycoveCity/scripts.pory"
	return
# 385 "data/maps/LilycoveCity/scripts.pory"

# 386 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DontKnowAboutBerryBlender::
# 387 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ExplainBerryBlender, MSGBOX_DEFAULT
# 388 "data/maps/LilycoveCity/scripts.pory"
	return
# 389 "data/maps/LilycoveCity/scripts.pory"

# 390 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayShoppingLetsBattle:
# 391 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Oh, hey?\n"
# 392 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, are you shopping, too?\p"
# 393 "data/maps/LilycoveCity/scripts.pory"
	.string "I bought a whole bunch of DOLLS and\n"
# 394 "data/maps/LilycoveCity/scripts.pory"
	.string "POSTERS.\p"
# 395 "data/maps/LilycoveCity/scripts.pory"
	.string "Of course, I've also caught a lot of\n"
# 396 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON, and I'm raising them\l"
# 397 "data/maps/LilycoveCity/scripts.pory"
	.string "properly, too.\p"
# 398 "data/maps/LilycoveCity/scripts.pory"
	.string "Actually, I'm more worried if you're\n"
# 399 "data/maps/LilycoveCity/scripts.pory"
	.string "raising POKéMON properly, {PLAYER}{KUN}.\p"
# 400 "data/maps/LilycoveCity/scripts.pory"
	.string "I'll battle with you, so you can show\n"
# 401 "data/maps/LilycoveCity/scripts.pory"
	.string "me your POKéMON, {PLAYER}{KUN}.$"
# 402 "data/maps/LilycoveCity/scripts.pory"

# 403 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayNotRaisingPokemon:
# 404 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Oh, why? {PLAYER}{KUN}, haven't you\n"
# 405 "data/maps/LilycoveCity/scripts.pory"
	.string "been raising your POKéMON?\p"
# 406 "data/maps/LilycoveCity/scripts.pory"
	.string "That's not a very good showing as a\n"
# 407 "data/maps/LilycoveCity/scripts.pory"
	.string "TRAINER…$"
# 408 "data/maps/LilycoveCity/scripts.pory"

# 409 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayBattleMe:
# 410 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Come on, battle with me, so I can\n"
# 411 "data/maps/LilycoveCity/scripts.pory"
	.string "check out your POKéMON!$"
# 412 "data/maps/LilycoveCity/scripts.pory"

# 413 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayWontBeBeaten:
# 414 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: The POKéMON I raised won't be\n"
# 415 "data/maps/LilycoveCity/scripts.pory"
	.string "beaten by your POKéMON, {PLAYER}{KUN}!$"
# 416 "data/maps/LilycoveCity/scripts.pory"

# 417 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayDefeat:
# 418 "data/maps/LilycoveCity/scripts.pory"
	.string "… … … … … … … …\p"
# 419 "data/maps/LilycoveCity/scripts.pory"
	.string "I remember the battle I had with you,\n"
# 420 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, on ROUTE 103.\p"
# 421 "data/maps/LilycoveCity/scripts.pory"
	.string "That battle helped you become this\n"
# 422 "data/maps/LilycoveCity/scripts.pory"
	.string "strong, {PLAYER}{KUN}, didn't it?$"
# 423 "data/maps/LilycoveCity/scripts.pory"

# 424 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayGoingBackToLittleroot:
# 425 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: I'm thinking of going back to\n"
# 426 "data/maps/LilycoveCity/scripts.pory"
	.string "LITTLEROOT soon.\p"
# 427 "data/maps/LilycoveCity/scripts.pory"
	.string "I've caught a decent group of POKéMON,\n"
# 428 "data/maps/LilycoveCity/scripts.pory"
	.string "and my POKéDEX is coming along, so\l"
# 429 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going home to show my dad.$"
# 430 "data/maps/LilycoveCity/scripts.pory"

# 431 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToCollectBadges:
# 432 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 433 "data/maps/LilycoveCity/scripts.pory"
	.string "Collect all the GYM BADGES and take\n"
# 434 "data/maps/LilycoveCity/scripts.pory"
	.string "the POKéMON LEAGUE challenge?\p"
# 435 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, while you're collecting BADGES,\n"
# 436 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'm going to work on my\l"
# 437 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX. I'll complete it before you!\p"
# 438 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 439 "data/maps/LilycoveCity/scripts.pory"

# 440 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToPokemonLeague:
# 441 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 442 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the POKéMON LEAGUE\n"
# 443 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 444 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 445 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 446 "data/maps/LilycoveCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 447 "data/maps/LilycoveCity/scripts.pory"
	.string "but I'll finish my POKéDEX before you!\p"
# 448 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 449 "data/maps/LilycoveCity/scripts.pory"

# 450 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToBattleFrontier:
# 451 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 452 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the BATTLE FRONTIER\n"
# 453 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 454 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 455 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 456 "data/maps/LilycoveCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 457 "data/maps/LilycoveCity/scripts.pory"
	.string "but I'll finish my POKéDEX before you!\p"
# 458 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 459 "data/maps/LilycoveCity/scripts.pory"

# 460 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanShoppingLetsBattle:
# 461 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Oh, hey, it's {PLAYER}.\p"
# 462 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm running an errand for my dad.\n"
# 463 "data/maps/LilycoveCity/scripts.pory"
	.string "No, I'm not buying any DOLLS.\p"
# 464 "data/maps/LilycoveCity/scripts.pory"
	.string "Anyways, it's been a while.\p"
# 465 "data/maps/LilycoveCity/scripts.pory"
	.string "Want to have a battle to see who's been\n"
# 466 "data/maps/LilycoveCity/scripts.pory"
	.string "raising POKéMON better?$"
# 467 "data/maps/LilycoveCity/scripts.pory"

# 468 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanNoConfidence:
# 469 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Oh, what's the matter?\n"
# 470 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't have the confidence?$"
# 471 "data/maps/LilycoveCity/scripts.pory"

# 472 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanBattleMe:
# 473 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Want to battle to see who's\n"
# 474 "data/maps/LilycoveCity/scripts.pory"
	.string "been raising POKéMON better?$"
# 475 "data/maps/LilycoveCity/scripts.pory"

# 476 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanWontBeBeaten:
# 477 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Aww, but you know I'm not\n"
# 478 "data/maps/LilycoveCity/scripts.pory"
	.string "going to lose to no {PLAYER}.$"
# 479 "data/maps/LilycoveCity/scripts.pory"

# 480 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanDefeat:
# 481 "data/maps/LilycoveCity/scripts.pory"
	.string "Humph…\n"
# 482 "data/maps/LilycoveCity/scripts.pory"
	.string "You've done a lot of raising.\p"
# 483 "data/maps/LilycoveCity/scripts.pory"
	.string "That stings a bit--I had a head start\n"
# 484 "data/maps/LilycoveCity/scripts.pory"
	.string "on you as a TRAINER…$"
# 485 "data/maps/LilycoveCity/scripts.pory"

# 486 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanGoingBackToLittleroot:
# 487 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: I…\n"
# 488 "data/maps/LilycoveCity/scripts.pory"
	.string "I plan on going home to LITTLEROOT.\p"
# 489 "data/maps/LilycoveCity/scripts.pory"
	.string "You know I'm helping out my dad on his\n"
# 490 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX. It's coming together pretty\l"
# 491 "data/maps/LilycoveCity/scripts.pory"
	.string "decently, so I should go show him.$"
# 492 "data/maps/LilycoveCity/scripts.pory"

# 493 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToCollectBadges:
# 494 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 495 "data/maps/LilycoveCity/scripts.pory"
	.string "Collect all the GYM BADGES and take\n"
# 496 "data/maps/LilycoveCity/scripts.pory"
	.string "the POKéMON LEAGUE challenge?\p"
# 497 "data/maps/LilycoveCity/scripts.pory"
	.string "Maybe I'll do that, too…\p"
# 498 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 499 "data/maps/LilycoveCity/scripts.pory"

# 500 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToPokemonLeague:
# 501 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 502 "data/maps/LilycoveCity/scripts.pory"
	.string "Since you're that strong, are you\n"
# 503 "data/maps/LilycoveCity/scripts.pory"
	.string "taking the POKéMON LEAGUE challenge?\p"
# 504 "data/maps/LilycoveCity/scripts.pory"
	.string "Heh, even me--if I trained my POKéMON\n"
# 505 "data/maps/LilycoveCity/scripts.pory"
	.string "a bit more, I should be stronger than\l"
# 506 "data/maps/LilycoveCity/scripts.pory"
	.string "you, {PLAYER}.\p"
# 507 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 508 "data/maps/LilycoveCity/scripts.pory"

# 509 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToBattleFrontier:
# 510 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 511 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the BATTLE FRONTIER\n"
# 512 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 513 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 514 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 515 "data/maps/LilycoveCity/scripts.pory"
	.string "Since you're that strong, you should\n"
# 516 "data/maps/LilycoveCity/scripts.pory"
	.string "consider the BATTLE FRONTIER.\p"
# 517 "data/maps/LilycoveCity/scripts.pory"
	.string "Heh, if I train my POKéMON a bit more,\n"
# 518 "data/maps/LilycoveCity/scripts.pory"
	.string "I'll get stronger than you, {PLAYER}.\p"
# 519 "data/maps/LilycoveCity/scripts.pory"
	.string "Maybe I should go to the BATTLE\n"
# 520 "data/maps/LilycoveCity/scripts.pory"
	.string "FRONTIER.\p"
# 521 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 522 "data/maps/LilycoveCity/scripts.pory"

# 523 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MovedLootIntoHideoutToday:
# 524 "data/maps/LilycoveCity/scripts.pory"
	.string "Fufufu…\p"
# 525 "data/maps/LilycoveCity/scripts.pory"
	.string "We moved more loot into our secret\n"
# 526 "data/maps/LilycoveCity/scripts.pory"
	.string "HIDEOUT today…\p"
# 527 "data/maps/LilycoveCity/scripts.pory"
	.string "Wh-who are you?!\n"
# 528 "data/maps/LilycoveCity/scripts.pory"
	.string "I was just talking to myself!$"
# 529 "data/maps/LilycoveCity/scripts.pory"

# 530 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ChanceToDoBigThings:
# 531 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm just a GRUNT, so I don't know what\n"
# 532 "data/maps/LilycoveCity/scripts.pory"
	.string "the BOSS is thinking…\p"
# 533 "data/maps/LilycoveCity/scripts.pory"
	.string "But being on TEAM AQUA, I know I'll get\n"
# 534 "data/maps/LilycoveCity/scripts.pory"
	.string "the chance to do big things!\p"
# 535 "data/maps/LilycoveCity/scripts.pory"
	.string "Wh-who are you?!\n"
# 536 "data/maps/LilycoveCity/scripts.pory"
	.string "I was just talking to myself!$"
# 537 "data/maps/LilycoveCity/scripts.pory"

# 538 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DontGoNearCaveInCove:
# 539 "data/maps/LilycoveCity/scripts.pory"
	.string "Hey, you!\p"
# 540 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't go near the cave in the cove!\p"
# 541 "data/maps/LilycoveCity/scripts.pory"
	.string "Why? You don't need a reason why!\n"
# 542 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an adult, so you just listen to me!$"
# 543 "data/maps/LilycoveCity/scripts.pory"

# 544 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_IfWorldBecomesOurs:
# 545 "data/maps/LilycoveCity/scripts.pory"
	.string "If this whole wide world becomes ours,\n"
# 546 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA's, it will be a happier\l"
# 547 "data/maps/LilycoveCity/scripts.pory"
	.string "place for POKéMON, too.$"
# 548 "data/maps/LilycoveCity/scripts.pory"

# 549 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_WailmerLeapOutOfWater:
# 550 "data/maps/LilycoveCity/scripts.pory"
	.string "There! WAILMER!\n"
# 551 "data/maps/LilycoveCity/scripts.pory"
	.string "Leap out of the water now!$"
# 552 "data/maps/LilycoveCity/scripts.pory"

# 553 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GetLostMessingUpTraining:
# 554 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? What do you want?\p"
# 555 "data/maps/LilycoveCity/scripts.pory"
	.string "You're messing up our training,\n"
# 556 "data/maps/LilycoveCity/scripts.pory"
	.string "so can you, like, get lost?$"
# 557 "data/maps/LilycoveCity/scripts.pory"

# 558 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallInTown:
# 559 "data/maps/LilycoveCity/scripts.pory"
	.string "There's a POKéMON CONTEST HALL\n"
# 560 "data/maps/LilycoveCity/scripts.pory"
	.string "right in this here town. \p"
# 561 "data/maps/LilycoveCity/scripts.pory"
	.string "That means well-raised POKéMON will\n"
# 562 "data/maps/LilycoveCity/scripts.pory"
	.string "come from all over the country.\p"
# 563 "data/maps/LilycoveCity/scripts.pory"
	.string "My heart swells with excitement!$"
# 564 "data/maps/LilycoveCity/scripts.pory"

# 565 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_StrangeCaveInCove:
# 566 "data/maps/LilycoveCity/scripts.pory"
	.string "Have you seen that strange cave in\n"
# 567 "data/maps/LilycoveCity/scripts.pory"
	.string "the cove at the edge of town?$"
# 568 "data/maps/LilycoveCity/scripts.pory"

# 569 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GoingToMoveDeleterForHMs:
# 570 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going to teach my POKéMON some new\n"
# 571 "data/maps/LilycoveCity/scripts.pory"
	.string "moves for entering a CONTEST.\p"
# 572 "data/maps/LilycoveCity/scripts.pory"
	.string "So, I'm going to see the MOVE DELETER\n"
# 573 "data/maps/LilycoveCity/scripts.pory"
	.string "and make it forget HM moves.$"
# 574 "data/maps/LilycoveCity/scripts.pory"

# 575 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImFromKanto:
# 576 "data/maps/LilycoveCity/scripts.pory"
	.string "I came from KANTO.\p"
# 577 "data/maps/LilycoveCity/scripts.pory"
	.string "The HOENN region is beautiful with\n"
# 578 "data/maps/LilycoveCity/scripts.pory"
	.string "all its water and verdant nature.\p"
# 579 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? Wait a second…\p"
# 580 "data/maps/LilycoveCity/scripts.pory"
	.string "Could there be rare POKéMON that live\n"
# 581 "data/maps/LilycoveCity/scripts.pory"
	.string "only in this area?$"
# 582 "data/maps/LilycoveCity/scripts.pory"

# 583 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaBeenTrainingWailmer:
# 584 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA's been training their\n"
# 585 "data/maps/LilycoveCity/scripts.pory"
	.string "WAILMER in the cove.\p"
# 586 "data/maps/LilycoveCity/scripts.pory"
	.string "We SAILORS can't get our boats out\n"
# 587 "data/maps/LilycoveCity/scripts.pory"
	.string "to sea with them in the way!$"
# 588 "data/maps/LilycoveCity/scripts.pory"

# 589 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeonePuntedTeamAquaOut:
# 590 "data/maps/LilycoveCity/scripts.pory"
	.string "Ahoy, did you know?\p"
# 591 "data/maps/LilycoveCity/scripts.pory"
	.string "Someone punted TEAM AQUA out of\n"
# 592 "data/maps/LilycoveCity/scripts.pory"
	.string "the way for us!\p"
# 593 "data/maps/LilycoveCity/scripts.pory"
	.string "That got the WAILMER out of the cove,\n"
# 594 "data/maps/LilycoveCity/scripts.pory"
	.string "so we can get our boats out again.$"
# 595 "data/maps/LilycoveCity/scripts.pory"

# 596 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeoneStoleMyPokemon:
# 597 "data/maps/LilycoveCity/scripts.pory"
	.string "I was taking a relaxing snooze at the\n"
# 598 "data/maps/LilycoveCity/scripts.pory"
	.string "seaside inn to the sound of waves…\p"
# 599 "data/maps/LilycoveCity/scripts.pory"
	.string "When someone stole my POKéMON!\p"
# 600 "data/maps/LilycoveCity/scripts.pory"
	.string "Who's the abductor?\n"
# 601 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA? Is it TEAM AQUA?$"
# 602 "data/maps/LilycoveCity/scripts.pory"

# 603 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MissingPokemonCameBack:
# 604 "data/maps/LilycoveCity/scripts.pory"
	.string "My missing POKéMON…\n"
# 605 "data/maps/LilycoveCity/scripts.pory"
	.string "It came back without me noticing!$"
# 606 "data/maps/LilycoveCity/scripts.pory"

# 607 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImArtDealer:
# 608 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an ART DEALER.\p"
# 609 "data/maps/LilycoveCity/scripts.pory"
	.string "I am a buyer and seller of fine art,\n"
# 610 "data/maps/LilycoveCity/scripts.pory"
	.string "especially paintings.\p"
# 611 "data/maps/LilycoveCity/scripts.pory"
	.string "I've heard that the MUSEUM here has\n"
# 612 "data/maps/LilycoveCity/scripts.pory"
	.string "magnificent works on exhibit…$"
# 613 "data/maps/LilycoveCity/scripts.pory"

# 614 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SeaRemainsForeverYoung:
# 615 "data/maps/LilycoveCity/scripts.pory"
	.string "Even as we grow old and wrinkled,\n"
# 616 "data/maps/LilycoveCity/scripts.pory"
	.string "the sea remains forever young with\l"
# 617 "data/maps/LilycoveCity/scripts.pory"
	.string "the vivid brilliance of life…\p"
# 618 "data/maps/LilycoveCity/scripts.pory"
	.string "Fwohoho fwohohohoho…$"
# 619 "data/maps/LilycoveCity/scripts.pory"

# 620 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SixtyYearsAgoHusbandProposed:
# 621 "data/maps/LilycoveCity/scripts.pory"
	.string "It was sixty years ago that my husband\n"
# 622 "data/maps/LilycoveCity/scripts.pory"
	.string "proposed to me here.\l"
# 623 "data/maps/LilycoveCity/scripts.pory"
	.string "The sea remains as beautiful as ever.\p"
# 624 "data/maps/LilycoveCity/scripts.pory"
	.string "Mufufufu mufufufufufu…$"
# 625 "data/maps/LilycoveCity/scripts.pory"

# 626 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaRenovatedCavern:
# 627 "data/maps/LilycoveCity/scripts.pory"
	.string "Hm, you know of the peculiar cavern\n"
# 628 "data/maps/LilycoveCity/scripts.pory"
	.string "in this cove?\p"
# 629 "data/maps/LilycoveCity/scripts.pory"
	.string "That had been a natural formation,\n"
# 630 "data/maps/LilycoveCity/scripts.pory"
	.string "but then that TEAM AQUA lot came\l"
# 631 "data/maps/LilycoveCity/scripts.pory"
	.string "along and made their renovations.\p"
# 632 "data/maps/LilycoveCity/scripts.pory"
	.string "They call themselves\n"
# 633 "data/maps/LilycoveCity/scripts.pory"
	.string "the “nature-loving TEAM AQUA”!\p"
# 634 "data/maps/LilycoveCity/scripts.pory"
	.string "But what they do and what they say\n"
# 635 "data/maps/LilycoveCity/scripts.pory"
	.string "don't match at all!$"
# 636 "data/maps/LilycoveCity/scripts.pory"

# 637 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaLotGoneForGood:
# 638 "data/maps/LilycoveCity/scripts.pory"
	.string "That cave in the cove…\p"
# 639 "data/maps/LilycoveCity/scripts.pory"
	.string "I didn't notice it right away,\n"
# 640 "data/maps/LilycoveCity/scripts.pory"
	.string "but it's completely empty now.\p"
# 641 "data/maps/LilycoveCity/scripts.pory"
	.string "That TEAM AQUA lot, they must\n"
# 642 "data/maps/LilycoveCity/scripts.pory"
	.string "have gone away for good.$"
# 643 "data/maps/LilycoveCity/scripts.pory"

# 644 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_CitySign:
# 645 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY\p"
# 646 "data/maps/LilycoveCity/scripts.pory"
	.string "“Where the land ends and the\n"
# 647 "data/maps/LilycoveCity/scripts.pory"
	.string "sea begins.”$"
# 648 "data/maps/LilycoveCity/scripts.pory"

# 649 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallSign:
# 650 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON CONTEST HALL\n"
# 651 "data/maps/LilycoveCity/scripts.pory"
	.string "“The gathering place for TRAINERS!”$"
# 652 "data/maps/LilycoveCity/scripts.pory"

# 653 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MotelSign:
# 654 "data/maps/LilycoveCity/scripts.pory"
	.string "COVE LILY MOTEL\p"
# 655 "data/maps/LilycoveCity/scripts.pory"
	.string "“Remember us as COVE LILY of\n"
# 656 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE.”$"
# 657 "data/maps/LilycoveCity/scripts.pory"

# 658 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSign:
# 659 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE MUSEUM\p"
# 660 "data/maps/LilycoveCity/scripts.pory"
	.string "“POKéMON Masterpiece Collection\n"
# 661 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 662 "data/maps/LilycoveCity/scripts.pory"

# 663 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSignPlayersExhibit:
# 664 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE MUSEUM\p"
# 665 "data/maps/LilycoveCity/scripts.pory"
	.string "“{PLAYER}'s POKéMON Collection\n"
# 666 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 667 "data/maps/LilycoveCity/scripts.pory"

# 668 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSignUnderConstruction:
# 669 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p"
# 670 "data/maps/LilycoveCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 671 "data/maps/LilycoveCity/scripts.pory"
	.string "construction in SLATEPORT CITY.\p"
# 672 "data/maps/LilycoveCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 673 "data/maps/LilycoveCity/scripts.pory"
	.string "shortly.”$"
# 674 "data/maps/LilycoveCity/scripts.pory"

# 675 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSign:
# 676 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p"
# 677 "data/maps/LilycoveCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 678 "data/maps/LilycoveCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 679 "data/maps/LilycoveCity/scripts.pory"

# 680 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TrainerFanClubSign:
# 681 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON TRAINER FAN CLUB\p"
# 682 "data/maps/LilycoveCity/scripts.pory"
	.string "The names of TRAINERS are scribbled\n"
# 683 "data/maps/LilycoveCity/scripts.pory"
	.string "all over the sign…$"
# 684 "data/maps/LilycoveCity/scripts.pory"

# 685 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DepartmentStoreSign:
# 686 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE DEPARTMENT STORE\p"
# 687 "data/maps/LilycoveCity/scripts.pory"
	.string "“Overflowing with great merchandise\n"
# 688 "data/maps/LilycoveCity/scripts.pory"
	.string "and excitement!\p"
# 689 "data/maps/LilycoveCity/scripts.pory"
	.string "“A great place to find that something\n"
# 690 "data/maps/LilycoveCity/scripts.pory"
	.string "you need!”$"
# 691 "data/maps/LilycoveCity/scripts.pory"

# 692 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MoveDeletersHouseSign:
# 693 "data/maps/LilycoveCity/scripts.pory"
	.string "MOVE DELETER'S HOUSE\p"
# 694 "data/maps/LilycoveCity/scripts.pory"
	.string "“Unwanted POKéMON moves deleted.”$"
# 695 "data/maps/LilycoveCity/scripts.pory"

# 696 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DoYouKnowAboutBerryBlender:
# 697 "data/maps/LilycoveCity/scripts.pory"
	.string "Do you know about the machine\n"
# 698 "data/maps/LilycoveCity/scripts.pory"
	.string "BERRY BLENDER?$"
# 699 "data/maps/LilycoveCity/scripts.pory"

# 700 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_FasterSpinBetterPokeblocks:
# 701 "data/maps/LilycoveCity/scripts.pory"
	.string "People have to work together to get it\n"
# 702 "data/maps/LilycoveCity/scripts.pory"
	.string "to spin faster.\p"
# 703 "data/maps/LilycoveCity/scripts.pory"
	.string "The faster you can make it spin, the\n"
# 704 "data/maps/LilycoveCity/scripts.pory"
	.string "better {POKEBLOCK}S you can get, I've heard.$"
# 705 "data/maps/LilycoveCity/scripts.pory"

# 706 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ExplainBerryBlender:
# 707 "data/maps/LilycoveCity/scripts.pory"
	.string "It's used for making a kind of candy\n"
# 708 "data/maps/LilycoveCity/scripts.pory"
	.string "called a {POKEBLOCK}.\p"
# 709 "data/maps/LilycoveCity/scripts.pory"
	.string "If you give a good {POKEBLOCK} to a POKéMON,\n"
# 710 "data/maps/LilycoveCity/scripts.pory"
	.string "its condition will improve by a lot.$"
# 711 "data/maps/LilycoveCity/scripts.pory"

# 712 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HeardTowerCalledSkyPillar:
# 713 "data/maps/LilycoveCity/scripts.pory"
	.string "I heard there's a tower somewhere out\n"
# 714 "data/maps/LilycoveCity/scripts.pory"
	.string "on the sea routes.\p"
# 715 "data/maps/LilycoveCity/scripts.pory"
	.string "It's called the SKY PILLAR, I hear.$"
# 716 "data/maps/LilycoveCity/scripts.pory"

# 717 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SawTallTowerOnRoute131:
# 718 "data/maps/LilycoveCity/scripts.pory"
	.string "I saw this tall tower somewhere\n"
# 719 "data/maps/LilycoveCity/scripts.pory"
	.string "around ROUTE 131.\p"
# 720 "data/maps/LilycoveCity/scripts.pory"
	.string "Could that possibly be…?$"
# 721 "data/maps/LilycoveCity/scripts.pory"

# 722 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_JustArrivedAndSawRarePokemon:
# 723 "data/maps/LilycoveCity/scripts.pory"
	.string "We just arrived here on our\n"
# 724 "data/maps/LilycoveCity/scripts.pory"
	.string "honeymoon vacation.\p"
# 725 "data/maps/LilycoveCity/scripts.pory"
	.string "We happened to see a DRAGON-type\n"
# 726 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON flying way up in the sky.\p"
# 727 "data/maps/LilycoveCity/scripts.pory"
	.string "Do cool POKéMON like that live in\n"
# 728 "data/maps/LilycoveCity/scripts.pory"
	.string "the HOENN region?$"
# 729 "data/maps/LilycoveCity/scripts.pory"

# 730 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HoneymoonVowToSeeRarePokemon:
# 731 "data/maps/LilycoveCity/scripts.pory"
	.string "On our honeymoon, we vowed to see as\n"
# 732 "data/maps/LilycoveCity/scripts.pory"
	.string "many rare POKéMON as we can.\p"
# 733 "data/maps/LilycoveCity/scripts.pory"
	.string "So we were delighted to see a rare\n"
# 734 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON as soon as we arrived.\p"
# 735 "data/maps/LilycoveCity/scripts.pory"
	.string "I mean, we are totally happy!$"

LilycoveCity_EventScript_EmoBully::
# 740 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 741 "data/maps/LilycoveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 742 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 743 "data/maps/LilycoveCity/scripts.pory"
	callnative RemoveFollowingPokemon
# 744 "data/maps/LilycoveCity/scripts.pory"
	fadenewbgm MUS_NONE
# 745 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BullyMan1, MSGBOX_AUTOCLOSE
# 746 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 747 "data/maps/LilycoveCity/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceDown
# 748 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 26
# 749 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 750 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BullyGirl1, MSGBOX_AUTOCLOSE
# 751 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 752 "data/maps/LilycoveCity/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceRight
# 753 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 26
# 754 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BullyMan2, MSGBOX_AUTOCLOSE
# 755 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 756 "data/maps/LilycoveCity/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceDown
# 757 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 26
# 758 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 759 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BullyGirl2, MSGBOX_AUTOCLOSE
# 760 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 761 "data/maps/LilycoveCity/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceRight
# 762 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 26
# 763 "data/maps/LilycoveCity/scripts.pory"
	delay 20
# 764 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, Common_Movement_WalkInPlaceDown
# 765 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 23
# 766 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BullyMan3, MSGBOX_AUTOCLOSE
# 767 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 768 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, Common_Movement_WalkRight
# 769 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 23
# 770 "data/maps/LilycoveCity/scripts.pory"
	delay 30
# 771 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_Emo1, MSGBOX_AUTOCLOSE
# 772 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 773 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, Common_Movement_WalkInPlaceLeft
# 774 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 23
# 775 "data/maps/LilycoveCity/scripts.pory"
	applymovement 24, Common_Movement_WalkRight
# 776 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 777 "data/maps/LilycoveCity/scripts.pory"
	applymovement 25, Common_Movement_WalkRight
# 778 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 25
# 779 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 780 "data/maps/LilycoveCity/scripts.pory"
	playse SE_PIN
# 781 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, Common_Movement_ExclamationMark
# 782 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 23
# 783 "data/maps/LilycoveCity/scripts.pory"
	waitse
# 784 "data/maps/LilycoveCity/scripts.pory"
	playse SE_BALL_OPEN
# 785 "data/maps/LilycoveCity/scripts.pory"
	fadescreen FADE_TO_WHITE
# 786 "data/maps/LilycoveCity/scripts.pory"
	addobject 27
# 787 "data/maps/LilycoveCity/scripts.pory"
	addobject 28
# 788 "data/maps/LilycoveCity/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 2
# 789 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 790 "data/maps/LilycoveCity/scripts.pory"
	playse SE_PIN
# 791 "data/maps/LilycoveCity/scripts.pory"
	applymovement 24, Common_Movement_ExclamationMark
# 792 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 24
# 793 "data/maps/LilycoveCity/scripts.pory"
	applymovement 25, Common_Movement_ExclamationMark
# 794 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 25
# 795 "data/maps/LilycoveCity/scripts.pory"
	delay 30
# 796 "data/maps/LilycoveCity/scripts.pory"
	applymovement 24, LilycoveCity_Movement_WalkBackLeft
# 797 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 798 "data/maps/LilycoveCity/scripts.pory"
	applymovement 27, LilycoveCity_Movement_Typhlosion
# 799 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 27
# 800 "data/maps/LilycoveCity/scripts.pory"
	playmoncry SPECIES_TYPHLOSION_HISUI, CRY_MODE_ENCOUNTER
# 801 "data/maps/LilycoveCity/scripts.pory"
	delay 30
# 802 "data/maps/LilycoveCity/scripts.pory"
	applymovement 25, LilycoveCity_Movement_WalkBackLeft
# 803 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 804 "data/maps/LilycoveCity/scripts.pory"
	applymovement 28, LilycoveCity_Movement_Morgrem
# 805 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 28
# 806 "data/maps/LilycoveCity/scripts.pory"
	playmoncry SPECIES_MORGREM, CRY_MODE_ENCOUNTER
# 807 "data/maps/LilycoveCity/scripts.pory"
	delay 20
# 808 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_EmoBully_Text_0, MSGBOX_AUTOCLOSE
# 809 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 812 "data/maps/LilycoveCity/scripts.pory"
	applymovement 24, LilycoveCity_Movement_BullyMan
# 813 "data/maps/LilycoveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_Movement_WalkBackUp
# 814 "data/maps/LilycoveCity/scripts.pory"
	delay 20
# 815 "data/maps/LilycoveCity/scripts.pory"
	applymovement 25, LilycoveCity_Movement_BullyKid
# 816 "data/maps/LilycoveCity/scripts.pory"
	delay 30
# 817 "data/maps/LilycoveCity/scripts.pory"
	applymovement 26, LilycoveCity_Movement_BullyGirl
# 818 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 26
# 819 "data/maps/LilycoveCity/scripts.pory"
	removeobject 24
# 820 "data/maps/LilycoveCity/scripts.pory"
	removeobject 25
# 821 "data/maps/LilycoveCity/scripts.pory"
	removeobject 26
# 822 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_THE_DAY_WILL_COME, FALSE
# 823 "data/maps/LilycoveCity/scripts.pory"
	applymovement 27, Common_Movement_WalkInPlaceRight
# 824 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 27
# 825 "data/maps/LilycoveCity/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceUp
# 826 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 28
# 827 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_EmoBully_Text_1, MSGBOX_AUTOCLOSE
# 828 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 829 "data/maps/LilycoveCity/scripts.pory"
	playmoncry SPECIES_TYPHLOSION_HISUI, CRY_MODE_ENCOUNTER
# 830 "data/maps/LilycoveCity/scripts.pory"
	delay 20
# 831 "data/maps/LilycoveCity/scripts.pory"
	applymovement 27, LilycoveCity_Movement_EnterPokeball
# 832 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 27
# 833 "data/maps/LilycoveCity/scripts.pory"
	removeobject 27
# 834 "data/maps/LilycoveCity/scripts.pory"
	delay 20
# 835 "data/maps/LilycoveCity/scripts.pory"
	playmoncry SPECIES_MORGREM, CRY_MODE_ENCOUNTER
# 836 "data/maps/LilycoveCity/scripts.pory"
	delay 30
# 837 "data/maps/LilycoveCity/scripts.pory"
	applymovement 28, LilycoveCity_Movement_EnterPokeball
# 838 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 28
# 839 "data/maps/LilycoveCity/scripts.pory"
	removeobject 28
# 840 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 841 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, LilycoveCity_Movement_Emo
# 842 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 23
# 843 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_EmoBully_Text_2, MSGBOX_AUTOCLOSE
# 844 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 845 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, Common_Movement_WalkRight
# 846 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 23
# 847 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_Emo2, MSGBOX_AUTOCLOSE
# 848 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 849 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, Common_Movement_WalkInPlaceDown
# 850 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 23
# 851 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_Emo3, MSGBOX_AUTOCLOSE
# 852 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 853 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, Common_Movement_WalkInPlaceLeft
# 854 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 23
# 855 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_Emo4, MSGBOX_AUTOCLOSE
# 856 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 857 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, LilycoveCity_Movement_EmoLeave
# 858 "data/maps/LilycoveCity/scripts.pory"
	delay 20
# 859 "data/maps/LilycoveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 860 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 23
# 861 "data/maps/LilycoveCity/scripts.pory"
	removeobject 23
# 862 "data/maps/LilycoveCity/scripts.pory"
	delay 20
# 863 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 864 "data/maps/LilycoveCity/scripts.pory"
	callnative UpdateFollowingPokemon
# 865 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_MISA_STATE, 8
# 866 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_HIDE_EMO_LILYCOVE
# 867 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_JOMITHIUS_UNAVAILABLE
# 868 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_RIVAL_POKEMON
# 869 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	end


# 943 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_Typhlosion:
# 944 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 945 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_down
# 946 "data/maps/LilycoveCity/scripts.pory"
	walk_in_place_fast_left
	step_end

# 949 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_Morgrem:
# 950 "data/maps/LilycoveCity/scripts.pory"
	walk_left
	step_end

# 953 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_BullyMan:
# 954 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 954 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 954 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 954 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 954 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 954 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 954 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 954 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 954 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 954 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 954 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 954 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
	step_end

# 957 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_BullyKid:
# 958 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_up
# 959 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 959 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 959 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 959 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 959 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 959 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 959 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 959 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 959 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 959 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 959 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
	step_end

# 962 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_BullyGirl:
# 963 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_down
# 964 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 964 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 964 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 964 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 964 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 964 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 964 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 964 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 964 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 964 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 964 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
	step_end

# 967 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_Emo:
# 968 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 968 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 968 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 968 "data/maps/LilycoveCity/scripts.pory"
	walk_left
	step_end

# 971 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_EmoLeave:
# 972 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 972 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 972 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 972 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 972 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 972 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 972 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 972 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 972 "data/maps/LilycoveCity/scripts.pory"
	walk_left
	step_end

# 975 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_WalkBackRight:
# 976 "data/maps/LilycoveCity/scripts.pory"
	lock_facing_direction
# 977 "data/maps/LilycoveCity/scripts.pory"
	walk_right
# 978 "data/maps/LilycoveCity/scripts.pory"
	unlock_facing_direction
	step_end

# 981 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_WalkBackLeft:
# 982 "data/maps/LilycoveCity/scripts.pory"
	lock_facing_direction
# 983 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 984 "data/maps/LilycoveCity/scripts.pory"
	unlock_facing_direction
	step_end

# 987 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_WalkBackUp:
# 988 "data/maps/LilycoveCity/scripts.pory"
	face_down
# 989 "data/maps/LilycoveCity/scripts.pory"
	delay_4
# 990 "data/maps/LilycoveCity/scripts.pory"
	lock_facing_direction
# 991 "data/maps/LilycoveCity/scripts.pory"
	walk_up
# 992 "data/maps/LilycoveCity/scripts.pory"
	unlock_facing_direction
	step_end

# 995 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_WalkBackDown:
# 996 "data/maps/LilycoveCity/scripts.pory"
	lock_facing_direction
# 997 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 998 "data/maps/LilycoveCity/scripts.pory"
	unlock_facing_direction
	step_end

# 1001 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_StaffEmployee:
# 1002 "data/maps/LilycoveCity/scripts.pory"
	walk_right
# 1003 "data/maps/LilycoveCity/scripts.pory"
	walk_in_place_down
	step_end

# 1006 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_StaffEmployee2:
# 1007 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 1008 "data/maps/LilycoveCity/scripts.pory"
	face_original_direction
	step_end

# 1011 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_EnterPokeball:
# 1012 "data/maps/LilycoveCity/scripts.pory"
	enter_pokeball
	step_end

LilycoveCity_EventScript_RatCaveShake::
# 1016 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 1017 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_NONE, FALSE
# 1018 "data/maps/LilycoveCity/scripts.pory"
	delay 40
# 1019 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_0x8004, 2
# 1020 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_0x8005, 6
# 1021 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_0x8006, 8
# 1022 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_0x8007, 4
# 1023 "data/maps/LilycoveCity/scripts.pory"
	special ShakeCamera
# 1024 "data/maps/LilycoveCity/scripts.pory"
	waitstate
# 1025 "data/maps/LilycoveCity/scripts.pory"
	delay 60
# 1026 "data/maps/LilycoveCity/scripts.pory"
	special ShakeCamera
# 1027 "data/maps/LilycoveCity/scripts.pory"
	waitstate
# 1028 "data/maps/LilycoveCity/scripts.pory"
	delay 60
# 1029 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 1030 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 8
# 1031 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	end


LilycoveCity_EventScript_Man4::
# 1036 "data/maps/LilycoveCity/scripts.pory"
	lock
# 1037 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 1038 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_Man4, MSGBOX_AUTOCLOSE
# 1039 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 1040 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 1041 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 1042 "data/maps/LilycoveCity/scripts.pory"
	release
	end


LilycoveCity_EventScript_CEO_HighriseNoEntry::
# 1053 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 1054 "data/maps/LilycoveCity/scripts.pory"
	playse SE_PIN
# 1055 "data/maps/LilycoveCity/scripts.pory"
	applymovement 30, Common_Movement_ExclamationMark
# 1056 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 30
# 1057 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 1058 "data/maps/LilycoveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_Movement_WalkBackDown
# 1059 "data/maps/LilycoveCity/scripts.pory"
	applymovement 30, LilycoveCity_Movement_StaffEmployee
# 1060 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 1061 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_StaffEmployee, MSGBOX_DEFAULT
# 1062 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 1063 "data/maps/LilycoveCity/scripts.pory"
	applymovement 30, LilycoveCity_Movement_StaffEmployee2
# 1064 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 30
# 1065 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	end


LilycoveCity_EventScript_StaffEmployee::
# 1070 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_StaffEmployee_Text_0, MSGBOX_SIGN
	end


LilycoveCity_EventScript_CEO_HighriseWelcome::
# 1080 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 1081 "data/maps/LilycoveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 1082 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 1083 "data/maps/LilycoveCity/scripts.pory"
	applymovement 30, Common_Movement_WalkInPlaceRight
# 1084 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 30
# 1085 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_StaffEmployee2, MSGBOX_DEFAULT
# 1086 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 1087 "data/maps/LilycoveCity/scripts.pory"
	playse SE_PIN
# 1088 "data/maps/LilycoveCity/scripts.pory"
	applymovement 30, Common_Movement_ExclamationMark
# 1089 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 30
# 1090 "data/maps/LilycoveCity/scripts.pory"
	waitse
# 1091 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_StaffEmployee3, MSGBOX_DEFAULT
# 1092 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 1093 "data/maps/LilycoveCity/scripts.pory"
	applymovement 30, Common_Movement_FaceOriginalDirection
# 1094 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 30
# 1095 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 1096 "data/maps/LilycoveCity/scripts.pory"
	warpdoor MAP_LILYCOVE_CITY_HIGHRISE_GROUND_FLOOR, 8, 7
# 1097 "data/maps/LilycoveCity/scripts.pory"
	waitstate
# 1098 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	end


LilycoveCity_EventScript_MysteryGiftMan::
# 1113 "data/maps/LilycoveCity/scripts.pory"
	lock
# 1114 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 1115 "data/maps/LilycoveCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_OLD_SEA_MAP, MysteryGiftScript_OldSeaMap
# 1116 "data/maps/LilycoveCity/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_SOUTHERN_ISLAND, CableClub_EventScript_DistributeEonTicket
# 1117 "data/maps/LilycoveCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_AURORA_TICKET, MysteryGiftScript_AuroraTicket
# 1118 "data/maps/LilycoveCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_MYSTIC_TICKET, MysteryGiftScript_MysticTicket
# 1119 "data/maps/LilycoveCity/scripts.pory"
	goto CableClub_EventScript_MysteryGiftThankYou2
	end


LilycoveCity_EventScript_BellyDrumTutor::
# 1124 "data/maps/LilycoveCity/scripts.pory"
	lock
# 1125 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 1126 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_BellyDrumTutor_Text_0, MSGBOX_YESNO
# 1130 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 1131 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MoveTutor_EventScript_BellyDrumTeach
# 1132 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_TutorDecline
# 1133 "data/maps/LilycoveCity/scripts.pory"
	release
	end


MoveTutor_EventScript_BellyDrumTeach::
# 1138 "data/maps/LilycoveCity/scripts.pory"
	msgbox MoveTutor_EventScript_BellyDrumTeach_Text_0, MSGBOX_DEFAULT
# 1139 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_0x8005, MOVE_BELLY_DRUM
# 1140 "data/maps/LilycoveCity/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 1141 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, LilycoveCity_EventScript_TutorDecline
# 1142 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_BellyDrumTaught
	end


LilycoveCity_EventScript_TutorDecline::
# 1147 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_TutorDecline_Text_0, MSGBOX_AUTOCLOSE
# 1148 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 1149 "data/maps/LilycoveCity/scripts.pory"
	release
	end


LilycoveCity_EventScript_BellyDrumTaught::
# 1154 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_BellyDrumTaught_Text_0
# 1156 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 1157 "data/maps/LilycoveCity/scripts.pory"
	release
	end


LilycoveCity_EventScript_IronDefenseTutor::
# 1162 "data/maps/LilycoveCity/scripts.pory"
	lock
# 1163 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 1164 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_IronDefenseTutor_Text_0, MSGBOX_YESNO
# 1168 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 1169 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MoveTutor_EventScript_IronDefenseTeach
# 1170 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_TutorDecline
# 1171 "data/maps/LilycoveCity/scripts.pory"
	release
	end


MoveTutor_EventScript_IronDefenseTeach::
# 1176 "data/maps/LilycoveCity/scripts.pory"
	msgbox MoveTutor_EventScript_IronDefenseTeach_Text_0, MSGBOX_DEFAULT
# 1177 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_0x8005, MOVE_IRON_DEFENSE
# 1178 "data/maps/LilycoveCity/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 1179 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, LilycoveCity_EventScript_TutorDecline
# 1180 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_BellyDrumTaught
	end


LilycoveCity_EventScript_EmoBully_Text_0:
# 808 "data/maps/LilycoveCity/scripts.pory"
	.string "L-Let's get out of here!$"

LilycoveCity_EventScript_EmoBully_Text_1:
# 827 "data/maps/LilycoveCity/scripts.pory"
	.string "JAMES: Thanks, guys.$"

LilycoveCity_EventScript_EmoBully_Text_2:
# 843 "data/maps/LilycoveCity/scripts.pory"
	.string "JAMES: …\p So you saw that.$"

LilycoveCity_EventScript_StaffEmployee_Text_0:
# 1070 "data/maps/LilycoveCity/scripts.pory"
	.string "…$"

LilycoveCity_EventScript_BellyDrumTutor_Text_0:
# 1126 "data/maps/LilycoveCity/scripts.pory"
	.string "Offense is the best defense!\n Don't you agree?!\p If you want, I'll teach your\n POKéMON a great offensive move!$"

MoveTutor_EventScript_BellyDrumTeach_Text_0:
# 1138 "data/maps/LilycoveCity/scripts.pory"
	.string "Which POKéMON do you want me to\nteach BELLY DRUM?$"

LilycoveCity_EventScript_TutorDecline_Text_0:
# 1147 "data/maps/LilycoveCity/scripts.pory"
	.string "Oh, okay.$"

LilycoveCity_EventScript_BellyDrumTaught_Text_0:
# 1154 "data/maps/LilycoveCity/scripts.pory"
	.string "Come back if you need to train\n more POKéMON!$"

LilycoveCity_EventScript_IronDefenseTutor_Text_0:
# 1164 "data/maps/LilycoveCity/scripts.pory"
	.string "Defense is the best offense!\n Don't you agree?!\p If you want, I'll teach your\n POKéMON a great defensive move!$"

MoveTutor_EventScript_IronDefenseTeach_Text_0:
# 1176 "data/maps/LilycoveCity/scripts.pory"
	.string "Which POKéMON do you want me to\nteach IRON DEFENSE?$"

LilycoveCity_Text_BullyMan1::
# 873 "data/maps/LilycoveCity/scripts.pory"
	.string "BOY: What are you doing in LILYCOVE?\n I'm surprised a little nerd like you\l actually left your house!\p KID: Haha, for real!\n Are you still acting like a weirdo?\l “Oh, the abyss is calling me…”$"

LilycoveCity_Text_BullyGirl1::
# 882 "data/maps/LilycoveCity/scripts.pory"
	.string "GIRL: Hahaha! He seriously says that!\n So lame.$"

LilycoveCity_Text_BullyMan2::
# 887 "data/maps/LilycoveCity/scripts.pory"
	.string "BOY: Seriously, I thought I'd never\n have to see you and your lame acting\l again after I moved.\p Acting all cocky just because your\n mom's a strong TRAINER.\p KID: Yeah!\n You probably got all those badges\l using your mommy's POKéMON.$"

LilycoveCity_Text_BullyGirl2::
# 898 "data/maps/LilycoveCity/scripts.pory"
	.string "GIRL: Hahaha! He probably did!\n What a nepo baby.$"

LilycoveCity_Text_BullyMan3::
# 903 "data/maps/LilycoveCity/scripts.pory"
	.string "BOY: What?\n Too scared to say anything?\p Don't forget how you had to drop\n out of the TRAINER SCHOOL, loser.\p How about you quit acting like\n you're a protagonist already?\p Grow up!$"

LilycoveCity_Text_Emo1::
# 913 "data/maps/LilycoveCity/scripts.pory"
	.string "JAMES: …\p I don't have anything to say to you.\p BOY: What was that?!\p KID: You…!$"

LilycoveCity_Text_Emo2::
# 920 "data/maps/LilycoveCity/scripts.pory"
	.string "That guy…\n Was the reason I stopped going\l to school.\p My mom found out what was happening\n and suddenly he moved away.\p I guess his friends still visit\n him out here.$"

LilycoveCity_Text_Emo3::
# 930 "data/maps/LilycoveCity/scripts.pory"
	.string "Either way, I'm…\n I'm a different person now.\l I have my friends with me.\p Even if…\p …$"

LilycoveCity_Text_Emo4::
# 938 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm gonna go.\p See ya.$"

LilycoveCity_Text_Man4::
# 1046 "data/maps/LilycoveCity/scripts.pory"
	.string "I've been hearing weird noises coming\n from that houses for a few days now.\p But nobody's lived there for years.$"

LilycoveCity_Text_StaffEmployee::
# 1074 "data/maps/LilycoveCity/scripts.pory"
	.string "Sorry, this area is restricted.\n Cleared personnel only.$"

LilycoveCity_Text_StaffEmployee2::
# 1102 "data/maps/LilycoveCity/scripts.pory"
	.string "Sorry, could I see your TRAINER CARD?\n … … … … … …$"

LilycoveCity_Text_StaffEmployee3::
# 1107 "data/maps/LilycoveCity/scripts.pory"
	.string "Ah, CHAMPION {PLAYER}! My apologies.\n Please, go ahead.$"
