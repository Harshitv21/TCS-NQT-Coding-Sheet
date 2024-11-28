#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 229;
    vector<int> arr;

    while(n > 0) {
        if(n % 2 == 0) arr.push_back(0);
        else arr.push_back(1);
        n /= 2;
    }
    reverse(arr.begin(), arr.end());

    for(auto it : arr) cout << it;

    return 0;
}