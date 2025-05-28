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
	setflag FLAG_VISITED_LILYCOVE_CITY
# 11 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 12 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
# 13 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 14 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 15 "data/maps/LilycoveCity/scripts.pory"
	end
# 16 "data/maps/LilycoveCity/scripts.pory"

# 17 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnLoad:
# 18 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_SetWailmerMetatiles
# 19 "data/maps/LilycoveCity/scripts.pory"
	end
# 20 "data/maps/LilycoveCity/scripts.pory"

# 21 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SetWailmerMetatiles::
# 22 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 12, METATILE_Lilycove_Wailmer0, TRUE
# 23 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 12, METATILE_Lilycove_Wailmer1, TRUE
# 24 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 13, METATILE_Lilycove_Wailmer2, TRUE
# 25 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 13, METATILE_Lilycove_Wailmer3, TRUE
# 26 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 14, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 27 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 14, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 28 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 15, METATILE_Lilycove_Wailmer2, TRUE
# 29 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 15, METATILE_Lilycove_Wailmer3, TRUE
# 30 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 16, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 31 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 16, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 32 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 17, METATILE_Lilycove_Wailmer2, TRUE
# 33 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 17, METATILE_Lilycove_Wailmer3, TRUE
# 34 "data/maps/LilycoveCity/scripts.pory"
	return
# 35 "data/maps/LilycoveCity/scripts.pory"

# 36 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BerryGentleman::
# 37 "data/maps/LilycoveCity/scripts.pory"
	lock
# 38 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 39 "data/maps/LilycoveCity/scripts.pory"
	dotimebasedevents
# 40 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, LilycoveCity_EventScript_ReceivedBerry
# 41 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BerrySuitsYou, MSGBOX_DEFAULT
# 42 "data/maps/LilycoveCity/scripts.pory"
	random 10
# 43 "data/maps/LilycoveCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 44 "data/maps/LilycoveCity/scripts.pory"
	giveitem VAR_RESULT
# 45 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 46 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
# 47 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BecauseYoureTrainer, MSGBOX_DEFAULT
# 48 "data/maps/LilycoveCity/scripts.pory"
	release
# 49 "data/maps/LilycoveCity/scripts.pory"
	end
# 50 "data/maps/LilycoveCity/scripts.pory"

# 51 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ReceivedBerry::
# 52 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_PokeblocksSuitPokemon, MSGBOX_DEFAULT
# 53 "data/maps/LilycoveCity/scripts.pory"
	release
# 54 "data/maps/LilycoveCity/scripts.pory"
	end
# 55 "data/maps/LilycoveCity/scripts.pory"

# 56 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man3::
# 57 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallInTown, MSGBOX_NPC
# 58 "data/maps/LilycoveCity/scripts.pory"
	end
# 59 "data/maps/LilycoveCity/scripts.pory"

# 60 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Girl::
# 61 "data/maps/LilycoveCity/scripts.pory"
	lock
# 62 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 63 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_GirlAquaGone
# 64 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_StrangeCaveInCove, MSGBOX_DEFAULT
# 65 "data/maps/LilycoveCity/scripts.pory"
	release
# 66 "data/maps/LilycoveCity/scripts.pory"
	end
# 67 "data/maps/LilycoveCity/scripts.pory"

# 68 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_GirlAquaGone::
# 69 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GoingToMoveDeleterForHMs, MSGBOX_DEFAULT
# 70 "data/maps/LilycoveCity/scripts.pory"
	release
# 71 "data/maps/LilycoveCity/scripts.pory"
	end
# 72 "data/maps/LilycoveCity/scripts.pory"

# 73 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RichBoy::
# 74 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImFromKanto, MSGBOX_NPC
# 75 "data/maps/LilycoveCity/scripts.pory"
	end
# 76 "data/maps/LilycoveCity/scripts.pory"

# 77 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2::
# 78 "data/maps/LilycoveCity/scripts.pory"
	lock
# 79 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 80 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Sailor2AquaGone
# 81 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaBeenTrainingWailmer, MSGBOX_DEFAULT
# 82 "data/maps/LilycoveCity/scripts.pory"
	release
# 83 "data/maps/LilycoveCity/scripts.pory"
	end
# 84 "data/maps/LilycoveCity/scripts.pory"

# 85 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2AquaGone::
# 86 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeonePuntedTeamAquaOut, MSGBOX_DEFAULT
# 87 "data/maps/LilycoveCity/scripts.pory"
	release
# 88 "data/maps/LilycoveCity/scripts.pory"
	end
# 89 "data/maps/LilycoveCity/scripts.pory"

# 90 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2::
# 91 "data/maps/LilycoveCity/scripts.pory"
	lock
# 92 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 93 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Woman2AquaGone
# 94 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeoneStoleMyPokemon, MSGBOX_DEFAULT
# 95 "data/maps/LilycoveCity/scripts.pory"
	release
# 96 "data/maps/LilycoveCity/scripts.pory"
	end
# 97 "data/maps/LilycoveCity/scripts.pory"

# 98 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2AquaGone::
# 99 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MissingPokemonCameBack, MSGBOX_DEFAULT
# 100 "data/maps/LilycoveCity/scripts.pory"
	release
# 101 "data/maps/LilycoveCity/scripts.pory"
	end
# 102 "data/maps/LilycoveCity/scripts.pory"

# 103 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man2::
# 104 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImArtDealer, MSGBOX_NPC
# 105 "data/maps/LilycoveCity/scripts.pory"
	end
# 106 "data/maps/LilycoveCity/scripts.pory"

# 107 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM1::
# 108 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SeaRemainsForeverYoung, MSGBOX_SIGN
# 109 "data/maps/LilycoveCity/scripts.pory"
	end
# 110 "data/maps/LilycoveCity/scripts.pory"

# 111 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertF::
# 112 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SixtyYearsAgoHusbandProposed, MSGBOX_SIGN
# 113 "data/maps/LilycoveCity/scripts.pory"
	end
# 114 "data/maps/LilycoveCity/scripts.pory"

# 115 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2::
# 116 "data/maps/LilycoveCity/scripts.pory"
	lock
# 117 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 118 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_ExpertM2AquaGone
# 119 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaRenovatedCavern, MSGBOX_DEFAULT
# 120 "data/maps/LilycoveCity/scripts.pory"
	release
# 121 "data/maps/LilycoveCity/scripts.pory"
	end
# 122 "data/maps/LilycoveCity/scripts.pory"

# 123 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2AquaGone::
# 124 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaLotGoneForGood, MSGBOX_DEFAULT
# 125 "data/maps/LilycoveCity/scripts.pory"
	release
# 126 "data/maps/LilycoveCity/scripts.pory"
	end
# 127 "data/maps/LilycoveCity/scripts.pory"

# 128 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor1::
# 129 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HeardTowerCalledSkyPillar, MSGBOX_NPC
# 130 "data/maps/LilycoveCity/scripts.pory"
	end
# 131 "data/maps/LilycoveCity/scripts.pory"

# 132 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_FatMan::
# 133 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SawTallTowerOnRoute131, MSGBOX_NPC
# 134 "data/maps/LilycoveCity/scripts.pory"
	end
# 135 "data/maps/LilycoveCity/scripts.pory"

# 136 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man1::
# 137 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 138 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_JustArrivedAndSawRarePokemon, MSGBOX_NPC
# 139 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_MAN_1, Common_Movement_FaceOriginalDirection
# 140 "data/maps/LilycoveCity/scripts.pory"
	end
# 141 "data/maps/LilycoveCity/scripts.pory"

