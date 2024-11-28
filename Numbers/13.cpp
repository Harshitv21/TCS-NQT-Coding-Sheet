#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a = 1, b = 3, c = 5;

    // comparision
    if(a > b && a > c) cout << a << "\n";
    else if(b > a && b > c) cout << b << "\n";
    else cout << c << "\n";
    
    // library function
    cout << max(a, (b, c)) << "\n";

    return 0;
}