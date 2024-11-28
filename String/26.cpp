#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "World";

    /*
    - using '+'
    - strcat(), works on character arrays 
    - append(), str1.append(str2)
    */

    string res = str1 + str2;
    cout << res;

    return 0;
}