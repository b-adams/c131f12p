 #include <stdio.h>
 
 const float C_TO_F_MULTIPLE = 1.8;
 const float C_TO_F_SHIFT = 32
 
 void displayCelsiusInFahrenheit (int tempInC);
 int getBoundedNumber(int minsize, int maxsize);
 
 int main(int argc, char* argv[])
 {
     int tempToConvert;
     printf (%d temptoConvert, -40);
     //todo7
     printf getBoundedNumber (int -40,int 50);
     //todo7
     return 0;
 }
 
 void displayCelsiusInFahrenheit (int tempInc)
 {
    @param int tempInF
    @printf ((tempInC*C_TO_F_MULTIPLE)+C_TO_F_SHIFT);
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