#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "abcdxyz"; // bcdeyza
    int n = str.length();

    for(int i = 0; i < n; i++) {
        if(str[i] == 'Z') str[i] = 'A';
        else if(str[i] == 'z') str[i] = 'a';
        else str[i] += 1;
    }
    cout << str;

    return 0;
}