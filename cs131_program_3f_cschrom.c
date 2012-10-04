/*
 *@file cs131_program_3f_cschrom.c
 *@author Colby Schrom
 *@date 10/3/2012
 *@status Completed
 *@brief Tells you to watch Lord of the Rings
 */

#include <stdio.h>

int timesWatched;

/*
 *@brief Asks how many times you've watched Lord of the Rings
 *@param timesWatched
 */

int main(int argc, char* argv[])
{
    int timesWatched;
    printf("How many times have you watched Lord of the Rings?\n");
    scanf("%d", &timesWatched);
    if (timesWatched == 0)
    {
        printf("You need to see it!\n");
    }
    if (timesWatched > 0 && timesWatched <=5)
    {
        printf("You definetely need to see it again!\n");
    }
    if (timesWatched > 5)
    {
        printf("Maybe you should watch it again, just for good measure.\n");
    }
    printf("Don't forget the popcorn\n");
    return 0;
}