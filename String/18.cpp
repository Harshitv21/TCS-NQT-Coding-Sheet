#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string str = "sosinisterstringo";
    vector<int> charHash(52, 0); /* 26 lowercase, 26 uppercase */

    /* not hashing for uppercase characters but you can look at some of the previous codes to see how it's done */
    for(auto ch : str) {
        charHash[ch - 'a']++;
    }

    for(int i = 0; i < charHash.size(); i++) {
        if(charHash[i] > 1) cout << char(i + 'a') << " ";
    }

    return 0;
}