#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 12;

    for(int i = 1; i <= sqrt(n); i++) {
        if(n % i == 0) {
            // to avoid duplicates print only one
            if(n / i == i) cout << " " << i;
            else cout << " " << i << " " << n / i;  
        }
    }

    return 0;
}