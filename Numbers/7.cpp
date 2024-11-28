#include <iostream>
using namespace std;

int main() {
    int num = 6;

    // % operator
    if(num % 2 == 0) cout << "Even\n";
    else cout << "Odd\n";

    // bitwise operator
    if((num & 1) == 0) cout << "Even\n";
    else cout << "Odd\n";

    return 0;
}