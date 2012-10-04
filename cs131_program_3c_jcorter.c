/**
 * @file cs131_program_3c_jcorter.c
 * @author Jessica Corter
 * @date 10/03/2012
 * @status Compiles and runs
*/

#include <stdio.h>

/**
 * @brief This function displays a message to alums specifying the color of their complimentary t-shirt
 * @param gradYear the year the user graduated (user input)
 * @returns personalized message with shirt color
*/

void alumDesignation(int gradYear);

/**
 * @brief Main Procedure
 * @param argc the number of options in the command line
 * @return gradYear
 * @author Jessica Corter
 *
 * This program will display the color of the complimentary t-shirt
*/

int main (int argc, char* argv [])
{
    int gradYear;
    
    printf ("Please enter the year you graduated from Wells: ");
    scanf("%d", &gradYear);
    alumDesignation (gradYear);
    return gradYear;   
}

void alumDesignation( int gradYear)
{
    gradYear=gradYear % 10;

    if (gradYear < 05)
        if(gradYear % 2 == 0)
            printf ("Dear alumnae, here is your complimentary cerulean and aquamarine t-shirt.\n");
        else printf ("Dear alumnae, here is your complimentary lavender and marigold t-shirt.\n");
    else
        if (gradYear % 2 == 0)
            printf("Dear alumni, here is your complimentary purple and yellow t-shirt.\n");
        else printf("Dear alumni, here is your complimentary blue and green t-shirt.\n");
    return;
}