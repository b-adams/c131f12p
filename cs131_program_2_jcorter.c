/**
 *@file cs131_program_2_jcorter.c
 *@author Jessica Corter
 *@date September 19, 2012
 *@brief Program 2: This program uses trickery to guess a users final number after several arithmetic operations.
 *@status in progress
 */

#include <stdio.h>

/**
 @brief The answer that the trick always comes up with
 
 For not-very-mysterious algebraic reasons, this trick will always come up
 with the same answer. Rather than have '2' randomly show up in our code as
 a 'magic number', we give it a name here.
 */

 const int THE_ANSWER_EVERY_TIME = 2;

/**
 @brief Compute a power of 2
 @param exponent The exponent: how many times to multiply 2 by itself.
 @sideeffect None
 @returns 2^n
 
 This works by using the fact that 2^n is twice 2^(n-1), and 2^0 is 1
 So, if the user gives 0 for n, this just returns n
 Otherwise, it returns twice the value of twoToThe(n-1)
 [We'll talk about this 'recursion' trick later in the class. It's very useful.]
 */
int twoToThe(int exponent);

/**
 @brief Double a number
 @param n The number to double
 @sideeffect None
 @returns Twice n
 
 Very simple function, should just return 2*n or n+n
 */

int twice (int n);

/**
 @brief Walk the user through the arithmetic in the trick
 @param theUsersNumber Whatever number the user picked
 @sideeffect Displays the computations for each step of the trick.
 @returns the result of going through the arithmetic of the trick
 
 Displays values of 2^k for the various k, and
 Walks through subtracting 2^0, multiplying by 2^2, adding 2^3, dividing by 2^1,
 and then subtracting twice the original number.
 */

int trickCheckArithmetic(int theUsersNumber);

/**
 @brief Pause until the user is ready to continue
 @sideeffect Prompts the user to press enter
 
 After printing a prompt, this function calls the getchar function
 which will scan for the next letter in the stream. If the user presses
 enter, a newline will be the next character, getchar will finish, and
 the rest of the program will continue.
 */

void pause();

/**
 @brief Prints instructions one at a time with pauses in between
 @returns nothing

 */

void trickInstructions();

/**
 * @brief Main procedure.

 * @param argv the command line (typed arguments)
 * @param argc the number of options in the command line.
 * @return zero if successful
 * @author Jessica Corter
 
*/

int main(int argc, char* argv[])

{
    printf ("This is the main function.\n");
    trickInstructions();
    int theUsersNumber;
    printf ("Please enter your number and press enter: \n");
    scanf ("%d", &theUsersNumber);
    trickCheckArithmetic (0);
    trickCheckArithmetic(100);
    printf ("This is the main function and it returns the integer two.\n");
    return THE_ANSWER_EVERY_TIME;
    
}

int twoToThe(int exponent)
{
    int theResult;
    
    printf ("This is the twoToThe (int exponent) function.\n");
    printf("-> Calling twoToThe(%d)\n",exponent);
    
	if(exponent<0) theResult=1/twoToThe(-exponent);
	else if(exponent==0) theResult=1;
	else theResult=twice(twoToThe(exponent-1));
    
    printf("<- twoToThe(%d) returns %d\n",exponent, theResult);
    printf ("This is the twoToThe (int exponent) function and it returns an integer.\n");
    return theResult;
}

int twice (int n)
{
    printf ("This is the twice (int n) function.\n");
    printf ("This is the twice (int n) function and it returns twice the integer n.\n");
    return n+n;   
}

int trickCheckArithmetic(int theUsersNumber)

{
    int result;
    printf("***We are now going to try the trick with %d***\n", theUsersNumber);
        
    printf ("This is the trickCheckArithmetic function.\n");
    result = theUsersNumber - twoToThe (0);
    printf ("Subtract 2^0 from your number: %d\n", result);
    
    result = result * twoToThe (2);
    printf ("Multiply the result by 2^2: %d\n", result);
    
    result = result + twoToThe (3);
    printf ("Add 2^3 to your result: %d\n", result);
    
    result = result / twoToThe (1);
    printf ("Divide the result by 2^1: %d\n", result);
    
    result = result - twice (theUsersNumber);
    printf ("Take the result and subtract two times your original number: %d.\n", result);
    
    printf ("Lemme guess...your answer was %d\n", result);
    printf ("This is the trickCheckArithmetic function and it returns the integer two.\n");
    return THE_ANSWER_EVERY_TIME;
}

void pause()
{
    char var1;
    printf("This is the pause function.\n");
    printf("Paused, please enter a character and then hit enter when ready to continue.");
    scanf(" %c", &var1);
    printf("This is the pause function and it returns nothing.\n");
    return;    
}

void trickInstructions()
{
    printf("This is the trickInstructions function.\n");
    printf("Think of a number.");
    pause();
    printf("Subtract 2^0 from your number: ");
    pause();
    printf("Multiply the result by 2^2: ");
    pause();
    printf("Add 2^3 to your result: ");
    pause();
    printf("Divide the result by 2^1: ");
    pause();
    printf("Take the result and subtract two times your original number: ");
    pause();
    printf("Lemme guess...your answer was % d\n", THE_ANSWER_EVERY_TIME);    
    printf("This is the trickInstructions function and it returns nothing.\n");
    return;
      
}

