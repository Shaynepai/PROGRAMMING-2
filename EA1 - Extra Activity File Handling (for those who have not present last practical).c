#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int totalfunc(int math, int sci, int eng);
int averagefunc(int total);

int main()
{



    int NumOfStuds = 0, total, average;

     printf("Enter the set of Students: ");
     scanf("%d", &NumOfStuds);

    FILE *files[NumOfStuds];
    for (int i = 0; i < NumOfStuds; i++){

        char filename[50], name[100];
        int id, math, sci, eng;

        sprintf(filename, "Student%d.txt", i+1);

        files[i] = fopen(filename, "w");

        printf("\nName: ");
        scanf("%s", name);
        printf("\nID: ");
        scanf("%d", &id);

        printf("\nMath: ");
        scanf("%d", &math);

        printf("\nScience: ");
        scanf("%d", &sci);

        printf("\nEnglish: ");
        scanf("%d", &eng);

        printf("\n\n");

        total = totalfunc(math, sci, eng);
        average = averagefunc(total);

        fprintf(files[i], "Name: %s\n", name);
        fprintf(files[i], "ID Number: %d\n", id);
        fprintf(files[i], "Math: %d\n", math);
        fprintf(files[i], "Science: %d\n", sci);
        fprintf(files[i], "English: %d\n\n", eng);
        fprintf(files[i], "Total Grade: %d\n", total);
        fprintf(files[i], "Grade Average: %d\n", average);


    }
    return 0;
}

int totalfunc(int math, int sci, int eng){
    int total;

    return total = math + sci+ eng;
}

int averagefunc(int total){
    int average;

    return average = total/3;
}
