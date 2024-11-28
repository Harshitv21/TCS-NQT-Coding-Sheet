#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "take12% *&u ^$#forward", ans = "";
    int n = str.length();

    for(int i = 0; i < n; i++) {
        if(((int)str[i] >= 65 && (int)str[i] <= 90) || ((int)str[i] >= 97 && (int)str[i] <= 122) || (int)str[i] == 32) {
            ans += str[i];
        }
    }
    ans += '\0';
    std::cout << ans << "\n";

    return 0;
}