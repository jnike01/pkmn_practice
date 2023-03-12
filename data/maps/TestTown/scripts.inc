TestTown_MapScripts::
	.byte 0

TestTown_Signscript_Player_House::
	lock
	msgbox TestTown_Signscript_Player_House_Text_0
	release
	end


TestTown_Signscript_Rival_House::
	lock
	msgbox TestTown_Signscript_Rival_House_Text_0
	release
	end


TestTown_Signscript_Prof_Lab::
	lock
	msgbox TestTown_Signscript_Prof_Lab_Text_0
	release
	end


TestTown_Signscript_Player_House_Text_0:
	.string "{PLAYER}{KUN}'s House$"

TestTown_Signscript_Rival_House_Text_0:
	.string "Professor's House$"

TestTown_Signscript_Prof_Lab_Text_0:
	.string "Professor's Lab$"
