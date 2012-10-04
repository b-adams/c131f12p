
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
void howOld(int x, int y);

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
  int y;
  printf("Prompt, how old are you?\n");
  scanf("%d", &x);
  printf("Prompt, what tempurature is it??\n");
  scanf("%d", &y);
  howOld(x,y);
  
  
  return 0;
}

void howOld(int x, int y)
{
  if (x > 21)
  {
    printf("Welcome to the Club!\n");
    
   if (y < 70)
    {
     printf("I'll take your coat fine sir");
    }
   if (y > 70)
   {
    printf("Go on inside sir");
   }
   
    
  }
  
  
  if (x < 21)
  {
    
    
    
   printf("You are not old enough\n");

   if (y < 70)
    {
     printf("keep yo coat");
    }
   if (y > 70)
   {
    printf("go away");
   }
   
    
  }
}
