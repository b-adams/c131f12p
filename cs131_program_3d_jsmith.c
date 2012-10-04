
/**
* @file   cs131_program_PROGRAMNUMBER_FLAST.c
* @author Jake Smith
* @date   October 3rd
* @brief  Program 3b: Horse
*
* @todo make a suggestion on how much to feed yo horse
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
  printf("Prompt, how much does yo horse weigh?\n");
  scanf("%d", &x);
  howMany(x);
  
  
  return 0;
}

void howMany(int x)
{
  if (x > 1101)
  {
    printf("You should feed it 4 pounds of grain\n");
    
  }
  
  
  if (x < 1101)
  {
    
    
    if (x > 1001)
    {
     printf("You should feed it 3 pounds of grain\n");
    }
    if (x < 1001)
    {
     printf("You have a skinny horse, you should probably feed it more")
     printf("If your horse is not malnurished, feed it 2 pounds of grain")
    }
  }
}
