/**
 * @file cs131_program_2_nmitchell.c
 * @author Nathan Mitchell
 * @date Septemeber 6, 2012
 * @status in progress
 */

#include <stdio.h>

/**
 @brief Main procedure.

 @param argv the command line (typed arguments)
 @param argc the number of options in the command line.
 @return zero if successful
 @author Nathan Mitchell
*/

int main(int argc, char* argv[])

{
    return0;
}

/**
 @brief The answer that the trick always comes up with
 
 For not-very-mysterious algebraic reasons, this trick will always come up
 with the same answer. Rather than have '2' randomly show up in our code as
 a 'magic number', we give it a name here.
 */

const int THE_ANSWER_EVERYTIME = 2;

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

/**
 @brief Double a number
 @param n The number to double
 @sideeffect None
 @returns Twice n
 
 Very simple function, should just return 2*n or n+n
 */

int twice(int n);

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

int trickCheckArithmetic(int theUsersNumber);

int trickCheckArithmetic(int theUsersNumber)

{
    printf("please enter a number \n");
    scanf("%d", &theUsersNumber);
    originalNumber = theUsersNumber
    printf("you entered %d as your number \n", theUsersNumber);
    printf("now im going to subtract 1 from your number \n");
    theUsersNumber = theUsersNumber - twoToThe(0);
    printf("your number is now %d \n", theUsersNumber);
    printf("now im going to multiply you number by 4 \n");
    theUsersNumber = theUsersNumber * twoToThe(2);
    printf("your number is now %d \n", theUsersNumber);
    printf("now im going to add 8 to your number \n");
    theUsersNumber = theUsersNumber + twoToThe(3);
    printf("your number is now %d \n", theUsersNumber);
    printf("now im going to divide your number by 2 \n");
    theUsersNumber = theUsersNumber / twoToThe(1);
    printf("your number is now %d \n", theUsersNumber);
    printf("now im going to subtract twice your original number \n");
    theUsersNumber = theUsersnumber - (originalNumber * twoToThe(1));
    printf("your number is now %d \n", theUsersNumber);
}