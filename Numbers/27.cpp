#include <iostream>
#include <cmath>
using namespace std;

string check(int n) {
    int sumDivisors = 0;

    for(int i = 1; i < n; i++) {
        if(n % i == 0) sumDivisors += i;
    }

    if(sumDivisors > n) return "Yes";
    return "No";
}

string check_2(int n) {
    int sumDivisors = 0;

    for(int i = 1; i <= sqrt(n); i++) {
        if(n % i == 0) {
            // for perfect squares like 36 / 6 = 6, & i also = 6 therefore add only one time
            if(n / i == i) {
                sumDivisors += i;
            } else {
                sumDivisors += i;
                // for cases like n / 1 = n itself
                if(n / i != n) sumDivisors += n / i;
            }
        }
    }
    // alternatively subtract sumDivisors -= n; if second 'if' condition not present
    
    if(sumDivisors > n) return "Yes";
    return "No";
}

int main() {
    int n = 18;
    cout << check(n) << "\n";
    cout << check_2(n);

    return 0;
}