#include <stdio.h>

const float C_TO_F_MULTIPLE = 1.8;
const float C_TO_F_SHIFT = 32;

void displayCelsiusInFahrenheit(int tempInC);
int getBoundedNumber(int minsize, int maxsize);

int main(int argc, char* argv[])
{
        int tempToConvert;
    //todo 3
    //todo 7
    //todo 5
    //todo 7 (again)
    return 0;
}

void displayCelsiusInFahrenheit(int tempInC)
{
    //todo 2
    //todo 4
    //todo 6
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