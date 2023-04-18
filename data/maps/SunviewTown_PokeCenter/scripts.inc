SunviewTown_PokeCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SunviewTown_PokeCenter_DefaultScript_HealRespawn
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


SunviewTown_PokeCenter_DefaultScript_HealRespawn::
	setrespawn HEAL_LOCATION_SUNVIEW_TOWN
	end


SunviewTown_PokeCenter_PersonScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


SunviewTown_PokeCenter_PersonScript_NPC1::
	lock
	faceplayer
	msgbox SunviewTown_PokeCenter_PersonScript_NPC1_Text_0
	release
	end


SunviewTown_PokeCenter_PersonScript_NPC2::
	lock
	faceplayer
	msgbox SunviewTown_PokeCenter_PersonScript_NPC2_Text_0
	release
	end


SunviewTown_PokeCenter_PersonScript_NPC3::
	lock
	faceplayer
	msgbox SunviewTown_PokeCenter_PersonScript_NPC3_Text_0
	release
	end


SunviewTown_PokeCenter_PersonScript_NPC1_Text_0:
	.string "The Pokemon Center is a great place to\n"
	.string "sit down and relax. I come here to do\l"
	.string "just that at least once a week!$"

SunviewTown_PokeCenter_PersonScript_NPC2_Text_0:
	.string "The Library here has a robust selection\n"
	.string "of material. Everything from History,\l"
	.string "to Cooking and even Manga can be\l"
	.string "found.$"

SunviewTown_PokeCenter_PersonScript_NPC3_Text_0:
	.string "I've been travelling for a while and I'll\n"
	.string "never cease to be thankful for the\l"
	.string "free healthcare of the Pokemon\l"
	.string "Centers!$"
