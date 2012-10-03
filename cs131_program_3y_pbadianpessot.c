/*
 * @file cs131_program_3b_pbadianpessot.c
 * @author Pamela Badian-Pessot
 * @date October 3, 2012
 */

#include <stdio.h>
#include <stdbool.h>

/*
 * @brief main function
 * @param argc Number of command-line arguements
 * @param argv The comman-line tokens that were typed
 * @returns 0 if no news
 */

 

int main(int argc, char* argv[])
{
    int size;
    int price;
    int numberProduced;
    int massive;
    
    printf("How big is your car?");
    scanf("%d", &size);
    printf("How much does your car cost?");
    scanf("%d", &price);
    printf("How many of you car were made?");
    scanf("%d", &numberProduced);
    
    if(price>=10000000)
    {
        printf("You're In! \n");
    }   else    {
        if(massive>=2000000)
        {
            massive=price*size;
            printf("You're In! \n");
        } else  {
                if(collectible>=50000)
                    {    
                        collectible=price*numberProduced;
                        printf("You're In! \n");
                    }  else {
                        printf("No Admission");
            }
        }
    }
    return 0;
}
