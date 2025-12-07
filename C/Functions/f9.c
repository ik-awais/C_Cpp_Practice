// Reverse a String
#include <stdio.h>
#define SIZE 15
void reverse_array();
int main(){
    reverse_array();
    return 0;
}
void reverse_array(){
    char string_array[SIZE] = "Muhammad Awais";
    char reverse_array[SIZE];
    int j = 0;
    for (int i = SIZE - 2; i >= 0; i--)
    {
        reverse_array[j] = string_array[i];
        j++;
    }
    printf("String: %s\n", string_array);
    printf("Reversed String: %s\n", reverse_array);
}