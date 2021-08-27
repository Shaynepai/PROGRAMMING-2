#include <stdio.h>
#include <stdlib.h>


int main()
{

        // variables
        int firstInteger, secondInteger, check;

        // asks the user to enter a number
        printf("Input any 2 integer that add, multiple, divide and subtract: \n ");

        // this will take 2 inputs
        check = scanf("%d %d", &firstInteger, &secondInteger);

        //checking if the take 2 inputs are numbers
        if(!check)
            {
       // an error message if the 2 inputs are not numbers
            return printf("Invalid input \n\n\n\n");
            }

        system("cls");

        printf("\n\nADD = %d\n", firstInteger + secondInteger); // this will add the 2 inputs and prompt it to the user
        printf("MUL = %d\n", firstInteger * secondInteger); // this will multiply the 2 inputs and prompt it to the user
        printf("DIV = %d\n", firstInteger / secondInteger); // this will divide the 2 inputs and prompt it to the user
        printf("SUB = %d\n\n\n", firstInteger - secondInteger); // this will subtract the 2 inputs and prompt it to the user


    return 0;
}
