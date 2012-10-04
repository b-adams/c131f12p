/*
 *@file cs131_program_3e_cschrom.c
 *@author Colby Schrom
 *@date 10/3/2012
 *@status Completed
 *@brief Do you want to eat your steak?
 */

#include <stdio.h>

int steakTemp;

/*
 *@brief Makes sure the user eats a juicy, delicious steak that won't give them food poisoning.
 *@param steakTemp The temperature of the User's steak
 */

int main(int argc, char* argv[])
{
    int steakTemp;
    printf("What is the temperature of your steak?\n");
    scanf("%d", &steakTemp);
    if (steakTemp <= 70)
    {
        printf("Your steak is raw. Don't eat it.\n");
    }
    if (steakTemp > 70 && steakTemp < 145)
    {
        printf("Your steak is undercooked. Don't eat it just yet.\n");
    }
    if (steakTemp == 145)
    {
        printf("Your steak is perfect. Eat it now.\n");
    }
    if (steakTemp > 145)
    {
        printf("Ya done goofed. Your steak is overcooked. Hope you like char. If not, you can always try again.\n");
    }
    return 0;
}