#include <stdio.h>
#include <stdbool.h>

const char MENU_OPT_EXIT = 'a';
const char MENU_OPT_PROG_B = '2';
const char MENU_OPT_PROG_D = 'W';
const char MENU_OPT_PROG_E = '*';
const char MENU_OPT_PROG_F = '?';

bool runProgram(char whichProg);
char getChoice();
int do_prog_3b();
int do_prog_3d();
int do_prog_3e();
int do_prog_3f();

int main(void)
{
    char (x);
    x = getChoice();
    runProgram(x);
    return 0;
}

bool runProgram(char whichProg)
{
    int y=whichProg;
    
    while (y != MENU_OPT_EXIT)
        {
        switch(y) 
        {
            case MENU_OPT_PROG_B:
                do_prog_3b();
                printf("Program b\n");
    
    break;

            case MENU_OPT_PROG_D:
                do_prog_3d();
                printf("\n Program d\n") ;

    break ;

            case MENU_OPT_PROG_E:
                do_prog_3e();
                printf("\n Program e\n") ;

    break;

            case MENU_OPT_PROG_F:
                do_prog_3f();
                printf("\n Program f\n") ;

    break ;

    default: 
    printf("ERROR \n") ;

    break ;
    }
    
    y = getChoice();
    }
return (true);
}

char getChoice()
{
    char choice;
    printf("%c MENU_OPT_PROG_B = 2 \n", 2);
    printf("%c MENU_OPT_PROG_D = W \n", 'W');
    printf("%c MENU_OPT_PROG_E = * \n", '*');
    printf("%c MENU_OPT_PROG_F = ? \n", '?');
    printf("Please enter your selection, or %c to quit: ", MENU_OPT_EXIT);
    scanf(" %c", &choice);
    return choice;
}

int do_prog_3b()
{
    int theUsersNumber;
    printf("Input how much money you have to spend on dinner.\n");
    scanf("%d", &theUsersNumber);
    if (theUsersNumber > 50)
    {
        printf("Go to the Fargo.\n");
    }
    if (theUsersNumber <= 50 && 20 <= theUsersNumber)
    {
        printf("Go to the Backstage Grille.\n");
    }
    if (theUsersNumber < 20)
    {
        printf("Stick to the dining hall.\n");
    }
    return 0;
}

int do_prog_3d()
{
    int horseWeight;
    printf("How much does your Horse Weigh?\n");
    scanf("%d", &horseWeight);
    if (horseWeight < 955)
    {
        printf("Your horse is weak. Do not waste your grain on him/her. It is bound to die anyway. However, give it 8lbs of hay.\n");
    }
    if (horseWeight >= 955 && horseWeight <= 1000)
    {
        printf("Give your horse 2lbs of grain and 8lbs of hay.\n");
    }
    if (horseWeight >= 1001 && horseWeight <= 1100)
    {
        printf("Give your horse 3lbs of grain and 8lbs of hay.\n");
    }
    if (horseWeight >= 1101 && horseWeight <= 1150)
    {
        printf("Give your horse 4lbs of grain and 8lbs of hay.\n");
    }
    if (horseWeight >1150)
    {
        printf("Your horse is overweight. Dont feed it any grain, just 8lbs of hay.\n");
    }
    return 0;
}

int do_prog_3e()
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

int do_prog_3f()
{
    int timesWatched;
    printf("How many times have you watched Lord of the Rings?\n");
    scanf("%d", &timesWatched);
    if (timesWatched == 0)
    {
        printf("You need to see it!\n");
    }
    if (timesWatched > 0 && timesWatched <=5)
    {
        printf("You definetely need to see it again!\n");
    }
    if (timesWatched > 5)
    {
        printf("Maybe you should watch it again, just for good measure.\n");
    }
    printf("Don't forget the popcorn\n");
    return 0;
}