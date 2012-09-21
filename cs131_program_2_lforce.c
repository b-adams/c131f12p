 /**
  * @file cs131_program_2_lforce.c
  * @author Larry Force
  * @date Thursday, September 20
  * @brief Program 2, an arithmetic trick
  * @status not done
  */
 
 
 #include <stdio.h>
 
 
 /**
  * @author Larry Force
  * @brief main function
  * @param How many 'tokens' were typed when you ran the program
  * @param A collection of all the tokens that were typed
  * @sideeffect The program is the side effect.
  * @return This returns 0
  */
 
 int main (int argc, char* argv[])
 {
    return 0 ;
 }
 
 /**
 @brief The answer that the trick always comes up with
 
 For not-very-mysterious algebraic reasons, this trick will always come up
 with the same answer. Rather than have '2' randomly show up in our code as
 a 'magic number', we give it a name here.
 */
 
 const int THE_ANSWER_EVERY_TIME=2
 
 
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