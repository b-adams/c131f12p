/**
 *@file cs131_program_3e_zbutts.c
 *@brief program for where to eat based on amount of money
 *@author Zakarra Butts
 */

#include <stdio.h>

int main(int argc, char* argv[])
{
    int numberTimesWatched = 0;
    
    printf("How many times have you watched Lord of the Rings?\n");
    scanf(" %d", &numberTimesWatched);
    if(numberTimesWatched>5)
    {
        printf("Maybe watch it again, for good measure!\n");
    } else
    {
        if(numberTimesWatched<5)
        {
            if(numberTimesWatched>0)
            {
                printf("You definitely need to see it again!\n");
            } else
            {
                if(numberTimesWatched==0)
                {
                    printf("You need to see it!\n");
                } else
                {
                    printf("You need to see it!\n");
                }
            }
        }
    }
    printf("Remember the popcorn!\n");
    return 0;
}