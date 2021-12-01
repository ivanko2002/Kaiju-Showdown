# Kaiju-Showdown

Group 102

Members: Ko Man Sing 3035778216
         
         Chan Yu Hin 3035785984

Game descriptions:

A text-based RPG game. In the future, Kaiju, monsters from another world are invading our world. Jagers which are gigantic robots are created to fight against them.

In this game, players will either control a Kaiju or a Jager and fight against each other. Each character will have different health points(HP), experience points(XP) and skills.

Game rules:

1. The two players will choose a Jaegar and a Kaiju
2. The characters with higher speed can attack first
3. The players can exchange some props with their current xp
4. The game ends when the hp of one character is 0

Features:

1. Generation of random game sets or events:
- The characters(either a Kaiju or a Jaeger) are randomly generated to the players.
- The battlefield will be randomly generated.

2. Data structures for storing game status:
- Integer: HP, XP, attack power, defense power, speed, etc.
- String: description of skills and props.
- Vector: list of props that the character currently has.

3. Dynamic memory management:
- After each round of battle, players can exchange props and store into the vector.
- When the props are used during the showdown, the vector will pop them out. 
- The players can check the props they currently have by returning the vector.

4. File input/output 
- Load and save game status.
- The players can choose to quit the battle at any time. 
- At the beginning of the game, the user type the filename they set last time to load the data

5. Program codes in multiple files:
- The functions are separated into several files
- Other files such as txt files, file I/O, makefile and header files are also used

Compilation
1. Open linux command
2. Change to the directory where the files are located
3. Input "make main" as we have made a makefile
4. Run by inputting "./main"
5. Start playing 
