#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high) i++;
        while (arr[j] > pivot && j >= low) j--;
        
        if (i < j) std::swap(arr[i], arr[j]);
    }
    std::swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}

int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    for(auto it : arr) cout << it << " ";
    cout << "\n";

    // low = 0, high = n - 1
    quickSort(arr, 0, n - 1);

    cout << "After sorting: ";
    for(auto it : arr) cout << it << " ";

    return 0;
}