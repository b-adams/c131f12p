/**
 *@file cs131_program_3b_zbutts.c
 *@brief program for where to eat based on amount of money
 *@author Zakarra Butts
 */

#include <stdio.h>

int main(int argc, char* argv[])
{
    char usersMoney = 0;
    
    printf("Do you have more than 50 dollars? Y or N (please use caps)");
    scanf(" %c", &usersMoney);
    
    if(usersMoney == 'Y')
    {
        printf("Go to the Fargo!");
    } else {
        printf("Do you have more than 20 dollars but less than 50 dollars? Y or N (please use caps)");
        scanf(" %c", &usersMoney);
        if(usersMoney == 'Y')
        {
            printf("Go to the Backstage Grille");
        } else
        {
            printf("Go to the Dinning Hall");
        }
    }
    return 0;
}
    