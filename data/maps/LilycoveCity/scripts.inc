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
	goto LilycoveCity_EventScript_BattleMayTorchic
# 247 "data/maps/LilycoveCity/scripts.pory"
	end
# 248 "data/maps/LilycoveCity/scripts.pory"

# 249 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattleAgain::
# 250 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayBattleMe, MSGBOX_YESNO
# 251 "data/maps/LilycoveCity/scripts.pory"
	return
# 252 "data/maps/LilycoveCity/scripts.pory"

# 253 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattle::
# 254 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayShoppingLetsBattle, MSGBOX_YESNO
# 255 "data/maps/LilycoveCity/scripts.pory"
	return
# 256 "data/maps/LilycoveCity/scripts.pory"

# 257 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineMayBattle::
# 258 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 259 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayNotRaisingPokemon, MSGBOX_DEFAULT
# 260 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 261 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 262 "data/maps/LilycoveCity/scripts.pory"
	release
# 263 "data/maps/LilycoveCity/scripts.pory"
	end
# 264 "data/maps/LilycoveCity/scripts.pory"

# 265 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Brendan::
# 266 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 267 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattleAgain
# 268 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattle
# 269 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineBrendanBattle
# 270 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanWontBeBeaten, MSGBOX_DEFAULT
# 271 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_BattleBrendanTreecko
# 272 "data/maps/LilycoveCity/scripts.pory"
	end
# 273 "data/maps/LilycoveCity/scripts.pory"

# 274 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattleAgain::
# 275 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanBattleMe, MSGBOX_YESNO
# 276 "data/maps/LilycoveCity/scripts.pory"
	return
# 277 "data/maps/LilycoveCity/scripts.pory"

# 278 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattle::
# 279 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanShoppingLetsBattle, MSGBOX_YESNO
# 280 "data/maps/LilycoveCity/scripts.pory"
	return
# 281 "data/maps/LilycoveCity/scripts.pory"

# 282 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineBrendanBattle::
# 283 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 284 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 285 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 286 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 287 "data/maps/LilycoveCity/scripts.pory"
	release
# 288 "data/maps/LilycoveCity/scripts.pory"
	end
# 289 "data/maps/LilycoveCity/scripts.pory"

# 290 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTorchic::
# 291 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TORCHIC, LilycoveCity_Text_MayDefeat
# 292 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 293 "data/maps/LilycoveCity/scripts.pory"
	end
# 294 "data/maps/LilycoveCity/scripts.pory"

# 295 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTreecko::
# 296 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TREECKO, LilycoveCity_Text_BrendanDefeat
# 297 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 298 "data/maps/LilycoveCity/scripts.pory"
	end
# 299 "data/maps/LilycoveCity/scripts.pory"

# 300 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedMay::
# 301 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayGoingBackToLittleroot, MSGBOX_DEFAULT
# 302 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 303 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 304 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_MayCollectBadges
# 305 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_MayPokemonLeague
# 306 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 307 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
# 308 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 309 "data/maps/LilycoveCity/scripts.pory"
	end
# 310 "data/maps/LilycoveCity/scripts.pory"

# 311 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CheckFinalBadge::
# 312 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, LilycoveCity_EventScript_HasFinalBadge
# 313 "data/maps/LilycoveCity/scripts.pory"
	return
# 314 "data/maps/LilycoveCity/scripts.pory"

# 315 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HasFinalBadge::
# 316 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, TRUE
# 317 "data/maps/LilycoveCity/scripts.pory"
	return
# 318 "data/maps/LilycoveCity/scripts.pory"

# 319 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayCollectBadges::
# 320 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToCollectBadges, MSGBOX_DEFAULT
# 321 "data/maps/LilycoveCity/scripts.pory"
	return
# 322 "data/maps/LilycoveCity/scripts.pory"

# 323 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayPokemonLeague::
# 324 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_MayBattleFrontier
# 325 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 326 "data/maps/LilycoveCity/scripts.pory"
	return
# 327 "data/maps/LilycoveCity/scripts.pory"

# 328 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayBattleFrontier::
# 329 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 330 "data/maps/LilycoveCity/scripts.pory"
	return
# 331 "data/maps/LilycoveCity/scripts.pory"

# 332 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedBrendan::
# 333 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanGoingBackToLittleroot, MSGBOX_DEFAULT
# 334 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 335 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 336 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_BrendanCollectBadges
# 337 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_BrendanPokemonLeague
# 338 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 339 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
# 340 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 341 "data/maps/LilycoveCity/scripts.pory"
	end
# 342 "data/maps/LilycoveCity/scripts.pory"

# 343 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanCollectBadges::
# 344 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToCollectBadges, MSGBOX_DEFAULT
# 345 "data/maps/LilycoveCity/scripts.pory"
	return
# 346 "data/maps/LilycoveCity/scripts.pory"

# 347 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanPokemonLeague::
# 348 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_BrendanBattleFrontier
# 349 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 350 "data/maps/LilycoveCity/scripts.pory"
	return
# 351 "data/maps/LilycoveCity/scripts.pory"

# 352 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanBattleFrontier::
# 353 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 354 "data/maps/LilycoveCity/scripts.pory"
	return
# 355 "data/maps/LilycoveCity/scripts.pory"

# 356 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RivalFlyAway::
# 357 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 358 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 359 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 360 "data/maps/LilycoveCity/scripts.pory"
	delay 50
# 361 "data/maps/LilycoveCity/scripts.pory"
	setfieldeffectargument 0, 1
# 362 "data/maps/LilycoveCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 363 "data/maps/LilycoveCity/scripts.pory"
	delay 15
# 364 "data/maps/LilycoveCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 365 "data/maps/LilycoveCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 366 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 367 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 368 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 369 "data/maps/LilycoveCity/scripts.pory"
	release
# 370 "data/maps/LilycoveCity/scripts.pory"
	end
# 371 "data/maps/LilycoveCity/scripts.pory"

# 372 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SchoolKidM::
# 373 "data/maps/LilycoveCity/scripts.pory"
	lock
# 374 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 375 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DoYouKnowAboutBerryBlender, MSGBOX_YESNO
# 376 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, LilycoveCity_EventScript_KnowAboutBerryBlender
# 377 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DontKnowAboutBerryBlender
# 378 "data/maps/LilycoveCity/scripts.pory"
	release
# 379 "data/maps/LilycoveCity/scripts.pory"
	end
# 380 "data/maps/LilycoveCity/scripts.pory"

