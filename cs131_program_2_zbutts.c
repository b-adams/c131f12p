/**
 *@file cs131_program_2_zbutts.c
 *@author Zakarra Butts
 *@date Sept 17
 *@status in progress
 */

#include <stdio.h>

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

/**
 @brief Main procedure.

 @param argv the command line (typed arguments)
 @param argc the number of options in the command line.
 @return zero if successful
 @author Nathan Mitchell
*/

/**
 @brief Double a number
 @param n The number to double
 @sideeffect None
 @returns Twice n
 
 Very simple function, should just return 2*n or n+n
 */

int twice(int n);

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
 
 After printing a prompt, this function calls the getchar function
 which will scan for the next letter in the stream. If the user presses
 enter, a newline will be the next character, getchar will finish, and
 the rest of the program will continue.
 */

void pause();

/**
 @brief The answer that the trick always comes up with
 
 For not-very-mysterious algebraic reasons, this trick will always come up
 with the same answer. Rather than have '2' randomly show up in our code as
 a 'magic number', we give it a name here.
 */

void trickInstuctions();

/**
 *@brief pritns instructions one at a time
 *@sideeffect none
 */

int main(int argc, char* argv[])
{
    int theUsersNumber;
    trickInstuctions();
    //get & store input
    trickCheckArithmetic(theUsersNumber);
    return 0;
}