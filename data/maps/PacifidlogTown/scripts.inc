# 1 "data/maps/PacifidlogTown/scripts.pory"

# 2 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_MapScripts::
# 3 "data/maps/PacifidlogTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_OnTransition
# 4 "data/maps/PacifidlogTown/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PacifidlogTown_OnResume
# 5 "data/maps/PacifidlogTown/scripts.pory"
	.byte 0
# 6 "data/maps/PacifidlogTown/scripts.pory"

# 7 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_OnTransition:
# 8 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
# 9 "data/maps/PacifidlogTown/scripts.pory"
	end
# 10 "data/maps/PacifidlogTown/scripts.pory"

# 11 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_OnResume:
# 12 "data/maps/PacifidlogTown/scripts.pory"
	setstepcallback STEP_CB_PACIFIDLOG_BRIDGE
# 13 "data/maps/PacifidlogTown/scripts.pory"
	end
# 14 "data/maps/PacifidlogTown/scripts.pory"

# 15 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_NinjaBoy::
# 16 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_NeatHousesOnWater, MSGBOX_NPC
# 17 "data/maps/PacifidlogTown/scripts.pory"
	end
# 18 "data/maps/PacifidlogTown/scripts.pory"

# 19 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Girl::
# 20 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_FastRunningCurrent, MSGBOX_NPC
# 21 "data/maps/PacifidlogTown/scripts.pory"
	end
# 22 "data/maps/PacifidlogTown/scripts.pory"

# 23 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Fisherman::
# 24 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_SkyPillarTooScary, MSGBOX_NPC
# 25 "data/maps/PacifidlogTown/scripts.pory"
	end
# 26 "data/maps/PacifidlogTown/scripts.pory"

# 27 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_TownSign::
# 28 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_TownSign, MSGBOX_SIGN
# 29 "data/maps/PacifidlogTown/scripts.pory"
	end
# 30 "data/maps/PacifidlogTown/scripts.pory"

# 31 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_FastRunningCurrent:
# 32 "data/maps/PacifidlogTown/scripts.pory"
	.string "The sea between PACIFIDLOG and\n"
# 33 "data/maps/PacifidlogTown/scripts.pory"
	.string "SLATEPORT has a fast-running tide.\p"
# 34 "data/maps/PacifidlogTown/scripts.pory"
	.string "If you decide to SURF, you could end\n"
# 35 "data/maps/PacifidlogTown/scripts.pory"
	.string "up swept away somewhere else.$"
# 36 "data/maps/PacifidlogTown/scripts.pory"

# 37 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_NeatHousesOnWater:
# 38 "data/maps/PacifidlogTown/scripts.pory"
	.string "See, isn't it neat?\n"
# 39 "data/maps/PacifidlogTown/scripts.pory"
	.string "These houses are on water!\p"
# 40 "data/maps/PacifidlogTown/scripts.pory"
	.string "I was born here!$"
# 41 "data/maps/PacifidlogTown/scripts.pory"

# 42 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_SkyPillarTooScary:
# 43 "data/maps/PacifidlogTown/scripts.pory"
	.string "The SKY PILLAR?\p"
# 44 "data/maps/PacifidlogTown/scripts.pory"
	.string "…Oh, you must mean that tall, tall\n"
# 45 "data/maps/PacifidlogTown/scripts.pory"
	.string "tower a little further out.\p"
# 46 "data/maps/PacifidlogTown/scripts.pory"
	.string "If you asked me, I wouldn't climb it.\n"
# 47 "data/maps/PacifidlogTown/scripts.pory"
	.string "It's too scary to get up that high.\p"
# 48 "data/maps/PacifidlogTown/scripts.pory"
	.string "Life at sea level in PACIFIDLOG,\n"
# 49 "data/maps/PacifidlogTown/scripts.pory"
	.string "that suits me fine.$"
# 50 "data/maps/PacifidlogTown/scripts.pory"

# 51 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_TownSign:
# 52 "data/maps/PacifidlogTown/scripts.pory"
	.string "PACIFIDLOG TOWN\p"
# 53 "data/maps/PacifidlogTown/scripts.pory"
	.string "“Where the morning sun smiles upon\n"