# 381 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_KnowAboutBerryBlender::
# 382 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_FasterSpinBetterPokeblocks, MSGBOX_DEFAULT
# 383 "data/maps/LilycoveCity/scripts.pory"
	return
# 384 "data/maps/LilycoveCity/scripts.pory"

# 385 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DontKnowAboutBerryBlender::
# 386 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ExplainBerryBlender, MSGBOX_DEFAULT
# 387 "data/maps/LilycoveCity/scripts.pory"
	return
# 388 "data/maps/LilycoveCity/scripts.pory"

# 389 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayShoppingLetsBattle:
# 390 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Oh, hey?\n"
# 391 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, are you shopping, too?\p"
# 392 "data/maps/LilycoveCity/scripts.pory"
	.string "I bought a whole bunch of DOLLS and\n"
# 393 "data/maps/LilycoveCity/scripts.pory"
	.string "POSTERS.\p"
# 394 "data/maps/LilycoveCity/scripts.pory"
	.string "Of course, I've also caught a lot of\n"
# 395 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON, and I'm raising them\l"
# 396 "data/maps/LilycoveCity/scripts.pory"
	.string "properly, too.\p"
# 397 "data/maps/LilycoveCity/scripts.pory"
	.string "Actually, I'm more worried if you're\n"
# 398 "data/maps/LilycoveCity/scripts.pory"
	.string "raising POKéMON properly, {PLAYER}{KUN}.\p"
# 399 "data/maps/LilycoveCity/scripts.pory"
	.string "I'll battle with you, so you can show\n"
# 400 "data/maps/LilycoveCity/scripts.pory"
	.string "me your POKéMON, {PLAYER}{KUN}.$"
# 401 "data/maps/LilycoveCity/scripts.pory"

# 402 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayNotRaisingPokemon:
# 403 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Oh, why? {PLAYER}{KUN}, haven't you\n"
# 404 "data/maps/LilycoveCity/scripts.pory"
	.string "been raising your POKéMON?\p"
# 405 "data/maps/LilycoveCity/scripts.pory"
	.string "That's not a very good showing as a\n"
# 406 "data/maps/LilycoveCity/scripts.pory"
	.string "TRAINER…$"
# 407 "data/maps/LilycoveCity/scripts.pory"

# 408 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayBattleMe:
# 409 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Come on, battle with me, so I can\n"
# 410 "data/maps/LilycoveCity/scripts.pory"
	.string "check out your POKéMON!$"
# 411 "data/maps/LilycoveCity/scripts.pory"

# 412 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayWontBeBeaten:
# 413 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: The POKéMON I raised won't be\n"
# 414 "data/maps/LilycoveCity/scripts.pory"
	.string "beaten by your POKéMON, {PLAYER}{KUN}!$"
# 415 "data/maps/LilycoveCity/scripts.pory"

# 416 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayDefeat:
# 417 "data/maps/LilycoveCity/scripts.pory"
	.string "… … … … … … … …\p"
# 418 "data/maps/LilycoveCity/scripts.pory"
	.string "I remember the battle I had with you,\n"
# 419 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, on ROUTE 103.\p"
# 420 "data/maps/LilycoveCity/scripts.pory"
	.string "That battle helped you become this\n"
# 421 "data/maps/LilycoveCity/scripts.pory"
	.string "strong, {PLAYER}{KUN}, didn't it?$"
# 422 "data/maps/LilycoveCity/scripts.pory"

# 423 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayGoingBackToLittleroot:
# 424 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: I'm thinking of going back to\n"
# 425 "data/maps/LilycoveCity/scripts.pory"
	.string "LITTLEROOT soon.\p"
# 426 "data/maps/LilycoveCity/scripts.pory"
	.string "I've caught a decent group of POKéMON,\n"
# 427 "data/maps/LilycoveCity/scripts.pory"
	.string "and my POKéDEX is coming along, so\l"
# 428 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going home to show my dad.$"
# 429 "data/maps/LilycoveCity/scripts.pory"

# 430 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToCollectBadges:
# 431 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 432 "data/maps/LilycoveCity/scripts.pory"
	.string "Collect all the GYM BADGES and take\n"
# 433 "data/maps/LilycoveCity/scripts.pory"
	.string "the POKéMON LEAGUE challenge?\p"
# 434 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, while you're collecting BADGES,\n"
# 435 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'm going to work on my\l"
# 436 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX. I'll complete it before you!\p"
# 437 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 438 "data/maps/LilycoveCity/scripts.pory"

# 439 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToPokemonLeague:
# 440 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 441 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the POKéMON LEAGUE\n"
# 442 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 443 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 444 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 445 "data/maps/LilycoveCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 446 "data/maps/LilycoveCity/scripts.pory"
	.string "but I'll finish my POKéDEX before you!\p"
# 447 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 448 "data/maps/LilycoveCity/scripts.pory"

# 449 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToBattleFrontier:
# 450 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 451 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the BATTLE FRONTIER\n"
# 452 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 453 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 454 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 455 "data/maps/LilycoveCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 456 "data/maps/LilycoveCity/scripts.pory"
	.string "but I'll finish my POKéDEX before you!\p"
# 457 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 458 "data/maps/LilycoveCity/scripts.pory"

# 459 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanShoppingLetsBattle:
# 460 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Oh, hey, it's {PLAYER}.\p"
# 461 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm running an errand for my dad.\n"
# 462 "data/maps/LilycoveCity/scripts.pory"
	.string "No, I'm not buying any DOLLS.\p"
# 463 "data/maps/LilycoveCity/scripts.pory"
	.string "Anyways, it's been a while.\p"
# 464 "data/maps/LilycoveCity/scripts.pory"
	.string "Want to have a battle to see who's been\n"
# 465 "data/maps/LilycoveCity/scripts.pory"
	.string "raising POKéMON better?$"
# 466 "data/maps/LilycoveCity/scripts.pory"

# 467 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanNoConfidence:
# 468 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Oh, what's the matter?\n"
# 469 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't have the confidence?$"
# 470 "data/maps/LilycoveCity/scripts.pory"

# 471 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanBattleMe:
# 472 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Want to battle to see who's\n"
# 473 "data/maps/LilycoveCity/scripts.pory"
	.string "been raising POKéMON better?$"
# 474 "data/maps/LilycoveCity/scripts.pory"

# 475 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanWontBeBeaten:
# 476 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Aww, but you know I'm not\n"
# 477 "data/maps/LilycoveCity/scripts.pory"
	.string "going to lose to no {PLAYER}.$"
