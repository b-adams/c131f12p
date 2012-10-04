/**
* @file   cs131_program_3h_ESHANE.c
* @author Eric Shane
* @date   10/03/12
* @brief  Program 3c: Time
*
* @todo write a program that tells you if you should be up or asleep
* 
* @status works
* 
* @assistance Colby Schrom
*/

# include <stdio.h>

/**
* @brief Main procedure.
*
* @param argv the command line (typed arguments)
* @param argc the number of options in the command line.
* @return zero if successful
* @author Eric Shane
*/

int main( int argc, char * argv[] )
{
    int timeOfDay;
    printf("Please enter the time of day in military time rounded to the nearest hour:");
    scanf("%d", &timeOfDay);
    
    if (timeOfDay >= 1 && timeOfDay <= 9)
    {
        printf("You should be sleeping.\n");
    }
    
    if (timeOfDay > 9 && timeOfDay <= 12)
    {
        printf("You should be awake.\n");
    }
    
    if (timeOfDay >12 && timeOfDay <= 21)
    {
        printf("You should be awake.\n");
    }
    
    if (timeOfDay > 21 && timeOfDay <= 24)
    {
        printf("You should be sleeping.\n");
    }
    
    return 0;
    
}