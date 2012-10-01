#include <stdio.h>

int main(void)
{
  int moneyfordinner;
     printf("How much money do you have for dinner?");
     scanf("%d", &moneyfordinner); 
     if(moneyfordinner > 50) //checking whether two integers are equal.
          printf("You should go to the Fargo!"); 
     else 
        if(50 > moneyfordinner > 20) //checking whether numb1 is greater than numb2. 
          printf("You should got to the Backstage Grill!"); 
        else 
          printf("You should just stick to the Dining Hall"); 
return 0;
}