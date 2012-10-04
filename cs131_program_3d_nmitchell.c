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
    int horseWeight = 0;
    
    printf("\n How much does the horse weigh? \n\n");
    scanf("%d", &horseWeight);
    
    if(horseWeight > 1150)
    {
        printf("\n that horse is to big to be ours \n\n");
    }
    
    else
    {
        if(horseWeight > 1101)
        {
        printf("\n Feed the horse 4 pounds of grain \n\n");
        }
        
        else
        {
             if(horseWeight > 1001)
            {
            printf("\n Feed the horse 3 pounds of grain \n\n");
            }
            
            else
            {
                if(horseWeight > 955)
                {
                printf("\n Feed the horse 2 pounds of grain \n\n");
                }
                
                else
                {
                    printf("\n that horse is to small to be ours \n\n");
                }
            }
        }
    }
    
    return 0;
}
