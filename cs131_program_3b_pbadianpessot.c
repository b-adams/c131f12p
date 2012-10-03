/*
 * @file cs131_program_3b_pbadianpessot.c
 * @author Pamela Badian-Pessot
 * @date October 3, 2012
 */

#include <stdio.h>
#include <stdbool.h>

/*
 * @brief main function
 * @param argc Number of command-line arguements
 * @param argv The comman-line tokens that were typed
 * @returns 0 if no news
 */

 

int main(int argc, char* argv[])
{
    int userInput;
    
    printf("Please input how much you are having for dinner:");
    scanf("%d", &userInput);
    if(userInput>=50)
    {
        printf("Go to the Fargo /n");
    }   else    {
        if(userInput>=20)
        {
            printf("Go to the Backstage Grill /n");
        } else  {
            printf("Go to the Dining Hall /n");
        }
        
    }
    return 0;
}
