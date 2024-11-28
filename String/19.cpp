#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string str1 = "abcdef";
    string str2 = "cefz";

    unordered_map<char, int> mpp;
    string res = "";

    for(int i = 0; i < str2.length(); i++) mpp[str2[i]]++;

    for(int i = 0; i < str1.length(); i++) {
        if(!mpp[str1[i]]) {
            res += str1[i];
        }  
    }
    
    cout << res;

    return 0;
}