# 478 "data/maps/LilycoveCity/scripts.pory"

# 479 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanDefeat:
# 480 "data/maps/LilycoveCity/scripts.pory"
	.string "Humph…\n"
# 481 "data/maps/LilycoveCity/scripts.pory"
	.string "You've done a lot of raising.\p"
# 482 "data/maps/LilycoveCity/scripts.pory"
	.string "That stings a bit--I had a head start\n"
# 483 "data/maps/LilycoveCity/scripts.pory"
	.string "on you as a TRAINER…$"
# 484 "data/maps/LilycoveCity/scripts.pory"

# 485 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanGoingBackToLittleroot:
# 486 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: I…\n"
# 487 "data/maps/LilycoveCity/scripts.pory"
	.string "I plan on going home to LITTLEROOT.\p"
# 488 "data/maps/LilycoveCity/scripts.pory"
	.string "You know I'm helping out my dad on his\n"
# 489 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX. It's coming together pretty\l"
# 490 "data/maps/LilycoveCity/scripts.pory"
	.string "decently, so I should go show him.$"
# 491 "data/maps/LilycoveCity/scripts.pory"

# 492 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToCollectBadges:
# 493 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 494 "data/maps/LilycoveCity/scripts.pory"
	.string "Collect all the GYM BADGES and take\n"
# 495 "data/maps/LilycoveCity/scripts.pory"
	.string "the POKéMON LEAGUE challenge?\p"
# 496 "data/maps/LilycoveCity/scripts.pory"
	.string "Maybe I'll do that, too…\p"
# 497 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 498 "data/maps/LilycoveCity/scripts.pory"

# 499 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToPokemonLeague:
# 500 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 501 "data/maps/LilycoveCity/scripts.pory"
	.string "Since you're that strong, are you\n"
# 502 "data/maps/LilycoveCity/scripts.pory"
	.string "taking the POKéMON LEAGUE challenge?\p"
# 503 "data/maps/LilycoveCity/scripts.pory"
	.string "Heh, even me--if I trained my POKéMON\n"
# 504 "data/maps/LilycoveCity/scripts.pory"
	.string "a bit more, I should be stronger than\l"
# 505 "data/maps/LilycoveCity/scripts.pory"
	.string "you, {PLAYER}.\p"
# 506 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 507 "data/maps/LilycoveCity/scripts.pory"

# 508 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToBattleFrontier:
# 509 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 510 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the BATTLE FRONTIER\n"
# 511 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 512 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 513 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 514 "data/maps/LilycoveCity/scripts.pory"
	.string "Since you're that strong, you should\n"
# 515 "data/maps/LilycoveCity/scripts.pory"
	.string "consider the BATTLE FRONTIER.\p"
# 516 "data/maps/LilycoveCity/scripts.pory"
	.string "Heh, if I train my POKéMON a bit more,\n"
# 517 "data/maps/LilycoveCity/scripts.pory"
	.string "I'll get stronger than you, {PLAYER}.\p"
# 518 "data/maps/LilycoveCity/scripts.pory"
	.string "Maybe I should go to the BATTLE\n"
# 519 "data/maps/LilycoveCity/scripts.pory"
	.string "FRONTIER.\p"
# 520 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 521 "data/maps/LilycoveCity/scripts.pory"

# 522 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MovedLootIntoHideoutToday:
# 523 "data/maps/LilycoveCity/scripts.pory"
	.string "Fufufu…\p"
# 524 "data/maps/LilycoveCity/scripts.pory"
	.string "We moved more loot into our secret\n"
# 525 "data/maps/LilycoveCity/scripts.pory"
	.string "HIDEOUT today…\p"
# 526 "data/maps/LilycoveCity/scripts.pory"
	.string "Wh-who are you?!\n"
# 527 "data/maps/LilycoveCity/scripts.pory"
	.string "I was just talking to myself!$"
# 528 "data/maps/LilycoveCity/scripts.pory"

# 529 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ChanceToDoBigThings:
# 530 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm just a GRUNT, so I don't know what\n"
# 531 "data/maps/LilycoveCity/scripts.pory"
	.string "the BOSS is thinking…\p"
# 532 "data/maps/LilycoveCity/scripts.pory"
	.string "But being on TEAM AQUA, I know I'll get\n"
# 533 "data/maps/LilycoveCity/scripts.pory"
	.string "the chance to do big things!\p"
# 534 "data/maps/LilycoveCity/scripts.pory"
	.string "Wh-who are you?!\n"
# 535 "data/maps/LilycoveCity/scripts.pory"
	.string "I was just talking to myself!$"
# 536 "data/maps/LilycoveCity/scripts.pory"

# 537 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DontGoNearCaveInCove:
# 538 "data/maps/LilycoveCity/scripts.pory"
	.string "Hey, you!\p"
# 539 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't go near the cave in the cove!\p"
# 540 "data/maps/LilycoveCity/scripts.pory"
	.string "Why? You don't need a reason why!\n"
# 541 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an adult, so you just listen to me!$"
# 542 "data/maps/LilycoveCity/scripts.pory"

# 543 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_IfWorldBecomesOurs:
# 544 "data/maps/LilycoveCity/scripts.pory"
	.string "If this whole wide world becomes ours,\n"
# 545 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA's, it will be a happier\l"
# 546 "data/maps/LilycoveCity/scripts.pory"
	.string "place for POKéMON, too.$"
# 547 "data/maps/LilycoveCity/scripts.pory"

# 548 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_WailmerLeapOutOfWater:
# 549 "data/maps/LilycoveCity/scripts.pory"
	.string "There! WAILMER!\n"
# 550 "data/maps/LilycoveCity/scripts.pory"
	.string "Leap out of the water now!$"
# 551 "data/maps/LilycoveCity/scripts.pory"

# 552 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GetLostMessingUpTraining:
# 553 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? What do you want?\p"
# 554 "data/maps/LilycoveCity/scripts.pory"
	.string "You're messing up our training,\n"
# 555 "data/maps/LilycoveCity/scripts.pory"
	.string "so can you, like, get lost?$"
# 556 "data/maps/LilycoveCity/scripts.pory"

# 557 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallInTown:
# 558 "data/maps/LilycoveCity/scripts.pory"
	.string "There's a POKéMON CONTEST HALL\n"
# 559 "data/maps/LilycoveCity/scripts.pory"
	.string "right in this here town. \p"
