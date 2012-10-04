/**
 * @file cs131_program_3b_jcorter.c
 * @author Jessica Corter
 * @date 10/03/2012
 * @status Compiles and runs
*/

#include <stdio.h>

/**
 * @brief This function displays where you should get dinner 
 * @param moneyForDinner the amount of money the user has to spend on dinner
 * @returns where to eat dinner
*/

void dinnerChoice( int moneyForDinner);

/**
 * @brief Main Procedure
 * @param argc the number of options in the command line
 * @return nothing
 * @author Jessica Corter
 *
 * This program will tell you where you should have dinner based on how much money you have availbale to spend
*/

int main (int argc, char* argv [])
{
    int moneyForDinner;
    
    printf ("Please enter how much money you have to spend on dinner: ");
    scanf("%d", &moneyForDinner);
    dinnerChoice (moneyForDinner);
    return moneyForDinner;   
}

void dinnerChoice( int moneyForDinner)
{
    if (moneyForDinner >= 50)
        printf(" Go to the FARGO for dinner!\n");
    else if (moneyForDinner < 20)
        printf("Go to the dining hall for dinner!\n");
    else
        printf(" Go to the backstage grill for dinner!\n");
    return;
}