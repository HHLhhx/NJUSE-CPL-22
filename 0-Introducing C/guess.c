#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int high = 100;
    int number_of_tries = 7;
    /*
     * (1) print the rules of the game to players
     */
    printf("Let us play the Guess the Number game.\n"
           "The computer will generate a random number between 1 and %d.\n"
           "You have %d tries.\n",
           high, number_of_tries);
    /*
     * (2) generate a random number between 1 and high
     */
    srand(time(NULL));
    // s: seed; rand: random
    int secret = rand() % high + 1;
    // %: (mod) 5 % 3 = 2

    while (number_of_tries > 0)
    {
        /*
         * (3) ask the player to input his/her guess
         */
        printf("Please input your guess number.\n"
               "You still have %d tries.\n",
               number_of_tries);
        /*
         * (4) obtain the guessed number,
         * compare it with the srcret number,
         * and inform the player of the result.
         */
        int guess = 0;
        scanf("%d", &guess);
        printf("Test: guess = %d.\n",
               guess);

        if (guess == secret)
        {
            printf("You Win!\n");
            break;
        }
        else if (guess > secret)
        {
            printf("guess > secret\n");
        }
        else
        {
            printf("guess < secret\n");
        }
        /*
         * (5) repeat (3) and (4)
         */
        number_of_tries = number_of_tries - 1;
        // or: number_of_tries--;
    }

    if (number_of_tries == 0)
    {
        printf("You lose!\n");
    }

    return 0;
}
