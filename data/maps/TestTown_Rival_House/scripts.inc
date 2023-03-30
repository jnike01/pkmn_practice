TestTown_Rival_House_MapScripts::
	.byte 0


TestTown_Rival_House_PersonScript_RivalGrandma::
	lock
	faceplayer
	msgbox TestTown_Rival_House_PersonScript_RivalGrandma_Text_0
	release
	end


TestTown_Rival_House_SignScript_TV::
	lock
	special TurnOnTVScreen
	msgbox TestTown_Rival_House_SignScript_TV_Text_0
	special TurnOffTVScreen
	release
	end


TestTown_Rival_House_PersonScript_RivalGrandma_Text_0:
	.string "Hello, {PLAYER}{KUN}! I'm so proud of my\ngrandson and you for growing up so well!$"

TestTown_Rival_House_SignScript_TV_Text_0:
	.string "It's the original Wizard of Oz! Now that's an oldie.$"
