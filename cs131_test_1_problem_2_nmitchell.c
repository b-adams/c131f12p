/**
 *@file test1.list2.c
 *@author Prof Adams
 *@date 9/28/2012
 */

#include<stdio.h>

/**
 *@brief modifier to be added to any date
 */
int SOME_NUMBER;

/**
 *@brief entry point for the program
 *@sideeffect add four numbers, and then ask the user to ask again in Novemeber
 *return 0 if all went well
 */
int getTwoAndAddTwo(int a, int b);

/**
 *@brief Add two program inputs to two user inputs
 *@param a first program input to add in
 *@param b second program input to add in
 *@sideeffect prompts user to enter two numbers in a specific format
 *@return the sum of a, b, and two user inputs
 */
int main(int argc, char* argv[])
{
    int tomorrow;
    tomorrow = getTwoAndAddTwo(4, SOME_NUMBER);
    printf("Please ask about it on Nov %dth \n", tomorrow);
    return tomorrow;
}

int getTwoAndAddTwo(a, b)
{
    int firstVar;
    printf("Please enter two numbers, in the");
    printf(" form X IS 4 Y IS 5 There Is NO Z \n");
    int secondVar;
    scanf("X IS %d Y IS %d THERE IS NO Z", firstVar, secondVar);
    secondVar = a + b + firstVar;
    return 0;
}