/**
 *@file cs131_program_4_dcrabtree.c
 *@author Danielle Crabtree
 *@date October 10, 2012
 *@brief Pick a Program!
 *@status In Progress
 */

#include <stdio.h>
#include <stdbool.h>

const char MENU_OPT_EXIT = '*';
const int MENU_OPT_PROG_B = 2;
const char MENU_OPT_PROG_E = 'a';
const char MENU_OPT_PROG_F = 'W';
const char MENU_OPT_PROG_G = '?';

bool runProgram (char whichProgram);
char getChoice ();
void do_prog_3B ();
void do_prog_3E ();
void do_prog_3F ();
void do_prog_3G ();



int main(void)
{
	// declare your variables here
	
	// For any input using the 'scanf function you need to fill the first parameter.
	// http://en.wikipedia.org/wiki/Scanf#Format_string_specifications
	
	// For any output using the 'printf' function you need to fill the first parameter.
	// http://en.wikipedia.org/wiki/Printf#printf_format_placeholders
	
	
	char selection;
	selection = getChoice();
	while(selection != MENU_OPT_EXIT) 
	{
		runProgram(selection);
		selection = getChoice();
	}
	printf("Goodbye\n");
	
	return 0;
}


bool runProgram(char whichProg)
{
	// declare your variables here
	
	// For any input using the 'scanf function you need to fill the first parameter.
	// http://en.wikipedia.org/wiki/Scanf#Format_string_specifications
	
	// For any output using the 'printf' function you need to fill the first parameter.
	// http://en.wikipedia.org/wiki/Printf#printf_format_placeholders
	
	
	switch (whichProg) 
	{
		case MENU_OPT_PROG_B:
				printf("Running Program B\n");
				do_prog_3B();
				printf("Program B Done\n\n");
			break;
		case MENU_OPT_PROG_E:
				printf("Running Program E\n");
				do_prog_3E();
				printf("Program E Done\n\n");
			break;
		case MENU_OPT_PROG_F:
				printf("Running Program F\n");
				do_prog_3F();
				printf("Program F Done\n\n");
			break;
		case MENU_OPT_PROG_G:
				printf("Running Program G\n");
				do_prog_3G();
				printf("Program G Done\n\n");
			break;
		default:
			printf("Invalid selection: [%c]\n", whichProg);
			return false;
	}
	return true;
}


char getChoice()
{
	// declare your variables here
	
	// For any input using the 'scanf function you need to fill the first parameter.
	// http://en.wikipedia.org/wiki/Scanf#Format_string_specifications
	
	// For any output using the 'printf' function you need to fill the first parameter.
	// http://en.wikipedia.org/wiki/Printf#printf_format_placeholders
	
	
	char userChoice;
	printf("Main menu:\n");
	printf("\t[%c] Run program B\n", MENU_OPT_PROG_B);
	printf("\t[%c] Run program E\n", MENU_OPT_PROG_E);
	printf("\t[%c] Run program F\n", MENU_OPT_PROG_F);
	printf("\t[%c] Run program G\n", MENU_OPT_PROG_G);
	printf("Please enter your selection, or %c to quit: ", MENU_OPT_EXIT);
	scanf(" %c", &userChoice);
        
	return userChoice;
}

void do_prog_3B ()
{
    int money;
    
    printf("Please enter how much money you have for dinner: ");
    scanf("%d", &money);
  
    if(money >= 50)
    {
        printf("You should go to the Fargo!\n");
    }
    else if (money < 50 && money>= 20)
    {
        printf("You should go to the Backstage Grill!\n");
    }
    else if(money < 20)
    {
        printf("Maybe you should just stick to the Wells Dining Hall...\n");
    }
    
}

void do_prog_3E ()
{
    int beefTemp;
    
    printf("Please enter the temperature of you steak: ");
    scanf("%d", &beefTemp);
  
    if(beefTemp >= 145)
    {
        printf("Your steak is just right to eat!\n");
    }
    else if (beefTemp>=98)
    {
        printf("Your steak is a bit undercooked\n");
    }
    else if(beefTemp < 70)
    {
        printf("I think the cow is still mooing because your steak is raw!\n");
    }
    
}

void do_prog_3F ()
{
    int numSeenLords;
    
    
    printf("Please enter how many times you have seen the movie Lord of the Rings: ");
    scanf("%d", &numSeenLords);
  
    if(numSeenLords >= 5)
    {
        printf("Maybe watch it again, for good measure.\n");
    }
    else if (numSeenLords > 0)
    {
        printf("You definitely need to see it again\n");
    }
    else if(numSeenLords == 0)
    {
        printf("You need to see it!\n");
    }
    
    printf("Remember the popcorn!\n");
    
}
void do_prog_3G ()
{
    int age;
    int temp;
    
    printf("I am the bouncer at this club.  Please enter your age: ");
    scanf("%d", &age);
    
    printf("Also, what is the temperature outside?: ");
    scanf("%d", &temp);
  
    if(age >= 21 && temp < 70)
    {
        printf("Welcome to the club! Can I take your coat for you?\n");
    }
    else if (age >= 21 && temp >= 70)
    {
        printf("Welcome to the club! Just get dancing!\n");
    }
    else if(age < 21 && temp < 70)
    {
        printf("Better keep on that coat.\n");
    }
    else if (age < 21 && temp >= 70)
    {
        printf("Time for you to go!\n");
    }   
    
    printf("Have a great evening!\n");
}