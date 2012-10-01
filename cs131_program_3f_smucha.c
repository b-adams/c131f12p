/**
@file cs131_program_3f_smucha.c
@brief Program prompting user to enter how many times they have seen Lord of the Rings
@author Stacey Mucha
@date October 1, 2012
@status Writing program
*/

#include <stdio.h>

/**
@brief main program
@param argc Number of command-line arguments
@param argv The command-line tokens that were typed
@returns 0 if everything works
*/
int main(int argc, char* argv[])
{
  int timesSeenLordOfTheRings;
  int answer;
  
  printf("How many times have you seen 'Lord of the Rings'?/n");
  scanf(" %d", &answer);
  if(timesSeenLordOfTheRings > 5)
  {
    printf("Maybe watch it again, for good measure!/n")
  } else {
    if(timesSeenLordOfTheRings > 0)
    {
      printf("You definitely need to see it again!/n")
    } else {
      printf("You need to see it!/n")
    }
  }

  printf("Remember the popcorn!");

  return 0;
}