# 142 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman1::
# 143 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 144 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HoneymoonVowToSeeRarePokemon, MSGBOX_NPC
# 145 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_WOMAN_1, Common_Movement_FaceOriginalDirection
# 146 "data/maps/LilycoveCity/scripts.pory"
	end
# 147 "data/maps/LilycoveCity/scripts.pory"

# 148 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CitySign::
# 149 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_CitySign, MSGBOX_SIGN
# 150 "data/maps/LilycoveCity/scripts.pory"
	end
# 151 "data/maps/LilycoveCity/scripts.pory"

# 152 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ContestHallSign::
# 153 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallSign, MSGBOX_SIGN
# 154 "data/maps/LilycoveCity/scripts.pory"
	end
# 155 "data/maps/LilycoveCity/scripts.pory"

# 156 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MotelSign::
# 157 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MotelSign, MSGBOX_SIGN
# 158 "data/maps/LilycoveCity/scripts.pory"
	end
# 159 "data/maps/LilycoveCity/scripts.pory"

# 160 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSign::
# 161 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 162 "data/maps/LilycoveCity/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 163 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_0x8004
# 164 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_MuseumSignNoPaintings
# 165 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSignPlayersExhibit, MSGBOX_DEFAULT
# 166 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 167 "data/maps/LilycoveCity/scripts.pory"
	end
# 168 "data/maps/LilycoveCity/scripts.pory"

# 169 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSignNoPaintings::
# 170 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSign, MSGBOX_DEFAULT
# 171 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 172 "data/maps/LilycoveCity/scripts.pory"
	end
# 173 "data/maps/LilycoveCity/scripts.pory"

# 174 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSign::
# 175 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 176 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_HarborSignFerryReady
# 177 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSignUnderConstruction, MSGBOX_DEFAULT
# 178 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 179 "data/maps/LilycoveCity/scripts.pory"
	end
# 180 "data/maps/LilycoveCity/scripts.pory"

# 181 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSignFerryReady::
# 182 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSign, MSGBOX_DEFAULT
# 183 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 184 "data/maps/LilycoveCity/scripts.pory"
	end
# 185 "data/maps/LilycoveCity/scripts.pory"

# 186 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_TrainerFanClubSign::
# 187 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TrainerFanClubSign, MSGBOX_SIGN
# 188 "data/maps/LilycoveCity/scripts.pory"
	end
# 189 "data/maps/LilycoveCity/scripts.pory"

# 190 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DepartmentStoreSign::
# 191 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DepartmentStoreSign, MSGBOX_SIGN
# 192 "data/maps/LilycoveCity/scripts.pory"
	end
# 193 "data/maps/LilycoveCity/scripts.pory"

# 194 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MoveDeletersHouseSign::
# 195 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MoveDeletersHouseSign, MSGBOX_SIGN
# 196 "data/maps/LilycoveCity/scripts.pory"
	end
# 197 "data/maps/LilycoveCity/scripts.pory"

# 198 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_WailmerTrainerGrunt::
# 199 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 200 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_MET_WAILMER_TRAINER, LilycoveCity_EventScript_MetWailmerTrainer
# 201 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 202 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 203 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 204 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GetLostMessingUpTraining, MSGBOX_DEFAULT
# 205 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 206 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 207 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_WAILMER_TRAINER
# 208 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 209 "data/maps/LilycoveCity/scripts.pory"
	end
# 210 "data/maps/LilycoveCity/scripts.pory"

# 211 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MetWailmerTrainer::
# 212 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 213 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 214 "data/maps/LilycoveCity/scripts.pory"
	end
# 215 "data/maps/LilycoveCity/scripts.pory"

# 216 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt1::
# 217 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MovedLootIntoHideoutToday, MSGBOX_NPC
# 218 "data/maps/LilycoveCity/scripts.pory"
	end
# 219 "data/maps/LilycoveCity/scripts.pory"

# 220 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt2::
# 221 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ChanceToDoBigThings, MSGBOX_NPC
# 222 "data/maps/LilycoveCity/scripts.pory"
	end
# 223 "data/maps/LilycoveCity/scripts.pory"

# 224 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt3::
# 225 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DontGoNearCaveInCove, MSGBOX_NPC
# 226 "data/maps/LilycoveCity/scripts.pory"
	end
# 227 "data/maps/LilycoveCity/scripts.pory"

# 228 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt4::
# 229 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_IfWorldBecomesOurs, MSGBOX_NPC
# 230 "data/maps/LilycoveCity/scripts.pory"
	end
# 231 "data/maps/LilycoveCity/scripts.pory"

# 232 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Rival::
# 233 "data/maps/LilycoveCity/scripts.pory"
	lock
# 234 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 235 "data/maps/LilycoveCity/scripts.pory"
	checkplayergender
# 236 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LilycoveCity_EventScript_May
# 237 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LilycoveCity_EventScript_Brendan
# 238 "data/maps/LilycoveCity/scripts.pory"
	end
# 239 "data/maps/LilycoveCity/scripts.pory"

# 240 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_May::
# 241 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 242 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattleAgain
# 243 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattle
# 244 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineMayBattle
# 245 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayWontBeBeaten, MSGBOX_DEFAULT
# 246 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 247 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_BattleMayTreecko
# 248 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_BattleMayTorchic
# 249 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_BattleMayMudkip
# 250 "data/maps/LilycoveCity/scripts.pory"
	end
# 251 "data/maps/LilycoveCity/scripts.pory"

# 252 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattleAgain::
# 253 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayBattleMe, MSGBOX_YESNO
# 254 "data/maps/LilycoveCity/scripts.pory"
	return
# 255 "data/maps/LilycoveCity/scripts.pory"

# 256 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattle::
# 257 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayShoppingLetsBattle, MSGBOX_YESNO
# 258 "data/maps/LilycoveCity/scripts.pory"
	return
# 259 "data/maps/LilycoveCity/scripts.pory"

# 260 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineMayBattle::
# 261 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 262 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayNotRaisingPokemon, MSGBOX_DEFAULT
# 263 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 264 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 265 "data/maps/LilycoveCity/scripts.pory"
	release
# 266 "data/maps/LilycoveCity/scripts.pory"
	end
# 267 "data/maps/LilycoveCity/scripts.pory"

# 268 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Brendan::
# 269 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 270 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattleAgain
# 271 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattle
# 272 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineBrendanBattle
# 273 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanWontBeBeaten, MSGBOX_DEFAULT
# 274 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 275 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_BattleBrendanTreecko
# 276 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_BattleBrendanTorchic
# 277 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_BattleBrendanMudkip
# 278 "data/maps/LilycoveCity/scripts.pory"
	end
# 279 "data/maps/LilycoveCity/scripts.pory"

# 280 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattleAgain::
# 281 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanBattleMe, MSGBOX_YESNO
# 282 "data/maps/LilycoveCity/scripts.pory"
	return
# 283 "data/maps/LilycoveCity/scripts.pory"

# 284 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattle::
# 285 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanShoppingLetsBattle, MSGBOX_YESNO
# 286 "data/maps/LilycoveCity/scripts.pory"
	return
# 287 "data/maps/LilycoveCity/scripts.pory"

# 288 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineBrendanBattle::
# 289 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 290 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 291 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 292 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 293 "data/maps/LilycoveCity/scripts.pory"
	release
# 294 "data/maps/LilycoveCity/scripts.pory"
	end
# 295 "data/maps/LilycoveCity/scripts.pory"

# 296 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTreecko::
# 297 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TREECKO, LilycoveCity_Text_MayDefeat
# 298 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 299 "data/maps/LilycoveCity/scripts.pory"
	end
# 300 "data/maps/LilycoveCity/scripts.pory"

