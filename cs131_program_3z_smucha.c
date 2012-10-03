/**
@file cs131_program_3z_smucha.c
@brief Determining tax rate based on age and time in military
@author Stacey Mucha
@date October 3, 2012
@status Working
*/

#include <stdio.h>


/**
@brief main function of program
@param argc Number of command-line arguments
@param argv The command-line tokens that were typed
@returns 0 if works right
*/

int main(int argc, char* argv[])
{
  int userAge;
  int serviceTime;
  
  printf("How old are you?\n");
  scanf("%d", &userAge); 

  printf("How many years have you served in the military?\n");
  scanf("%d", &serviceTime);
  
  if(userAge < 18) 
  {
    printf("You don't have to pay any taxes.\n"); 
  } else {
    if(userAge <= 65 & serviceTime < 5) 
    {
      printf("You have a tax rate of 50 percent.\n"); 
    } else {
      if(userAge <= 65 & serviceTime >= 5)
      {
        printf("You have a tax rate of 20 percent.\n");
      } else {
        if(userAge > 65 & serviceTime < 5)
        {
          printf("You have a tax rate of 20 percent.\n");
        } else {
          if(userAge > 65 & serviceTime >= 5)
          {
            printf("You have a tax rate of 10 percent.\n");
          }
        }
      }
    }
  }
return 0;
}