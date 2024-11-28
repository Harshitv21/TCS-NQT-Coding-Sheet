#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "a+((b-c)+d)", ans = "";
    int n = str.length();

    for(int i = 0; i < n; i++) {
        if(str[i] != '(' && str[i] != ')') {
            ans += str[i];
        }
    }
    cout << ans;

    return 0;
}