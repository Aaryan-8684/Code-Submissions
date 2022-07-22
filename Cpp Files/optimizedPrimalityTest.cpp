/***
 * Program to check whether a number is prime or not.
 * Approach - optimized Method.
 * Time Complexity - O(√n)
 * Space Complexity - O(1)
***/

#include <iostream>
using namespace std;

bool isPrime(int num) {
    if(num <= 1)
        return false;

    // for i=2 to i<sqrt(n)
    for(int i=2; i*i<num; ++i) { 
        if(num % i == 0) return false;
    }

    return true;
}
 
int main() {
    int i=5;
    do {
        cout << "Enter a number : ";
        int num; cin >> num;

        (isPrime(num) == true) ? cout << "It is": cout << "It is not"; cout << " a prime number!" << endl; 
        // cout << i << endl;

    }while(--i);

    return 0;
}
