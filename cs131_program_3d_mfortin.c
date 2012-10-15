/**
* @file cs131_program_3d_mfortin.c
* @author MELISSA_FORTIN
* @date OCTOBER_1
* @brief Program 3: Picking four programs and implementing them redo
*
*/

#include<stdio.h>

/**
@brief Entry point for program
@returns 0 if no news (good news)
*/
int main (int argc, char* argv[])
{
    int theUsersNumber;
    int grain;
    printf ("Input how much the horse weighs\n");
    scanf ("%d", &theUsersNumber);
    if (theUsersNumber >= 955 && theUsersNumber <= 1000)
    {
        grain = 2;
    }
    else //theUsersNumber >= 1001 && theUsersNumber <= 1100
    {
        if (theUsersNumber >= 1001 && theUsersNumber <= 1100)
        {
            grain = 3;
        }
        else //theUsersNumber >= 1101 && theUsersNumber <= 1150
        {
            grain = 4;
        }
    }
    printf ("The %d horse needs %d lbs of grain and 8 lbs of hay today\n", theUsersNumber, grain);
    return 0;
}





