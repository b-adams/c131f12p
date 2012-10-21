/**
*@file cs_program_3g_mpierce.c
*@date October 2, 2012
*@author Michael Pierce
**/
#include <stdio.h>
#include <stdbool.h>

const int MENU_OPT_EXIT=?;
const int MENU_OPT_PROG_B=a;
const int MENU_OPT_PROG_F=2;
const int MENU_OPT_PROG_G=*;
const int MENU_OPT_PROG_Y=w;

void do_prog_3B();
void do_prog_3F();
void do_prog_3G();
void do_prog_3y();

void do_prog_3B()
{
 int getUserInput();
 int x;
  x = getUserInput();

    if(x<21)
    {
    printf("You should dine at the dinning hall.=) \n");
    } else {
      if ((x>20) || (x<50))
      {
      printf ("You should dine at the Backstage Grill. \n");
      } else {  
       if(x>50)
       { 
       printf ("You should dine at the Fargo. \n");
       } else {
      
      } 
    }
  }
  printf("Have a nice day! \n");
 return 0;
}

void do_prog_3F()
{
    int x;
    printf("Please enter the number of times you have seen the 'Lord of The Rings' than press ENTER. \n");
    scanf("%d", &x);
        if (x==0)
         {
         printf("You need to see it! \n");
         } else {
           if (x<5)
           {
            printf("You need to definitely see it again. \n");
            } else {
              printf("Maybe watch it again, for good measure. \n"); 
        }   }
    printf("Remember the Popcorn. \n");
   return 0;
}

void do_prog_3G()
{
    
    int age;
    printf("I am the bouncer at this club. Please enter your age. \n");
    scanf("%d", &age);
    int t;
    printf("Also, What is the temperature outside. \n");
    scanf("%d", &t);
    if (age>20)
    {
        printf("Welcome to the Club! \n");
         if (t>70)
         {
          printf("Just get dancing. \n");
         } else{
          printf("Can I take your coat for you? \n");
         }
        
    } else {
        
        printf("Sorry friend, you are too young for this club. \n");
        if (t<70)
        {
        printf("Better keep on that coat. \n");
        } else{
       printf("Time for you to go. \n");
        }
        
    }
    printf("Have a great evening. \n");
    return 0;
    
}

void do_prog_3Y()
{
    int p;
    int m;
    int c;
    printf("To get into this car club you have to have either an expensive car, a collectible car or a massive car. \n ");
   
    printf("Enter the cost of your vehicle, than press ENTER: ");
    scanf(" %d", &p);
    
    printf("Enter the quantity produced of your car, than press ENTER: ");
    scanf(" %d", &c );
   
    printf("Enter the size of your vehicle, than press ENTER: ");
    scanf(" %d", &m);
    
    
    if ((p > 10000000) || (m*p >= 2000000) || (c*p >= 50000))
    {
        printf("Your In! \n");
    } else{
        printf("No Admission. \n");
    }

 
return 0;
}



