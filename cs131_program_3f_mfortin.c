/**
* @file cs131_program_3f_mfortin.c
* @author MELISSA_FORTIN
* @date OCTOBER_1
* @brief Program 3: Picking four programs and implementing them 
*
*/

#include<stdio.h>

int main (int argc, char* argv[])
{
    int theUsersNumber;
    printf ("Input how many times you've seen 'Lord of the Rings'\n");
    scanf ("%d", &theUsersNumber);
    if (theUsersNumber > 5)
    {
        printf ("Maybe watch it again, for good measure\n");
    }
    else
    {
        if (theUsersNumber > 0)
        {
            printf ("You definitely need to see it again\n");
        }
        else (theUsersNumber == 0);
        {
            printf ("You need to see it!\n");
        }
    }
    printf ("Remember the popcorn\n");
    return 0;
}


