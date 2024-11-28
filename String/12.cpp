#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
    string str = "google GOOGLE";
    int n = str.length();
    vector<char> ans;
    vector<char> charHash(52, 0);

    for(int i = 0; i < n; i++) {
        if(str[i] != ' ') {
            if(islower(str[i])) {
                charHash[str[i] - 'a']++;
            } else if(isupper(str[i])) {
                charHash[(str[i] - 'A') + 26]++;
            }
        }
    }

    for(int i = 0; i < charHash.size(); i++) {
        if(charHash[i] == 1) {
            if(i <= 25) {
                cout << char(i + 'a') << " ";
            }
            else if(i > 25) {
                cout << char(i - 26 + 'A') << " ";
            }
        }
        
    }

    return 0;
}