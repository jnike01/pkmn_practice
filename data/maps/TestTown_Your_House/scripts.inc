TestTown_Your_House_MapScripts::
	.byte 0


TestTown_Your_House_SignScript_TV::
	lock
	msgbox TestTown_Your_House_SignScript_TV_Text_0
	release
	end


TestTown_Your_House_PersonScript_Mom::
	lock
	faceplayer
	msgbox TestTown_Your_House_PersonScript_Mom_Text_0
	release
	end


TestTown_Your_House_SignScript_TV_Text_0:
	.string "Breaking Bad seems to be on, that show\n is great!$"

TestTown_Your_House_PersonScript_Mom_Text_0:
	.string "Mom placeholder text$"
