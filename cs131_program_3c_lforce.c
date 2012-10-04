/**
 *@file cs131_program_3c_lforce.c
 *@author Larry Force
 *@date 10/3/12
 *@status working
 */



#include <stdio.h>
#include <stdbool.h>

/**
 *@author Larry Force
 *@brief determines whether the year supplied is odd or even
 *@return returns nothing
 */
void eo(int time) ;

/**
 *@author Larry Force
 *@brief this determines whether the year supplied is before or after the school became co-ed
 *@return returns nothing
 */
void date(int colors) ;

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

bool coEd ;

bool oddeven ;

/**
 *@author Larry Force
 *@brief main function
 *@param argc the number of options in the command line
 *@param argv the command line (typed arguments)
 *@return returns 0
 */
int main(int argc, char* argv[])
{

int year ;

walkthrough() ;

printf("What year did you graduate?") ;
scanf("%d" , &year) ;

eo(year) ;

date(year) ;

if (coEd)
    {
    if (oddeven)
    {
     printf("\n Hello alumni, here is your blue and green shirt. \n") ;
    }
    else
        if (!oddeven)
        {
        printf("\n Hello alumni, here is your purple and yellow shirt. \n") ;
        }
    }
    else
    
    if (!coEd)
    {
        if (oddeven)
        {
        printf("\n Hello alumnae, here is your curulean and aquamarine shirt. \n") ;    
        }
        else
            if (!oddeven)
            {
            printf("\n Hello alumnae, here is your lavender and marigold shirt. \n") ;
            }
    }

return 0 ;
}






void eo(int time)
{
    if (time%2 == 0)
    {
    oddeven = true ;
    }
        else
        {
        if (time%2 == 1)
            {
            oddeven = false ;
            }
                else{
                printf("error") ;
                }}}



void date(int colors)
{
        if (colors>2005)
    {
    coEd = true ;
    }
        else
        if (colors<2005)
            {
            coEd = false ;
            }
                else
                printf("error") ;
                }

void pause()
{
    
    int meaningless ;
    
    printf(" Please enter a value and press Enter to continue \n ") ;
    scanf("%d" , &meaningless) ;
    
}


void walkthrough()
{
        printf("First the program will ask what year you graduated.\n") ;
    
    pause() ;
        printf("Next the program will have you input the year you graduated.\n") ;
    
    pause() ;
        printf("The program will then do math in the background to determine if you graduated in a co-ed class and if you were even or odd.\n") ;
    
    pause() ;
        printf("Finally, the program will greet you and state what color shirt you are recieving.\n") ;
    
    pause() ;
    
}