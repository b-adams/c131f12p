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
    int timesWatched = 0;

    printf("\n How many times have you seen 'Lord of the Rings'? \n\n");
    scanf("%d", &timesWatched);
    
    if(timesWatched > 5)
    {
        printf("\n Maybe watch it again, for good measure \n\n");
    }
    
    else
    {
        if(timesWatched > 0)
        {
            printf("\n You definitely need to see it again \n\n");
        }
        
        else
        {
            printf("\n You need to see it! \n\n");
        }
    }
    
    printf("Remember the popcorn \n\n");
    
    return 0;
}