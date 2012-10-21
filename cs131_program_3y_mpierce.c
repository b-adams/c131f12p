/**
* @file   cs131_program_3y_mpierce.c
* @author Michael Pierce
* @date   October 2, 2012
*/
#include <stdio.h>



/**
 * @brief Main procedure.
 * @param argv the command line (typed arguments)
 * @param argc the number of options in the command line.
 * @return zero 
 */
int main(int argc, char * argv[])
{
    int p;
    int m;
    int c;
    printf("To get into this car club you have to have either an expensive car, a collectible car or a massive car. \n ");
   
    printf("Enter the cost of your vehicle, than press ENTER: ");
    scanf(" %d", &p);
    
    printf("Enter the quantity produced of your car, than press ENTER: ");
    scanf(" %d", &c );
   
    printf("Enter the size of your vehicle, than press ENTER: ");
    scanf(" %d", &m);
    
    
    if ((p > 10000000) || (m*p >= 2000000) || (c*p >= 50000))
    {
        printf("Your In! \n");
    } else{
        printf("No Admission. \n");
    }

 
return 0;
}




