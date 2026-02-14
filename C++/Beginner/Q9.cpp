#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int num;
    cin >> num;
    if (num == 2 || num == 3
    || num == 5 || num  == 11
    || num  == 13 || num  == 17
    || num  == 19 || num == 23
    || num  == 29 || num  == 31)
    {        
        cout << setw(3) << num << " is a prime number.\n";
    }
    else if(num % 2 == 0 || num % 3 == 0
    || num % 5 == 0 || num % 11 == 0
    || num % 13 == 0 || num % 17 == 0
    || num % 19 == 0 || num % 23 == 0
    || num % 29 == 0 || num % 31 == 0)
    {
        cout << setw(3) << num << " is a composite number.\n";
    }
    
    return 0;
}