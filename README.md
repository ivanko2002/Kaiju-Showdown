# Kaiju-Showdown

Group 102

Group members:

NAME: Ko Man Sing

UID: 3035778216

NAME: 

UID: 



Game descriptions:

Background: A text-based RPG game. In the future, Kaiju, monsters from another world are invading our world. Jagers which are gigantic robots are created to fight against them.

In this battle game, players will either control a Kaiju or a Jager and fight against each other. Each character will have different health points(HP), experience points(XP) and abilities.


Features:


1. Generation of random game sets or events:
- The characters(either a Kaiju or a Jager) are randomly generated to the players.
- The battle field will be randomly generated, benefitiing the Kaiju or the Jager.
- Some props are randomly generated to the characters after each round of battle.


2. Data structures for storing game status:
- Integer: HP, XP, attack power, defense power, agility, etc.
- Vector: list of props that the character currently has.
- String: description of abilities and props.


3. Dynamic memory management:
- After each round of battle, the props randomly assigned to players will be stored into the vector.
- When the props are used during a fight, the vector will pop them out. 
- The vector will limit the number and type of props the characters store (if a metal arm is generated to a Kaiju, it will be popped out automatically). 
- The players can check the props they currently have by returning the vector.

4. File input/output 
- Load and save game status.
- The players can choose to quit the battle at any time. The unfinished battle will be saved into several files tracking the hero status( remaining HP, XP, etc.)
- At the beginning of the game, the user can choose to continue the last battle or to start a new battle.

5. Program codes in multiple files:
- There will be mainly 3 main cpp files
- main.cpp: controls main logic of the game.
- preGame.cpp: assists game intialization, saving and loading status.
- inGame.cpp: controls everything in the battle.
- Other files such as .txt files, file I/O, Makefile and header files will also be used for displaying the game rules, characters' abilities, props, etc.
