// Sum of an Array
#include <stdio.h>
#define SIZE 5
int sum_array(int size);
int main(){
    printf("Sum: %d\n", sum_array(SIZE));
    return 0;
}
int sum_array(int size){
    int array[] = {1,2,3,4,5};
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}
