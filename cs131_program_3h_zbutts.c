/**
 *@file cs131_program_3e_zbutts.c
 *@brief program for where to eat based on amount of money
 *@author Zakarra Butts
 */

#include <stdio.h>

int main(int argc, char* argv[])
{
    char morningOrAfternoon = 0;
    int timeOfDay = 0;
    
    printf("Is it morning or afternoon? M or A (please use caps)");
    scanf(" %c", &morningOrAfternoon);
    if(morningOrAfternoon=='M')
    {
        printf("What time is it? (rounded to the nearest hour)\n");
        scanf(" %d", &timeOfDay);
        if(timeOfDay<9)
        {
            if(timeOfDay>1)
            {
            printf("You should be sleeping!\n");
            } else
            {
                printf("You should be awake!\n");
            }
        } else
        {
            printf("You should be awake!\n");
        }
    } else
    {
        printf("What time is it? (rounded to the nearest hour)\n");
        scanf(" %d", &timeOfDay);
        if(timeOfDay<12)
        {
            if(timeOfDay>9)
            {
                printf("You should be sleeping!\n");
            } else
            {
                printf("You should be awake!\n");
            }
        }
        else
        {
            printf("You should be awake!\n");
        }
        
    }
    return 0;
}