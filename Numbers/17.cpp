#include <iostream>
using namespace std;

int main() {
    int n = 10;

    int first = 0, second = 1, curr;
    cout << first << " " << second << " ";
    for(int i = 2; i <= n; i++) {
        curr = first + second;
        first = second;
        second = curr;
        cout << curr << " ";
    }

    return 0;
}