#include <stdio.h>

const float C_TO_F_MULTIPLE = 1.8;
const int C_TO_F_SHIFT = 32;

void displayCelciusInFahrenheit(int tempInC);
int getBoundedNumber(int minsize, int maxsize);

int main(int argc, char* argv[])
{
    int tempToConvert = -40;
    //Todo 7
    //Todo 5
    //Todo 7
    return 0;
}

void displayCelciusInFahrenheit(int tempInC)
{
    int tempInF = (tempInC*C_TO_F_MULTIPLE+C_TO_F_SHIFT);
    //Todo 6
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