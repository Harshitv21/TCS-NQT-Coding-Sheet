#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "TAKE U FORWARD";
    int l = 0, r = str.length() - 1;

    bool isPalindrome = true;
    while(l < r) {
        if(str[l] != str[r]) {
            isPalindrome = false;
        }
        l++;
        r--;
    }
    if(isPalindrome) cout << "Palindrome";
    else cout << "Not Palindrome";

    return 0;
}