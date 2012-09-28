/**
* @file cs131_test_1_problem_1_mfortin.c
* @author MELISSA_FORTIN
* @date SEPTEMBER_28
* @brief Test 1: Problem 1
*/


#include <stdio.h>

const float C_TO_F_MULTIPLE = 1.8;
const int C_TO_F_SHIFT = 32;

void displayCelciusInFahrenheit(int tempInC);
int getBoundedNumber(int minsize, int maxsize);

int main(int argc, char* argv[])
{
    void displayCelciusInFahrenheit(int tempToConvert);
    int tempToConvert = getBoundedNumber(-40, 50);
    void displayCelciusInFahrenheit(int tempToConvert);
    return 0;
}

void displayCelciusInFahrenheit(int tempInC)
{
    int tempInF = (tempInC*C_TO_F_MULTIPLE+C_TO_F_SHIFT);
    printf("%d Celsius would be %d Fahrenheit\n", tempInC, tempInF);
}

int getBoundedNumber(int minsize, int maxsize)
{
    int userInput;
    do {
        printf("Please enter a number between %d and %d\n", minsize, maxsize);\
        scanf("%d", &userInput);
    } while(userInput < minsize || userInput > maxsize);
    
    return userInput;
}