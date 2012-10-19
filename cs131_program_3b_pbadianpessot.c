/**
 * @file cs131_program_3b_pbadianpessot.c
 * @author Pamela Badian-Pessot
 * @date October 3, 2012
 */

#include <stdio.h>
#include <stdbool.h>

/**
 * @brief main function
 * @param argc Number of command-line arguements
 * @param argv The comman-line tokens that were typed
 * @returns 0 if no news
 */
 int main(int argc, char* argv[]);
 
/**
 * @brief large group are larger than 50 people
 */
 const int LARGE_GROUP=50;
 
 /**
  *@brief small groups are smaller than 20 people
  */
 const int SMALL_GROUP=20;

int main(int argc, char* argv[])
{
    int userInput;
    printf("Please input how much you are having for dinner:");
    scanf("%d", &userInput);
    if(userInput>=LARGE_GROUP)
    {
        printf("Go to the Fargo \n");
    }   else    {
        if(userInput>=SMALL_GROUP)
        {
            printf("Go to the Backstage Grill \n");
        } else  {
            printf("Go to the Dining Hall \n");
        }
        
    }
    return 0;
}