# 301 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTorchic::
# 302 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TORCHIC, LilycoveCity_Text_MayDefeat
# 303 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 304 "data/maps/LilycoveCity/scripts.pory"
	end
# 305 "data/maps/LilycoveCity/scripts.pory"

# 306 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayMudkip::
# 307 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_MUDKIP, LilycoveCity_Text_MayDefeat
# 308 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 309 "data/maps/LilycoveCity/scripts.pory"
	end
# 310 "data/maps/LilycoveCity/scripts.pory"

# 311 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTreecko::
# 312 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TREECKO, LilycoveCity_Text_BrendanDefeat
# 313 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 314 "data/maps/LilycoveCity/scripts.pory"
	end
# 315 "data/maps/LilycoveCity/scripts.pory"

# 316 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTorchic::
# 317 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TORCHIC, LilycoveCity_Text_BrendanDefeat
# 318 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 319 "data/maps/LilycoveCity/scripts.pory"
	end
# 320 "data/maps/LilycoveCity/scripts.pory"

# 321 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanMudkip::
# 322 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_MUDKIP, LilycoveCity_Text_BrendanDefeat
# 323 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 324 "data/maps/LilycoveCity/scripts.pory"
	end
# 325 "data/maps/LilycoveCity/scripts.pory"

# 326 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedMay::
# 327 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayGoingBackToLittleroot, MSGBOX_DEFAULT
# 328 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 329 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 330 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_MayCollectBadges
# 331 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_MayPokemonLeague
# 332 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 333 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
# 334 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 335 "data/maps/LilycoveCity/scripts.pory"
	end
# 336 "data/maps/LilycoveCity/scripts.pory"

# 337 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CheckFinalBadge::
# 338 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, LilycoveCity_EventScript_HasFinalBadge
# 339 "data/maps/LilycoveCity/scripts.pory"
	return
# 340 "data/maps/LilycoveCity/scripts.pory"

# 341 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HasFinalBadge::
# 342 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, TRUE
# 343 "data/maps/LilycoveCity/scripts.pory"
	return
# 344 "data/maps/LilycoveCity/scripts.pory"

# 345 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayCollectBadges::
# 346 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToCollectBadges, MSGBOX_DEFAULT
# 347 "data/maps/LilycoveCity/scripts.pory"
	return
# 348 "data/maps/LilycoveCity/scripts.pory"

# 349 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayPokemonLeague::
# 350 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_MayBattleFrontier
# 351 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 352 "data/maps/LilycoveCity/scripts.pory"
	return
# 353 "data/maps/LilycoveCity/scripts.pory"

# 354 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayBattleFrontier::
# 355 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 356 "data/maps/LilycoveCity/scripts.pory"
	return
# 357 "data/maps/LilycoveCity/scripts.pory"

# 358 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedBrendan::
# 359 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanGoingBackToLittleroot, MSGBOX_DEFAULT
# 360 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 361 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 362 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_BrendanCollectBadges
# 363 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_BrendanPokemonLeague
# 364 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 365 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
# 366 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 367 "data/maps/LilycoveCity/scripts.pory"
	end
# 368 "data/maps/LilycoveCity/scripts.pory"

# 369 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanCollectBadges::
# 370 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToCollectBadges, MSGBOX_DEFAULT
# 371 "data/maps/LilycoveCity/scripts.pory"
	return
# 372 "data/maps/LilycoveCity/scripts.pory"

# 373 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanPokemonLeague::
# 374 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_BrendanBattleFrontier
# 375 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 376 "data/maps/LilycoveCity/scripts.pory"
	return
# 377 "data/maps/LilycoveCity/scripts.pory"

# 378 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanBattleFrontier::
# 379 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 380 "data/maps/LilycoveCity/scripts.pory"
	return
# 381 "data/maps/LilycoveCity/scripts.pory"

# 382 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RivalFlyAway::
# 383 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 384 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 385 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 386 "data/maps/LilycoveCity/scripts.pory"
	delay 50
# 387 "data/maps/LilycoveCity/scripts.pory"
	setfieldeffectargument 0, 1
# 388 "data/maps/LilycoveCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 389 "data/maps/LilycoveCity/scripts.pory"
	delay 15
# 390 "data/maps/LilycoveCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 391 "data/maps/LilycoveCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 392 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 393 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 394 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 395 "data/maps/LilycoveCity/scripts.pory"
	release
# 396 "data/maps/LilycoveCity/scripts.pory"
	end
# 397 "data/maps/LilycoveCity/scripts.pory"

# 398 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SchoolKidM::
# 399 "data/maps/LilycoveCity/scripts.pory"
	lock
# 400 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 401 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DoYouKnowAboutBerryBlender, MSGBOX_YESNO
# 402 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, LilycoveCity_EventScript_KnowAboutBerryBlender
# 403 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DontKnowAboutBerryBlender
# 404 "data/maps/LilycoveCity/scripts.pory"
	release
# 405 "data/maps/LilycoveCity/scripts.pory"
	end
# 406 "data/maps/LilycoveCity/scripts.pory"

# 407 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_KnowAboutBerryBlender::
# 408 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_FasterSpinBetterPokeblocks, MSGBOX_DEFAULT
# 409 "data/maps/LilycoveCity/scripts.pory"
	return
# 410 "data/maps/LilycoveCity/scripts.pory"

# 411 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DontKnowAboutBerryBlender::
# 412 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ExplainBerryBlender, MSGBOX_DEFAULT
# 413 "data/maps/LilycoveCity/scripts.pory"
	return
# 414 "data/maps/LilycoveCity/scripts.pory"

# 415 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayShoppingLetsBattle:
# 416 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Oh, hey?\n"
# 417 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, are you shopping, too?\p"
# 418 "data/maps/LilycoveCity/scripts.pory"
	.string "I bought a whole bunch of DOLLS and\n"
# 419 "data/maps/LilycoveCity/scripts.pory"
	.string "POSTERS.\p"
# 420 "data/maps/LilycoveCity/scripts.pory"
	.string "Of course, I've also caught a lot of\n"
# 421 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON, and I'm raising them\l"
# 422 "data/maps/LilycoveCity/scripts.pory"
	.string "properly, too.\p"
# 423 "data/maps/LilycoveCity/scripts.pory"
	.string "Actually, I'm more worried if you're\n"
# 424 "data/maps/LilycoveCity/scripts.pory"
	.string "raising POKéMON properly, {PLAYER}{KUN}.\p"
# 425 "data/maps/LilycoveCity/scripts.pory"
	.string "I'll battle with you, so you can show\n"
# 426 "data/maps/LilycoveCity/scripts.pory"
	.string "me your POKéMON, {PLAYER}{KUN}.$"
# 427 "data/maps/LilycoveCity/scripts.pory"

# 428 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayNotRaisingPokemon:
# 429 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Oh, why? {PLAYER}{KUN}, haven't you\n"
# 430 "data/maps/LilycoveCity/scripts.pory"
	.string "been raising your POKéMON?\p"
# 431 "data/maps/LilycoveCity/scripts.pory"
	.string "That's not a very good showing as a\n"
# 432 "data/maps/LilycoveCity/scripts.pory"
	.string "TRAINER…$"
# 433 "data/maps/LilycoveCity/scripts.pory"

# 434 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayBattleMe:
# 435 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Come on, battle with me, so I can\n"
# 436 "data/maps/LilycoveCity/scripts.pory"
	.string "check out your POKéMON!$"
# 437 "data/maps/LilycoveCity/scripts.pory"

