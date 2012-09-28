/**
* @file cs131_test_1_problem_2_smucha.c
* @author Stacey Mucha
* @date 9/28/12
* @status compiles
*/
#include <stdio.h>


const int SOME_NUMBER;


int getTwoAndAddTwo(int a, int b);


int main(int argc, char* argv[])
{
    int tomorrow;
    int today;
    tomorrow = getTwoAndAddTwo(4, SOME_NUMBER);
    printf("Please ask about it on Nov %dth", tomorrow);
    return today;
}

int getTwoAndAddTwo(int a, int b)
{
    int firstvar;
    printf("Please enter two numbers");
    printf("from X IS 4 Y IS 5 THERE IS NO Z");
    int secondvar;
    scanf("X IS %d Y IS %d THERE IS NO Z", firstvar, secondvar);
    return a+b+firstvar+secondvar;
}