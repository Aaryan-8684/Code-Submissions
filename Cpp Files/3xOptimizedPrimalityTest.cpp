/***
 * Program to check whether a number is prime or not.
 * Approach - 3X optimized Method.
 * Time Complexity - O(√n)
 * Space Complexity - O(1)
***/
#include <iostream>
using namespace std;

bool isPrime(int num) {
    if(num == 2 || num == 3)
        return true;

    if(num <=1 || num%2 == 0 || num%3 == 0)
        return false;
    
    // To check through all numbers of the form 6k ± 1.
    // this is 3X faster than testing all the numbers upto √n.

    for(int i=5; i*i<=num; i+=6) { 
        if(num%i == 0 || num%(i+2) == 0) return false;
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
