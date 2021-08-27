#include<stdlib.h>
#include<stdio.h>

// Function Declaration
    void info (int ID, int kWh);
    void Unit_charges (int kWh);
    void Surcharge ();
    void Total ();
    float charges, surcharge;

int main()
{

    int ID, kWh;

    printf("Input Customer ID:");
    scanf("%d",&ID);
    printf("Input the unit consumed by the customer:");
    scanf("%d",&kWh);

    system("cls");

    printf("[Electricity Bill]\n\n");

// Function calling
    info (ID, kWh);
    Unit_charges (kWh);
    Surcharge ();
    Total();
    return 0;
}
//This Determine the Charge Unit
    void info (int ID, int kWh)
    {
    printf("Customer ID#\t\t\t: %d\n", ID);
    printf("Unit consumed\t\t\t: %d\n", kWh);
    }

//This Calculate Unit Charges
    void Unit_charges (int kWh)
    {
    float  unit;
    if(kWh<199)
    unit= 1.50;
    else if(kWh>=250 && kWh<400)
    unit= 1.60;
    else if(kWh>=450 && kWh<600)
    unit= 1.85;
    else
    unit= 2.00;
    charges= kWh*unit;
    printf("Unit charges @P%.2f per unit \t:P %.2f\n",unit,charges);
    }

//This Calculate Surcharge
    void Surcharge ()
    {
    int sch;
    if (charges > 400)
    surcharge= charges * 10 / 100;
    else (charges < 100);
    sch= 0;
    printf("Surcharge amount \t\t:P %.2f\n",surcharge,sch);
    }

//This Function Calculate Total Customer Bill
    void Total ()
   {
    float total;
    total= charges + surcharge ;
    printf("Total Customer Bill\t\t:P %.2f\n\n\n", total);
   }
