
/**
* @file   cs131_program_PROGRAMNUMBER_FLAST.c
* @author Jake Smith
* @date   October 3rd
* @brief  Program 3b: Lord of the Rings
*
* @todo make a suggestion on how many times they need to see Lord of the Rings
* @done 
* 
* @status 
* 
*/

#include <stdio.h>



/**
* @brief give suggestion on whether to watch lotr
* @param how many previous watchings
* @sideeffect whether to see it again
*/
void howMany(int x);

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
  int x;  
  printf("Prompt, how many times have you seen lotr?\n");
  scanf("%d", &x);
  howMany(x);
  
  
  return 0;
}

void howMany(int x)
{
  if (x > 5)
  {
    printf("You should probably go see it again\n");
  }
  
  
   if (x > 0)
    {
        printf("Go see it again\n");
    }
    if (x == 0)
    {
        printf("Go see it\n");
    }
  
}
