/**
* @file cs131_program_2_dcrabtree.c
* @author Danielle Crabtree
* @date September 18, 2012
* @brief Program 2: The Trick Program
* @status In Progress
*/

#include <stdio.h>

/**
 @author Danielle Crabtree/ Professor Adams
 @brief The answer that the trick always comes up with
 
 For not-very-mysterious algebraic reasons, this trick will always come up
 with the same answer. Rather than have '2' randomly show up in our code as
 a 'magic number', we give it a name here.
 */

const int THE_ANSWER_EVERY_TIME = 2;

/**
 @author Danielle Crabtree/ Professor Adams
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
 @author Danielle Crabtree/ Professor Adams
 @brief Double a number
 @param n The number to double
 @sideeffect None
 @returns Twice n
 
 Very simple function, should just return 2*n or n+n
 */
int twice (int n);

/**
 @author Danielle Crabtree/ Professor Adams
 @brief Walk the user through the arithmetic in the trick
 @param theUsersNumber Whatever number the user picked
 @sideeffect Displays the computations for each step of the trick.
 @returns the result of going through the arithmetic of the trick
 
 Displays values of 2^k for the various k, and
 Walks through subtracting 2^0, multiplying by 2^2, adding 2^3, dividing by 2^1,
 and then subtracting twice the original number.
 */

int trickCheckArithmetic(int theUsersNumber);

/**Documentation Block
 */

int main(int argc, char* argv[])
{
    int theUsersNumber;
    
    printf("Pick any number and enter it here: ");
    scanf("%d", theUsersNumber);
    return theUsersNumber;
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

int twice (int theUsersNumber)
{
    printf("Twice the orginal number is %d\n", theUsersNumber*2);
    return theUsersNumber*2; 

}

int trickCheckArithmetic (int theUsersNumber)
{
    int theResultSoFar;
    
    theResultSoFar= theUsersNumber;
    printf("Subtract 2^0: %d\n", theUsersNumber-twoToThe(0));
    
    theResultSoFar= theUsersNumber-twoToThe(0);
    printf("Multiply by 2^2: %d\n", theResultSoFar*twoToThe(2));
    
    theResultSoFar= theResultSoFar*twoToThe(2);
    printf("Add 2^3: %d\n", theResultSoFar+twoToThe(3));
    
    theResultSoFar= theResultSoFar+twoToThe(3);
    printf("Divide by 2^1: %d\n", theResultSoFar/twoToThe(1));
    
    theResultSoFar= theResultSoFar/twoToThe(1);
    printf("Finally, subract twice your original number: %d\n", theResultSoFar- twice(theUsersNumber));
    
    theResultSoFar=theResultSoFar- twice(theUsersNumber);
    
    return theResultSoFar; 
}



