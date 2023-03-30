TestTown_Rival_House_2F_MapScripts::
	.byte 0


TestTown_Rival_House_2F_ControlScript_RivalFirstDialogueSetup::
	compare VAR_RIVAL_STATE, 0
	goto_if_eq TestTown_Rival_House_2F_ControlScript_RivalFirstDialogueSetup_1
	clearflag FLAG_RIVAL_INTRO
	return

TestTown_Rival_House_2F_ControlScript_RivalFirstDialogueSetup_1:
	setflag FLAG_RIVAL_INTRO
	return


TestTown_Rival_House_2F_PersonScript_RivalIntro::
	lock
	faceplayer
	msgbox TestTown_Rival_House_2F_PersonScript_RivalIntro_Text_0
	call TestTown_Rival_House_2F_SequenceScript_RivalIntroFinish
	release
	end


TestTown_Rival_House_2F_SequenceScript_RivalIntroFinish::
	applymovement OBJ_EVENT_ID_PLAYER, TestTown_Rival_House_2F_MovementScript_PlayerOutOfWay
	waitmovement 0
	applymovement 1, TestTown_Rival_House_2F_MovementScript_RivalLeaveRoom
	waitmovement 0
	removeobject 1
	playse SE_EXIT
	setvar VAR_RIVAL_STATE, 1
	return


TestTown_Rival_House_2F_SignScript_TV::
	lock
	special TurnOnTVScreen
	msgbox TestTown_Rival_House_2F_SignScript_TV_Text_0
	special TurnOffTVScreen
	release
	end


TestTown_Rival_House_2F_SignScript_Gamecube::
	lock
	msgbox TestTown_Rival_House_2F_SignScript_Gamecube_Text_0
	release
	end


TestTown_Rival_House_2F_SignScript_Notebook::
	lock
	msgbox TextTown_Rival_House_2F_TextScript_Notebook
	release
	end


TestTown_Rival_House_2F_SignScript_PC::
	lock
	msgbox TestTown_Rival_House_2F_SignScript_PC_Text_0
	release
	end


TestTown_Rival_House_2F_MovementScript_RivalLeaveRoom:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

TestTown_Rival_House_2F_MovementScript_PlayerOutOfWay:
	walk_down
	face_up
	step_end

TestTown_Rival_House_2F_PersonScript_RivalIntro_Text_0:
	.string "Placeholder Text$"

TestTown_Rival_House_2F_SignScript_TV_Text_0:
	.string "Wow! It's Super Mario Sunshine! This\n"
	.string "game was pretty solid.$"

TestTown_Rival_House_2F_SignScript_Gamecube_Text_0:
	.string "This Gamecube is in such good condition!$"

TestTown_Rival_House_2F_SignScript_PC_Text_0:
	.string "The computer is locked.$"

TextTown_Rival_House_2F_TextScript_Notebook::
	.string "{PLAYER} flipped open the notebook.\p"
	.string "ADVENTURE RULE NO. 1\n"
	.string "Open the MENU with START.\p"
	.string "ADVENTURE RULE NO. 2\n"
	.string "Record your progress with SAVE.\p"
	.string "The remaining pages are blank…$"
