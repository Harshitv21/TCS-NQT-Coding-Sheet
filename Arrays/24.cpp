#include <iostream>
using namespace std;

/*
{1,2,3,4,5};   // sorted array
{6,7,9,5,3,10} // unsorted
*/

int linearSearch(int arr[], int n, int k) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == k) {
            return i;
        }
    }

    return -1;
}

int binarySearch(int arr[], int n, int k) {
    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == k) return mid;
        else if(arr[mid] > k) high = mid - 1;
        else low = mid + 1; 
    }

    return -1;
}

int main() {
    int arrSorted[] = {1,2,3,4,5};
    int n1 = sizeof(arrSorted) / sizeof(arrSorted[0]);

    int arrUnsorted[] = {6,7,9,5,3,10};
    int n2 = sizeof(arrUnsorted) / sizeof(arrUnsorted[0]);

    cout << "For sorted array: " << binarySearch(arrSorted, n1, 3) << "\n"; // expected output: 2
    cout << "For unsorted array: " << linearSearch(arrUnsorted, n2, 10);    // expected output: 5

    return 0;
}