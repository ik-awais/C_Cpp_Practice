#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int year;
    cin >> year;
    if ((year % 4) == 0)
    {
        cout << setw(5) << year << " is a leap year.\n";
    }
    else
    {
        cout << setw(5) << year << " is not a leap year.\n";
    }
    return 0;
}