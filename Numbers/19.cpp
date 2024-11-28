#include <iostream>
#include <math.h>
using namespace std;

// https://leetcode.com/problems/powx-n/

int main() {
    // library function
    int x = 2, n = 21;
    cout << "Library function: " << pow(x, n) << "\n";

    // naive solution
    long long int ans_naive = 1;
    for(int i = 1; i <= n; i++) ans_naive = ans_naive * x;
    cout << "Naive solution: " << ans_naive << "\n";

    long long int opt = 1;

    while(n > 0) {
        if(n % 2 == 1) {
            opt *= x;
            n -= 1;
        } else {
            n /= 2;
            x *= x;
        }
    }
    // power is -ve which is, 5^(-2) -> 1 / 5^(2) 
    if(n < 0) {
        cout << "Optimal solution: " << 1 / opt << "\n";
    }
    else cout << "Optimal solution: " << opt << "\n";
    // T.C of optimal -> O(log n)

    /*
    if double, float divide by 2.0 and declare ans as double
    */

    return 0;
}