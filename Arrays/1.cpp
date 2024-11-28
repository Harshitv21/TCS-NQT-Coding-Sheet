#include <iostream>
using namespace std;

/*
{2,5,1,3,0};
{8,10,5,7,9};
*/

int main() {
    int mini = INT_MAX;
    int arr[] = {8, 10, 5, 7, 9};

    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++) {
        if(arr[i] < mini) {
            mini = arr[i];
        }
    }
    cout << mini;

    return 0;
}