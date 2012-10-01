/**
* @file cs131_program_3b_mfortin.c
* @author MELISSA_FORTIN
* @date OCTOBER_1
* @brief Program 3: Picking four programs and implementing them 
*
*/

#include<stdio.h>

int main (int argc, char* argv[])
{
    int theUsersNumber;
    printf ("Input how much money you have for dinner\n");
    scanf ("%d", &theUsersNumber);
    if (theUsersNumber >= 50)
    {
        printf ("Go to the Fargo\n");
    }
    else
    {
        if (theUsersNumber >= 20 && theUsersNumber < 50)
        {
            printf ("Go to the Backstage Grille\n");
        }
        else (theUsersNumber < 20);
        {
            printf ("Stick to the Dining Hall\n");
        }
    }
    return 0;
}

