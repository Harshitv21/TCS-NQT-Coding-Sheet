#include <iostream>
#include <algorithm>
using namespace std;

/*
{8, 7, 1, 6, 5, 9};
{4, 2, 8, 6, 15, 5, 9, 20};
*/

int main() {
    int arr[] = {8, 7, 1, 6, 5, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);
    if(n % 2 != 0) sort(arr + 1 + (n / 2), arr + n, std::greater<int>());
    else sort(arr + (n / 2), arr + n, std::greater<int>());

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}