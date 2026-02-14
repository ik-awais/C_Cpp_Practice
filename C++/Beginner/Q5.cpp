#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int num;
    cin >> num;
    if((num % 2) == 0)
    {
        cout << setw(3) << num << " is an even number.\n";
    }
    else
    {
        cout << setw(3) << num << " is an odd number.\n";
    }
    return 0;
}