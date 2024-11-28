#include <iostream>
using namespace std;

int sum(int n) {
    int sumOfDigits = 0;

    while(n > 0) {
        int temp = n % 10;
        sumOfDigits += temp;
        n /= 10;
    }

    return sumOfDigits;
}

int main() {
    int n = 18;
    cout << sum(n);

    return 0;
}