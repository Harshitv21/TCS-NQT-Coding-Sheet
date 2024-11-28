#include <iostream>
using namespace std;

int main() {
    /* n - no of terms in AP, d - common difference, a = first term of AP */
    int n = 8; 
    float a = 2, d = 5;

    // formulae - (n / 2) * (2 * a + (n - 1) * d))
    float sum = (n / 2.0) * ((2.0 * a) + ((n - 1) * d));   
    cout << sum;

    return 0;
}