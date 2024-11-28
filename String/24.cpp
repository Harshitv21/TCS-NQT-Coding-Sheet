#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    string s = "nvidia google microsoft", ans = "", temp = "";
    int maxi = -1;

    vector<string> words;
    for(char ch : s) {
        if (ch != ' ') temp += ch;
        else {
            if(!temp.empty()) words.push_back(temp);
            temp.clear();
        }
    }
    if(!temp.empty()) words.push_back(temp);

    for(auto word : words) {
        unordered_map<char, int> mpp;
        int repeats = 0;

        for(auto ch : word) {
            mpp[ch]++;
            if(mpp[ch] > 1) repeats++;
        }

        if(repeats > maxi) {
            maxi = repeats;
            ans = word;
        }
    }

    if(maxi == -1) cout << -1;
    else cout << ans;

    return 0;
}