#include <iostream>
#include <map>
using namespace std;

/*
{1,1,2,3,4,4,5,2};
{1,1,0};
*/

int main() {
    int arr[] = {1, 1, 2, 3, 4, 4, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    /*
    approach 1: sort + iterate
    approach 2: map + map iteration
    */

    map<int, int> mpp;
    map<int, int>::iterator it;

    for(int i = 0; i < n; i++) mpp[arr[i]]++;

    for(it = mpp.begin(); it != mpp.end(); it++) {
        if(it->second > 1) cout << it->first << " ";
    }

    return 0;
}