#include <iostream>
#include <cmath>
using namespace std;

int calculateFac(int num) {
    int fac = 1;
    for(int i = 1; i <= num; i++) fac *= i;

    return fac;
}

int main() {
    int N = 145;
    int res = N;
    int calc = 0;

    while(N > 0) {
        int temp = N % 10;
        calc += calculateFac(temp);
        N /= 10;
    }
    if(calc == res) cout << "YES Strong Number\n";
    else cout << "NO Strong Number\n";

    return 0;
}