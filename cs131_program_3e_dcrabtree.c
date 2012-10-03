/**
 *@file cs131_program_3e_dcrabtree.c
 *@author Danielle Crabtree
 *@date October 3, 2012
 *@brief The Ideal Steak Program
 *@status Working!
 */

#include <stdio.h>

/**
 *@author Danielle Crabtree
 *@brief Connects how cooked your beef is compared to the internal temperature of the beef the user inputs into the program
 *@param beefTemp The temperature of the beef the user inputs into the program
 *@sideeffect None
 *returns How cooked the user's steak is
 */

char howBeefIsCooked (int beefTemp);

/**
 *@author Danielle Crabtree
 *@brief Where the program begins running
 *@sideeffect The program itself
 *@return This returns 0 if it works
 */

int main (void)
{
    int beefTemp;
    
    printf("Please enter the temperature of you steak: ");
    scanf("%d", &beefTemp);
  
    if(beefTemp >= 145)
    {
        printf("Your steak is just right to eat!\n");
    }
    else if (beefTemp>=98)
    {
        printf("Your steak is a bit undercooked\n");
    }
    else if(beefTemp < 70)
    {
        printf("I think the cow is still mooing because your steak is raw!\n");
    }
    
    return 0;
}// main