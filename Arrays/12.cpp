#include <iostream>
#include <map>
using namespace std;

/*
{2,3,1,9,3,1,3,9};
{4,3,9,2,4,1,10,89,34};
*/

int main() {
    int arr[] = {4, 3, 9, 2, 4, 1, 10, 89, 34};
    int n = sizeof(arr) / sizeof(arr[0]);

    map<int, int> mpp;

    for(int i = 0; i < n; i++) mpp[arr[i]]++;

    for(auto it : mpp) {
        if(it.second == 1) cout << it.first << " ";
    }

    return 0;
}