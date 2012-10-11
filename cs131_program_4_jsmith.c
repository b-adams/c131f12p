/**
* @file   cs131_program_PROGRAMNUMBER_FLAST.c
* @author Jake Smith
* @date   October 3rd
* @brief  Program 3b: Find a place to eat
*
* @todo make a program that decides a bunch of things
* @done 
* 
* @status 
* 
*/

#include <stdio.h>



/**
* @brief give suggestion on how much to eat
* @param the weight of the horse
* @sideeffect 
*/
void do_prog_3c(int x);

/**
* @brief give suggestion on whether to watch lotr
* @param how many previous watchings
* @sideeffect 
*/
void do_prog_3a(int x);

/**
* @brief decide whether a patron is old enough to enter the bar
* @param age and tempurature outside
* @sideeffect 
*/
void do_prog_3d(int x, int y);

/**
* @brief find where they should go to dinner
* @param how much money they have
* @sideeffect 
*/
void do_prog_3b(int money);

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
  while (1)
  {
  int program;
  printf("Choose a program:\n\n");
  printf("1 for do_prog_3a\n");
  printf("2 for do_prog_3b\n");
  printf("3 for do_prog_3c\n");
  printf("4 for do_prog_3d\n\n");
  printf("0 to quit\n\n\n");
  scanf("%d", &program);
  
  if (program == 0)
  {
    return 0;
  }
  
  if (program == 1)
  {
    int usrinput;  
    printf("how many times have you watched lotr?\n");
    scanf("%d", &usrinput);
    do_prog_3a(usrinput);
  }
  if (program == 2)
  {
    int usrinput;  
    printf("how much money do you have for dinner?\n");
    scanf("%d", &usrinput);
    do_prog_3b(usrinput);
  }
  
    if (program == 3)
  {
    int usrinput;  
    printf("how much does your horse weigh?\n");
    scanf("%d", &usrinput);
    do_prog_3c(usrinput);
  }
    if (program == 4)
  {
    int usrinput1;
    int usrinput2;
    printf("how old are you?\n");
    scanf("%d", &usrinput1);
    printf("what is the tempurature?\n");
    scanf("%d", &usrinput2);
    do_prog_3d(usrinput1, usrinput2);
  }
  
  }
  
 
}

void do_prog_3b(int money)
{
  if (money >= 50)
  {
    printf("Fargo\n");
  }
  if (money < 50)
  {
    if (money > 20)
    {
        printf("Backstage Grill\n");
    }
    if (money < 20)
    {
        printf("Dinning Hall\n");
    }
  }
}

void do_prog_3c(int x)
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
     printf("You have a skinny horse, you should probably feed it more\n");
     printf("If your horse is not malnurished, feed it 2 pounds of grain\n");
    }
  }
}

void do_prog_3a(int x)
{
  if (x > 5)
  {
    printf("You should watch it again anyway\n");
  }
  if (x < 5)
  {
    if (x > 0)
    {
     printf("You should see it again\n");
    }
    if (x == 0)
    {
     printf("You have to see it\n");
    }
  }
}

void do_prog_3d(int x, int y)
{
  if (x > 21)
  {
    printf("Welcome to the Club!\n");
    
   if (y < 70)
    {
     printf("I'll take your coat fine sir\n");
    }
   if (y > 70)
   {
    printf("Go on inside sir\n");
   }
   
    
  }
    if (x < 21)
  {
    printf("You are not old enough\n");

    if (y < 70)
    {
        printf("keep yo coat\n");
    }
    if (y > 70)
    {
        printf("go away\n");
    }
   
    
  }
}


