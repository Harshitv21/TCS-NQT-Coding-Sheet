#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string str1 = "RULES";
    string str2 = "LESRT";
    int n1 = str1.length();
    int n2 = str2.length();

    vector<char> charHash(52, 0);

    if(n1 != n2) {
        cout << "No";
    } else {
        for(int i = 0; i < n1; i++) {
            if(islower(str1[i])) charHash[str1[i] - 'a']++;
            else if(isupper(str1[i])) charHash[(str1[i] - 'A') + 26]++;
        }

        for(int i = 0; i < n2; i++) {
            if(islower(str2[i])) charHash[str2[i] - 'a']--;
            else if(isupper(str2[i])) charHash[(str2[i] - 'A') + 26]--;
        }

        bool isAnagram = true;
        for(auto it : charHash) {
            if(it != 0) isAnagram = false;
        }

        if(isAnagram) cout << "Yes";
        else cout << "No";
    }

    return 0;
}