# 438 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayWontBeBeaten:
# 439 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: The POKéMON I raised won't be\n"
# 440 "data/maps/LilycoveCity/scripts.pory"
	.string "beaten by your POKéMON, {PLAYER}{KUN}!$"
# 441 "data/maps/LilycoveCity/scripts.pory"

# 442 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayDefeat:
# 443 "data/maps/LilycoveCity/scripts.pory"
	.string "… … … … … … … …\p"
# 444 "data/maps/LilycoveCity/scripts.pory"
	.string "I remember the battle I had with you,\n"
# 445 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, on ROUTE 103.\p"
# 446 "data/maps/LilycoveCity/scripts.pory"
	.string "That battle helped you become this\n"
# 447 "data/maps/LilycoveCity/scripts.pory"
	.string "strong, {PLAYER}{KUN}, didn't it?$"
# 448 "data/maps/LilycoveCity/scripts.pory"

# 449 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayGoingBackToLittleroot:
# 450 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: I'm thinking of going back to\n"
# 451 "data/maps/LilycoveCity/scripts.pory"
	.string "LITTLEROOT soon.\p"
# 452 "data/maps/LilycoveCity/scripts.pory"
	.string "I've caught a decent group of POKéMON,\n"
# 453 "data/maps/LilycoveCity/scripts.pory"
	.string "and my POKéDEX is coming along, so\l"
# 454 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going home to show my dad.$"
# 455 "data/maps/LilycoveCity/scripts.pory"

# 456 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToCollectBadges:
# 457 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 458 "data/maps/LilycoveCity/scripts.pory"
	.string "Collect all the GYM BADGES and take\n"
# 459 "data/maps/LilycoveCity/scripts.pory"
	.string "the POKéMON LEAGUE challenge?\p"
# 460 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, while you're collecting BADGES,\n"
# 461 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'm going to work on my\l"
# 462 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX. I'll complete it before you!\p"
# 463 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 464 "data/maps/LilycoveCity/scripts.pory"

# 465 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToPokemonLeague:
# 466 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 467 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the POKéMON LEAGUE\n"
# 468 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 469 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 470 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 471 "data/maps/LilycoveCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 472 "data/maps/LilycoveCity/scripts.pory"
	.string "but I'll finish my POKéDEX before you!\p"
# 473 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 474 "data/maps/LilycoveCity/scripts.pory"

# 475 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToBattleFrontier:
# 476 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 477 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the BATTLE FRONTIER\n"
# 478 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 479 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 480 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 481 "data/maps/LilycoveCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 482 "data/maps/LilycoveCity/scripts.pory"
	.string "but I'll finish my POKéDEX before you!\p"
# 483 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 484 "data/maps/LilycoveCity/scripts.pory"

# 485 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanShoppingLetsBattle:
# 486 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Oh, hey, it's {PLAYER}.\p"
# 487 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm running an errand for my dad.\n"
# 488 "data/maps/LilycoveCity/scripts.pory"
	.string "No, I'm not buying any DOLLS.\p"
# 489 "data/maps/LilycoveCity/scripts.pory"
	.string "Anyways, it's been a while.\p"
# 490 "data/maps/LilycoveCity/scripts.pory"
	.string "Want to have a battle to see who's been\n"
# 491 "data/maps/LilycoveCity/scripts.pory"
	.string "raising POKéMON better?$"
# 492 "data/maps/LilycoveCity/scripts.pory"

# 493 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanNoConfidence:
# 494 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Oh, what's the matter?\n"
# 495 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't have the confidence?$"
# 496 "data/maps/LilycoveCity/scripts.pory"

# 497 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanBattleMe:
# 498 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Want to battle to see who's\n"
# 499 "data/maps/LilycoveCity/scripts.pory"
	.string "been raising POKéMON better?$"
# 500 "data/maps/LilycoveCity/scripts.pory"

# 501 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanWontBeBeaten:
# 502 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Aww, but you know I'm not\n"
# 503 "data/maps/LilycoveCity/scripts.pory"
	.string "going to lose to no {PLAYER}.$"
# 504 "data/maps/LilycoveCity/scripts.pory"

# 505 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanDefeat:
# 506 "data/maps/LilycoveCity/scripts.pory"
	.string "Humph…\n"
# 507 "data/maps/LilycoveCity/scripts.pory"
	.string "You've done a lot of raising.\p"
# 508 "data/maps/LilycoveCity/scripts.pory"
	.string "That stings a bit--I had a head start\n"
# 509 "data/maps/LilycoveCity/scripts.pory"
	.string "on you as a TRAINER…$"
# 510 "data/maps/LilycoveCity/scripts.pory"

# 511 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanGoingBackToLittleroot:
# 512 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: I…\n"
# 513 "data/maps/LilycoveCity/scripts.pory"
	.string "I plan on going home to LITTLEROOT.\p"
# 514 "data/maps/LilycoveCity/scripts.pory"
	.string "You know I'm helping out my dad on his\n"
# 515 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX. It's coming together pretty\l"
# 516 "data/maps/LilycoveCity/scripts.pory"
	.string "decently, so I should go show him.$"
# 517 "data/maps/LilycoveCity/scripts.pory"

# 518 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToCollectBadges:
# 519 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 520 "data/maps/LilycoveCity/scripts.pory"
	.string "Collect all the GYM BADGES and take\n"
# 521 "data/maps/LilycoveCity/scripts.pory"
	.string "the POKéMON LEAGUE challenge?\p"
# 522 "data/maps/LilycoveCity/scripts.pory"
	.string "Maybe I'll do that, too…\p"
# 523 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 524 "data/maps/LilycoveCity/scripts.pory"

# 525 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToPokemonLeague:
# 526 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 527 "data/maps/LilycoveCity/scripts.pory"
	.string "Since you're that strong, are you\n"
# 528 "data/maps/LilycoveCity/scripts.pory"
	.string "taking the POKéMON LEAGUE challenge?\p"
# 529 "data/maps/LilycoveCity/scripts.pory"
	.string "Heh, even me--if I trained my POKéMON\n"
# 530 "data/maps/LilycoveCity/scripts.pory"
	.string "a bit more, I should be stronger than\l"
# 531 "data/maps/LilycoveCity/scripts.pory"
	.string "you, {PLAYER}.\p"
# 532 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 533 "data/maps/LilycoveCity/scripts.pory"

# 534 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToBattleFrontier:
# 535 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 536 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the BATTLE FRONTIER\n"
# 537 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 538 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 539 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 540 "data/maps/LilycoveCity/scripts.pory"
	.string "Since you're that strong, you should\n"
# 541 "data/maps/LilycoveCity/scripts.pory"
	.string "consider the BATTLE FRONTIER.\p"
# 542 "data/maps/LilycoveCity/scripts.pory"
	.string "Heh, if I train my POKéMON a bit more,\n"
# 543 "data/maps/LilycoveCity/scripts.pory"
	.string "I'll get stronger than you, {PLAYER}.\p"
# 544 "data/maps/LilycoveCity/scripts.pory"
	.string "Maybe I should go to the BATTLE\n"
# 545 "data/maps/LilycoveCity/scripts.pory"
	.string "FRONTIER.\p"
# 546 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 547 "data/maps/LilycoveCity/scripts.pory"

# 548 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MovedLootIntoHideoutToday:
# 549 "data/maps/LilycoveCity/scripts.pory"
	.string "Fufufu…\p"
# 550 "data/maps/LilycoveCity/scripts.pory"
	.string "We moved more loot into our secret\n"
# 551 "data/maps/LilycoveCity/scripts.pory"
	.string "HIDEOUT today…\p"
# 552 "data/maps/LilycoveCity/scripts.pory"
	.string "Wh-who are you?!\n"
