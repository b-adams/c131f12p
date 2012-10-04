/**
 *@file cs131_program_3e_lforce.c
 *@author Larry Force
 *@date 10/3/12
 *@status working
 */


#include <stdio.h>
#include <stdbool.h>

/**
 *@author Larry Force
 *@brief pauses the program and waits for input
 *@return returns nothing
 */
void pause() ;


/**
 *@author Larry Force
 *@brief walks the user through the steps of the program
 *@return returns nothing
 */
void walkthrough() ;


/**
 *@author Larry Force
 *@brief main function
 *@param argc the number of options in the command line
 *@param argv the command line (typed arguments)
 *@return returns 0
 */

int main(int argc, char* argv[])
{
    walkthrough() ;
    
    int temp ;
    printf("What is the temperature of your steak? \n") ;
    scanf("%d" , &temp) ;

    if (temp>145)
    {
        printf("Your steak is done. \n ") ;
    }
    else
            if (temp==145)
            {
            printf("Your steak is just right. \n") ;
            }
            else
                if (temp>70)
                {
                printf("your steak is undercooked. \n") ;
                }
                else
                    if (temp<70)
                    {
                    printf("Your steak is raw. \n") ;
                    }
                    else
                        printf("Error. \n") ;

    return 0 ;
}


void pause()
{
    
    int meaningless ;
    
    printf(" Please enter a value and press Enter to continue \n ") ;
    scanf("%d" , &meaningless) ;
    
}


void walkthrough()
{
        printf("First you will be asked the temperature of your steak.\n") ;
    
    pause() ;
        printf("Next you will give the temperature of your steak to the nearest degree.\n") ;
    
    pause() ;
        printf("Finally the program will tell you how done your steak is.\n") ;
    
    pause() ;
    
}