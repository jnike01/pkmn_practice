GloriaTown_Rival_House_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GloriaTown_Rival_House_DefaultScript_DefaultState
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GloriaTown_Rival_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GloriaTown_Rival_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_RIVAL_HOUSE_STATE, 0, GloriaTown_Rival_House_SceneScript_GrandmaDialogueScene
	.2byte 0


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


GloriaTown_Rival_House_SceneScript_GrandmaDialogueScene::
	lock
	call GloriaTown_Rival_House_ControlScript_GrandmaDialogueInit
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_Rival_House_MovementScript_ToGrandma
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
	closemessage
	return


GloriaTown_Rival_House_MovementScript_GrandmaFaceDoor:
	face_left
	step_end

GloriaTown_Rival_House_MovementScript_GrandmaFaceTable:
	face_right
	step_end

GloriaTown_Rival_House_MovementScript_ToGrandma:
	walk_up
	walk_up
	walk_right
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