# 553 "data/maps/LilycoveCity/scripts.pory"
	.string "I was just talking to myself!$"
# 554 "data/maps/LilycoveCity/scripts.pory"

# 555 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ChanceToDoBigThings:
# 556 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm just a GRUNT, so I don't know what\n"
# 557 "data/maps/LilycoveCity/scripts.pory"
	.string "the BOSS is thinking…\p"
# 558 "data/maps/LilycoveCity/scripts.pory"
	.string "But being on TEAM AQUA, I know I'll get\n"
# 559 "data/maps/LilycoveCity/scripts.pory"
	.string "the chance to do big things!\p"
# 560 "data/maps/LilycoveCity/scripts.pory"
	.string "Wh-who are you?!\n"
# 561 "data/maps/LilycoveCity/scripts.pory"
	.string "I was just talking to myself!$"
# 562 "data/maps/LilycoveCity/scripts.pory"

# 563 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DontGoNearCaveInCove:
# 564 "data/maps/LilycoveCity/scripts.pory"
	.string "Hey, you!\p"
# 565 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't go near the cave in the cove!\p"
# 566 "data/maps/LilycoveCity/scripts.pory"
	.string "Why? You don't need a reason why!\n"
# 567 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an adult, so you just listen to me!$"
# 568 "data/maps/LilycoveCity/scripts.pory"

# 569 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_IfWorldBecomesOurs:
# 570 "data/maps/LilycoveCity/scripts.pory"
	.string "If this whole wide world becomes ours,\n"
# 571 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA's, it will be a happier\l"
# 572 "data/maps/LilycoveCity/scripts.pory"
	.string "place for POKéMON, too.$"
# 573 "data/maps/LilycoveCity/scripts.pory"

# 574 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_WailmerLeapOutOfWater:
# 575 "data/maps/LilycoveCity/scripts.pory"
	.string "There! WAILMER!\n"
# 576 "data/maps/LilycoveCity/scripts.pory"
	.string "Leap out of the water now!$"
# 577 "data/maps/LilycoveCity/scripts.pory"

# 578 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GetLostMessingUpTraining:
# 579 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? What do you want?\p"
# 580 "data/maps/LilycoveCity/scripts.pory"
	.string "You're messing up our training,\n"
# 581 "data/maps/LilycoveCity/scripts.pory"
	.string "so can you, like, get lost?$"
# 582 "data/maps/LilycoveCity/scripts.pory"

# 583 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallInTown:
# 584 "data/maps/LilycoveCity/scripts.pory"
	.string "There's a POKéMON CONTEST HALL\n"
# 585 "data/maps/LilycoveCity/scripts.pory"
	.string "right in this here town. \p"
# 586 "data/maps/LilycoveCity/scripts.pory"
	.string "That means well-raised POKéMON will\n"
# 587 "data/maps/LilycoveCity/scripts.pory"
	.string "come from all over the country.\p"
# 588 "data/maps/LilycoveCity/scripts.pory"
	.string "My heart swells with excitement!$"
# 589 "data/maps/LilycoveCity/scripts.pory"

# 590 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_StrangeCaveInCove:
# 591 "data/maps/LilycoveCity/scripts.pory"
	.string "Have you seen that strange cave in\n"
# 592 "data/maps/LilycoveCity/scripts.pory"
	.string "the cove at the edge of town?$"
# 593 "data/maps/LilycoveCity/scripts.pory"

# 594 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GoingToMoveDeleterForHMs:
# 595 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going to teach my POKéMON some new\n"
# 596 "data/maps/LilycoveCity/scripts.pory"
	.string "moves for entering a CONTEST.\p"
# 597 "data/maps/LilycoveCity/scripts.pory"
	.string "So, I'm going to see the MOVE DELETER\n"
# 598 "data/maps/LilycoveCity/scripts.pory"
	.string "and make it forget HM moves.$"
# 599 "data/maps/LilycoveCity/scripts.pory"

# 600 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImFromKanto:
# 601 "data/maps/LilycoveCity/scripts.pory"
	.string "I came from KANTO.\p"
# 602 "data/maps/LilycoveCity/scripts.pory"
	.string "The HOENN region is beautiful with\n"
# 603 "data/maps/LilycoveCity/scripts.pory"
	.string "all its water and verdant nature.\p"
# 604 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? Wait a second…\p"
# 605 "data/maps/LilycoveCity/scripts.pory"
	.string "Could there be rare POKéMON that live\n"
# 606 "data/maps/LilycoveCity/scripts.pory"
	.string "only in this area?$"
# 607 "data/maps/LilycoveCity/scripts.pory"

# 608 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaBeenTrainingWailmer:
# 609 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA's been training their\n"
# 610 "data/maps/LilycoveCity/scripts.pory"
	.string "WAILMER in the cove.\p"
# 611 "data/maps/LilycoveCity/scripts.pory"
	.string "We SAILORS can't get our boats out\n"
# 612 "data/maps/LilycoveCity/scripts.pory"
	.string "to sea with them in the way!$"
# 613 "data/maps/LilycoveCity/scripts.pory"

# 614 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeonePuntedTeamAquaOut:
# 615 "data/maps/LilycoveCity/scripts.pory"
	.string "Ahoy, did you know?\p"
# 616 "data/maps/LilycoveCity/scripts.pory"
	.string "Someone punted TEAM AQUA out of\n"
# 617 "data/maps/LilycoveCity/scripts.pory"
	.string "the way for us!\p"
# 618 "data/maps/LilycoveCity/scripts.pory"
	.string "That got the WAILMER out of the cove,\n"
# 619 "data/maps/LilycoveCity/scripts.pory"
	.string "so we can get our boats out again.$"
# 620 "data/maps/LilycoveCity/scripts.pory"

# 621 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeoneStoleMyPokemon:
# 622 "data/maps/LilycoveCity/scripts.pory"
	.string "I was taking a relaxing snooze at the\n"
# 623 "data/maps/LilycoveCity/scripts.pory"
	.string "seaside inn to the sound of waves…\p"
# 624 "data/maps/LilycoveCity/scripts.pory"
	.string "When someone stole my POKéMON!\p"
# 625 "data/maps/LilycoveCity/scripts.pory"
	.string "Who's the abductor?\n"
# 626 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA? Is it TEAM AQUA?$"
# 627 "data/maps/LilycoveCity/scripts.pory"

# 628 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MissingPokemonCameBack:
# 629 "data/maps/LilycoveCity/scripts.pory"
	.string "My missing POKéMON…\n"
# 630 "data/maps/LilycoveCity/scripts.pory"
	.string "It came back without me noticing!$"
# 631 "data/maps/LilycoveCity/scripts.pory"

# 632 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImArtDealer:
# 633 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an ART DEALER.\p"
# 634 "data/maps/LilycoveCity/scripts.pory"
	.string "I am a buyer and seller of fine art,\n"
# 635 "data/maps/LilycoveCity/scripts.pory"
	.string "especially paintings.\p"
# 636 "data/maps/LilycoveCity/scripts.pory"
	.string "I've heard that the MUSEUM here has\n"
# 637 "data/maps/LilycoveCity/scripts.pory"
	.string "magnificent works on exhibit…$"
# 638 "data/maps/LilycoveCity/scripts.pory"

# 639 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SeaRemainsForeverYoung:
# 640 "data/maps/LilycoveCity/scripts.pory"
	.string "Even as we grow old and wrinkled,\n"
# 641 "data/maps/LilycoveCity/scripts.pory"
	.string "the sea remains forever young with\l"
# 642 "data/maps/LilycoveCity/scripts.pory"
	.string "the vivid brilliance of life…\p"
