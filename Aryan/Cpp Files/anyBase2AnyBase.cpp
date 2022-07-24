/***
 * Program to convert a given number to srcBase to destBase.
***/

#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

// forward declarations

int checkVal(char);
char returnChar(int);
int toDeci(string , int);
string fromDeci(int , int);
void anyBase2AnyBase(string , int , int);

// Driver function.

int main() {

    // Given input
    string num = "1982AF";
    int srcBase = 16, destBase = 10;
    
    // function call.
    anyBase2AnyBase(num, srcBase, destBase);

    return 0;
}

// to check whether the digit belongs 
// to the base or not.

int checkVal(char c) {
    if(c >= '0' && c <= '9') 
        return (int)c - '0';
    else 
        return (int)c - 'A' + 10;  // for [A B C D E F]
}

// fucntion to convert a given number "num" of any base "srcBase"
// to decimal.

int toDeci(string str, int srcBase) {

    int len = str.size();
    int res = 0, power = 0;

    for(int i = len-1; i >= 0; --i) {

        // to check whether the given number is valid or not.
        if(checkVal(str[i]) >= srcBase) {
            cout << "Error: Invalid Number !" << endl;
            return -1;
        }
        else {
            // update res
            res += checkVal(str[i]) * pow(srcBase, power);

            // update power
            ++power;
        }
    }

    return res;
}

// function to return equivalent character of a given value
// [10-A | 11-B | 12-C | 13-D | 14-E | 15-F]

char returnChar(int x) {
    if(x >= 0 && x <= 9) 
        return (char)(x + '0');
    else 
        return (char)(x - 10 + 'A'); 
}

// function to convert a given decimal number to the destBase.

string fromDeci(int num, int destBase) {

    // store the result.
    string res =  "";

    while(num > 0) {

        // update res
        res += returnChar(num % destBase);

        // update num
        num /= destBase;
    }

    // reverse the result
    reverse(res.begin(), res.end());

    return res;

}

// function to convert a given number "s" of any given base "srcBase"
// to destination base "destBase".

void anyBase2AnyBase(string s, int srcBase, int destBase) {

    // convert the number from "srcBase" to decimal.
    int num = toDeci(s, srcBase);

    // convert the number from decimal to "destBase".
    string ans = fromDeci(num, destBase);

    // print the answer.
    cout << "==> " << ans << endl;
}
