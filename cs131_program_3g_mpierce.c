/**
*@file cs_program_3g_mpierce.c
*@date October 2, 2012
*@author Michael Pierce
**/
#include <stdio.h>




/**
* @brief Entry point for program
* @param argc Number of command-line arguments
* @param argv The command-line tokens that were typed
* @returns nothing
*/
int main(int argc, char* argv[])
{
    
    int age;
    printf("I am the bouncer at this club. Please enter your age. \n");
    scanf("%d", &age);
    int t;
    printf("Also, What is the temperature outside. \n");
    scanf("%d", &t);
    if (age>20)
    {
        printf("Welcome to the Club! \n");
         if (t>70)
         {
          printf("Just get dancing. \n");
         } else{
          printf("Can I take your coat for you? \n");
         }
        
    } else {
        
        printf("Sorry friend, you are too young for this club. \n");
        if (t<70)
        {
        printf("Better keep on that coat. \n");
        } else{
       printf("Time for you to go. \n");
        }
        
    }
    printf("Have a great evening. \n");
    return 0;
    
}

