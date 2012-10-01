#include <stdio.h>

int main(void)
{
  int moneyfordinner;
     printf("How much money do you have for dinner?");
     scanf("%d", &moneyfordinner); 
     if(moneyfordinner > 50) 
          printf("You should go to the Fargo!"); 
     else 
        if(moneyfordinner > 20) 
          printf("You should got to the Backstage Grill!"); 
        else 
          printf("You should just stick to the Dining Hall"); 
return 0;
}