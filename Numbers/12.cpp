#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a = 2, b = 1;

    // comparision
    if(a > b) cout << a << "\n";
    else cout << b << "\n";
    
    // library function
    cout << max(a, b) << "\n";

    return 0;
}