#include <iostream>
using namespace std;

int main() {
    int num = -6;

    // ez solutions
    if(num > 0) cout << "Positive\n";
    else cout << "Negative\n";

    /* 
    bitwise operator 
    right shift by 31, if num is positive 0 will fill trailing positions else 1 will.
    */ 
    if(num >> 31 == 0) cout << "Positive\n";
    else cout << "Negative\n";

    return 0;
}