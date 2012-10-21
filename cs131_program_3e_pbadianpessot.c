/**
 * @file cs131_program_3b_pbadianpessot.c
 * @author Pamela Badian-Pessot
 * @date October 3, 2012
 */

#include <stdio.h>
#include <stdbool.h>

/**
 * @brief main function
 * @param argc Number of command-line arguements
 * @param argv The comman-line tokens that were typed
 * @returns 0 if no news
 */
int main(int argc, char* argv[]);


 

int main(int argc, char* argv[])
{
    int userInput;
    
    printf("How many times have you seen Lord of the Rings? ");
    scanf("%d", &userInput);
    if(userInput>=5)
    {
        printf("Maybe watch it again, for good measure \n");
    }   else    {
        if(userInput==0)
        {
            printf("You need to see it!! \n");
        } else  {
            printf("You definately need to see it again \n");
        }
        
    }
    printf("Remeber the popcorn \n");
    return 0;
}
