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

 const int THE_ANSWER__EVERY_TIME = 2;

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
 * @brief Main procedure.

 * @param argv the command line (typed arguments)
 * @param argc the number of options in the command line.
 * @return zero if successful
 * @author Jessica Corter
 
*/

int main(int argc, char* argv[]);

int main(int argc, char* argv[])

{

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
    return 2*n;   
}

