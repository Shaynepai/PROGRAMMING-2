#include <stdio.h>
#include <stdlib.h>

        int main(){

        int age, check; // declaration of age and the error checker variable
        char person[30]; // declaration Name variable

        printf("Name: ");     // asks the user to input it's name
        scanf("%s", &person);

        printf("Age: ");  // asks the user to input it's age
        check = scanf("%d", &age);

        if(!check){  // this will check if the age is a number or not
            printf("Invalid Age, Please Try Again.\n\n\n\n");// if the age input is not a number it will throw an error massage
            return 0;// this will end the program if age input is invalid
        }
        if( age < 18 ){// this will check if the user is below 18
            printf("You are not eligible for voting.\n\n\n\n");// this will be shown if user is below 18

        }else if(age >= 18){//this will check if the user's age is 18 above
            printf("You are eligible for voting.\n\n\n\n");//this will be shown after entering the age
        }

    return 0;
}
