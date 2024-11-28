#include <iostream>
using namespace std;

int fac(int num) {
    int ans = 1;

    for(int i = 1; i <= num; i++) {
        ans *= i;
    }

    return ans;
}

int main() {
    // N! / (N - R)!
    int n = 5, r = 3;

    int num = fac(n);
    int den = fac(n - r);

    cout << num / den;

    return 0;
}