/**
* @file cs131_program_3h_mfortin.c
* @author MELISSA_FORTIN
* @date OCTOBER_1
* @brief Program 3: Picking four programs and implementing them 
*
*/

#include<stdio.h>

int main (int argc, char* argv[])
{
    int theUsersNumber;
    printf ("Input the time rounded to the nearest hour\n");
    scanf ("%d", &theUsersNumber);
    char timeOfDay;
    printf ("Input the time of day, either am or pm\n");
    scanf ("%c", &timeOfDay);
    if (timeOfDay = am)
    {
        if (theUsersNumber > 1 && theUsersNumber < 9)
        {
            printf ("You should be sleeping\n");
        }
        else (theUsersNumber < 1 && theUsersNumber > 9);
        {
            printf ("You should be awake\n");
        }
    }
    else (timeOfDay = pm);
    {
        if theUsersNumber > 9 && theUsersNumber < 12
        {
            printf ("You should be sleeping\n");
        }
        else theUsersNumber < 9 && theUsersNumber > 12;
        {
            printf ("You should be awake\n");
        }
    }
    return 0;
}


    
    
    
