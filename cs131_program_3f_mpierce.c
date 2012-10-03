/**
*@file cs_program_3f_mpierce.c
*@date October 2, 2012
*@author Michael Pierce
**/
#include <stdio.h>





/**
* @brief Entry point for program
* @param argc Number of command-line arguments
* @param argv The command-line tokens that were typed
* @returns 0 
*/
int main(int argc, char* argv[])
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
    
