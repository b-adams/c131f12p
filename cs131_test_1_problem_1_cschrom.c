/**
 *@file cs131_test_1_problem_1_cschrom.c
 *@author Colby Schrom
 *@date 9/26/12
 *@status complete
 *@brief converts Celsius to Fahrenheit
 */

#include <stdio.h>

const float C_TO_F_MULTIPLE = 1.8;
const int C_TO_F_SHIFT = 32;

void displayCelsiusInFahrenheit(int tempInC);
int getBoundedNumber(int minsize, int maxsize);

int main(int argc, char* argv[])
{
        int tempToConvert;
    tempToConvert = -40;
    displayCelsiusInFahrenheit(tempToConvert);
    tempToConvert = getBoundedNumber(-40,50);
    displayCelsiusInFahrenheit(tempToConvert);
    return 0;
}

void displayCelsiusInFahrenheit(int tempInC)
{
    int tempInF;
    tempInF = tempInC*C_TO_F_MULTIPLE + C_TO_F_SHIFT;
    printf("%d Celcius would be %d Fahrenheit", tempInC, tempInF);
}

int getBoundedNumber(int minsize, int maxsize)
{
    int userInput;
    do {
        printf("Please enter a number between %d and %d\n", minsize, maxsize);
        scanf("%d", &userInput);
    } while (userInput < minsize || userInput > maxsize);
    
    return userInput;
}