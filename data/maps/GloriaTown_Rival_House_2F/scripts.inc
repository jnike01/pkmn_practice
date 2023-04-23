GloriaTown_Rival_House_2F_MapScripts::
	.byte 0


GloriaTown_Rival_House_2F_ControlScript_RivalFirstDialogueSetup::
	compare VAR_RIVAL_STATE, 0
	goto_if_eq GloriaTown_Rival_House_2F_ControlScript_RivalFirstDialogueSetup_1
	clearflag FLAG_RIVAL_INTRO
	return

GloriaTown_Rival_House_2F_ControlScript_RivalFirstDialogueSetup_1:
	setflag FLAG_RIVAL_INTRO
	return


GloriaTown_Rival_House_2F_PersonScript_RivalIntro::
	lock
	faceplayer
	msgbox GloriaTown_Rival_House_2F_PersonScript_RivalIntro_Text_0
	call GloriaTown_Rival_House_2F_SequenceScript_RivalIntroFinish
	release
	end


GloriaTown_Rival_House_2F_SequenceScript_RivalIntroFinish::
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_Rival_House_2F_MovementScript_PlayerOutOfWay
	waitmovement 0
	applymovement 1, GloriaTown_Rival_House_2F_MovementScript_RivalLeaveRoom
	waitmovement 0
	removeobject 1
	playse SE_EXIT
	setvar VAR_RIVAL_STATE, 1
	return


GloriaTown_Rival_House_2F_SignScript_TV::
	lock
	special TurnOnTVScreen
	msgbox GloriaTown_Rival_House_2F_SignScript_TV_Text_0
	special TurnOffTVScreen
	release
	end


GloriaTown_Rival_House_2F_SignScript_Gamecube::
	lock
	msgbox GloriaTown_Rival_House_2F_SignScript_Gamecube_Text_0
	release
	end


GloriaTown_Rival_House_2F_SignScript_Notebook::
	lock
	msgbox TextTown_Rival_House_2F_TextScript_Notebook
	release
	end


GloriaTown_Rival_House_2F_SignScript_PC::
	lock
	msgbox GloriaTown_Rival_House_2F_SignScript_PC_Text_0
	release
	end


GloriaTown_Rival_House_2F_MovementScript_RivalLeaveRoom:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

GloriaTown_Rival_House_2F_MovementScript_PlayerOutOfWay:
	walk_down
	face_up
	step_end

GloriaTown_Rival_House_2F_PersonScript_RivalIntro_Text_0:
	.string "What's up {PLAYER}{KUN}! It's the day you\n"
	.string "get to obtain your first Pokemon from\l"
	.string "the professor. I've been waiting for\l"
	.string "this so we can go on a journey at the\l"
	.string "same time like we promised as kids! Now\l"
	.string "that you've checked in with me, head\l"
	.string "over to the lab so we can get this show\l"
	.string "on the road!$"

GloriaTown_Rival_House_2F_SignScript_TV_Text_0:
	.string "Wow! It's Super Mario Sunshine! This\n"
	.string "game was pretty solid.$"

GloriaTown_Rival_House_2F_SignScript_Gamecube_Text_0:
	.string "This Gamecube is in such good condition!$"

GloriaTown_Rival_House_2F_SignScript_PC_Text_0:
	.string "The computer is locked.$"

TextTown_Rival_House_2F_TextScript_Notebook::
	.string "{PLAYER} flipped open the notebook.\p"
	.string "ADVENTURE RULE NO. 1\n"
	.string "Open the MENU with START.\p"
	.string "ADVENTURE RULE NO. 2\n"
	.string "Record your progress with SAVE.\p"
	.string "The remaining pages are blank…$"
