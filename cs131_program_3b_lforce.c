/**
 *@file cs131_program_3b_lforce.c
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

int cash ;

walkthrough() ;

printf("How much cash do you have?\n") ;
scanf("%d" , &cash) ;

if (cash>50)
{
    printf("Go to the Fargo.\n") ;
} else {
        if (cash>20)
        {
            printf("Go to the backstage grill. \n") ;
            } else {
            if (cash>0)
                {
                printf("Stick to the dining hall.\n") ;
                } else {
                    printf("\n error \n") ;
                    } 
        }
}
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
        printf("First the program will ask you how much money you have.\n") ;
    
    pause() ;
            printf("Next you will enter how much money you have for spending.\n") ;
    
    pause() ;
            printf("Finally, the program will recommend where to eat based on your money.\n") ;
    
    pause() ;
    
}