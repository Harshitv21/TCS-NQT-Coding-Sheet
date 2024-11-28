#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string str = "csgo was awesome";
    int n = str.length();

    map<char, int> mpp;
    for(int i = 0; i < n; i++) {
        if(str[i] != ' ') mpp[str[i]]++;
    }

    for(auto it : mpp) {
        cout << it.first << " " << it.second << "\n";
    }

    return 0;
}