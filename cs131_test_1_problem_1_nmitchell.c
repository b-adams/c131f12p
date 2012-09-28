/**
 *@file cs131_test_1_problem_1_nmitchell.c
 *@author Nathan Mitchell
 *@date September 28, 2012
 *@status working
 */

#include <stdio.h>

const float C_TO_F_MULTIPLE = 1.8;
const float C_TO_F_SHIFT = 32;

void displayCelsiusInFahrenheit(int tempInC);
int getBoundedNumber(int minsize, int maxsize);

int main(int argc, char* argv[])
{
        int tempToConvert;
    tempToConvert = -40;
    displayCelsiusInFahrenheit(tempToConvert);
    tempToConvert = getBoundedNumber(-40, 50);
    displayCelsiusInFahrenheit(tempToConvert);
    return 0;
}

void displayCelsiusInFahrenheit(int tempInC)
{
    int tempInF;
    tempInF = tempInC * C_TO_F_MULTIPLE + C_TO_F_SHIFT;
    printf("%d celsius would be %d fahrenheit \n", tempInC, tempInF);
}

int getBoundedNumber(int minsize, int maxsize)
{
    int userInput;
    do {
        printf("Please enter a number between %d and %d \n", minsize, maxsize);
        scanf("%d \n", &userInput);
    }   while(userInput < minsize || userInput > maxsize);
    
    return userInput;
}