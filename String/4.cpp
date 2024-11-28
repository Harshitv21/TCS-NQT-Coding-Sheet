#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "I am very happy today", ans = "";
    int n = str.length();

    for(int i = 0; i < n; i++) {
        // if(!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')) {
            // ans += str[i];
        // }
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            /* 
            str.substr(0, i) gives the substring of the original string from the start up to but not including the i-th character.
            str.substr(i + 1) gives the substring from after the i-th character to the end of the string.
            the result removes the ith character(vowel) and joins the remaining part of string.

            ================
            Suppose str = "hello" and i = 1 (pointing to the vowel e).
            str.substr(0, i) would give "h".
            str.substr(i + 1) would give "llo".
            After concatenation, str becomes "hllo" (the e is removed).

            & lastly reduce string size by 1 
            */
            str = str.substr(0, i) + str.substr(i + 1);
            i--;
        }
    }
    // std::cout << ans << "\n";
    std::cout << str;

    return 0;
}