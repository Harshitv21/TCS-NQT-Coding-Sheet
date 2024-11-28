#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

/*
{2,4,1,3,5};
{2,5,1,7};
*/

int main() {
    int arr[] = {2, 5, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    if(n % 2 != 0) cout << arr[n / 2];
    else cout << setprecision(2) << (arr[n / 2] + arr[(n / 2) - 1]) / (double)2;

    return 0;
}