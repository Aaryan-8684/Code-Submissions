/***
 * Program to covert a decimal number to any base.
***/
#include <iostream>
#include <cmath>
using namespace std;

void decimal2AnyBase(int, int);

int main() {
    cout << "[Decimal, Base] : ";
    int decimal, base; cin >> decimal >> base;
    cout << "[" << decimal << "," << base << "] ==> ";
    decimal2AnyBase(decimal, base);

    return 0;
}

void decimal2AnyBase(int x, int base) {
    int rem, sum = 0, i = 0;

    while(x > 0) {
        rem = x % base;
        sum += rem * pow(10, i);
        x = x / base;
        ++i;
    }    

    cout << sum;

}