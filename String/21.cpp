#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "The quick brown fox jumps over the lazy dog", temp = "", result = "";
    int n = str.length();

    for(int i = 0; i < n; i++) {
        if(str[i] != ' ') {
            temp += str[i];
        } else {
            if(temp.length() > result.length()) {
                result = temp;
            }
            temp.clear();
        }
    }
    // checking for the last word
    if(temp.length() > result.length()) {
        result = temp;
    }
    cout << result;

    return 0;
}