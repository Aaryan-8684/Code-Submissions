/***
 * Program to print all non-empty subarrays of a given array.
 * formula : n(n+1) / 2 (n - size of array)
***/

#include <iostream>
#include <cstdlib>
using namespace std;

void genSubArrays(int arr[], int len) {
    for(int i = 0; i < len; i++) {
        for(int j = i; j < len; j++) {
            for(int k = i; k <= j; k++) 
                cout << arr[k] << " ";
            cout << endl;
        }
    }
}

int main() {
    int arr[] = {4, 2, -5, 3, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << "Possible non-empty subarrays are : " << endl;
    genSubArrays(arr, len);
}