/**
@file cs131_program_4_smucha.c
@brief Menu for program 3
@author Stacey Mucha
@date October 10, 2012
@status Working
*/

#include <stdio.h>
#include <stdbool.h>

// program int main(int argc, char* argv[]);
#include <stdio.h>

int main(void)
{
	// declare your variables here
	
	// For any input using the 'scanf function you need to fill the first parameter.
	// http://en.wikipedia.org/wiki/Scanf#Format_string_specifications
	
	// For any output using the 'printf' function you need to fill the first parameter.
	// http://en.wikipedia.org/wiki/Printf#printf_format_placeholders
	
	
	char selection;
	selection = getChoice();
	while (while(selection !== MENU_OPT_EXIT)) 
	{
		runProgram(selection);
		selection = getChoice();
	}
	printf("Goodbye\n");
	
	return 0;
}

int char getChoice()
{
	// declare your variables here
	
	// For any input using the 'scanf function you need to fill the first parameter.
	// http://en.wikipedia.org/wiki/Scanf#Format_string_specifications
	
	// For any output using the 'printf' function you need to fill the first parameter.
	// http://en.wikipedia.org/wiki/Printf#printf_format_placeholders
	
	
	char userChoice;
	printf("Main menu:\n");
	printf("\t[%c] Run program X\n", MENU_OPT_PROG_X);
	printf("\t[%c] Run program K\n", MENU_OPT_PROG_K);
	printf("\t[%c] Run program C\n", MENU_OPT_PROG_C);
	printf("\t[%c] Run program D\n", MENU_OPT_PROG_D);
	printf("Please enter your selection, or %c to quit: ", MENU_OPT_EXIT);
	scanf(" %c", &userChoice);
	return userChoice;
}

// function bool runProgram(char whichProg);
#include <stdio.h>

int bool runProgram(char whichProg)
{
	// declare your variables here
	
	// For any input using the 'scanf function you need to fill the first parameter.
	// http://en.wikipedia.org/wiki/Scanf#Format_string_specifications
	
	// For any output using the 'printf' function you need to fill the first parameter.
	// http://en.wikipedia.org/wiki/Printf#printf_format_placeholders
	
	
	switch (whichProg) 
	{
		case MENU_OPT_PROG_X:
				printf("Running Program X\n");
				do_prog_X();
				printf("Program X Done\n\n");
			break;
		case MENU_OPT_PROG_K:
				printf("Running Program K\n");
				do_prog_K();
				printf("Program K Done\n\n");
			break;
		case MENU_OPT_PROG_C:
				printf("Running Program C\n");
				do_prog_C();
				printf("Program C Done\n\n");
			break;
		case MENU_OPT_PROG_D:
				printf("Running Program D\n");
				do_prog_D();
				printf("Program D Done\n\n");
			break;
		default:
			printf("Invalid selection: [%c]\n", whichProg);
			return false;
	}
	return true;
}