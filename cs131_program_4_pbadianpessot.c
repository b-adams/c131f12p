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

int getChoice(void);

/*
 * @brief runs runProgram 
 * @returns no return, void function
 */

int runProgram(void);

/*
 * @brief main function
 * @param argc Number of command-line arguements
 * @param argv The comman-line tokens that were typed
 * @returns 0 if no news
 */

int main(int argc, char* argv[]);


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

