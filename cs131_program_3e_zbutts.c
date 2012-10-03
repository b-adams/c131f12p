/**
 *@file cs131_program_3e_zbutts.c
 *@brief program for where to eat based on amount of money
 *@author Zakarra Butts
 */

#include <stdio.h>

int main(int argc, char* argv [])
{
    int tempOfSteak = 0;
    int ideal = 145;
    int room = 70;
    
    printf("What is the temperature of your steak?\n");
    scanf(" %d", &tempOfSteak);
    if(tempOfSteak>ideal)
    {
        printf("Your steak is overcooked.\n");
    }
    else
    {
        if(tempOfSteak==ideal)
        {
            printf("Your steak is just right. \n");
        }
        else
        {
            if(tempOfSteak>room)
            {
                printf("Your steak is undercooked.\n");
            } else
            {
                printf("Your steak is raw.\n");
            }
        }
    }
   return 0; 
}