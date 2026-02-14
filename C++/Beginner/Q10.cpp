#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int num;
    cin >> num;
    int first = num/1000;
    int second = (num/100) % 10;
    int third = num/10 % 10;
    int fourth= num % 10;
    if((first == fourth) && (second) == (third))
    {
        cout << setw(4) << num << " is a palindrome.\n";
    }
    else
    {
        cout << setw(4) << num << " is not a palindrome.\n";
    }
    return 0;
}