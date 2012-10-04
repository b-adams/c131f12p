/**
 *@file cs131_program_3b_eyonce.c
 *@author Emily Yonce
 *@date 10/3/2012
 *@brief Find out where user should go for dinner.
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
  printf("How much money do you have for dinner?");
  scanf(" %d", &answer);
  if(answer > 50)
  {
    printf("Go to the Fargo.");
  }
  if(answer < 50 && answer > 20)
  {
    printf("Go to the Backstage Grill.");
  }
  if (answer < 20)
  {
    printf("Stick to the Dining Hall.");
  }
    
return 0;
  }