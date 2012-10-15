/**
* @file cs131_program_3h_mfortin.c
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
    printf ("Input the time rounded to the nearest hour\n");
    scanf ("%d", &theUsersNumber);
    char timeOfDay;
    printf ("Input the time of day, either am or pm\n");
    scanf (" %c", &timeOfDay);
    printf("You entered: (%c)\n", timeOfDay);
    if (timeOfDay == 'a')
    {
        if (theUsersNumber > 1 && theUsersNumber < 9)
        {
            printf ("You should be sleeping\n");
        }
        else //theUsersNumber < 1 && theUsersNumber > 9
        {
            printf ("You should be awake\n");
        }
    }
    else //timeOfDay == 'p'
    {
        if (theUsersNumber > 9 && theUsersNumber < 12)
        {
            printf ("You should be sleeping\n");
        }
        else //theUsersNumber < 9 && theUsersNumber > 12
        {
            printf ("You should be awake\n");
        }
    }
    return 0;
}



    
    
    
