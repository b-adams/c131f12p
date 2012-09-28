
#include <stdio.h>

const int SOME_NUMBER ;



int getTwoAndAddTwo(int a , int b) ;


int main(void)
{
    int today ;
    int tomorrow ;
    tomorrow = getTwoAndAddTwo(4, SOME_NUMBER) ;
    printf("Please ask about it on Nov %dth", tomorrow) ;
    return today ;
}

int getTwoAndAddTwo(int a , int b)
{
    int firstvar ;
    printf("Please enter %s two numbers", "in the") ;
    printf(" form X IS 4 Y IS 5 THERE IS NO Z") ;
    int secondvar ;
    scanf("X IS %d Y IS %d THERE IS NO Z" , &firstvar , &secondvar) ;
    return a+b+firstvar+secondvar ;
}