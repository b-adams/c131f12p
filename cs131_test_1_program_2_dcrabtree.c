
#include <stdio.h>


const int SOME_NUMBER = 5;
int getTwoAndAddTwo(int a, int b);



int main (int argc, char* argv[])
{
    int tomorrow;
    tomorrow = getTwoAndAddTwo(4, SOME_NUMBER);
    printf("Please ask about it on Nov %dth\n", tomorrow);
    return tomorrow;
}

int getTwoAndAddTwo (int a, int b)
{
    int firstVar;
    int secondVar;
    printf("Please enter two number, in the\n");
    printf("form X IS 4 Y IS 5 THERE IS NO Z\n");
    scanf("X IS %d Y IS %d THERE IS NO Z", firstVar, secondVar);
    return a+b+firstVar+secondVar;
}