# 643 "data/maps/LilycoveCity/scripts.pory"
	.string "Fwohoho fwohohohoho…$"
# 644 "data/maps/LilycoveCity/scripts.pory"

# 645 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SixtyYearsAgoHusbandProposed:
# 646 "data/maps/LilycoveCity/scripts.pory"
	.string "It was sixty years ago that my husband\n"
# 647 "data/maps/LilycoveCity/scripts.pory"
	.string "proposed to me here.\l"
# 648 "data/maps/LilycoveCity/scripts.pory"
	.string "The sea remains as beautiful as ever.\p"
# 649 "data/maps/LilycoveCity/scripts.pory"
	.string "Mufufufu mufufufufufu…$"
# 650 "data/maps/LilycoveCity/scripts.pory"

# 651 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaRenovatedCavern:
# 652 "data/maps/LilycoveCity/scripts.pory"
	.string "Hm, you know of the peculiar cavern\n"
# 653 "data/maps/LilycoveCity/scripts.pory"
	.string "in this cove?\p"
# 654 "data/maps/LilycoveCity/scripts.pory"
	.string "That had been a natural formation,\n"
# 655 "data/maps/LilycoveCity/scripts.pory"
	.string "but then that TEAM AQUA lot came\l"
# 656 "data/maps/LilycoveCity/scripts.pory"
	.string "along and made their renovations.\p"
# 657 "data/maps/LilycoveCity/scripts.pory"
	.string "They call themselves\n"
# 658 "data/maps/LilycoveCity/scripts.pory"
	.string "the “nature-loving TEAM AQUA”!\p"
# 659 "data/maps/LilycoveCity/scripts.pory"
	.string "But what they do and what they say\n"
# 660 "data/maps/LilycoveCity/scripts.pory"
	.string "don't match at all!$"
# 661 "data/maps/LilycoveCity/scripts.pory"

# 662 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaLotGoneForGood:
# 663 "data/maps/LilycoveCity/scripts.pory"
	.string "That cave in the cove…\p"
# 664 "data/maps/LilycoveCity/scripts.pory"
	.string "I didn't notice it right away,\n"
# 665 "data/maps/LilycoveCity/scripts.pory"
	.string "but it's completely empty now.\p"
# 666 "data/maps/LilycoveCity/scripts.pory"
	.string "That TEAM AQUA lot, they must\n"
# 667 "data/maps/LilycoveCity/scripts.pory"
	.string "have gone away for good.$"
# 668 "data/maps/LilycoveCity/scripts.pory"

# 669 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_CitySign:
# 670 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY\p"
# 671 "data/maps/LilycoveCity/scripts.pory"
	.string "“Where the land ends and the\n"
# 672 "data/maps/LilycoveCity/scripts.pory"
	.string "sea begins.”$"
# 673 "data/maps/LilycoveCity/scripts.pory"

# 674 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallSign:
# 675 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON CONTEST HALL\n"
# 676 "data/maps/LilycoveCity/scripts.pory"
	.string "“The gathering place for TRAINERS!”$"
# 677 "data/maps/LilycoveCity/scripts.pory"

# 678 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MotelSign:
# 679 "data/maps/LilycoveCity/scripts.pory"
	.string "COVE LILY MOTEL\p"
# 680 "data/maps/LilycoveCity/scripts.pory"
	.string "“Remember us as COVE LILY of\n"
# 681 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE.”$"
# 682 "data/maps/LilycoveCity/scripts.pory"

# 683 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSign:
# 684 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE MUSEUM\p"
# 685 "data/maps/LilycoveCity/scripts.pory"
	.string "“POKéMON Masterpiece Collection\n"
# 686 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 687 "data/maps/LilycoveCity/scripts.pory"

# 688 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSignPlayersExhibit:
# 689 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE MUSEUM\p"
# 690 "data/maps/LilycoveCity/scripts.pory"
	.string "“{PLAYER}'s POKéMON Collection\n"
# 691 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 692 "data/maps/LilycoveCity/scripts.pory"

# 693 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSignUnderConstruction:
# 694 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p"
# 695 "data/maps/LilycoveCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 696 "data/maps/LilycoveCity/scripts.pory"
	.string "construction in SLATEPORT CITY.\p"
# 697 "data/maps/LilycoveCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 698 "data/maps/LilycoveCity/scripts.pory"
	.string "shortly.”$"
# 699 "data/maps/LilycoveCity/scripts.pory"

# 700 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSign:
# 701 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p"
# 702 "data/maps/LilycoveCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 703 "data/maps/LilycoveCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 704 "data/maps/LilycoveCity/scripts.pory"

# 705 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TrainerFanClubSign:
# 706 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON TRAINER FAN CLUB\p"
# 707 "data/maps/LilycoveCity/scripts.pory"
	.string "The names of TRAINERS are scribbled\n"
# 708 "data/maps/LilycoveCity/scripts.pory"
	.string "all over the sign…$"
# 709 "data/maps/LilycoveCity/scripts.pory"

# 710 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DepartmentStoreSign:
# 711 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE DEPARTMENT STORE\p"
# 712 "data/maps/LilycoveCity/scripts.pory"
	.string "“Overflowing with great merchandise\n"
# 713 "data/maps/LilycoveCity/scripts.pory"
	.string "and excitement!\p"
# 714 "data/maps/LilycoveCity/scripts.pory"
	.string "“A great place to find that something\n"
# 715 "data/maps/LilycoveCity/scripts.pory"
	.string "you need!”$"
# 716 "data/maps/LilycoveCity/scripts.pory"

# 717 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MoveDeletersHouseSign:
# 718 "data/maps/LilycoveCity/scripts.pory"
	.string "MOVE DELETER'S HOUSE\p"
# 719 "data/maps/LilycoveCity/scripts.pory"
	.string "“Unwanted POKéMON moves deleted.”$"
# 720 "data/maps/LilycoveCity/scripts.pory"

# 721 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DoYouKnowAboutBerryBlender:
# 722 "data/maps/LilycoveCity/scripts.pory"
	.string "Do you know about the machine\n"
# 723 "data/maps/LilycoveCity/scripts.pory"
	.string "BERRY BLENDER?$"
# 724 "data/maps/LilycoveCity/scripts.pory"

# 725 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_FasterSpinBetterPokeblocks:
# 726 "data/maps/LilycoveCity/scripts.pory"
	.string "People have to work together to get it\n"
# 727 "data/maps/LilycoveCity/scripts.pory"
	.string "to spin faster.\p"
# 728 "data/maps/LilycoveCity/scripts.pory"
	.string "The faster you can make it spin, the\n"
# 729 "data/maps/LilycoveCity/scripts.pory"
	.string "better {POKEBLOCK}S you can get, I've heard.$"
# 730 "data/maps/LilycoveCity/scripts.pory"

# 731 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ExplainBerryBlender:
# 732 "data/maps/LilycoveCity/scripts.pory"
	.string "It's used for making a kind of candy\n"
# 733 "data/maps/LilycoveCity/scripts.pory"
	.string "called a {POKEBLOCK}.\p"
# 734 "data/maps/LilycoveCity/scripts.pory"
	.string "If you give a good {POKEBLOCK} to a POKéMON,\n"
# 735 "data/maps/LilycoveCity/scripts.pory"
	.string "its condition will improve by a lot.$"
# 736 "data/maps/LilycoveCity/scripts.pory"

# 737 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HeardTowerCalledSkyPillar:
# 738 "data/maps/LilycoveCity/scripts.pory"
	.string "I heard there's a tower somewhere out\n"
# 739 "data/maps/LilycoveCity/scripts.pory"
	.string "on the sea routes.\p"
