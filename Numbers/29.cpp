#include <iostream>
using namespace std;

int main() {
    int l = 5, r = 9;

    // n * (n + 1) / 2
    int sum_l = (l - 1) * ((l - 1) + 1) / 2;
    int sum_r = r * (r + 1) / 2;

    cout << sum_r - sum_l;

    return 0;
}