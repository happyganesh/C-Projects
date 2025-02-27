#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
 int random,guess,count =0; // initialize Random for random number
                            //initialize Guess For User INPUT 
                            // initialize Count for User taking Steps  
 srand(time(NULL)); // Taking Refference for Genrating Random through PC time.
 random = rand()% 100 + 1; // Taking Reminder of any genrated number by 100
 printf("** Welcome the Number Guessing GAME **\n");
 do{
     if (count == 0){
     printf("Enter the Number to guess Random Number \n");}
     else{
        printf("Guess Again \n"); 
     }
     scanf("%d",&guess);
     count++;
     if (guess > random){
         printf("Enter Smaller Number !\n");
     }
     if (guess < random){
         printf("Enter Greater Number !\n");
     }
     if( guess == random) {
         printf("You Guess the corrent Number and number is %d \n",guess);
         printf("Total Attempt Taken = %d\n",count);
     }
 }
 while(guess != random);
 printf("*** GAME OVER ***\n");
 printf("Code is Written By Ganesh Verma");
    return 0;
}