#include <stdio.h>

const float C_TO_F_MULTIPLE=1.8;
const int C_TO_F_SHIFT=32;

void displayCelsiusInFahrenheit(int tempInC);


int main(int argc, char* argv[])
{
    int tempToConvert;
    tempToConvert=-40;
    tempToConvert=getBoundedNumber(-40,50);
    return 0;
}

void displayCelciusInFahrenheit(int tempInC)
{
   int tempInF;
   tempInF=tempInC*C_TO_F_MULTIPLE+C_TO_F_SHIFT;
}

int getBoundedNumber(int minsize, int maxsize)
{
    int userInput;
    do {
        printf("Please enter a number between %d and %d\n", minsize, maxsize);
        scanf("%d", &userInput);
    } while(userInput<minsize||userInput>maxsize);
    return userInput;
}