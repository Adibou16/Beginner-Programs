#include <stdio.h>
#include <string.h>
#include "guessinggame.c"
#include "rockpaperscissor.c"

void main(void) {
    int selection;
    while (1) {
        printf("\nMake selection:\n1. Guessing Game\t 2. Rock Paper Scissor\n=>" );
        scanf("%d", &selection);
        if (selection == 1) {
            gg();
        }  else if (selection == 2) {
            rps();
        } else {
            printf("Error");
        }
    }
}