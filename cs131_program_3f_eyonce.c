/**
 *@file cs131_program_3d_eyonce.c
 *@author Emily Yonce
 *@date 10/3/2012
 *@brief Tell someone if they should watch Lord of the Rings.
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
  printf("How many times have you seen 'Lord of the Rings'?");
  scanf(" %d", &answer);
  if(answer > 5)
  {
    printf("Maybe watch it again, for good measure");
  }
   if(answer > 0)
  {
    printf("You definitely need to see it again");
  }
  if(answer == 0)
  {
    printf("You need to see it!");
  }
    
printf("Remember the popcorn");

return 0;
    }