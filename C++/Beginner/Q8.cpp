#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int choice;
    float num;
    cout << "1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n";
    cin >> choice >> num;
    if(choice == 1)
    {
        cout << num << " Celsius to Fahrenheit is" 
        <<  float(((num*9)/5) + 32) << endl; 
    }
    else if(choice == 2)
    {
        cout << num << " Fahrenheit to Celsius is" 
        <<  float(((num - 32)*5)/9) << endl;
    }
    else
    {
        cout << "Enter a valid choice.\n";
    }
    return 0;
}