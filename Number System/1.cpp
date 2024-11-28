#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string str = "1001";
    int pos = str.length() - 1, num = 0;

    for(auto ch : str) {
        num += pow(2, pos) * (int(ch) - 48);
        pos--;
    }
    cout << num;

    return 0;
}