#include <iostream>
#include <iomanip>
using namespace std;

/*
{1,2,3,4,5};
{1,2,1,1,5,1};
*/

int main() {
    int arr[] = {1, 2, 1, 1, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    double average = 0.0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    average = sum / (double)n;
    cout << setprecision(2) << average;

    return 0;
}