# 54 "data/maps/PacifidlogTown/scripts.pory"
	.string "the waters.”$"
# 55 "data/maps/PacifidlogTown/scripts.pory"

# 56 "data/maps/PacifidlogTown/scripts.pory"

# 57 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Trader1::
# 58 "data/maps/PacifidlogTown/scripts.pory"
    lock
# 59 "data/maps/PacifidlogTown/scripts.pory"
    faceplayer
# 60 "data/maps/PacifidlogTown/scripts.pory"
    msgbox PacifidlogTown_Text_Trader1_Hello, MSGBOX_YESNO
# 61 "data/maps/PacifidlogTown/scripts.pory"
    goto_if_eq VAR_RESULT, NO, PacifidlogTown_EventScript_Trader1_Decline
# 62 "data/maps/PacifidlogTown/scripts.pory"
    msgbox PacifidlogTown_Text_Trader1_ChooseMon, MSGBOX_DEFAULT
# 63 "data/maps/PacifidlogTown/scripts.pory"
    special ChoosePartyMon
# 64 "data/maps/PacifidlogTown/scripts.pory"
    waitstate
# 65 "data/maps/PacifidlogTown/scripts.pory"
    goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, PacifidlogTown_EventScript_Trader1_Decline
# 66 "data/maps/PacifidlogTown/scripts.pory"
    specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 67 "data/maps/PacifidlogTown/scripts.pory"
    goto_if_eq VAR_RESULT, SPECIES_TYRANITAR, PacifidlogTown_EventScript_Trader1_DoTrade
# 68 "data/maps/PacifidlogTown/scripts.pory"
    goto_if_eq VAR_RESULT, SPECIES_METAGROSS, PacifidlogTown_EventScript_Trader1_DoTrade
# 69 "data/maps/PacifidlogTown/scripts.pory"
    goto_if_eq VAR_RESULT, SPECIES_REGISTEEL, PacifidlogTown_EventScript_Trader1_DoTrade
# 70 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_REGIROCK, PacifidlogTown_EventScript_Trader1_DoTrade
# 71 "data/maps/PacifidlogTown/scripts.pory"
    goto_if_eq VAR_RESULT, SPECIES_REGICE, PacifidlogTown_EventScript_Trader1_DoTrade
# 72 "data/maps/PacifidlogTown/scripts.pory"
    msgbox PacifidlogTown_Text_Trader1_NoMatch, MSGBOX_DEFAULT
# 73 "data/maps/PacifidlogTown/scripts.pory"
    release
# 74 "data/maps/PacifidlogTown/scripts.pory"
    end
# 75 "data/maps/PacifidlogTown/scripts.pory"

# 76 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Trader1_DoTrade::
# 77 "data/maps/PacifidlogTown/scripts.pory"
    special RemovePartyMonAtIndex
# 78 "data/maps/PacifidlogTown/scripts.pory"
    giveitem ITEM_LEFTOVERS, 1
# 79 "data/maps/PacifidlogTown/scripts.pory"
    msgbox PacifidlogTown_Text_Trader1_Thanks, MSGBOX_DEFAULT
# 80 "data/maps/PacifidlogTown/scripts.pory"
    release
# 81 "data/maps/PacifidlogTown/scripts.pory"
    end
# 82 "data/maps/PacifidlogTown/scripts.pory"

# 83 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Trader1_Decline::
# 84 "data/maps/PacifidlogTown/scripts.pory"
    msgbox PacifidlogTown_Text_Trader1_Decline, MSGBOX_DEFAULT
# 85 "data/maps/PacifidlogTown/scripts.pory"
    release
# 86 "data/maps/PacifidlogTown/scripts.pory"
    end
# 87 "data/maps/PacifidlogTown/scripts.pory"

# 88 "data/maps/PacifidlogTown/scripts.pory"

# 89 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Trader2::
# 90 "data/maps/PacifidlogTown/scripts.pory"
    lock
# 91 "data/maps/PacifidlogTown/scripts.pory"
    faceplayer
# 92 "data/maps/PacifidlogTown/scripts.pory"
    msgbox PacifidlogTown_Text_Trader2_Hello, MSGBOX_YESNO