# 740 "data/maps/LilycoveCity/scripts.pory"
	.string "It's called the SKY PILLAR, I hear.$"
# 741 "data/maps/LilycoveCity/scripts.pory"

# 742 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SawTallTowerOnRoute131:
# 743 "data/maps/LilycoveCity/scripts.pory"
	.string "I saw this tall tower somewhere\n"
# 744 "data/maps/LilycoveCity/scripts.pory"
	.string "around ROUTE 131.\p"
# 745 "data/maps/LilycoveCity/scripts.pory"
	.string "Could that possibly be…?$"
# 746 "data/maps/LilycoveCity/scripts.pory"

# 747 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_JustArrivedAndSawRarePokemon:
# 748 "data/maps/LilycoveCity/scripts.pory"
	.string "We just arrived here on our\n"
# 749 "data/maps/LilycoveCity/scripts.pory"
	.string "honeymoon vacation.\p"
# 750 "data/maps/LilycoveCity/scripts.pory"
	.string "We happened to see a DRAGON-type\n"
# 751 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON flying way up in the sky.\p"
# 752 "data/maps/LilycoveCity/scripts.pory"
	.string "Do cool POKéMON like that live in\n"
# 753 "data/maps/LilycoveCity/scripts.pory"
	.string "the HOENN region?$"
# 754 "data/maps/LilycoveCity/scripts.pory"

# 755 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HoneymoonVowToSeeRarePokemon:
# 756 "data/maps/LilycoveCity/scripts.pory"
	.string "On our honeymoon, we vowed to see as\n"
# 757 "data/maps/LilycoveCity/scripts.pory"
	.string "many rare POKéMON as we can.\p"
# 758 "data/maps/LilycoveCity/scripts.pory"
	.string "So we were delighted to see a rare\n"
# 759 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON as soon as we arrived.\p"
# 760 "data/maps/LilycoveCity/scripts.pory"
	.string "I mean, we are totally happy!$"

LilycoveCity_EventScript_EmoBully::
# 765 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 766 "data/maps/LilycoveCity/scripts.pory"
	fadenewbgm MUS_NONE
# 767 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BullyMan1, MSGBOX_AUTOCLOSE
# 768 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 769 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BullyKid1, MSGBOX_AUTOCLOSE
# 770 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 771 "data/maps/LilycoveCity/scripts.pory"
	applymovement 26, Common_Movement_FaceDown
# 772 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 26
# 773 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 774 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BullyGirl1, MSGBOX_AUTOCLOSE
# 775 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 776 "data/maps/LilycoveCity/scripts.pory"
	applymovement 26, Common_Movement_FaceRight
# 777 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 26
# 778 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BullyMan2, MSGBOX_AUTOCLOSE
# 779 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 780 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BullyKid2, MSGBOX_AUTOCLOSE
# 781 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 782 "data/maps/LilycoveCity/scripts.pory"
	applymovement 26, Common_Movement_FaceDown
# 783 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 26
# 784 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 785 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BullyGirl2, MSGBOX_AUTOCLOSE
# 786 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 787 "data/maps/LilycoveCity/scripts.pory"
	applymovement 26, Common_Movement_FaceRight
# 788 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 26
# 789 "data/maps/LilycoveCity/scripts.pory"
	delay 20
# 790 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, Common_Movement_FaceDown
# 791 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 23
# 792 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BullyMan3, MSGBOX_AUTOCLOSE
# 793 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 794 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, Common_Movement_WalkRight
# 795 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 23
# 796 "data/maps/LilycoveCity/scripts.pory"
	delay 30
# 797 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_Emo1, MSGBOX_AUTOCLOSE
# 798 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 799 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_EmoBully_Text_0, MSGBOX_AUTOCLOSE
# 800 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 801 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_EmoBully_Text_1, MSGBOX_AUTOCLOSE
# 802 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 803 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, Common_Movement_FaceLeft
# 804 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 23
# 805 "data/maps/LilycoveCity/scripts.pory"
	applymovement 24, Common_Movement_WalkRight
# 806 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 807 "data/maps/LilycoveCity/scripts.pory"
	applymovement 25, Common_Movement_WalkRight
# 808 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 25
# 809 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 810 "data/maps/LilycoveCity/scripts.pory"
	playse SE_BALL_OPEN
# 811 "data/maps/LilycoveCity/scripts.pory"
	fadescreen FADE_TO_WHITE
# 812 "data/maps/LilycoveCity/scripts.pory"
	addobject 27
# 813 "data/maps/LilycoveCity/scripts.pory"
	addobject 28
# 814 "data/maps/LilycoveCity/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 2
# 815 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 816 "data/maps/LilycoveCity/scripts.pory"
	playse SE_PIN
# 817 "data/maps/LilycoveCity/scripts.pory"
	applymovement 24, Common_Movement_ExclamationMark
# 818 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 24
# 819 "data/maps/LilycoveCity/scripts.pory"
	applymovement 25, Common_Movement_ExclamationMark
# 820 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 25
# 821 "data/maps/LilycoveCity/scripts.pory"
	delay 30
# 822 "data/maps/LilycoveCity/scripts.pory"
	applymovement 24, LilycoveCity_Movement_WalkBackLeft
# 823 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 824 "data/maps/LilycoveCity/scripts.pory"
	applymovement 27, LilycoveCity_Movement_Typhlosion
# 825 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 27
# 826 "data/maps/LilycoveCity/scripts.pory"
	playmoncry SPECIES_TYPHLOSION_HISUI, CRY_MODE_ENCOUNTER
# 827 "data/maps/LilycoveCity/scripts.pory"
	delay 30
# 828 "data/maps/LilycoveCity/scripts.pory"
	applymovement 25, LilycoveCity_Movement_WalkBackLeft
# 829 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 830 "data/maps/LilycoveCity/scripts.pory"
	applymovement 28, LilycoveCity_Movement_Morgrem
# 831 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 28
# 832 "data/maps/LilycoveCity/scripts.pory"
	playmoncry SPECIES_MORGREM, CRY_MODE_ENCOUNTER
# 833 "data/maps/LilycoveCity/scripts.pory"
	delay 20
# 834 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_EmoBully_Text_2, MSGBOX_AUTOCLOSE
# 835 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 836 "data/maps/LilycoveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 837 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 838 "data/maps/LilycoveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_Movement_WalkBackUp
# 839 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 840 "data/maps/LilycoveCity/scripts.pory"
	applymovement 24, LilycoveCity_Movement_BullyMan
# 841 "data/maps/LilycoveCity/scripts.pory"
	delay 20
# 842 "data/maps/LilycoveCity/scripts.pory"
	applymovement 25, LilycoveCity_Movement_BullyKid
# 843 "data/maps/LilycoveCity/scripts.pory"
	delay 30
# 844 "data/maps/LilycoveCity/scripts.pory"
	applymovement 26, LilycoveCity_Movement_BullyGirl
# 845 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 26
# 846 "data/maps/LilycoveCity/scripts.pory"
	removeobject 24
# 847 "data/maps/LilycoveCity/scripts.pory"
	removeobject 25
# 848 "data/maps/LilycoveCity/scripts.pory"
	removeobject 26
# 849 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_END, FALSE
# 850 "data/maps/LilycoveCity/scripts.pory"
	applymovement 27, Common_Movement_FaceRight
# 851 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 27
# 852 "data/maps/LilycoveCity/scripts.pory"
	applymovement 28, Common_Movement_FaceUp
# 853 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 28
# 854 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_EmoBully_Text_3, MSGBOX_AUTOCLOSE
# 855 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 856 "data/maps/LilycoveCity/scripts.pory"
	playmoncry SPECIES_TYPHLOSION_HISUI, CRY_MODE_ENCOUNTER
