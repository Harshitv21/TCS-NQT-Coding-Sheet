#include <iostream>
#include <string>
using namespace std;

/* same technique as '4.cpp' */

int main() {
    string str = "I am very happy today", ans = "";
    int n = str.length();

    for(int i = 0; i < n; i++) {
        // if(str[i] != ' ') {
        //     ans += str[i];
        // }
        if(str[i] == ' ') {
            str = str.substr(0, i) + str.substr(i + 1);
            i--;
        }
    }
    /*
    ans += '\0';
    std::cout << ans << "\n";
    */
    std::cout << str;

    return 0;
}