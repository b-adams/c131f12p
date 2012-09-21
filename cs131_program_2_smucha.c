/**
* @file cs131_program_2_smucha.c
* @author Stacey Mucha
* @date 9/21/12
* @status in progress
*/
#include <stdio.h>

/**
 @brief The answer that the trick always comes up with 
*/
const int THE_ANSWER_EVERY_TIME=2;

/**
 @brief Compute a power of 2
 @param exponent The exponent: how many times to multiply 2 by itself.
 @sideeffect None
 @returns 2^n
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

int twice(int n)
{
    
}