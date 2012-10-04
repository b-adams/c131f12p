/**
 *@file cs131_program_3d_eyonce.c
 *@author Emily Yonce
 *@date 10/3/2012
 *@brief Determine the status of someones steak.
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
  printf("How many degress Farenheit is the internal temperature of your steak?");
  scanf(" %d", &answer);
  if(answer > 150)
  {
    printf("Your steak is overcooked");
  }
   if(answer < 140)
  {
    printf("Your steak is undercooked");
  }
  if(answer <50)
  {
    printf("Your steak is raw!");
  }
    if(answer > 139 && answer < 151)
  {
    printf("Your steak is just right");
  }

return 0;
    }