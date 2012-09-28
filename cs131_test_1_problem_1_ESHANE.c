#include <stdio.h>

const float C_TO_F_MULTIPLE = 1.8;


void displayCelsiusInFahrenheit(int tempInC);
int getBoundNumber(int minsize, int maxsize);

int main(int argc, char* argv[])
{
    int tempToConvert;
    
    return 0;
}

void displayCelsiusInFahrenheit(int tempInC);
{
    
}

int getBoundNumber(int minsize, int maxsize)
{
    int userInput;
    do {
        printf("Please enter a number between %d and %d.\n", minsize, maxsize);
        scanf ("%d", &userInput;);
    } while (userInput < minsize || userinPut > maxsize);
    
    return userInput;
}