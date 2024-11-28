#include <iostream>
using namespace std;

int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    for(auto it : arr) cout << it << " ";
    cout << "\n";

    for(int i = 0; i <= n - 2; i++) {
        int mini = i;
        for(int j = i; j <= n - 1; j++) {
            if(arr[j] < arr[mini]) {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }

    cout << "After sorting: ";
    for(auto it : arr) cout << it << " ";

    return 0;
}