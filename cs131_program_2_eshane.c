/**
* @file   cs131_program_2_eshane.c
* @author Eric Shane
* @date   09/20/12
* @brief  Program 2: The Trick
*
* @todo write a program taht completes the trick
* @done To do
* 
* @status starting
* 
* SHARING_YOUR_THOUGHT_PROCESS_HERE_MAY_HELP
* WITH_GETTING_PARTIAL_CREDIT_IF_THINGS_ARE
* NOT_ALL_CORRECT
* @assistance Larry Force, Jake Smith, Colby Schrom
* @note Larry Force, Jake Smith, Colby Schrom
*/

#include <stdio.h>

/**
* @brief keeps the answer the same everytime 
*/
    const int THE_ANSWER_EVERYTIME = 2;

    void trickInstructions();
    int trickCheckArithmetic(int theUsersNumber);
    int twoToThe(int exponent);
    int twice(int n);
    void pause();

/**
* @brief Main procedure.
*
* @param argv the command line (typed arguments)
* @param argc the number of options in the command line.
* @return zero if successful
* @author Eric Shane
*/
int main( int argc, char * argv[] )
{
    int theUsersNumber;
    printf ("Please enter a number:\n");
    scanf ("%d", &theUsersNumber);
    trickInstructions();
    trickCheckArithmetic(theUsersNumber);
    printf ("Your answer should be %d.\n", THE_ANSWER_EVERYTIME);
    
   return 0;
}


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


int twoToThe(int exponent)
{
    int theResult;
    
    printf("-> Calling twoToThe(%d)\n",exponent);
    
	if(exponent<0) theResult=1/twoToThe(-exponent);
	else if(exponent==0) theResult=1;
	else theResult = 2 * twice(twoToThe(exponent-1));
    
    printf("<- twoToThe(%d) returns %d\n",exponent, theResult);
    
    return theResult;
}


/**
 @brief Double a number
 @param n The number to double
 @sideeffect None
 @returns Twice n
 
 Very simple function, should just return 2*n or n+n
 */

int twice(int n)
{
    n = n + n;
    
    return n + n;
}

/**
 @brief Walk the user through the arithmetic in the trick
 @param theUsersNumber Whatever number the user picked
 @sideeffect Displays the computations for each step of the trick.
 @returns the result of going through the arithmetic of the trick
 
 Displays values of 2^k for the various k, and
 Walks through subtracting 2^0, multiplying by 2^2, adding 2^3, dividing by 2^1,
 and then subtracting twice the original number.
 */


int trickCheckArithmetic(int theUsersNumber)
{
    int originalNumber = 0;

    printf ("Please enter a number, and I'll show you a trick: \n");
    scanf ("%d", &theUsersNumber);
    originalNumber = theUsersNumber;
    printf ("You entered %d as your number.\n", theUsersNumber);
    printf ("Now I'm going to subtract 1 from this number\n");
    theUsersNumber = theUsersNumber - twoToThe(0);
    printf ("Your number is now %d.\n", theUsersNumber);
    printf ("Now im going to multiply by 4.\n");
    theUsersNumber = theUsersNumber * twoToThe(2);
    printf ("Your number is now %d.\n", theUsersNumber);
    printf ("Now im going to add 8.\n");
    theUsersNumber = theUsersNumber + twoToThe(3);
    printf ("Your number is now %d.\n", theUsersNumber);
    printf ("Now im going to divide by 2");
    theUsersNumber = theUsersNumber / twoToThe(1);
    printf ("Your number is now %d.\n", theUsersNumber);
    printf ("Now im going to subtract twice your original number.");
    theUsersNumber = theUsersNumber - twice(originalNumber);
    printf ("Your number is now %d.\n", theUsersNumber);
    
    return THE_ANSWER_EVERYTIME;
}

/**
 @brief Pause until the user is ready to continue
 @sideeffect Prompts the user to press enter
 
 After printing a prompt, this function calls the getchar function
 which will scan for the next letter in the stream. If the user presses
 enter, a newline will be the next character, getchar will finish, and
 the rest of the program will continue.
 */

void pause()
{
    char var2;
    printf ("Please enter a character and press enter.\n");
    scanf ("%c", &var2);
}

/**
 *@brief prints all instruction one at a time
 *@sideeffects none
 */


void trickInstructions()
{
    printf ("Now subtract 1.\n");
    pause();
    printf ("Now, multiply by 4.\n");
    pause();
    printf ("Now, add 8.\n");
    pause();
    printf ("Now, divide by 2.\n");
    pause();
    printf ("Now subtract twice your original number.\n");
    pause();
    printf ("I bet your number was 2, am I right?\n");
    pause();
}



