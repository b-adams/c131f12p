
#include <stdio.h>
#include <stdbool.h>

void eo(int time) ;

void date(int colors) ;

bool coEd ;

bool oddeven ;

int main(int argc, char* argv[])
{

int year ;


printf("What year did you graduate?") ;
scanf("%d" , &year) ;

eo(year) ;

date(year) ;

if (coEd)
    {
    if (oddeven)
    {
     printf("\n Hello alumni, here is your blue and green shirt. \n") ;
    }
    else
        if (!oddeven)
        {
        printf("\n Hello alumni, here is your purple and yellow shirt. \n") ;
        }
    }
    else
    
    if (!coEd)
    {
        if (oddeven)
        {
        printf("\n Hello alumnae, here is your curulean and aquamarine shirt. \n") ;    
        }
        else
            if (!oddeven)
            {
            printf("\n Hello alumnae, here is your lavender and marigold shirt. \n") ;
            }
    }
}






void eo(int time)
{
    if (time%2 == 0)
    {
    oddeven = true ;
    }
        else
        {
        if (time%2 == 1)
            {
            oddeven = false ;
            }
                else{
                printf("error") ;
                }}}



void date(int colors)
{
        if (colors>2005)
    {
    coEd = true ;
    }
        else
        if (colors<2005)
            {
            coEd = false ;
            }
                else
                printf("error") ;
                }
