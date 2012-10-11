/**
 *@file cs131_program_4_ESHANE.c
 *@author Eric Shane
 *@date 10/9/12
 *@brief Menuizing program 3
 *@status works
 */

#include <stdio.h>

#include <stdbool.h>

/**
 *@brief used as a value to exit program
 */
const char MENU_OPT_EXIT = '?';

/**
 *@brief the selection of program B
 */
const char MENU_OPT_PROG_B = '*';

/**
 *@brief the selection of program C
 */
const char MENU_OPT_PROG_C = 'W';

/**
 *@brief the selection of program E
 */
const char MENU_OPT_PROG_E = 'a';

/**
 *@brief the selection of program F
 */
const char MENU_OPT_PROG_F = '2';

/**
 *@brief runs whichever program is selected
 *@param is the value of the user's selection
 *@return returns true
 */
bool runProgram(char whichProg) ;

char getChoice() ;

/**
 *@author Eric Shane
 *@brief runs program 3B
 *@return returns 0
 */

void do_prog_3B() ;

/**
 *@author Eric Shane
 *@brief runs program 3C
 *@return returns 0
 */

void do_prog_3C() ;

/**
 *@author Eric Shane
 *@brief runs program 3E
 *@return returns 0
 */

void do_prog_3E() ;

/**
 *@author Eric Shane
 *@brief runs program 3F
 *@return returns 0
 */

void do_prog_3F() ;

/**
 *@author Eric Shane
 *@brief pauses program
 *@return returns 0
 */

void pause() ;




/**
 *@author Eric Shane
 *@brief main function
 *@return returns nothing
 */

int main(void)
{
char x ;
x = getChoice() ;
runProgram(x) ;
return 0 ;
}





bool runProgram(char whichProg)
{

int z=whichProg ;
    
while (z != MENU_OPT_EXIT)
    {
    switch(z) 
    {
    case MENU_OPT_PROG_B:
    do_prog_3B() ;
    printf("\n Program B complete. \n") ;
    
    break ;
    
    case MENU_OPT_PROG_C:
    do_prog_3C() ;
    printf("\n Program C complete. \n") ;
    
    break ;
    
    case MENU_OPT_PROG_E:
    do_prog_3E() ;
    printf("\n Program E complete. \n") ;
    
    break;
    
    case MENU_OPT_PROG_F:
    do_prog_3F() ;
    printf("\n Program F complete. \n") ;
    
    break ;
    
    default: 
    printf("ERROR \n \n") ;
    
    break ;
    }
    
    z = getChoice() ;
}

printf(" \n \n Exit Menu \n \n") ;

return (true) ;
}

char getChoice()
{
char choice ;

printf(" \n \n Which program do you want to run? \n MENU EXIT = ? \n PROGRAM B = * \n PROGRAM C = W \n PROGRAM E = a \n PROGRAM F = 2 \n \n") ;
scanf(" %c" , &choice) ;
return choice ;
}

void do_prog_3B()
{

int cash ;


printf("First the program will ask you how much money you have.\n") ;
    
pause() ;

printf("Next you will enter how much money you have for spending.\n") ;
    
pause() ;

printf("Finally, the program will recommend where to eat based on your money.\n") ;
    
pause() ;

printf("How much cash do you have?\n") ;

scanf("%d" , &cash) ;

if (cash>50)
{
    printf("Go to the Fargo.\n") ;
} else {
        if (cash>20)
        {
            printf("Go to the backstage grill. \n") ;
            } else {
            if (cash>0)
                {
                printf("Stick to the dining hall.\n") ;
                } else {
                    printf("\n error \n") ;
                    } 
        }
}
}

void do_prog_3C()
{
    
int year ;

bool coEd ;

bool oddeven ;

printf("First the program will ask what year you graduated.\n") ;
    
pause() ;

printf("Next the program will have you input the year you graduated.\n") ;
    
pause() ;

printf("The program will then do math in the background to determine if you graduated in a co-ed class and if you were even or odd.\n") ;
    
pause() ;

printf("Finally, the program will greet you and tell you what color shirt you are recieving.\n") ;
    
pause() ;

printf("What year did you graduate? \n") ;
scanf("%d" , &year) ;

{
    if (year%2 == 0)
    {
    oddeven = true ;
    }
        else
        {
        if (year%2 == 1)
            {
            oddeven = false ;
            }
                else{
                printf("error") ;
                }}}

{
        if (year>2005)
    {
    coEd = true ;
    }
        else
        if (year<2005)
            {
            coEd = false ;
            }
                else
                printf("error") ;
                }

if (coEd)
    {
    if (oddeven)
    {
     printf("\n Dear alumni, here is your blue and green shirt. \n") ;
    }
    else
        if (!oddeven)
        {
        printf("\n Dear alumni, here is your purple and yellow shirt. \n") ;
        }
    }
    else
    
    if (!coEd)
    {
        if (oddeven)
        {
        printf("\n Dear alumnae, here is your curulean and aquamarine shirt. \n") ;    
        }
        else
            if (!oddeven)
            {
            printf("\n Dear alumnae, here is your lavender and marigold shirt. \n") ;
            }
    }

}

void do_prog_3E()
{

int temp ;

printf("First you will be asked the temperature of your steak.\n") ;
    
pause() ;

printf("Next you will give the temperature of your steak to the nearest degree.\n") ;
    
pause() ;

printf("Finally the program will tell you if your dtaek is done.\n") ;
    
pause() ;
    
printf("What is the temperature of your steak? \n") ;
scanf("%d" , &temp) ;

if (temp>145)
{
printf("Your steak is done. \n ") ;
}
else
        if (temp==145)
        {
        printf("Your steak is just right. \n") ;
        }
        else
            if (temp>70)
            {
            printf("your steak is undercooked. \n") ;
            }
            else
                if (temp<70)
                {
                printf("Your steak is raw. \n") ;
                }
                else
                    printf("Error. \n") ;
}

void do_prog_3F()
{
        printf(" First you will be asked how many times you have seen Lord of the Rings.\n") ;
    
    pause() ;
    
        printf("You will input an integer value for how many times you have seen Lord of the Rings. \n") ;
    
    pause() ;
    
        printf("Based on how many times you have seen the movie, you will recieve a recommendation on how to proceed. \n") ;
    
    pause() ;
    
        printf("Finally, you will be told to bring popcorn. \n") ;
    
    pause() ;
    
int lotr ;
    
printf("How many times have you seen Lord of the Rings? \n \n") ;
scanf("%d" , &lotr) ;
    
if (lotr>5)
{
printf("Maybe watch it again, for good measure. \n") ;
}
else
    if (lotr>0)
    {
    printf("You deffinitely need to see it again. \n") ;
    }
    else
        if (lotr==0)
        {
        printf("you need to see it! \n") ;
        }
        else
            printf("error \n") ;
    
printf("Remember the popcorn. \n") ;
}

void pause()
{
    
    int meaningless ;
    printf(" \n Please enter a value and press Enter to continue \n ") ;
    scanf("%d" , &meaningless) ;
    
}