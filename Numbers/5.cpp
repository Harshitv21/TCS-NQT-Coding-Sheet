#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int num = 153;
    int temp = num;
    vector<int> digits;
    
    while(num > 0) {
        int digit = num % 10;
        digits.push_back(digit);
        num /= 10;
    }
    int n = digits.size();
    int result = 0;

    for(auto it : digits) {
        result += pow(it, n);
    }
    if(result == temp) cout << "Armstrong Number";
    else cout << "NOT Armstrong Number";

    return 0;
}