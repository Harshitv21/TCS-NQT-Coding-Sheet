#include <iostream>
using namespace std;

/*
{1,2,3,4,5};
{1,2,1,1,5,1};
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
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2; // rotate right by k elements
    k = k % n;

    swap(arr, 0, n - 1); // first reverse whole array
    swap(arr, 0, k - 1); // reverse first half, 0 -> till k - 1
    swap(arr, k, n - 1); // reverse second half, k + 1 -> n - 1
    print(arr, n);

    return 0;
}