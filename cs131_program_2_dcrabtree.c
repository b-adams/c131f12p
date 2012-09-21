/**
* @file cs131_program_2_dcrabtree.c
* @author Danielle Crabtree
* @date September 18, 2012
* @brief Program 2: The Trick Program
* @status Working!
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
 @author Danielle Crabtree/ Professor Adams
 @brief Prints the instructions for the user one at a time with pauses in between
 @sideeffect Displays the instructions to the trick
 @return The step by step instuctions of the trick with pauses inbetween
 */

void trickInstructions();

int main(int argc, char* argv[])
{
    int theUsersNumber;
    int theResultSoFar;
    
    trickInstructions();
    
    printf("Pick any number and enter it here: ");
    scanf("%d", &theUsersNumber);
    printf("Subtract 2^0 from your number to get %d\n", theUsersNumber-twoToThe(0));
    theResultSoFar= theUsersNumber;
    pause();
    theResultSoFar= theUsersNumber-twoToThe(0);
    printf("Multiply by 2^2 from the previous number to get %d\n", theResultSoFar*twoToThe(2));
    pause();
    theResultSoFar= theResultSoFar*twoToThe(2);
    printf("Add 2^3 to the previous number and get %d\n", theResultSoFar+twoToThe(3));
    pause();
    theResultSoFar= theResultSoFar+twoToThe(3);
    printf("Divide the previous number by 2^1 and get %d\n", theResultSoFar/twoToThe(1));
    pause();
    theResultSoFar= theResultSoFar/twoToThe(1);
    printf("Finally, subract twice your original number and your answer is %d\n", theResultSoFar- twice(theUsersNumber));
    pause();
    theResultSoFar=theResultSoFar- twice(theUsersNumber);
    
    
    
    return 0;
}//main

int twoToThe(int exponent)
{
    int theResult;
    
    
	if(exponent<0) theResult=1/twoToThe(-exponent);
	else if(exponent==0) theResult=1;
	else theResult=twice(twoToThe(exponent-1));
    
    return theResult;
}

int twice (int n)
{
    return n*2; 

}

int trickCheckArithmetic (int theUsersNumber)
{
    int theResultSoFar;
    
    theResultSoFar= theUsersNumber;
    printf("Subtract 2^0: %d\n", theUsersNumber-twoToThe(0));
    pause();
    theResultSoFar= theUsersNumber-twoToThe(0);
    printf("Multiply by 2^2: %d\n", theResultSoFar*twoToThe(2));
    pause();
    theResultSoFar= theResultSoFar*twoToThe(2);
    printf("Add 2^3: %d\n", theResultSoFar+twoToThe(3));
    pause();
    theResultSoFar= theResultSoFar+twoToThe(3);
    printf("Divide by 2^1: %d\n", theResultSoFar/twoToThe(1));
    pause();
    theResultSoFar= theResultSoFar/twoToThe(1);
    printf("Finally, subract twice your original number: %d\n", theResultSoFar- twice(theUsersNumber));
    theResultSoFar=theResultSoFar- twice(theUsersNumber);
    
    return theResultSoFar; 
}

void pause()
{
  	char var2;
	printf("Paused! Press a key and then ENTER to continue");
	scanf(" %c", &var2);
}

void trickInstructions()
{
    printf("Pick any number\n");
    pause();
    printf("Subtract 2^0\n");
    pause();
    printf("Multiply by 2^2\n");
    pause();
    printf("Add 2^3\n");
    pause();
    printf("Divide by 2^1\n");
    pause();
    printf("Subtract twice your original number\n");
    pause();
    printf("Let me guess...your number is 2!\n");
}



