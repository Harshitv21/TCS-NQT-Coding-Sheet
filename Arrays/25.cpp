#include <iostream>
#include <unordered_map>
using namespace std;

/*
Test cases - 
#1:
Input: 
int arr1[] = {1, 3, 4, 5, 2};
int arr2[] = {2, 4, 3, 1, 7, 5, 15};

Output: arr1[] is a subset of arr2[]

#2:
Input: 
int arr1[] = {1, 3, 4, 5, 2};
int arr2[] = {4, 5, 2};

Output: arr1[] is not a subset of arr2[]

#3:
Input: 
int arr1[] = {1, 3, 4, 5, 2};
int arr2[] = {11, 12, 13, 15, 16};

Output: arr1[] is not a subset of arr2[]
*/

bool hashing(int arr1[], int arr2[], int n, int m) {
    if(m < n) return false;
    
    unordered_map<int, bool> mpp;

    for(int i = 0; i < m; i++) mpp[arr2[i]] = true;

    for(int i = 0; i < n; i++) {
        if(mpp[arr1[i]] != true) return false; 
    }    

    return true;
}

int main() {
    int arr1[] = {1, 3, 4, 5, 2};
    int arr2[] = {11, 12, 13, 15, 16};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    cout << (hashing(arr1, arr2, n, m) ? "arr1[] is subset of arr2[]" : "arr1 is NOT a subset of arr2[]");

    return 0;
}