/**
 *@file cs131_program_3f_lforce.c
 *@author Larry Force
 *@Date 10/3/12
 *@brief Determines how much more Lord of the Rings you need to watch
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
 *@brief decides how much Lord of the Rings you should watch
 *@return returns nothing
 */
void operation() ;

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
operation() ;
printf("Remember the popcorn. \n") ;
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
        printf(" First you will be asked how many times you have seen Lord of the Rings.\n") ;
    
    pause() ;
    
        printf("You will input an integer value for how many times you have seen Lord of the Rings. \n") ;
    
    pause() ;
    
        printf("Based on how many times you have seen the movie, you will recieve a recommendation on how to proceed. \n") ;
    
    pause() ;
    
        printf("Finally, you will be reminded to bring popcorn. \n") ;
    
    pause() ;
}



void operation()
{
int lotr ;
    
printf("How many times have you seen Lord of the Rings? \n \n") ;
scanf("%d" , &lotr) ;
    
if (lotr>5)
{
printf("Maybe watch it again, for good measure. \n") ;
}
else
    if (lotr>0)
    {
    printf("You deffinitely need to see it again. \n") ;
    }
    else
        if (lotr==0)
        {
        printf("you need to see it! \n") ;
        }
        else
            printf("error \n") ;
}