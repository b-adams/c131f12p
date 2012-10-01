/**
@file cs131_program_3e_smucha.c
@brief Determining if steak is raw, undercooked, or just right
@author Stacey Mucha
@date October 1, 2012
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
  int tempOfSteak;
  printf("What is the temperature of your steak?\n");
  scanf("%d", &tempOfSteak);
    
  if(tempOfSteak >= 145)
  {
    printf("Your steak is just right to eat.\n");
  } else {
    if(tempOfSteak > 70)
    {
      printf("Your steak is undercooked.\n");
    } else {
      printf("Your steak is raw.\n");
    }
  }
return 0;
}