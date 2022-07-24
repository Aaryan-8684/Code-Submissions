/*** 
 * Program to do addition of two numbers of any given base.
***/

#include <iostream>
#include <cmath>
using namespace std;

void anyBaseAddition(int base, int n1, int n2) {
    int d1, d2, c = 0, rv = 0, i = 0;
    
    while(n1 > 0 || n2 > 0 || c> 0) {
        d1 = n1 % 10;
        d2 = n2 % 10;

        n1 /= 10;
        n2 /= 10;

        int d = d1 + d2;

        if(d >= base) {
            c = d / base;
            d = d % base;
            rv += d * pow(10, i);
            ++i;
        }
        else {
            rv += d * pow(10, i);
            ++i;
        }
    }
    cout << rv << endl;
}

int main() {
    cout << "[base, num1, num2] ==> ";
    int base, num1, num2; cin >> base >> num1 >> num2;
    cout << "[" << num1 << " + " << num2 << "] ==> ";

    anyBaseAddition(base, num1, num2);

    return 0;
}