#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));   //Seed random number generator
    int secret, guess;
    int score = 100;
    int numplay ;
    int min = 1,max = 100;
    secret = rand() % 100 + 1; //(0-99)+1 --> 1 - 100;
    printf("%d",secret);
    guess = 0;
    do{
    
    //secret = 50+(rand() % (201-50)); --> 50 - 200 
    printf("Guess Number 1 to 100\n"); 
    while (guess != secret) {
        scanf("%d", &guess);
        if (guess == secret) {
        score ;
        min = numplay + 1;
            printf("Your guess = %d is Correct!\n", guess);
            printf("score this Game :%d",score);
        } 
		else if (guess > secret)
		{
			score -= 10;
			max = guess - 1 ;
            printf("Your guess = %d is too High(score=%d)\n", guess,score);
            printf("Guess the winning number (%d-%d): ",min,max);
        }
        else
        {
        	score -= 10;
        	min = guess +1 ;
        	printf("Your guess = %d is too Low(score=%d)\n", guess,score);
            printf("Guess the winning number (%d-%d): ",min,max);
		}
    }
    printf("You're the Winner!\n");
    printf("Thanks for playing!\n");
    } while (guess != secret);
}