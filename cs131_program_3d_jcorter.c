/**
 * @file cs131_program_3d_jcorter.c
 * @author Jessica Corter
 * @date 10/03/2012
 * @status Compiles and runs
*/

#include <stdio.h>

/**
 * @brief This function displays a message telling the user how much grain to feed a horse
 * @param horseWeight how much the horse weighs (user input)
 * @returns pounds of grain to feed a horse
*/

void howMuchToFeed(int horsesWeight);

/**
 * @brief Main Procedure
 * @param argc the number of options in the command line
 * @return horsesWeight
 * @author Jessica Corter
 *
 * This program will display how much to feed a horse given a specific weight
*/

int main (int argc, char* argv [])
{
    int horsesWeight;
    
    printf ("Please enter the weight of the horse: ");
    scanf("%d", &horsesWeight);
    howMuchToFeed (horsesWeight);
    return horsesWeight;   
}

void howMuchToFeed(int horsesWeight)
{
    if (955< horsesWeight < 1000)
        printf ("The %dlb horse needs 2lbs of grain and 8lbs of hay today.\n", horsesWeight);
    else if (1001<=horsesWeight<1100)
        printf("The %dlb horse needs 3lbs of grain and 8lbs of hay today.\n", horsesWeight);
    else printf("The %dlb horse needs 4lbs of grain and 8lbs of hay today.\n", horsesWeight);
    return;
}