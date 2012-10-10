/*
 * @file cs131_program_4_pbadianpessot.c
 * @author Pamela Badian-Pessot
 * @date October 10, 2012
 */

#include <stdio.h>
#include <stdbool.h>

/*
 @brief The option to exit the loop
 */
 
const char MENU_OPT_EXIT='?';

/*
 @brief The option to run program 3b
 */
 
const char MENU_OPT_PROG_B='*';

/*
 @brief The option to run program 3e
 */
 
const char MENU_OPT_PROG_E='W';

/*
 @brief The option to run program 3f
 */
 
const char MENU_OPT_PROG_F='a';

/*
 @brief The option to run program 3y
 */
 
const char MENU_OPT_PROG_Y='2';

/*
 * @brief runs program 3B, telling someone where to eat with their group
 * @returns no return, void function
 */
 
int do_prog_3B(void);
 
/*
 * @brief runs program 3E, telling someone that they need to watch lord of the rings
 * @returns no return, void function
 */

int do_prog_3E(void);

/*
 * @brief runs program 3F, telling someone how much to cook their steak
 * @returns no return, void function
 */

int do_prog_3F(void);

/*
 * @brief runs program 3Y, telling someone if their car is nice enough
 * @returns no return, void function
 */
 
int do_prog_3Y(void);

/*
 * @brief runs function getChoice
 * @returns no return, void function
 */

char getChoice(void);

/*
 * @brief runs runProgram
 * @param whichProg determines which function is run
 * @returns userChoice
 */

bool runProgram(char whichProg);

/*
 * @brief main function
 * @returns nothing
 */

int main(void);


int do_prog_3B(void)
{
    int userInput;
    
    printf("Please input how much you are having for dinner:");
    scanf("%d", &userInput);
    if(userInput>=50)
    {
        printf("Go to the Fargo \n");
    }   else    {
        if(userInput>=20)
        {
            printf("Go to the Backstage Grill \n");
        } else  {
            printf("Go to the Dining Hall \n");
        }
        
    }
    return 0;
}

int do_prog_3E(void)
{
    int userInput;
    
    printf("How many times have you seen Lord of the Rings? ");
    scanf("%d", &userInput);
    if(userInput>=5)
    {
        printf("Maybe watch it again, for good measure \n");
    }   else    {
        if(userInput==0)
        {
            printf("You need to see it!! \n");
        } else  {
            printf("You definately need to see it again \n");
        }
        
    }
    printf("Remeber the popcorn \n");
    return 0;
}


int do_prog_3F(void)
{
    int userInput;
    
    printf("Please input the internal temperature of your steak:");
    scanf("%d", &userInput);
    if(userInput<=70)
    {
        printf("Your steak is raw! \n");
    }   else    {
        if(userInput<=145)
        {
            printf("Your Steak is undercooked \n");
        } else  {
            printf("Your steak is just right! \n");
        }
        
    }
    return 0;
}


int do_prog_3Y(void)
{
    int size;
    int price;
    int numberProduced;
    int massive;
    int collectible;
    
    printf("How big is your car?");
    scanf("%d", &size);
    printf("How much does your car cost?");
    scanf("%d", &price);
    printf("How many of you car were made?");
    scanf("%d", &numberProduced);
    
    if(price>=10000000)
    {
        printf("You're In! \n");
    }   else    {
        if(massive>=2000000)
        {
            massive=price*size;
            printf("You're In! \n");
        } else  {
                if(collectible>=50000)
                    {    
                        collectible=price*numberProduced;
                        printf("You're In! \n");
                    }  else {
                        printf("No Admission \n");
            }
        }
    }
    return 0;
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
	printf("\t[%c] Run program Y\n", MENU_OPT_PROG_Y);
	printf("Please enter your selection, or %c to quit: ", MENU_OPT_EXIT);
	scanf(" %c", &userChoice);
	return userChoice;
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
		case MENU_OPT_PROG_Y:
				printf("Running Program Y\n");
				do_prog_3Y();
				printf("Program Y Done\n\n");
			break;
		default:
			printf("Invalid selection: [%c]\n", whichProg);
			return false;
	}
	return true;
}


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