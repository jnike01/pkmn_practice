TestTown_Your_House_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TestTown_Your_House_2F_DefaultScript_DefaultState
	.byte 0


TestTown_Your_House_2F_DefaultScript_DefaultState::
	compare VAR_YOUR_HOUSE_STATE, 0
	goto_if_eq TestTown_Your_House_2F_DefaultScript_DefaultState_1
	return

TestTown_Your_House_2F_DefaultScript_DefaultState_1:
	setvar VAR_YOUR_HOUSE_STATE, 0
	return


TestTown_Your_House_2F_TriggerScript_GotoMom::
	setvar VAR_YOUR_HOUSE_STATE, 1
	lock
	msgbox TestTown_Your_House_2F_TriggerScript_GotoMom_Text_0
	release
	end


TestTown_Your_House_2F_TriggerScript_GotoMom2::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, TestTown_Your_House_2F_MovementScript_TurnTowardsDoor
	waitmovement 0
	goto TestTown_Your_House_2F_TriggerScript_GotoMom
	return


TestTown_Your_House_2F_SignScript_Gamecube::
	lock
	msgbox TestTown_Your_House_2F_SignScript_Gamecube_Text_0
	release
	end


TestTown_Your_House_2F_SignScript_TV::
	lock
	special TurnOnTVScreen
	msgbox TestTown_Your_House_2F_SignScript_TV_Text_0
	special TurnOffTVScreen
	release
	end


TestTown_Your_House_2F_SignScript_PC::
	lockall
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
	special DoPCTurnOnEffect
	playse SE_PC_ON
	msgbox gText_PlayerHouseBootPC
	special BedroomPC
	waitstate
	releaseall
	end


TestTown_Your_House_2F_SignScript_PCOff::
	lockall
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
	playse SE_PC_OFF
	special DoPCTurnOffEffect
	releaseall
	end


TestTown_Your_House_2F_MovementScript_TurnTowardsDoor:
	face_right
	step_end

TestTown_Your_House_2F_TriggerScript_GotoMom_Text_0:
	.string "Mom said to visit her downstairs to\ndiscuss something, so better go see her.$"

TestTown_Your_House_2F_SignScript_Gamecube_Text_0:
	.string "This Gamecube is in such good condition!$"

TestTown_Your_House_2F_SignScript_TV_Text_0:
	.string "The Legend of Zelda: The Wind Waker\nis on the TV. So nostalgic!$"
