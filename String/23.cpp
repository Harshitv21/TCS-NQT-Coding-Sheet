#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "The quick brown fox jumps over the lazy dog";
    int words = 0;

    for(auto ch : str) {
        if(ch == ' ') words++;
    }
    words += 1;
    cout << words;

    return 0;
}