//A program to store the identification numbers of 
//10 employees (as ints)
//and their weekly gross pay (as doubles).
#include <stdio.h>
#define CONST 10

int main() {
    int arr_ID[CONST];
    double arr_gp[CONST];
    int ID;

    //Array Initialization
    for (int i = 0; i < CONST; i++) 
    {
        arr_ID[i] = 0;
        arr_gp[i] = 0.0;
    }
    //ID & Gross Pay input
    for (int i = 0; i < CONST; i++)
    {
        printf("Enter ID %d: ", i + 1);
        scanf("%d", &arr_ID[i]);
        printf("Enter Gross Pay: ");
        scanf("%lf", &arr_gp[i]);
    }
    //Finding Gross pay via ID
        printf("Enter the Employee ID: ");
        scanf("%d", &ID);
        for (int i = 0; i < CONST; i++) 
        {
            if (ID != arr_ID[i])
            {
                continue;
            }
            if (ID == arr_ID[i]) 
            {
                printf("Your Gross Pay is: $%.2f: \n", arr_gp[i]);
                break;
            }
        }

    return 0;
}