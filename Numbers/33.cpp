#include <iostream>
#include <cmath>
using namespace std;

bool checkPrime(int n) {
    if(n == 1) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;

    int sqrtNum = sqrt(n);

    // skipped 1, 2, 3, 4 start from 5
    for(int i = 5; i <= sqrtNum; i += 6) {
        // check for every other odd number
        if((n % i == 0) || (n % (i + 2)) == 0) return false; 
    }
    return true;
}

int main() {
    int n = 74, f = -1, s = -1;
    bool found = false;

    for(int i = 1; i <= sqrt(n); i++) {
        if(checkPrime(i) && checkPrime(n - i)) {
            f = i;
            s = n - i;
            found = true;
            break;
        }
    }

    if(!found) cout << "CAN'T be expressed as sum of 2 prime numbers";
    else cout << "Can be expressed as sum of, " << f << " and " << s;

    return 0;
}