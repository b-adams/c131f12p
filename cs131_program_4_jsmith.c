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
void feedYoHorse(int x);

/**
* @brief give suggestion on whether to watch lotr
* @param how many previous watchings
* @sideeffect 
*/
void lotr(int x);

/**
* @brief decide whether a patron is old enough to enter the bar
* @param age and tempurature outside
* @sideeffect 
*/
void oldEnough(int x, int y);

/**
* @brief find where they should go to dinner
* @param how much money they have
* @sideeffect 
*/
void whichRest(int money);

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
  printf("1 for lotr\n");
  printf("2 for whichRest\n");
  printf("3 for feedYoHorse\n");
  printf("4 for oldEnough\n\n");
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
    lotr(usrinput);
  }
  if (program == 2)
  {
    int usrinput;  
    printf("how much money do you have for dinner?\n");
    scanf("%d", &usrinput);
    whichRest(usrinput);
  }
  
    if (program == 3)
  {
    int usrinput;  
    printf("how much does your horse weigh?\n");
    scanf("%d", &usrinput);
    feedYoHorse(usrinput);
  }
    if (program == 4)
  {
    int usrinput1;
    int usrinput2;
    printf("how old are you?\n");
    scanf("%d", &usrinput1);
    printf("what is the tempurature?\n");
    scanf("%d", &usrinput2);
    oldEnough(usrinput1, usrinput2);
  }
  
  }
  
 
}

void whichRest(int money)
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

void feedYoHorse(int x)
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

void lotr(int x)
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

void oldEnough(int x, int y)
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


