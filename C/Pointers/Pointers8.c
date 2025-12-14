// Reverse a string via pointers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string[] = "Muhammad Awais";
    int str_len = strlen(string);
    // Reserving required memory in heap
    char *pointer = malloc(str_len + 1);
    // Stored string address in source
    char *source = string; 
    char *copy = pointer; 
    source += str_len - 1;
    // Iykyk :)
    // As a beginner, took me 2 hours
    while(string <= source)
    {
        *copy = *source;
        copy++;
        source--;
    }
    *copy = '\0';
    printf("%s\n", source + 1);
    printf("%s\n", pointer);

    free(pointer);

    return 0;
}
