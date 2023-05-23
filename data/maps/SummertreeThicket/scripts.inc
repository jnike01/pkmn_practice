SummertreeThicket_MapScripts::
	.byte 0


SummertreeThicket_SignScript_ForestSign::
	lock
	msgbox SummertreeThicket_SignScript_ForestSign_Text_0
	release
	end


SummertreeThicket_ItemScript_BallOne::
	lock
	giveitem ITEM_SUPER_POTION, 1
	removeobject 3
	release
	end


SummertreeThicket_SignScript_ForestSign_Text_0:
	.string "Summertree Wood, a bountiful forest.$"
