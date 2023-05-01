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

