#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


enum hand {
    ROCK = 0, 
    PAPER, 
    SCISSOR
};

const char * const name[] = 
{
    [ROCK] = "Rock",
    [PAPER] = "Paper",
    [SCISSOR] = "Scissor",
};


extern int rps() {
    enum hand player;
    int computer;
    char player_selection[10];

    // Get computer decision
    srand(time(NULL));
    computer = rand() % 3;

    // Get player decision
    printf("Rock, Paper or Scissor?\n=>");
    scanf("%s", &player_selection);

    if (strcasecmp(player_selection, name[ROCK]) == 0) {
        player = ROCK;
    } else if (strcasecmp(player_selection, name[PAPER]) == 0) {
        player = PAPER;
    } else if (strcasecmp(player_selection, name[SCISSOR]) == 0) {
        player = SCISSOR;
    } else {
        printf("Error");
        return 0;
    }

    // Action Phase
    printf("You: %s\tComputer: %s\n", name[player], name[computer]);

    // Verdict Phase
    if (computer == player) {
        printf("Oops, we played the same thing.");
    } else if (player == 0) {
        if (computer == 1) {
            printf("Hehe, looks like I win this time.");
        } else {
            printf("Aww man, looks like you win this time.");
        }
    } else if (player == 1) {
        if (computer == 2) {
            printf("Hehe, looks like I win this time.");
        } else {
            printf("Aww man, looks like you win this time.");
        }
    } else {
        if (computer == 0) {
            printf("Hehe, looks like I win this time.");
        } else {
            printf("Aww man, looks like you win this time.");
        }
    }
}