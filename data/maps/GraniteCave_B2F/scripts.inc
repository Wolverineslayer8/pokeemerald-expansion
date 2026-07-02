# 1 "data/maps/GraniteCave_B2F/scripts.pory"

# 2 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_MapScripts::
# 3 "data/maps/GraniteCave_B2F/scripts.pory"
	.byte 0

GraniteCave_EventScript_Rime::
# 8 "data/maps/GraniteCave_B2F/scripts.pory"
	trainerbattle_single TRAINER_RIME, Rime_Intro, Rime_Outro
# 9 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox PostBattle_Rime, MSGBOX_AUTOCLOSE
# 10 "data/maps/GraniteCave_B2F/scripts.pory"
	waitmessage
	end


GraniteCave_EventScript_Sorrel::
# 28 "data/maps/GraniteCave_B2F/scripts.pory"
	trainerbattle_single TRAINER_SORREL, Sorrel_Intro, Sorrel_Outro
# 29 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox PostBattle_Sorrel, MSGBOX_AUTOCLOSE
# 30 "data/maps/GraniteCave_B2F/scripts.pory"
	waitmessage
	end


GraniteCave_EventScript_Brannik::
# 48 "data/maps/GraniteCave_B2F/scripts.pory"
	trainerbattle_single TRAINER_BRANNIK, Brannik_Intro, Brannik_Outro
# 49 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox PostBattle_Brannik, MSGBOX_AUTOCLOSE
# 50 "data/maps/GraniteCave_B2F/scripts.pory"
	waitmessage
	end


GraniteCave_EventScript_Tarin::
# 68 "data/maps/GraniteCave_B2F/scripts.pory"
	trainerbattle_single TRAINER_TARIN, Tarin_Intro, Tarin_Outro
# 69 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox PostBattle_Tarin, MSGBOX_AUTOCLOSE
# 70 "data/maps/GraniteCave_B2F/scripts.pory"
	waitmessage
	end


GraniteCave_EventScript_Elowen::
# 88 "data/maps/GraniteCave_B2F/scripts.pory"
	trainerbattle_single TRAINER_ELOWEN, Elowen_Intro, Elowen_Outro
# 89 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox PostBattle_Elowen, MSGBOX_AUTOCLOSE
# 90 "data/maps/GraniteCave_B2F/scripts.pory"
	waitmessage
	end


GraniteCave_EventScript_Kaela::
# 108 "data/maps/GraniteCave_B2F/scripts.pory"
	trainerbattle_single TRAINER_KAELA, Kaela_Intro, Kaela_Outro
# 109 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox PostBattle_Kaela, MSGBOX_AUTOCLOSE
# 110 "data/maps/GraniteCave_B2F/scripts.pory"
	waitmessage
	end


Rime_Intro::
# 15 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "Brr, it's freezing down here!$"

Rime_Outro::
# 19 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "I need to get more used to the cold!$"

PostBattle_Rime::
# 23 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "I would build a campfire down here to\n"
	.string "keep warm, but I don't think the\l"
	.string "ice-type Pokemon would like it very\l"
	.string "much.$"

Sorrel_Intro::
# 35 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "How do you think this place came to be?$"

Sorrel_Outro::
# 39 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "Ah, you got me!$"

PostBattle_Sorrel::
# 43 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "Maybe the bottom floor of this cave is\n"
	.string "cold because all the cold air flows\l"
	.string "downward and collects here?$"

Brannik_Intro::
# 55 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "Woah, I can see my own breath. Look!$"

Brannik_Outro::
# 59 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "Dang, you caught me off guard!$"

PostBattle_Brannik::
# 63 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "If I lick that rock over there, do you\n"
	.string "think my tongue will stick to it?$"

Tarin_Intro::
# 75 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "With how cold it is down here, it's the\n"
	.string "perfect place to train these muscles!$"

Tarin_Outro::
# 79 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "Oh no, leg cramp!$"

PostBattle_Tarin::
# 83 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "You know, coming down here without\n"
	.string "shoes was a really bad idea.$"

Elowen_Intro::
# 95 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "Do you think you can take on both of\n"
	.string "us?$"

Elowen_Outro::
# 99 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "We lost! How embarassing!$"

PostBattle_Elowen::
# 103 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "That meathead across from me got in my\n"
	.string "way. You got lucky.$"

Kaela_Intro::
# 115 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "Look at my cute icy Pokemon!$"

Kaela_Outro::
# 119 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "Aww, my cute pokemon!$"

PostBattle_Kaela::
# 123 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "You could've gone a bit easier on me.\n"
	.string "Ice types aren't know for being the\l"
	.string "best type, you know.$"
