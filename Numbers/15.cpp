#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 470;
    int rev = 0;

    while(n > 0) {
        int temp = n % 10;
        rev = rev * 10 + temp;
        n /= 10; 
    }
    cout << rev;

    return 0;
}