#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string str = "1xyz234";
    int ans = 0;
    int currentNumber = 0;
    int n = str.length();
    int powerOf10 = 0;

    for(int i = 0; i < n; i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            currentNumber = currentNumber * 10 + (str[i] - '0');
        } else {
            ans += currentNumber;
            currentNumber = 0;
        }
    }
    ans += currentNumber;
    cout << ans;

    return 0;
}