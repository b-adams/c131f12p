
#include <stdio.h>


constant SOME_NUMBER = 5;

int getTwoAndAddTwo(int a, int b)



int main (int argc, char* argv[])
{
    int tomorrow;
    tomorrow = getTwoAndAddTwo(4, SOME_NUMBER);
    printf("Please ask about it on Nov %dth\n", tomorrow);
    return tomorrow;
}

int getTwoAndAddTwo (int a, int b)
{
    int a;
    int b;
    printf("Please enter two number, in the\n");
    printf("form X IS 4 Y IS 5 THERE IS NO Z\n");
    scanf ("%d, %d", &a, &b);
    return 0;
}