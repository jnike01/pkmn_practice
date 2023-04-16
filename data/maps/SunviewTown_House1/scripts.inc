SunviewTown_House1_MapScripts::
	.byte 0


SunviewTown_House1_PersonScript_NPC1::
	lock
	faceplayer
	msgbox SunviewTown_House1_PersonScript_NPC1_Text_0
	release
	end


SunviewTown_House1_PersonScript_NPC2::
	lock
	faceplayer
	msgbox SunviewTown_House1_PersonScript_NPC2_Text_0
	release
	end


SunviewTown_House1_PersonScript_NPC1_Text_0:
	.string "My wife and I have lived here for many\n"
	.string "years. It's been a great experience and\l"
	.string "I hope you settle down some day in a\l"
	.string "good place like this.$"

SunviewTown_House1_PersonScript_NPC2_Text_0:
	.string "My husband is a bit overly nice but\n"
	.string "that's what I love about him.$"
