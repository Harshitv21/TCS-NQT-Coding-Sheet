#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 102003;
    int ans = 0, temp = 0;

    while(n > 0) {
        int rem = n % 10;
        if(rem == 0) rem = 1;

        ans += pow(10, temp) * rem;

        temp++;
        n /= 10;
    }
    cout << ans;

    return 0;
}