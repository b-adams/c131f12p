/**
*/

#include <stdio.h>

const int SOME_NUMBER = 4;

int getTwoAndAddTwo (int a, int b);

int main (int argc, char* argv[])
{
    int tomorrow;
    tomorrow = getTwoAndAddTwo(4, SOME_NUMBER);
    printf("Please ask about it on November %dth\n", tomorrow);
    return tomorrow;
}

int getTwoAndAddTwo(int a, int b)
{
    int firstVar;
    int secondVar;
    printf("please enter two numbers in the form: X IS 4 Y IS 5 THERE IS NO Z: ");
    scanf("X IS %d Y IS %d THERE IS NO Z: ", &firstVar, &secondVar);
}
