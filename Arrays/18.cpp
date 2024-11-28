#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {20, 15, 26, 2, 98, 6};
    int size_arr = sizeof(arr) / sizeof(arr[0]);

    vector<int> dummy(size_arr, 0);

    for(int i = 0; i < size_arr; i++) dummy[i] = arr[i];
    sort(dummy.begin(), dummy.end());

    unordered_map<int, int> mpp;

    int temp = 1;
    for(auto it : dummy) {
        // unique elements
        if(mpp[it] == 0) {
            mpp[it] = temp;
            temp++;
        }
    }

    for(auto it : arr) {
        cout << mpp[it] << " ";
    }

    return 0;
}