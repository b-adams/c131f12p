#iclude <stdio.h>

const int C_TO_F_SHIFT = 32 ;
const float C_TO_F_MULTIPLE = 1.8 ;
//To do 1

void displayCelsiusInFarenheit(int tempInC) ;
int getBoundedNumber(int minsize, int maxsize) ;

int main(int argc, char* argv[])
{
        int tempToConvert ;
    //To do 3
    //To do 7
    //To do 5
    //To do 7 (again)
    return 0 ;
}

void displayCelsiusInFahrenheit(int tempInC)
{
    //To do 2
    //To do 4
    //To do 6
}

int getBoundedNumber(int minsize , int maxsize)
{
    int userInput ;
    do {
        printf("Please enter a number between %d and %d\n" ,
               minsize , maxsize) ;
        scanf("%d" , &userInput) ;
    } while (userInput < minsize || userInput > maxsize) ;
    
    return userInput ;
}