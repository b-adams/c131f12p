/**
 *@file cs131_program_3b_cschrom.c
 *@author Colby Schrom
 *@date 10/2/12
 *@status Completed
 *@brief Where the User should go to dinner.
 */

#include <stdio.h>
#include <stdbool.h>

int theUsersNumber;

/*
 *@brief Recommends where the User should go to dinner.
 *@param theUsersNumber How much money the User has for dinner.
 */

int main(int argc, char* argv[])
{
    int theUsersNumber;
    printf("Input how much money you have to spend on dinner.\n");
    scanf("%d", &theUsersNumber);
    if (theUsersNumber > 50)
    {
        printf("Go to the Fargo.\n");
    }
    if (theUsersNumber <= 50 && 20 <= theUsersNumber)
    {
        printf("Go to the Backstage Grille.\n");
    }
    if (theUsersNumber < 20)
    {
        printf("Stick to the dining hall.\n");
    }
    return 0;
}

