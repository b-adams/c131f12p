/**
 *@file cs131_program_3b_dcrabtree.c
 *@author Danielle Crabtree
 *@date October 1, 2012
 *@status In Progress!
 */

#include <stdio.h>

char whereToEat (int money)

int main (void)
{
    int money;
    char restuarant;
    
    printf("Please enter how much money you have for dinner: ");
    scanf("%d", &money);
    
    restuarant= whereToEat(money);
    printf("You should eat at the %c\n", restuarant);
    
    return 0;
}//main

char whereToEat (int money)
{
    char restuarant;
    
    if(money >= 50)
        restuarant= 'Go to the Fargo!';
    else if (money < 50 && money>= 20)
        restuarant=  'Go to the Backstage Grill';
    else if (money < 20)
        restuarant= 'Maybe you should just stick to the Wells Dining Hall';
    
    return restuarant;
}//whereToEat

