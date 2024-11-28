#include <iostream>
using namespace std;

/*
{1,2,3,4,5};
*/

void insertAtBeginning(int arr[], int n, int element) {
    for(int i = n - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = element;
}

void insertAtEnd(int arr[], int n, int element) {
    arr[n] = element;
}

void insertAtPosition(int arr[], int n, int position, int element) {
    for(int i = n - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position] = element;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    /* insert at beginning - 6 */
    // insertAtBeginning(arr, n, 6);
    // for(int i = 0; i <= n; i++) cout << arr[i] << " ";

    /* insert at end - 9 */
    // insertAtEnd(arr, n, 9);
    // for(int i = 0; i <= n; i++) cout << arr[i] << " ";

    /* insert at position - 2 (pos), 13 (element) */
    insertAtPosition(arr, n, 2, 13);
    for(int i = 0; i <= n; i++) cout << arr[i] << " ";

    return 0;
}