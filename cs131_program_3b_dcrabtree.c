/**
 *@file cs131_program_3b_dcrabtree.c
 *@author Danielle Crabtree
 *@date October 1, 2012
 *@status In Progress!
 */

#include <stdio.h>

char whereToEat (int money);

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
        printf("Maybe you should just stick to the Wells Dining Hall\n");
    
    return 0;
}// main


