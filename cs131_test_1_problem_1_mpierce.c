#include <stdio.h>

const float C_TO_F_MULTIPLE = 1.8;
const int C_TO_F_SHIFT = 32;             //   To Do 1

void displayCelsiusInFahrenheit(int tempInC);
int getBoundedNumber (int minsize, int maxsize);

int main (int argc, char* argv[])
{
        int tempToConvert;
     tempToConvert = -40;      // To Do 3
    void displayCelsiusInFahrenheit(int tempToConvert);    //    To Do 7
     tempToConvert = getBoundedNumber(-40,50);      // To Do 5
    void displayCelsiusInFahrenheit(int tempToConvert);      //   To Do 7
    return 0;
}

void displayCelsiusInFahrenheit(int tempInC)
{
    int tempInF;      // To Do 2
     tempInF = (tempInC*C_TO_F_MULTIPLE)+C_TO_F_SHIFT;     // To Do 4
    printf("%d celsius would be %d Fahrenheit", tempInC, tempInF);  //  To Do 6
}

int getBoundedNumber(int minsize, int maxsize)
{
    int userinput;
    do {
        printf ("Please enter a number between %d and %d\n", minsize, maxsize);
        scanf ("%d", &userinput);
    } while (userinput < minsize || userinput > maxsize);
    
    return userinput;
}