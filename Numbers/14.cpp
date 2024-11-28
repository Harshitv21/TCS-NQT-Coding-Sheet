#include <iostream>
#include <cmath>
using namespace std;

bool isLeapYear(int year) {
    // if divisible by 400 then true
    if(year % 400 == 0) return true;
    // if divisible by 4 then true
    if(year % 4 == 0) return true;
    // if divisible by 100 then false
    if(year % 100 == 0) return false;

    return false;
}

int main() {
    int year = 2004;    

    if(isLeapYear(year)) cout << "Leap Year";
    else cout << "NOT Leap Year";

    return 0;
}