/**
* @file   cs131_program_3f_ESHANE.c
* @author Eric Shane
* @date   10/03/12
* @brief  Program 3c: lordOfTheRings
*
* @todo write a program that tells you if you should watch the movies again
* 
* @status works
* 
* @assistance Colby Schrom
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
    int timesWatched;
    printf("Please enter the amount of times you have seen Lord Of The Rings: ");
    scanf("%d", &timesWatched);
    
    if (timesWatched > 5)
    {
        printf("Maybe watch it again, for good measure.\n");
    }
    
    if (timesWatched > 0 && timesWatched <= 5)
    {
        printf("You definitely need to see it again.\n");
    }
    
    if (timesWatched == 0)
    {
        printf("You need to see it!\n");
    }
    
         printf("P.S. Don't forget the popcorn!\n");
         
    return 0;
}