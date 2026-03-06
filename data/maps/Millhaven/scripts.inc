Millhaven_MapScripts::
	.byte 0


Millhaven_EventScript_Theo::
# 10 "data/maps/Millhaven/scripts.pory"
	lock
# 11 "data/maps/Millhaven/scripts.pory"
	faceplayer
# 12 "data/maps/Millhaven/scripts.pory"
	compare VAR_ACTIVE_COMPANION, 1
	goto_if_eq Millhaven_EventScript_Theo_2
Millhaven_EventScript_Theo_1:
# 15 "data/maps/Millhaven/scripts.pory"
	goto Millhaven_EventScript_Theo_Deploy
	return

Millhaven_EventScript_Theo_2:
# 13 "data/maps/Millhaven/scripts.pory"
	goto Millhaven_EventScript_Theo_Dismiss
	goto Millhaven_EventScript_Theo_1


Millhaven_EventScript_Theo_Deploy::
# 19 "data/maps/Millhaven/scripts.pory"
	msgbox Millhaven_Text_Theo_Deploy, MSGBOX_YESNO
# 20 "data/maps/Millhaven/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Millhaven_EventScript_Theo_Deploy_2
Millhaven_EventScript_Theo_Deploy_1:
# 23 "data/maps/Millhaven/scripts.pory"
	setvar VAR_ACTIVE_COMPANION, 1
# 24 "data/maps/Millhaven/scripts.pory"
	setflag FLAG_COMPANION_1_UNLOCKED
# 25 "data/maps/Millhaven/scripts.pory"
	setflag FLAG_COMPANION_IN_BATTLE
# 26 "data/maps/Millhaven/scripts.pory"
	special ScriptCreateTheoFollower
# 27 "data/maps/Millhaven/scripts.pory"
	hideobjectat 1, MAP_MILLHAVEN
# 28 "data/maps/Millhaven/scripts.pory"
	msgbox Millhaven_Text_Theo_DeployConfirm, MSGBOX_DEFAULT
# 29 "data/maps/Millhaven/scripts.pory"
	release
	end

Millhaven_EventScript_Theo_Deploy_2:
# 21 "data/maps/Millhaven/scripts.pory"
	goto Millhaven_EventScript_Theo_Deploy_Decline
	goto Millhaven_EventScript_Theo_Deploy_1


Millhaven_EventScript_Theo_Deploy_Decline::
# 34 "data/maps/Millhaven/scripts.pory"
	msgbox Millhaven_Text_Theo_DeployDecline, MSGBOX_DEFAULT
# 35 "data/maps/Millhaven/scripts.pory"
	release
	end


Millhaven_EventScript_Theo_Dismiss::
# 40 "data/maps/Millhaven/scripts.pory"
	msgbox Millhaven_Text_Theo_Dismiss, MSGBOX_YESNO
# 41 "data/maps/Millhaven/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Millhaven_EventScript_Theo_Dismiss_2
Millhaven_EventScript_Theo_Dismiss_1:
# 44 "data/maps/Millhaven/scripts.pory"
	special ScriptDestroyTheoFollower
# 45 "data/maps/Millhaven/scripts.pory"
	showobjectat 1, MAP_MILLHAVEN
# 46 "data/maps/Millhaven/scripts.pory"
	setvar VAR_ACTIVE_COMPANION, 0
# 47 "data/maps/Millhaven/scripts.pory"
	clearflag FLAG_COMPANION_IN_BATTLE
# 48 "data/maps/Millhaven/scripts.pory"
	clearflag FLAG_COMPANION_1_UNLOCKED
# 49 "data/maps/Millhaven/scripts.pory"
	msgbox Millhaven_Text_Theo_DismissConfirm, MSGBOX_DEFAULT
# 50 "data/maps/Millhaven/scripts.pory"
	release
	end

Millhaven_EventScript_Theo_Dismiss_2:
# 42 "data/maps/Millhaven/scripts.pory"
	goto Millhaven_EventScript_Theo_Dismiss_Cancel
	goto Millhaven_EventScript_Theo_Dismiss_1


Millhaven_EventScript_Theo_Dismiss_Cancel::
# 55 "data/maps/Millhaven/scripts.pory"
	msgbox Millhaven_Text_Theo_DismissCancel, MSGBOX_DEFAULT
# 56 "data/maps/Millhaven/scripts.pory"
	release
	end


Millhaven_Text_Theo_Deploy::
# 64 "data/maps/Millhaven/scripts.pory"
	.string "Hey! You heading out?\n"
	.string "Come on, I'll come with you.\n"
	.string "Travel together?\p"
	.string "$"

Millhaven_Text_Theo_DeployConfirm::
# 68 "data/maps/Millhaven/scripts.pory"
	.string "Let's go!\p"
	.string "Stay close and\n"
	.string "try not to walk into any bushes.\p"
	.string "$"

Millhaven_Text_Theo_DeployDecline::
# 72 "data/maps/Millhaven/scripts.pory"
	.string "Fair enough. I'll be here\n"
	.string "when you're ready.\p"
	.string "$"

Millhaven_Text_Theo_Dismiss::
# 76 "data/maps/Millhaven/scripts.pory"
	.string "Heading back already?\n"
	.string "Want me to wait here?\p"
	.string "$"

Millhaven_Text_Theo_DismissConfirm::
# 80 "data/maps/Millhaven/scripts.pory"
	.string "Got it. I'll wait here.\n"
	.string "Come find me when you need me.\p"
	.string "$"

Millhaven_Text_Theo_DismissCancel::
# 84 "data/maps/Millhaven/scripts.pory"
	.string "Thought so. Let's keep moving.\p"
	.string "$"
