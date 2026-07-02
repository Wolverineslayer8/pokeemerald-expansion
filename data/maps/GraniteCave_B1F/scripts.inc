# 1 "data/maps/GraniteCave_B1F/scripts.pory"

# 2 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_MapScripts::
# 3 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 4 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
# 5 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, GraniteCave_B1F_SetHoleWarp
# 6 "data/maps/GraniteCave_B1F/scripts.pory"
	.byte 0
# 7 "data/maps/GraniteCave_B1F/scripts.pory"

# 8 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_SetHoleWarp:
# 9 "data/maps/GraniteCave_B1F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 10 "data/maps/GraniteCave_B1F/scripts.pory"
	setholewarp MAP_GRANITE_CAVE_B2F
# 11 "data/maps/GraniteCave_B1F/scripts.pory"
	end

GraniteCave_EventScript_Rowan::
# 16 "data/maps/GraniteCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_ROWAN, Rowan_Intro, Rowan_Outro
# 17 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox PostBattle_Rowan, MSGBOX_AUTOCLOSE
# 18 "data/maps/GraniteCave_B1F/scripts.pory"
	waitmessage
	end


GraniteCave_EventScript_Mira::
# 36 "data/maps/GraniteCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_MIRA, Mira_Intro, Mira_Outro
# 37 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox PostBattle_Mira, MSGBOX_AUTOCLOSE
# 38 "data/maps/GraniteCave_B1F/scripts.pory"
	waitmessage
	end


GraniteCave_EventScript_Jax::
# 56 "data/maps/GraniteCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_JAX, Jax_Intro, Jax_Outro
# 57 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox PostBattle_Jax, MSGBOX_AUTOCLOSE
# 58 "data/maps/GraniteCave_B1F/scripts.pory"
	waitmessage
	end


GraniteCave_EventScript_Elara::
# 76 "data/maps/GraniteCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_ELARA, Elara_Intro, Elara_Outro
# 77 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox PostBattle_Elara, MSGBOX_AUTOCLOSE
# 78 "data/maps/GraniteCave_B1F/scripts.pory"
	waitmessage
	end


GraniteCave_EventScript_Tobin::
# 96 "data/maps/GraniteCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_TOBIN, Tobin_Intro, Tobin_Outro
# 97 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox PostBattle_Tobin, MSGBOX_AUTOCLOSE
# 98 "data/maps/GraniteCave_B1F/scripts.pory"
	waitmessage
	end


Rowan_Intro::
# 23 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "Check out this Pokemon I just caught!\n"
	.string "It's tough as nails!$"

Rowan_Outro::
# 27 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "Oh, well. Guess I need to actually train\n"
	.string "it, right?$"

PostBattle_Rowan::
# 31 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "I can't wait to see what this little guy\n"
	.string "evolves into!$"

Mira_Intro::
# 43 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "My Pokemon and I are one. I don't need\n"
	.string "to see to fight in this cave!$"

Mira_Outro::
# 47 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "I need to work harder on honing my\n"
	.string "other senses...$"

PostBattle_Mira::
# 51 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "I'll keep working hard!$"

Jax_Intro::
# 63 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "I can't see a dang thing!$"

Jax_Outro::
# 67 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "Wait, did I lose? I couldn't see!$"

PostBattle_Jax::
# 71 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "Next time, I need to bring a lantern.$"

Elara_Intro::
# 83 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "Hummmmm...$"

Elara_Outro::
# 87 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "Oh no, I broke my meditation!$"

PostBattle_Elara::
# 91 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "Hummm...$"

Tobin_Intro::
# 103 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "I feel a cold draft coming from the\n"
	.string "stairs. Good thing my pokemon are here\l"
	.string "to keep me warm!$"

Tobin_Outro::
# 107 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "You're really strong! You shouldn't have\n"
	.string "any problems ahead.$"

PostBattle_Tobin::
# 111 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "Feel free to keep warm by my Slugma\n"
	.string "before moving on!$"
