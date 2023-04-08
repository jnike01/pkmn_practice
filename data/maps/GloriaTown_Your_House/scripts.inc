GloriaTown_Your_House_MapScripts::
	.byte 0


GloriaTown_Your_House_SignScript_TV::
	lock
	special TurnOnTVScreen
	msgbox GloriaTown_Your_House_SignScript_TV_Text_0
	special TurnOffTVScreen
	release
	end


GloriaTown_Your_House_PersonScript_Mom::
	lock
	faceplayer
	msgbox GloriaTown_Your_House_PersonScript_Mom_Text_0
	release
	end


GloriaTown_Your_House_TriggerScript_MomDialogueSceneOne_DirectionOne::
	lock
	call GloriaTown_Your_House_ControlScript_MomDialogueInit
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_Your_House_MovementScript_ToMomOne
	waitmovement 0
	msgbox GloriaTown_Your_House_TextScript_MomDialogueOne
	applymovement 1, GLORIA_TOWN_Your_House_MovementScript_MomFaceLeft
	waitmovement 0
	release
	end


GloriaTown_Your_House_TriggerScript_MomDialogueSceneOne_DirectionTwo::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_Your_House_MovementScript_PlayerFaceMomOne
	waitmovement 0
	call GloriaTown_Your_House_ControlScript_MomDialogueInit
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_Your_House_MovementScript_ToMomTwo
	waitmovement 0
	msgbox GloriaTown_Your_House_TextScript_MomDialogueOne
	applymovement 1, GLORIA_TOWN_Your_House_MovementScript_MomFaceLeft
	waitmovement 0
	release
	end


GloriaTown_Your_House_TriggerScript_MomDialogueSceneOne_DirectionThree::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_Your_House_MovementScript_PlayerFaceMomTwo
	waitmovement 0
	call GloriaTown_Your_House_ControlScript_MomDialogueInit
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_Your_House_MovementScript_ToMomThree
	waitmovement 0
	msgbox GloriaTown_Your_House_TextScript_MomDialogueOne
	applymovement 1, GLORIA_TOWN_Your_House_MovementScript_MomFaceLeft
	waitmovement 0
	release
	end


GloriaTown_Your_House_ControlScript_MomDialogueInit::
	setvar VAR_YOUR_HOUSE_STATE, 2
	applymovement 1, GloriaTown_Your_House_MovementScript_MomFaceRight
	waitmovement 0
	msgbox GloriaTown_Your_House_ControlScript_MomDialogueInit_Text_0
	return


GloriaTown_Your_House_MovementScript_MomFaceRight:
	face_right
	step_end

GLORIA_TOWN_Your_House_MovementScript_MomFaceLeft:
	face_left
	step_end

GloriaTown_Your_House_MovementScript_ToMomOne:
	walk_down
	walk_down
	walk_left
	walk_left
	step_end

GloriaTown_Your_House_MovementScript_ToMomTwo:
	walk_down
	walk_down
	walk_down
	walk_left
	step_end

GloriaTown_Your_House_MovementScript_ToMomThree:
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	step_end

GloriaTown_Your_House_MovementScript_PlayerFaceMomOne:
	face_down
	step_end

GloriaTown_Your_House_MovementScript_PlayerFaceMomTwo:
	face_left
	step_end

GloriaTown_Your_House_SignScript_TV_Text_0:
	.string "Breaking Bad seems to be on, that show\nis great!$"

GloriaTown_Your_House_PersonScript_Mom_Text_0:
	.string "Mom placeholder text$"

GloriaTown_Your_House_ControlScript_MomDialogueInit_Text_0:
	.string "Hello, {PLAYER}{KUN}! Please come over and see me\nplease.$"

GloriaTown_Your_House_TextScript_MomDialogueOne::
	.string "The Professor came by this morning and\n"
	.string "told me that he wants you to stop by\l"
	.string "and see him to get your Starter and\l"
	.string "pokedex.\p"
	.string "Please be safe doing so and I love you\n"
	.string "{PLAYER}{KUN}. Also, make sure to see your friend\l"
	.string "beforehand like you said! I love you and\l"
	.string "be safe!$"
