#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int random_number = rand() % 100 + 1;
    int no_of_guesses = 0;
    int guess;
    // Print the random number
    // printf("Random number: %d guesses\n", random_number);
    do
    {
            printf("guessthe number");
            scanf("%d",&guess);
        if (guess>random_number){
            printf("lower number please!\n");
        }
        else if (guess<random_number){
            printf("higher number please!\n");
        }
        else{
            printf("congrats!!");
        }
        no_of_guesses++;
    } while (guess!= random_number);
    printf("you guessed the number in %d guesses", no_of_guesses);
    

    return 0;
}
