#include <stdio.h>
#include <stdlib.h>

int i = 0, check, arraySize, result = 0; // Global variables Declarations
int userInput(int res){             //The function that make it workable
    int arr[arraySize];              //A local variable array
    if( i < arraySize ){
        printf("element %d: ", i+1);  // this will ask the user for an input each iteration
        scanf("%d", &arr[i]);
        result += arr[i];
        i++;
        userInput(result);          // Calls the functions
    }

    return result;
}
int main(){
        printf("Size of array: ");      // Asks the user for the array size
        check = scanf("%d", &arraySize);
        if(!check) {                   // Checks if the inputed value is a number and valid
                printf("Invalid Input\n\n\n\n");
                return 0;
        }
        if( arraySize < 5 || arraySize > 10 ){
            printf("Array size should be 5 to 10 only\n\n\n");
            return 0;
        }

        result = userInput(result);
        printf("The sum of all array elements :%d", result);
    return 0;

}
