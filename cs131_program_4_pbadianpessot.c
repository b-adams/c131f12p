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
 
const char MENU_OPT_EXIT=?;

/*
 @brief The option to run program 3b
 */
 
const char MENU_OPT_PROG_B=*;

/*
 @brief The option to run program 3e
 */
 
const char MENU_OPT_PROG_E=W;

/*
 @brief The option to run program 3f
 */
 
const char MENU_OPT_PROG_F=a;

/*
 @brief The option to run program 3y
 */
 
const char MENU_OPT_PROG_Y=2;

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
