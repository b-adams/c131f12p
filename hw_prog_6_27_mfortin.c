/**
* @file hw_prog_6_27_mfortin.c
* @author MELISSA_FORTIN
* @date OCTOBER_18
* @brief Program 6-27: Homework
*
*/


#include<stdio.h>

/* Move one disk from source to destination through the use of recursion
    Pre     The tower consists of n disks--source, destination, &auxillary towers given
    Post    Steps for moves printed
*/
void towers (int n, char source, char dest, char auxilary);

/**
@brief Entry point for program
@returns 0 if no news (good news)
*/
int main (int argc, char* argv[])
{
    towers (n, source, dest, auxilary);
    return 0;
}

void towers (int n, char source, char dest, char auxilary)
{
    printf ("BEGIN towers(n, source, dest, auxilary)\n");
    //Local destinations
    static int step = 0;
    //Statements
    printf ("Towers (%d, %c, %c, %c)\n", n, source, dest, auxilary);
    if (n == 1)
        printf ("/t/t/t/tStep %3d: Move from %c to %c\n", ++step, source, dest);
    else
        {
            towers (n - 1, source, auxilary, dest);
            printf ("/t/t/t/tStep %3d: Move from %c to %c\n", ++step, source, dest);
            towers (n - 1, source, auxilary, dest);
        } // if...else
    printf ("END towers(n, source, dest, auxilary)\n");
    return;
} //towers
