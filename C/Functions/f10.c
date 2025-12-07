// Find vowels in string
#include <stdio.h>
#include <string.h>
void vowel_detector();
int main(){
    vowel_detector();
    return 0;
}
void vowel_detector(){
    char string[] = "Umar";
    char vowel[strlen(string)];
    int j = 0;
    for(int i = 0; i < strlen(string); i++)
    {
        switch (string[i])
        {
        case 'A':
            vowel[j] = string[i];
            j++;
            break;
        case 'E':
            vowel[j] = string[i];
            j++;
            break;
        case 'I':
            vowel[j] = string[i];
            j++;
            break;
        case 'O':
            vowel[j] = string[i];
            j++;
            break;
        case 'U':
            vowel[j] = string[i];
            j++;
            break;
        case 'a':
            vowel[j] = string[i];
            j++;
            break;
        case 'e':
            vowel[j] = string[i];
            j++;
            break;
        case 'i':
            vowel[j] = string[i];
            j++;
            break;
        case 'o':
            vowel[j] = string[i];
            j++;
            break;
        case 'u':
            vowel[j] = string[i];
            j++;
            break;
        }
    }
    vowel[j] = '\0';
    if(j==0 ? printf("No Vowels Detected\n") : printf("Vowels: %s\nTotal Vowels: %d\n", vowel, j));

}
