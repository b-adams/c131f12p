 #include <stdio.h>
 
 const float C_TO_F_MULTIPLE = 1.8;
 //todo1
 
 void displayCelsiusInFahrenheit (int tempInC);
 int getBoundedNumber(int minsize, int maxsize);
 
 int main(int argc, char* argv[])
 {
     int tempToConvert;
     //todo3
     //todo7
     //todo5
     //todo7
     return 0;
 }
 
 void displayCelsiusInFahrenheit (int tempInc)
 {
    //todo2
    //todo4
    //todo6
 }
 
 int getBoundedNumber(int minsize, int maxsize)
 {
    int userInput;
    do {
        printf ("please enter a number between %d and %d\n, minsize,maxsize);
        scanf ("%d, &userInput);   
    } while (userInput < minsize || userInput > maxsiaze);
    
    
    return userInput;
 }