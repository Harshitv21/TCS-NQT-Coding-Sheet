#include <iostream>
using namespace std;

/*
{2,5,1,3,0};
{8,10,5,7,9};
*/

int main() {
    int secondMin = INT_MAX, secondMax = INT_MIN;
    int mini = INT_MAX, maxi = INT_MIN;
    int arr[] = {8, 10, 5, 7, 9};

    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++) {
        if(arr[i] > maxi) {
            maxi = arr[i];
        }
        if(arr[i] < mini) {
            mini = arr[i];
        }
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] < maxi && arr[i] > secondMax) {
            secondMax = arr[i];
        }
        if(arr[i] > mini && arr[i] < secondMin) {
            secondMin = arr[i];
        }
    }
    // cout << mini << " " << maxi;
    cout << secondMin << " " << secondMax;

    return 0;
}