# 560 "data/maps/LilycoveCity/scripts.pory"
	.string "That means well-raised POKéMON will\n"
# 561 "data/maps/LilycoveCity/scripts.pory"
	.string "come from all over the country.\p"
# 562 "data/maps/LilycoveCity/scripts.pory"
	.string "My heart swells with excitement!$"
# 563 "data/maps/LilycoveCity/scripts.pory"

# 564 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_StrangeCaveInCove:
# 565 "data/maps/LilycoveCity/scripts.pory"
	.string "Have you seen that strange cave in\n"
# 566 "data/maps/LilycoveCity/scripts.pory"
	.string "the cove at the edge of town?$"
# 567 "data/maps/LilycoveCity/scripts.pory"

# 568 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GoingToMoveDeleterForHMs:
# 569 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going to teach my POKéMON some new\n"
# 570 "data/maps/LilycoveCity/scripts.pory"
	.string "moves for entering a CONTEST.\p"
# 571 "data/maps/LilycoveCity/scripts.pory"
	.string "So, I'm going to see the MOVE DELETER\n"
# 572 "data/maps/LilycoveCity/scripts.pory"
	.string "and make it forget HM moves.$"
# 573 "data/maps/LilycoveCity/scripts.pory"

# 574 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImFromKanto:
# 575 "data/maps/LilycoveCity/scripts.pory"
	.string "I came from KANTO.\p"
# 576 "data/maps/LilycoveCity/scripts.pory"
	.string "The HOENN region is beautiful with\n"
# 577 "data/maps/LilycoveCity/scripts.pory"
	.string "all its water and verdant nature.\p"
# 578 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? Wait a second…\p"
# 579 "data/maps/LilycoveCity/scripts.pory"
	.string "Could there be rare POKéMON that live\n"
# 580 "data/maps/LilycoveCity/scripts.pory"
	.string "only in this area?$"
# 581 "data/maps/LilycoveCity/scripts.pory"

# 582 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaBeenTrainingWailmer:
# 583 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA's been training their\n"
# 584 "data/maps/LilycoveCity/scripts.pory"
	.string "WAILMER in the cove.\p"
# 585 "data/maps/LilycoveCity/scripts.pory"
	.string "We SAILORS can't get our boats out\n"
# 586 "data/maps/LilycoveCity/scripts.pory"
	.string "to sea with them in the way!$"
# 587 "data/maps/LilycoveCity/scripts.pory"

# 588 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeonePuntedTeamAquaOut:
# 589 "data/maps/LilycoveCity/scripts.pory"
	.string "Ahoy, did you know?\p"
# 590 "data/maps/LilycoveCity/scripts.pory"
	.string "Someone punted TEAM AQUA out of\n"
# 591 "data/maps/LilycoveCity/scripts.pory"
	.string "the way for us!\p"
# 592 "data/maps/LilycoveCity/scripts.pory"
	.string "That got the WAILMER out of the cove,\n"
# 593 "data/maps/LilycoveCity/scripts.pory"
	.string "so we can get our boats out again.$"
# 594 "data/maps/LilycoveCity/scripts.pory"

# 595 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeoneStoleMyPokemon:
# 596 "data/maps/LilycoveCity/scripts.pory"
	.string "I was taking a relaxing snooze at the\n"
# 597 "data/maps/LilycoveCity/scripts.pory"
	.string "seaside inn to the sound of waves…\p"
# 598 "data/maps/LilycoveCity/scripts.pory"
	.string "When someone stole my POKéMON!\p"
# 599 "data/maps/LilycoveCity/scripts.pory"
	.string "Who's the abductor?\n"
# 600 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA? Is it TEAM AQUA?$"
# 601 "data/maps/LilycoveCity/scripts.pory"

# 602 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MissingPokemonCameBack:
# 603 "data/maps/LilycoveCity/scripts.pory"
	.string "My missing POKéMON…\n"
# 604 "data/maps/LilycoveCity/scripts.pory"
	.string "It came back without me noticing!$"
# 605 "data/maps/LilycoveCity/scripts.pory"

# 606 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImArtDealer:
# 607 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an ART DEALER.\p"
# 608 "data/maps/LilycoveCity/scripts.pory"
	.string "I am a buyer and seller of fine art,\n"
# 609 "data/maps/LilycoveCity/scripts.pory"
	.string "especially paintings.\p"
# 610 "data/maps/LilycoveCity/scripts.pory"
	.string "I've heard that the MUSEUM here has\n"
# 611 "data/maps/LilycoveCity/scripts.pory"
	.string "magnificent works on exhibit…$"
# 612 "data/maps/LilycoveCity/scripts.pory"

# 613 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SeaRemainsForeverYoung:
# 614 "data/maps/LilycoveCity/scripts.pory"
	.string "Even as we grow old and wrinkled,\n"
# 615 "data/maps/LilycoveCity/scripts.pory"
	.string "the sea remains forever young with\l"
# 616 "data/maps/LilycoveCity/scripts.pory"
	.string "the vivid brilliance of life…\p"
# 617 "data/maps/LilycoveCity/scripts.pory"
	.string "Fwohoho fwohohohoho…$"
# 618 "data/maps/LilycoveCity/scripts.pory"

# 619 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SixtyYearsAgoHusbandProposed:
# 620 "data/maps/LilycoveCity/scripts.pory"
	.string "It was sixty years ago that my husband\n"
# 621 "data/maps/LilycoveCity/scripts.pory"
	.string "proposed to me here.\l"
# 622 "data/maps/LilycoveCity/scripts.pory"
	.string "The sea remains as beautiful as ever.\p"
# 623 "data/maps/LilycoveCity/scripts.pory"
	.string "Mufufufu mufufufufufu…$"
# 624 "data/maps/LilycoveCity/scripts.pory"

# 625 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaRenovatedCavern:
# 626 "data/maps/LilycoveCity/scripts.pory"
	.string "Hm, you know of the peculiar cavern\n"
# 627 "data/maps/LilycoveCity/scripts.pory"
	.string "in this cove?\p"
# 628 "data/maps/LilycoveCity/scripts.pory"
	.string "That had been a natural formation,\n"
# 629 "data/maps/LilycoveCity/scripts.pory"
	.string "but then that TEAM AQUA lot came\l"
# 630 "data/maps/LilycoveCity/scripts.pory"
	.string "along and made their renovations.\p"
# 631 "data/maps/LilycoveCity/scripts.pory"
	.string "They call themselves\n"