# 93 "data/maps/PacifidlogTown/scripts.pory"
    goto_if_eq VAR_RESULT, NO, PacifidlogTown_EventScript_Trader2_Decline
# 94 "data/maps/PacifidlogTown/scripts.pory"
    msgbox PacifidlogTown_Text_Trader2_ChooseMon, MSGBOX_DEFAULT
# 95 "data/maps/PacifidlogTown/scripts.pory"
    special ChoosePartyMon
# 96 "data/maps/PacifidlogTown/scripts.pory"
    waitstate
# 97 "data/maps/PacifidlogTown/scripts.pory"
    goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, PacifidlogTown_EventScript_Trader2_Decline
# 98 "data/maps/PacifidlogTown/scripts.pory"
    specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 99 "data/maps/PacifidlogTown/scripts.pory"
    goto_if_eq VAR_RESULT, SPECIES_BLAZIKEN PacifidlogTown_EventScript_Trader2_DoTrade
# 100 "data/maps/PacifidlogTown/scripts.pory"
    goto_if_eq VAR_RESULT, SPECIES_SCEPTILE, PacifidlogTown_EventScript_Trader2_DoTrade
# 101 "data/maps/PacifidlogTown/scripts.pory"
    goto_if_eq VAR_RESULT, SPECIES_SWAMPERT, PacifidlogTown_EventScript_Trader2_DoTrade
# 102 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_TENTACRUEL, PacifidlogTown_EventScript_Trader2_DoTrade
# 103 "data/maps/PacifidlogTown/scripts.pory"
    goto_if_eq VAR_RESULT, SPECIES_VAPOREON, PacifidlogTown_EventScript_Trader2_DoTrade
# 104 "data/maps/PacifidlogTown/scripts.pory"
    goto_if_eq VAR_RESULT, SPECIES_LANTURN, PacifidlogTown_EventScript_Trader2_DoTrade
# 105 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_MANTINE, PacifidlogTown_EventScript_Trader2_DoTrade
# 106 "data/maps/PacifidlogTown/scripts.pory"
    msgbox PacifidlogTown_Text_Trader2_NoMatch, MSGBOX_DEFAULT
# 107 "data/maps/PacifidlogTown/scripts.pory"
    release
# 108 "data/maps/PacifidlogTown/scripts.pory"
    end
# 109 "data/maps/PacifidlogTown/scripts.pory"

# 110 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Trader2_DoTrade::
# 111 "data/maps/PacifidlogTown/scripts.pory"
    special RemovePartyMonAtIndex
# 112 "data/maps/PacifidlogTown/scripts.pory"
    giveitem ITEM_SERIOUS_MINT, 2
# 113 "data/maps/PacifidlogTown/scripts.pory"
    msgbox PacifidlogTown_Text_Trader2_Thanks, MSGBOX_DEFAULT
# 114 "data/maps/PacifidlogTown/scripts.pory"
    release
# 115 "data/maps/PacifidlogTown/scripts.pory"
    end
# 116 "data/maps/PacifidlogTown/scripts.pory"

# 117 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Trader2_Decline::
# 118 "data/maps/PacifidlogTown/scripts.pory"
    msgbox PacifidlogTown_Text_Trader2_Decline, MSGBOX_DEFAULT
# 119 "data/maps/PacifidlogTown/scripts.pory"
    release
# 120 "data/maps/PacifidlogTown/scripts.pory"
    end
# 121 "data/maps/PacifidlogTown/scripts.pory"

# 122 "data/maps/PacifidlogTown/scripts.pory"

# 123 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Trader3::
# 124 "data/maps/PacifidlogTown/scripts.pory"
    lock
# 125 "data/maps/PacifidlogTown/scripts.pory"
    faceplayer
# 126 "data/maps/PacifidlogTown/scripts.pory"
    msgbox PacifidlogTown_Text_Trader3_Hello, MSGBOX_YESNO
# 127 "data/maps/PacifidlogTown/scripts.pory"
    goto_if_eq VAR_RESULT, NO, PacifidlogTown_EventScript_Trader3_Decline
