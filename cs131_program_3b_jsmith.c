/**
* @file   cs131_program_PROGRAMNUMBER_FLAST.c
* @author Jake Smith
* @date   October 3rd
* @brief  Program 3b: Find a place to eat
*
* @todo make a program that decides where to eat
* @done 
* 
* @status 
* 
*/

#include <stdio.h>



/**
* @brief find where they should go to dinner
* @param how much money they have
* @returns the place
*/
char whichRest(int money);

/**
* @brief Main
*
* @param argv the command line (typed arguments)
* @param argc the number of options in the command line.
* @return zero if successful
* @author Jake Smith
*/
int main( int argc, char * argv[] )
{
  int money;  
  printf("Prompt, how much do you have for dinner?");
  scanf("d", &money);
  whichRest(money);
  return 0;
}

int whichRest(int money)
{
  if money > 50;
  {
    return "Fargo";
  }
  if money < 50;
  {
    if money > 20;
    {
        return "Backstage Grill";
    }
    if money < 20;
    {
        return "Dinning Hall";
    }
  }
}
