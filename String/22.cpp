#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

/*
we can either use manual sorting algorithm like bubble, selection, merge maybe
or built in sort function.
*/

int main() {
    string str = "zxcbg"; // bcgxz
    sort(str.begin(), str.end());
    cout << str;

    return 0;
}