/**
* @file   cs131_program_3b_ESHANE.c
* @author Eric Shane
* @date   10/03/12
* @brief  Program 3b: Dinner
*
* @todo write a program that tells you what you should do for dinner
* 
* @status works
* 
* @assistance Jake Smith, Colby Schrom
*/

# include <stdio.h>

/**
* @brief Main procedure.
*
* @param argv the command line (typed arguments)
* @param argc the number of options in the command line.
* @return zero if successful
* @author Eric Shane
*/

int main( int argc, char * argv[] )
{
    int theUsersNumber;
    printf ("Please enter the amount of money you have: $");
    scanf ("%d", &theUsersNumber);
    
    if (theUsersNumber > 50)
    {
        printf("Go may go to the Fargo.\n");
    }
    
    if (theUsersNumber <= 50 && theUsersNumber > 20)
    {
        printf("You should go to the Backstage grille.\n");
    }
    
    if (theUsersNumber <= 20)
    {
        printf("Stick to the Dinning Hall.\n");
    }
    return 0;
}