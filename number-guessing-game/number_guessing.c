#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  // Seed the random number generator

    int randomnumber = (rand() % 100)+ 1;  // Random number from 1 to 100
    int no_of_guesses=0;
    int guessed_number;

    //printf("Random number: %d\n",randomnumber);
   
    do{
        printf("guess the number");
        scanf("%d",& guessed_number);
        if(guessed_number>randomnumber){
            printf("lower number please!\n");
        }
        else if(guessed_number<randomnumber){
            printf("higher number please!\n");
        }
        else{
            printf("congrats!");
        }

        no_of_guesses++;

    }while(guessed_number!=randomnumber);

    printf("you guessed the number in %d guesses ",no_of_guesses);
    return 0;
}