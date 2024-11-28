#include <iostream>
using namespace std;

string isNum(int n) {
    int sumDigits = 0;
    int num = n;

    while(n > 0) {
        int temp = n % 10;
        sumDigits += temp;
        n /= 10;
    }

    if(num % sumDigits == 0) return "Yes";
    return "No";
}

int main() {
    int n = 378;
    cout << isNum(n);

    return 0;
}