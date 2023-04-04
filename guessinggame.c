#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern int gg(void) {
    // Rules
    printf("%s", "WELCOME TO TO NUMBER GUESSING GAME\n");
    printf("%s", "I WILL GUESS A NUMBER BETWEEN 1 AND 100 AND YOU HAVE 10 CHANCES TO FIND OUT MY NUMBER.....\n");
    printf("%s", "SO NOW THAT YOU KNOW THE RULES TRY TO FIND MY NUMBER..........\n");

    int number, guess, tries;
    char enter;
    srand(time(NULL));
    number = rand() % 100 + 1;

    // Game
    for (tries = 9; tries > 0; tries--) {
        printf("%s", "=>");
        if(scanf("%d%c", &guess, &enter) != 2 || enter != '\n') {
            printf("failure\n");
        } else {
            if (guess > number) {
                printf("MY NUMBER IS LOWER, YOU HAVE %dREMAINING.\n", tries);
            } else if (guess < number) {
                printf("MY NUMBER IS HIGHER, YOU HAVE %d REMAINING.\n", tries);
            } else if (guess == number){
                printf("GOOD JOB! YOU GUESSED IT IN %d, TRIES.", tries);
            }
        }
    }
    printf("%s", "YOU LOST");
}