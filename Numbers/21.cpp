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
    // better approach
    int n = 60;

    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            if(checkPrime(i)) {
                cout << i << " ";
            }
            // same type of shit as previous question
            if(n / i != i) {
                if(checkPrime(n / i)) {
                    cout << n / i << " ";
                }
            }
        }
    }

    // optimal approach
    /*
    similar to the classic approach we learn in school, keep dividing n by i until no longer divisible then 
    check for the next num like, 2 then 3 ... etc
    */
    cout << "\n";
    for(int i = 2; i <= n; i++) {
        if(n % i == 0) cout << i << " ";
        while(n % i == 0) {
            n /= i;
        }
    }

    return 0;
}