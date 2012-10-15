/**
* @file cs131_program_4_mfortin.c
* @author MELISSA_FORTIN
* @date OCTOBER_3
* @brief Program 4: Menu-izing Program 3 redo
*
*/

#include <stdio.h>
#include <stdbool.h>

/**
@brief Menu entry number for exiting program
*/
const char MENU_OPT_EXIT = '2';

/**
@brief Menu entry number for running program B

*/
const char MENU_OPT_PROG_B = 'a';

/**
@brief Menu entry number for running program D
*/
const char MENU_OPT_PROG_D = 'W';

/**
@brief Menu entry number for running program F
*/
const char MENU_OPT_PROG_F = '*';

/**
@brief Menu entry number for running program H
*/
const char MENU_OPT_PROG_H = '?';

/**
@brief Runs the program chosen
@param whichProg Chooses which program the user wants
@returns true
*/
bool runProgram(char whichProg);

/**
@brief Chooses which program to loop
@returns userChoice
*/
char getChoice();

/**
@brief Program 3B
@returns nothing
*/
void do_prog_3B();

/**
@brief Program 3D
@returns nothing
*/
void do_prog_3D();

/**
@brief Program 3F
@returns nothing
*/
void do_prog_3F();

/**
@brief Program 3H
@returns nothing
*/
void do_prog_3H();

/**
@brief Entry point for program
@returns 0 if no news (good news)
*/
int main(void)
{
	// declare your variables here
	
	char selection;
	selection = getChoice();
	while (selection != MENU_OPT_EXIT)
	{
		runProgram(selection);
		selection = getChoice();
	}
	printf("Goodbye\n");
	
	return 0;
}



char getChoice()
{
	// declare your variables here
	
	char userChoice;
	printf("Main menu:\n");
	printf("\t[%c] Run program B\n", MENU_OPT_PROG_B);
	printf("\t[%c] Run program D\n", MENU_OPT_PROG_D);
	printf("\t[%c] Run program F\n", MENU_OPT_PROG_F);
	printf("\t[%c] Run program H\n", MENU_OPT_PROG_H);
	printf("Please enter your selection, or %c to quit: ", MENU_OPT_EXIT);
	scanf(" %c", &userChoice);
	return userChoice;
}




bool runProgram(char whichProg)
{
	// declare your variables here
	
	switch (whichProg) 
	{
		case MENU_OPT_PROG_B:
				printf("Running Program B\n");
				do_prog_3B();
				printf("Program B Done\n\n");
			break;
		case MENU_OPT_PROG_D:
				printf("Running Program D\n");
				do_prog_3D();
				printf("Program D Done\n\n");
			break;
		case MENU_OPT_PROG_F:
				printf("Running Program F\n");
				do_prog_3F();
				printf("Program F Done\n\n");
			break;
		case MENU_OPT_PROG_H:
				printf("Running Program H\n");
				do_prog_3H();
				printf("Program H Done\n\n");
			break;
		default:
			printf("Invalid selection: [%c]\n", whichProg);
			return false;
	}
	return true;
}



void do_prog_3B()
{
    int theUsersNumber;
    printf ("Input how much money you have for dinner\n");
    scanf ("%d", &theUsersNumber);
    if (theUsersNumber >= 50)
    {
        printf ("Go to the Fargo\n");
    }
    else //theUsersNumber<50
    {
        if (theUsersNumber >= 20 && theUsersNumber < 50)
        {
            printf ("Go to the Backstage Grille\n");
        }
        else //theUsersNumber < 20
        {
            printf ("Stick to the Dining Hall\n");
        }
    }
    return;
}



void do_prog_3D()
{
    int theUsersNumber;
    int grain;
    printf ("Input how much the horse weighs\n");
    scanf ("%d", &theUsersNumber);
    if (theUsersNumber >= 955 && theUsersNumber <= 1000)
    {
        grain = 2;
    }
    else //theUsersNumber >= 1001 && theUsersNumber <= 1100
    {
        if (theUsersNumber >= 1001 && theUsersNumber <= 1100)
        {
            grain = 3;
        }
        else //theUsersNumber >= 1101 && theUsersNumber <= 1150
        {
            grain = 4;
        }
    }
    printf ("The %d horse needs %d lbs of grain and 8 lbs of hay today\n", theUsersNumber, grain);
    return;
}



void do_prog_3F()
{
    int theUsersNumber;
    printf ("Input how many times you've seen 'Lord of the Rings'\n");
    scanf ("%d", &theUsersNumber);
    if (theUsersNumber > 5)
    {
        printf ("Maybe watch it again, for good measure\n");
    }
    else
    {
        if (theUsersNumber > 0)
        {
            printf ("You definitely need to see it again\n");
        }
        else //theUsersNumber == 0
        {
            printf ("You need to see it!\n");
        }
    }
    printf ("Remember the popcorn\n");
    return;
}



void do_prog_3H()
{
    int theUsersNumber;
    printf ("Input the time rounded to the nearest hour\n");
    scanf ("%d", &theUsersNumber);
    char timeOfDay;
    printf ("Input the time of day, either am or pm\n");
    scanf (" %c", &timeOfDay);
    printf("You entered: (%c)\n", timeOfDay);
    if (timeOfDay == 'a')
    {
        if (theUsersNumber > 1 && theUsersNumber < 9)
        {
            printf ("You should be sleeping\n");
        }
        else //theUsersNumber < 1 && theUsersNumber > 9
        {
            printf ("You should be awake\n");
        }
    }
    else //timeOfDay == 'p'
    {
        if (theUsersNumber > 9 && theUsersNumber < 12)
        {
            printf ("You should be sleeping\n");
        }
        else //theUsersNumber < 9 && theUsersNumber > 12
        {
            printf ("You should be awake\n");
        }
    }
    return;
}



    