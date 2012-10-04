
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char* argv[])
{

int cash ;

printf("How much cash do you have?\n") ;
scanf("%d" , &cash) ;

if (cash>50)
{
    printf("Go to the Fargo.\n") ;
} else {
        if (cash>20)
        {
            printf("Go to the backstage grill. \n") ;
            } else {
            if (cash>0)
                {
                printf("Stick to the dining hall.\n") ;
                } else {
                    printf("\n error \n") ;
                    } 
        }
}

}