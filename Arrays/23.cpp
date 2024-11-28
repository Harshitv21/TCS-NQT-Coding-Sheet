#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int arr1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
    int arr2[] = {2, 1, 8, 3};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    // output => {2, 2, 1, 1, 8, 8, 3, 5, 6, 7, 9};

    unordered_map<int, int> mpp;

    for(int i = 0; i < n; i++) mpp[arr1[i]]++;

    vector<int> res;
    for(int i = 0; i < m; i++) {
        int it = arr2[i];
        if(mpp.find(it) != mpp.end()) {
            while(mpp[it]--) res.push_back(it);
        } 
        mpp.erase(it);
    }

    vector<int> temp;
    for(auto it : mpp) temp.push_back(it.first);
    sort(temp.begin(), temp.end());

    for(auto it : temp) res.push_back(it);

    for(auto it : res) cout << it << " ";

    return 0;
}