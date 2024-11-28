#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

/*
{1,2,3,2,4,3,1,2}
{-199,6,7,-199,3,5}
*/

/* 
brute force approach is -
1. sort the array first
2. create a 2d array with first row as distinct elements & second as their corresponding count
3. ??? do the same thing as how we copied the pair vector into ans vector
*/

int main() {
    map<int, int> mpp;
    int arr[] = {1,2,3,2,4,3,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++) mpp[arr[i]]++;

    vector<pair<int, int>> vec;

    map<int, int>::iterator it = mpp.begin();
    for(; it != mpp.end(); it++) {
        vec.push_back({it->first, it->second});
    }

    sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    });
    vector<int> ans;
    for(auto it : vec) {
        while(it.second--) ans.push_back(it.first);
    }

    for(auto it : ans) {
        cout << it << " ";
    }

    return 0;
}