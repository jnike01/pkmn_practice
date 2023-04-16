SunviewTown_House2_MapScripts::
	.byte 0


SunviewTown_House2_PersonScript_NPC1::
	lock
	faceplayer
	msgbox SunviewTown_House2_PersonScript_NPC1_Text_0
	release
	end


SunviewTown_House2_PersonScript_NPC2::
	lock
	faceplayer
	msgbox SunviewTown_House2_PersonScript_NPC2_Text_0
	release
	end


SunviewTown_House2_SignScript_TV::
	lock
	special TurnOnTVScreen
	msgbox SunviewTown_House2_SignScript_TV_Text_0
	special TurnOffTVScreen
	release
	end


SunviewTown_House2_PersonScript_NPC1_Text_0:
	.string "My son has been glued to the TV all day.\n"
	.string "What am I going to do with him?$"

SunviewTown_House2_PersonScript_NPC2_Text_0:
	.string "I've been playing GTA V all day! This\n"
	.string "game is so addicting!$"

SunviewTown_House2_SignScript_TV_Text_0:
	.string "GTA V is being played right now. This\n"
	.string "game is very good.$"
