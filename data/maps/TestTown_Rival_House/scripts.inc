TestTown_Rival_House_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TestTown_Rival_House_DefaultScript_DefaultState
	.byte 0


TestTown_Rival_House_DefaultScript_DefaultState::
	compare VAR_RIVAL_HOUSE_STATE, 0
	goto_if_eq TestTown_Rival_House_DefaultScript_DefaultState_1
	return

TestTown_Rival_House_DefaultScript_DefaultState_1:
	setvar VAR_RIVAL_HOUSE_STATE, 0
	return


TestTown_Rival_House_PersonScript_RivalGrandma::
	lock
	faceplayer
	msgbox TestTown_Rival_House_PersonScript_RivalGrandma_Text_0
	release
	end


TestTown_Rival_House_SignScript_TV::
	lock
	special TurnOnTVScreen
	msgbox TestTown_Rival_House_SignScript_TV_Text_0
	special TurnOffTVScreen
	release
	end


TestTown_Rival_House_TriggerScript_GrandmaDialogueScene_DirectionOne::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, TestTown_Rival_House_MovementScript_FaceGrandma
	waitmovement 0
	call TestTown_Rival_House_ControlScript_GrandmaDialogueInit
	applymovement OBJ_EVENT_ID_PLAYER, TestTown_Rival_House_MovementScript_ToGrandmaOne
	waitmovement 0
	msgbox TestTown_Rival_House_TextScript_GrandmaDialogue
	applymovement 1, TestTown_Rival_House_MovementScript_GrandmaFaceTable
	waitmovement 0
	release
	end


TestTown_Rival_House_TriggerScript_GrandmaDialogueScene_DirectionTwo::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, TestTown_Rival_House_MovementScript_FaceGrandma
	waitmovement 0
	call TestTown_Rival_House_ControlScript_GrandmaDialogueInit
	applymovement OBJ_EVENT_ID_PLAYER, TestTown_Rival_House_MovementScript_ToGrandmaTwo
	waitmovement 0
	msgbox TestTown_Rival_House_TextScript_GrandmaDialogue
	applymovement 1, TestTown_Rival_House_MovementScript_GrandmaFaceTable
	waitmovement 0
	release
	end


TestTown_Rival_House_TriggerScript_GrandmaDialogueScene_DirectionThree::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, TestTown_Rival_House_MovementScript_FaceGrandma
	waitmovement 0
	call TestTown_Rival_House_ControlScript_GrandmaDialogueInit
	applymovement OBJ_EVENT_ID_PLAYER, TestTown_Rival_House_MovementScript_ToGrandmaThree
	waitmovement 0
	msgbox TestTown_Rival_House_TextScript_GrandmaDialogue
	applymovement 1, TestTown_Rival_House_MovementScript_GrandmaFaceTable
	waitmovement 0
	release
	end


TestTown_Rival_House_TriggerScript_GrandmaDialogueScene_DirectionFour::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, TestTown_Rival_House_MovementScript_FaceGrandmaTwo
	waitmovement 0
	call TestTown_Rival_House_ControlScript_GrandmaDialogueInit
	applymovement OBJ_EVENT_ID_PLAYER, TestTown_Rival_House_MovementScript_ToGrandmaFour
	waitmovement 0
	msgbox TestTown_Rival_House_TextScript_GrandmaDialogue
	applymovement 1, TestTown_Rival_House_MovementScript_GrandmaFaceTable
	waitmovement 0
	release
	end


TestTown_Rival_House_ControlScript_GrandmaDialogueInit::
	setvar VAR_RIVAL_HOUSE_STATE, 1
	applymovement 1, TestTown_Rival_House_MovementScript_GrandmaFaceDoor
	waitmovement 0
	msgbox TestTown_Rival_House_ControlScript_GrandmaDialogueInit_Text_0
	return


TestTown_Rival_House_MovementScript_GrandmaFaceDoor:
	face_left
	step_end

TestTown_Rival_House_MovementScript_GrandmaFaceTable:
	face_right
	step_end

TestTown_Rival_House_MovementScript_FaceGrandma:
	face_right
	step_end

TestTown_Rival_House_MovementScript_FaceGrandmaTwo:
	face_up
	step_end

TestTown_Rival_House_MovementScript_ToGrandmaOne:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

TestTown_Rival_House_MovementScript_ToGrandmaTwo:
	walk_up
	walk_right
	walk_right
	walk_right
	step_end

TestTown_Rival_House_MovementScript_ToGrandmaThree:
	walk_up
	walk_right
	walk_right
	step_end

TestTown_Rival_House_MovementScript_ToGrandmaFour:
	walk_up
	walk_up
	walk_right
	step_end

TestTown_Rival_House_PersonScript_RivalGrandma_Text_0:
	.string "Hello, {PLAYER}{KUN}! I'm so proud of my\ngrandson and you for growing up so well!$"

TestTown_Rival_House_SignScript_TV_Text_0:
	.string "It's the original Wizard of Oz! Now that's an oldie.$"

TestTown_Rival_House_ControlScript_GrandmaDialogueInit_Text_0:
	.string "Hey, {PLAYER}{KUN}!$"

TestTown_Rival_House_TextScript_GrandmaDialogue::
	.string "Placeholder Text$"
