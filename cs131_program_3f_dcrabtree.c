/**
 *@file cs131_program_3f_dcrabtree.c
 *@author Danielle Crabtree
 *@date October 3, 2012
 *@brief Lord of the Rings Program
 *@status Working!
 */

#include <stdio.h>

/**
 *@author Danielle Crabtree
 *@brief Asks how many times the user has seen Lord of the Rings and gives advice about if they should watch it again
 *@param numSeenLords The amount of times the user has seen Lords of the rings (which is inputed into the program)
 *@sideeffect None
 *@returns If the user should watch Lord of the rings
 */

char whatchLords (int numSeenLords);

/**
 *@author Danielle Crabtree
 *@brief Where the program begins running
 *@sideeffect The program itself
 *@return This returns 0 if it works
 */

int main (void)
{
    int numSeenLords;
    
    
    printf("Please enter how many times you have seen the movie Lord of the Rings: ");
    scanf("%d", &numSeenLords);
  
    if(numSeenLords >= 5)
    {
        printf("Maybe watch it again, for good measure.\n");
    }
    else if (numSeenLords > 0)
    {
        printf("You definitely need to see it again\n");
    }
    else if(numSeenLords == 0)
    {
        printf("You need to see it!\n");
    }
    
    printf("Remember the popcorn!\n");
    
    return 0;
}// main