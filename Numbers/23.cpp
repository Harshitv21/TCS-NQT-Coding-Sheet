#include <iostream>
#include <cmath>
using namespace std;

bool checkAutomorphic(int n) {
    int sqaure = n * n;

    while(n > 0) {
        int lastDig_n = n % 10;
        int lastDig_sqr = sqaure % 10;

        if(lastDig_n != lastDig_sqr) return false;

        n /= 10;
        sqaure /= 10;
    }

    return true;
}

int main() {
    int n = 25;

    if(checkAutomorphic(n)) cout << "Automorphic number";
    else cout << "NOT Automorphic number";

    return 0;
}