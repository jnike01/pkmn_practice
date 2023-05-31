Route4_MapScripts::
	.byte 0


Route4_SignScript_RouteSign::
	lock
	msgbox Route4_SignScript_RouteSign_Text_0
	release
	end


Route4_PersonScript_Nurse::
	lock
	faceplayer
	release
	end


Route4_SignScript_RouteSign_Text_0:
	.string "Route 4, a vibrant road.$"
