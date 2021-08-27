#include <stdio.h>
#include <stdlib.h>

    int main()

    {
    int userNum, check;

    printf("Write a C Program that checks positive, negative, zero or invalid inputted integer using switch case\n\n");

    printf("Input any integer: ");  //Inputing the Number of a positive or a negative.
    check = scanf("%d", &userNum); //Checking the input
    if(!check)
        {
        printf("The inputted data is Invalid.\n\n\n");
        return 0;
        }
    if(userNum < 0)
        {
        printf("The integer is a negative number.\n\n\n");
        }
    else if(userNum >= 0)
        {
        printf("The integer is a positive number.\n\n\n");
        }




    return 0;

}
