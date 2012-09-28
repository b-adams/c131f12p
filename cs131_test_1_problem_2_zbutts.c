
#include <stdio.h>


const int SOME_NUMBER;


int getTwoAndAddTwo(int a, int b);


int main(int argc, char* argv [])
{
    int tomorrow;
    tomorrow = getTwoAndAddTwo(4,SOME_NUMBER);
    printf("Please ask about it on Nov %dth", tomorrow);
    return tomorrow;
}

int getTwoAndAddTwo(int a, int b)
{
    int firstVar;
    printf("Please enter two numbers, in the");
    printf(" form X IS 4 Y IS 5 THERE IS NO Z");
    int secondVar;
    scanf("X IS %d Y IS %d THERE IS NO Z", &firstVar, &secondVar);
    return a+b+firstVar+secondVar;
}