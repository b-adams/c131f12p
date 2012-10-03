/**
 *@file cs131_program_3g_dcrabtree.c
 *@author Danielle Crabtree
 *@date October 3, 2012
 *@brief The Clubbing Program
 *@status Working!
 */

#include <stdio.h>

/**
 *@author Danielle Crabtree
 *@brief Determines if the user can get into the club by asking for their age 
 *@param age The age the user inputs
 *@sideeffect None
 *@returns If the user can get into the club
 */

char canYouClub (int age);

/**
 *@author Danielle Crabtree
 *@brief and determines what should happen to their coat depending on the temperature outside
 *@param temp The temperature outside the uder inputs
 *@sideeffect None
 *@returns What should happen with their coat depending on the temperature outside
 */

char needCoat (int temp);

/**
 *@author Danielle Crabtree
 *@brief Where the program begins running
 *@sideeffect The program itself
 *@return This returns 0 if it works
 */

int main (void)
{
    int age;
    int temp;
    
    printf("I am the bouncer at this club.  Please enter your age: ");
    scanf("%d", &age);
    
    printf("Also, what is the temperature outside?: ");
    scanf("%d", &temp);
  
    if(age >= 21 && temp < 70)
    {
        printf("Welcome to the club! Can I take your coat for you?\n");
    }
    else if (age >= 21 && temp >= 70)
    {
        printf("Welcome to the club! Just get dancing!\n");
    }
    else if(age < 21 && temp < 70)
    {
        printf("Better keep on that coat.\n");
    }
    else if (age < 21 && temp >= 70)
    {
        printf("Time for you to go!\n");
    }   
    
    printf("Have a great evening!\n");
    return 0;
}// main