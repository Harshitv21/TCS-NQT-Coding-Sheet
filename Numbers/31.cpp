#include <iostream>
using namespace std;

int _gcd(int a, int b) {
    int x = a, y = b, gcd;

    while(x > 0 && y > 0) {
        if(x >= y) x %= y;
        else y %= x; 
    }

    if(x == 0) gcd = y;
    else gcd = x;

    return gcd;
}

void simplify(int &num_res, int &den_res) {
    int gcd = _gcd(num_res, den_res);

    num_res /= gcd;
    den_res /= gcd;
}

int main() {
    int num_1 = 5, den_1 = 2, num_2 = 1, den_2 = 2, num_res, den_res;

    int lcm = (num_1 * num_2) / _gcd(den_1, den_2);
    den_res = lcm;

    num_res = num_1 * (den_res / den_1) + num_2 * (den_res / den_2);
    simplify(num_res, den_res);

    if(den_res == 1) cout << num_res;
    else cout << num_res << "/" << den_res;

    return 0;
}