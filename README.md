Simple Instant Death Calculator for the Game Fate Grand Order

This calculator uses the following formula to come up with its results:
hitRate * deathRate * (1 - instantDeathResistUp + instantDeathResistDown) = Instant Death Chance

Future Plans:
I hope to add a simple yet efficient gui soon to add to the ease of use and make it a self contained standalone program. 
In terms of functionality I want to add a section for craft essense buffs and the use of multiple buffs at a time. Potential for a future
addition of all servants and craft essences that use this niche game mechanic with a more advanced calculator that enables you to click on the skills used rather than
manual input.


Note: When entering in inputs please omit percent signs (%), but please still use the same number.

Example: Ryougi Shiki (Saber) vs Gold Frame Hand (EXP)
  Factors: 
  - Ryougi Shiki (Saber) 3rd Skill Morning Star C = 100% Instant Death Resist Down
  - Ryougi Shiki (Saber) 100% Noble Phantasm = 60% Hit Rate
  - Gold Frame Hand (EXP) = 50% Death Rate
  - Gold Frame Hand (EXP) = 0% Instant Death Resist Up
  Calculation (External Inputs):
  hitRate = 60
  deathRate = 50
  instantDeathResistUp = 0
  instantDeathResistDown = 100
  Calculation (Internal):
  60% * 50% * (1 - 0% + 100%) = 60% Instant Death Chance
