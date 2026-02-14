#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    char grade;
    cin >> grade;
    switch (grade)
    {
    case 'A':
        cout << "You got " << setw(2) << grade << "grade\n";
        break;
    case 'B':
        cout << "You got " << setw(2) << grade << "grade\n";
        break;
    case 'C':
        cout << "You got " << setw(2) << grade << "grade\n";
        break;
    case 'D':
        cout << "You got " << setw(2) << grade << "grade\n";
        break;
    default:
        cout << "Enter a valid grade in Capital letter\n";
        break;
    }
    return 0;
}