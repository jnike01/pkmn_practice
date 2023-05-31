GloriaTown_Your_House_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GloriaTown_Your_House_DefaultScript_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GloriaTown_Your_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GloriaTown_Your_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_YOUR_HOUSE_STATE, 1, GloriaTown_Your_House_SceneScript_MomDialogueSceneOne
	.2byte 0


GloriaTown_Your_House_DefaultScript_OnTransition::
	setrespawn HEAL_LOCATION_GLORIA_TOWN
	end


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


GloriaTown_Your_House_SceneScript_MomDialogueSceneOne::
	lock
	call GloriaTown_Your_House_ControlScript_MomDialogueInit
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_Your_House_MovementScript_ToMom
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
	closemessage
	return


GloriaTown_Your_House_MovementScript_MomFaceRight:
	face_right
	step_end

GLORIA_TOWN_Your_House_MovementScript_MomFaceLeft:
	face_left
	step_end

GloriaTown_Your_House_MovementScript_ToMom:
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	step_end

GloriaTown_Your_House_SignScript_TV_Text_0:
	.string "Breaking Bad seems to be on, that show\nis great!$"

GloriaTown_Your_House_PersonScript_Mom_Text_0:
	.string "Mom: You and your Pokemon look tired.\n"
	.string "Please take this opportunity to rest...$"

GloriaTown_Your_House_PersonScript_Mom_Text_1:
	.string "You all look so much better now! If you\n"
	.string "feel fatigued and are in the area,\l"
	.string "remember you are always welcome to\l"
	.string "rest here. Stay safe out there honey!$"

GloriaTown_Your_House_PersonScript_Mom_Text_2:
	.string "Mom: Please go do your errands honey,\n"
	.string "they're very important.$"

GloriaTown_Your_House_ControlScript_MomDialogueInit_Text_0:
	.string "Mom: Hello, {PLAYER}{KUN}! Please come over\n"
	.string "and see me.$"

GloriaTown_Your_House_TextScript_MomDialogueOne::
	.string "Mom: The Professor came by this morning\n"
	.string "and told me that he wants you to stop\l"
	.string "by and see him to get your Starter and\l"
	.string "pokedex. Please be safe doing so and I\l"
	.string "love you {PLAYER}{KUN}. Also, make sure to\l"
	.string "see your friend Red beforehand like\l"
	.string "you told him!$"
