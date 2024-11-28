#include <iostream>
using namespace std;

int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    for(auto it : arr) cout << it << " ";
    cout << "\n";

    for (int i = n - 1; i >= 1; i--) {
        bool isSwapped = false;
        for (int j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                isSwapped = true;
            }
        }
        if (!isSwapped) break;
    }

    cout << "After sorting: ";
    for(auto it : arr) cout << it << " ";

    return 0;
}