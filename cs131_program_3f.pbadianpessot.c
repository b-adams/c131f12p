/*
 * @file cs131_program_3f.pbadianpessot.c
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
    
    printf("Please input the internal temperature of your steak");
    scanf("%d", &userInput);
    if(userInput<=70)
    {
        printf("Your steak is raw! \n");
    }   else    {
        if(userInput<=145)
        {
            printf("Your Steak is undercooked \n");
        } else  {
            printf("Your steak is just right! \n");
        }
        
    }
    return 0;
}
