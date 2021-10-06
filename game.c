// In this game you'll have to guess the number that the computer chose to win.
// is not ready yet...

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

int num, mNum;

void game() {

    while (num != mNum) {
        if (num > mNum) {
            printf("The number is higher, try it again : ");
            scanf("%d", & num);
        }
        if (num < mNum) {
            printf("The number is lower, try it again : ");
            scanf("%d", & num);
        }
    }
    if (num == mNum) {
        printf("CONGRATULATIONS, YOU GUESSED !!!!!. The Number Was %d", mNum);
    }

    if (num != mNum) {
        printf("I'm sorry, game over...");
    }
}

void rules() {

    printf("1) CHOOSE A NUMBER (1 TO 100)\n");
    printf("2) THE COMPUTER WILL GENERATE A NUMBER\n");
    printf("3) YOU'LL HAVE TO GUESS WHICH NUMBER THE COMPUTER 'THOUGHT'\n");
    printf("4) THE COMPUTER WILL TELL YOU IF THE NUMBER IS HIGHER OR LOWER THAN THE NUMBER YOU GUESS\n\n");
}

int main() {



    printf("\n\n\n\n----------------- Welcome to the Game ! -----------------\n\n\n\n");
    printf("RULES OF THE GAME : \n\n");
    rules();

    printf("THE COMPUTER NOW WILL THINK IN A NUMBER\n\n ");
    srand(time(NULL));
    mNum = rand() % 100;
    printf("CHOOSE A NUMBER : ");
    scanf("%d", & num);
    game();
    return 0;
}