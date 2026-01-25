#include <iostream>
#include <iomanip>
using namespace std;

void findFactors(int num);
int findGCD(int num, int num2);

int main(){
    int num = 5, num2 = 20;
    string lcm = "LCM is:";
    findFactors(num);
    findFactors(num2);
    cout << setw(9) << lcm;
    cout << setw(4) << num*num2/findGCD(num, num2) << endl;
    return 0;
}
void findFactors(int num){
    //Finding factors of num
    for(int i = 2; i <= num; i++)
    {
        if(num % i == 0)
        {
            cout << setw(3) << i;
        }
    }
    cout << "\n";
}
int findGCD(int num, int num2){
    //Finding GCD
    int gcd = 0;
    for(int i = 2; i < num || i < num2; i++)
    {
        if(num % i == 0 && num2 % i == 0)
        {
            if(gcd < i)
            {
                gcd = i;
            }
        }
    }
    return gcd;
}