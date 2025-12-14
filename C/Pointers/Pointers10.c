// Find Factorial of a number via pointers
#include <stdio.h>
int main(){
    int num = 5, temp = num, factorial = 1, *p = &num;
    //The precedence of * is less than decrement operator. 
    for(;*p > 0; (*p)--)  
    {
        factorial *= *p;
    }
    num = temp;
    printf("%d %d\n", *p, factorial);
    return 0;
}