#include <stdio.h>
int main()
{
    int custID, units;
    char custName[50];
    float charge, surcharge = 0, totalAmount;
    printf("Enter customer ID: ");
    scanf("%d", &custID);
    printf("Enter customer name: ");
    scanf(" %s", custName);
    printf("Enter units consumed: ");
    scanf("%d", &units);
    if (units <= 199)
    {
        charge = units * 1.20;
    }
    else if (units >= 200 && units < 400)
    {
        charge = units * 1.50;
    }
    else if (units >= 400 && units < 600)
    {
        charge = units * 1.80;
    }
    else
    {
        charge = units * 2.00;
    }
    if (charge > 400)
    {
        surcharge = charge * 0.15;
    }
    totalAmount = charge + surcharge;
    if (totalAmount < 100)
    {
        totalAmount = 100;
    }
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", custID);
    printf("Customer Name: %s\n", custName);
    printf("Units Consumed: %d\n", units);
    printf("Charge: Rs. %.2f\n", charge);
    printf("Surcharge: Rs. %.2f\n", surcharge);
    printf("Total Amount: Rs. %.2f\n", totalAmount);
}