# 632 "data/maps/LilycoveCity/scripts.pory"
	.string "the “nature-loving TEAM AQUA”!\p"
# 633 "data/maps/LilycoveCity/scripts.pory"
	.string "But what they do and what they say\n"
# 634 "data/maps/LilycoveCity/scripts.pory"
	.string "don't match at all!$"
# 635 "data/maps/LilycoveCity/scripts.pory"

# 636 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaLotGoneForGood:
# 637 "data/maps/LilycoveCity/scripts.pory"
	.string "That cave in the cove…\p"
# 638 "data/maps/LilycoveCity/scripts.pory"
	.string "I didn't notice it right away,\n"
# 639 "data/maps/LilycoveCity/scripts.pory"
	.string "but it's completely empty now.\p"
# 640 "data/maps/LilycoveCity/scripts.pory"
	.string "That TEAM AQUA lot, they must\n"
# 641 "data/maps/LilycoveCity/scripts.pory"
	.string "have gone away for good.$"
# 642 "data/maps/LilycoveCity/scripts.pory"

# 643 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_CitySign:
# 644 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY\p"
# 645 "data/maps/LilycoveCity/scripts.pory"
	.string "“Where the land ends and the\n"
# 646 "data/maps/LilycoveCity/scripts.pory"
	.string "sea begins.”$"
# 647 "data/maps/LilycoveCity/scripts.pory"

# 648 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallSign:
# 649 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON CONTEST HALL\n"
# 650 "data/maps/LilycoveCity/scripts.pory"
	.string "“The gathering place for TRAINERS!”$"
# 651 "data/maps/LilycoveCity/scripts.pory"

# 652 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MotelSign:
# 653 "data/maps/LilycoveCity/scripts.pory"
	.string "COVE LILY MOTEL\p"
# 654 "data/maps/LilycoveCity/scripts.pory"
	.string "“Remember us as COVE LILY of\n"
# 655 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE.”$"
# 656 "data/maps/LilycoveCity/scripts.pory"

# 657 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSign:
# 658 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE MUSEUM\p"
# 659 "data/maps/LilycoveCity/scripts.pory"
	.string "“POKéMON Masterpiece Collection\n"
# 660 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 661 "data/maps/LilycoveCity/scripts.pory"

# 662 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSignPlayersExhibit:
# 663 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE MUSEUM\p"
# 664 "data/maps/LilycoveCity/scripts.pory"
	.string "“{PLAYER}'s POKéMON Collection\n"
# 665 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 666 "data/maps/LilycoveCity/scripts.pory"

# 667 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSignUnderConstruction:
# 668 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p"
# 669 "data/maps/LilycoveCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 670 "data/maps/LilycoveCity/scripts.pory"
	.string "construction in SLATEPORT CITY.\p"
# 671 "data/maps/LilycoveCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 672 "data/maps/LilycoveCity/scripts.pory"
	.string "shortly.”$"
# 673 "data/maps/LilycoveCity/scripts.pory"

# 674 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSign:
# 675 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p"
# 676 "data/maps/LilycoveCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 677 "data/maps/LilycoveCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 678 "data/maps/LilycoveCity/scripts.pory"

# 679 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TrainerFanClubSign:
# 680 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON TRAINER FAN CLUB\p"
# 681 "data/maps/LilycoveCity/scripts.pory"
	.string "The names of TRAINERS are scribbled\n"
# 682 "data/maps/LilycoveCity/scripts.pory"
	.string "all over the sign…$"
# 683 "data/maps/LilycoveCity/scripts.pory"

# 684 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DepartmentStoreSign:
# 685 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE DEPARTMENT STORE\p"
# 686 "data/maps/LilycoveCity/scripts.pory"
	.string "“Overflowing with great merchandise\n"
# 687 "data/maps/LilycoveCity/scripts.pory"
	.string "and excitement!\p"
# 688 "data/maps/LilycoveCity/scripts.pory"
	.string "“A great place to find that something\n"
# 689 "data/maps/LilycoveCity/scripts.pory"
	.string "you need!”$"
# 690 "data/maps/LilycoveCity/scripts.pory"

# 691 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MoveDeletersHouseSign:
# 692 "data/maps/LilycoveCity/scripts.pory"
	.string "MOVE DELETER'S HOUSE\p"
# 693 "data/maps/LilycoveCity/scripts.pory"
	.string "“Unwanted POKéMON moves deleted.”$"
# 694 "data/maps/LilycoveCity/scripts.pory"

# 695 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DoYouKnowAboutBerryBlender:
# 696 "data/maps/LilycoveCity/scripts.pory"
	.string "Do you know about the machine\n"
# 697 "data/maps/LilycoveCity/scripts.pory"
	.string "BERRY BLENDER?$"
# 698 "data/maps/LilycoveCity/scripts.pory"

# 699 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_FasterSpinBetterPokeblocks:
# 700 "data/maps/LilycoveCity/scripts.pory"
	.string "People have to work together to get it\n"
# 701 "data/maps/LilycoveCity/scripts.pory"
	.string "to spin faster.\p"
# 702 "data/maps/LilycoveCity/scripts.pory"
	.string "The faster you can make it spin, the\n"
# 703 "data/maps/LilycoveCity/scripts.pory"
	.string "better {POKEBLOCK}S you can get, I've heard.$"
# 704 "data/maps/LilycoveCity/scripts.pory"

# 705 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ExplainBerryBlender:
# 706 "data/maps/LilycoveCity/scripts.pory"
	.string "It's used for making a kind of candy\n"
# 707 "data/maps/LilycoveCity/scripts.pory"
	.string "called a {POKEBLOCK}.\p"
# 708 "data/maps/LilycoveCity/scripts.pory"
	.string "If you give a good {POKEBLOCK} to a POKéMON,\n"
# 709 "data/maps/LilycoveCity/scripts.pory"
	.string "its condition will improve by a lot.$"
# 710 "data/maps/LilycoveCity/scripts.pory"

# 711 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HeardTowerCalledSkyPillar:
# 712 "data/maps/LilycoveCity/scripts.pory"
	.string "I heard there's a tower somewhere out\n"
# 713 "data/maps/LilycoveCity/scripts.pory"
	.string "on the sea routes.\p"
# 714 "data/maps/LilycoveCity/scripts.pory"
	.string "It's called the SKY PILLAR, I hear.$"
# 715 "data/maps/LilycoveCity/scripts.pory"

