#include <iostream>
using namespace std;

bool isPerfectSquare(int N) {
    for(int i = 1; i*i <= N; ++i) {
        if( i*i == N ) {
            return true;
        }
        // if( (N % i == 0) && (N / i == i) ) {
        //     return true;
        // }
    }
    return false;

}

int main() {
    cout << "Enter test case : " << endl;
    int tt; cin >> tt; // for mulitple test cases
    while(tt--) {
        cout << "Enter num : " << endl;
        int num; cin >> num; // Given Input
        isPerfectSquare(num) ? cout << "Yes!\n" : cout << "No!" << endl;
    }
}

/***
 * test cases :
 * 5
 * 225
 * 216
 * 256
 * 49
 * 999
***/