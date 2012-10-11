/**
 * @file cs131_Program_4_jcorter.c
 * @author Jessica Corter
 * @date 10/10/12
 * @status getting started on program 4
*/

#include <stdio.h>
#include <stdbool.h>

/**
 * @brief this will end the program
*/
const char MENU_OPT_EXIT = 2

/**
 * @brief this will run program 3B
*/
const char MENU_OPT_PROG_B = a

/**
 * @brief this will run program 3C
*/
const char MENU_OPT_PROG_C = W
/**
 * @brief this will run program 3D
*/
const char MENU_OPT_PROG_D = *
/**
 * @brief this will run program 3F
*/
const char MENU_OPT_PROG_F = ? 

/**
 * @brief
 * @param
 * @param
 * @sideeffect
 * @returns
*/
bool runProgram (char whichProg);


/**
 * @brief
 * @param
 * @param
 * @sideeffect
 * @returns
*/
char getChoice ();

/**
 * @brief
 * @param
 * @param
 * @sideeffect
 * @returns
*/
void do_prog_3B ();

/**
 * @brief
 * @param
 * @param
 * @sideeffect
 * @returns
*/
void do_prog_3C ();

/**
 * @brief
 * @param
 * @param
 * @sideeffect
 * @returns
*/
void do_prog_3D ();

/**
 * @brief
 * @param
 * @param
 * @sideeffect
 * @returns
*/
void do_prog_3F ();

/**
 * @brief Main procedure
 * @returns Zero if successful
 * @author Jessica Corter
*/
int main (void) //int main(int argc, char* argv[])
{
    char selection;
    selection = getChoice();
    while (selection != MENU_OPT_EXIT)
    {
        runProgram (selection);
        selection = getChoice();
    }
    printf ("Goodbye/n");
    return void;
}

bool runProgram(char whichProg)
{
    char whichProg;
    Printf("Please enter your selection: \n");
    scanf( " %c", &whichProg);
    switch(whichProg)
    {
        case MENU_OPT_PROG_3B;
            printf("Running Program 3B\n");
            do_prog_3B();
            Printf("Program 3B Done\n\n");
        
        case MENU_OPT_PROG_3C;
            printf("Running Program 3C\n");
            do_prog_3C();
            Printf("Program 3C Done\n\n");
            
        case MENU_OPT_PROG_3D;
            printf("Running Program 3D\n");
            do_prog_3D();
            Printf("Program 3D Done\n\n");
            
        case MENU_OPT_PROG_3F;
            printf("Running Program 3F\n");
            do_prog_3F();
            Printf("Program 3F Done\n\n");
            
        default: printf("Invalid selection: [%c]\n", whichProg);
            
        return False;      
    }
    return True;    
}

char getChoice()
{
    char getChoice;
    printf("Main Menu:\n");
    printf("\t[%c] Run program 3B\n", MENU_OPT_PROG_3B);   
    printf("\t[%c] Run program 3C\n", MENU_OPT_PROG_3C);
    printf("\t[%c] Run program 3D\n", MENU_OPT_PROG_3D);
    printf("\t[%c] Run program 3F\n", MENU_OPT_PROG_3F);
    printf("Please enter your selection, or %c to quit: ", MENU_OPT_EXIT);
    scanf(" %c", &userChoice);
    return userChoice;

}

