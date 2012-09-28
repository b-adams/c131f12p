#iclude <stdio.h>

const float C_TO_F_MULTIPLE = 1.8 ;
const int C_TO_F_SHIFT = 32 ;

void displayCelsiusInFarenheit(int tempInC) ;
int getBoundedNumber(int minsize, int maxsize) ;

int main(int argc, char* argv[])
{
        int tempToConvert ;
    tempToConvert = = -40
    //To do 7
    tempToConvert = getBoundedNumber(-40 , 50 )
    //To do 7 (again)
    return 0 ;
}

void displayCelsiusInFahrenheit(int tempInC)
{
    int tempInF ;
    tempInF = ((tempInC * C_TO_F_MULTIPLE) + C_TO_F_SHIFT)
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