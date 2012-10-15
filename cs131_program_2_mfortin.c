/**
* @file cs131_program_2_mfortin.c
* @author MELISSA_FORTIN
* @date SEPTEMBER_19
* @brief Program 2: Programming an arithmetic trick involving powers of two redo
*
* @todo Assignment 2
* @done Numbers 1-11
*
* @status In progress
*
* @assistance TA Josh Brutscher
* @assistance TA Constance LeBerth
*/


#include <stdio.h>
#define DEBUG 1

/**
 @brief The answer that the trick always comes up with
 
 For not-very-mysterious algebraic reasons, this trick will always come up
 with the same answer. Rather than have '2' randomly show up in our code as
 a 'magic number', we give it a name here.
 */
const int THE_ANSWER_EVERY_TIME = 2;

/**
 @brief The answer that the trick uses when multiplying by 2
 
 Rather than have '2' randomly show up in our code as
 a 'magic number', we give it a name here.
 */
const int timesTwo = 2;

/**
 @brief Double a number
 @param n The number to double
 @sideeffect None
 @returns Twice n
 
 Very simple function, should just return 2*n or n+n
*/
int twice(int n);

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
 */
void pause();

/**
 @brief Prints all the instructions one at a time with pauses in between
 @sideeffect Goes through instructions step by step at users pace
*/
void trickInstructions();

/**
@brief Entry point for program
@returns 0 if no news (good news)
*/
int main (int argc, char* argv[])
{
    printf("There’s an arithmetic trick involving powers of two, so think of a number to show this trick with.\n");
    int theUsersNumber;
    trickInstructions();
    printf ("Input a number\n");
    scanf ("%d", &theUsersNumber);
    trickCheckArithmetic(theUsersNumber);
    printf ("The answer should be %d\n", THE_ANSWER_EVERY_TIME);
    return 0;
}

int twoToThe(int exponent)
{
    //Step 10 and 11 in this function are alread done
    //printf ("int twoToThe(int exponent)");
    
    int theResult;
    
    if(DEBUG) printf("-> Calling twoToThe(%d)\n",exponent);
    
    if(exponent<0) theResult=1/twoToThe(-exponent);
    else if(exponent==0) theResult=1;
    else theResult=twice(twoToThe(exponent-1));
    
    if(DEBUG) printf("<- twoToThe(%d) returns %d\n",exponent, theResult);
    //printf ("int twoToThe(int exponent), returns %d/n", theResult");
    return theResult;
}

int twice(int n)
{
    if(DEBUG) printf ("-> Calling int twice(%d)\n", n);
    if(DEBUG) printf ("<- int twice(%d) returns %d\n", n, n*timesTwo);
    return n*timesTwo;
}

int trickCheckArithmetic(int theUsersNumber)
{
    int theValueToBeShown;
    if(DEBUG) printf ("-> Calling int trickCheckArithmetic(%d)\n", theUsersNumber);
    printf ("First, subtract 2^0\n");
    theValueToBeShown = theUsersNumber-twoToThe(0);
    printf ("You should now have %d\n", theValueToBeShown);
    printf ("Next, multiply by 2^2\n");
    theValueToBeShown = theValueToBeShown*twoToThe(2);
    printf ("You should now have %d\n", theValueToBeShown);
    printf ("Now, add 2^3\n");
    theValueToBeShown = theValueToBeShown+twoToThe(3);
    printf ("You should now have %d\n", theValueToBeShown);
    printf ("And divide by 2^1\n");
    theValueToBeShown = theValueToBeShown/twoToThe(1);
    printf ("You should now have %d\n", theValueToBeShown);
    printf ("Finally, subtract twice your original number.\n");
    theValueToBeShown = theValueToBeShown-twice(theUsersNumber);
    printf ("You should now have %d\n", theValueToBeShown);
    if(DEBUG) printf ("<- int trickCheckArithmetic(%d) returns %d\n", theUsersNumber, theValueToBeShown);
    return theValueToBeShown;
}

void pause()
{
    char var2;
    printf("PAUSED. Press a key and then ENTER to continue");
    scanf(" %c", &var2);
}

void trickInstructions()
{
    if(DEBUG) printf ("-> Calling void trickInstructions()\n");
    printf ("First, subtract 2^0\n");
    pause();
    printf ("Next, multiply by 2^2\n");
    pause();
    printf ("Now, add 2^3\n");
    pause();
    printf ("And divide by 2^1\n");
    pause();
    printf ("Finally, subtract twice your original number.\n");
    if(DEBUG) printf ("<- void trickInstructions() returns nothing\n");
}