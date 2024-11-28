#include <iostream>
#include <string>
using namespace std;

int naive(string s1, string s2) {
    int n = s1.length();
    int m = s2.length();

    for(int i = 0; i < n; i++) {
        int temp = i;
        int j = 0;
        for(j = 0; j < m; j++) {
            if(s1[temp] != s2[j]) break;
            temp++;
        }
        if(j == m) return i;
    }

    return -1;
}

int libFunction(string s1, string s2) {
    return s1.find(s2);
}

int main() {
    string s1 = "neongenesisevangalion";
    string s2 = "genesis";

    cout << "Naive: " << naive(s1, s2) << "\n";
    cout << "Library function: " << libFunction(s1, s2);

    return 0;
}