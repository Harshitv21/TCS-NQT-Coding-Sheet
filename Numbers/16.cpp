#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int n = 23004;
    vector<int> digits;

    while(n > 0) {
        int temp = n % 10;
        digits.push_back(temp);
        n /= 10;
    }
    int maxi = INT_MIN, mini = INT_MAX;

    for(auto it : digits) {
        if(it > maxi) {
            maxi = it;
        }
        if(it < mini) {
            mini = it;
        }
    }
    cout << maxi << " " << mini;

    return 0;
}