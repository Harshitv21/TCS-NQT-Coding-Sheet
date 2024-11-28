#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string str = "cs2 is awesome";
    int n = str.length();
    
    for(int i = 0; i < n; i++) {
        if(i == 0 || i == n - 1) {
            if(islower(str[i])) str[i] = toupper(str[i]);
        } else if(i < n - 1 && str[i + 1] == ' ' && islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if(i > 0 && str[i - 1] == ' ' && islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
    cout << str;

    return 0;
}