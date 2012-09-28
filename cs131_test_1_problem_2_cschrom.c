/**
 *@file cs131_test_1_problem_2_cschrom.c
 *@author Colby Schrom
 *@date 9/28/2012
 */

#include <stdio.h>

/**
 *@brief Modifier to be added to any date
 */

const int SOME_NUMBER;


int getTwoAndAddTwo(int a, int b);

/**
 *@brief Entry point for the program
 *@sideeffect Add four numbers, and then ask the user to ask again in November
 *@returns 0 if all went well
 */

int main(int argc, char** argv)
{
    int tomorrow;
    tomorrow = getTwoAndAddTwo(4, SOME_NUMBER);
    printf("Please ask about it on Nov %dth", tomorrow);
    return tomorrow;
}

/**
 *@brief Add two program inputs to two user inputs
 *@param a First input to add in
 *@param b Second program input to add in
 *@sideeffect Prompts user to enter two numbers in a specific format
 *@returns The sum of a, b, and two user inputs
 */

int getTwoAndAddTwo(int a, int b)
{
    int firstvar;
    printf("Please enter two numbers in the");
    printf(" form X IS 4 Y IS 5 THERE IS NO Z");
    int secondvar;
    scanf("X IS %d Y IS %d THERE IS NO Z", &firstvar, &secondvar);
    return a + b + firstvar + secondvar;
}