/**
* @file   cs131_program_3b_mpierce.c
* @author Michael Pierce
* @date   October 2, 2012
*/
#include <stdio.h>

/**
 *@brief gets dollar amount from user
 *@param x holds the amount entered
 *@return amount entered by user
 */
int getUserInput();

/**
 *@brief Main procedure.
 * @param argv the command line (typed arguments)
 * @param argc the number of options in the command line.
 * @return zero
 */
int main( int argc, char * argv[])
{
 int getUserInput();
 int x;
  x = getUserInput();

  if(x<21)
  {
  printf("You should dine at the dinning hall.=) \n");
  } else {
    if ((x>20) || (x<50))
    {
    printf ("You should dine at the Backstage Grill. \n");
    } else {  
      if(x>50)
      { 
      printf ("You should dine at the Fargo. \n");
      } else {
      // nothing
      } 
    }
  }
  printf("Have a nice day! \n");
 return 0;
}
  



int getUserInput()
{
  int x; 
  printf("Enter how much money you have for dinner in dollars:");
  scanf("%d", &x);
  return x;
}