# 857 "data/maps/LilycoveCity/scripts.pory"
	delay 20
# 858 "data/maps/LilycoveCity/scripts.pory"
	applymovement 27, LilycoveCity_Movement_EnterPokeball
# 859 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 27
# 860 "data/maps/LilycoveCity/scripts.pory"
	removeobject 27
# 861 "data/maps/LilycoveCity/scripts.pory"
	delay 20
# 862 "data/maps/LilycoveCity/scripts.pory"
	playmoncry SPECIES_MORGREM, CRY_MODE_ENCOUNTER
# 863 "data/maps/LilycoveCity/scripts.pory"
	delay 30
# 864 "data/maps/LilycoveCity/scripts.pory"
	applymovement 28, LilycoveCity_Movement_EnterPokeball
# 865 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 28
# 866 "data/maps/LilycoveCity/scripts.pory"
	removeobject 28
# 867 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 868 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, LilycoveCity_Movement_Emo
# 869 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 23
# 870 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_EmoBully_Text_4, MSGBOX_AUTOCLOSE
# 871 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 872 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, Common_Movement_WalkRight
# 873 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 23
# 874 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_Emo2, MSGBOX_AUTOCLOSE
# 875 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 876 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, Common_Movement_FaceDown
# 877 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 23
# 878 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_Emo3, MSGBOX_AUTOCLOSE
# 879 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 880 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, Common_Movement_FaceLeft
# 881 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 23
# 882 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_Emo4, MSGBOX_AUTOCLOSE
# 883 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 884 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, LilycoveCity_Movement_EmoLeave
# 885 "data/maps/LilycoveCity/scripts.pory"
	delay 20
# 886 "data/maps/LilycoveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 887 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 23
# 888 "data/maps/LilycoveCity/scripts.pory"
	removeobject 23
# 889 "data/maps/LilycoveCity/scripts.pory"
	delay 20
# 890 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 891 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_MISA_STATE, 8
# 892 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_HIDE_EMO_LILYCOVE
# 893 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_RIVAL_POKEMON
# 894 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	end


# 973 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_Typhlosion:
# 974 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 975 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_down
# 976 "data/maps/LilycoveCity/scripts.pory"
	face_left
	step_end

# 979 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_Morgrem:
# 980 "data/maps/LilycoveCity/scripts.pory"
	walk_left
	step_end

# 983 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_BullyMan:
# 984 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 984 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 984 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 984 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 984 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 984 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 984 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 984 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 984 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 984 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 984 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 984 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
	step_end

# 987 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_BullyKid:
# 988 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_up
# 989 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 989 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 989 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 989 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 989 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 989 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 989 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 989 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 989 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 989 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 989 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
	step_end

# 992 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_BullyGirl:
# 993 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_down
# 994 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 994 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 994 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 994 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 994 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 994 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 994 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 994 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 994 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 994 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 994 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
	step_end

# 997 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_Emo:
# 998 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 998 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 998 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 998 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 999 "data/maps/LilycoveCity/scripts.pory"
	face_up
	step_end

# 1002 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_EmoLeave:
# 1003 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 1003 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 1003 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 1003 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 1003 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 1003 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 1003 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 1003 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 1003 "data/maps/LilycoveCity/scripts.pory"
	walk_left
	step_end

# 1006 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_WalkBackRight:
# 1007 "data/maps/LilycoveCity/scripts.pory"
	lock_facing_direction
# 1008 "data/maps/LilycoveCity/scripts.pory"
	walk_right
# 1009 "data/maps/LilycoveCity/scripts.pory"
	unlock_facing_direction
	step_end

# 1012 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_WalkBackLeft:
# 1013 "data/maps/LilycoveCity/scripts.pory"
	lock_facing_direction
# 1014 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 1015 "data/maps/LilycoveCity/scripts.pory"
	unlock_facing_direction
	step_end

# 1018 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_WalkBackUp:
# 1019 "data/maps/LilycoveCity/scripts.pory"
	lock_facing_direction
# 1020 "data/maps/LilycoveCity/scripts.pory"
	walk_up
# 1021 "data/maps/LilycoveCity/scripts.pory"
	unlock_facing_direction
	step_end

# 1024 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_EnterPokeball:
# 1025 "data/maps/LilycoveCity/scripts.pory"
	enter_pokeball
	step_end

LilycoveCity_EventScript_EmoBully_Text_0:
# 799 "data/maps/LilycoveCity/scripts.pory"
	.string "What was that?!$"

LilycoveCity_EventScript_EmoBully_Text_1:
# 801 "data/maps/LilycoveCity/scripts.pory"
	.string "You..!$"

LilycoveCity_EventScript_EmoBully_Text_2:
# 834 "data/maps/LilycoveCity/scripts.pory"
	.string "L-Let's get out of here!$"

LilycoveCity_EventScript_EmoBully_Text_3:
# 854 "data/maps/LilycoveCity/scripts.pory"
	.string "JAMES: Thanks, guys.$"

LilycoveCity_EventScript_EmoBully_Text_4:
# 870 "data/maps/LilycoveCity/scripts.pory"
	.string "JAMES: ...\p So you saw that.$"

LilycoveCity_Text_BullyMan1::
# 898 "data/maps/LilycoveCity/scripts.pory"
	.string "BOY: What are you doing in LILYCOVE?\n I'm surprised a little nerd like you\l actually left your house!$"

LilycoveCity_Text_BullyKid1::
# 904 "data/maps/LilycoveCity/scripts.pory"
	.string "KID: Haha, for real!\n Are you still acting like a weirdo?\l “Oh, the abyss is calling me..”$"

LilycoveCity_Text_BullyGirl1::
# 910 "data/maps/LilycoveCity/scripts.pory"
	.string "GIRL: Hahaha! He seriously says that!\n So lame.$"

LilycoveCity_Text_BullyMan2::
# 915 "data/maps/LilycoveCity/scripts.pory"
	.string "BOY: Seriously, I thought I'd never\n have to see you and your lame acting\l again after I moved.\p Acting all cocky just because your\n mom's a strong TRAINER.$"

LilycoveCity_Text_BullyKid2::
# 923 "data/maps/LilycoveCity/scripts.pory"
	.string "KID: Yeah!\n You probably got all those badges\l using your mommy's POKéMON.$"

LilycoveCity_Text_BullyGirl2::
# 929 "data/maps/LilycoveCity/scripts.pory"
	.string "GIRL: Hahaha! He probably did!\n What a nepo baby.$"

LilycoveCity_Text_BullyMan3::
# 934 "data/maps/LilycoveCity/scripts.pory"
	.string "BOY: What?\n Too scared to say anything?\p Don't forget how you had to drop\n out of the TRAINER SCHOOL, loser.\p How about you quit acting like\n you're a protagonist already?\p Grow up!$"

LilycoveCity_Text_Emo1::
# 944 "data/maps/LilycoveCity/scripts.pory"
	.string "JAMES: ...\p I don't have anything to say\n to you.$"

LilycoveCity_Text_Emo2::
# 950 "data/maps/LilycoveCity/scripts.pory"
	.string "That guy...\n Was the reason I stopped going\l to school.\p My mom found out what was happening\n and suddenly he moved away.\p I guess his friends still visit\n him out here.$"

LilycoveCity_Text_Emo3::
# 960 "data/maps/LilycoveCity/scripts.pory"
	.string "Either way, I'm...\n I'm a different person now.\l I have my friends with me.\p Even if...\p ...$"

LilycoveCity_Text_Emo4::
# 968 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm gonna go.\p See ya.$"
