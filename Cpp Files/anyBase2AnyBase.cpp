/***
 * Program to convert a given number to srcBase to destBase.
***/

#include <iostream>
#include <cmath>
using namespace std;

void anyBase2AnyBase(int num, int srcBase, int destBase) {
    int rem, sum = 0, i = 0;
    while(num > 0) {
        rem = num % destBase;
        num /= destBase;
        sum += rem * pow(srcBase, i);
        ++i;
    }

    cout << sum;

}

int main() {
    cout << "[Number, srcBase, destBase] ==> ";
    int num, srcBase, destBase; cin >> num >> srcBase >> destBase;
    cout << "[" << num << "," << srcBase << "," << destBase << "] ==> ";
    anyBase2AnyBase(num, srcBase, destBase);

    return 0;
}