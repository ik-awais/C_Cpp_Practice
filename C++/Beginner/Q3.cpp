#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int num1, num2, num3, max = 0;
    cin >> num1 >> num2 >> num3;
    if(num1 > num2)
    {
        max = num1;
    }
    else
    {
        max = num2;       
    }
    if(max > num3)
    {
        cout << setw(3) << max << " is largest.\n"; 
        return 0;
    }
    else
    {
        max = num3;
    }
    cout << setw(3) << max << " is largest.\n"; 
    return 0;
}