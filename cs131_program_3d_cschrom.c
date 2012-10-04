/*
 *@file cs131_program_3d_cschrom.c
 *@author Colby Schrom
 *@date 10/3/2012
 *@status Completed
 *@brief Tells how much to feed the owners horse
 */

#include <stdio.h>

int horseWeight;

/*
 *@brief Tells the user how much to feed their horse
 *@param horseWeight How much your horse weighs
 */

int main(int argc, char* argv[])
{
    int horseWeight;
    printf("How much does your Horse Weigh?\n");
    scanf("%d", &horseWeight);
    if (horseWeight < 955)
    {
        printf("Your horse is weak. Do not waste your grain on him/her. It is bound to die anyway. However, give it 8lbs of hay.\n");
    }
    if (horseWeight >= 955 && horseWeight <= 1000)
    {
        printf("Give your horse 2lbs of grain and 8lbs of hay.\n");
    }
    if (horseWeight >= 1001 && horseWeight <= 1100)
    {
        printf("Give your horse 3lbs of grain and 8lbs of hay.\n");
    }
    if (horseWeight >= 1101 && horseWeight <= 1150)
    {
        printf("Give your horse 4lbs of grain and 8lbs of hay.\n");
    }
    if (horseWeight >1150)
    {
        printf("Your horse is overweight. Dont feed it any grain, just 8lbs of hay.\n");
    }
    return 0;
}