#include <stdio.h>

const float C_TO_F_MULTIPLE = 1.8;
//todo 1

void displayCelsiusInFahrenheit(int tempInC);
int getBoundedNumber(int minsize, int maxsize);

int main(int argc, char* argv[])
{
        int tempToConvert;
    tempToConvert = -40;
    int displayCelsiusInFahrenheit(tempToConvert);
    tempToConvert = getBoundedNumber(-40, 50);
    int displayCelsiusInFahrenheit(tempToConvert);
    return 0;
}

void displayCelsiusInFahrenheit(int tempInC)
{
    int tempInF;
    tempInC * C_TO_F_MULTIPLE + C_TO_F_SHIFT = tempInF;
    printf("%d celsius would be %d fahrenheit", tempInC, tempInF);
}

int getBoundedNumber(int minsize, int maxsize)
{
    int userInput;
    do {
        printf("Please enter a number between %d and %d \n", minsize, maxsize);
        scanf("%d", &userInput);
    }   while(userInput < minsize || userInput > maxsize);
    
    return userInput;
}