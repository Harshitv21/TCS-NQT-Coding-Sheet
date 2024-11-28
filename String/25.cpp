#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "javA iS Not AS goOD As CpP";
    int n = str.length();

    for(int i = 0; i < n; i++) {
        if(str[i] != ' ') {            
            if(islower(str[i])) {
                str[i] -= 32;
            } else {
                str[i] += 32;
            }
        }
    }
    cout << str;

    return 0;
}