#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // GP series
    float a = 3, r = 5;
    int n = 2;

    float sum = (a * (1 - pow(r, n))) / (1 - r);
    cout << sum;

    return 0;
}