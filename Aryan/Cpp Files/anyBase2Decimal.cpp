/***
 * Program to convert a number of any given base to Decimal number.
***/

#include <iostream>
#include <cmath>
using namespace std;

void anyBase2Decimal(int num, int srcBase) {
    int rem, sum = 0, i = 0;
    while(num > 0) {
        rem = num % 10;
        num /= 10;
        sum += rem * pow(srcBase, i);
        ++i;
    }

    cout << sum;

}

int main() {
    cout << "[Number , srcBase] ==> ";
    int num, srcBase; cin >> num >> srcBase;
    cout << "[" << num << ", Decimal] ==> ";
    anyBase2Decimal(num, srcBase);

    return 0;
}