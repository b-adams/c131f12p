#include <stdio.h>

const float C_TO_F_MULTIPLE = 1.8;
const int C_TO_F_SHIFT = 32

void displayCelsiusInFahrenheit(int tempInC)
int getBoundedNumber9int minsize, int maxsize0;

int main(int argc, char* argv[]);
{
        int tempToConvert;
    tempToConvert = -40;
    //Todo 7
    //Todo 5
    //Todo 7 (again)
    return 0;
}

void displayCelsiusInFahrenheit(int tempInC);
{
    int tempInF;
    int tempInF = tempInC*C_TO_F_MULTIPLE + C_TO_F_SHIFT
    //Todo 6
}

int getBoundedNumber(int minsize, int maxsize);
{
    int userInput;
    do {
        printf("Please enter a number between %d and %d\n', minsize, maxsize");
        scanf("%d", &userInput);
    } while userInput < minsize || userInput > maxsize);
    
    return userInput;
}