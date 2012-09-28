/**
*@file cs131_test_1_problem_1_zbutts.c
*@author Zakarra Butts
*@date September 28, 2012
*@brief converting Celsius to Fahrenheit
*/

#include <stdio.h>

const float C_TO_F_MULTIPLE = 1.8;
const float C_TO_F_SHIFT = 32;

void displayCelsiusInFahrenheit(int tempInC);
int getBoundedNumber(int minsize, int maxsize); //Definition not shown

int main(int argc, char* argv[])
{
        int tempToConvert;
    tempToConvert = -40;
    tempToConvert = displayCelsiusInFahrenheit;
    tempToConvert = (-40, 50);
    tempToConvert = displayCelsiusInFahrenheit;
    return 0;
}

void displayCelsiusInFahrenheit(int tempInC)
{
    int tempInF;
    tempInF = tempInC*C_TO_F_MULTIPLE+C_TO_F_SHIFT;
    printf("\tXCelsius would be Y Fahrenheit", tempInC, tempInF);
}