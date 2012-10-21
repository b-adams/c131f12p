/**
 *@file cs131_program_2_mpierce.c
 *@author michael pierce
 *@date septmeber 21, 2012
 */

#include <stdio.h>

/**
 @brief The answer that the trick always comes up with
 
 For not-very-mysterious algebraic reasons, this trick will always come up
 with the same answer. Rather than have '2' randomly show up in our code as
 a 'magic number', we give it a name here.
 */
const int THE_ANSWER_EVERY_TIME = '2';

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
int twice(int n);

/**
 @brief Gets the user to pick a number
 @sideeffect Prompts the user to enter a number
 @returns The number the user entered
 
 This function scans the user's input into a local variable,
 and then returns the value stored in that variable to the calling code.
 */
int getNumberFromUser();

/**
 *@brief To prompt user for an input
 *@returns nothing
 */
void pause();
/**
 *@brief prints all instructions for user
 *@return instructions one by one\
 */
void trickInstructions();

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

int main(int argc, char* argv[])
{
    int theUserNumber;
    trickInstructions();
    
    trickCheckArithmetic(theUserNumber);
    return 0;
}

int getNumberFromUser()
{
    int theUserNumber;
    printf("Calling getNumberFromUser() \n");
    printf("Please enter a Number for this arithmetic trick:\n");
	   scanf("%d", &theUserNumber);
    pause();
    printf("getNumberFromUser() returns %d \n", theUserNumber);
    return theUserNumber;
}
int twice(int n)
{
    printf("calling twice(%d)", n);
    printf("twice(%d) returns %d \n",n, n+n);
    return n+n;
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

int trickCheckArithmetic(int theUserNumber)
{
    
    int sumSoFar;
    sumSoFar = 0;
     theUserNumber = getNumberFromUser();
     
    printf("calling trickCheckArithmetic(%d) \n", theUserNumber);
    
    printf("First, take your Number and subtract %d. \n", twoToThe(0));
    printf("%d\n", theUserNumber);
    printf("%d - %d \n", theUserNumber, twoToThe(0));
    sumSoFar = theUserNumber - twoToThe(0);
    pause();
    printf("Sum so far is equal to %d \n", sumSoFar);
    pause();
    
    printf("Next, multiply that number by %d. \n", twoToThe(2));
    printf("%d * %d \n", sumSoFar, twoToThe(2));
    sumSoFar = sumSoFar * twoToThe(2);
    pause();
    printf("Sum so far is equal to %d \n", sumSoFar);
    pause();
    
    printf("Now, add %d. \n", twoToThe(3));
    printf("%d + %d \n", sumSoFar, twoToThe(3));
    sumSoFar = sumSoFar + twoToThe(3);
    pause();
    printf("Sum so far is equal to %d \n", sumSoFar);
    pause();
    
    printf("Now, you must divide by %d. \n", twoToThe(1));
    printf("%d/%d \n", sumSoFar, twoToThe(1));
    sumSoFar = sumSoFar / twoToThe(1);
    pause();
    printf("Sum so far is equal to %d \n", sumSoFar);
    pause();
    
    printf("Finally, take that sum and subtract %d. \n", twice(theUserNumber));
    printf("%d - %d \n", sumSoFar, twice(theUserNumber));
    sumSoFar = sumSoFar - twice(theUserNumber);
    pause();
    printf("Your final answer is equal to %d \n", sumSoFar);
    pause();
    
    printf("trickCheckArithmetic(int theUserNumber) returns %d \n\n", sumSoFar);
    return sumSoFar;
}

void pause()
{
    printf("calling pause() \n\n");
    char var1;
	printf("Press ENTER to continue \n");
        scanf("%c", &var1);
    printf("pause() returns nothing \n\n");
}

void trickInstructions()
{
    int twoToThe();
    
    printf("Calling trickInstructions() \n");
    
    printf("Here is an arithmetic trick involving the powers of two.\n\n");
    pause();
    
    printf("For this trick You will need to pick a number than follow the mathematical steps provided. \n\n");
    pause();
    
    printf("Here are the neccessary steps: \n\n");
    pause();
    
    printf("First, take your Number and subtract %d. \n\n", twoToThe(0));
    pause();
    
    printf("Next, multiply that number by %d. \n\n", twoToThe(2));
    pause();
    
    printf("Now, add %d. \n\n", twoToThe(3));
    pause();
    
    printf("Now, you must divide by %d. \n\n", twoToThe(1));
    pause();
    
    printf("Finally, take that sum and subtract twice your original number. \n\n");
    pause();

    printf("trickInstructions() returns nothing \n");
    return;
}
