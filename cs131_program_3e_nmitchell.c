/**
 * @file cs131_program_3e_nmitchell.c
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
    int usersTemp = 0;

    printf("\n What is the temperature of your steak? \n\n");
    scanf("%d", &usersTemp);
    
    if(usersTemp > 145)
    {
        printf("\n Your steak is over cooked \n\n");
    }
    
    else
    {
        if(usersTemp == 145)
        {
            printf("\n YOUR STEAK IS PERFECT!!!!! \n\n");
        }
        
        else
        {
            if(usersTemp > 70)
            {
                printf("\n Your steak is undercooked \n\n");
            }
            
            else
            {
                printf("\n Your steak is raw \n\n");
            }
        }
    }
    
    return 0;
}