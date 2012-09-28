#include <stdio.h>

const float C_TO_F_MULTIPLE = 1.8;


void displayCelsiusInFahrenheit (int tempInC)
int getBoundedNumber (int minsize, int maxsize);

int main (int argc, char* argv [])
{
    int tempToConvert;
    //Todo 3
    //Todo 7
    //Todo 5
    //Todo 7 (again)
    return 0;
}

void displayCelciusInFahrenheit (int tempInC)
{
    //Todo 2
    //Todo 4
    //Todo 6
}

int get BoundedNumber (int minsize, int maxsize)
{
    int userInput;
    do {
        printf("Please enter a number between %d and %d\n",
               minsize, maxsize);
        scanf "%d", &userInput);
    }while (userInput < minsize || userInput > maxsize);
    
    return userInput;
}