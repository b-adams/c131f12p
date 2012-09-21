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
* 
* @assistance CITE_NON_COURSE_WEBPAGES_YOU_USED_FOR_HELP
* @assistance YOU_MAY_HAVE_MULTIPLE_CITATIONS
* @assistance Larry Force, Jake Smith, Colby Schrom
* @note Larry Force, Jake Smith, Colby Schrom
*/

#include <stdio.h>

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
   return 0;
}

/**
* @brief keeps the answer the same everytime 
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


