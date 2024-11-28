#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num = 28, sum = 0;

    for(int i = 1; i < num; i++) {
        if(num % i == 0) sum += i;
    }
    if(sum == num) cout << "Perfect Number";
    else cout << "NOT Perfect Number"; 

    return 0;
}