/**
* @file   cs131_program_2_jsmith.c
* @author Jake Smith
* @date   September 20th
* @brief  Program 2: Magic Number Generator
* @todo 

* @done
* 
    Go back through all your functions and modify them so that their first step is to print out the name of the function being called and
    the arguments (if any) that are supplied.
    Go back through all your functions and modify them so that their last step before returning is to print out the name of the function
    and the value it is returning. 
    Modify main so that your program walks the user through the steps of the trick, then asks them to supply a number, then shows them what
    steps they should have taken and what results they should have got, then shows them what their final answer should have been.
    Declare, define, and document a function void trickInstructions() which prints all the instructions one at a time with pauses in between.
    Declare, define, and document a function int trickCheckArithmetic(int theUsersNumber) which takes any number as input, then prints out each
    instruction for the trick followed by the result of following those instructions, and finally returns the final result of following all the instructions.
    Declare a function int twice(int n), copy the documentation that I provide into the appropriate place, and make a definition for it.
    Copy the linked documentation, declaration, and definition for int twoToThe(int n) into the appropriate locations in your file.
    Create cs131_program_2_FLAST.c with a file documentation block at the top with the filename, author name, date, and status (in progress)
    Define int main(int argc, char* argv[]) so that it just returns zero (like a Hello World program, but withut the printing)
    Create an integer constant named THE_ANSWER_EVERY_TIME that holds the value of the answer to the trick, and document it.
* 
* @status In Progress
* 
* 
* 
* 
*/

#include <stdio.h>

/**
* @brief The answer to the trick
*/
const int THE_ANSWER_EVERY_TIME = 2;

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
 @brief Double a number
 @param n The number to double
 @sideeffect None
 @returns Twice n
 
 Very simple function, should just return 2*n or n+n
 */

int twice(int n);

/**
* @brief pauses for user input
* @returns nothing
*/
void pause();

/**
* @brief prints all instructions with a pause in between
* @returns nothing
*/

void trickInstructions();

/**
* @brief Main procedure.
*
* @param argv the command line (typed arguments)
* @param argc the number of options in the command line.
* @return zero if successful
* @author YOUR_NAME_HERE
*/

int main (int argc, char* argv[])
{
    printf ("calling main!");
    int theUsersNumber;
    
    trickInstructions();
    
    printf ("enter a number\n");
    scanf ("%d", &theUsersNumber);
    trickCheckArithmetic(theUsersNumber);
    
    
    printf ("main returning 0!");
    return 0;
}

int twoToThe(int exponent)
{
    printf ("calling twoToThe! arg: %d", exponent);
    int theResult;
    
    
    
	if(exponent<0) theResult=1/twoToThe(-exponent);
	else if(exponent==0) theResult=1;
	else theResult=twice(twoToThe(exponent-1));
    
    printf("twoToThe(%d) returns %d\n",exponent, theResult);
    
    return theResult;
}

int twice(int number)
{
    printf ("calling twice! arg: %d", number);
    printf ("twice returns: %d", number*2);
    return number*2;
    
}

int trickCheckArithmetic(int theUsersNumber)
{
    printf ("calling trickCheckArithmetic! arg: %d", theUsersNumber);
    int originalNumber = theUsersNumber;
    printf ("subtract 2^0\n");
    pause();
    theUsersNumber = theUsersNumber - twoToThe(0);
    printf ("you should have gotten: %d\n", theUsersNumber);
    pause();
    
    printf ("multiply by 2^2\n");
    pause();
    theUsersNumber = theUsersNumber*twoToThe(2);
    printf ("you should have gotten: %d\n", theUsersNumber);
    pause();
    
    printf ("add 2^3\n");
    pause();
    theUsersNumber = theUsersNumber+twoToThe(3);
    printf ("you should have gotten: %d\n", theUsersNumber);
    pause();
    
    printf ("divide by 2^1\n");
    pause();
    theUsersNumber = theUsersNumber/twoToThe(1);
    printf ("you should have gotten: %d\n", theUsersNumber);
    pause();
    
    printf ("subtract twice your original number.\n");
    pause();
    theUsersNumber = theUsersNumber-twice(originalNumber);
    printf ("you should have gotten: %d\n", theUsersNumber);
    
    printf ("trickCheckArithmetic returns: %d", THE_ANSWER_EVERY_TIME);
    
    return THE_ANSWER_EVERY_TIME;
    
}


void pause()
{
    printf ("calling pause!");
    char any;
    
    printf ("(press enter to continue)\n");
    scanf ("%c", &any);
    printf ("pause returns nothing!");
}

void trickInstructions()
{
    printf ("calling trickInstructions!");
    
    printf ("pick any number\n");
    pause();
    printf ("subtract 2^0\n");
    pause();
    printf ("multiply by 2^2\n");
    pause();
    printf ("add 2^3\n");
    pause();
    printf ("divide by 2^1\n");
    pause();
    printf ("subtract twice your original number.\n");
    pause();
    printf ("I bet your answer is %d\n", THE_ANSWER_EVERY_TIME);
    
    printf ("trickInstructions returns nothing!");
}