# 716 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SawTallTowerOnRoute131:
# 717 "data/maps/LilycoveCity/scripts.pory"
	.string "I saw this tall tower somewhere\n"
# 718 "data/maps/LilycoveCity/scripts.pory"
	.string "around ROUTE 131.\p"
# 719 "data/maps/LilycoveCity/scripts.pory"
	.string "Could that possibly be…?$"
# 720 "data/maps/LilycoveCity/scripts.pory"

# 721 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_JustArrivedAndSawRarePokemon:
# 722 "data/maps/LilycoveCity/scripts.pory"
	.string "We just arrived here on our\n"
# 723 "data/maps/LilycoveCity/scripts.pory"
	.string "honeymoon vacation.\p"
# 724 "data/maps/LilycoveCity/scripts.pory"
	.string "We happened to see a DRAGON-type\n"
# 725 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON flying way up in the sky.\p"
# 726 "data/maps/LilycoveCity/scripts.pory"
	.string "Do cool POKéMON like that live in\n"
# 727 "data/maps/LilycoveCity/scripts.pory"
	.string "the HOENN region?$"
# 728 "data/maps/LilycoveCity/scripts.pory"

# 729 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HoneymoonVowToSeeRarePokemon:
# 730 "data/maps/LilycoveCity/scripts.pory"
	.string "On our honeymoon, we vowed to see as\n"
# 731 "data/maps/LilycoveCity/scripts.pory"
	.string "many rare POKéMON as we can.\p"
# 732 "data/maps/LilycoveCity/scripts.pory"
	.string "So we were delighted to see a rare\n"
# 733 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON as soon as we arrived.\p"
# 734 "data/maps/LilycoveCity/scripts.pory"
	.string "I mean, we are totally happy!$"

LilycoveCity_EventScript_EmoBully::
# 739 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 740 "data/maps/LilycoveCity/scripts.pory"
	fadenewbgm MUS_NONE
# 741 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BullyMan1, MSGBOX_AUTOCLOSE
# 742 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 743 "data/maps/LilycoveCity/scripts.pory"
	applymovement 26, Common_Movement_FaceDown
# 744 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 26
# 745 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 746 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BullyGirl1, MSGBOX_AUTOCLOSE
# 747 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 748 "data/maps/LilycoveCity/scripts.pory"
	applymovement 26, Common_Movement_FaceRight
# 749 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 26
# 750 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BullyMan2, MSGBOX_AUTOCLOSE
# 751 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 752 "data/maps/LilycoveCity/scripts.pory"
	applymovement 26, Common_Movement_FaceDown
# 753 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 26
# 754 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 755 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BullyGirl2, MSGBOX_AUTOCLOSE
# 756 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 757 "data/maps/LilycoveCity/scripts.pory"
	applymovement 26, Common_Movement_FaceRight
# 758 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 26
# 759 "data/maps/LilycoveCity/scripts.pory"
	delay 20
# 760 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, Common_Movement_WalkInPlaceDown
# 761 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 23
# 762 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BullyMan3, MSGBOX_AUTOCLOSE
# 763 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 764 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, Common_Movement_WalkRight
# 765 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 23
# 766 "data/maps/LilycoveCity/scripts.pory"
	delay 30
# 767 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_Emo1, MSGBOX_AUTOCLOSE
# 768 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 769 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, Common_Movement_WalkInPlaceLeft
# 770 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 23
# 771 "data/maps/LilycoveCity/scripts.pory"
	applymovement 24, Common_Movement_WalkRight
# 772 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 773 "data/maps/LilycoveCity/scripts.pory"
	applymovement 25, Common_Movement_WalkRight
# 774 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 25
# 775 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 776 "data/maps/LilycoveCity/scripts.pory"
	playse SE_BALL_OPEN
# 777 "data/maps/LilycoveCity/scripts.pory"
	fadescreen FADE_TO_WHITE
# 778 "data/maps/LilycoveCity/scripts.pory"
	addobject 27
# 779 "data/maps/LilycoveCity/scripts.pory"
	addobject 28
# 780 "data/maps/LilycoveCity/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 2
# 781 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 782 "data/maps/LilycoveCity/scripts.pory"
	playse SE_PIN
# 783 "data/maps/LilycoveCity/scripts.pory"
	applymovement 24, Common_Movement_ExclamationMark
# 784 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 24
# 785 "data/maps/LilycoveCity/scripts.pory"
	applymovement 25, Common_Movement_ExclamationMark
# 786 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 25
# 787 "data/maps/LilycoveCity/scripts.pory"
	delay 30
# 788 "data/maps/LilycoveCity/scripts.pory"
	applymovement 24, LilycoveCity_Movement_WalkBackLeft
# 789 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 790 "data/maps/LilycoveCity/scripts.pory"
	applymovement 27, LilycoveCity_Movement_Typhlosion
# 791 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 27
# 792 "data/maps/LilycoveCity/scripts.pory"
	playmoncry SPECIES_TYPHLOSION_HISUI, CRY_MODE_ENCOUNTER
# 793 "data/maps/LilycoveCity/scripts.pory"
	delay 30
# 794 "data/maps/LilycoveCity/scripts.pory"
	applymovement 25, LilycoveCity_Movement_WalkBackLeft
# 795 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 796 "data/maps/LilycoveCity/scripts.pory"
	applymovement 28, LilycoveCity_Movement_Morgrem
# 797 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 28
# 798 "data/maps/LilycoveCity/scripts.pory"
	playmoncry SPECIES_MORGREM, CRY_MODE_ENCOUNTER
# 799 "data/maps/LilycoveCity/scripts.pory"
	delay 20
# 800 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_EmoBully_Text_0, MSGBOX_AUTOCLOSE
# 801 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 802 "data/maps/LilycoveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 803 "data/maps/LilycoveCity/scripts.pory"
	delay 4
# 804 "data/maps/LilycoveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_Movement_WalkBackUp
# 805 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 806 "data/maps/LilycoveCity/scripts.pory"
	applymovement 24, LilycoveCity_Movement_BullyMan
# 807 "data/maps/LilycoveCity/scripts.pory"
	delay 20
# 808 "data/maps/LilycoveCity/scripts.pory"
	applymovement 25, LilycoveCity_Movement_BullyKid
# 809 "data/maps/LilycoveCity/scripts.pory"
	delay 30
# 810 "data/maps/LilycoveCity/scripts.pory"
	applymovement 26, LilycoveCity_Movement_BullyGirl
