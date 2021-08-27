#include <stdio.h>
#include <stdlib.h>

    int main()
    {

    int UserNum, a1, stack, check, reverse = 0; //A declaration of all variables including the error checker


    printf("Write a program that tells the user to input an integer and then outputs the number with the digits reversed using Iterative Looping.\n\n");

    printf("Input any integer: ");//Asks the user to enter any positive number
    check = scanf("%d", &UserNum);

    if(!check){ //Checks if the user input is a valid number
        printf("The inputted data is Invalid\n\n\n"); //Prompts if the user input is not a valid number
        return 0;//The program will end
    }
    if(UserNum < 0){ // Checks if the user input is a positive number
        printf("Please enter a positive number. . .\n\n\n"); // If the user input is not a positive number
        return 0;// The Program will end
    }


    stack = UserNum; //Stores the user input to a holder variable for later use

    while (UserNum > 0) //Will repeat the process up until it met a certain condition
    {
        a1 = UserNum % 10;
        reverse = reverse * 10 + a1;  //The Code in order to reverse the number
        UserNum /= 10;
    }

    printf("Revised for %d is %d\n\n\n", stack, reverse); //Will show the user the result

    return 0;
}
