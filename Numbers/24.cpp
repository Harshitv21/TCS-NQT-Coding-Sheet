#include <iostream>
#include <cmath>
using namespace std;

int brute(int a, int b) {
    int gcd = 1;

    for(int i = 1; i <= min(a, b); i++) {
        if(a % i == 0 && b % i == 0) gcd = i;
    }

    return gcd;
}

int better(int a, int b) {
    int gcd = 1;

    for(int i = min(a, b); i >= 1; i--) {
        if(a % i == 0 && b % i == 0) return i;        
    }

    return gcd;

}

int optimal(int a, int b) {
    while(a > 0 && b > 0) {
        if(a >= b) a -= b;
        else b -= a; 
    }

    if(a == 0) return b;
    return a; 
}

int optimal_2(int a, int b) {
    while(a > 0 && b > 0) {
        if(a >= b) a %= b;
        else b %= a; 
    }

    if(a == 0) return b;
    return a; 
}

int main() {
    int a = 20, b = 15;

    cout << "GCD,\n";
    cout << "brute: " << brute(a, b) << "\n";
    cout << "better: " << better(a, b) << "\n";
    cout << "optimal: " << optimal(a, b) << "\n";
    cout << "optimal (again): " << optimal_2(a, b);

    return 0;
}