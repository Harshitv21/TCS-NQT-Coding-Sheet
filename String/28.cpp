#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "Harshit Verma", ans = "", temp = ""; // Verma Harshit
    int n = s.length();

    for(int i = 0; i < n; i++) {
        if(s[i] != ' ') temp += s[i];
        else {
            if(!ans.empty()) ans = temp + " " + ans;
            else ans = temp;
            temp.clear();
        }
    }
    if(!temp.empty()) ans = temp + " " + ans;
    else ans = temp;

    cout << ans;

    /*
    Another approach is to extract words in a vector<string> and then print string in reverse order
    */

    return 0;
}