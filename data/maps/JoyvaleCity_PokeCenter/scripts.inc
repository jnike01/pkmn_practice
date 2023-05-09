JoyvaleCity_PokeCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, JoyvaleCity_PokeCenter_DefaultScript_HealRespawn
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


JoyvaleCity_PokeCenter_DefaultScript_HealRespawn::
	setrespawn HEAL_LOCATION_JOYVALE_CITY
	end


JoyvaleCity_PokeCenter_PersonScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


JoyvaleCity_PokeCenter_PersonScript_NPC1::
	lock
	faceplayer
	msgbox JoyvaleCity_PokeCenter_PersonScript_NPC1_Text_0
	release
	end


JoyvaleCity_PokeCenter_PersonScript_NPC2::
	lock
	faceplayer
	msgbox JoyvaleCity_PokeCenter_PersonScript_NPC2_Text_0
	release
	end


JoyvaleCity_PokeCenter_PersonScript_NPC3::
	lock
	faceplayer
	msgbox JoyvaleCity_PokeCenter_PersonScript_NPC3_Text_0
	release
	end


JoyvaleCity_PokeCenter_PersonScript_NPC1_Text_0:
	.string "It's great that there's these nice\n"
	.string "tables at every Pokemon Center. I love\l"
	.string "sitting here and reading my cookbooks!$"

JoyvaleCity_PokeCenter_PersonScript_NPC2_Text_0:
	.string "The air conditioning in here is\n"
	.string "refreshing in comparison to the hot\l"
	.string "weather outside. I can read my books in\l"
	.string "comfort.$"

JoyvaleCity_PokeCenter_PersonScript_NPC3_Text_0:
	.string "The map here is very high quality. It's a\n"
	.string "great source of inpsiration for my art!$"
