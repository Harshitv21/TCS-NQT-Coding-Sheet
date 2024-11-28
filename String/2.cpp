#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str = "Take u forward is Awesome";
    int v = 0, c = 0, ws = 0, n = str.length();

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for(int i = 0; i < n; i++) {
        if(str[i] == ' ') ws++;
        else if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') v++;
        else c++;
    }
    cout << "Vowels: " << v << "\n";
    cout << "Consonants: " << c << "\n";
    cout << "White spaces: " << ws << "\n";

    return 0;
}