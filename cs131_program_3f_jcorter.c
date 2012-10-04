/**
 * @file cs131_program_3f_jcorter.c
 * @author Jessica Corter
 * @date 10/03/2012
 * @status Compiles and runs
*/

#include <stdio.h>

/**
 * @brief This function displays a message in response to the number of times the user has seen the Lord of The Rings
 * @param numberOfTimes
 * @returns message in regards to the movie The Lord of the Rings
*/

void watchLordRings(int numberOfTimes);

/**
 * @brief Main Procedure
 * @param argc the number of options in the command line
 * @return numberOfTimes
 * @author Jessica Corter
*/

int main (int argc, char* argv [])
{
    int numberOfTimes;
    
    printf ("Please enter the number of times you have seen the Lord of the Rings: ");
    scanf("%d", &numberOfTimes);
    watchLordRings (numberOfTimes);
    return numberOfTimes; 
}

void watchLordRings(int numberOfTimes)
{
    if (numberOfTimes >= 5)
        printf ("Maybe watch it again for good measure.\n");
    else if (5>numberOfTimes>0)
        printf("You definitely need to see it again.\n");
    else printf("you need to see it again!\n");
    printf ("Remember the popcorn.");
    return;
}