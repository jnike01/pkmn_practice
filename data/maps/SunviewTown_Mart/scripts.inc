SunviewTown_Mart_MapScripts::
	.byte 0


SunviewTown_Mart_PersonScript_Employee::
	lock
	faceplayer
	message SunviewTown_Mart_PersonScript_Employee_Text_0
	waitmessage
	pokemart 0
	msgbox SunviewTown_Mart_PersonScript_Employee_Text_1
	release
	end


SunviewTown_Mart_PersonScript_NPC1::
	lock
	faceplayer
	msgbox SunviewTown_Mart_PersonScript_NPC1_Text_0
	release
	end


SunviewTown_Mart_PersonScript_NPC2::
	lock
	faceplayer
	msgbox SunviewTown_Mart_PersonScript_NPC2_Text_0
	release
	end


SunviewTown_Mart_PersonScript_Employee_Text_0:
	.string "How may I serve you?$"

SunviewTown_Mart_PersonScript_Employee_Text_1:
	.string "Please come again!$"

SunviewTown_Mart_PersonScript_NPC1_Text_0:
	.string "The food they have in stock here is\n"
	.string "very good. It's convenient too, so I\l"
	.string "don't have to go to a big grocery store.$"

SunviewTown_Mart_PersonScript_NPC2_Text_0:
	.string "I love coming here for snacks! It's nice\n"
	.string "that they sell pokeballs and medicine\l"
	.string "too.$"
