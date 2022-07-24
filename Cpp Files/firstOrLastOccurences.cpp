#include <iostream>
using namespace std;

void firstOrLastOccurences(int arr[], int len, int key) {
    int startIndex = 0, endIndex = 0;
    bool idx = false;

    for(int i = 0; i < len; i++) {
        if(arr[i] < key) {
            idx = true;
            continue;
        }
        else if (arr[i] == key) {
            if(idx == true) startIndex = i;
            if(i == len - 1) endIndex = i;
            idx = false;
        }
        else {
            endIndex = i - 1;
            break;
        }
    }

    cout << "startIndex: " << startIndex << " endIndex: " << endIndex << endl;
}

int main() {

    int arr[] = {2, 5, 5, 5, 6, 6, 8, 9, 9, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    int key = 9;

    firstOrLastOccurences(arr, len, key);

    return 0;
}