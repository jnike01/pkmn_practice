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


TestTown_Signscript_Gym::
	lock
	msgbox TestTown_Signscript_Gym_Text_0
	release
	end


TestTown_ItemScript_BallOne::
	lock
	giveitem ITEM_EVERSTONE, 1
	removeobject 3
	release
	end


TestTown_ItemScript_BallTwo::
	lock
	giveitem ITEM_RARE_CANDY, 1
	removeobject 4
	release
	end


TestTown_Signscript_Player_House_Text_0:
	.string "{PLAYER}{KUN}'s House$"

TestTown_Signscript_Rival_House_Text_0:
	.string "Professor's House$"

TestTown_Signscript_Prof_Lab_Text_0:
	.string "Professor's Lab$"

TestTown_Signscript_Gym_Text_0:
	.string "Test Town Pokemon Gym\nLeader: Zackary\p“The wise man of iron!”$"
