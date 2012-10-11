/**
 *@file cs131_program_4_lforce.c
 *@author Larry Force
 *@date 10/9/12
 *@brief Menuizing programs of program 3
 *@status unfinished
 */

#include <stdio.h>

#include <stdbool.h>

const char MENU_OPT_EXIT=? ;
const char MENU_OPT_PROG_B=* ;
const char MENU_OPT_PROG_C=W ;
const char MENU_OPT_PROG_E=a ;
const char MENU_OPT_PROG_F=2 ;

bool runProgram(char whichProg) ;
char getChoice ;

/**
 *@author Larry Force
 *@date 10/10/12
 *@brief 
 *
 */

void do_prog_3B() ;

void do_prog_3C() ;

void do_prog_3E() ;

void do_prog_3F() ;

void pause() ;


int main(void)
{
    
}

bool runProgram(char whichProg)
{
    
}

char getChoice
{
    
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
    
}

void do_prog_3E()
{
    
}

void do_prog_3F()
{
    
}

void pause()
{
    
    int meaningless ;
    
    printf(" Please enter a value and press Enter to continue \n ") ;
    scanf("%d" , &meaningless) ;
    
}