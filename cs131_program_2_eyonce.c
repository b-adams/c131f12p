/**
 *@file  cs131_program_2_eyonce.c
 *@author Emily Yonce
 *@date 09/30/2012
 *@status in progress
 */

#include <stdio.h>

/**
 @brief The answer that the trick always comes up with
 
 For not-very-mysterious algebraic reasons, this trick will always come up
 with the same answer. Rather than have '2' randomly show up in our code as
 a 'magic number', we give it a name here.
 */
const int THE_ANSWER_EVERY_TIME;

/**
 @brief Compute a power of 2
 @param exponent The exponent: how many times to multiply 2 by itself.
 @sideeffect None
 @returns 2^n
 
 This works by using the fact that 2^n is twice 2^(n-1), and 2^0 is 1
 So, if the user gives 0 for n, this just returns n
 Otherwise, it returns twice the value of twoToThe(n-1)
 */
int twoToThe(int exponent);

/**
 @brief Double a number
 @param n The number to double
 @sideeffect None
 @returns Twice n
 
 Very simple function, should just return 2*n or n+n
 */
 int twice(int n);
  
 /**
 @brief Walk the user through the arithmetic in the trick
 @param theUsersNumber Whatever number the user picked
 @sideeffect Displays the computations for each step of the trick.
 @returns the result of going through the arithmetic of the trick
 
 Displays values of 2^k for the various k, and
 Walks through subtracting 2^0, multiplying by 2^2, adding 2^3, dividing by 2^1,
 and then subtracting twice the original number.
 */
int trickCheckArithmetic (theUsersNumber);

/**
 @brief Pause until the user is ready to continue
 @sideeffect Prompts the user to press enter
 
 After printing a prompt, this function calls the getchar function
 which will scan for the next letter in the stream. If the user presses
 enter, a newline will be the next character, getchar will finish, and
 the rest of the program will continue.
 */
 pause();
 
  /**
 @brief Shows all the instructions one at a time with pauses in between
 @sideeffect Prints instructions
 */
 void trickInstructions();
 
 /**
 @brief Gets the user to pick a number
 @sideeffect Prompts the user to enter a number
 @returns The number the user entered
 
 This function scans the user's input into a local variable,
 and then returns the value stored in that variable to the calling code.
 */
 int getNumberFromUser();
 
{
int main (argc, char* argv[])
return 0;
}

int twoToThe(int exponent)
{
    int theResult;
    
    printf("-> Calling twoToThe(%d)\n",exponent);
    
	if(exponent<0) theResult=1/twoToThe(-exponent);
	else if(exponent==0) theResult=1;
	else theResult=twice(twoToThe(exponent-1));
    
    printf("<- twoToThe(%d) returns %d\n",exponent, theResult);
    
    return theResult;
}
 
 int twice (int n)
 {
 return n^2;
 }
 
 int trickCheckArithmetic (theUsersNumber)
{
printf("First, subtract 2^0")
printf("Next, multiply by 2^2")
printf("Now, add 2^3")
printf("And divide by 2^1")
printf("Finally, subtract twice your original number.")

return n;
}

 pause()
 {
 return 0;
 }
 
 void trickInstructions()
 {
    printf("First, subtract 2^0")
     pause()
 {
 return 0;
 }
    printf("Next, multiply by 2^2")
    pause()
 {
 return 0;
 }
    printf("Now, add 2^3")
     pause()
 {
 return 0;
 }
    printf("And divide by 2^1")
     pause()
 {
 return 0;
 }
    printf("Finally, subtract twice your original number.")
     pause()
 {
 return 0;
 }
 }