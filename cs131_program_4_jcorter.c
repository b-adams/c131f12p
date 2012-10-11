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
const char MENU_OPT_EXIT = 2;

/**
 * @brief this will run program 3B
*/
const char MENU_OPT_PROG_3B = a;

/**
 * @brief this will run program 3C
*/
const char MENU_OPT_PROG_3C = W;
/**
 * @brief this will run program 3D
*/
const char MENU_OPT_PROG_3D = *;
/**
 * @brief this will run program 3F
*/
const char MENU_OPT_PROG_3F = ?; 

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
    return (void);
}

bool runProgram(char whichProg)
{
    char whichProg;
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

void do_prog_3B ()
{
    
    int moolah;
    char* place;
    moolah = getPromptedNumber("How much ya got?");
    if(moolah>50)
    {
                place = "Fargo";
    } else if(moolah<20) {
                place = "Dinning Hall";
    } else {
                place = "Backstage Grill";
    }
    
    printf("Go to the... %s\n", place);
    return 0;}
}

void do_prog_3C()
{
    int gradYear;
    bool oddLine;
    gradYear = getPromptedNumber("How much ya got?");
    oddLine = (gradYear%2);
    
    printf("Dear ");
    if(gradYear < 2005)
    {
        printf("alumnae, here is your ");
        if(oddLine)
        {
            printf("Lavender and Marigold");
        } else {
            printf("Cerulean and Aquamarine");
        }
    } else {
        printf("alumni, here is your ");
        if(oddLine)
        {
            printf("Purple and Yellow");
        } else {
            printf("Blue and Green");
        }
    }
    printf("shirt\n");
    return 0;
}

void do_prog_3D()
{
    int horseWeight, grain;
    horseWeight = getPromptedNumber("How heavy is the horse?");
    if(955<=horseWeight && horseWeight<=1000)
    {
        grain=2;
    } else if(1001<=horseWeight && horseWeight<=1100) {
        grain=3;
    } else if(1101<=horseWeight && horseWeight<=1150) {
        grain=4;
    } else {
        grain=999; //Dunno, abnormal horse?
    }
    
    printf("The %dlb horse needs %d lbs of grain and 8lbs of hay today.\n", horseWeight, grain);
    return 0;
}
  
void do_prog_3F()
{
    int views;
    views = getPromptedNumber("How many times have you seen Lord of the Rings?");
    if(views>5) printf("Maybe watch it again, for good measure");
    else if(views>0) printf("You definitely need to see it again");
    else if(views==0) printf("You need to see it!");
    else printf("!?!?negative views!?!?!");
    printf("Remember the popcorn");
    return 0;
}