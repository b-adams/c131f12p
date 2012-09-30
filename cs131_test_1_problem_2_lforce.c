/**
@file cs131_test1_problem_2_lforce.c
@author Prof Adams
@date 9/28/2012
*/


#include <stdio.h>

/**
 *@brief Modifier to be added to any date
 */

const int SOME_NUMBER ;


/**
 *@brief Entry point for the program
 *@param a First program input to add in
 *@param b Second program input to add in
 *@sideeffect Prompts user to enter two numbers in a specific format
 *@returns The sum of a , b , and two user inputs
 */

int getTwoAndAddTwo(int a , int b) ;

/**
 *@brief Entry point for the program
 *@sideeffect add four four numbers, and then ask the user to ask again in November
 *@returns 0 if all went well
 */

int main(void)
{
    int today ;
    int tomorrow ;
    tomorrow = getTwoAndAddTwo(4, SOME_NUMBER) ;
    printf("Please ask about it on Nov %dth", tomorrow) ;
    return today ;
}

int getTwoAndAddTwo(int a , int b)
{
    int firstvar ;
    printf("Please enter %s two numbers", "in the") ;
    printf(" form X IS 4 Y IS 5 THERE IS NO Z") ;
    int secondvar ;
    scanf("X IS %d Y IS %d THERE IS NO Z" , &firstvar , &secondvar) ;
    return a+b+firstvar+secondvar ;
}