#include <iostream>
#include <cmath>
using namespace std;

void anyBaseSubstraction(int, int, int);

int main() {
    cout << "[Base, Number1, Number2] ==> ";
    int base, num1, num2; cin >> base >> num1 >> num2;

    cout << "[ Subtraction, " << num1 << ", " << num2 << "] ==> ";

    anyBaseSubstraction(base, num1, num2); 

    return 0;
}

void anyBaseSubstraction(int base, int num1, int num2) {
    int d1, d2, rv = 0, i=0;
    bool flag = false;

    while(num1 > 0 || num2 > 0) {
        d1 = num1 % 10; d2 = num2 % 10;
        num1 /= 10; num2 /= 10;

        if(d1 <= d2) {
            if(flag == true) --d1;
            d1 += base;
            rv += (d1 - d2) * pow(10,i);
            ++i, flag = true;
        }
        else {
            if(flag == true) --d1;
            rv += (d1 - d2) * pow(10,i);
            ++i, flag = false;
        }

    }

    cout << rv << endl;
   
}