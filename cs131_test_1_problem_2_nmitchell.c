
#include<stdio.h>


int SOME_NUMBER;


int getTwoAndAddTwo(int a, int b);


int main(int argc, char* argv[])
{
    int tomorrow;
    tomorrow = getTwoAndAddTwo(4, SOME_NUMBER);
    printf("Please ask about it on Nov %dth \n", tomorrow);
    return tomorrow;
}

int getTwoAndAddTwo(a, b)
{
    int firstVar;
    printf("Please enter two numbers, in the");
    printf(" form X IS 4 Y IS 5 There Is NO Z \n");
    int secondVar;
    scanf("X IS %d Y IS %d THERE IS NO Z", firstVar, secondVar);
    secondVar = a + b + firstVar;
    return 0;
}