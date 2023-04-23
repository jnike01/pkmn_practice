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
	goto_if_set FLAG_ADVENTURE_STARTED, GloriaTown_Your_House_PersonScript_Mom_2
	msgbox GloriaTown_Your_House_PersonScript_Mom_Text_2
GloriaTown_Your_House_PersonScript_Mom_1:
	release
	end

GloriaTown_Your_House_PersonScript_Mom_2:
	msgbox GloriaTown_Your_House_PersonScript_Mom_Text_0
	special HealPlayerParty
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	delay 120
	fadescreen FADE_FROM_BLACK
	msgbox GloriaTown_Your_House_PersonScript_Mom_Text_1
	goto GloriaTown_Your_House_PersonScript_Mom_1


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
	.string "You and your Pokemon look tired. Please\n"
	.string "take this opportunity to rest...$"

GloriaTown_Your_House_PersonScript_Mom_Text_1:
	.string "You all look so much better now! If you\n"
	.string "feel fatigued and are in the area,\l"
	.string "remember you are always welcome to\l"
	.string "rest here. Stay safe out there honey!$"

GloriaTown_Your_House_PersonScript_Mom_Text_2:
	.string "Please go do your errands honey,\n"
	.string "they're very important.$"

GloriaTown_Your_House_ControlScript_MomDialogueInit_Text_0:
	.string "Hello, {PLAYER}{KUN}! Please come over and see me\nplease.$"

GloriaTown_Your_House_TextScript_MomDialogueOne::
	.string "The Professor came by this morning and\n"
	.string "told me that he wants you to stop by\l"
	.string "and see him to get your Starter and\l"
	.string "pokedex. Please be safe doing so and I\l"
	.string "love you {PLAYER}{KUN}. Also, make sure to\l"
	.string "see your friend beforehand like you\l"
	.string "said!$"
