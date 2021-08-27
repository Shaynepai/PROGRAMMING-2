#include <stdio.h>
#include <stdlib.h>

int main(){

    char str[255];  // Declared a string with a max of 255 characters
    int  i, vowels, consonantCounter; // Counter Ints


   printf("Input a sentence: "); // Asks the user to enter a sentence
   gets(str);                   // Stores the user input to the variable named str
   system("cls");


   printf("The Inputted String: "); // Prints the user Input
   puts(str);
    printf("\n");

   i = 0;                   // Assigning values
   vowels = 0;
   consonantCounter = 0;


    while(str[i]!='\0') // The Code that give the code works
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            str[i]=str[i]-32;
            vowels++;
        }
        if(str[i] >= 'a' || str[i] >= 'e' || str[i] >= 'i' || str[i] >= 'o' || str[i] >= 'u'){
            consonantCounter++;
        }

        i++;
    }
    printf("Converted the vowels into Uppercase.: ");
    puts(str);
    printf("\n");

    printf("The length of the string: %d \n\n", i);

    printf("The number of consonant: %d \n\n", i-vowels);

    printf("The number of vowels: %d \n\n\n\n\n", i-consonantCounter);

}
