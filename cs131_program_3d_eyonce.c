/**
 *@file cs131_program_3d_eyonce.c
 *@author Emily Yonce
 *@date 10/3/2012
 *@brief Find out how much grain a horse should have.
 */

#include <stdio.h>

/**
 @brief Entry point for program
 @param argc Number of command-line arguments
 @param argv The command-line tokens that were typed
 @returns 0
 */
int main(int argc, char* argv[])
{

  char answer;
  printf("How much many pounds does the horse weigh?");
  scanf(" %d", &answer);
  if(answer > 954 && answer < 1001)
  {
    printf("The horse needs 2 lbs of grain.");
  }
   if(answer > 1000 && answer < 1101)
  {
    printf("The horse needs 3 lbs of grain.");
  }
  if(answer > 1100 && answer < 1151)
  {
    printf("The horse needs 4 lbs of grain.");
  }
    
return 0;
  }