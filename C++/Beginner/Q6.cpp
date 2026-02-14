#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    char alpha;
    cin >> alpha;
    if(alpha == 'a' || alpha == 'A' || alpha == 'E' || alpha == 'e'
    || alpha == 'I' || alpha == 'i' || alpha == 'O' || alpha == 'o'
    || alpha == 'U' || alpha == 'u')
    {
        cout << alpha << " is a vowel.\n";
    }
    else
    {
        cout << alpha << " is a consonant.\n";
    }
    return 0;
}