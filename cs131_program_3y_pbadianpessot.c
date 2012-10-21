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
 *@brief a car is expensive if it costs over 10000000
 */
const int EXPENSIVE=10000000;

/**
 *@brief a car is massive if its over 2000000
 */
const int MASSIVE=2000000;

/**
 *@brief a car is a collectible if its over 50000
 */
const int COLLECTIBLE=50000;

int main(int argc, char* argv[])
{
    int size;
    int price;
    int numberProduced;
    int collectible;
    
    printf("How big is your car?");
    scanf("%d", &size);
    printf("How much does your car cost?");
    scanf("%d", &price);
    printf("How many of you car were made?");
    scanf("%d", &numberProduced);
    
    if(price>=EXPENSIVE)
    {
        printf("You're In! \n");
    }   else    {
        if(size*price>=MASSIVE)
        {
            printf("You're In! \n");
        } else  {
                if(price*numberProduced>=COLLECTIBLE)
                    {    
                        printf("You're In! \n");
                    }  else {
                        printf("No Admission \n");
            }
        }
    }
    return 0;
}
