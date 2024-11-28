#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int brute(int a, int b) {
    // find gcd
    int gcd = 1;
    for(int i = min(a, b); i >= 1; i--) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;
            break;
        }
    }

    int lcm = (a * b) / gcd;
    return lcm;
}

int better(int a, int b) {
    /* 
    only thing changed from better to better is the method of finding gcd! 
    use better approach for that rest is same :)
    */

    int x = a, y = b, gcd;
    while(x > 0 && y > 0) {
        if(x >= y) x %= y;
        else y %= x; 
    }

    if(x == 0) gcd = y;
    else gcd = x;

    int lcm = (a * b) / gcd;
    return lcm; 
}

// only works with c++ 17 and above
// int optimal(int a, int b) {
//     if(a == 0 || b == 0) return 0;
//     int gcd = std::gcd(a, b); 
//     return (a / gcd) * b;
// }

int main() {
    int a = 4, b = 8;

    cout << "LCM,\n";
    cout << "brute: " << brute(a, b) << "\n";
    cout << "better: " << better(a, b);
    // cout << "optimal: " << optimal(a, b);

    return 0;
}