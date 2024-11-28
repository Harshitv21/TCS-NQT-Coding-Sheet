#include <iostream>
using namespace std;

int main() {
    int n = 5, fac = 1;

    for(int i  = 1; i <= n; i++) fac *= i;
    cout << fac;

    return 0;
}