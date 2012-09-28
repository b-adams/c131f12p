/**
 *@file cs131_test_1_problem_1_jcorter.c
 *@author Jessica Corter
 *@date 9/28/2012
 *@status Working


#include <stdio.h>

const float C_TO_F_MULTIPLE = 1.8;
const int C_TO_F_SHIFT = 32;

void displayCelsiusInFahrenheit (int tempInC);
int getBoundedNumber (int minsize, int maxsize);

int main (int argc, char* argv [])
{
        int tempToConvert;
        tempToConvert = -40;
        displayCelsiusInFahrenheit (tempToConvert);
        tempToConvert = getBoundedNumber (-40, 50);
        displayCelsiusInFahrenheit (tempToConvert);
        return 0;
}

void displayCelsiusInFahrenheit (int tempInC)
{
    int tempInF;
    tempInF = (tempInC * C_TO_F_MULTIPLE) + C_TO_F_SHIFT;
    printf ("%d Celsius would be %d Fahrenheit\n", tempInC, tempInF);
}

int getBoundedNumber (int minsize, int maxsize)
{
    int userInput;
    do {
        printf ("please enter a number between %d and %d\n", minsize, maxsize);
        scanf ("%d", &userInput);
    }   while (userInput < minsize || userInput > maxsize);    

    return userInput;
}