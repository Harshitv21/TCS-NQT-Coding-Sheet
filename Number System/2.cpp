#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string str = "1010101";
    int pos = str.length() - 1, decNum = 0;

    for(auto ch : str) {
        decNum += pow(2, pos) * (int(ch) - 48);
        pos--;
    }
    // cout << decNum << "\n";
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