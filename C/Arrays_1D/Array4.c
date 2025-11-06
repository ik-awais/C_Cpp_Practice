//Practice problems from Starting out with C++ by Tony Gaddis
#include <stdio.h>
#define CONST 20

int main() {

    int names[CONST];
    int sum;

    for (int i = 0; i < CONST; i++) {
        printf("Enter num %d: ", i + 1);
        scanf("%d", &names[i]);
        sum += names[i];
    }    
    printf("\n");
    for (int i = 0; i < CONST; i++) {
        printf("%d ", names[i]);
    }

    printf("Sum: %d\n", sum);

    return 0;
}