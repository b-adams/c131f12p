/**
 *@file cs131_program_4_dcrabtree.c
 *@author Danielle Crabtree
 *@date October 10, 2012
 *@brief Pick a Program!
 *@status Working!
 */

#include <stdio.h>
#include <stdbool.h>

/**
 *@author Danielle Crabtree
 *@brief The input to exit the program
 */
const char MENU_OPT_EXIT = '*';

/**
 *@author Danielle Crabtree
 *@brief The input to initiate Program B
 */
const int MENU_OPT_PROG_B = 2;

/**
 *@author Danielle Crabtree
 *@brief The input to initiate Program E
 */
const char MENU_OPT_PROG_E = 'a';

/**
 *@author Danielle Crabtree
 *@brief The input to initiate Program F
 */
const char MENU_OPT_PROG_F = 'W';

/**
 *@author Danielle Crabtree
 *@brief The input to initiate Program G
 */
const char MENU_OPT_PROG_G = '?';

/**
 @author Danielle Crabtree/ Professor Adams
 @brief Chooses the program that is going to run or if it is going to exit
 @param whichProgram The program that the user chooses
 @sideeffect Runs the program the user chose
 @returns The user chosen program  
 */

bool runProgram (char whichProgram);

/**
 @author Danielle Crabtree/ Professor Adams
 @brief Chooses the program that is going to run or if it is going to exit
 @sideeffect Chooses the program the user inputed
 @returns The user's chosen program 
 */
char getChoice ();

/**
 @author Danielle Crabtree/ Professor Adams
 @brief Calls Program B
 @sideeffect Displays Program B
 @returns Program B
 */
void do_prog_3B ();

/**
 @author Danielle Crabtree/ Professor Adams
 @brief Calls Program E
 @sideeffect Displays Program E
 @returns Program E
 */
void do_prog_3E ();

/**
 @author Danielle Crabtree/ Professor Adams
 @brief Calls Program F
 @sideeffect Displays Program F
 @returns Program F
 */
void do_prog_3F ();

/**
 @author Danielle Crabtree/ Professor Adams
 @brief Calls Program G
 @sideeffect Displays Program G
 @returns Program G
 */
void do_prog_3G ();

/**
 @author Danielle Crabtree/ Professor Adams
 @brief Initializes the program
 @returns The program if successful!
 */
int main(void)
{
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