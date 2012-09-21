/**
* @file   cs131_program_2_jsmith.c
* @author Jake Smith
* @date   September 20th
* @brief  Program 2: Magic Number Generator
* @todo 
    Copy the linked documentation, declaration, and definition for int twoToThe(int n) into the appropriate locations in your file.
    Declare a function int twice(int n), copy the documentation that I provide into the appropriate place, and make a definition for it.
    Declare, define, and document a function int trickCheckArithmetic(int theUsersNumber) which takes any number as input, then prints out each instruction for the trick followed by the result of following those instructions, and finally returns the final result of following all the instructions.
    Declare, define, and document a function named pause which has no arguments and no return value, and has the side effect of pausing until the user presses enter.
    Declare, define, and document a function void trickInstructions() which prints all the instructions one at a time with pauses in between.
    Modify main so that your program walks the user through the steps of the trick, then asks them to supply a number, then shows them what steps they should have taken and what results they should have got, then shows them what their final answer should have been.
    Go back through all your functions and modify them so that their first step is to print out the name of the function being called and the arguments (if any) that are supplied.
    Go back through all your functions and modify them so that their last step before returning is to print out the name of the function and the value it is returning.

* @done
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
const int THE_ANSWER_EVERY_TIME = 7;

/**
* @brief WHAT_THIS_FUNCTION_IS_FOR
* @param PARAMNAME DESCRIPTION_OF_PARAMETER
* @param ANOTHERPARAMNAME DESCRIPTION_OF_SECOND_PARAM
* @sideeffect STATE_WHAT_IT_DOES
* @sideeffect IT_MAY_DO_MULTIPLE_THINGS
* @returns WHAT_IT_RETURNS
*
* MORE_DETAIL_GOES_HERE_IF_NEEDED
*/
int myfunc(int PARAMNAME, char ANOTHERPARAMNAME);

/**
* @brief Main procedure.
*
* @param argv the command line (typed arguments)
* @param argc the number of options in the command line.
* @return zero if successful
* @author YOUR_NAME_HERE
*/
int main( int argc, char * argv[] )
{
  //your program here
  return 0;
}

int myfunc(int PARAMNAME, char ANOTHERPARAMNAME)
{
  //your function definition here
}
