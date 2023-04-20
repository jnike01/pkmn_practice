GloriaTown_Your_House_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GloriaTown_Your_House_2F_DefaultScript_DefaultState
	.byte 0


GloriaTown_Your_House_2F_DefaultScript_DefaultState::
	compare VAR_YOUR_HOUSE_STATE, 0
	goto_if_eq GloriaTown_Your_House_2F_DefaultScript_DefaultState_2
GloriaTown_Your_House_2F_DefaultScript_DefaultState_1:
	goto_if_unset FLAG_SYS_B_DASH, GloriaTown_Your_House_2F_DefaultScript_DefaultState_4
	return

GloriaTown_Your_House_2F_DefaultScript_DefaultState_2:
	setvar VAR_YOUR_HOUSE_STATE, 0
	goto GloriaTown_Your_House_2F_DefaultScript_DefaultState_1

GloriaTown_Your_House_2F_DefaultScript_DefaultState_4:
	setflag FLAG_SYS_B_DASH
	return


GloriaTown_Your_House_2F_TriggerScript_GotoMom::
	setvar VAR_YOUR_HOUSE_STATE, 1
	lock
	msgbox GloriaTown_Your_House_2F_TriggerScript_GotoMom_Text_0
	release
	end


GloriaTown_Your_House_2F_TriggerScript_GotoMom2::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_Your_House_2F_MovementScript_TurnTowardsDoor
	waitmovement 0
	goto GloriaTown_Your_House_2F_TriggerScript_GotoMom
	return


GloriaTown_Your_House_2F_SignScript_Gamecube::
	lock
	msgbox GloriaTown_Your_House_2F_SignScript_Gamecube_Text_0
	release
	end


GloriaTown_Your_House_2F_SignScript_TV::
	lock
	special TurnOnTVScreen
	msgbox GloriaTown_Your_House_2F_SignScript_TV_Text_0
	special TurnOffTVScreen
	release
	end


GloriaTown_Your_House_2F_SignScript_PC::
	lockall
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
	special DoPCTurnOnEffect
	playse SE_PC_ON
	msgbox gText_PlayerHouseBootPC
	special BedroomPC
	waitstate
	releaseall
	end


GloriaTown_Your_House_2F_SignScript_PCOff::
	lockall
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
	playse SE_PC_OFF
	special DoPCTurnOffEffect
	releaseall
	end


GloriaTown_Your_House_2F_SignScript_Notebook::
	lock
	msgbox TextTown_Your_House_2F_TextScript_Notebook
	release
	end


GloriaTown_Your_House_2F_MovementScript_TurnTowardsDoor:
	face_right
	step_end

GloriaTown_Your_House_2F_TriggerScript_GotoMom_Text_0:
	.string "Mom said to visit her downstairs to\ndiscuss something, so better go see her.$"

GloriaTown_Your_House_2F_SignScript_Gamecube_Text_0:
	.string "This Gamecube is in such good condition!$"

GloriaTown_Your_House_2F_SignScript_TV_Text_0:
	.string "The Legend of Zelda: The Wind Waker\nis on the TV. So nostalgic!$"

TextTown_Your_House_2F_TextScript_Notebook::
	.string "{PLAYER} flipped open the notebook.\p"
	.string "ADVENTURE RULE NO. 1\n"
	.string "Open the MENU with START.\p"
	.string "ADVENTURE RULE NO. 2\n"
	.string "Record your progress with SAVE.\p"
	.string "The remaining pages are blank…$"