# 128 "data/maps/PacifidlogTown/scripts.pory"
    msgbox PacifidlogTown_Text_Trader3_ChooseMon, MSGBOX_DEFAULT
# 129 "data/maps/PacifidlogTown/scripts.pory"
    special ChoosePartyMon
# 130 "data/maps/PacifidlogTown/scripts.pory"
    waitstate
# 131 "data/maps/PacifidlogTown/scripts.pory"
    goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, PacifidlogTown_EventScript_Trader3_Decline
# 132 "data/maps/PacifidlogTown/scripts.pory"
    specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 133 "data/maps/PacifidlogTown/scripts.pory"
    goto_if_eq VAR_RESULT, SPECIES_STARMIE, PacifidlogTown_EventScript_Trader3_DoTrade
# 134 "data/maps/PacifidlogTown/scripts.pory"
    goto_if_eq VAR_RESULT, SPECIES_LUDICOLO, PacifidlogTown_EventScript_Trader3_DoTrade
# 135 "data/maps/PacifidlogTown/scripts.pory"
    goto_if_eq VAR_RESULT, SPECIES_WHISCASH, PacifidlogTown_EventScript_Trader3_DoTrade
# 136 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_KINGDRA, PacifidlogTown_EventScript_Trader3_DoTrade
# 137 "data/maps/PacifidlogTown/scripts.pory"
    goto_if_eq VAR_RESULT, SPECIES_CLOYSTER, PacifidlogTown_EventScript_Trader3_DoTrade
# 138 "data/maps/PacifidlogTown/scripts.pory"
    goto_if_eq VAR_RESULT, SPECIES_MILOTIC, PacifidlogTown_EventScript_Trader3_DoTrade
# 139 "data/maps/PacifidlogTown/scripts.pory"
    msgbox PacifidlogTown_Text_Trader3_NoMatch, MSGBOX_DEFAULT
# 140 "data/maps/PacifidlogTown/scripts.pory"
    release
# 141 "data/maps/PacifidlogTown/scripts.pory"
    end
# 142 "data/maps/PacifidlogTown/scripts.pory"

# 143 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Trader3_DoTrade::
# 144 "data/maps/PacifidlogTown/scripts.pory"
    special RemovePartyMonAtIndex
# 145 "data/maps/PacifidlogTown/scripts.pory"
    giveitem ITEM_ABILITY_CAPSULE, 1
# 146 "data/maps/PacifidlogTown/scripts.pory"
    giveitem ITEM_ABILITY_PATCH, 1 
# 147 "data/maps/PacifidlogTown/scripts.pory"
    msgbox PacifidlogTown_Text_Trader3_Thanks, MSGBOX_DEFAULT
# 148 "data/maps/PacifidlogTown/scripts.pory"
    release
# 149 "data/maps/PacifidlogTown/scripts.pory"
    end
# 150 "data/maps/PacifidlogTown/scripts.pory"

# 151 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Trader3_Decline::
# 152 "data/maps/PacifidlogTown/scripts.pory"
    msgbox PacifidlogTown_Text_Trader3_Decline, MSGBOX_DEFAULT
# 153 "data/maps/PacifidlogTown/scripts.pory"
    release
# 154 "data/maps/PacifidlogTown/scripts.pory"
    end
# 155 "data/maps/PacifidlogTown/scripts.pory"

# 156 "data/maps/PacifidlogTown/scripts.pory"

# 157 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_Trader1_Hello::
# 158 "data/maps/PacifidlogTown/scripts.pory"
    .string "Hi!\nI'm the Route 131 trader.\p"
# 159 "data/maps/PacifidlogTown/scripts.pory"
    .string "You can trade your encounter here!\n"
# 160 "data/maps/PacifidlogTown/scripts.pory"
	.string "Hope you haven't evolved it!\p"
# 161 "data/maps/PacifidlogTown/scripts.pory"
	.string "In return I will give you 1x\n"
# 162 "data/maps/PacifidlogTown/scripts.pory"
    .string "Leftovers.$"
# 163 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_Trader1_ChooseMon::
# 164 "data/maps/PacifidlogTown/scripts.pory"
    .string "Let me take a look at your party.\nChoose a Pokémon.$"
