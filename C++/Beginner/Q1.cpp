#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int num;
    cin >> num;
    if (num > 0)
    {
        cout << setw(3) << num << " is positive" << endl; 
    }
    else if (num < 0)
    {
        cout << setw(3) << num << " is negative" << endl; 
    }
    else
        {
            cout << setw(3) << num << " is zero" << endl;
        }
    return 0;
}