# 811 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 26
# 812 "data/maps/LilycoveCity/scripts.pory"
	removeobject 24
# 813 "data/maps/LilycoveCity/scripts.pory"
	removeobject 25
# 814 "data/maps/LilycoveCity/scripts.pory"
	removeobject 26
# 815 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_END, FALSE
# 816 "data/maps/LilycoveCity/scripts.pory"
	applymovement 27, Common_Movement_WalkInPlaceRight
# 817 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 27
# 818 "data/maps/LilycoveCity/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceUp
# 819 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 28
# 820 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_EmoBully_Text_1, MSGBOX_AUTOCLOSE
# 821 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 822 "data/maps/LilycoveCity/scripts.pory"
	playmoncry SPECIES_TYPHLOSION_HISUI, CRY_MODE_ENCOUNTER
# 823 "data/maps/LilycoveCity/scripts.pory"
	delay 20
# 824 "data/maps/LilycoveCity/scripts.pory"
	applymovement 27, LilycoveCity_Movement_EnterPokeball
# 825 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 27
# 826 "data/maps/LilycoveCity/scripts.pory"
	removeobject 27
# 827 "data/maps/LilycoveCity/scripts.pory"
	delay 20
# 828 "data/maps/LilycoveCity/scripts.pory"
	playmoncry SPECIES_MORGREM, CRY_MODE_ENCOUNTER
# 829 "data/maps/LilycoveCity/scripts.pory"
	delay 30
# 830 "data/maps/LilycoveCity/scripts.pory"
	applymovement 28, LilycoveCity_Movement_EnterPokeball
# 831 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 28
# 832 "data/maps/LilycoveCity/scripts.pory"
	removeobject 28
# 833 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 834 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, LilycoveCity_Movement_Emo
# 835 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 23
# 836 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_EmoBully_Text_2, MSGBOX_AUTOCLOSE
# 837 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 838 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, Common_Movement_WalkRight
# 839 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 23
# 840 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_Emo2, MSGBOX_AUTOCLOSE
# 841 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 842 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, Common_Movement_WalkInPlaceDown
# 843 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 23
# 844 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_Emo3, MSGBOX_AUTOCLOSE
# 845 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 846 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, Common_Movement_WalkInPlaceLeft
# 847 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 23
# 848 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_Emo4, MSGBOX_AUTOCLOSE
# 849 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 850 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, LilycoveCity_Movement_EmoLeave
# 851 "data/maps/LilycoveCity/scripts.pory"
	delay 20
# 852 "data/maps/LilycoveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 853 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 23
# 854 "data/maps/LilycoveCity/scripts.pory"
	removeobject 23
# 855 "data/maps/LilycoveCity/scripts.pory"
	delay 20
# 856 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 857 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_MISA_STATE, 8
# 858 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_HIDE_EMO_LILYCOVE
# 859 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_RIVAL_POKEMON
# 860 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	end


# 934 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_Typhlosion:
# 935 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 936 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_down
# 937 "data/maps/LilycoveCity/scripts.pory"
	walk_in_place_fast_left
	step_end

# 940 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_Morgrem:
# 941 "data/maps/LilycoveCity/scripts.pory"
	walk_left
	step_end

# 944 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_BullyMan:
# 945 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 945 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 945 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 945 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 945 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 945 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 945 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 945 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 945 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 945 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 945 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 945 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
	step_end

# 948 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_BullyKid:
# 949 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_up
# 950 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 950 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 950 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 950 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 950 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 950 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 950 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 950 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 950 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 950 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 950 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
	step_end

# 953 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_BullyGirl:
# 954 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_down
# 955 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 955 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 955 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 955 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 955 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 955 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 955 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 955 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 955 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 955 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
# 955 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_left
	step_end

# 958 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_Emo:
# 959 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 959 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 959 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 959 "data/maps/LilycoveCity/scripts.pory"
	walk_left
	step_end

# 962 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_EmoLeave:
# 963 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 963 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 963 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 963 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 963 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 963 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 963 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 963 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 963 "data/maps/LilycoveCity/scripts.pory"
	walk_left
	step_end

# 966 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_WalkBackRight:
# 967 "data/maps/LilycoveCity/scripts.pory"
	lock_facing_direction
# 968 "data/maps/LilycoveCity/scripts.pory"
	walk_right
# 969 "data/maps/LilycoveCity/scripts.pory"
	unlock_facing_direction
	step_end

# 972 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_WalkBackLeft:
# 973 "data/maps/LilycoveCity/scripts.pory"
	lock_facing_direction
# 974 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 975 "data/maps/LilycoveCity/scripts.pory"
	unlock_facing_direction
	step_end

# 978 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_WalkBackUp:
# 979 "data/maps/LilycoveCity/scripts.pory"
	lock_facing_direction
# 980 "data/maps/LilycoveCity/scripts.pory"
	walk_up
# 981 "data/maps/LilycoveCity/scripts.pory"
	unlock_facing_direction
	step_end

# 984 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_WalkBackDown:
# 985 "data/maps/LilycoveCity/scripts.pory"
	lock_facing_direction
# 986 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 987 "data/maps/LilycoveCity/scripts.pory"
	unlock_facing_direction
	step_end

# 990 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_StaffEmployee:
# 991 "data/maps/LilycoveCity/scripts.pory"
	walk_fast_right
# 992 "data/maps/LilycoveCity/scripts.pory"
	walk_in_place_down
	step_end

# 995 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_StaffEmployee2:
# 996 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 997 "data/maps/LilycoveCity/scripts.pory"
	face_original_direction
	step_end

# 1000 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_EnterPokeball:
# 1001 "data/maps/LilycoveCity/scripts.pory"
	enter_pokeball
	step_end

LilycoveCity_EventScript_RatCaveShake::
# 1005 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 1006 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_NONE, FALSE
# 1007 "data/maps/LilycoveCity/scripts.pory"
	delay 40
# 1008 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_0x8004, 2
# 1009 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_0x8005, 6
# 1010 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_0x8006, 8
# 1011 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_0x8007, 4
# 1012 "data/maps/LilycoveCity/scripts.pory"
	special ShakeCamera
# 1013 "data/maps/LilycoveCity/scripts.pory"
	waitstate
# 1014 "data/maps/LilycoveCity/scripts.pory"
	delay 60
# 1015 "data/maps/LilycoveCity/scripts.pory"
	special ShakeCamera
# 1016 "data/maps/LilycoveCity/scripts.pory"
	waitstate
# 1017 "data/maps/LilycoveCity/scripts.pory"
	delay 60
