#include <iostream>
using namespace std;

int main() {
    int num = 121;
    int temp = num, rev = 0;

    while(temp > 0) {
        int remainder = temp % 10;
        rev = rev * 10 + remainder;
        temp /= 10;
    }
    if(rev == num) cout << "Palindrome";
    else cout << "NOT Palindrome";

    return 0;
}