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
    int min = 2, max = 10;

    for(int i = min; i <= max; i++) {
        if(checkPrime(i)) cout << i << " ";
    }

    return 0;
}