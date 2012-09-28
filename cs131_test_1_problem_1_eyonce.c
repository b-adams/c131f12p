#include <stdio.h>

const float C_TO_F_MULTIPLE = 1.8;
cont int C_T_F_SHIFT = 32;
 
 void displayCelsiusInFahrenheit(int tempInC);
 int getBoundedNumber (int minsize, int maxsize);
 
 int main(int argc, char* argv[])
 {
        int tempToConvert;
    //Todo 3
    //Todo 7
    //Todo5
    //Todo 7 (again)
    return 0;
 }
 
 void displayCelsiusInFahrenheit (int tempInC)
 {
int tempInF;
    //Todo4
    //Todo6
 }
 
 int getBoundedNumber (int minsize, int maxsize)
 {
    int userInput;
    do {
      printf("Please enter a number between %d and %d\n",
             minsize, maxsize);
      scanf ("%d", &userInput);
    } while (userInput < insize || userInput > maxsize);
    
    return userInput;
 }