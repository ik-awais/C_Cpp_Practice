// Find the minimum in an array
#include <stdio.h>
void minimum_detector();
int main(){
    minimum_detector();
    return 0;
}
void minimum_detector(){
    int array[] = {1, 2, -3, 4, 0};
    int minimum = 100000;
    for(int i = 0; i < sizeof(array)/4; i++)
    {
        if(array[i] < minimum)
        {
            minimum = array[i];
        }
    }
    printf("Minimum: %d\n", minimum);
}
