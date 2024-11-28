#include <iostream>
using namespace std;

/*
{2,5,1,3,0};
{8,10,5,7,9};
*/

int main() {
    int maxi = INT_MIN;
    int arr[] = {8, 10, 5, 7, 9};

    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++) {
        if(arr[i] > maxi) {
            maxi = arr[i];
        }
    }
    cout << maxi;

    return 0;
}