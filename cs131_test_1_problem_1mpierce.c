#include <stdio.h>

const float C_TO_F_MULTIPLE = 1.8;
const int C_TO_F_SHIFT = 32;

Void displayCelsiusInFahrenheit(int tempInC);
int getBoundedNumber (int minsize, int maxsize);

int main (int argc, char* argv)
{
        int tempToConvert;
    //todo 3
    //todo 4
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

into getBoundedNumber(int minsize, int maxsize)
{
    int userinput;
    do {
        printf ("Please enter a number between %d and %d\n", minsize, maxsize);
        scanf ("%d", &userinput);
    } while (userinput < minsize || userinput > maxsize);
    
    return userinput;
}