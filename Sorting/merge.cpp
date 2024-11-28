#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while(left <= mid && right <= high) {
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    // for leftovers
    while(left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high) {
        temp.push_back(arr[right]);
        right++;
    }
    // copy temp array into the original array
    for(int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

    return arr;
}

void mergeSort(vector<int>& arr, int low, int high) {
    if(low >= high) return;
    int mid = (low + high) / 2;
    
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    int n = arr.size();

    cout << "Before sorting: ";
    for(auto it : arr) cout << it << " ";
    cout << "\n";

    // low = 0, high = n - 1
    mergeSort(arr, 0, n - 1);

    cout << "After sorting: ";
    for(auto it : arr) cout << it << " ";

    return 0;
}