#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int num = 345;
    vector<int> digits;

    while(num > 0) {
        int temp = num % 10;
        digits.push_back(temp);
        num /= 10;
    }
    int decNum = 0, n = digits.size();

    for(int i = 0; i < n; i++) {
        decNum += digits[i] * pow(8, i);
    }
    digits.clear();

    while(decNum > 0) {
        if(decNum % 2 == 0) digits.push_back(0);
        else digits.push_back(1);
        decNum /= 2;
    }
    reverse(digits.begin(), digits.end());

    for(auto it : digits) cout << it;

    return 0;
}