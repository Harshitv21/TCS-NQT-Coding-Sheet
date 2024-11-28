#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    /*
    method 1: sort & use 2 pointers
    method 2 (this one): keep a frequency array
    method 3: map and compare values of every key?
    */

    string str = "apple";
    int n = str.length(), maxFreq = 0;
    vector<int> freq(128, 0); // 128 ascii characters not taking account for anything else, could be 256

    char res = '\0';
    for(int i = 0; i < n; i++) {
        freq[(int)str[i]]++;
        if(freq[str[i]] > maxFreq) {
            res = str[i];
            maxFreq = freq[str[i]];
        }
    }
    // returns any one of the maximum occuring char
    cout << res;

    return 0;
}