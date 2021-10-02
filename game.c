// In this game you'll have to guess the number that the computer chose to win.
// is not ready yet...

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rules (){

    printf ("1) CHOOSE A NUMBER (1 TO 100)\n");
    printf ("2) THE COMPUTER WILL GENERATE A NUMBER\n");
    printf ("3) YOU'LL HAVE TO GUESS WHICH NUMBER THE COMPUTER 'THOUGHT'\n");
    printf ("4) THE COMPUTER WILL TELL YOU IF THE NUMBER IS HIGHER OR LOWER THAN THE NUMBER YOU GUESS\n\n");
}

int main (){

     int numberChosen, *a;
     a = &numberChosen;

    printf("\n\n\n\n----------------- Welcome to the Game ! -----------------\n\n\n\n") ;
    printf("RULES OF THE GAME : \n\n");
    rules ();

    printf("THE COMPUTER NOW WILL THINK IN A NUMBER\n\n ");
    srand(time(NULL));

    printf ("CHOOSE A NUMBER : ");
    scanf("%d", &numberChosen);

        if (numberChosen==rand()%101){
            printf ("CONGRATULATIONS, YOU GUESSED THE NUMBER !!!!!!");
        } 
        while (numberChosen>rand()%101){
            printf("THE NUMBER IS HIGHER THAN COMPUTER'S NUMBER\n");
            printf("TRY AGAIN :");
            scanf("%d", &numberChosen);
        }
        while (numberChosen<rand()%101){
            printf("THE NUMBER IS LOWER THAN COMPUTER'S NUMBER");
            printf("TRY AGAIN :");
            scanf("%d", &numberChosen);
        }

    return 0;
}