# 165 "data/maps/PacifidlogTown/scripts.pory"

# 166 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_Trader1_NoMatch::
# 167 "data/maps/PacifidlogTown/scripts.pory"
    .string "Hmm... that's not quite what I'm looking for.\nCome back if you find one!$"
# 168 "data/maps/PacifidlogTown/scripts.pory"

# 169 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_Trader1_Thanks::
# 170 "data/maps/PacifidlogTown/scripts.pory"
    .string "Perfect! Thanks a bunch!\nHere, take this as a reward!$"
# 171 "data/maps/PacifidlogTown/scripts.pory"

# 172 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_Trader1_Decline::
# 173 "data/maps/PacifidlogTown/scripts.pory"
    .string "No worries!\nMaybe next time.$"
# 174 "data/maps/PacifidlogTown/scripts.pory"

# 175 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_Trader2_Hello::
# 176 "data/maps/PacifidlogTown/scripts.pory"
    .string "Hi!\nI'm the Route 132 trader.\p"
# 177 "data/maps/PacifidlogTown/scripts.pory"
    .string "You can trade your encounter here!\n"
# 178 "data/maps/PacifidlogTown/scripts.pory"
	.string "Hope you haven't evolved it!\p"
# 179 "data/maps/PacifidlogTown/scripts.pory"
	.string "In return I will give you 2x Serious\n"
# 180 "data/maps/PacifidlogTown/scripts.pory"
	.string "Mints.$"
# 181 "data/maps/PacifidlogTown/scripts.pory"

# 182 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_Trader2_ChooseMon::
# 183 "data/maps/PacifidlogTown/scripts.pory"
    .string "Let me take a look at your party.\nChoose a Pokémon.$"
# 184 "data/maps/PacifidlogTown/scripts.pory"

# 185 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_Trader2_NoMatch::
# 186 "data/maps/PacifidlogTown/scripts.pory"
    .string "Hmm... that's not quite what I'm looking for.\nCome back if you find one!$"
# 187 "data/maps/PacifidlogTown/scripts.pory"

# 188 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_Trader2_Thanks::
# 189 "data/maps/PacifidlogTown/scripts.pory"
    .string "Perfect! Thanks a bunch!\nHere, take this as a reward!$"
# 190 "data/maps/PacifidlogTown/scripts.pory"

# 191 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_Trader2_Decline::
# 192 "data/maps/PacifidlogTown/scripts.pory"
    .string "No worries!\nMaybe next time.$"
# 193 "data/maps/PacifidlogTown/scripts.pory"

# 194 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_Trader3_Hello::
# 195 "data/maps/PacifidlogTown/scripts.pory"
    .string "Hi!\nI'm the Pacifidlog trader.\p"
# 196 "data/maps/PacifidlogTown/scripts.pory"
    .string "You can trade your encounter here!\n"
# 197 "data/maps/PacifidlogTown/scripts.pory"
	.string "Hope you haven't evolved it!\p"
# 198 "data/maps/PacifidlogTown/scripts.pory"
	.string "In return I will give you 1x Ability\n"
# 199 "data/maps/PacifidlogTown/scripts.pory"
    .string "Capsule and 1x Ability Patch.$"
# 200 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_Trader3_ChooseMon::
# 201 "data/maps/PacifidlogTown/scripts.pory"
    .string "Let me take a look at your party.\nChoose a Pokémon.$"
# 202 "data/maps/PacifidlogTown/scripts.pory"

# 203 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_Trader3_NoMatch::
# 204 "data/maps/PacifidlogTown/scripts.pory"
    .string "Hmm... that's not quite what I'm looking for.\nCome back if you find one!$"
# 205 "data/maps/PacifidlogTown/scripts.pory"

# 206 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_Trader3_Thanks::
# 207 "data/maps/PacifidlogTown/scripts.pory"
    .string "Perfect! Thanks a bunch!\nHere, take this as a reward!$"
# 208 "data/maps/PacifidlogTown/scripts.pory"

# 209 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_Trader3_Decline::
# 210 "data/maps/PacifidlogTown/scripts.pory"
    .string "No worries!\nMaybe next time.$"
