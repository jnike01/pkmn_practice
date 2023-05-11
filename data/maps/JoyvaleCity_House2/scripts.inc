JoyvaleCity_House2_MapScripts::
	return


JoyvaleCity_House2_SignScript_TV::
	lock
	special TurnOnTVScreen
	msgbox JoyvaleCity_House2_SignScript_TV_Text_0
	special TurnOffTVScreen
	release
	end


JoyvaleCity_House2_PersonScript_NPC1::
	lock
	faceplayer
	msgbox JoyvaleCity_House2_PersonScript_NPC1_Text_0
	release
	end


JoyvaleCity_House2_PersonScript_TradeNPC::
	lock
	faceplayer
	goto_if_set FLAG_JOYVALE_NPC_TRADE_COMPLETED, JoyvaleCity_House2_SequenceScript_AfterTrade
	setvar VAR_0x8008, INGAME_TRADE_HOUNDOUR
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox JoyvaleCity_House2_PersonScript_TradeNPC_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, JoyvaleCity_House2_SequenceScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, JoyvaleCity_House2_SequenceScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, JoyvaleCity_House2_SequenceScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox JoyvaleCity_House2_PersonScript_TradeNPC_Text_1
	setflag FLAG_JOYVALE_NPC_TRADE_COMPLETED
	release
	end


JoyvaleCity_House2_SequenceScript_AfterTrade::
	msgbox JoyvaleCity_House2_SequenceScript_AfterTrade_Text_0
	release
	end


JoyvaleCity_House2_SequenceScript_DeclineTrade::
	msgbox JoyvaleCity_House2_SequenceScript_DeclineTrade_Text_0
	release
	end


JoyvaleCity_House2_SequenceScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox JoyvaleCity_House2_SequenceScript_NotRequestedMon_Text_0
	release
	end


JoyvaleCity_House2_SignScript_TV_Text_0:
	.string "It's Regular Show! That was a great\n"
	.string "watch for a kid's show.$"

JoyvaleCity_House2_PersonScript_NPC1_Text_0:
	.string "Wooooaaaahhhh!$"

JoyvaleCity_House2_PersonScript_TradeNPC_Text_0:
	.string "Do you have a {STR_VAR_1} you are\n"
	.string "willing to trade? I would appreciate it\l"
	.string "if you would for my {STR_VAR_2},\l"
	.string "Flamvell. {STR_VAR_1} would help a\l"
	.string "lot more against the dangers I face.$"

JoyvaleCity_House2_PersonScript_TradeNPC_Text_1:
	.string "Thanks a lot for this! I hope great\n"
	.string "things come for you and Flamvell!$"

JoyvaleCity_House2_SequenceScript_AfterTrade_Text_0:
	.string "I hope my old friend is helping you in\n"
	.string "your endeavers. Take good care of\l"
	.string "Flamvell for me!$"

JoyvaleCity_House2_SequenceScript_DeclineTrade_Text_0:
	.string "Aww, that sucks! Hopefully, you will\n"
	.string "reconsider. Flamvell is really well\l"
	.string "behaved.$"

JoyvaleCity_House2_SequenceScript_NotRequestedMon_Text_0:
	.string "This isn't the Pokemon I'm looking for.\n"
	.string "If you want this trade to go through,\l"
	.string "bring me a {STR_VAR_1}.$"
