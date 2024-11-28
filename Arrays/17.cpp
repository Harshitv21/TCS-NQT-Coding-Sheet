#include <iostream>
using namespace std;

/*
{1,2,3,4,5,0};
{1,2,-3,0,-4,-5};
*/

int main() {
    int arr[] = {1, 2, -3, 0, -4, -5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int prefix = 1, suffix = 1, maxi = INT_MIN;
    
    for(int i = 0; i < n; i++) {
        if(prefix == 0) prefix = 1;
        if(suffix == 0) suffix = 1;
        prefix *= arr[i];
        suffix *= arr[n - i - 1];
        maxi = max(maxi, max(prefix, suffix));
    }

    cout << maxi;

    return 0;
}