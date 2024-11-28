#include <iostream>
#include <map>
using namespace std;

/*
{10,5,10,15,10,5};
{2,2,3,4,4,2};
*/

int main() {
    int arr[] = {2, 2, 3, 4, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    map<int, int> mpp;
    map<int, int>::iterator it;

    for(int i = 0; i < n; i++) mpp[arr[i]]++;

    for(it = mpp.begin(); it != mpp.end(); it++) {
        cout << it->first << " " << it->second << "\n";
    }

    return 0;
}