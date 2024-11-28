#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int temp = num, rev = 0;

    while(temp > 0) {
        int remainder = temp % 10;
        rev = rev * 10 + remainder;
        temp /= 10;
    }
    if(rev == num) return true;
    else return false;
}

int main() {
    int min = 1, max = 100, cnt = 0;

    for(int i = min; i <= max; i++) {
        if(isPalindrome(i)) cnt++;
    }
    cout << cnt;

    return 0;
}