# include <stdio.h>
# include <stdbool.h>


const int MENU_OPT_EXIT = 2;
const char MENU_OPT_PROG_B = '?';
const char MENU_OPT_PROG_C = 'a';
const char MENU_OPT_PROG_F = '*';
const char MENU_OPT_PROG_H = 'W';

char getChoice();
bool runProgram(char whichProg);
void do_prog_B();
void do_prog_C();
void do_prog_F();
void do_prog_H();

int main (void)
{
    char x;
    x = getChoice();
    runProgram(x);
}

bool runProgram(char whichProg)
{
if (whichProg != MENU_OPT_EXIT)
    {
    
    if (whichProg == MENU_OPT_PROG_B)
    {
    void do_prog_B() ;
    }
    
    else
    
        if (whichProg == MENU_OPT_PROG_C)
        {
        void do_prog_C() ;
        }
    
        else
    
            if (whichProg == MENU_OPT_PROG_F)
            {
            void do_prog_F() ;
            }
    
            else
    
                if (whichProg==MENU_OPT_PROG_H)
                {
                void do_prog_H() ;
                }
            
                    else
                
                    printf("ERROR \n \n") ;
                    getChoice() ;
}    
return (true) ;
}

char getChoice()
{
char choice ;

printf(" \n \n Which program do you want to run? \n MENU EXIT = ? \n PROGRAM B = * \n PROGRAM C = W \n PROGRAM E = a \n PROGRAM F = 2 \n \n") ;
scanf(" %c" , &choice) ;
return choice ;
}

void do_prog_B()
{

int cash ;


printf("First the program will ask you how much money you have.\n") ;
    
void pause() ;

printf("Next you will enter how much money you have for spending.\n") ;
    
void pause() ;

printf("Finally, the program will recommend where to eat based on your money.\n") ;
    
void pause() ;

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

void do_prog_C()
{
    
int year ;

bool coEd ;

bool oddeven ;

printf("First the program will ask what year you graduated.\n") ;
    
void pause() ;

printf("Next the program will have you input the year you graduated.\n") ;
    
void pause() ;

printf("The program will then do math in the background to determine if you graduated in a co-ed class and if you were even or odd.\n") ;
    
void pause() ;

printf("Finally, the program will greet you and state what color shirt you are recieving.\n") ;
    
void pause() ;

printf("What year did you graduate?") ;
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
     printf("\n Hello alumni, here is your blue and green shirt. \n") ;
    }
    else
        if (!oddeven)
        {
        printf("\n Hello alumni, here is your purple and yellow shirt. \n") ;
        }
    }
    else
    
    if (!coEd)
    {
        if (oddeven)
        {
        printf("\n Hello alumnae, here is your curulean and aquamarine shirt. \n") ;    
        }
        else
            if (!oddeven)
            {
            printf("\n Hello alumnae, here is your lavender and marigold shirt. \n") ;
            }
    }

}

void do_prog_E()
{
    
}

void do_prog_F()
{
    
}

void pause()
{
    
    int meaningless ;
    printf(" Please enter a value and press Enter to continue \n ") ;
    scanf("%d" , &meaningless) ;
    
}

