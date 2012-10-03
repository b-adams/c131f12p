/**
 *@file cs131_program_3b_dcrabtree.c
 *@author Danielle Crabtree
 *@date October 1, 2012
 *@status Working!
 */

#include <stdio.h>

/**
 *@author Danielle Crabtree
 *@brief Connects where to eat with the amount of money the user has
 *@param money The amount of money the user will input into the program
 *@sideeffect None
 *returns Where user should eat
 */

char whereToEat (int money);

/**
 *@author Danielle Crabtree
 *@brief Where the program begins running
 *@sideeffect The program itself
 *@return This returns 0 if it works
 */

int main (void)
{
    int money;
    char restuarant;
    
    printf("Please enter how much money you have for dinner: ");
    scanf("%d", &money);
  
    if(money >= 50)
        printf("You should go to the Fargo!\n");
    else if (money < 50 && money>= 20)
        printf("You should go to the Backstage Grill!\n");
    else if(money < 20)
        printf("Maybe you should just stick to the Wells Dining Hall...\n");
    
    return 0;
}// main


