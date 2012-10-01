/**
@file cs131_program_3g_smucha.c
@brief Determines whether or not a person is old enough for a club, and if they should keep their jacket on in relation to the temperature outside.
@author Stacey Mucha
@date October 1, 2012
@status Writing program
*/

#include <stdio.h>

/**
@brief main function of program
@param argc Number of command-line arguments
@param argv The command-line tokens that were typed
@returns 0 if works properly
*/
int main(int argc, char* argv[])
{
  int userAge;
  int tempOutside;
  
  printf("How old are you?\n");
  scanf(" %d", &userAge);
  printf("Also, what is the temperature outside?\n");
  scanf(" %d", &temptOutside)
  
  if(userAge >= 21)
  {
    printf("Welcome to the club!\n");
  } else {
    printf("Sorry friend. You are too young for this club.\n");
    }
    if(tempOutside > 70)
    {
      printf("Just get dancing.\n");
    } else {
      printf("Can I take your coat for you?\n");
    }
  }
  
  if(userAge < 21)
  {
    printf("Sorry friend. You are too young for this club.\n");
  }
  
  if(tempOutside > 70)
  {
    printf("Time for you to go.\n");
  } else {
    printf("Better keep on that coat.\n");
  }
  
  printf("Have a great evening!\n");
  
  return 0;
}
  

 