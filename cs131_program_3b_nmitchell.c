/**
 * @file cs131_program_3b_nmitchell.c
 * @author Nathan Mitchell
 * @date October 3, 2012
 * @status Working
 */

#include <stdio.h>

/**
 *@brief Entry point for program
 *@param argc Number of command-line arguments
 *@param argv The command-line tokens that were typed
 *@returns 0 if no news (good news)
*/

int main(int argc, char* argv[])
{
    int usersMoney = 0;
    
    printf("\n Lets figure out where you should go for dinner");
    printf("How much money do you have? \n\n");
    scanf("%d", &usersMoney);
    
    if(usersMoney > 50)
    {
        printf("\n Go to the Fargo \n\n");
    }
    
    else
    {
        if(usersMoney > 20)
        {
            printf("\n Go to the Backstage \n\n");
        }
        
        else
        {
            printf("\n Go to the dinning hall \n\n");
        }
    }
    
    return 0;
}