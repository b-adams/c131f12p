#include <stdio.h>

const float C_TO_F_MULTIPLE = 1.8;
const int C_TO_f_SHIFT = 32;

void displayCelsiusInFahrenheit (int tempInC);
int getBoundedNumber (int minsize, int maxsize);

int main (int argc, char* argv [])
{
        int tempToConvert;
        tempToConvert = -40;
        //todo 7
        //todo 5
        //Todo 7 again
        return 0;
}

void displayCelsiusInFahrenheit (int tempInC)
{
    int tempInF;
    tempInF = (tempInC * C_TO_F_MULTIPLE) + C_TO_F_SHIFT;
    //todo 6
}

int getBoundedNumber (int minsize, int maxsize)
{
    int userInput
    do {
        printf ("please enter a number between %d and %d/n", minsize, maxsize);
        scanf ("%d", &userInput);
    }   while (userInput < minsize || userInput > maxsize);    

    return userInput;
}