#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //Assuming that user will submit 'c' as hypotenuse.
    int a, b, c;
    cin >> c >> b >> a;
    if((c*c) == ((a*a) + (b*b)))
    {
        cout << "Triangle is valid.\n";
    }
    else
    {
        cout << "Triangle is invalid.\n";
    }
    return 0;
}