# 1018 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 1019 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 8
# 1020 "data/maps/LilycoveCity/scripts.pory"
	release
	end


LilycoveCity_EventScript_Man4::
# 1025 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_Man4, MSGBOX_NPC
	end


LilycoveCity_EventScript_CEO_HighriseNoEntry::
# 1036 "data/maps/LilycoveCity/scripts.pory"
	lock
# 1037 "data/maps/LilycoveCity/scripts.pory"
	playse SE_PIN
# 1038 "data/maps/LilycoveCity/scripts.pory"
	applymovement 30, Common_Movement_ExclamationMark
# 1039 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 30
# 1040 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 1041 "data/maps/LilycoveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_Movement_WalkBackDown
# 1042 "data/maps/LilycoveCity/scripts.pory"
	applymovement 30, LilycoveCity_Movement_StaffEmployee
# 1043 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 1044 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_StaffEmployee, MSGBOX_DEFAULT
# 1045 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 1046 "data/maps/LilycoveCity/scripts.pory"
	applymovement 30, LilycoveCity_Movement_StaffEmployee2
# 1047 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 30
# 1048 "data/maps/LilycoveCity/scripts.pory"
	release
	end


LilycoveCity_EventScript_StaffEmployee::
# 1053 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_StaffEmployee_Text_0, MSGBOX_SIGN
	end


LilycoveCity_EventScript_CEO_HighriseWelcome::
# 1063 "data/maps/LilycoveCity/scripts.pory"
	lock
# 1064 "data/maps/LilycoveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 1065 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 1066 "data/maps/LilycoveCity/scripts.pory"
	applymovement 30, Common_Movement_WalkInPlaceRight
# 1067 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 30
# 1068 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_StaffEmployee2, MSGBOX_DEFAULT
# 1069 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 1070 "data/maps/LilycoveCity/scripts.pory"
	playse SE_PIN
# 1071 "data/maps/LilycoveCity/scripts.pory"
	applymovement 30, Common_Movement_ExclamationMark
# 1072 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 30
# 1073 "data/maps/LilycoveCity/scripts.pory"
	waitse
# 1074 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_StaffEmployee3, MSGBOX_DEFAULT
# 1075 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 1076 "data/maps/LilycoveCity/scripts.pory"
	applymovement 30, Common_Movement_FaceOriginalDirection
# 1077 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 30
# 1078 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 1079 "data/maps/LilycoveCity/scripts.pory"
	warpdoor MAP_LILYCOVE_CITY_HIGHRISE_GROUND_FLOOR, 8, 7
# 1080 "data/maps/LilycoveCity/scripts.pory"
	waitstate
# 1081 "data/maps/LilycoveCity/scripts.pory"
	release
	end


LilycoveCity_EventScript_EmoBully_Text_0:
# 800 "data/maps/LilycoveCity/scripts.pory"
	.string "L-Let's get out of here!$"

LilycoveCity_EventScript_EmoBully_Text_1:
# 820 "data/maps/LilycoveCity/scripts.pory"
	.string "JAMES: Thanks, guys.$"

LilycoveCity_EventScript_EmoBully_Text_2:
# 836 "data/maps/LilycoveCity/scripts.pory"
	.string "JAMES: …\p So you saw that.$"

LilycoveCity_EventScript_StaffEmployee_Text_0:
# 1053 "data/maps/LilycoveCity/scripts.pory"
	.string "…$"

LilycoveCity_Text_BullyMan1::
# 864 "data/maps/LilycoveCity/scripts.pory"
	.string "BOY: What are you doing in LILYCOVE?\n I'm surprised a little nerd like you\l actually left your house!\p KID: Haha, for real!\n Are you still acting like a weirdo?\l “Oh, the abyss is calling me..”$"

LilycoveCity_Text_BullyGirl1::
# 873 "data/maps/LilycoveCity/scripts.pory"
	.string "GIRL: Hahaha! He seriously says that!\n So lame.$"

LilycoveCity_Text_BullyMan2::
# 878 "data/maps/LilycoveCity/scripts.pory"
	.string "BOY: Seriously, I thought I'd never\n have to see you and your lame acting\l again after I moved.\p Acting all cocky just because your\n mom's a strong TRAINER.\p KID: Yeah!\n You probably got all those badges\l using your mommy's POKéMON.$"

LilycoveCity_Text_BullyGirl2::
# 889 "data/maps/LilycoveCity/scripts.pory"
	.string "GIRL: Hahaha! He probably did!\n What a nepo baby.$"

LilycoveCity_Text_BullyMan3::
# 894 "data/maps/LilycoveCity/scripts.pory"
	.string "BOY: What?\n Too scared to say anything?\p Don't forget how you had to drop\n out of the TRAINER SCHOOL, loser.\p How about you quit acting like\n you're a protagonist already?\p Grow up!$"

LilycoveCity_Text_Emo1::
# 904 "data/maps/LilycoveCity/scripts.pory"
	.string "JAMES: …\p I don't have anything to say to you.\p BOY: What was that?!\p KID: You…!$"

LilycoveCity_Text_Emo2::
# 911 "data/maps/LilycoveCity/scripts.pory"
	.string "That guy…\n Was the reason I stopped going\l to school.\p My mom found out what was happening\n and suddenly he moved away.\p I guess his friends still visit\n him out here.$"

LilycoveCity_Text_Emo3::
# 921 "data/maps/LilycoveCity/scripts.pory"
	.string "Either way, I'm…\n I'm a different person now.\l I have my friends with me.\p Even if…\p …$"

LilycoveCity_Text_Emo4::
# 929 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm gonna go.\p See ya.$"

LilycoveCity_Text_Man4::
# 1029 "data/maps/LilycoveCity/scripts.pory"
	.string "I've been hearing weird noises coming\n from that houses for a few days now.\p But nobody's lived there for years.$"

LilycoveCity_Text_StaffEmployee::
# 1057 "data/maps/LilycoveCity/scripts.pory"
	.string "Sorry. This area is restricted.\n Cleared personnel only.$"

LilycoveCity_Text_StaffEmployee2::
# 1085 "data/maps/LilycoveCity/scripts.pory"
	.string "Sorry, could I see your TRAINER CARD?\n … … … … … …$"

LilycoveCity_Text_StaffEmployee3::
# 1090 "data/maps/LilycoveCity/scripts.pory"
	.string "Ah, CHAMPION {PLAYER}! My apologies.\n Please, go ahead.$"
