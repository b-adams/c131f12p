
#include<stdio.h>


const int SOME_NUMBER;


int getTwoAndAddTwo(int a, int b);


int main(int argc, char* argv[])
{
    int tomorrow;
    tomorrow = getTwoAndAddTwo(4, SOME_NUMBER);
    printf("Please ask about it on Nov %d th\n", tomorrow);
    return tomorrow;
}

int getTwoAndAddTwo(int a, int b)
{
    int firstvar;
    printf("Please enter two numbers, in the");
    printf("form X IS 4 Y IS 5 THERE IS NO Z\n");
    int secondvar;
    scanf("X IS %d Y is %d THERE IS NO Z\n", firstvar, secondvar);
    return a+b+firstvar+secondvar;
}