GloriaTown_Rival_House_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GloriaTown_Rival_House_DefaultScript_DefaultState
	.byte 0


GloriaTown_Rival_House_DefaultScript_DefaultState::
	compare VAR_RIVAL_HOUSE_STATE, 0
	goto_if_eq GloriaTown_Rival_House_DefaultScript_DefaultState_1
	return

GloriaTown_Rival_House_DefaultScript_DefaultState_1:
	setvar VAR_RIVAL_HOUSE_STATE, 0
	return


GloriaTown_Rival_House_PersonScript_RivalGrandma::
	lock
	faceplayer
	msgbox GloriaTown_Rival_House_PersonScript_RivalGrandma_Text_0
	release
	end


GloriaTown_Rival_House_SignScript_TV::
	lock
	special TurnOnTVScreen
	msgbox GloriaTown_Rival_House_SignScript_TV_Text_0
	special TurnOffTVScreen
	release
	end


GloriaTown_Rival_House_TriggerScript_GrandmaDialogueScene_DirectionOne::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_Rival_House_MovementScript_FaceGrandma
	waitmovement 0
	call GloriaTown_Rival_House_ControlScript_GrandmaDialogueInit
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_Rival_House_MovementScript_ToGrandmaOne
	waitmovement 0
	msgbox GloriaTown_Rival_House_TextScript_GrandmaDialogue
	applymovement 1, GloriaTown_Rival_House_MovementScript_GrandmaFaceTable
	waitmovement 0
	release
	end


GloriaTown_Rival_House_TriggerScript_GrandmaDialogueScene_DirectionTwo::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_Rival_House_MovementScript_FaceGrandma
	waitmovement 0
	call GloriaTown_Rival_House_ControlScript_GrandmaDialogueInit
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_Rival_House_MovementScript_ToGrandmaTwo
	waitmovement 0
	msgbox GloriaTown_Rival_House_TextScript_GrandmaDialogue
	applymovement 1, GloriaTown_Rival_House_MovementScript_GrandmaFaceTable
	waitmovement 0
	release
	end


GloriaTown_Rival_House_TriggerScript_GrandmaDialogueScene_DirectionThree::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_Rival_House_MovementScript_FaceGrandma
	waitmovement 0
	call GloriaTown_Rival_House_ControlScript_GrandmaDialogueInit
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_Rival_House_MovementScript_ToGrandmaThree
	waitmovement 0
	msgbox GloriaTown_Rival_House_TextScript_GrandmaDialogue
	applymovement 1, GloriaTown_Rival_House_MovementScript_GrandmaFaceTable
	waitmovement 0
	release
	end


GloriaTown_Rival_House_TriggerScript_GrandmaDialogueScene_DirectionFour::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_Rival_House_MovementScript_FaceGrandmaTwo
	waitmovement 0
	call GloriaTown_Rival_House_ControlScript_GrandmaDialogueInit
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_Rival_House_MovementScript_ToGrandmaFour
	waitmovement 0
	msgbox GloriaTown_Rival_House_TextScript_GrandmaDialogue
	applymovement 1, GloriaTown_Rival_House_MovementScript_GrandmaFaceTable
	waitmovement 0
	release
	end


GloriaTown_Rival_House_ControlScript_GrandmaDialogueInit::
	setvar VAR_RIVAL_HOUSE_STATE, 1
	applymovement 1, GloriaTown_Rival_House_MovementScript_GrandmaFaceDoor
	waitmovement 0
	msgbox GloriaTown_Rival_House_ControlScript_GrandmaDialogueInit_Text_0
	return


GloriaTown_Rival_House_MovementScript_GrandmaFaceDoor:
	face_left
	step_end

GloriaTown_Rival_House_MovementScript_GrandmaFaceTable:
	face_right
	step_end

GloriaTown_Rival_House_MovementScript_FaceGrandma:
	face_right
	step_end

GloriaTown_Rival_House_MovementScript_FaceGrandmaTwo:
	face_up
	step_end

GloriaTown_Rival_House_MovementScript_ToGrandmaOne:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

GloriaTown_Rival_House_MovementScript_ToGrandmaTwo:
	walk_up
	walk_right
	walk_right
	walk_right
	step_end

GloriaTown_Rival_House_MovementScript_ToGrandmaThree:
	walk_up
	walk_right
	walk_right
	step_end

GloriaTown_Rival_House_MovementScript_ToGrandmaFour:
	walk_up
	walk_up
	walk_right
	step_end

GloriaTown_Rival_House_PersonScript_RivalGrandma_Text_0:
	.string "Hello, {PLAYER}{KUN}! I'm so proud of my\n"
	.string "grandson and you for growing up so\l"
	.string "well!$"

GloriaTown_Rival_House_SignScript_TV_Text_0:
	.string "It's the original Wizard of Oz! Now\n"
	.string "that's an oldie.$"

GloriaTown_Rival_House_ControlScript_GrandmaDialogueInit_Text_0:
	.string "Hey, {PLAYER}{KUN}!$"

GloriaTown_Rival_House_TextScript_GrandmaDialogue::
	.string "It's nice to see you, I hope you've been\n"
	.string "doing well. My grandson has been\l"
	.string "waiting for you so please go upstairs\l"
	.string "to see him.$"
