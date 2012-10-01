/**
@file cs131_program_3b_smucha.c
@brief Determining where a person should eat based on amount of money they have.
@author Stacey Mucha
@date October 1, 2012
@status Working!
*/

#include <stdio.h>


/**
@brief main function of program
@param argc Number of command-line arguments
@param argv The command-line tokens that were typed
@returns 0 if works right
*/

int main(void)
{
  int moneyfordinner;
     printf("How much money do you have for dinner?\n");
     scanf("%d", &moneyfordinner); 
     if(moneyfordinner > 50) 
          printf("You should go to the Fargo!\n"); 
     else 
        if(moneyfordinner > 20) 
          printf("You should got to the Backstage Grill!\n"); 
        else 
          printf("You should just stick to the Dining Hall\n"); 
return 0;
}