SunviewTown_Mart_MapScripts::
	.byte 0


SunviewTown_PersonScript_Employee::
	lock
	faceplayer
	message SunviewTown_PersonScript_Employee_Text_0
	waitmessage
	pokemart 0
	msgbox SunviewTown_PersonScript_Employee_Text_1
	release
	end


SunviewTown_PersonScript_Employee_Text_0:
	.string "How may I serve you?$"

SunviewTown_PersonScript_Employee_Text_1:
	.string "Please come again!$"
