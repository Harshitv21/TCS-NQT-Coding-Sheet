#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int decNum = 17;
    vector<int> octNum;

    while(decNum > 0) {
        int temp = decNum % 8;
        octNum.push_back(temp);
        decNum /= 8;
    }
    reverse(octNum.begin(), octNum.end());
    for(auto it : octNum) cout << it;

    return 0;
}