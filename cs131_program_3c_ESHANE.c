/**
* @file   cs131_program_3c_ESHANE.c
* @author Eric Shane
* @date   10/03/12
* @brief  Program 3c: Alumni
*
* @todo write a program that tells you what color shirt the alumni should wear
* 
* @status works
* 
* @assistance Jake Smith, Colby Schrom
*/

# include <stdio.h>

/**
* @brief Main procedure.
*
* @param argv the command line (typed arguments)
* @param argc the number of options in the command line.
* @return zero if successful
* @author Eric Shane
*/

int main( int argc, char * argv[] )
{
    int gradYear;
    printf("Please enter year of graduation: ");
    scanf("%d", &gradYear);
    
    if(gradYear < 2004 && gradYear % 2 == 0)
    {
        printf("Dear Alumnae here is your complimentary Cerulean and Aquamarine shirt.\n");
    }
    
    if(gradYear < 2004 && gradYear % 2 != 0)
    {
        printf("Dear Alumnae here is your complimentary Lavender and Marigold shirt.\n");
    }
    
    if(gradYear >= 2004 && gradYear % 2 == 0)
    {
        printf("Dear Alumni here is your complimentary Cerulean and Aquamarine shirt.\n");
    }
    
    if(gradYear >= 2004 && gradYear % 2 != 0)
    {
        printf("Dear Alumni here is your complimentary Lavender and Marigold shirt.\n");
    }
    
    return 0;
}







