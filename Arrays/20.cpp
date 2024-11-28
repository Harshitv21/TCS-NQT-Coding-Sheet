#include <iostream>
using namespace std;

/*
{1,2,3,4,5};
{1,2,1,1,5,1};
{1,2,3,4,5,6,7};
{3,7,8,9,10,11};
*/

/*
====================================================================================
We already solved for rotate array right by k elements in '8.cpp' kindly refer that.
this is the solution for rotate left by k elements.
====================================================================================
*/

void swap(int arr[], int start, int end) {
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // 3, 4, 5, 1, 2
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2; // rotate left by k elements
    k = k % n;

    /*
    1, 2, 3, 4, 5
    5, 4, 3, 2, 1 -> [5, 4, 3][2, 1]
    3, 4, 5, 1, 2

    another example
    1, 2, 3, 4, 5, 6, 7
    7, 6, 5, 4, 3, 2, 1 -> [7, 6, 5, 4, 3][2, 1]
    3, 4, 5, 6, 7, 1, 2
    */

    swap(arr, 0, n - 1); // first reverse whole array
    swap(arr, 0, n - k - 1); // reverse till n - k - 1 i.e., leaving only the last k elements all in this half
    swap(arr, n - k, n - 1); // reverse second half
    print(arr, n);

    return 0;
}