#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int num, guess;
    srand(time(0));
    num=rand()%100+1;
    printf("Guess a number between 1 and 100 : ");
    do{
        scanf("%d",&guess);
        if(guess>num)
        {
            printf("Tooo High! Try again : ");
        }
        else if(guess<num)
        {
            printf("Tooo Low! Try again : ");
        }
        else
        {
            printf("Finally You guessed it ! ");
        }
    }while(guess!=num);

    return 0;
}