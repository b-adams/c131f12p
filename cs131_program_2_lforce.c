 /**
  * @file cs131_program_2_lforce.c
  * @author Larry Force
  * @date Thursday, September 20
  * @brief Program 2, an arithmetic trick
  * @status working
  */
 
 
 #include <stdio.h>
 
 
 
 
 //declaring constants
 
 
  /**
 @brief The answer that the trick always comes up with
 
 For not-very-mysterious algebraic reasons, this trick will always come up
 with the same answer. Rather than have '2' randomly show up in our code as
 a 'magic number', we give it a name here.
 */
 
 const int THE_ANSWER_EVERY_TIME=2 ;
 


//declaring functions
 
 /**
 @brief Pause until the user is ready to continue
 @sideeffect Prompts the user to press enter
 
 After printing a prompt, this function calls the getchar function
 which will scan for the next letter in the stream. If the user presses
 enter, a newline will be the next character, getchar will finish, and
 the rest of the program will continue.
 */

void pause() ;
 
 
 /**
 * @brief Compute a power of 2
 * @param exponent The exponent: how many times to multiply 2 by itself.
 * @sideeffect None
 * @returns 2^n
 * 
 * This works by using the fact that 2^n is twice 2^(n-1), and 2^0 is 1
 * So, if the user gives 0 for n, this just returns n
 * Otherwise, it returns twice the value of twoToThe(n-1)
 * [We'll talk about this 'recursion' trick later in the class. It's very useful.]
 */

int twoToThe(int exponent);
 
 /**
 * @brief Double a number
 * @param n The number to double
 * @sideeffect None
 * @returns Twice n
 * 
 * Very simple function, should just return 2*n or n+n
 */
 
 int twice(int n) ;
 
/**
 @brief Walk the user through the arithmetic in the trick
 @param theUsersNumber Whatever number the user picked
 @sideeffect Displays the computations for each step of the trick.
 @returns the result of going through the arithmetic of the trick
 
 Displays values of 2^k for the various k, and
 Walks through subtracting 2^0, multiplying by 2^2, adding 2^3, dividing by 2^1,
 and then subtracting twice the original number.
 */

int trickCheckArithmetic(int theUsersNumber) ;

/**
 *@brief gives instructions for the program
 *@sideeffect prints the instructions
 *@return nothing is returned
 */

void trickInstructions() ;


/**
 *@brief gets user input
 *@sideeffect assigns a value for the trick to use
 *return nothing
 */

void getUserInput(int number) ;

//main function




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
   int a ;
   
   trickInstructions() ;
   getUserInput ( a ) ;
   trickCheckArithmetic( a ) ;
   printf("You should have gotten %d \n" , THE_ANSWER_EVERY_TIME) ;
    return 0 ;
 }


 
 
 //definitions
 
 void getUserInput(int number)
 {
 printf("-> Calling getUserInput(%d)\n", number);
 
   printf("\n\nWhat is your number? \n") ;
   scanf("%d", &number) ;
   
printf("<- trickCheckArithmetic(%d) returns nothing\n" , number);
 }
 
 
 
 
 int trickCheckArithmetic(int theUsersNumber)
 {
    

// These will be used to store values.
int x ;
int y ;
int z ;
int w ;
int v ;
    
printf("-> Calling trickCheckArithmetic(%d)\n",theUsersNumber);

printf("First, 2^0 is subtracted from your number. \n") ;
   x=theUsersNumber-twoToThe(0) ;

printf("The result is %d. \n" , x) ;
   pause() ;

printf("Next, the result is multiplied by 2^2. \n") ;
   y=x*twoToThe(2) ;

printf("The result is %d. \n\n" , y) ;
   pause() ;
   
printf("Now, we add 2^3 to that.\n") ;
   z=y+twoToThe(3) ;

printf("The result is %d. \n" , x) ;
   pause () ;

printf("And then we divide the result by 2^1 \n") ;
   w=z/twoToThe(1) ;

printf("The result is %d. \n" , y) ;
   pause() ;

printf("Finally, subtract twice your original number from all of that. \n") ;
   v=w-twice(theUsersNumber) ;

printf("The final result is %d \n\n" , v) ;


printf("<- trickCheckArithmetic(%d) returns %d\n",theUsersNumber, THE_ANSWER_EVERY_TIME);


 return THE_ANSWER_EVERY_TIME ;
 }
 
 
 int twice (int n)
 {
   printf("-> Calling twice(%d)\n",n);
   
   printf("<- twice(%d) returns %d\n",n, n+n);
   
    return (n+n) ;
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


void pause ()
{
   char RandomInput ;
 
   printf(" \n -> Calling pause() \n ");
   
   printf("\n\n\n Press ENTER to continue. \n");
   
   scanf("%c" , &RandomInput) ;
   
   printf("<- pause() returns nothing\n");
}


void trickInstructions()
{
   printf("-> Calling trickInstructions()\n");
   
   printf("\n First, we subtract 2^0 from a number.") ;
      pause() ;
   
   printf("\n Next, we multiply that result by 2^2.") ;
      pause();
   
   printf("\n Now, we add 2^3 to that.") ;
      pause() ;
   
   printf("\n And then we divide it all by 2^1.") ;
      pause() ;
   
   printf("\n Finally, we subtract twice the original number, and we should get 2.") ;
      pause() ;
   
    printf("<- trickinstructions() returns nothing\n");
}