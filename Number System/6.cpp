#include <iostream>
#include <vector>
#include <cmath>
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
    cout << decNum;

    return 0;
}