/**
@file cs131_program_4_smucha.c
@brief Menu for program 3
@author Stacey Mucha
@date October 10, 2012
@status Working
*/

#include <stdio.h>
#include <stdbool.h>

/**
* @brief Allows person to exit menu by hitting a
*/
const char MENU_OPT_EXIT = a;

/**
* @brief Runs Program B by typing *
*/
const char MENU_OPT_PROG_B = *;

/**
* @brief Runs Program E by typing 2
*/
const int MENU_OPT_PROG_E = 2;

/**
* @brief Runs Program F by typing ?
*/
const char MENU_OPT_PROG_F = ?;

/**
* @brief Runs Program Z by typing W
*/
const char MENU_OPT_PROG_Z = W;

/**
* @brief Prompts user to pick which program to run
* @returns what user enters
*/
int char getChoice();

/**
* @brief Runs the menu
* @param whichProg Which program to run
* @returns true
*/
int bool runProgram(char whichProg);

/**
* @brief Runs program 3B
* @returns nothing
*/
void do_prog_3B();

/**
* @brief Runs program 3E
* @returns nothing
*/
void do_prog_3E();

/**
* @brief Runs program 3F
* @returns nothing
*/
void do_prog_3F();

/**
* @brief Runs program 3Z
* @returns nothing
*/
void do_prog_3Z();

/**
* @brief Main procedure
* @return nothing
* @author Stacey Mucha
*/
int main(void)
{
	
	
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
	char userChoice;
	printf("Main menu:\n");
	printf("\t[%c] Run program B\n", MENU_OPT_PROG_B);
	printf("\t[%c] Run program E\n", MENU_OPT_PROG_E);
	printf("\t[%c] Run program F\n", MENU_OPT_PROG_F);
	printf("\t[%c] Run program Z\n", MENU_OPT_PROG_Z);
	printf("Please enter your selection, or %c to quit: ", MENU_OPT_EXIT);
	scanf(" %c", &userChoice);
	return userChoice;
}


int bool runProgram(char whichProg)
{
	
	switch (whichProg) 
	{
		case MENU_OPT_PROG_B:
				printf("Running Program B\n");
				do_prog_B();
				printf("Program B Done\n\n");
			break;
		case MENU_OPT_PROG_E:
				printf("Running Program E\n");
				do_prog_E();
				printf("Program E Done\n\n");
			break;
		case MENU_OPT_PROG_C:
				printf("Running Program F\n");
				do_prog_F();
				printf("Program F Done\n\n");
			break;
		case MENU_OPT_PROG_D:
				printf("Running Program Z\n");
				do_prog_Z();
				printf("Program Z Done\n\n");
			break;
		default:
			printf("Invalid selection: [%c]\n", whichProg);
			return false;
	}
	return true;
}

void do_prog_3B()
{
    int moneyfordinner;
  
  printf("How much money do you have for dinner?\n");
  scanf("%d", &moneyfordinner); 
     
  if(moneyfordinner >= 50) 
  {
    printf("You should go to the Fargo!\n"); 
  } else {
    if(moneyfordinner >= 20) 
    {
      printf("You should got to the Backstage Grill!\n"); 
    } else {
      printf("You should just stick to the Dining Hall\n"); 
    }
  }
return 0;
}

void do_prog_3E()
{
    int tempOfSteak;
  printf("What is the temperature of your steak?\n");
  scanf("%d", &tempOfSteak);
    
  if(tempOfSteak >= 145)
  {
    printf("Your steak is just right to eat.\n");
  } else {
    if(tempOfSteak > 70)
    {
      printf("Your steak is undercooked.\n");
    } else {
      printf("Your steak is raw.\n");
    }
  }
return 0;
}
