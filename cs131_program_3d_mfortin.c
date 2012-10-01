/**
* @file cs131_program_3d_mfortin.c
* @author MELISSA_FORTIN
* @date OCTOBER_1
* @brief Program 3: Picking four programs and implementing them 
*
*/

#include<stdio.h>

int main (int argc, char* argv[])
{
    int theUsersNumber;
    printf ("Input how much the horse weighs\n");
    scanf ("%d", &theUsersNumber);
    if (theUsersNumber >= 955 && theUsersNumber <= 1000)
    {
        printf ("Give the horse 2lbs of grain\n");
    }
    else
    {
        if (theUsersNumber >= 1001 && theUsersNumber <= 1100)
        {
            printf ("Give the horse 3lbs of grain\n");
        }
        else (theUsersNumber >= 1101 && theUsersNumber <= 1150);
        {
            printf ("Give the horse 4lbs of grain\n");
        }
    }
    printf ("The %d horse needs 3 lbs of grain and 8 lbs of hay today\n", theUsersNumber);
    return 0;
}





