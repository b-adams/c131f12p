/**
* @file cs131_program_4_mfortin.c
* @author MELISSA_FORTIN
* @date OCTOBER_3
* @brief Program 4: Menu-izing Program 3
*
*/

#include <stdio.h>
#include <stdbool.h>

const int MENU_OPT_EXIT = (2);
const int MENU_OPT_PROG_B = (a);
const int MENU_OPT_PROG_D = (W);
const int MENU_OPT_PROG_F = (*);
const int MENU_OPT_PROG_H = (?);
bool runProgram(char whichProg);
char getChoice();
void do_prog_3B();  
void do_prog_3D(); 
void do_prog_3F();  
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
	while (selection == MENU_OPT_EXIT);
	{
		runProgram(selection);
		selection = getChoice();
	}
	printf("Goodbye\n");
	
	return 0;
}

/**
@brief Chooses which program to loop
@returns userChoice
*/

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


/**
@brief Runs the program chosen
@param char whichProg Chooses which program the user wants
@returns true
*/

bool runProgram(char whichProg)
{
	// declare your variables here
	
	switch (whichProg) 
	{
		case 0: MENU_OPT_PROG_B:
				printf("Running Program B\n");
				do_prog_b();
				printf("Program B Done\n\n");
			break;
		case 1: MENU_OPT_PROG_D:
				printf("Running Program D\n");
				do_prog_D();
				printf("Program D Done\n\n");
			break;
		case 2: MENU_OPT_PROG_F:
				printf("Running Program F\n");
				do_prog_F();
				printf("Program F Done\n\n");
			break;
		case 3: MENU_OPT_PROG_H:
				printf("Running Program H\n");
				do_prog_H();
				printf("Program H Done\n\n");
			break;
		default:
			printf("Invalid selection: [%c]\n", whichProg);
			return false;
	}
	return true;
}

/**
@brief Program 3B
@returns 0 if no news (good news)
*/

void do_prog_3B()
{
    int theUsersNumber;
    printf ("Input how much money you have for dinner\n");
    scanf ("%d", &theUsersNumber);
    if (theUsersNumber >= 50)
    {
        printf ("Go to the Fargo\n");
    }
    else
    {
        if (theUsersNumber >= 20 && theUsersNumber < 50)
        {
            printf ("Go to the Backstage Grille\n");
        }
        else (theUsersNumber < 20);
        {
            printf ("Stick to the Dining Hall\n");
        }
    }
    return 0;
}

/**
@brief Program 3D
@returns 0 if no news (good news)
*/

void do_prog_3D()
{
    int theUsersNumber;
    printf ("Input how much the horse weighs\n");
    scanf ("%d", &theUsersNumber);
    if (theUsersNumber >= 955 && theUsersNumber <= 1000)
    {
        printf ("Give the horse 2lbs of grain\n");
    }
    else
    {
        if (theUsersNumber >= 1001 && theUsersNumber <= 1100)
        {
            printf ("Give the horse 3lbs of grain\n");
        }
        else (theUsersNumber >= 1101 && theUsersNumber <= 1150);
        {
            printf ("Give the horse 4lbs of grain\n");
        }
    }
    printf ("The %d horse needs 3 lbs of grain and 8 lbs of hay today\n", theUsersNumber);
    return 0;
}

/**
@brief Program 3F
@returns 0 if no news (good news)
*/

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
        else (theUsersNumber == 0);
        {
            printf ("You need to see it!\n");
        }
    }
    printf ("Remember the popcorn\n");
    return 0;
}

/**
@brief Program 3H
@returns 0 if no news (good news)
*/

void do_prog_3H()
{
    int theUsersNumber;
    printf ("Input the time rounded to the nearest hour\n");
    scanf ("%d", &theUsersNumber);
    char timeOfDay;
    printf ("Input the time of day, either am or pm\n");
    scanf ("%c", &timeOfDay);
    if (timeOfDay = am)
    {
        if (theUsersNumber > 1 && theUsersNumber < 9)
        {
            printf ("You should be sleeping\n");
        }
        else (theUsersNumber < 1 && theUsersNumber > 9);
        {
            printf ("You should be awake\n");
        }
    }
    else (timeOfDay = pm);
    {
        if theUsersNumber > 9 && theUsersNumber < 12
        {
            printf ("You should be sleeping\n");
        }
        else theUsersNumber < 9 && theUsersNumber > 12;
        {
            printf ("You should be awake\n");
        }
    }
    return 0;
}



    