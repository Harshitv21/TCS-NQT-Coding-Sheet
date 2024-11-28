#include <iostream>
using namespace std;

int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    for(auto it : arr) cout << it << " ";
    cout << "\n";

    int j;
    for(int i = 0; i <= n - 1; i++) {
        j = i;
        while(j > 0 && arr[j - 1] > arr[j]) {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }

    cout << "After sorting: ";
    for(auto it : arr) cout << it << " ";

    return 0;
}