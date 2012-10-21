/**
* @file cs131_program_2_pbadianpessot.c
* @author Pamela Badian-Pessot
* @date September 20, 2012
* @status In Progress
*/

#include <stdio.h>



/**
 *@brief The answer that the trick always comes up with
 * For not-very-mysterious algebraic reasons, this trick will always come up
 * with the same answer. Rather than have '2' randomly show up in our code as
 * a 'magic number', we give it a name here.
 */

const int THE_ANSWER_EVERY_TIME=2;

/**
 *@brief Compute a power of 2
 *@param exponent The exponent: how many times to multiply 2 by itself.
 *@sideeffect None
 *@returns 2^n
 * This works by using the fact that 2^n is twice 2^(n-1), and 2^0 is 1
 * So, if the user gives 0 for n, this just returns n
 * Otherwise, it returns twice the value of twoToThe(n-1)
 */

int toToThe(int exponent);


/**
 *@brief Walk the user through the arithmetic in the trick
 *@param theUsersNumber Whatever number the user picked
 *@sideeffect Displays the computations for each step of the trick.
 *@returns the result of going through the arithmetic of the trick
 * Displays values of 2^k for the various k, and
 * Walks through subtracting 2^0, multiplying by 2^2, adding 2^3, dividing by 2^1,
 * and then subtracting twice the original number.
 */

int trickCheckArithmetic(int theUsersNumber);

/**
 *@brief Double a number
 *@param n The number to double
 *@sideeffect None
 *@returns Twice n
 *
 *Very simple function, should just return 2*n or n+n
 */

int twice(int n);

/**
 *@brief Lead through the arithmetic without a number
 *@sideeffect print instruction and propts user through process
 *@return THE_ANSWER_EVERY_TIME
*/

void trickInstructions();

int main(int argc, char* argv[])
{
     printf("This function is the main fuction");
    trickCheckArithmetic;
    printf("Now lets walkt through it");
    trickCheckArithmetic;
    printf("main returning 0");
    return 0;
}

int twoToThe(int exponent)
{
    printf("this function is twoToThe, which has argument exponent");
    int theResult;
    
    printf("-> Calling twoToThe(%d)\n",exponent);
    
	if(exponent<0) theResult=1/twoToThe(-exponent);
	else if(exponent==0) theResult=1;
	else theResult=twice(twoToThe(exponent-1));
    
    printf("<- twoToThe(%d) returns %d\n",exponent, theResult);
    printf("twoToThe return %d", theResult);
    
    return theResult;
}

int twice(int n)
{
    printf("this function is twice, which has arguement n");
    int theDouble;
    
    printf("-> Calling twice(%d)\n", n);
	
	theDouble=2*n;   

    printf("<- twice(%d) returns %d\n", n, theDouble);
    printf("twice return %d", theDouble);
   
    return theDouble;
}

int trickCheckArithmetic (int theUsersNumber);
(
    printf("this argument is trickCheckArithmetic, which has arguement theUsersNumber");
    int theUsersNumber;	
    int stepOne;
    int stepTwo;
    int stepThree;
    int stepFour;
    printf("Input a number");
    scanf("%d", &theUsersNumber);
    printf("*You entered %d*", theUsersNumber);
	stepOne=number-twoToThe(0);
    printf("Your number minus one is %d",stepOne);
    	stepTwo=stepOne*twoToThe(2);
    printf("Your number squared is %d",stepTwo);
	stepThree=stepTwp+twoToThe(3);
    printf("Your number plus eightis %d",stepThree);
	stepFour=stepThree/twoToThe(1);
    printf("Your number divided by %d",stepFour);
    printf("Your number subtracted from your original number is %d", stepFour-theUsersNumber);
    printf("Your answer is %d",THE_ANSWER_ALL_THE_TIME);
    printf("trickCheckArithmetic, return %d",THE_ANSWER_ALL_THE_TIME);
    return(THE_ANSWER_ALL_THE_TIME);
} 

void trickInstructions()
{
    printf("this function is trickInstructions");
    printf("Think of a number and press a key");
    scanf("%c", &char);
    printf("Subtract a 1 from your number and press a key");
    scanf("%c", &char);
    printf("Multiply that by 4 and press a key");
    scanf("%c",&char);
    printf("Now add 8 and press a key");
    scanf("%c", &chat);
    printf("Divide that by 2 and press a key");
    scanf("%c", &char);
    printf("Now subtract your original number and press a key");
    scanf("%c". &char);
    printf("Did you get Two?");
    printf("trickInstructions, return %d", THE_ANSWER_ALL_THE_TIME);
    return(THE_ANSWER_ALL_THE_TIME);
}
