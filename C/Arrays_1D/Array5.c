//Copy elements from 1 Array to 2nd Array
#include <stdio.h>
#define CONST 10
int main() {
    int arr1[CONST] = {0};
    int arr2[CONST] = {0};

    for (int i = 0; i < CONST; i++) 
    {
        printf("Enter num %d: ", i + 1);
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];
    }
    printf("Array 1: ");
    for (int i = 0; i < CONST; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\nArray 2: ");
    for (int i = 0; i < CONST; i++) 
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    
    return 0;
}