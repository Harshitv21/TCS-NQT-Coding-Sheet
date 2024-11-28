#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string str = "bcabcdb", res = "";
    int n = str.length();
    vector<bool> visited(26, false);

    for(int i = 0; i < n; i++) {
        int pos = (int)str[i] - 'a';
        if(visited[pos] == false) {
            res += str[i];
            visited[pos] = true;
        } 
    }
    cout << res;

    return 0;
}